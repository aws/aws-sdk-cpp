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

#include <aws/mediapackage-vod/model/HlsPackage.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MediaPackageVod
{
namespace Model
{

HlsPackage::HlsPackage() : 
    m_encryptionHasBeenSet(false),
    m_hlsManifestsHasBeenSet(false),
    m_segmentDurationSeconds(0),
    m_segmentDurationSecondsHasBeenSet(false),
    m_useAudioRenditionGroup(false),
    m_useAudioRenditionGroupHasBeenSet(false)
{
}

HlsPackage::HlsPackage(JsonView jsonValue) : 
    m_encryptionHasBeenSet(false),
    m_hlsManifestsHasBeenSet(false),
    m_segmentDurationSeconds(0),
    m_segmentDurationSecondsHasBeenSet(false),
    m_useAudioRenditionGroup(false),
    m_useAudioRenditionGroupHasBeenSet(false)
{
  *this = jsonValue;
}

HlsPackage& HlsPackage::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("encryption"))
  {
    m_encryption = jsonValue.GetObject("encryption");

    m_encryptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("hlsManifests"))
  {
    Array<JsonView> hlsManifestsJsonList = jsonValue.GetArray("hlsManifests");
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

  if(jsonValue.ValueExists("useAudioRenditionGroup"))
  {
    m_useAudioRenditionGroup = jsonValue.GetBool("useAudioRenditionGroup");

    m_useAudioRenditionGroupHasBeenSet = true;
  }

  return *this;
}

JsonValue HlsPackage::Jsonize() const
{
  JsonValue payload;

  if(m_encryptionHasBeenSet)
  {
   payload.WithObject("encryption", m_encryption.Jsonize());

  }

  if(m_hlsManifestsHasBeenSet)
  {
   Array<JsonValue> hlsManifestsJsonList(m_hlsManifests.size());
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

  if(m_useAudioRenditionGroupHasBeenSet)
  {
   payload.WithBool("useAudioRenditionGroup", m_useAudioRenditionGroup);

  }

  return payload;
}

} // namespace Model
} // namespace MediaPackageVod
} // namespace Aws
