/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-meetings/ChimeSDKMeetings_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/chime-sdk-meetings/model/MediaPlacement.h>
#include <aws/chime-sdk-meetings/model/MeetingFeaturesConfiguration.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace ChimeSDKMeetings
{
namespace Model
{

  /**
   * <p>A meeting created using the Amazon Chime SDK.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-meetings-2021-07-15/Meeting">AWS
   * API Reference</a></p>
   */
  class Meeting
  {
  public:
    AWS_CHIMESDKMEETINGS_API Meeting();
    AWS_CHIMESDKMEETINGS_API Meeting(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKMEETINGS_API Meeting& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKMEETINGS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Chime SDK meeting ID.</p>
     */
    inline const Aws::String& GetMeetingId() const{ return m_meetingId; }

    /**
     * <p>The Amazon Chime SDK meeting ID.</p>
     */
    inline bool MeetingIdHasBeenSet() const { return m_meetingIdHasBeenSet; }

    /**
     * <p>The Amazon Chime SDK meeting ID.</p>
     */
    inline void SetMeetingId(const Aws::String& value) { m_meetingIdHasBeenSet = true; m_meetingId = value; }

    /**
     * <p>The Amazon Chime SDK meeting ID.</p>
     */
    inline void SetMeetingId(Aws::String&& value) { m_meetingIdHasBeenSet = true; m_meetingId = std::move(value); }

    /**
     * <p>The Amazon Chime SDK meeting ID.</p>
     */
    inline void SetMeetingId(const char* value) { m_meetingIdHasBeenSet = true; m_meetingId.assign(value); }

    /**
     * <p>The Amazon Chime SDK meeting ID.</p>
     */
    inline Meeting& WithMeetingId(const Aws::String& value) { SetMeetingId(value); return *this;}

    /**
     * <p>The Amazon Chime SDK meeting ID.</p>
     */
    inline Meeting& WithMeetingId(Aws::String&& value) { SetMeetingId(std::move(value)); return *this;}

    /**
     * <p>The Amazon Chime SDK meeting ID.</p>
     */
    inline Meeting& WithMeetingId(const char* value) { SetMeetingId(value); return *this;}


    /**
     * <p>Reserved.</p>
     */
    inline const Aws::String& GetMeetingHostId() const{ return m_meetingHostId; }

    /**
     * <p>Reserved.</p>
     */
    inline bool MeetingHostIdHasBeenSet() const { return m_meetingHostIdHasBeenSet; }

    /**
     * <p>Reserved.</p>
     */
    inline void SetMeetingHostId(const Aws::String& value) { m_meetingHostIdHasBeenSet = true; m_meetingHostId = value; }

    /**
     * <p>Reserved.</p>
     */
    inline void SetMeetingHostId(Aws::String&& value) { m_meetingHostIdHasBeenSet = true; m_meetingHostId = std::move(value); }

    /**
     * <p>Reserved.</p>
     */
    inline void SetMeetingHostId(const char* value) { m_meetingHostIdHasBeenSet = true; m_meetingHostId.assign(value); }

    /**
     * <p>Reserved.</p>
     */
    inline Meeting& WithMeetingHostId(const Aws::String& value) { SetMeetingHostId(value); return *this;}

    /**
     * <p>Reserved.</p>
     */
    inline Meeting& WithMeetingHostId(Aws::String&& value) { SetMeetingHostId(std::move(value)); return *this;}

    /**
     * <p>Reserved.</p>
     */
    inline Meeting& WithMeetingHostId(const char* value) { SetMeetingHostId(value); return *this;}


    /**
     * <p>The external meeting ID.</p>
     */
    inline const Aws::String& GetExternalMeetingId() const{ return m_externalMeetingId; }

    /**
     * <p>The external meeting ID.</p>
     */
    inline bool ExternalMeetingIdHasBeenSet() const { return m_externalMeetingIdHasBeenSet; }

    /**
     * <p>The external meeting ID.</p>
     */
    inline void SetExternalMeetingId(const Aws::String& value) { m_externalMeetingIdHasBeenSet = true; m_externalMeetingId = value; }

    /**
     * <p>The external meeting ID.</p>
     */
    inline void SetExternalMeetingId(Aws::String&& value) { m_externalMeetingIdHasBeenSet = true; m_externalMeetingId = std::move(value); }

    /**
     * <p>The external meeting ID.</p>
     */
    inline void SetExternalMeetingId(const char* value) { m_externalMeetingIdHasBeenSet = true; m_externalMeetingId.assign(value); }

    /**
     * <p>The external meeting ID.</p>
     */
    inline Meeting& WithExternalMeetingId(const Aws::String& value) { SetExternalMeetingId(value); return *this;}

    /**
     * <p>The external meeting ID.</p>
     */
    inline Meeting& WithExternalMeetingId(Aws::String&& value) { SetExternalMeetingId(std::move(value)); return *this;}

    /**
     * <p>The external meeting ID.</p>
     */
    inline Meeting& WithExternalMeetingId(const char* value) { SetExternalMeetingId(value); return *this;}


    /**
     * <p>The Region in which you create the meeting. Available values:
     * <code>af-south-1</code>, <code>ap-northeast-1</code>,
     * <code>ap-northeast-2</code>, <code>ap-south-1</code>,
     * <code>ap-southeast-1</code>, <code>ap-southeast-2</code>,
     * <code>ca-central-1</code>, <code>eu-central-1</code>, <code>eu-north-1</code>,
     * <code>eu-south-1</code>, <code>eu-west-1</code>, <code>eu-west-2</code>,
     * <code>eu-west-3</code>, <code>sa-east-1</code>, <code>us-east-1</code>,
     * <code>us-east-2</code>, <code>us-west-1</code>, <code>us-west-2</code>.</p>
     * <p>Available values in AWS GovCloud (US) Regions: <code>us-gov-east-1</code>,
     * <code>us-gov-west-1</code>.</p>
     */
    inline const Aws::String& GetMediaRegion() const{ return m_mediaRegion; }

    /**
     * <p>The Region in which you create the meeting. Available values:
     * <code>af-south-1</code>, <code>ap-northeast-1</code>,
     * <code>ap-northeast-2</code>, <code>ap-south-1</code>,
     * <code>ap-southeast-1</code>, <code>ap-southeast-2</code>,
     * <code>ca-central-1</code>, <code>eu-central-1</code>, <code>eu-north-1</code>,
     * <code>eu-south-1</code>, <code>eu-west-1</code>, <code>eu-west-2</code>,
     * <code>eu-west-3</code>, <code>sa-east-1</code>, <code>us-east-1</code>,
     * <code>us-east-2</code>, <code>us-west-1</code>, <code>us-west-2</code>.</p>
     * <p>Available values in AWS GovCloud (US) Regions: <code>us-gov-east-1</code>,
     * <code>us-gov-west-1</code>.</p>
     */
    inline bool MediaRegionHasBeenSet() const { return m_mediaRegionHasBeenSet; }

    /**
     * <p>The Region in which you create the meeting. Available values:
     * <code>af-south-1</code>, <code>ap-northeast-1</code>,
     * <code>ap-northeast-2</code>, <code>ap-south-1</code>,
     * <code>ap-southeast-1</code>, <code>ap-southeast-2</code>,
     * <code>ca-central-1</code>, <code>eu-central-1</code>, <code>eu-north-1</code>,
     * <code>eu-south-1</code>, <code>eu-west-1</code>, <code>eu-west-2</code>,
     * <code>eu-west-3</code>, <code>sa-east-1</code>, <code>us-east-1</code>,
     * <code>us-east-2</code>, <code>us-west-1</code>, <code>us-west-2</code>.</p>
     * <p>Available values in AWS GovCloud (US) Regions: <code>us-gov-east-1</code>,
     * <code>us-gov-west-1</code>.</p>
     */
    inline void SetMediaRegion(const Aws::String& value) { m_mediaRegionHasBeenSet = true; m_mediaRegion = value; }

    /**
     * <p>The Region in which you create the meeting. Available values:
     * <code>af-south-1</code>, <code>ap-northeast-1</code>,
     * <code>ap-northeast-2</code>, <code>ap-south-1</code>,
     * <code>ap-southeast-1</code>, <code>ap-southeast-2</code>,
     * <code>ca-central-1</code>, <code>eu-central-1</code>, <code>eu-north-1</code>,
     * <code>eu-south-1</code>, <code>eu-west-1</code>, <code>eu-west-2</code>,
     * <code>eu-west-3</code>, <code>sa-east-1</code>, <code>us-east-1</code>,
     * <code>us-east-2</code>, <code>us-west-1</code>, <code>us-west-2</code>.</p>
     * <p>Available values in AWS GovCloud (US) Regions: <code>us-gov-east-1</code>,
     * <code>us-gov-west-1</code>.</p>
     */
    inline void SetMediaRegion(Aws::String&& value) { m_mediaRegionHasBeenSet = true; m_mediaRegion = std::move(value); }

    /**
     * <p>The Region in which you create the meeting. Available values:
     * <code>af-south-1</code>, <code>ap-northeast-1</code>,
     * <code>ap-northeast-2</code>, <code>ap-south-1</code>,
     * <code>ap-southeast-1</code>, <code>ap-southeast-2</code>,
     * <code>ca-central-1</code>, <code>eu-central-1</code>, <code>eu-north-1</code>,
     * <code>eu-south-1</code>, <code>eu-west-1</code>, <code>eu-west-2</code>,
     * <code>eu-west-3</code>, <code>sa-east-1</code>, <code>us-east-1</code>,
     * <code>us-east-2</code>, <code>us-west-1</code>, <code>us-west-2</code>.</p>
     * <p>Available values in AWS GovCloud (US) Regions: <code>us-gov-east-1</code>,
     * <code>us-gov-west-1</code>.</p>
     */
    inline void SetMediaRegion(const char* value) { m_mediaRegionHasBeenSet = true; m_mediaRegion.assign(value); }

    /**
     * <p>The Region in which you create the meeting. Available values:
     * <code>af-south-1</code>, <code>ap-northeast-1</code>,
     * <code>ap-northeast-2</code>, <code>ap-south-1</code>,
     * <code>ap-southeast-1</code>, <code>ap-southeast-2</code>,
     * <code>ca-central-1</code>, <code>eu-central-1</code>, <code>eu-north-1</code>,
     * <code>eu-south-1</code>, <code>eu-west-1</code>, <code>eu-west-2</code>,
     * <code>eu-west-3</code>, <code>sa-east-1</code>, <code>us-east-1</code>,
     * <code>us-east-2</code>, <code>us-west-1</code>, <code>us-west-2</code>.</p>
     * <p>Available values in AWS GovCloud (US) Regions: <code>us-gov-east-1</code>,
     * <code>us-gov-west-1</code>.</p>
     */
    inline Meeting& WithMediaRegion(const Aws::String& value) { SetMediaRegion(value); return *this;}

    /**
     * <p>The Region in which you create the meeting. Available values:
     * <code>af-south-1</code>, <code>ap-northeast-1</code>,
     * <code>ap-northeast-2</code>, <code>ap-south-1</code>,
     * <code>ap-southeast-1</code>, <code>ap-southeast-2</code>,
     * <code>ca-central-1</code>, <code>eu-central-1</code>, <code>eu-north-1</code>,
     * <code>eu-south-1</code>, <code>eu-west-1</code>, <code>eu-west-2</code>,
     * <code>eu-west-3</code>, <code>sa-east-1</code>, <code>us-east-1</code>,
     * <code>us-east-2</code>, <code>us-west-1</code>, <code>us-west-2</code>.</p>
     * <p>Available values in AWS GovCloud (US) Regions: <code>us-gov-east-1</code>,
     * <code>us-gov-west-1</code>.</p>
     */
    inline Meeting& WithMediaRegion(Aws::String&& value) { SetMediaRegion(std::move(value)); return *this;}

    /**
     * <p>The Region in which you create the meeting. Available values:
     * <code>af-south-1</code>, <code>ap-northeast-1</code>,
     * <code>ap-northeast-2</code>, <code>ap-south-1</code>,
     * <code>ap-southeast-1</code>, <code>ap-southeast-2</code>,
     * <code>ca-central-1</code>, <code>eu-central-1</code>, <code>eu-north-1</code>,
     * <code>eu-south-1</code>, <code>eu-west-1</code>, <code>eu-west-2</code>,
     * <code>eu-west-3</code>, <code>sa-east-1</code>, <code>us-east-1</code>,
     * <code>us-east-2</code>, <code>us-west-1</code>, <code>us-west-2</code>.</p>
     * <p>Available values in AWS GovCloud (US) Regions: <code>us-gov-east-1</code>,
     * <code>us-gov-west-1</code>.</p>
     */
    inline Meeting& WithMediaRegion(const char* value) { SetMediaRegion(value); return *this;}


    /**
     * <p>The media placement for the meeting.</p>
     */
    inline const MediaPlacement& GetMediaPlacement() const{ return m_mediaPlacement; }

    /**
     * <p>The media placement for the meeting.</p>
     */
    inline bool MediaPlacementHasBeenSet() const { return m_mediaPlacementHasBeenSet; }

    /**
     * <p>The media placement for the meeting.</p>
     */
    inline void SetMediaPlacement(const MediaPlacement& value) { m_mediaPlacementHasBeenSet = true; m_mediaPlacement = value; }

    /**
     * <p>The media placement for the meeting.</p>
     */
    inline void SetMediaPlacement(MediaPlacement&& value) { m_mediaPlacementHasBeenSet = true; m_mediaPlacement = std::move(value); }

    /**
     * <p>The media placement for the meeting.</p>
     */
    inline Meeting& WithMediaPlacement(const MediaPlacement& value) { SetMediaPlacement(value); return *this;}

    /**
     * <p>The media placement for the meeting.</p>
     */
    inline Meeting& WithMediaPlacement(MediaPlacement&& value) { SetMediaPlacement(std::move(value)); return *this;}


    /**
     * <p>The features available to a meeting, such as Amazon Voice Focus.</p>
     */
    inline const MeetingFeaturesConfiguration& GetMeetingFeatures() const{ return m_meetingFeatures; }

    /**
     * <p>The features available to a meeting, such as Amazon Voice Focus.</p>
     */
    inline bool MeetingFeaturesHasBeenSet() const { return m_meetingFeaturesHasBeenSet; }

    /**
     * <p>The features available to a meeting, such as Amazon Voice Focus.</p>
     */
    inline void SetMeetingFeatures(const MeetingFeaturesConfiguration& value) { m_meetingFeaturesHasBeenSet = true; m_meetingFeatures = value; }

    /**
     * <p>The features available to a meeting, such as Amazon Voice Focus.</p>
     */
    inline void SetMeetingFeatures(MeetingFeaturesConfiguration&& value) { m_meetingFeaturesHasBeenSet = true; m_meetingFeatures = std::move(value); }

    /**
     * <p>The features available to a meeting, such as Amazon Voice Focus.</p>
     */
    inline Meeting& WithMeetingFeatures(const MeetingFeaturesConfiguration& value) { SetMeetingFeatures(value); return *this;}

    /**
     * <p>The features available to a meeting, such as Amazon Voice Focus.</p>
     */
    inline Meeting& WithMeetingFeatures(MeetingFeaturesConfiguration&& value) { SetMeetingFeatures(std::move(value)); return *this;}


    /**
     * <p>When specified, replicates the media from the primary meeting to this
     * meeting.</p>
     */
    inline const Aws::String& GetPrimaryMeetingId() const{ return m_primaryMeetingId; }

    /**
     * <p>When specified, replicates the media from the primary meeting to this
     * meeting.</p>
     */
    inline bool PrimaryMeetingIdHasBeenSet() const { return m_primaryMeetingIdHasBeenSet; }

    /**
     * <p>When specified, replicates the media from the primary meeting to this
     * meeting.</p>
     */
    inline void SetPrimaryMeetingId(const Aws::String& value) { m_primaryMeetingIdHasBeenSet = true; m_primaryMeetingId = value; }

    /**
     * <p>When specified, replicates the media from the primary meeting to this
     * meeting.</p>
     */
    inline void SetPrimaryMeetingId(Aws::String&& value) { m_primaryMeetingIdHasBeenSet = true; m_primaryMeetingId = std::move(value); }

    /**
     * <p>When specified, replicates the media from the primary meeting to this
     * meeting.</p>
     */
    inline void SetPrimaryMeetingId(const char* value) { m_primaryMeetingIdHasBeenSet = true; m_primaryMeetingId.assign(value); }

    /**
     * <p>When specified, replicates the media from the primary meeting to this
     * meeting.</p>
     */
    inline Meeting& WithPrimaryMeetingId(const Aws::String& value) { SetPrimaryMeetingId(value); return *this;}

    /**
     * <p>When specified, replicates the media from the primary meeting to this
     * meeting.</p>
     */
    inline Meeting& WithPrimaryMeetingId(Aws::String&& value) { SetPrimaryMeetingId(std::move(value)); return *this;}

    /**
     * <p>When specified, replicates the media from the primary meeting to this
     * meeting.</p>
     */
    inline Meeting& WithPrimaryMeetingId(const char* value) { SetPrimaryMeetingId(value); return *this;}


    /**
     * <p>Array of strings.</p>
     */
    inline const Aws::Vector<Aws::String>& GetTenantIds() const{ return m_tenantIds; }

    /**
     * <p>Array of strings.</p>
     */
    inline bool TenantIdsHasBeenSet() const { return m_tenantIdsHasBeenSet; }

    /**
     * <p>Array of strings.</p>
     */
    inline void SetTenantIds(const Aws::Vector<Aws::String>& value) { m_tenantIdsHasBeenSet = true; m_tenantIds = value; }

    /**
     * <p>Array of strings.</p>
     */
    inline void SetTenantIds(Aws::Vector<Aws::String>&& value) { m_tenantIdsHasBeenSet = true; m_tenantIds = std::move(value); }

    /**
     * <p>Array of strings.</p>
     */
    inline Meeting& WithTenantIds(const Aws::Vector<Aws::String>& value) { SetTenantIds(value); return *this;}

    /**
     * <p>Array of strings.</p>
     */
    inline Meeting& WithTenantIds(Aws::Vector<Aws::String>&& value) { SetTenantIds(std::move(value)); return *this;}

    /**
     * <p>Array of strings.</p>
     */
    inline Meeting& AddTenantIds(const Aws::String& value) { m_tenantIdsHasBeenSet = true; m_tenantIds.push_back(value); return *this; }

    /**
     * <p>Array of strings.</p>
     */
    inline Meeting& AddTenantIds(Aws::String&& value) { m_tenantIdsHasBeenSet = true; m_tenantIds.push_back(std::move(value)); return *this; }

    /**
     * <p>Array of strings.</p>
     */
    inline Meeting& AddTenantIds(const char* value) { m_tenantIdsHasBeenSet = true; m_tenantIds.push_back(value); return *this; }


    /**
     * <p>The ARN of the meeting.</p>
     */
    inline const Aws::String& GetMeetingArn() const{ return m_meetingArn; }

    /**
     * <p>The ARN of the meeting.</p>
     */
    inline bool MeetingArnHasBeenSet() const { return m_meetingArnHasBeenSet; }

    /**
     * <p>The ARN of the meeting.</p>
     */
    inline void SetMeetingArn(const Aws::String& value) { m_meetingArnHasBeenSet = true; m_meetingArn = value; }

    /**
     * <p>The ARN of the meeting.</p>
     */
    inline void SetMeetingArn(Aws::String&& value) { m_meetingArnHasBeenSet = true; m_meetingArn = std::move(value); }

    /**
     * <p>The ARN of the meeting.</p>
     */
    inline void SetMeetingArn(const char* value) { m_meetingArnHasBeenSet = true; m_meetingArn.assign(value); }

    /**
     * <p>The ARN of the meeting.</p>
     */
    inline Meeting& WithMeetingArn(const Aws::String& value) { SetMeetingArn(value); return *this;}

    /**
     * <p>The ARN of the meeting.</p>
     */
    inline Meeting& WithMeetingArn(Aws::String&& value) { SetMeetingArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the meeting.</p>
     */
    inline Meeting& WithMeetingArn(const char* value) { SetMeetingArn(value); return *this;}

  private:

    Aws::String m_meetingId;
    bool m_meetingIdHasBeenSet = false;

    Aws::String m_meetingHostId;
    bool m_meetingHostIdHasBeenSet = false;

    Aws::String m_externalMeetingId;
    bool m_externalMeetingIdHasBeenSet = false;

    Aws::String m_mediaRegion;
    bool m_mediaRegionHasBeenSet = false;

    MediaPlacement m_mediaPlacement;
    bool m_mediaPlacementHasBeenSet = false;

    MeetingFeaturesConfiguration m_meetingFeatures;
    bool m_meetingFeaturesHasBeenSet = false;

    Aws::String m_primaryMeetingId;
    bool m_primaryMeetingIdHasBeenSet = false;

    Aws::Vector<Aws::String> m_tenantIds;
    bool m_tenantIdsHasBeenSet = false;

    Aws::String m_meetingArn;
    bool m_meetingArnHasBeenSet = false;
  };

} // namespace Model
} // namespace ChimeSDKMeetings
} // namespace Aws
