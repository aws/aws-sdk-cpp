/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/ClassificationResult.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SecurityHub
{
namespace Model
{

ClassificationResult::ClassificationResult() : 
    m_mimeTypeHasBeenSet(false),
    m_sizeClassified(0),
    m_sizeClassifiedHasBeenSet(false),
    m_additionalOccurrences(false),
    m_additionalOccurrencesHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_sensitiveDataHasBeenSet(false),
    m_customDataIdentifiersHasBeenSet(false)
{
}

ClassificationResult::ClassificationResult(JsonView jsonValue) : 
    m_mimeTypeHasBeenSet(false),
    m_sizeClassified(0),
    m_sizeClassifiedHasBeenSet(false),
    m_additionalOccurrences(false),
    m_additionalOccurrencesHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_sensitiveDataHasBeenSet(false),
    m_customDataIdentifiersHasBeenSet(false)
{
  *this = jsonValue;
}

ClassificationResult& ClassificationResult::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("MimeType"))
  {
    m_mimeType = jsonValue.GetString("MimeType");

    m_mimeTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SizeClassified"))
  {
    m_sizeClassified = jsonValue.GetInt64("SizeClassified");

    m_sizeClassifiedHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AdditionalOccurrences"))
  {
    m_additionalOccurrences = jsonValue.GetBool("AdditionalOccurrences");

    m_additionalOccurrencesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = jsonValue.GetObject("Status");

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SensitiveData"))
  {
    Aws::Utils::Array<JsonView> sensitiveDataJsonList = jsonValue.GetArray("SensitiveData");
    for(unsigned sensitiveDataIndex = 0; sensitiveDataIndex < sensitiveDataJsonList.GetLength(); ++sensitiveDataIndex)
    {
      m_sensitiveData.push_back(sensitiveDataJsonList[sensitiveDataIndex].AsObject());
    }
    m_sensitiveDataHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CustomDataIdentifiers"))
  {
    m_customDataIdentifiers = jsonValue.GetObject("CustomDataIdentifiers");

    m_customDataIdentifiersHasBeenSet = true;
  }

  return *this;
}

JsonValue ClassificationResult::Jsonize() const
{
  JsonValue payload;

  if(m_mimeTypeHasBeenSet)
  {
   payload.WithString("MimeType", m_mimeType);

  }

  if(m_sizeClassifiedHasBeenSet)
  {
   payload.WithInt64("SizeClassified", m_sizeClassified);

  }

  if(m_additionalOccurrencesHasBeenSet)
  {
   payload.WithBool("AdditionalOccurrences", m_additionalOccurrences);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithObject("Status", m_status.Jsonize());

  }

  if(m_sensitiveDataHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> sensitiveDataJsonList(m_sensitiveData.size());
   for(unsigned sensitiveDataIndex = 0; sensitiveDataIndex < sensitiveDataJsonList.GetLength(); ++sensitiveDataIndex)
   {
     sensitiveDataJsonList[sensitiveDataIndex].AsObject(m_sensitiveData[sensitiveDataIndex].Jsonize());
   }
   payload.WithArray("SensitiveData", std::move(sensitiveDataJsonList));

  }

  if(m_customDataIdentifiersHasBeenSet)
  {
   payload.WithObject("CustomDataIdentifiers", m_customDataIdentifiers.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
