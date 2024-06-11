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


    ///@{
    /**
     * <p>The Amazon Chime SDK meeting ID.</p>
     */
    inline const Aws::String& GetMeetingId() const{ return m_meetingId; }
    inline bool MeetingIdHasBeenSet() const { return m_meetingIdHasBeenSet; }
    inline void SetMeetingId(const Aws::String& value) { m_meetingIdHasBeenSet = true; m_meetingId = value; }
    inline void SetMeetingId(Aws::String&& value) { m_meetingIdHasBeenSet = true; m_meetingId = std::move(value); }
    inline void SetMeetingId(const char* value) { m_meetingIdHasBeenSet = true; m_meetingId.assign(value); }
    inline Meeting& WithMeetingId(const Aws::String& value) { SetMeetingId(value); return *this;}
    inline Meeting& WithMeetingId(Aws::String&& value) { SetMeetingId(std::move(value)); return *this;}
    inline Meeting& WithMeetingId(const char* value) { SetMeetingId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Reserved.</p>
     */
    inline const Aws::String& GetMeetingHostId() const{ return m_meetingHostId; }
    inline bool MeetingHostIdHasBeenSet() const { return m_meetingHostIdHasBeenSet; }
    inline void SetMeetingHostId(const Aws::String& value) { m_meetingHostIdHasBeenSet = true; m_meetingHostId = value; }
    inline void SetMeetingHostId(Aws::String&& value) { m_meetingHostIdHasBeenSet = true; m_meetingHostId = std::move(value); }
    inline void SetMeetingHostId(const char* value) { m_meetingHostIdHasBeenSet = true; m_meetingHostId.assign(value); }
    inline Meeting& WithMeetingHostId(const Aws::String& value) { SetMeetingHostId(value); return *this;}
    inline Meeting& WithMeetingHostId(Aws::String&& value) { SetMeetingHostId(std::move(value)); return *this;}
    inline Meeting& WithMeetingHostId(const char* value) { SetMeetingHostId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The external meeting ID.</p> <p>Pattern:
     * <code>[-_&amp;@+=,(){}\[\]\/«».:|'"#a-zA-Z0-9À-ÿ\s]*</code> </p> <p>Values that
     * begin with <code>aws:</code> are reserved. You can't configure a value that uses
     * this prefix. Case insensitive.</p>
     */
    inline const Aws::String& GetExternalMeetingId() const{ return m_externalMeetingId; }
    inline bool ExternalMeetingIdHasBeenSet() const { return m_externalMeetingIdHasBeenSet; }
    inline void SetExternalMeetingId(const Aws::String& value) { m_externalMeetingIdHasBeenSet = true; m_externalMeetingId = value; }
    inline void SetExternalMeetingId(Aws::String&& value) { m_externalMeetingIdHasBeenSet = true; m_externalMeetingId = std::move(value); }
    inline void SetExternalMeetingId(const char* value) { m_externalMeetingIdHasBeenSet = true; m_externalMeetingId.assign(value); }
    inline Meeting& WithExternalMeetingId(const Aws::String& value) { SetExternalMeetingId(value); return *this;}
    inline Meeting& WithExternalMeetingId(Aws::String&& value) { SetExternalMeetingId(std::move(value)); return *this;}
    inline Meeting& WithExternalMeetingId(const char* value) { SetExternalMeetingId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Region in which you create the meeting. Available values:
     * <code>af-south-1</code>, <code>ap-northeast-1</code>,
     * <code>ap-northeast-2</code>, <code>ap-south-1</code>,
     * <code>ap-southeast-1</code>, <code>ap-southeast-2</code>,
     * <code>ca-central-1</code>, <code>eu-central-1</code>, <code>eu-north-1</code>,
     * <code>eu-south-1</code>, <code>eu-west-1</code>, <code>eu-west-2</code>,
     * <code>eu-west-3</code>, <code>sa-east-1</code>, <code>us-east-1</code>,
     * <code>us-east-2</code>, <code>us-west-1</code>, <code>us-west-2</code>.</p>
     * <p>Available values in Amazon Web Services GovCloud (US) Regions:
     * <code>us-gov-east-1</code>, <code>us-gov-west-1</code>.</p>
     */
    inline const Aws::String& GetMediaRegion() const{ return m_mediaRegion; }
    inline bool MediaRegionHasBeenSet() const { return m_mediaRegionHasBeenSet; }
    inline void SetMediaRegion(const Aws::String& value) { m_mediaRegionHasBeenSet = true; m_mediaRegion = value; }
    inline void SetMediaRegion(Aws::String&& value) { m_mediaRegionHasBeenSet = true; m_mediaRegion = std::move(value); }
    inline void SetMediaRegion(const char* value) { m_mediaRegionHasBeenSet = true; m_mediaRegion.assign(value); }
    inline Meeting& WithMediaRegion(const Aws::String& value) { SetMediaRegion(value); return *this;}
    inline Meeting& WithMediaRegion(Aws::String&& value) { SetMediaRegion(std::move(value)); return *this;}
    inline Meeting& WithMediaRegion(const char* value) { SetMediaRegion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The media placement for the meeting.</p>
     */
    inline const MediaPlacement& GetMediaPlacement() const{ return m_mediaPlacement; }
    inline bool MediaPlacementHasBeenSet() const { return m_mediaPlacementHasBeenSet; }
    inline void SetMediaPlacement(const MediaPlacement& value) { m_mediaPlacementHasBeenSet = true; m_mediaPlacement = value; }
    inline void SetMediaPlacement(MediaPlacement&& value) { m_mediaPlacementHasBeenSet = true; m_mediaPlacement = std::move(value); }
    inline Meeting& WithMediaPlacement(const MediaPlacement& value) { SetMediaPlacement(value); return *this;}
    inline Meeting& WithMediaPlacement(MediaPlacement&& value) { SetMediaPlacement(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The features available to a meeting, such as echo reduction.</p>
     */
    inline const MeetingFeaturesConfiguration& GetMeetingFeatures() const{ return m_meetingFeatures; }
    inline bool MeetingFeaturesHasBeenSet() const { return m_meetingFeaturesHasBeenSet; }
    inline void SetMeetingFeatures(const MeetingFeaturesConfiguration& value) { m_meetingFeaturesHasBeenSet = true; m_meetingFeatures = value; }
    inline void SetMeetingFeatures(MeetingFeaturesConfiguration&& value) { m_meetingFeaturesHasBeenSet = true; m_meetingFeatures = std::move(value); }
    inline Meeting& WithMeetingFeatures(const MeetingFeaturesConfiguration& value) { SetMeetingFeatures(value); return *this;}
    inline Meeting& WithMeetingFeatures(MeetingFeaturesConfiguration&& value) { SetMeetingFeatures(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>When specified, replicates the media from the primary meeting to this
     * meeting.</p>
     */
    inline const Aws::String& GetPrimaryMeetingId() const{ return m_primaryMeetingId; }
    inline bool PrimaryMeetingIdHasBeenSet() const { return m_primaryMeetingIdHasBeenSet; }
    inline void SetPrimaryMeetingId(const Aws::String& value) { m_primaryMeetingIdHasBeenSet = true; m_primaryMeetingId = value; }
    inline void SetPrimaryMeetingId(Aws::String&& value) { m_primaryMeetingIdHasBeenSet = true; m_primaryMeetingId = std::move(value); }
    inline void SetPrimaryMeetingId(const char* value) { m_primaryMeetingIdHasBeenSet = true; m_primaryMeetingId.assign(value); }
    inline Meeting& WithPrimaryMeetingId(const Aws::String& value) { SetPrimaryMeetingId(value); return *this;}
    inline Meeting& WithPrimaryMeetingId(Aws::String&& value) { SetPrimaryMeetingId(std::move(value)); return *this;}
    inline Meeting& WithPrimaryMeetingId(const char* value) { SetPrimaryMeetingId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Array of strings.</p>
     */
    inline const Aws::Vector<Aws::String>& GetTenantIds() const{ return m_tenantIds; }
    inline bool TenantIdsHasBeenSet() const { return m_tenantIdsHasBeenSet; }
    inline void SetTenantIds(const Aws::Vector<Aws::String>& value) { m_tenantIdsHasBeenSet = true; m_tenantIds = value; }
    inline void SetTenantIds(Aws::Vector<Aws::String>&& value) { m_tenantIdsHasBeenSet = true; m_tenantIds = std::move(value); }
    inline Meeting& WithTenantIds(const Aws::Vector<Aws::String>& value) { SetTenantIds(value); return *this;}
    inline Meeting& WithTenantIds(Aws::Vector<Aws::String>&& value) { SetTenantIds(std::move(value)); return *this;}
    inline Meeting& AddTenantIds(const Aws::String& value) { m_tenantIdsHasBeenSet = true; m_tenantIds.push_back(value); return *this; }
    inline Meeting& AddTenantIds(Aws::String&& value) { m_tenantIdsHasBeenSet = true; m_tenantIds.push_back(std::move(value)); return *this; }
    inline Meeting& AddTenantIds(const char* value) { m_tenantIdsHasBeenSet = true; m_tenantIds.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The ARN of the meeting.</p>
     */
    inline const Aws::String& GetMeetingArn() const{ return m_meetingArn; }
    inline bool MeetingArnHasBeenSet() const { return m_meetingArnHasBeenSet; }
    inline void SetMeetingArn(const Aws::String& value) { m_meetingArnHasBeenSet = true; m_meetingArn = value; }
    inline void SetMeetingArn(Aws::String&& value) { m_meetingArnHasBeenSet = true; m_meetingArn = std::move(value); }
    inline void SetMeetingArn(const char* value) { m_meetingArnHasBeenSet = true; m_meetingArn.assign(value); }
    inline Meeting& WithMeetingArn(const Aws::String& value) { SetMeetingArn(value); return *this;}
    inline Meeting& WithMeetingArn(Aws::String&& value) { SetMeetingArn(std::move(value)); return *this;}
    inline Meeting& WithMeetingArn(const char* value) { SetMeetingArn(value); return *this;}
    ///@}
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
