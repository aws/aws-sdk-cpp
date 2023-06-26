/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dlm/model/Parameters.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DLM
{
namespace Model
{

Parameters::Parameters() : 
    m_excludeBootVolume(false),
    m_excludeBootVolumeHasBeenSet(false),
    m_noReboot(false),
    m_noRebootHasBeenSet(false),
    m_excludeDataVolumeTagsHasBeenSet(false)
{
}

Parameters::Parameters(JsonView jsonValue) : 
    m_excludeBootVolume(false),
    m_excludeBootVolumeHasBeenSet(false),
    m_noReboot(false),
    m_noRebootHasBeenSet(false),
    m_excludeDataVolumeTagsHasBeenSet(false)
{
  *this = jsonValue;
}

Parameters& Parameters::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ExcludeBootVolume"))
  {
    m_excludeBootVolume = jsonValue.GetBool("ExcludeBootVolume");

    m_excludeBootVolumeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("NoReboot"))
  {
    m_noReboot = jsonValue.GetBool("NoReboot");

    m_noRebootHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ExcludeDataVolumeTags"))
  {
    Aws::Utils::Array<JsonView> excludeDataVolumeTagsJsonList = jsonValue.GetArray("ExcludeDataVolumeTags");
    for(unsigned excludeDataVolumeTagsIndex = 0; excludeDataVolumeTagsIndex < excludeDataVolumeTagsJsonList.GetLength(); ++excludeDataVolumeTagsIndex)
    {
      m_excludeDataVolumeTags.push_back(excludeDataVolumeTagsJsonList[excludeDataVolumeTagsIndex].AsObject());
    }
    m_excludeDataVolumeTagsHasBeenSet = true;
  }

  return *this;
}

JsonValue Parameters::Jsonize() const
{
  JsonValue payload;

  if(m_excludeBootVolumeHasBeenSet)
  {
   payload.WithBool("ExcludeBootVolume", m_excludeBootVolume);

  }

  if(m_noRebootHasBeenSet)
  {
   payload.WithBool("NoReboot", m_noReboot);

  }

  if(m_excludeDataVolumeTagsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> excludeDataVolumeTagsJsonList(m_excludeDataVolumeTags.size());
   for(unsigned excludeDataVolumeTagsIndex = 0; excludeDataVolumeTagsIndex < excludeDataVolumeTagsJsonList.GetLength(); ++excludeDataVolumeTagsIndex)
   {
     excludeDataVolumeTagsJsonList[excludeDataVolumeTagsIndex].AsObject(m_excludeDataVolumeTags[excludeDataVolumeTagsIndex].Jsonize());
   }
   payload.WithArray("ExcludeDataVolumeTags", std::move(excludeDataVolumeTagsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace DLM
} // namespace Aws
