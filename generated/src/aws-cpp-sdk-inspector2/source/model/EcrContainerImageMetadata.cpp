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

EcrContainerImageMetadata::EcrContainerImageMetadata() : 
    m_tagsHasBeenSet(false)
{
}

EcrContainerImageMetadata::EcrContainerImageMetadata(JsonView jsonValue) : 
    m_tagsHasBeenSet(false)
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

  return payload;
}

} // namespace Model
} // namespace Inspector2
} // namespace Aws
