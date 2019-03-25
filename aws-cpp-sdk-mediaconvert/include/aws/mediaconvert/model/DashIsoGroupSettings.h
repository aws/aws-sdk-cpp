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
#include <aws/mediaconvert/model/DestinationSettings.h>
#include <aws/mediaconvert/model/DashIsoEncryptionSettings.h>
#include <aws/mediaconvert/model/DashIsoHbbtvCompliance.h>
#include <aws/mediaconvert/model/DashIsoSegmentControl.h>
#include <aws/mediaconvert/model/DashIsoWriteSegmentTimelineInRepresentation.h>
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
     * When you enable Precise segment duration in manifests
     * (writeSegmentTimelineInRepresentation), your DASH manifest shows precise segment
     * durations. The segment duration information appears inside the SegmentTimeline
     * element, inside SegmentTemplate at the Representation level. When this feature
     * isn't enabled, the segment durations in your DASH manifest are approximate. The
     * segment duration information appears in the duration attribute of the
     * SegmentTemplate element.
     */
    inline const DashIsoWriteSegmentTimelineInRepresentation& GetWriteSegmentTimelineInRepresentation() const{ return m_writeSegmentTimelineInRepresentation; }

    /**
     * When you enable Precise segment duration in manifests
     * (writeSegmentTimelineInRepresentation), your DASH manifest shows precise segment
     * durations. The segment duration information appears inside the SegmentTimeline
     * element, inside SegmentTemplate at the Representation level. When this feature
     * isn't enabled, the segment durations in your DASH manifest are approximate. The
     * segment duration information appears in the duration attribute of the
     * SegmentTemplate element.
     */
    inline bool WriteSegmentTimelineInRepresentationHasBeenSet() const { return m_writeSegmentTimelineInRepresentationHasBeenSet; }

    /**
     * When you enable Precise segment duration in manifests
     * (writeSegmentTimelineInRepresentation), your DASH manifest shows precise segment
     * durations. The segment duration information appears inside the SegmentTimeline
     * element, inside SegmentTemplate at the Representation level. When this feature
     * isn't enabled, the segment durations in your DASH manifest are approximate. The
     * segment duration information appears in the duration attribute of the
     * SegmentTemplate element.
     */
    inline void SetWriteSegmentTimelineInRepresentation(const DashIsoWriteSegmentTimelineInRepresentation& value) { m_writeSegmentTimelineInRepresentationHasBeenSet = true; m_writeSegmentTimelineInRepresentation = value; }

    /**
     * When you enable Precise segment duration in manifests
     * (writeSegmentTimelineInRepresentation), your DASH manifest shows precise segment
     * durations. The segment duration information appears inside the SegmentTimeline
     * element, inside SegmentTemplate at the Representation level. When this feature
     * isn't enabled, the segment durations in your DASH manifest are approximate. The
     * segment duration information appears in the duration attribute of the
     * SegmentTemplate element.
     */
    inline void SetWriteSegmentTimelineInRepresentation(DashIsoWriteSegmentTimelineInRepresentation&& value) { m_writeSegmentTimelineInRepresentationHasBeenSet = true; m_writeSegmentTimelineInRepresentation = std::move(value); }

    /**
     * When you enable Precise segment duration in manifests
     * (writeSegmentTimelineInRepresentation), your DASH manifest shows precise segment
     * durations. The segment duration information appears inside the SegmentTimeline
     * element, inside SegmentTemplate at the Representation level. When this feature
     * isn't enabled, the segment durations in your DASH manifest are approximate. The
     * segment duration information appears in the duration attribute of the
     * SegmentTemplate element.
     */
    inline DashIsoGroupSettings& WithWriteSegmentTimelineInRepresentation(const DashIsoWriteSegmentTimelineInRepresentation& value) { SetWriteSegmentTimelineInRepresentation(value); return *this;}

    /**
     * When you enable Precise segment duration in manifests
     * (writeSegmentTimelineInRepresentation), your DASH manifest shows precise segment
     * durations. The segment duration information appears inside the SegmentTimeline
     * element, inside SegmentTemplate at the Representation level. When this feature
     * isn't enabled, the segment durations in your DASH manifest are approximate. The
     * segment duration information appears in the duration attribute of the
     * SegmentTemplate element.
     */
    inline DashIsoGroupSettings& WithWriteSegmentTimelineInRepresentation(DashIsoWriteSegmentTimelineInRepresentation&& value) { SetWriteSegmentTimelineInRepresentation(std::move(value)); return *this;}

  private:

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
