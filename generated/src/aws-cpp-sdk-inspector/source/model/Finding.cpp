/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/inspector/model/Finding.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Inspector
{
namespace Model
{

Finding::Finding() : 
    m_arnHasBeenSet(false),
    m_schemaVersion(0),
    m_schemaVersionHasBeenSet(false),
    m_serviceHasBeenSet(false),
    m_serviceAttributesHasBeenSet(false),
    m_assetType(AssetType::NOT_SET),
    m_assetTypeHasBeenSet(false),
    m_assetAttributesHasBeenSet(false),
    m_idHasBeenSet(false),
    m_titleHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_recommendationHasBeenSet(false),
    m_severity(Severity::NOT_SET),
    m_severityHasBeenSet(false),
    m_numericSeverity(0.0),
    m_numericSeverityHasBeenSet(false),
    m_confidence(0),
    m_confidenceHasBeenSet(false),
    m_indicatorOfCompromise(false),
    m_indicatorOfCompromiseHasBeenSet(false),
    m_attributesHasBeenSet(false),
    m_userAttributesHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_updatedAtHasBeenSet(false)
{
}

Finding::Finding(JsonView jsonValue) : 
    m_arnHasBeenSet(false),
    m_schemaVersion(0),
    m_schemaVersionHasBeenSet(false),
    m_serviceHasBeenSet(false),
    m_serviceAttributesHasBeenSet(false),
    m_assetType(AssetType::NOT_SET),
    m_assetTypeHasBeenSet(false),
    m_assetAttributesHasBeenSet(false),
    m_idHasBeenSet(false),
    m_titleHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_recommendationHasBeenSet(false),
    m_severity(Severity::NOT_SET),
    m_severityHasBeenSet(false),
    m_numericSeverity(0.0),
    m_numericSeverityHasBeenSet(false),
    m_confidence(0),
    m_confidenceHasBeenSet(false),
    m_indicatorOfCompromise(false),
    m_indicatorOfCompromiseHasBeenSet(false),
    m_attributesHasBeenSet(false),
    m_userAttributesHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_updatedAtHasBeenSet(false)
{
  *this = jsonValue;
}

Finding& Finding::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("arn"))
  {
    m_arn = jsonValue.GetString("arn");

    m_arnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("schemaVersion"))
  {
    m_schemaVersion = jsonValue.GetInteger("schemaVersion");

    m_schemaVersionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("service"))
  {
    m_service = jsonValue.GetString("service");

    m_serviceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("serviceAttributes"))
  {
    m_serviceAttributes = jsonValue.GetObject("serviceAttributes");

    m_serviceAttributesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("assetType"))
  {
    m_assetType = AssetTypeMapper::GetAssetTypeForName(jsonValue.GetString("assetType"));

    m_assetTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("assetAttributes"))
  {
    m_assetAttributes = jsonValue.GetObject("assetAttributes");

    m_assetAttributesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("id"))
  {
    m_id = jsonValue.GetString("id");

    m_idHasBeenSet = true;
  }

  if(jsonValue.ValueExists("title"))
  {
    m_title = jsonValue.GetString("title");

    m_titleHasBeenSet = true;
  }

  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");

    m_descriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("recommendation"))
  {
    m_recommendation = jsonValue.GetString("recommendation");

    m_recommendationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("severity"))
  {
    m_severity = SeverityMapper::GetSeverityForName(jsonValue.GetString("severity"));

    m_severityHasBeenSet = true;
  }

  if(jsonValue.ValueExists("numericSeverity"))
  {
    m_numericSeverity = jsonValue.GetDouble("numericSeverity");

    m_numericSeverityHasBeenSet = true;
  }

  if(jsonValue.ValueExists("confidence"))
  {
    m_confidence = jsonValue.GetInteger("confidence");

    m_confidenceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("indicatorOfCompromise"))
  {
    m_indicatorOfCompromise = jsonValue.GetBool("indicatorOfCompromise");

    m_indicatorOfCompromiseHasBeenSet = true;
  }

  if(jsonValue.ValueExists("attributes"))
  {
    Aws::Utils::Array<JsonView> attributesJsonList = jsonValue.GetArray("attributes");
    for(unsigned attributesIndex = 0; attributesIndex < attributesJsonList.GetLength(); ++attributesIndex)
    {
      m_attributes.push_back(attributesJsonList[attributesIndex].AsObject());
    }
    m_attributesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("userAttributes"))
  {
    Aws::Utils::Array<JsonView> userAttributesJsonList = jsonValue.GetArray("userAttributes");
    for(unsigned userAttributesIndex = 0; userAttributesIndex < userAttributesJsonList.GetLength(); ++userAttributesIndex)
    {
      m_userAttributes.push_back(userAttributesJsonList[userAttributesIndex].AsObject());
    }
    m_userAttributesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("createdAt"))
  {
    m_createdAt = jsonValue.GetDouble("createdAt");

    m_createdAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("updatedAt"))
  {
    m_updatedAt = jsonValue.GetDouble("updatedAt");

    m_updatedAtHasBeenSet = true;
  }

  return *this;
}

JsonValue Finding::Jsonize() const
{
  JsonValue payload;

  if(m_arnHasBeenSet)
  {
   payload.WithString("arn", m_arn);

  }

  if(m_schemaVersionHasBeenSet)
  {
   payload.WithInteger("schemaVersion", m_schemaVersion);

  }

  if(m_serviceHasBeenSet)
  {
   payload.WithString("service", m_service);

  }

  if(m_serviceAttributesHasBeenSet)
  {
   payload.WithObject("serviceAttributes", m_serviceAttributes.Jsonize());

  }

  if(m_assetTypeHasBeenSet)
  {
   payload.WithString("assetType", AssetTypeMapper::GetNameForAssetType(m_assetType));
  }

  if(m_assetAttributesHasBeenSet)
  {
   payload.WithObject("assetAttributes", m_assetAttributes.Jsonize());

  }

  if(m_idHasBeenSet)
  {
   payload.WithString("id", m_id);

  }

  if(m_titleHasBeenSet)
  {
   payload.WithString("title", m_title);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_recommendationHasBeenSet)
  {
   payload.WithString("recommendation", m_recommendation);

  }

  if(m_severityHasBeenSet)
  {
   payload.WithString("severity", SeverityMapper::GetNameForSeverity(m_severity));
  }

  if(m_numericSeverityHasBeenSet)
  {
   payload.WithDouble("numericSeverity", m_numericSeverity);

  }

  if(m_confidenceHasBeenSet)
  {
   payload.WithInteger("confidence", m_confidence);

  }

  if(m_indicatorOfCompromiseHasBeenSet)
  {
   payload.WithBool("indicatorOfCompromise", m_indicatorOfCompromise);

  }

  if(m_attributesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> attributesJsonList(m_attributes.size());
   for(unsigned attributesIndex = 0; attributesIndex < attributesJsonList.GetLength(); ++attributesIndex)
   {
     attributesJsonList[attributesIndex].AsObject(m_attributes[attributesIndex].Jsonize());
   }
   payload.WithArray("attributes", std::move(attributesJsonList));

  }

  if(m_userAttributesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> userAttributesJsonList(m_userAttributes.size());
   for(unsigned userAttributesIndex = 0; userAttributesIndex < userAttributesJsonList.GetLength(); ++userAttributesIndex)
   {
     userAttributesJsonList[userAttributesIndex].AsObject(m_userAttributes[userAttributesIndex].Jsonize());
   }
   payload.WithArray("userAttributes", std::move(userAttributesJsonList));

  }

  if(m_createdAtHasBeenSet)
  {
   payload.WithDouble("createdAt", m_createdAt.SecondsWithMSPrecision());
  }

  if(m_updatedAtHasBeenSet)
  {
   payload.WithDouble("updatedAt", m_updatedAt.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace Inspector
} // namespace Aws
