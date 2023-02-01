/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/macie2/model/ClassificationResult.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Macie2
{
namespace Model
{

ClassificationResult::ClassificationResult() : 
    m_additionalOccurrences(false),
    m_additionalOccurrencesHasBeenSet(false),
    m_customDataIdentifiersHasBeenSet(false),
    m_mimeTypeHasBeenSet(false),
    m_sensitiveDataHasBeenSet(false),
    m_sizeClassified(0),
    m_sizeClassifiedHasBeenSet(false),
    m_statusHasBeenSet(false)
{
}

ClassificationResult::ClassificationResult(JsonView jsonValue) : 
    m_additionalOccurrences(false),
    m_additionalOccurrencesHasBeenSet(false),
    m_customDataIdentifiersHasBeenSet(false),
    m_mimeTypeHasBeenSet(false),
    m_sensitiveDataHasBeenSet(false),
    m_sizeClassified(0),
    m_sizeClassifiedHasBeenSet(false),
    m_statusHasBeenSet(false)
{
  *this = jsonValue;
}

ClassificationResult& ClassificationResult::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("additionalOccurrences"))
  {
    m_additionalOccurrences = jsonValue.GetBool("additionalOccurrences");

    m_additionalOccurrencesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("customDataIdentifiers"))
  {
    m_customDataIdentifiers = jsonValue.GetObject("customDataIdentifiers");

    m_customDataIdentifiersHasBeenSet = true;
  }

  if(jsonValue.ValueExists("mimeType"))
  {
    m_mimeType = jsonValue.GetString("mimeType");

    m_mimeTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("sensitiveData"))
  {
    Aws::Utils::Array<JsonView> sensitiveDataJsonList = jsonValue.GetArray("sensitiveData");
    for(unsigned sensitiveDataIndex = 0; sensitiveDataIndex < sensitiveDataJsonList.GetLength(); ++sensitiveDataIndex)
    {
      m_sensitiveData.push_back(sensitiveDataJsonList[sensitiveDataIndex].AsObject());
    }
    m_sensitiveDataHasBeenSet = true;
  }

  if(jsonValue.ValueExists("sizeClassified"))
  {
    m_sizeClassified = jsonValue.GetInt64("sizeClassified");

    m_sizeClassifiedHasBeenSet = true;
  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = jsonValue.GetObject("status");

    m_statusHasBeenSet = true;
  }

  return *this;
}

JsonValue ClassificationResult::Jsonize() const
{
  JsonValue payload;

  if(m_additionalOccurrencesHasBeenSet)
  {
   payload.WithBool("additionalOccurrences", m_additionalOccurrences);

  }

  if(m_customDataIdentifiersHasBeenSet)
  {
   payload.WithObject("customDataIdentifiers", m_customDataIdentifiers.Jsonize());

  }

  if(m_mimeTypeHasBeenSet)
  {
   payload.WithString("mimeType", m_mimeType);

  }

  if(m_sensitiveDataHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> sensitiveDataJsonList(m_sensitiveData.size());
   for(unsigned sensitiveDataIndex = 0; sensitiveDataIndex < sensitiveDataJsonList.GetLength(); ++sensitiveDataIndex)
   {
     sensitiveDataJsonList[sensitiveDataIndex].AsObject(m_sensitiveData[sensitiveDataIndex].Jsonize());
   }
   payload.WithArray("sensitiveData", std::move(sensitiveDataJsonList));

  }

  if(m_sizeClassifiedHasBeenSet)
  {
   payload.WithInt64("sizeClassified", m_sizeClassified);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithObject("status", m_status.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Macie2
} // namespace Aws
