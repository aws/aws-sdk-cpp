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

#pragma once
#include <aws/mediaconvert/MediaConvert_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mediaconvert/model/CmafClientCache.h>
#include <aws/mediaconvert/model/CmafCodecSpecification.h>
#include <aws/mediaconvert/model/DestinationSettings.h>
#include <aws/mediaconvert/model/CmafEncryptionSettings.h>
#include <aws/mediaconvert/model/CmafManifestCompression.h>
#include <aws/mediaconvert/model/CmafManifestDurationFormat.h>
#include <aws/mediaconvert/model/CmafSegmentControl.h>
#include <aws/mediaconvert/model/CmafStreamInfResolution.h>
#include <aws/mediaconvert/model/CmafWriteDASHManifest.h>
#include <aws/mediaconvert/model/CmafWriteHLSManifest.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace MediaConvert
{
namespace Model
{

  /**
   * Required when you set (Type) under (OutputGroups)>(OutputGroupSettings) to
   * CMAF_GROUP_SETTINGS. Each output in a CMAF Output Group may only contain a
   * single video, audio, or caption output.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/CmafGroupSettings">AWS
   * API Reference</a></p>
   */
  class AWS_MEDIACONVERT_API CmafGroupSettings
  {
  public:
    CmafGroupSettings();
    CmafGroupSettings(Aws::Utils::Json::JsonView jsonValue);
    CmafGroupSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * A partial URI prefix that will be put in the manifest file at the top level
     * BaseURL element. Can be used if streams are delivered from a different URL than
     * the manifest file.
     */
    inline const Aws::String& GetBaseUrl() const{ return m_baseUrl; }

    /**
     * A partial URI prefix that will be put in the manifest file at the top level
     * BaseURL element. Can be used if streams are delivered from a different URL than
     * the manifest file.
     */
    inline bool BaseUrlHasBeenSet() const { return m_baseUrlHasBeenSet; }

    /**
     * A partial URI prefix that will be put in the manifest file at the top level
     * BaseURL element. Can be used if streams are delivered from a different URL than
     * the manifest file.
     */
    inline void SetBaseUrl(const Aws::String& value) { m_baseUrlHasBeenSet = true; m_baseUrl = value; }

    /**
     * A partial URI prefix that will be put in the manifest file at the top level
     * BaseURL element. Can be used if streams are delivered from a different URL than
     * the manifest file.
     */
    inline void SetBaseUrl(Aws::String&& value) { m_baseUrlHasBeenSet = true; m_baseUrl = std::move(value); }

    /**
     * A partial URI prefix that will be put in the manifest file at the top level
     * BaseURL element. Can be used if streams are delivered from a different URL than
     * the manifest file.
     */
    inline void SetBaseUrl(const char* value) { m_baseUrlHasBeenSet = true; m_baseUrl.assign(value); }

    /**
     * A partial URI prefix that will be put in the manifest file at the top level
     * BaseURL element. Can be used if streams are delivered from a different URL than
     * the manifest file.
     */
    inline CmafGroupSettings& WithBaseUrl(const Aws::String& value) { SetBaseUrl(value); return *this;}

    /**
     * A partial URI prefix that will be put in the manifest file at the top level
     * BaseURL element. Can be used if streams are delivered from a different URL than
     * the manifest file.
     */
    inline CmafGroupSettings& WithBaseUrl(Aws::String&& value) { SetBaseUrl(std::move(value)); return *this;}

    /**
     * A partial URI prefix that will be put in the manifest file at the top level
     * BaseURL element. Can be used if streams are delivered from a different URL than
     * the manifest file.
     */
    inline CmafGroupSettings& WithBaseUrl(const char* value) { SetBaseUrl(value); return *this;}


    /**
     * When set to ENABLED, sets #EXT-X-ALLOW-CACHE:no tag, which prevents client from
     * saving media segments for later replay.
     */
    inline const CmafClientCache& GetClientCache() const{ return m_clientCache; }

    /**
     * When set to ENABLED, sets #EXT-X-ALLOW-CACHE:no tag, which prevents client from
     * saving media segments for later replay.
     */
    inline bool ClientCacheHasBeenSet() const { return m_clientCacheHasBeenSet; }

    /**
     * When set to ENABLED, sets #EXT-X-ALLOW-CACHE:no tag, which prevents client from
     * saving media segments for later replay.
     */
    inline void SetClientCache(const CmafClientCache& value) { m_clientCacheHasBeenSet = true; m_clientCache = value; }

    /**
     * When set to ENABLED, sets #EXT-X-ALLOW-CACHE:no tag, which prevents client from
     * saving media segments for later replay.
     */
    inline void SetClientCache(CmafClientCache&& value) { m_clientCacheHasBeenSet = true; m_clientCache = std::move(value); }

    /**
     * When set to ENABLED, sets #EXT-X-ALLOW-CACHE:no tag, which prevents client from
     * saving media segments for later replay.
     */
    inline CmafGroupSettings& WithClientCache(const CmafClientCache& value) { SetClientCache(value); return *this;}

    /**
     * When set to ENABLED, sets #EXT-X-ALLOW-CACHE:no tag, which prevents client from
     * saving media segments for later replay.
     */
    inline CmafGroupSettings& WithClientCache(CmafClientCache&& value) { SetClientCache(std::move(value)); return *this;}


    /**
     * Specification to use (RFC-6381 or the default RFC-4281) during m3u8 playlist
     * generation.
     */
    inline const CmafCodecSpecification& GetCodecSpecification() const{ return m_codecSpecification; }

    /**
     * Specification to use (RFC-6381 or the default RFC-4281) during m3u8 playlist
     * generation.
     */
    inline bool CodecSpecificationHasBeenSet() const { return m_codecSpecificationHasBeenSet; }

    /**
     * Specification to use (RFC-6381 or the default RFC-4281) during m3u8 playlist
     * generation.
     */
    inline void SetCodecSpecification(const CmafCodecSpecification& value) { m_codecSpecificationHasBeenSet = true; m_codecSpecification = value; }

    /**
     * Specification to use (RFC-6381 or the default RFC-4281) during m3u8 playlist
     * generation.
     */
    inline void SetCodecSpecification(CmafCodecSpecification&& value) { m_codecSpecificationHasBeenSet = true; m_codecSpecification = std::move(value); }

    /**
     * Specification to use (RFC-6381 or the default RFC-4281) during m3u8 playlist
     * generation.
     */
    inline CmafGroupSettings& WithCodecSpecification(const CmafCodecSpecification& value) { SetCodecSpecification(value); return *this;}

    /**
     * Specification to use (RFC-6381 or the default RFC-4281) during m3u8 playlist
     * generation.
     */
    inline CmafGroupSettings& WithCodecSpecification(CmafCodecSpecification&& value) { SetCodecSpecification(std::move(value)); return *this;}


    /**
     * Use Destination (Destination) to specify the S3 output location and the output
     * filename base. Destination accepts format identifiers. If you do not specify the
     * base filename in the URI, the service will use the filename of the input file.
     * If your job has multiple inputs, the service uses the filename of the first
     * input file.
     */
    inline const Aws::String& GetDestination() const{ return m_destination; }

    /**
     * Use Destination (Destination) to specify the S3 output location and the output
     * filename base. Destination accepts format identifiers. If you do not specify the
     * base filename in the URI, the service will use the filename of the input file.
     * If your job has multiple inputs, the service uses the filename of the first
     * input file.
     */
    inline bool DestinationHasBeenSet() const { return m_destinationHasBeenSet; }

    /**
     * Use Destination (Destination) to specify the S3 output location and the output
     * filename base. Destination accepts format identifiers. If you do not specify the
     * base filename in the URI, the service will use the filename of the input file.
     * If your job has multiple inputs, the service uses the filename of the first
     * input file.
     */
    inline void SetDestination(const Aws::String& value) { m_destinationHasBeenSet = true; m_destination = value; }

    /**
     * Use Destination (Destination) to specify the S3 output location and the output
     * filename base. Destination accepts format identifiers. If you do not specify the
     * base filename in the URI, the service will use the filename of the input file.
     * If your job has multiple inputs, the service uses the filename of the first
     * input file.
     */
    inline void SetDestination(Aws::String&& value) { m_destinationHasBeenSet = true; m_destination = std::move(value); }

    /**
     * Use Destination (Destination) to specify the S3 output location and the output
     * filename base. Destination accepts format identifiers. If you do not specify the
     * base filename in the URI, the service will use the filename of the input file.
     * If your job has multiple inputs, the service uses the filename of the first
     * input file.
     */
    inline void SetDestination(const char* value) { m_destinationHasBeenSet = true; m_destination.assign(value); }

    /**
     * Use Destination (Destination) to specify the S3 output location and the output
     * filename base. Destination accepts format identifiers. If you do not specify the
     * base filename in the URI, the service will use the filename of the input file.
     * If your job has multiple inputs, the service uses the filename of the first
     * input file.
     */
    inline CmafGroupSettings& WithDestination(const Aws::String& value) { SetDestination(value); return *this;}

    /**
     * Use Destination (Destination) to specify the S3 output location and the output
     * filename base. Destination accepts format identifiers. If you do not specify the
     * base filename in the URI, the service will use the filename of the input file.
     * If your job has multiple inputs, the service uses the filename of the first
     * input file.
     */
    inline CmafGroupSettings& WithDestination(Aws::String&& value) { SetDestination(std::move(value)); return *this;}

    /**
     * Use Destination (Destination) to specify the S3 output location and the output
     * filename base. Destination accepts format identifiers. If you do not specify the
     * base filename in the URI, the service will use the filename of the input file.
     * If your job has multiple inputs, the service uses the filename of the first
     * input file.
     */
    inline CmafGroupSettings& WithDestination(const char* value) { SetDestination(value); return *this;}


    /**
     * Settings associated with the destination. Will vary based on the type of
     * destination
     */
    inline const DestinationSettings& GetDestinationSettings() const{ return m_destinationSettings; }

    /**
     * Settings associated with the destination. Will vary based on the type of
     * destination
     */
    inline bool DestinationSettingsHasBeenSet() const { return m_destinationSettingsHasBeenSet; }

    /**
     * Settings associated with the destination. Will vary based on the type of
     * destination
     */
    inline void SetDestinationSettings(const DestinationSettings& value) { m_destinationSettingsHasBeenSet = true; m_destinationSettings = value; }

    /**
     * Settings associated with the destination. Will vary based on the type of
     * destination
     */
    inline void SetDestinationSettings(DestinationSettings&& value) { m_destinationSettingsHasBeenSet = true; m_destinationSettings = std::move(value); }

    /**
     * Settings associated with the destination. Will vary based on the type of
     * destination
     */
    inline CmafGroupSettings& WithDestinationSettings(const DestinationSettings& value) { SetDestinationSettings(value); return *this;}

    /**
     * Settings associated with the destination. Will vary based on the type of
     * destination
     */
    inline CmafGroupSettings& WithDestinationSettings(DestinationSettings&& value) { SetDestinationSettings(std::move(value)); return *this;}


    /**
     * DRM settings.
     */
    inline const CmafEncryptionSettings& GetEncryption() const{ return m_encryption; }

    /**
     * DRM settings.
     */
    inline bool EncryptionHasBeenSet() const { return m_encryptionHasBeenSet; }

    /**
     * DRM settings.
     */
    inline void SetEncryption(const CmafEncryptionSettings& value) { m_encryptionHasBeenSet = true; m_encryption = value; }

    /**
     * DRM settings.
     */
    inline void SetEncryption(CmafEncryptionSettings&& value) { m_encryptionHasBeenSet = true; m_encryption = std::move(value); }

    /**
     * DRM settings.
     */
    inline CmafGroupSettings& WithEncryption(const CmafEncryptionSettings& value) { SetEncryption(value); return *this;}

    /**
     * DRM settings.
     */
    inline CmafGroupSettings& WithEncryption(CmafEncryptionSettings&& value) { SetEncryption(std::move(value)); return *this;}


    /**
     * Length of fragments to generate (in seconds). Fragment length must be compatible
     * with GOP size and Framerate. Note that fragments will end on the next keyframe
     * after this number of seconds, so actual fragment length may be longer. When Emit
     * Single File is checked, the fragmentation is internal to a single output file
     * and it does not cause the creation of many output files as in other output
     * types.
     */
    inline int GetFragmentLength() const{ return m_fragmentLength; }

    /**
     * Length of fragments to generate (in seconds). Fragment length must be compatible
     * with GOP size and Framerate. Note that fragments will end on the next keyframe
     * after this number of seconds, so actual fragment length may be longer. When Emit
     * Single File is checked, the fragmentation is internal to a single output file
     * and it does not cause the creation of many output files as in other output
     * types.
     */
    inline bool FragmentLengthHasBeenSet() const { return m_fragmentLengthHasBeenSet; }

    /**
     * Length of fragments to generate (in seconds). Fragment length must be compatible
     * with GOP size and Framerate. Note that fragments will end on the next keyframe
     * after this number of seconds, so actual fragment length may be longer. When Emit
     * Single File is checked, the fragmentation is internal to a single output file
     * and it does not cause the creation of many output files as in other output
     * types.
     */
    inline void SetFragmentLength(int value) { m_fragmentLengthHasBeenSet = true; m_fragmentLength = value; }

    /**
     * Length of fragments to generate (in seconds). Fragment length must be compatible
     * with GOP size and Framerate. Note that fragments will end on the next keyframe
     * after this number of seconds, so actual fragment length may be longer. When Emit
     * Single File is checked, the fragmentation is internal to a single output file
     * and it does not cause the creation of many output files as in other output
     * types.
     */
    inline CmafGroupSettings& WithFragmentLength(int value) { SetFragmentLength(value); return *this;}


    /**
     * When set to GZIP, compresses HLS playlist.
     */
    inline const CmafManifestCompression& GetManifestCompression() const{ return m_manifestCompression; }

    /**
     * When set to GZIP, compresses HLS playlist.
     */
    inline bool ManifestCompressionHasBeenSet() const { return m_manifestCompressionHasBeenSet; }

    /**
     * When set to GZIP, compresses HLS playlist.
     */
    inline void SetManifestCompression(const CmafManifestCompression& value) { m_manifestCompressionHasBeenSet = true; m_manifestCompression = value; }

    /**
     * When set to GZIP, compresses HLS playlist.
     */
    inline void SetManifestCompression(CmafManifestCompression&& value) { m_manifestCompressionHasBeenSet = true; m_manifestCompression = std::move(value); }

    /**
     * When set to GZIP, compresses HLS playlist.
     */
    inline CmafGroupSettings& WithManifestCompression(const CmafManifestCompression& value) { SetManifestCompression(value); return *this;}

    /**
     * When set to GZIP, compresses HLS playlist.
     */
    inline CmafGroupSettings& WithManifestCompression(CmafManifestCompression&& value) { SetManifestCompression(std::move(value)); return *this;}


    /**
     * Indicates whether the output manifest should use floating point values for
     * segment duration.
     */
    inline const CmafManifestDurationFormat& GetManifestDurationFormat() const{ return m_manifestDurationFormat; }

    /**
     * Indicates whether the output manifest should use floating point values for
     * segment duration.
     */
    inline bool ManifestDurationFormatHasBeenSet() const { return m_manifestDurationFormatHasBeenSet; }

    /**
     * Indicates whether the output manifest should use floating point values for
     * segment duration.
     */
    inline void SetManifestDurationFormat(const CmafManifestDurationFormat& value) { m_manifestDurationFormatHasBeenSet = true; m_manifestDurationFormat = value; }

    /**
     * Indicates whether the output manifest should use floating point values for
     * segment duration.
     */
    inline void SetManifestDurationFormat(CmafManifestDurationFormat&& value) { m_manifestDurationFormatHasBeenSet = true; m_manifestDurationFormat = std::move(value); }

    /**
     * Indicates whether the output manifest should use floating point values for
     * segment duration.
     */
    inline CmafGroupSettings& WithManifestDurationFormat(const CmafManifestDurationFormat& value) { SetManifestDurationFormat(value); return *this;}

    /**
     * Indicates whether the output manifest should use floating point values for
     * segment duration.
     */
    inline CmafGroupSettings& WithManifestDurationFormat(CmafManifestDurationFormat&& value) { SetManifestDurationFormat(std::move(value)); return *this;}


    /**
     * Minimum time of initially buffered media that is needed to ensure smooth
     * playout.
     */
    inline int GetMinBufferTime() const{ return m_minBufferTime; }

    /**
     * Minimum time of initially buffered media that is needed to ensure smooth
     * playout.
     */
    inline bool MinBufferTimeHasBeenSet() const { return m_minBufferTimeHasBeenSet; }

    /**
     * Minimum time of initially buffered media that is needed to ensure smooth
     * playout.
     */
    inline void SetMinBufferTime(int value) { m_minBufferTimeHasBeenSet = true; m_minBufferTime = value; }

    /**
     * Minimum time of initially buffered media that is needed to ensure smooth
     * playout.
     */
    inline CmafGroupSettings& WithMinBufferTime(int value) { SetMinBufferTime(value); return *this;}


    /**
     * Keep this setting at the default value of 0, unless you are troubleshooting a
     * problem with how devices play back the end of your video asset. If you know that
     * player devices are hanging on the final segment of your video because the length
     * of your final segment is too short, use this setting to specify a minimum final
     * segment length, in seconds. Choose a value that is greater than or equal to 1
     * and less than your segment length. When you specify a value for this setting,
     * the encoder will combine any final segment that is shorter than the length that
     * you specify with the previous segment. For example, your segment length is 3
     * seconds and your final segment is .5 seconds without a minimum final segment
     * length; when you set the minimum final segment length to 1, your final segment
     * is 3.5 seconds.
     */
    inline double GetMinFinalSegmentLength() const{ return m_minFinalSegmentLength; }

    /**
     * Keep this setting at the default value of 0, unless you are troubleshooting a
     * problem with how devices play back the end of your video asset. If you know that
     * player devices are hanging on the final segment of your video because the length
     * of your final segment is too short, use this setting to specify a minimum final
     * segment length, in seconds. Choose a value that is greater than or equal to 1
     * and less than your segment length. When you specify a value for this setting,
     * the encoder will combine any final segment that is shorter than the length that
     * you specify with the previous segment. For example, your segment length is 3
     * seconds and your final segment is .5 seconds without a minimum final segment
     * length; when you set the minimum final segment length to 1, your final segment
     * is 3.5 seconds.
     */
    inline bool MinFinalSegmentLengthHasBeenSet() const { return m_minFinalSegmentLengthHasBeenSet; }

    /**
     * Keep this setting at the default value of 0, unless you are troubleshooting a
     * problem with how devices play back the end of your video asset. If you know that
     * player devices are hanging on the final segment of your video because the length
     * of your final segment is too short, use this setting to specify a minimum final
     * segment length, in seconds. Choose a value that is greater than or equal to 1
     * and less than your segment length. When you specify a value for this setting,
     * the encoder will combine any final segment that is shorter than the length that
     * you specify with the previous segment. For example, your segment length is 3
     * seconds and your final segment is .5 seconds without a minimum final segment
     * length; when you set the minimum final segment length to 1, your final segment
     * is 3.5 seconds.
     */
    inline void SetMinFinalSegmentLength(double value) { m_minFinalSegmentLengthHasBeenSet = true; m_minFinalSegmentLength = value; }

    /**
     * Keep this setting at the default value of 0, unless you are troubleshooting a
     * problem with how devices play back the end of your video asset. If you know that
     * player devices are hanging on the final segment of your video because the length
     * of your final segment is too short, use this setting to specify a minimum final
     * segment length, in seconds. Choose a value that is greater than or equal to 1
     * and less than your segment length. When you specify a value for this setting,
     * the encoder will combine any final segment that is shorter than the length that
     * you specify with the previous segment. For example, your segment length is 3
     * seconds and your final segment is .5 seconds without a minimum final segment
     * length; when you set the minimum final segment length to 1, your final segment
     * is 3.5 seconds.
     */
    inline CmafGroupSettings& WithMinFinalSegmentLength(double value) { SetMinFinalSegmentLength(value); return *this;}


    /**
     * When set to SINGLE_FILE, a single output file is generated, which is internally
     * segmented using the Fragment Length and Segment Length. When set to
     * SEGMENTED_FILES, separate segment files will be created.
     */
    inline const CmafSegmentControl& GetSegmentControl() const{ return m_segmentControl; }

    /**
     * When set to SINGLE_FILE, a single output file is generated, which is internally
     * segmented using the Fragment Length and Segment Length. When set to
     * SEGMENTED_FILES, separate segment files will be created.
     */
    inline bool SegmentControlHasBeenSet() const { return m_segmentControlHasBeenSet; }

    /**
     * When set to SINGLE_FILE, a single output file is generated, which is internally
     * segmented using the Fragment Length and Segment Length. When set to
     * SEGMENTED_FILES, separate segment files will be created.
     */
    inline void SetSegmentControl(const CmafSegmentControl& value) { m_segmentControlHasBeenSet = true; m_segmentControl = value; }

    /**
     * When set to SINGLE_FILE, a single output file is generated, which is internally
     * segmented using the Fragment Length and Segment Length. When set to
     * SEGMENTED_FILES, separate segment files will be created.
     */
    inline void SetSegmentControl(CmafSegmentControl&& value) { m_segmentControlHasBeenSet = true; m_segmentControl = std::move(value); }

    /**
     * When set to SINGLE_FILE, a single output file is generated, which is internally
     * segmented using the Fragment Length and Segment Length. When set to
     * SEGMENTED_FILES, separate segment files will be created.
     */
    inline CmafGroupSettings& WithSegmentControl(const CmafSegmentControl& value) { SetSegmentControl(value); return *this;}

    /**
     * When set to SINGLE_FILE, a single output file is generated, which is internally
     * segmented using the Fragment Length and Segment Length. When set to
     * SEGMENTED_FILES, separate segment files will be created.
     */
    inline CmafGroupSettings& WithSegmentControl(CmafSegmentControl&& value) { SetSegmentControl(std::move(value)); return *this;}


    /**
     * Use this setting to specify the length, in seconds, of each individual CMAF
     * segment. This value applies to the whole package; that is, to every output in
     * the output group. Note that segments end on the first keyframe after this number
     * of seconds, so the actual segment length might be slightly longer. If you set
     * Segment control (CmafSegmentControl) to single file, the service puts the
     * content of each output in a single file that has metadata that marks these
     * segments. If you set it to segmented files, the service creates multiple files
     * for each output, each with the content of one segment.
     */
    inline int GetSegmentLength() const{ return m_segmentLength; }

    /**
     * Use this setting to specify the length, in seconds, of each individual CMAF
     * segment. This value applies to the whole package; that is, to every output in
     * the output group. Note that segments end on the first keyframe after this number
     * of seconds, so the actual segment length might be slightly longer. If you set
     * Segment control (CmafSegmentControl) to single file, the service puts the
     * content of each output in a single file that has metadata that marks these
     * segments. If you set it to segmented files, the service creates multiple files
     * for each output, each with the content of one segment.
     */
    inline bool SegmentLengthHasBeenSet() const { return m_segmentLengthHasBeenSet; }

    /**
     * Use this setting to specify the length, in seconds, of each individual CMAF
     * segment. This value applies to the whole package; that is, to every output in
     * the output group. Note that segments end on the first keyframe after this number
     * of seconds, so the actual segment length might be slightly longer. If you set
     * Segment control (CmafSegmentControl) to single file, the service puts the
     * content of each output in a single file that has metadata that marks these
     * segments. If you set it to segmented files, the service creates multiple files
     * for each output, each with the content of one segment.
     */
    inline void SetSegmentLength(int value) { m_segmentLengthHasBeenSet = true; m_segmentLength = value; }

    /**
     * Use this setting to specify the length, in seconds, of each individual CMAF
     * segment. This value applies to the whole package; that is, to every output in
     * the output group. Note that segments end on the first keyframe after this number
     * of seconds, so the actual segment length might be slightly longer. If you set
     * Segment control (CmafSegmentControl) to single file, the service puts the
     * content of each output in a single file that has metadata that marks these
     * segments. If you set it to segmented files, the service creates multiple files
     * for each output, each with the content of one segment.
     */
    inline CmafGroupSettings& WithSegmentLength(int value) { SetSegmentLength(value); return *this;}


    /**
     * Include or exclude RESOLUTION attribute for video in EXT-X-STREAM-INF tag of
     * variant manifest.
     */
    inline const CmafStreamInfResolution& GetStreamInfResolution() const{ return m_streamInfResolution; }

    /**
     * Include or exclude RESOLUTION attribute for video in EXT-X-STREAM-INF tag of
     * variant manifest.
     */
    inline bool StreamInfResolutionHasBeenSet() const { return m_streamInfResolutionHasBeenSet; }

    /**
     * Include or exclude RESOLUTION attribute for video in EXT-X-STREAM-INF tag of
     * variant manifest.
     */
    inline void SetStreamInfResolution(const CmafStreamInfResolution& value) { m_streamInfResolutionHasBeenSet = true; m_streamInfResolution = value; }

    /**
     * Include or exclude RESOLUTION attribute for video in EXT-X-STREAM-INF tag of
     * variant manifest.
     */
    inline void SetStreamInfResolution(CmafStreamInfResolution&& value) { m_streamInfResolutionHasBeenSet = true; m_streamInfResolution = std::move(value); }

    /**
     * Include or exclude RESOLUTION attribute for video in EXT-X-STREAM-INF tag of
     * variant manifest.
     */
    inline CmafGroupSettings& WithStreamInfResolution(const CmafStreamInfResolution& value) { SetStreamInfResolution(value); return *this;}

    /**
     * Include or exclude RESOLUTION attribute for video in EXT-X-STREAM-INF tag of
     * variant manifest.
     */
    inline CmafGroupSettings& WithStreamInfResolution(CmafStreamInfResolution&& value) { SetStreamInfResolution(std::move(value)); return *this;}


    /**
     * When set to ENABLED, a DASH MPD manifest will be generated for this output.
     */
    inline const CmafWriteDASHManifest& GetWriteDashManifest() const{ return m_writeDashManifest; }

    /**
     * When set to ENABLED, a DASH MPD manifest will be generated for this output.
     */
    inline bool WriteDashManifestHasBeenSet() const { return m_writeDashManifestHasBeenSet; }

    /**
     * When set to ENABLED, a DASH MPD manifest will be generated for this output.
     */
    inline void SetWriteDashManifest(const CmafWriteDASHManifest& value) { m_writeDashManifestHasBeenSet = true; m_writeDashManifest = value; }

    /**
     * When set to ENABLED, a DASH MPD manifest will be generated for this output.
     */
    inline void SetWriteDashManifest(CmafWriteDASHManifest&& value) { m_writeDashManifestHasBeenSet = true; m_writeDashManifest = std::move(value); }

    /**
     * When set to ENABLED, a DASH MPD manifest will be generated for this output.
     */
    inline CmafGroupSettings& WithWriteDashManifest(const CmafWriteDASHManifest& value) { SetWriteDashManifest(value); return *this;}

    /**
     * When set to ENABLED, a DASH MPD manifest will be generated for this output.
     */
    inline CmafGroupSettings& WithWriteDashManifest(CmafWriteDASHManifest&& value) { SetWriteDashManifest(std::move(value)); return *this;}


    /**
     * When set to ENABLED, an Apple HLS manifest will be generated for this output.
     */
    inline const CmafWriteHLSManifest& GetWriteHlsManifest() const{ return m_writeHlsManifest; }

    /**
     * When set to ENABLED, an Apple HLS manifest will be generated for this output.
     */
    inline bool WriteHlsManifestHasBeenSet() const { return m_writeHlsManifestHasBeenSet; }

    /**
     * When set to ENABLED, an Apple HLS manifest will be generated for this output.
     */
    inline void SetWriteHlsManifest(const CmafWriteHLSManifest& value) { m_writeHlsManifestHasBeenSet = true; m_writeHlsManifest = value; }

    /**
     * When set to ENABLED, an Apple HLS manifest will be generated for this output.
     */
    inline void SetWriteHlsManifest(CmafWriteHLSManifest&& value) { m_writeHlsManifestHasBeenSet = true; m_writeHlsManifest = std::move(value); }

    /**
     * When set to ENABLED, an Apple HLS manifest will be generated for this output.
     */
    inline CmafGroupSettings& WithWriteHlsManifest(const CmafWriteHLSManifest& value) { SetWriteHlsManifest(value); return *this;}

    /**
     * When set to ENABLED, an Apple HLS manifest will be generated for this output.
     */
    inline CmafGroupSettings& WithWriteHlsManifest(CmafWriteHLSManifest&& value) { SetWriteHlsManifest(std::move(value)); return *this;}

  private:

    Aws::String m_baseUrl;
    bool m_baseUrlHasBeenSet;

    CmafClientCache m_clientCache;
    bool m_clientCacheHasBeenSet;

    CmafCodecSpecification m_codecSpecification;
    bool m_codecSpecificationHasBeenSet;

    Aws::String m_destination;
    bool m_destinationHasBeenSet;

    DestinationSettings m_destinationSettings;
    bool m_destinationSettingsHasBeenSet;

    CmafEncryptionSettings m_encryption;
    bool m_encryptionHasBeenSet;

    int m_fragmentLength;
    bool m_fragmentLengthHasBeenSet;

    CmafManifestCompression m_manifestCompression;
    bool m_manifestCompressionHasBeenSet;

    CmafManifestDurationFormat m_manifestDurationFormat;
    bool m_manifestDurationFormatHasBeenSet;

    int m_minBufferTime;
    bool m_minBufferTimeHasBeenSet;

    double m_minFinalSegmentLength;
    bool m_minFinalSegmentLengthHasBeenSet;

    CmafSegmentControl m_segmentControl;
    bool m_segmentControlHasBeenSet;

    int m_segmentLength;
    bool m_segmentLengthHasBeenSet;

    CmafStreamInfResolution m_streamInfResolution;
    bool m_streamInfResolutionHasBeenSet;

    CmafWriteDASHManifest m_writeDashManifest;
    bool m_writeDashManifestHasBeenSet;

    CmafWriteHLSManifest m_writeHlsManifest;
    bool m_writeHlsManifestHasBeenSet;
  };

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
