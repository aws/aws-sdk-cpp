/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/translate/model/TerminologyProperties.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Translate
{
namespace Model
{

TerminologyProperties::TerminologyProperties() : 
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_arnHasBeenSet(false),
    m_sourceLanguageCodeHasBeenSet(false),
    m_targetLanguageCodesHasBeenSet(false),
    m_encryptionKeyHasBeenSet(false),
    m_sizeBytes(0),
    m_sizeBytesHasBeenSet(false),
    m_termCount(0),
    m_termCountHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_lastUpdatedAtHasBeenSet(false)
{
}

TerminologyProperties::TerminologyProperties(JsonView jsonValue) : 
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_arnHasBeenSet(false),
    m_sourceLanguageCodeHasBeenSet(false),
    m_targetLanguageCodesHasBeenSet(false),
    m_encryptionKeyHasBeenSet(false),
    m_sizeBytes(0),
    m_sizeBytesHasBeenSet(false),
    m_termCount(0),
    m_termCountHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_lastUpdatedAtHasBeenSet(false)
{
  *this = jsonValue;
}

TerminologyProperties& TerminologyProperties::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Description"))
  {
    m_description = jsonValue.GetString("Description");

    m_descriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Arn"))
  {
    m_arn = jsonValue.GetString("Arn");

    m_arnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SourceLanguageCode"))
  {
    m_sourceLanguageCode = jsonValue.GetString("SourceLanguageCode");

    m_sourceLanguageCodeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TargetLanguageCodes"))
  {
    Array<JsonView> targetLanguageCodesJsonList = jsonValue.GetArray("TargetLanguageCodes");
    for(unsigned targetLanguageCodesIndex = 0; targetLanguageCodesIndex < targetLanguageCodesJsonList.GetLength(); ++targetLanguageCodesIndex)
    {
      m_targetLanguageCodes.push_back(targetLanguageCodesJsonList[targetLanguageCodesIndex].AsString());
    }
    m_targetLanguageCodesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EncryptionKey"))
  {
    m_encryptionKey = jsonValue.GetObject("EncryptionKey");

    m_encryptionKeyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SizeBytes"))
  {
    m_sizeBytes = jsonValue.GetInteger("SizeBytes");

    m_sizeBytesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TermCount"))
  {
    m_termCount = jsonValue.GetInteger("TermCount");

    m_termCountHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreatedAt"))
  {
    m_createdAt = jsonValue.GetDouble("CreatedAt");

    m_createdAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LastUpdatedAt"))
  {
    m_lastUpdatedAt = jsonValue.GetDouble("LastUpdatedAt");

    m_lastUpdatedAtHasBeenSet = true;
  }

  return *this;
}

JsonValue TerminologyProperties::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_arnHasBeenSet)
  {
   payload.WithString("Arn", m_arn);

  }

  if(m_sourceLanguageCodeHasBeenSet)
  {
   payload.WithString("SourceLanguageCode", m_sourceLanguageCode);

  }

  if(m_targetLanguageCodesHasBeenSet)
  {
   Array<JsonValue> targetLanguageCodesJsonList(m_targetLanguageCodes.size());
   for(unsigned targetLanguageCodesIndex = 0; targetLanguageCodesIndex < targetLanguageCodesJsonList.GetLength(); ++targetLanguageCodesIndex)
   {
     targetLanguageCodesJsonList[targetLanguageCodesIndex].AsString(m_targetLanguageCodes[targetLanguageCodesIndex]);
   }
   payload.WithArray("TargetLanguageCodes", std::move(targetLanguageCodesJsonList));

  }

  if(m_encryptionKeyHasBeenSet)
  {
   payload.WithObject("EncryptionKey", m_encryptionKey.Jsonize());

  }

  if(m_sizeBytesHasBeenSet)
  {
   payload.WithInteger("SizeBytes", m_sizeBytes);

  }

  if(m_termCountHasBeenSet)
  {
   payload.WithInteger("TermCount", m_termCount);

  }

  if(m_createdAtHasBeenSet)
  {
   payload.WithDouble("CreatedAt", m_createdAt.SecondsWithMSPrecision());
  }

  if(m_lastUpdatedAtHasBeenSet)
  {
   payload.WithDouble("LastUpdatedAt", m_lastUpdatedAt.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace Translate
} // namespace Aws
