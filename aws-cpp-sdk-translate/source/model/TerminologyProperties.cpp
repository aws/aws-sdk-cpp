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
    m_lastUpdatedAtHasBeenSet(false),
    m_directionality(Directionality::NOT_SET),
    m_directionalityHasBeenSet(false),
    m_messageHasBeenSet(false),
    m_skippedTermCount(0),
    m_skippedTermCountHasBeenSet(false),
    m_format(TerminologyDataFormat::NOT_SET),
    m_formatHasBeenSet(false)
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
    m_lastUpdatedAtHasBeenSet(false),
    m_directionality(Directionality::NOT_SET),
    m_directionalityHasBeenSet(false),
    m_messageHasBeenSet(false),
    m_skippedTermCount(0),
    m_skippedTermCountHasBeenSet(false),
    m_format(TerminologyDataFormat::NOT_SET),
    m_formatHasBeenSet(false)
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
    Aws::Utils::Array<JsonView> targetLanguageCodesJsonList = jsonValue.GetArray("TargetLanguageCodes");
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

  if(jsonValue.ValueExists("Directionality"))
  {
    m_directionality = DirectionalityMapper::GetDirectionalityForName(jsonValue.GetString("Directionality"));

    m_directionalityHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Message"))
  {
    m_message = jsonValue.GetString("Message");

    m_messageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SkippedTermCount"))
  {
    m_skippedTermCount = jsonValue.GetInteger("SkippedTermCount");

    m_skippedTermCountHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Format"))
  {
    m_format = TerminologyDataFormatMapper::GetTerminologyDataFormatForName(jsonValue.GetString("Format"));

    m_formatHasBeenSet = true;
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
   Aws::Utils::Array<JsonValue> targetLanguageCodesJsonList(m_targetLanguageCodes.size());
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

  if(m_directionalityHasBeenSet)
  {
   payload.WithString("Directionality", DirectionalityMapper::GetNameForDirectionality(m_directionality));
  }

  if(m_messageHasBeenSet)
  {
   payload.WithString("Message", m_message);

  }

  if(m_skippedTermCountHasBeenSet)
  {
   payload.WithInteger("SkippedTermCount", m_skippedTermCount);

  }

  if(m_formatHasBeenSet)
  {
   payload.WithString("Format", TerminologyDataFormatMapper::GetNameForTerminologyDataFormat(m_format));
  }

  return payload;
}

} // namespace Model
} // namespace Translate
} // namespace Aws
