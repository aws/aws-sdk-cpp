/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/inspector2/model/EcrContainerImageMetadata.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Inspector2
{
namespace Model
{

EcrContainerImageMetadata::EcrContainerImageMetadata(JsonView jsonValue)
{
  *this = jsonValue;
}

EcrContainerImageMetadata& EcrContainerImageMetadata::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("tags"))
  {
    Aws::Utils::Array<JsonView> tagsJsonList = jsonValue.GetArray("tags");
    for(unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex)
    {
      m_tags.push_back(tagsJsonList[tagsIndex].AsString());
    }
    m_tagsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("imagePulledAt"))
  {
    m_imagePulledAt = jsonValue.GetDouble("imagePulledAt");
    m_imagePulledAtHasBeenSet = true;
  }
  if(jsonValue.ValueExists("lastInUseAt"))
  {
    m_lastInUseAt = jsonValue.GetDouble("lastInUseAt");
    m_lastInUseAtHasBeenSet = true;
  }
  if(jsonValue.ValueExists("inUseCount"))
  {
    m_inUseCount = jsonValue.GetInt64("inUseCount");
    m_inUseCountHasBeenSet = true;
  }
  return *this;
}

JsonValue EcrContainerImageMetadata::Jsonize() const
{
  JsonValue payload;

  if(m_tagsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> tagsJsonList(m_tags.size());
   for(unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex)
   {
     tagsJsonList[tagsIndex].AsString(m_tags[tagsIndex]);
   }
   payload.WithArray("tags", std::move(tagsJsonList));

  }

  if(m_imagePulledAtHasBeenSet)
  {
   payload.WithDouble("imagePulledAt", m_imagePulledAt.SecondsWithMSPrecision());
  }

  if(m_lastInUseAtHasBeenSet)
  {
   payload.WithDouble("lastInUseAt", m_lastInUseAt.SecondsWithMSPrecision());
  }

  if(m_inUseCountHasBeenSet)
  {
   payload.WithInt64("inUseCount", m_inUseCount);

  }

  return payload;
}

} // namespace Model
} // namespace Inspector2
} // namespace Aws
