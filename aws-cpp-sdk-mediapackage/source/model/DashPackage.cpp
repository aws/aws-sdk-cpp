/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#include <aws/mediapackage/model/DashPackage.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MediaPackage
{
namespace Model
{

DashPackage::DashPackage() : 
    m_adTriggersHasBeenSet(false),
    m_adsOnDeliveryRestrictions(AdsOnDeliveryRestrictions::NOT_SET),
    m_adsOnDeliveryRestrictionsHasBeenSet(false),
    m_encryptionHasBeenSet(false),
    m_manifestLayout(ManifestLayout::NOT_SET),
    m_manifestLayoutHasBeenSet(false),
    m_manifestWindowSeconds(0),
    m_manifestWindowSecondsHasBeenSet(false),
    m_minBufferTimeSeconds(0),
    m_minBufferTimeSecondsHasBeenSet(false),
    m_minUpdatePeriodSeconds(0),
    m_minUpdatePeriodSecondsHasBeenSet(false),
    m_periodTriggersHasBeenSet(false),
    m_profile(Profile::NOT_SET),
    m_profileHasBeenSet(false),
    m_segmentDurationSeconds(0),
    m_segmentDurationSecondsHasBeenSet(false),
    m_segmentTemplateFormat(SegmentTemplateFormat::NOT_SET),
    m_segmentTemplateFormatHasBeenSet(false),
    m_streamSelectionHasBeenSet(false),
    m_suggestedPresentationDelaySeconds(0),
    m_suggestedPresentationDelaySecondsHasBeenSet(false)
{
}

DashPackage::DashPackage(JsonView jsonValue) : 
    m_adTriggersHasBeenSet(false),
    m_adsOnDeliveryRestrictions(AdsOnDeliveryRestrictions::NOT_SET),
    m_adsOnDeliveryRestrictionsHasBeenSet(false),
    m_encryptionHasBeenSet(false),
    m_manifestLayout(ManifestLayout::NOT_SET),
    m_manifestLayoutHasBeenSet(false),
    m_manifestWindowSeconds(0),
    m_manifestWindowSecondsHasBeenSet(false),
    m_minBufferTimeSeconds(0),
    m_minBufferTimeSecondsHasBeenSet(false),
    m_minUpdatePeriodSeconds(0),
    m_minUpdatePeriodSecondsHasBeenSet(false),
    m_periodTriggersHasBeenSet(false),
    m_profile(Profile::NOT_SET),
    m_profileHasBeenSet(false),
    m_segmentDurationSeconds(0),
    m_segmentDurationSecondsHasBeenSet(false),
    m_segmentTemplateFormat(SegmentTemplateFormat::NOT_SET),
    m_segmentTemplateFormatHasBeenSet(false),
    m_streamSelectionHasBeenSet(false),
    m_suggestedPresentationDelaySeconds(0),
    m_suggestedPresentationDelaySecondsHasBeenSet(false)
{
  *this = jsonValue;
}

DashPackage& DashPackage::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("adTriggers"))
  {
    Array<JsonView> adTriggersJsonList = jsonValue.GetArray("adTriggers");
    for(unsigned adTriggersIndex = 0; adTriggersIndex < adTriggersJsonList.GetLength(); ++adTriggersIndex)
    {
      m_adTriggers.push_back(__AdTriggersElementMapper::Get__AdTriggersElementForName(adTriggersJsonList[adTriggersIndex].AsString()));
    }
    m_adTriggersHasBeenSet = true;
  }

  if(jsonValue.ValueExists("adsOnDeliveryRestrictions"))
  {
    m_adsOnDeliveryRestrictions = AdsOnDeliveryRestrictionsMapper::GetAdsOnDeliveryRestrictionsForName(jsonValue.GetString("adsOnDeliveryRestrictions"));

    m_adsOnDeliveryRestrictionsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("encryption"))
  {
    m_encryption = jsonValue.GetObject("encryption");

    m_encryptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("manifestLayout"))
  {
    m_manifestLayout = ManifestLayoutMapper::GetManifestLayoutForName(jsonValue.GetString("manifestLayout"));

    m_manifestLayoutHasBeenSet = true;
  }

  if(jsonValue.ValueExists("manifestWindowSeconds"))
  {
    m_manifestWindowSeconds = jsonValue.GetInteger("manifestWindowSeconds");

    m_manifestWindowSecondsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("minBufferTimeSeconds"))
  {
    m_minBufferTimeSeconds = jsonValue.GetInteger("minBufferTimeSeconds");

    m_minBufferTimeSecondsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("minUpdatePeriodSeconds"))
  {
    m_minUpdatePeriodSeconds = jsonValue.GetInteger("minUpdatePeriodSeconds");

    m_minUpdatePeriodSecondsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("periodTriggers"))
  {
    Array<JsonView> periodTriggersJsonList = jsonValue.GetArray("periodTriggers");
    for(unsigned periodTriggersIndex = 0; periodTriggersIndex < periodTriggersJsonList.GetLength(); ++periodTriggersIndex)
    {
      m_periodTriggers.push_back(__PeriodTriggersElementMapper::Get__PeriodTriggersElementForName(periodTriggersJsonList[periodTriggersIndex].AsString()));
    }
    m_periodTriggersHasBeenSet = true;
  }

  if(jsonValue.ValueExists("profile"))
  {
    m_profile = ProfileMapper::GetProfileForName(jsonValue.GetString("profile"));

    m_profileHasBeenSet = true;
  }

  if(jsonValue.ValueExists("segmentDurationSeconds"))
  {
    m_segmentDurationSeconds = jsonValue.GetInteger("segmentDurationSeconds");

    m_segmentDurationSecondsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("segmentTemplateFormat"))
  {
    m_segmentTemplateFormat = SegmentTemplateFormatMapper::GetSegmentTemplateFormatForName(jsonValue.GetString("segmentTemplateFormat"));

    m_segmentTemplateFormatHasBeenSet = true;
  }

  if(jsonValue.ValueExists("streamSelection"))
  {
    m_streamSelection = jsonValue.GetObject("streamSelection");

    m_streamSelectionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("suggestedPresentationDelaySeconds"))
  {
    m_suggestedPresentationDelaySeconds = jsonValue.GetInteger("suggestedPresentationDelaySeconds");

    m_suggestedPresentationDelaySecondsHasBeenSet = true;
  }

  return *this;
}

JsonValue DashPackage::Jsonize() const
{
  JsonValue payload;

  if(m_adTriggersHasBeenSet)
  {
   Array<JsonValue> adTriggersJsonList(m_adTriggers.size());
   for(unsigned adTriggersIndex = 0; adTriggersIndex < adTriggersJsonList.GetLength(); ++adTriggersIndex)
   {
     adTriggersJsonList[adTriggersIndex].AsString(__AdTriggersElementMapper::GetNameFor__AdTriggersElement(m_adTriggers[adTriggersIndex]));
   }
   payload.WithArray("adTriggers", std::move(adTriggersJsonList));

  }

  if(m_adsOnDeliveryRestrictionsHasBeenSet)
  {
   payload.WithString("adsOnDeliveryRestrictions", AdsOnDeliveryRestrictionsMapper::GetNameForAdsOnDeliveryRestrictions(m_adsOnDeliveryRestrictions));
  }

  if(m_encryptionHasBeenSet)
  {
   payload.WithObject("encryption", m_encryption.Jsonize());

  }

  if(m_manifestLayoutHasBeenSet)
  {
   payload.WithString("manifestLayout", ManifestLayoutMapper::GetNameForManifestLayout(m_manifestLayout));
  }

  if(m_manifestWindowSecondsHasBeenSet)
  {
   payload.WithInteger("manifestWindowSeconds", m_manifestWindowSeconds);

  }

  if(m_minBufferTimeSecondsHasBeenSet)
  {
   payload.WithInteger("minBufferTimeSeconds", m_minBufferTimeSeconds);

  }

  if(m_minUpdatePeriodSecondsHasBeenSet)
  {
   payload.WithInteger("minUpdatePeriodSeconds", m_minUpdatePeriodSeconds);

  }

  if(m_periodTriggersHasBeenSet)
  {
   Array<JsonValue> periodTriggersJsonList(m_periodTriggers.size());
   for(unsigned periodTriggersIndex = 0; periodTriggersIndex < periodTriggersJsonList.GetLength(); ++periodTriggersIndex)
   {
     periodTriggersJsonList[periodTriggersIndex].AsString(__PeriodTriggersElementMapper::GetNameFor__PeriodTriggersElement(m_periodTriggers[periodTriggersIndex]));
   }
   payload.WithArray("periodTriggers", std::move(periodTriggersJsonList));

  }

  if(m_profileHasBeenSet)
  {
   payload.WithString("profile", ProfileMapper::GetNameForProfile(m_profile));
  }

  if(m_segmentDurationSecondsHasBeenSet)
  {
   payload.WithInteger("segmentDurationSeconds", m_segmentDurationSeconds);

  }

  if(m_segmentTemplateFormatHasBeenSet)
  {
   payload.WithString("segmentTemplateFormat", SegmentTemplateFormatMapper::GetNameForSegmentTemplateFormat(m_segmentTemplateFormat));
  }

  if(m_streamSelectionHasBeenSet)
  {
   payload.WithObject("streamSelection", m_streamSelection.Jsonize());

  }

  if(m_suggestedPresentationDelaySecondsHasBeenSet)
  {
   payload.WithInteger("suggestedPresentationDelaySeconds", m_suggestedPresentationDelaySeconds);

  }

  return payload;
}

} // namespace Model
} // namespace MediaPackage
} // namespace Aws
