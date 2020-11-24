/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconvert/MediaConvert_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mediaconvert/model/DestinationSettings.h>
#include <aws/mediaconvert/model/DashIsoEncryptionSettings.h>
#include <aws/mediaconvert/model/DashIsoHbbtvCompliance.h>
#include <aws/mediaconvert/model/DashIsoMpdProfile.h>
#include <aws/mediaconvert/model/DashIsoSegmentControl.h>
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
   * Required when you set (Type) under (OutputGroups)>(OutputGroupSettings) to
   * DASH_ISO_GROUP_SETTINGS.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/DashIsoGroupSettings">AWS
   * API Reference</a></p>
   */
  class AWS_MEDIACONVERT_API DashIsoGroupSettings
  {
  public:
    DashIsoGroupSettings();
    DashIsoGroupSettings(Aws::Utils::Json::JsonView jsonValue);
    DashIsoGroupSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


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
     * Length of mpd segments to create (in seconds). Note that segments will end on
     * the next keyframe after this number of seconds, so actual segment length may be
     * longer. When Emit Single File is checked, the segmentation is internal to a
     * single output file and it does not cause the creation of many output files as in
     * other output types.
     */
    inline int GetSegmentLength() const{ return m_segmentLength; }

    /**
     * Length of mpd segments to create (in seconds). Note that segments will end on
     * the next keyframe after this number of seconds, so actual segment length may be
     * longer. When Emit Single File is checked, the segmentation is internal to a
     * single output file and it does not cause the creation of many output files as in
     * other output types.
     */
    inline bool SegmentLengthHasBeenSet() const { return m_segmentLengthHasBeenSet; }

    /**
     * Length of mpd segments to create (in seconds). Note that segments will end on
     * the next keyframe after this number of seconds, so actual segment length may be
     * longer. When Emit Single File is checked, the segmentation is internal to a
     * single output file and it does not cause the creation of many output files as in
     * other output types.
     */
    inline void SetSegmentLength(int value) { m_segmentLengthHasBeenSet = true; m_segmentLength = value; }

    /**
     * Length of mpd segments to create (in seconds). Note that segments will end on
     * the next keyframe after this number of seconds, so actual segment length may be
     * longer. When Emit Single File is checked, the segmentation is internal to a
     * single output file and it does not cause the creation of many output files as in
     * other output types.
     */
    inline DashIsoGroupSettings& WithSegmentLength(int value) { SetSegmentLength(value); return *this;}


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
    bool m_additionalManifestsHasBeenSet;

    Aws::String m_baseUrl;
    bool m_baseUrlHasBeenSet;

    Aws::String m_destination;
    bool m_destinationHasBeenSet;

    DestinationSettings m_destinationSettings;
    bool m_destinationSettingsHasBeenSet;

    DashIsoEncryptionSettings m_encryption;
    bool m_encryptionHasBeenSet;

    int m_fragmentLength;
    bool m_fragmentLengthHasBeenSet;

    DashIsoHbbtvCompliance m_hbbtvCompliance;
    bool m_hbbtvComplianceHasBeenSet;

    int m_minBufferTime;
    bool m_minBufferTimeHasBeenSet;

    double m_minFinalSegmentLength;
    bool m_minFinalSegmentLengthHasBeenSet;

    DashIsoMpdProfile m_mpdProfile;
    bool m_mpdProfileHasBeenSet;

    DashIsoSegmentControl m_segmentControl;
    bool m_segmentControlHasBeenSet;

    int m_segmentLength;
    bool m_segmentLengthHasBeenSet;

    DashIsoWriteSegmentTimelineInRepresentation m_writeSegmentTimelineInRepresentation;
    bool m_writeSegmentTimelineInRepresentationHasBeenSet;
  };

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
