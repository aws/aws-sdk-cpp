/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconvert/MediaConvert_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/mediaconvert/model/DashIsoGroupAudioChannelConfigSchemeIdUri.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mediaconvert/model/DestinationSettings.h>
#include <aws/mediaconvert/model/DashIsoEncryptionSettings.h>
#include <aws/mediaconvert/model/DashIsoHbbtvCompliance.h>
#include <aws/mediaconvert/model/DashIsoImageBasedTrickPlay.h>
#include <aws/mediaconvert/model/DashIsoImageBasedTrickPlaySettings.h>
#include <aws/mediaconvert/model/DashIsoMpdManifestBandwidthType.h>
#include <aws/mediaconvert/model/DashIsoMpdProfile.h>
#include <aws/mediaconvert/model/DashIsoPtsOffsetHandlingForBFrames.h>
#include <aws/mediaconvert/model/DashIsoSegmentControl.h>
#include <aws/mediaconvert/model/DashIsoSegmentLengthControl.h>
#include <aws/mediaconvert/model/DashIsoVideoCompositionOffsets.h>
#include <aws/mediaconvert/model/DashIsoWriteSegmentTimelineInRepresentation.h>
#include <aws/mediaconvert/model/DashAdditionalManifest.h>
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
   * Settings related to your DASH output package. For more information, see
   * https://docs.aws.amazon.com/mediaconvert/latest/ug/outputs-file-ABR.html. When
   * you work directly in your JSON job specification, include this object and any
   * required children when you set Type, under OutputGroupSettings, to
   * DASH_ISO_GROUP_SETTINGS.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/DashIsoGroupSettings">AWS
   * API Reference</a></p>
   */
  class DashIsoGroupSettings
  {
  public:
    AWS_MEDIACONVERT_API DashIsoGroupSettings();
    AWS_MEDIACONVERT_API DashIsoGroupSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API DashIsoGroupSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * By default, the service creates one .mpd DASH manifest for each DASH ISO output
     * group in your job. This default manifest references every output in the output
     * group. To create additional DASH manifests that reference a subset of the
     * outputs in the output group, specify a list of them here.
     */
    inline const Aws::Vector<DashAdditionalManifest>& GetAdditionalManifests() const{ return m_additionalManifests; }

    /**
     * By default, the service creates one .mpd DASH manifest for each DASH ISO output
     * group in your job. This default manifest references every output in the output
     * group. To create additional DASH manifests that reference a subset of the
     * outputs in the output group, specify a list of them here.
     */
    inline bool AdditionalManifestsHasBeenSet() const { return m_additionalManifestsHasBeenSet; }

    /**
     * By default, the service creates one .mpd DASH manifest for each DASH ISO output
     * group in your job. This default manifest references every output in the output
     * group. To create additional DASH manifests that reference a subset of the
     * outputs in the output group, specify a list of them here.
     */
    inline void SetAdditionalManifests(const Aws::Vector<DashAdditionalManifest>& value) { m_additionalManifestsHasBeenSet = true; m_additionalManifests = value; }

    /**
     * By default, the service creates one .mpd DASH manifest for each DASH ISO output
     * group in your job. This default manifest references every output in the output
     * group. To create additional DASH manifests that reference a subset of the
     * outputs in the output group, specify a list of them here.
     */
    inline void SetAdditionalManifests(Aws::Vector<DashAdditionalManifest>&& value) { m_additionalManifestsHasBeenSet = true; m_additionalManifests = std::move(value); }

    /**
     * By default, the service creates one .mpd DASH manifest for each DASH ISO output
     * group in your job. This default manifest references every output in the output
     * group. To create additional DASH manifests that reference a subset of the
     * outputs in the output group, specify a list of them here.
     */
    inline DashIsoGroupSettings& WithAdditionalManifests(const Aws::Vector<DashAdditionalManifest>& value) { SetAdditionalManifests(value); return *this;}

    /**
     * By default, the service creates one .mpd DASH manifest for each DASH ISO output
     * group in your job. This default manifest references every output in the output
     * group. To create additional DASH manifests that reference a subset of the
     * outputs in the output group, specify a list of them here.
     */
    inline DashIsoGroupSettings& WithAdditionalManifests(Aws::Vector<DashAdditionalManifest>&& value) { SetAdditionalManifests(std::move(value)); return *this;}

    /**
     * By default, the service creates one .mpd DASH manifest for each DASH ISO output
     * group in your job. This default manifest references every output in the output
     * group. To create additional DASH manifests that reference a subset of the
     * outputs in the output group, specify a list of them here.
     */
    inline DashIsoGroupSettings& AddAdditionalManifests(const DashAdditionalManifest& value) { m_additionalManifestsHasBeenSet = true; m_additionalManifests.push_back(value); return *this; }

    /**
     * By default, the service creates one .mpd DASH manifest for each DASH ISO output
     * group in your job. This default manifest references every output in the output
     * group. To create additional DASH manifests that reference a subset of the
     * outputs in the output group, specify a list of them here.
     */
    inline DashIsoGroupSettings& AddAdditionalManifests(DashAdditionalManifest&& value) { m_additionalManifestsHasBeenSet = true; m_additionalManifests.push_back(std::move(value)); return *this; }


    /**
     * Use this setting only when your audio codec is a Dolby one (AC3, EAC3, or Atmos)
     * and your downstream workflow requires that your DASH manifest use the Dolby
     * channel configuration tag, rather than the MPEG one. For example, you might need
     * to use this to make dynamic ad insertion work. Specify which audio channel
     * configuration scheme ID URI MediaConvert writes in your DASH manifest. Keep the
     * default value, MPEG channel configuration (MPEG_CHANNEL_CONFIGURATION), to have
     * MediaConvert write this: urn:mpeg:mpegB:cicp:ChannelConfiguration. Choose Dolby
     * channel configuration (DOLBY_CHANNEL_CONFIGURATION) to have MediaConvert write
     * this instead: tag:dolby.com,2014:dash:audio_channel_configuration:2011.
     */
    inline const DashIsoGroupAudioChannelConfigSchemeIdUri& GetAudioChannelConfigSchemeIdUri() const{ return m_audioChannelConfigSchemeIdUri; }

    /**
     * Use this setting only when your audio codec is a Dolby one (AC3, EAC3, or Atmos)
     * and your downstream workflow requires that your DASH manifest use the Dolby
     * channel configuration tag, rather than the MPEG one. For example, you might need
     * to use this to make dynamic ad insertion work. Specify which audio channel
     * configuration scheme ID URI MediaConvert writes in your DASH manifest. Keep the
     * default value, MPEG channel configuration (MPEG_CHANNEL_CONFIGURATION), to have
     * MediaConvert write this: urn:mpeg:mpegB:cicp:ChannelConfiguration. Choose Dolby
     * channel configuration (DOLBY_CHANNEL_CONFIGURATION) to have MediaConvert write
     * this instead: tag:dolby.com,2014:dash:audio_channel_configuration:2011.
     */
    inline bool AudioChannelConfigSchemeIdUriHasBeenSet() const { return m_audioChannelConfigSchemeIdUriHasBeenSet; }

    /**
     * Use this setting only when your audio codec is a Dolby one (AC3, EAC3, or Atmos)
     * and your downstream workflow requires that your DASH manifest use the Dolby
     * channel configuration tag, rather than the MPEG one. For example, you might need
     * to use this to make dynamic ad insertion work. Specify which audio channel
     * configuration scheme ID URI MediaConvert writes in your DASH manifest. Keep the
     * default value, MPEG channel configuration (MPEG_CHANNEL_CONFIGURATION), to have
     * MediaConvert write this: urn:mpeg:mpegB:cicp:ChannelConfiguration. Choose Dolby
     * channel configuration (DOLBY_CHANNEL_CONFIGURATION) to have MediaConvert write
     * this instead: tag:dolby.com,2014:dash:audio_channel_configuration:2011.
     */
    inline void SetAudioChannelConfigSchemeIdUri(const DashIsoGroupAudioChannelConfigSchemeIdUri& value) { m_audioChannelConfigSchemeIdUriHasBeenSet = true; m_audioChannelConfigSchemeIdUri = value; }

    /**
     * Use this setting only when your audio codec is a Dolby one (AC3, EAC3, or Atmos)
     * and your downstream workflow requires that your DASH manifest use the Dolby
     * channel configuration tag, rather than the MPEG one. For example, you might need
     * to use this to make dynamic ad insertion work. Specify which audio channel
     * configuration scheme ID URI MediaConvert writes in your DASH manifest. Keep the
     * default value, MPEG channel configuration (MPEG_CHANNEL_CONFIGURATION), to have
     * MediaConvert write this: urn:mpeg:mpegB:cicp:ChannelConfiguration. Choose Dolby
     * channel configuration (DOLBY_CHANNEL_CONFIGURATION) to have MediaConvert write
     * this instead: tag:dolby.com,2014:dash:audio_channel_configuration:2011.
     */
    inline void SetAudioChannelConfigSchemeIdUri(DashIsoGroupAudioChannelConfigSchemeIdUri&& value) { m_audioChannelConfigSchemeIdUriHasBeenSet = true; m_audioChannelConfigSchemeIdUri = std::move(value); }

    /**
     * Use this setting only when your audio codec is a Dolby one (AC3, EAC3, or Atmos)
     * and your downstream workflow requires that your DASH manifest use the Dolby
     * channel configuration tag, rather than the MPEG one. For example, you might need
     * to use this to make dynamic ad insertion work. Specify which audio channel
     * configuration scheme ID URI MediaConvert writes in your DASH manifest. Keep the
     * default value, MPEG channel configuration (MPEG_CHANNEL_CONFIGURATION), to have
     * MediaConvert write this: urn:mpeg:mpegB:cicp:ChannelConfiguration. Choose Dolby
     * channel configuration (DOLBY_CHANNEL_CONFIGURATION) to have MediaConvert write
     * this instead: tag:dolby.com,2014:dash:audio_channel_configuration:2011.
     */
    inline DashIsoGroupSettings& WithAudioChannelConfigSchemeIdUri(const DashIsoGroupAudioChannelConfigSchemeIdUri& value) { SetAudioChannelConfigSchemeIdUri(value); return *this;}

    /**
     * Use this setting only when your audio codec is a Dolby one (AC3, EAC3, or Atmos)
     * and your downstream workflow requires that your DASH manifest use the Dolby
     * channel configuration tag, rather than the MPEG one. For example, you might need
     * to use this to make dynamic ad insertion work. Specify which audio channel
     * configuration scheme ID URI MediaConvert writes in your DASH manifest. Keep the
     * default value, MPEG channel configuration (MPEG_CHANNEL_CONFIGURATION), to have
     * MediaConvert write this: urn:mpeg:mpegB:cicp:ChannelConfiguration. Choose Dolby
     * channel configuration (DOLBY_CHANNEL_CONFIGURATION) to have MediaConvert write
     * this instead: tag:dolby.com,2014:dash:audio_channel_configuration:2011.
     */
    inline DashIsoGroupSettings& WithAudioChannelConfigSchemeIdUri(DashIsoGroupAudioChannelConfigSchemeIdUri&& value) { SetAudioChannelConfigSchemeIdUri(std::move(value)); return *this;}


    /**
     * A partial URI prefix that will be put in the manifest (.mpd) file at the top
     * level BaseURL element. Can be used if streams are delivered from a different URL
     * than the manifest file.
     */
    inline const Aws::String& GetBaseUrl() const{ return m_baseUrl; }

    /**
     * A partial URI prefix that will be put in the manifest (.mpd) file at the top
     * level BaseURL element. Can be used if streams are delivered from a different URL
     * than the manifest file.
     */
    inline bool BaseUrlHasBeenSet() const { return m_baseUrlHasBeenSet; }

    /**
     * A partial URI prefix that will be put in the manifest (.mpd) file at the top
     * level BaseURL element. Can be used if streams are delivered from a different URL
     * than the manifest file.
     */
    inline void SetBaseUrl(const Aws::String& value) { m_baseUrlHasBeenSet = true; m_baseUrl = value; }

    /**
     * A partial URI prefix that will be put in the manifest (.mpd) file at the top
     * level BaseURL element. Can be used if streams are delivered from a different URL
     * than the manifest file.
     */
    inline void SetBaseUrl(Aws::String&& value) { m_baseUrlHasBeenSet = true; m_baseUrl = std::move(value); }

    /**
     * A partial URI prefix that will be put in the manifest (.mpd) file at the top
     * level BaseURL element. Can be used if streams are delivered from a different URL
     * than the manifest file.
     */
    inline void SetBaseUrl(const char* value) { m_baseUrlHasBeenSet = true; m_baseUrl.assign(value); }

    /**
     * A partial URI prefix that will be put in the manifest (.mpd) file at the top
     * level BaseURL element. Can be used if streams are delivered from a different URL
     * than the manifest file.
     */
    inline DashIsoGroupSettings& WithBaseUrl(const Aws::String& value) { SetBaseUrl(value); return *this;}

    /**
     * A partial URI prefix that will be put in the manifest (.mpd) file at the top
     * level BaseURL element. Can be used if streams are delivered from a different URL
     * than the manifest file.
     */
    inline DashIsoGroupSettings& WithBaseUrl(Aws::String&& value) { SetBaseUrl(std::move(value)); return *this;}

    /**
     * A partial URI prefix that will be put in the manifest (.mpd) file at the top
     * level BaseURL element. Can be used if streams are delivered from a different URL
     * than the manifest file.
     */
    inline DashIsoGroupSettings& WithBaseUrl(const char* value) { SetBaseUrl(value); return *this;}


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
    inline DashIsoGroupSettings& WithDestination(const Aws::String& value) { SetDestination(value); return *this;}

    /**
     * Use Destination (Destination) to specify the S3 output location and the output
     * filename base. Destination accepts format identifiers. If you do not specify the
     * base filename in the URI, the service will use the filename of the input file.
     * If your job has multiple inputs, the service uses the filename of the first
     * input file.
     */
    inline DashIsoGroupSettings& WithDestination(Aws::String&& value) { SetDestination(std::move(value)); return *this;}

    /**
     * Use Destination (Destination) to specify the S3 output location and the output
     * filename base. Destination accepts format identifiers. If you do not specify the
     * base filename in the URI, the service will use the filename of the input file.
     * If your job has multiple inputs, the service uses the filename of the first
     * input file.
     */
    inline DashIsoGroupSettings& WithDestination(const char* value) { SetDestination(value); return *this;}


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
    inline DashIsoGroupSettings& WithDestinationSettings(const DestinationSettings& value) { SetDestinationSettings(value); return *this;}

    /**
     * Settings associated with the destination. Will vary based on the type of
     * destination
     */
    inline DashIsoGroupSettings& WithDestinationSettings(DestinationSettings&& value) { SetDestinationSettings(std::move(value)); return *this;}


    /**
     * DRM settings.
     */
    inline const DashIsoEncryptionSettings& GetEncryption() const{ return m_encryption; }

    /**
     * DRM settings.
     */
    inline bool EncryptionHasBeenSet() const { return m_encryptionHasBeenSet; }

    /**
     * DRM settings.
     */
    inline void SetEncryption(const DashIsoEncryptionSettings& value) { m_encryptionHasBeenSet = true; m_encryption = value; }

    /**
     * DRM settings.
     */
    inline void SetEncryption(DashIsoEncryptionSettings&& value) { m_encryptionHasBeenSet = true; m_encryption = std::move(value); }

    /**
     * DRM settings.
     */
    inline DashIsoGroupSettings& WithEncryption(const DashIsoEncryptionSettings& value) { SetEncryption(value); return *this;}

    /**
     * DRM settings.
     */
    inline DashIsoGroupSettings& WithEncryption(DashIsoEncryptionSettings&& value) { SetEncryption(std::move(value)); return *this;}


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
    inline DashIsoGroupSettings& WithFragmentLength(int value) { SetFragmentLength(value); return *this;}


    /**
     * Supports HbbTV specification as indicated
     */
    inline const DashIsoHbbtvCompliance& GetHbbtvCompliance() const{ return m_hbbtvCompliance; }

    /**
     * Supports HbbTV specification as indicated
     */
    inline bool HbbtvComplianceHasBeenSet() const { return m_hbbtvComplianceHasBeenSet; }

    /**
     * Supports HbbTV specification as indicated
     */
    inline void SetHbbtvCompliance(const DashIsoHbbtvCompliance& value) { m_hbbtvComplianceHasBeenSet = true; m_hbbtvCompliance = value; }

    /**
     * Supports HbbTV specification as indicated
     */
    inline void SetHbbtvCompliance(DashIsoHbbtvCompliance&& value) { m_hbbtvComplianceHasBeenSet = true; m_hbbtvCompliance = std::move(value); }

    /**
     * Supports HbbTV specification as indicated
     */
    inline DashIsoGroupSettings& WithHbbtvCompliance(const DashIsoHbbtvCompliance& value) { SetHbbtvCompliance(value); return *this;}

    /**
     * Supports HbbTV specification as indicated
     */
    inline DashIsoGroupSettings& WithHbbtvCompliance(DashIsoHbbtvCompliance&& value) { SetHbbtvCompliance(std::move(value)); return *this;}


    /**
     * Specify whether MediaConvert generates images for trick play. Keep the default
     * value, None (NONE), to not generate any images. Choose Thumbnail (THUMBNAIL) to
     * generate tiled thumbnails. Choose Thumbnail and full frame
     * (THUMBNAIL_AND_FULLFRAME) to generate tiled thumbnails and full-resolution
     * images of single frames. MediaConvert adds an entry in the .mpd manifest for
     * each set of images that you generate. A common application for these images is
     * Roku trick mode. The thumbnails and full-frame images that MediaConvert creates
     * with this feature are compatible with this Roku specification:
     * https://developer.roku.com/docs/developer-program/media-playback/trick-mode/hls-and-dash.md
     */
    inline const DashIsoImageBasedTrickPlay& GetImageBasedTrickPlay() const{ return m_imageBasedTrickPlay; }

    /**
     * Specify whether MediaConvert generates images for trick play. Keep the default
     * value, None (NONE), to not generate any images. Choose Thumbnail (THUMBNAIL) to
     * generate tiled thumbnails. Choose Thumbnail and full frame
     * (THUMBNAIL_AND_FULLFRAME) to generate tiled thumbnails and full-resolution
     * images of single frames. MediaConvert adds an entry in the .mpd manifest for
     * each set of images that you generate. A common application for these images is
     * Roku trick mode. The thumbnails and full-frame images that MediaConvert creates
     * with this feature are compatible with this Roku specification:
     * https://developer.roku.com/docs/developer-program/media-playback/trick-mode/hls-and-dash.md
     */
    inline bool ImageBasedTrickPlayHasBeenSet() const { return m_imageBasedTrickPlayHasBeenSet; }

    /**
     * Specify whether MediaConvert generates images for trick play. Keep the default
     * value, None (NONE), to not generate any images. Choose Thumbnail (THUMBNAIL) to
     * generate tiled thumbnails. Choose Thumbnail and full frame
     * (THUMBNAIL_AND_FULLFRAME) to generate tiled thumbnails and full-resolution
     * images of single frames. MediaConvert adds an entry in the .mpd manifest for
     * each set of images that you generate. A common application for these images is
     * Roku trick mode. The thumbnails and full-frame images that MediaConvert creates
     * with this feature are compatible with this Roku specification:
     * https://developer.roku.com/docs/developer-program/media-playback/trick-mode/hls-and-dash.md
     */
    inline void SetImageBasedTrickPlay(const DashIsoImageBasedTrickPlay& value) { m_imageBasedTrickPlayHasBeenSet = true; m_imageBasedTrickPlay = value; }

    /**
     * Specify whether MediaConvert generates images for trick play. Keep the default
     * value, None (NONE), to not generate any images. Choose Thumbnail (THUMBNAIL) to
     * generate tiled thumbnails. Choose Thumbnail and full frame
     * (THUMBNAIL_AND_FULLFRAME) to generate tiled thumbnails and full-resolution
     * images of single frames. MediaConvert adds an entry in the .mpd manifest for
     * each set of images that you generate. A common application for these images is
     * Roku trick mode. The thumbnails and full-frame images that MediaConvert creates
     * with this feature are compatible with this Roku specification:
     * https://developer.roku.com/docs/developer-program/media-playback/trick-mode/hls-and-dash.md
     */
    inline void SetImageBasedTrickPlay(DashIsoImageBasedTrickPlay&& value) { m_imageBasedTrickPlayHasBeenSet = true; m_imageBasedTrickPlay = std::move(value); }

    /**
     * Specify whether MediaConvert generates images for trick play. Keep the default
     * value, None (NONE), to not generate any images. Choose Thumbnail (THUMBNAIL) to
     * generate tiled thumbnails. Choose Thumbnail and full frame
     * (THUMBNAIL_AND_FULLFRAME) to generate tiled thumbnails and full-resolution
     * images of single frames. MediaConvert adds an entry in the .mpd manifest for
     * each set of images that you generate. A common application for these images is
     * Roku trick mode. The thumbnails and full-frame images that MediaConvert creates
     * with this feature are compatible with this Roku specification:
     * https://developer.roku.com/docs/developer-program/media-playback/trick-mode/hls-and-dash.md
     */
    inline DashIsoGroupSettings& WithImageBasedTrickPlay(const DashIsoImageBasedTrickPlay& value) { SetImageBasedTrickPlay(value); return *this;}

    /**
     * Specify whether MediaConvert generates images for trick play. Keep the default
     * value, None (NONE), to not generate any images. Choose Thumbnail (THUMBNAIL) to
     * generate tiled thumbnails. Choose Thumbnail and full frame
     * (THUMBNAIL_AND_FULLFRAME) to generate tiled thumbnails and full-resolution
     * images of single frames. MediaConvert adds an entry in the .mpd manifest for
     * each set of images that you generate. A common application for these images is
     * Roku trick mode. The thumbnails and full-frame images that MediaConvert creates
     * with this feature are compatible with this Roku specification:
     * https://developer.roku.com/docs/developer-program/media-playback/trick-mode/hls-and-dash.md
     */
    inline DashIsoGroupSettings& WithImageBasedTrickPlay(DashIsoImageBasedTrickPlay&& value) { SetImageBasedTrickPlay(std::move(value)); return *this;}


    /**
     * Tile and thumbnail settings applicable when imageBasedTrickPlay is ADVANCED
     */
    inline const DashIsoImageBasedTrickPlaySettings& GetImageBasedTrickPlaySettings() const{ return m_imageBasedTrickPlaySettings; }

    /**
     * Tile and thumbnail settings applicable when imageBasedTrickPlay is ADVANCED
     */
    inline bool ImageBasedTrickPlaySettingsHasBeenSet() const { return m_imageBasedTrickPlaySettingsHasBeenSet; }

    /**
     * Tile and thumbnail settings applicable when imageBasedTrickPlay is ADVANCED
     */
    inline void SetImageBasedTrickPlaySettings(const DashIsoImageBasedTrickPlaySettings& value) { m_imageBasedTrickPlaySettingsHasBeenSet = true; m_imageBasedTrickPlaySettings = value; }

    /**
     * Tile and thumbnail settings applicable when imageBasedTrickPlay is ADVANCED
     */
    inline void SetImageBasedTrickPlaySettings(DashIsoImageBasedTrickPlaySettings&& value) { m_imageBasedTrickPlaySettingsHasBeenSet = true; m_imageBasedTrickPlaySettings = std::move(value); }

    /**
     * Tile and thumbnail settings applicable when imageBasedTrickPlay is ADVANCED
     */
    inline DashIsoGroupSettings& WithImageBasedTrickPlaySettings(const DashIsoImageBasedTrickPlaySettings& value) { SetImageBasedTrickPlaySettings(value); return *this;}

    /**
     * Tile and thumbnail settings applicable when imageBasedTrickPlay is ADVANCED
     */
    inline DashIsoGroupSettings& WithImageBasedTrickPlaySettings(DashIsoImageBasedTrickPlaySettings&& value) { SetImageBasedTrickPlaySettings(std::move(value)); return *this;}


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
    inline DashIsoGroupSettings& WithMinBufferTime(int value) { SetMinBufferTime(value); return *this;}


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
    inline DashIsoGroupSettings& WithMinFinalSegmentLength(double value) { SetMinFinalSegmentLength(value); return *this;}


    /**
     * Specify how the value for bandwidth is determined for each video Representation
     * in your output MPD manifest. We recommend that you choose a MPD manifest
     * bandwidth type that is compatible with your downstream player configuration.
     * Max: Use the same value that you specify for Max bitrate in the video output, in
     * bits per second. Average: Use the calculated average bitrate of the encoded
     * video output, in bits per second.
     */
    inline const DashIsoMpdManifestBandwidthType& GetMpdManifestBandwidthType() const{ return m_mpdManifestBandwidthType; }

    /**
     * Specify how the value for bandwidth is determined for each video Representation
     * in your output MPD manifest. We recommend that you choose a MPD manifest
     * bandwidth type that is compatible with your downstream player configuration.
     * Max: Use the same value that you specify for Max bitrate in the video output, in
     * bits per second. Average: Use the calculated average bitrate of the encoded
     * video output, in bits per second.
     */
    inline bool MpdManifestBandwidthTypeHasBeenSet() const { return m_mpdManifestBandwidthTypeHasBeenSet; }

    /**
     * Specify how the value for bandwidth is determined for each video Representation
     * in your output MPD manifest. We recommend that you choose a MPD manifest
     * bandwidth type that is compatible with your downstream player configuration.
     * Max: Use the same value that you specify for Max bitrate in the video output, in
     * bits per second. Average: Use the calculated average bitrate of the encoded
     * video output, in bits per second.
     */
    inline void SetMpdManifestBandwidthType(const DashIsoMpdManifestBandwidthType& value) { m_mpdManifestBandwidthTypeHasBeenSet = true; m_mpdManifestBandwidthType = value; }

    /**
     * Specify how the value for bandwidth is determined for each video Representation
     * in your output MPD manifest. We recommend that you choose a MPD manifest
     * bandwidth type that is compatible with your downstream player configuration.
     * Max: Use the same value that you specify for Max bitrate in the video output, in
     * bits per second. Average: Use the calculated average bitrate of the encoded
     * video output, in bits per second.
     */
    inline void SetMpdManifestBandwidthType(DashIsoMpdManifestBandwidthType&& value) { m_mpdManifestBandwidthTypeHasBeenSet = true; m_mpdManifestBandwidthType = std::move(value); }

    /**
     * Specify how the value for bandwidth is determined for each video Representation
     * in your output MPD manifest. We recommend that you choose a MPD manifest
     * bandwidth type that is compatible with your downstream player configuration.
     * Max: Use the same value that you specify for Max bitrate in the video output, in
     * bits per second. Average: Use the calculated average bitrate of the encoded
     * video output, in bits per second.
     */
    inline DashIsoGroupSettings& WithMpdManifestBandwidthType(const DashIsoMpdManifestBandwidthType& value) { SetMpdManifestBandwidthType(value); return *this;}

    /**
     * Specify how the value for bandwidth is determined for each video Representation
     * in your output MPD manifest. We recommend that you choose a MPD manifest
     * bandwidth type that is compatible with your downstream player configuration.
     * Max: Use the same value that you specify for Max bitrate in the video output, in
     * bits per second. Average: Use the calculated average bitrate of the encoded
     * video output, in bits per second.
     */
    inline DashIsoGroupSettings& WithMpdManifestBandwidthType(DashIsoMpdManifestBandwidthType&& value) { SetMpdManifestBandwidthType(std::move(value)); return *this;}


    /**
     * Specify whether your DASH profile is on-demand or main. When you choose Main
     * profile (MAIN_PROFILE), the service signals 
     * urn:mpeg:dash:profile:isoff-main:2011 in your .mpd DASH manifest. When you
     * choose On-demand (ON_DEMAND_PROFILE), the service signals
     * urn:mpeg:dash:profile:isoff-on-demand:2011 in your .mpd. When you choose
     * On-demand, you must also set the output group setting Segment control
     * (SegmentControl) to Single file (SINGLE_FILE).
     */
    inline const DashIsoMpdProfile& GetMpdProfile() const{ return m_mpdProfile; }

    /**
     * Specify whether your DASH profile is on-demand or main. When you choose Main
     * profile (MAIN_PROFILE), the service signals 
     * urn:mpeg:dash:profile:isoff-main:2011 in your .mpd DASH manifest. When you
     * choose On-demand (ON_DEMAND_PROFILE), the service signals
     * urn:mpeg:dash:profile:isoff-on-demand:2011 in your .mpd. When you choose
     * On-demand, you must also set the output group setting Segment control
     * (SegmentControl) to Single file (SINGLE_FILE).
     */
    inline bool MpdProfileHasBeenSet() const { return m_mpdProfileHasBeenSet; }

    /**
     * Specify whether your DASH profile is on-demand or main. When you choose Main
     * profile (MAIN_PROFILE), the service signals 
     * urn:mpeg:dash:profile:isoff-main:2011 in your .mpd DASH manifest. When you
     * choose On-demand (ON_DEMAND_PROFILE), the service signals
     * urn:mpeg:dash:profile:isoff-on-demand:2011 in your .mpd. When you choose
     * On-demand, you must also set the output group setting Segment control
     * (SegmentControl) to Single file (SINGLE_FILE).
     */
    inline void SetMpdProfile(const DashIsoMpdProfile& value) { m_mpdProfileHasBeenSet = true; m_mpdProfile = value; }

    /**
     * Specify whether your DASH profile is on-demand or main. When you choose Main
     * profile (MAIN_PROFILE), the service signals 
     * urn:mpeg:dash:profile:isoff-main:2011 in your .mpd DASH manifest. When you
     * choose On-demand (ON_DEMAND_PROFILE), the service signals
     * urn:mpeg:dash:profile:isoff-on-demand:2011 in your .mpd. When you choose
     * On-demand, you must also set the output group setting Segment control
     * (SegmentControl) to Single file (SINGLE_FILE).
     */
    inline void SetMpdProfile(DashIsoMpdProfile&& value) { m_mpdProfileHasBeenSet = true; m_mpdProfile = std::move(value); }

    /**
     * Specify whether your DASH profile is on-demand or main. When you choose Main
     * profile (MAIN_PROFILE), the service signals 
     * urn:mpeg:dash:profile:isoff-main:2011 in your .mpd DASH manifest. When you
     * choose On-demand (ON_DEMAND_PROFILE), the service signals
     * urn:mpeg:dash:profile:isoff-on-demand:2011 in your .mpd. When you choose
     * On-demand, you must also set the output group setting Segment control
     * (SegmentControl) to Single file (SINGLE_FILE).
     */
    inline DashIsoGroupSettings& WithMpdProfile(const DashIsoMpdProfile& value) { SetMpdProfile(value); return *this;}

    /**
     * Specify whether your DASH profile is on-demand or main. When you choose Main
     * profile (MAIN_PROFILE), the service signals 
     * urn:mpeg:dash:profile:isoff-main:2011 in your .mpd DASH manifest. When you
     * choose On-demand (ON_DEMAND_PROFILE), the service signals
     * urn:mpeg:dash:profile:isoff-on-demand:2011 in your .mpd. When you choose
     * On-demand, you must also set the output group setting Segment control
     * (SegmentControl) to Single file (SINGLE_FILE).
     */
    inline DashIsoGroupSettings& WithMpdProfile(DashIsoMpdProfile&& value) { SetMpdProfile(std::move(value)); return *this;}


    /**
     * Use this setting only when your output video stream has B-frames, which causes
     * the initial presentation time stamp (PTS) to be offset from the initial decode
     * time stamp (DTS). Specify how MediaConvert handles PTS when writing time stamps
     * in output DASH manifests. Choose Match initial PTS (MATCH_INITIAL_PTS) when you
     * want MediaConvert to use the initial PTS as the first time stamp in the
     * manifest. Choose Zero-based (ZERO_BASED) to have MediaConvert ignore the initial
     * PTS in the video stream and instead write the initial time stamp as zero in the
     * manifest. For outputs that don't have B-frames, the time stamps in your DASH
     * manifests start at zero regardless of your choice here.
     */
    inline const DashIsoPtsOffsetHandlingForBFrames& GetPtsOffsetHandlingForBFrames() const{ return m_ptsOffsetHandlingForBFrames; }

    /**
     * Use this setting only when your output video stream has B-frames, which causes
     * the initial presentation time stamp (PTS) to be offset from the initial decode
     * time stamp (DTS). Specify how MediaConvert handles PTS when writing time stamps
     * in output DASH manifests. Choose Match initial PTS (MATCH_INITIAL_PTS) when you
     * want MediaConvert to use the initial PTS as the first time stamp in the
     * manifest. Choose Zero-based (ZERO_BASED) to have MediaConvert ignore the initial
     * PTS in the video stream and instead write the initial time stamp as zero in the
     * manifest. For outputs that don't have B-frames, the time stamps in your DASH
     * manifests start at zero regardless of your choice here.
     */
    inline bool PtsOffsetHandlingForBFramesHasBeenSet() const { return m_ptsOffsetHandlingForBFramesHasBeenSet; }

    /**
     * Use this setting only when your output video stream has B-frames, which causes
     * the initial presentation time stamp (PTS) to be offset from the initial decode
     * time stamp (DTS). Specify how MediaConvert handles PTS when writing time stamps
     * in output DASH manifests. Choose Match initial PTS (MATCH_INITIAL_PTS) when you
     * want MediaConvert to use the initial PTS as the first time stamp in the
     * manifest. Choose Zero-based (ZERO_BASED) to have MediaConvert ignore the initial
     * PTS in the video stream and instead write the initial time stamp as zero in the
     * manifest. For outputs that don't have B-frames, the time stamps in your DASH
     * manifests start at zero regardless of your choice here.
     */
    inline void SetPtsOffsetHandlingForBFrames(const DashIsoPtsOffsetHandlingForBFrames& value) { m_ptsOffsetHandlingForBFramesHasBeenSet = true; m_ptsOffsetHandlingForBFrames = value; }

    /**
     * Use this setting only when your output video stream has B-frames, which causes
     * the initial presentation time stamp (PTS) to be offset from the initial decode
     * time stamp (DTS). Specify how MediaConvert handles PTS when writing time stamps
     * in output DASH manifests. Choose Match initial PTS (MATCH_INITIAL_PTS) when you
     * want MediaConvert to use the initial PTS as the first time stamp in the
     * manifest. Choose Zero-based (ZERO_BASED) to have MediaConvert ignore the initial
     * PTS in the video stream and instead write the initial time stamp as zero in the
     * manifest. For outputs that don't have B-frames, the time stamps in your DASH
     * manifests start at zero regardless of your choice here.
     */
    inline void SetPtsOffsetHandlingForBFrames(DashIsoPtsOffsetHandlingForBFrames&& value) { m_ptsOffsetHandlingForBFramesHasBeenSet = true; m_ptsOffsetHandlingForBFrames = std::move(value); }

    /**
     * Use this setting only when your output video stream has B-frames, which causes
     * the initial presentation time stamp (PTS) to be offset from the initial decode
     * time stamp (DTS). Specify how MediaConvert handles PTS when writing time stamps
     * in output DASH manifests. Choose Match initial PTS (MATCH_INITIAL_PTS) when you
     * want MediaConvert to use the initial PTS as the first time stamp in the
     * manifest. Choose Zero-based (ZERO_BASED) to have MediaConvert ignore the initial
     * PTS in the video stream and instead write the initial time stamp as zero in the
     * manifest. For outputs that don't have B-frames, the time stamps in your DASH
     * manifests start at zero regardless of your choice here.
     */
    inline DashIsoGroupSettings& WithPtsOffsetHandlingForBFrames(const DashIsoPtsOffsetHandlingForBFrames& value) { SetPtsOffsetHandlingForBFrames(value); return *this;}

    /**
     * Use this setting only when your output video stream has B-frames, which causes
     * the initial presentation time stamp (PTS) to be offset from the initial decode
     * time stamp (DTS). Specify how MediaConvert handles PTS when writing time stamps
     * in output DASH manifests. Choose Match initial PTS (MATCH_INITIAL_PTS) when you
     * want MediaConvert to use the initial PTS as the first time stamp in the
     * manifest. Choose Zero-based (ZERO_BASED) to have MediaConvert ignore the initial
     * PTS in the video stream and instead write the initial time stamp as zero in the
     * manifest. For outputs that don't have B-frames, the time stamps in your DASH
     * manifests start at zero regardless of your choice here.
     */
    inline DashIsoGroupSettings& WithPtsOffsetHandlingForBFrames(DashIsoPtsOffsetHandlingForBFrames&& value) { SetPtsOffsetHandlingForBFrames(std::move(value)); return *this;}


    /**
     * When set to SINGLE_FILE, a single output file is generated, which is internally
     * segmented using the Fragment Length and Segment Length. When set to
     * SEGMENTED_FILES, separate segment files will be created.
     */
    inline const DashIsoSegmentControl& GetSegmentControl() const{ return m_segmentControl; }

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
    inline void SetSegmentControl(const DashIsoSegmentControl& value) { m_segmentControlHasBeenSet = true; m_segmentControl = value; }

    /**
     * When set to SINGLE_FILE, a single output file is generated, which is internally
     * segmented using the Fragment Length and Segment Length. When set to
     * SEGMENTED_FILES, separate segment files will be created.
     */
    inline void SetSegmentControl(DashIsoSegmentControl&& value) { m_segmentControlHasBeenSet = true; m_segmentControl = std::move(value); }

    /**
     * When set to SINGLE_FILE, a single output file is generated, which is internally
     * segmented using the Fragment Length and Segment Length. When set to
     * SEGMENTED_FILES, separate segment files will be created.
     */
    inline DashIsoGroupSettings& WithSegmentControl(const DashIsoSegmentControl& value) { SetSegmentControl(value); return *this;}

    /**
     * When set to SINGLE_FILE, a single output file is generated, which is internally
     * segmented using the Fragment Length and Segment Length. When set to
     * SEGMENTED_FILES, separate segment files will be created.
     */
    inline DashIsoGroupSettings& WithSegmentControl(DashIsoSegmentControl&& value) { SetSegmentControl(std::move(value)); return *this;}


    /**
     * Specify the length, in whole seconds, of each segment. When you don't specify a
     * value, MediaConvert defaults to 30. Related settings: Use Segment length control
     * (SegmentLengthControl) to specify whether the encoder enforces this value
     * strictly. Use Segment control (DashIsoSegmentControl) to specify whether
     * MediaConvert creates separate segment files or one content file that has
     * metadata to mark the segment boundaries.
     */
    inline int GetSegmentLength() const{ return m_segmentLength; }

    /**
     * Specify the length, in whole seconds, of each segment. When you don't specify a
     * value, MediaConvert defaults to 30. Related settings: Use Segment length control
     * (SegmentLengthControl) to specify whether the encoder enforces this value
     * strictly. Use Segment control (DashIsoSegmentControl) to specify whether
     * MediaConvert creates separate segment files or one content file that has
     * metadata to mark the segment boundaries.
     */
    inline bool SegmentLengthHasBeenSet() const { return m_segmentLengthHasBeenSet; }

    /**
     * Specify the length, in whole seconds, of each segment. When you don't specify a
     * value, MediaConvert defaults to 30. Related settings: Use Segment length control
     * (SegmentLengthControl) to specify whether the encoder enforces this value
     * strictly. Use Segment control (DashIsoSegmentControl) to specify whether
     * MediaConvert creates separate segment files or one content file that has
     * metadata to mark the segment boundaries.
     */
    inline void SetSegmentLength(int value) { m_segmentLengthHasBeenSet = true; m_segmentLength = value; }

    /**
     * Specify the length, in whole seconds, of each segment. When you don't specify a
     * value, MediaConvert defaults to 30. Related settings: Use Segment length control
     * (SegmentLengthControl) to specify whether the encoder enforces this value
     * strictly. Use Segment control (DashIsoSegmentControl) to specify whether
     * MediaConvert creates separate segment files or one content file that has
     * metadata to mark the segment boundaries.
     */
    inline DashIsoGroupSettings& WithSegmentLength(int value) { SetSegmentLength(value); return *this;}


    /**
     * Specify how you want MediaConvert to determine the segment length. Choose Exact
     * (EXACT) to have the encoder use the exact length that you specify with the
     * setting Segment length (SegmentLength). This might result in extra I-frames.
     * Choose Multiple of GOP (GOP_MULTIPLE) to have the encoder round up the segment
     * lengths to match the next GOP boundary.
     */
    inline const DashIsoSegmentLengthControl& GetSegmentLengthControl() const{ return m_segmentLengthControl; }

    /**
     * Specify how you want MediaConvert to determine the segment length. Choose Exact
     * (EXACT) to have the encoder use the exact length that you specify with the
     * setting Segment length (SegmentLength). This might result in extra I-frames.
     * Choose Multiple of GOP (GOP_MULTIPLE) to have the encoder round up the segment
     * lengths to match the next GOP boundary.
     */
    inline bool SegmentLengthControlHasBeenSet() const { return m_segmentLengthControlHasBeenSet; }

    /**
     * Specify how you want MediaConvert to determine the segment length. Choose Exact
     * (EXACT) to have the encoder use the exact length that you specify with the
     * setting Segment length (SegmentLength). This might result in extra I-frames.
     * Choose Multiple of GOP (GOP_MULTIPLE) to have the encoder round up the segment
     * lengths to match the next GOP boundary.
     */
    inline void SetSegmentLengthControl(const DashIsoSegmentLengthControl& value) { m_segmentLengthControlHasBeenSet = true; m_segmentLengthControl = value; }

    /**
     * Specify how you want MediaConvert to determine the segment length. Choose Exact
     * (EXACT) to have the encoder use the exact length that you specify with the
     * setting Segment length (SegmentLength). This might result in extra I-frames.
     * Choose Multiple of GOP (GOP_MULTIPLE) to have the encoder round up the segment
     * lengths to match the next GOP boundary.
     */
    inline void SetSegmentLengthControl(DashIsoSegmentLengthControl&& value) { m_segmentLengthControlHasBeenSet = true; m_segmentLengthControl = std::move(value); }

    /**
     * Specify how you want MediaConvert to determine the segment length. Choose Exact
     * (EXACT) to have the encoder use the exact length that you specify with the
     * setting Segment length (SegmentLength). This might result in extra I-frames.
     * Choose Multiple of GOP (GOP_MULTIPLE) to have the encoder round up the segment
     * lengths to match the next GOP boundary.
     */
    inline DashIsoGroupSettings& WithSegmentLengthControl(const DashIsoSegmentLengthControl& value) { SetSegmentLengthControl(value); return *this;}

    /**
     * Specify how you want MediaConvert to determine the segment length. Choose Exact
     * (EXACT) to have the encoder use the exact length that you specify with the
     * setting Segment length (SegmentLength). This might result in extra I-frames.
     * Choose Multiple of GOP (GOP_MULTIPLE) to have the encoder round up the segment
     * lengths to match the next GOP boundary.
     */
    inline DashIsoGroupSettings& WithSegmentLengthControl(DashIsoSegmentLengthControl&& value) { SetSegmentLengthControl(std::move(value)); return *this;}


    /**
     * Specify the video sample composition time offset mode in the output fMP4 TRUN
     * box. For wider player compatibility, set Video composition offsets to Unsigned
     * or leave blank. The earliest presentation time may be greater than zero, and
     * sample composition time offsets will increment using unsigned integers. For
     * strict fMP4 video and audio timing, set Video composition offsets to Signed. The
     * earliest presentation time will be equal to zero, and sample composition time
     * offsets will increment using signed integers.
     */
    inline const DashIsoVideoCompositionOffsets& GetVideoCompositionOffsets() const{ return m_videoCompositionOffsets; }

    /**
     * Specify the video sample composition time offset mode in the output fMP4 TRUN
     * box. For wider player compatibility, set Video composition offsets to Unsigned
     * or leave blank. The earliest presentation time may be greater than zero, and
     * sample composition time offsets will increment using unsigned integers. For
     * strict fMP4 video and audio timing, set Video composition offsets to Signed. The
     * earliest presentation time will be equal to zero, and sample composition time
     * offsets will increment using signed integers.
     */
    inline bool VideoCompositionOffsetsHasBeenSet() const { return m_videoCompositionOffsetsHasBeenSet; }

    /**
     * Specify the video sample composition time offset mode in the output fMP4 TRUN
     * box. For wider player compatibility, set Video composition offsets to Unsigned
     * or leave blank. The earliest presentation time may be greater than zero, and
     * sample composition time offsets will increment using unsigned integers. For
     * strict fMP4 video and audio timing, set Video composition offsets to Signed. The
     * earliest presentation time will be equal to zero, and sample composition time
     * offsets will increment using signed integers.
     */
    inline void SetVideoCompositionOffsets(const DashIsoVideoCompositionOffsets& value) { m_videoCompositionOffsetsHasBeenSet = true; m_videoCompositionOffsets = value; }

    /**
     * Specify the video sample composition time offset mode in the output fMP4 TRUN
     * box. For wider player compatibility, set Video composition offsets to Unsigned
     * or leave blank. The earliest presentation time may be greater than zero, and
     * sample composition time offsets will increment using unsigned integers. For
     * strict fMP4 video and audio timing, set Video composition offsets to Signed. The
     * earliest presentation time will be equal to zero, and sample composition time
     * offsets will increment using signed integers.
     */
    inline void SetVideoCompositionOffsets(DashIsoVideoCompositionOffsets&& value) { m_videoCompositionOffsetsHasBeenSet = true; m_videoCompositionOffsets = std::move(value); }

    /**
     * Specify the video sample composition time offset mode in the output fMP4 TRUN
     * box. For wider player compatibility, set Video composition offsets to Unsigned
     * or leave blank. The earliest presentation time may be greater than zero, and
     * sample composition time offsets will increment using unsigned integers. For
     * strict fMP4 video and audio timing, set Video composition offsets to Signed. The
     * earliest presentation time will be equal to zero, and sample composition time
     * offsets will increment using signed integers.
     */
    inline DashIsoGroupSettings& WithVideoCompositionOffsets(const DashIsoVideoCompositionOffsets& value) { SetVideoCompositionOffsets(value); return *this;}

    /**
     * Specify the video sample composition time offset mode in the output fMP4 TRUN
     * box. For wider player compatibility, set Video composition offsets to Unsigned
     * or leave blank. The earliest presentation time may be greater than zero, and
     * sample composition time offsets will increment using unsigned integers. For
     * strict fMP4 video and audio timing, set Video composition offsets to Signed. The
     * earliest presentation time will be equal to zero, and sample composition time
     * offsets will increment using signed integers.
     */
    inline DashIsoGroupSettings& WithVideoCompositionOffsets(DashIsoVideoCompositionOffsets&& value) { SetVideoCompositionOffsets(std::move(value)); return *this;}


    /**
     * If you get an HTTP error in the 400 range when you play back your DASH output,
     * enable this setting and run your transcoding job again. When you enable this
     * setting, the service writes precise segment durations in the DASH manifest. The
     * segment duration information appears inside the SegmentTimeline element, inside
     * SegmentTemplate at the Representation level. When you don't enable this setting,
     * the service writes approximate segment durations in your DASH manifest.
     */
    inline const DashIsoWriteSegmentTimelineInRepresentation& GetWriteSegmentTimelineInRepresentation() const{ return m_writeSegmentTimelineInRepresentation; }

    /**
     * If you get an HTTP error in the 400 range when you play back your DASH output,
     * enable this setting and run your transcoding job again. When you enable this
     * setting, the service writes precise segment durations in the DASH manifest. The
     * segment duration information appears inside the SegmentTimeline element, inside
     * SegmentTemplate at the Representation level. When you don't enable this setting,
     * the service writes approximate segment durations in your DASH manifest.
     */
    inline bool WriteSegmentTimelineInRepresentationHasBeenSet() const { return m_writeSegmentTimelineInRepresentationHasBeenSet; }

    /**
     * If you get an HTTP error in the 400 range when you play back your DASH output,
     * enable this setting and run your transcoding job again. When you enable this
     * setting, the service writes precise segment durations in the DASH manifest. The
     * segment duration information appears inside the SegmentTimeline element, inside
     * SegmentTemplate at the Representation level. When you don't enable this setting,
     * the service writes approximate segment durations in your DASH manifest.
     */
    inline void SetWriteSegmentTimelineInRepresentation(const DashIsoWriteSegmentTimelineInRepresentation& value) { m_writeSegmentTimelineInRepresentationHasBeenSet = true; m_writeSegmentTimelineInRepresentation = value; }

    /**
     * If you get an HTTP error in the 400 range when you play back your DASH output,
     * enable this setting and run your transcoding job again. When you enable this
     * setting, the service writes precise segment durations in the DASH manifest. The
     * segment duration information appears inside the SegmentTimeline element, inside
     * SegmentTemplate at the Representation level. When you don't enable this setting,
     * the service writes approximate segment durations in your DASH manifest.
     */
    inline void SetWriteSegmentTimelineInRepresentation(DashIsoWriteSegmentTimelineInRepresentation&& value) { m_writeSegmentTimelineInRepresentationHasBeenSet = true; m_writeSegmentTimelineInRepresentation = std::move(value); }

    /**
     * If you get an HTTP error in the 400 range when you play back your DASH output,
     * enable this setting and run your transcoding job again. When you enable this
     * setting, the service writes precise segment durations in the DASH manifest. The
     * segment duration information appears inside the SegmentTimeline element, inside
     * SegmentTemplate at the Representation level. When you don't enable this setting,
     * the service writes approximate segment durations in your DASH manifest.
     */
    inline DashIsoGroupSettings& WithWriteSegmentTimelineInRepresentation(const DashIsoWriteSegmentTimelineInRepresentation& value) { SetWriteSegmentTimelineInRepresentation(value); return *this;}

    /**
     * If you get an HTTP error in the 400 range when you play back your DASH output,
     * enable this setting and run your transcoding job again. When you enable this
     * setting, the service writes precise segment durations in the DASH manifest. The
     * segment duration information appears inside the SegmentTimeline element, inside
     * SegmentTemplate at the Representation level. When you don't enable this setting,
     * the service writes approximate segment durations in your DASH manifest.
     */
    inline DashIsoGroupSettings& WithWriteSegmentTimelineInRepresentation(DashIsoWriteSegmentTimelineInRepresentation&& value) { SetWriteSegmentTimelineInRepresentation(std::move(value)); return *this;}

  private:

    Aws::Vector<DashAdditionalManifest> m_additionalManifests;
    bool m_additionalManifestsHasBeenSet = false;

    DashIsoGroupAudioChannelConfigSchemeIdUri m_audioChannelConfigSchemeIdUri;
    bool m_audioChannelConfigSchemeIdUriHasBeenSet = false;

    Aws::String m_baseUrl;
    bool m_baseUrlHasBeenSet = false;

    Aws::String m_destination;
    bool m_destinationHasBeenSet = false;

    DestinationSettings m_destinationSettings;
    bool m_destinationSettingsHasBeenSet = false;

    DashIsoEncryptionSettings m_encryption;
    bool m_encryptionHasBeenSet = false;

    int m_fragmentLength;
    bool m_fragmentLengthHasBeenSet = false;

    DashIsoHbbtvCompliance m_hbbtvCompliance;
    bool m_hbbtvComplianceHasBeenSet = false;

    DashIsoImageBasedTrickPlay m_imageBasedTrickPlay;
    bool m_imageBasedTrickPlayHasBeenSet = false;

    DashIsoImageBasedTrickPlaySettings m_imageBasedTrickPlaySettings;
    bool m_imageBasedTrickPlaySettingsHasBeenSet = false;

    int m_minBufferTime;
    bool m_minBufferTimeHasBeenSet = false;

    double m_minFinalSegmentLength;
    bool m_minFinalSegmentLengthHasBeenSet = false;

    DashIsoMpdManifestBandwidthType m_mpdManifestBandwidthType;
    bool m_mpdManifestBandwidthTypeHasBeenSet = false;

    DashIsoMpdProfile m_mpdProfile;
    bool m_mpdProfileHasBeenSet = false;

    DashIsoPtsOffsetHandlingForBFrames m_ptsOffsetHandlingForBFrames;
    bool m_ptsOffsetHandlingForBFramesHasBeenSet = false;

    DashIsoSegmentControl m_segmentControl;
    bool m_segmentControlHasBeenSet = false;

    int m_segmentLength;
    bool m_segmentLengthHasBeenSet = false;

    DashIsoSegmentLengthControl m_segmentLengthControl;
    bool m_segmentLengthControlHasBeenSet = false;

    DashIsoVideoCompositionOffsets m_videoCompositionOffsets;
    bool m_videoCompositionOffsetsHasBeenSet = false;

    DashIsoWriteSegmentTimelineInRepresentation m_writeSegmentTimelineInRepresentation;
    bool m_writeSegmentTimelineInRepresentationHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
