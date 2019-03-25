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

#include <aws/mediaconvert/model/CmafGroupSettings.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MediaConvert
{
namespace Model
{

CmafGroupSettings::CmafGroupSettings() : 
    m_baseUrlHasBeenSet(false),
    m_clientCache(CmafClientCache::NOT_SET),
    m_clientCacheHasBeenSet(false),
    m_codecSpecification(CmafCodecSpecification::NOT_SET),
    m_codecSpecificationHasBeenSet(false),
    m_destinationHasBeenSet(false),
    m_destinationSettingsHasBeenSet(false),
    m_encryptionHasBeenSet(false),
    m_fragmentLength(0),
    m_fragmentLengthHasBeenSet(false),
    m_manifestCompression(CmafManifestCompression::NOT_SET),
    m_manifestCompressionHasBeenSet(false),
    m_manifestDurationFormat(CmafManifestDurationFormat::NOT_SET),
    m_manifestDurationFormatHasBeenSet(false),
    m_minBufferTime(0),
    m_minBufferTimeHasBeenSet(false),
    m_minFinalSegmentLength(0.0),
    m_minFinalSegmentLengthHasBeenSet(false),
    m_segmentControl(CmafSegmentControl::NOT_SET),
    m_segmentControlHasBeenSet(false),
    m_segmentLength(0),
    m_segmentLengthHasBeenSet(false),
    m_streamInfResolution(CmafStreamInfResolution::NOT_SET),
    m_streamInfResolutionHasBeenSet(false),
    m_writeDashManifest(CmafWriteDASHManifest::NOT_SET),
    m_writeDashManifestHasBeenSet(false),
    m_writeHlsManifest(CmafWriteHLSManifest::NOT_SET),
    m_writeHlsManifestHasBeenSet(false)
{
}

CmafGroupSettings::CmafGroupSettings(JsonView jsonValue) : 
    m_baseUrlHasBeenSet(false),
    m_clientCache(CmafClientCache::NOT_SET),
    m_clientCacheHasBeenSet(false),
    m_codecSpecification(CmafCodecSpecification::NOT_SET),
    m_codecSpecificationHasBeenSet(false),
    m_destinationHasBeenSet(false),
    m_destinationSettingsHasBeenSet(false),
    m_encryptionHasBeenSet(false),
    m_fragmentLength(0),
    m_fragmentLengthHasBeenSet(false),
    m_manifestCompression(CmafManifestCompression::NOT_SET),
    m_manifestCompressionHasBeenSet(false),
    m_manifestDurationFormat(CmafManifestDurationFormat::NOT_SET),
    m_manifestDurationFormatHasBeenSet(false),
    m_minBufferTime(0),
    m_minBufferTimeHasBeenSet(false),
    m_minFinalSegmentLength(0.0),
    m_minFinalSegmentLengthHasBeenSet(false),
    m_segmentControl(CmafSegmentControl::NOT_SET),
    m_segmentControlHasBeenSet(false),
    m_segmentLength(0),
    m_segmentLengthHasBeenSet(false),
    m_streamInfResolution(CmafStreamInfResolution::NOT_SET),
    m_streamInfResolutionHasBeenSet(false),
    m_writeDashManifest(CmafWriteDASHManifest::NOT_SET),
    m_writeDashManifestHasBeenSet(false),
    m_writeHlsManifest(CmafWriteHLSManifest::NOT_SET),
    m_writeHlsManifestHasBeenSet(false)
{
  *this = jsonValue;
}

CmafGroupSettings& CmafGroupSettings::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("baseUrl"))
  {
    m_baseUrl = jsonValue.GetString("baseUrl");

    m_baseUrlHasBeenSet = true;
  }

  if(jsonValue.ValueExists("clientCache"))
  {
    m_clientCache = CmafClientCacheMapper::GetCmafClientCacheForName(jsonValue.GetString("clientCache"));

    m_clientCacheHasBeenSet = true;
  }

  if(jsonValue.ValueExists("codecSpecification"))
  {
    m_codecSpecification = CmafCodecSpecificationMapper::GetCmafCodecSpecificationForName(jsonValue.GetString("codecSpecification"));

    m_codecSpecificationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("destination"))
  {
    m_destination = jsonValue.GetString("destination");

    m_destinationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("destinationSettings"))
  {
    m_destinationSettings = jsonValue.GetObject("destinationSettings");

    m_destinationSettingsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("encryption"))
  {
    m_encryption = jsonValue.GetObject("encryption");

    m_encryptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("fragmentLength"))
  {
    m_fragmentLength = jsonValue.GetInteger("fragmentLength");

    m_fragmentLengthHasBeenSet = true;
  }

  if(jsonValue.ValueExists("manifestCompression"))
  {
    m_manifestCompression = CmafManifestCompressionMapper::GetCmafManifestCompressionForName(jsonValue.GetString("manifestCompression"));

    m_manifestCompressionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("manifestDurationFormat"))
  {
    m_manifestDurationFormat = CmafManifestDurationFormatMapper::GetCmafManifestDurationFormatForName(jsonValue.GetString("manifestDurationFormat"));

    m_manifestDurationFormatHasBeenSet = true;
  }

  if(jsonValue.ValueExists("minBufferTime"))
  {
    m_minBufferTime = jsonValue.GetInteger("minBufferTime");

    m_minBufferTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("minFinalSegmentLength"))
  {
    m_minFinalSegmentLength = jsonValue.GetDouble("minFinalSegmentLength");

    m_minFinalSegmentLengthHasBeenSet = true;
  }

  if(jsonValue.ValueExists("segmentControl"))
  {
    m_segmentControl = CmafSegmentControlMapper::GetCmafSegmentControlForName(jsonValue.GetString("segmentControl"));

    m_segmentControlHasBeenSet = true;
  }

  if(jsonValue.ValueExists("segmentLength"))
  {
    m_segmentLength = jsonValue.GetInteger("segmentLength");

    m_segmentLengthHasBeenSet = true;
  }

  if(jsonValue.ValueExists("streamInfResolution"))
  {
    m_streamInfResolution = CmafStreamInfResolutionMapper::GetCmafStreamInfResolutionForName(jsonValue.GetString("streamInfResolution"));

    m_streamInfResolutionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("writeDashManifest"))
  {
    m_writeDashManifest = CmafWriteDASHManifestMapper::GetCmafWriteDASHManifestForName(jsonValue.GetString("writeDashManifest"));

    m_writeDashManifestHasBeenSet = true;
  }

  if(jsonValue.ValueExists("writeHlsManifest"))
  {
    m_writeHlsManifest = CmafWriteHLSManifestMapper::GetCmafWriteHLSManifestForName(jsonValue.GetString("writeHlsManifest"));

    m_writeHlsManifestHasBeenSet = true;
  }

  return *this;
}

JsonValue CmafGroupSettings::Jsonize() const
{
  JsonValue payload;

  if(m_baseUrlHasBeenSet)
  {
   payload.WithString("baseUrl", m_baseUrl);

  }

  if(m_clientCacheHasBeenSet)
  {
   payload.WithString("clientCache", CmafClientCacheMapper::GetNameForCmafClientCache(m_clientCache));
  }

  if(m_codecSpecificationHasBeenSet)
  {
   payload.WithString("codecSpecification", CmafCodecSpecificationMapper::GetNameForCmafCodecSpecification(m_codecSpecification));
  }

  if(m_destinationHasBeenSet)
  {
   payload.WithString("destination", m_destination);

  }

  if(m_destinationSettingsHasBeenSet)
  {
   payload.WithObject("destinationSettings", m_destinationSettings.Jsonize());

  }

  if(m_encryptionHasBeenSet)
  {
   payload.WithObject("encryption", m_encryption.Jsonize());

  }

  if(m_fragmentLengthHasBeenSet)
  {
   payload.WithInteger("fragmentLength", m_fragmentLength);

  }

  if(m_manifestCompressionHasBeenSet)
  {
   payload.WithString("manifestCompression", CmafManifestCompressionMapper::GetNameForCmafManifestCompression(m_manifestCompression));
  }

  if(m_manifestDurationFormatHasBeenSet)
  {
   payload.WithString("manifestDurationFormat", CmafManifestDurationFormatMapper::GetNameForCmafManifestDurationFormat(m_manifestDurationFormat));
  }

  if(m_minBufferTimeHasBeenSet)
  {
   payload.WithInteger("minBufferTime", m_minBufferTime);

  }

  if(m_minFinalSegmentLengthHasBeenSet)
  {
   payload.WithDouble("minFinalSegmentLength", m_minFinalSegmentLength);

  }

  if(m_segmentControlHasBeenSet)
  {
   payload.WithString("segmentControl", CmafSegmentControlMapper::GetNameForCmafSegmentControl(m_segmentControl));
  }

  if(m_segmentLengthHasBeenSet)
  {
   payload.WithInteger("segmentLength", m_segmentLength);

  }

  if(m_streamInfResolutionHasBeenSet)
  {
   payload.WithString("streamInfResolution", CmafStreamInfResolutionMapper::GetNameForCmafStreamInfResolution(m_streamInfResolution));
  }

  if(m_writeDashManifestHasBeenSet)
  {
   payload.WithString("writeDashManifest", CmafWriteDASHManifestMapper::GetNameForCmafWriteDASHManifest(m_writeDashManifest));
  }

  if(m_writeHlsManifestHasBeenSet)
  {
   payload.WithString("writeHlsManifest", CmafWriteHLSManifestMapper::GetNameForCmafWriteHLSManifest(m_writeHlsManifest));
  }

  return payload;
}

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
