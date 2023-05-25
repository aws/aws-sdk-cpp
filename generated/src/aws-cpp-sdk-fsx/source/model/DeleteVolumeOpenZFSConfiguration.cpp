/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/fsx/model/DeleteVolumeOpenZFSConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace FSx
{
namespace Model
{

DeleteVolumeOpenZFSConfiguration::DeleteVolumeOpenZFSConfiguration() : 
    m_optionsHasBeenSet(false)
{
}

DeleteVolumeOpenZFSConfiguration::DeleteVolumeOpenZFSConfiguration(JsonView jsonValue) : 
    m_optionsHasBeenSet(false)
{
  *this = jsonValue;
}

DeleteVolumeOpenZFSConfiguration& DeleteVolumeOpenZFSConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Options"))
  {
    Aws::Utils::Array<JsonView> optionsJsonList = jsonValue.GetArray("Options");
    for(unsigned optionsIndex = 0; optionsIndex < optionsJsonList.GetLength(); ++optionsIndex)
    {
      m_options.push_back(DeleteOpenZFSVolumeOptionMapper::GetDeleteOpenZFSVolumeOptionForName(optionsJsonList[optionsIndex].AsString()));
    }
    m_optionsHasBeenSet = true;
  }

  return *this;
}

JsonValue DeleteVolumeOpenZFSConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_optionsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> optionsJsonList(m_options.size());
   for(unsigned optionsIndex = 0; optionsIndex < optionsJsonList.GetLength(); ++optionsIndex)
   {
     optionsJsonList[optionsIndex].AsString(DeleteOpenZFSVolumeOptionMapper::GetNameForDeleteOpenZFSVolumeOption(m_options[optionsIndex]));
   }
   payload.WithArray("Options", std::move(optionsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace FSx
} // namespace Aws
