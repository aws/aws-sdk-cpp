/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediapackage/model/CmafPackage.h>
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

CmafPackage::CmafPackage() : 
    m_encryptionHasBeenSet(false),
    m_hlsManifestsHasBeenSet(false),
    m_segmentDurationSeconds(0),
    m_segmentDurationSecondsHasBeenSet(false),
    m_segmentPrefixHasBeenSet(false),
    m_streamSelectionHasBeenSet(false)
{
}

CmafPackage::CmafPackage(JsonView jsonValue) : 
    m_encryptionHasBeenSet(false),
    m_hlsManifestsHasBeenSet(false),
    m_segmentDurationSeconds(0),
    m_segmentDurationSecondsHasBeenSet(false),
    m_segmentPrefixHasBeenSet(false),
    m_streamSelectionHasBeenSet(false)
{
  *this = jsonValue;
}

CmafPackage& CmafPackage::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("encryption"))
  {
    m_encryption = jsonValue.GetObject("encryption");

    m_encryptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("hlsManifests"))
  {
    Aws::Utils::Array<JsonView> hlsManifestsJsonList = jsonValue.GetArray("hlsManifests");
    for(unsigned hlsManifestsIndex = 0; hlsManifestsIndex < hlsManifestsJsonList.GetLength(); ++hlsManifestsIndex)
    {
      m_hlsManifests.push_back(hlsManifestsJsonList[hlsManifestsIndex].AsObject());
    }
    m_hlsManifestsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("segmentDurationSeconds"))
  {
    m_segmentDurationSeconds = jsonValue.GetInteger("segmentDurationSeconds");

    m_segmentDurationSecondsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("segmentPrefix"))
  {
    m_segmentPrefix = jsonValue.GetString("segmentPrefix");

    m_segmentPrefixHasBeenSet = true;
  }

  if(jsonValue.ValueExists("streamSelection"))
  {
    m_streamSelection = jsonValue.GetObject("streamSelection");

    m_streamSelectionHasBeenSet = true;
  }

  return *this;
}

JsonValue CmafPackage::Jsonize() const
{
  JsonValue payload;

  if(m_encryptionHasBeenSet)
  {
   payload.WithObject("encryption", m_encryption.Jsonize());

  }

  if(m_hlsManifestsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> hlsManifestsJsonList(m_hlsManifests.size());
   for(unsigned hlsManifestsIndex = 0; hlsManifestsIndex < hlsManifestsJsonList.GetLength(); ++hlsManifestsIndex)
   {
     hlsManifestsJsonList[hlsManifestsIndex].AsObject(m_hlsManifests[hlsManifestsIndex].Jsonize());
   }
   payload.WithArray("hlsManifests", std::move(hlsManifestsJsonList));

  }

  if(m_segmentDurationSecondsHasBeenSet)
  {
   payload.WithInteger("segmentDurationSeconds", m_segmentDurationSeconds);

  }

  if(m_segmentPrefixHasBeenSet)
  {
   payload.WithString("segmentPrefix", m_segmentPrefix);

  }

  if(m_streamSelectionHasBeenSet)
  {
   payload.WithObject("streamSelection", m_streamSelection.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace MediaPackage
} // namespace Aws
