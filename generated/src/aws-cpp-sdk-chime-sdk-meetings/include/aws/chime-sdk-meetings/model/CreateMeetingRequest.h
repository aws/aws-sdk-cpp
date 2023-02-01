/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-meetings/ChimeSDKMeetings_EXPORTS.h>
#include <aws/chime-sdk-meetings/ChimeSDKMeetingsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/chime-sdk-meetings/model/NotificationsConfiguration.h>
#include <aws/chime-sdk-meetings/model/MeetingFeaturesConfiguration.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/chime-sdk-meetings/model/Tag.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace ChimeSDKMeetings
{
namespace Model
{

  /**
   */
  class CreateMeetingRequest : public ChimeSDKMeetingsRequest
  {
  public:
    AWS_CHIMESDKMEETINGS_API CreateMeetingRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateMeeting"; }

    AWS_CHIMESDKMEETINGS_API Aws::String SerializePayload() const override;


    /**
     * <p>The unique identifier for the client request. Use a different token for
     * different meetings.</p>
     */
    inline const Aws::String& GetClientRequestToken() const{ return m_clientRequestToken; }

    /**
     * <p>The unique identifier for the client request. Use a different token for
     * different meetings.</p>
     */
    inline bool ClientRequestTokenHasBeenSet() const { return m_clientRequestTokenHasBeenSet; }

    /**
     * <p>The unique identifier for the client request. Use a different token for
     * different meetings.</p>
     */
    inline void SetClientRequestToken(const Aws::String& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = value; }

    /**
     * <p>The unique identifier for the client request. Use a different token for
     * different meetings.</p>
     */
    inline void SetClientRequestToken(Aws::String&& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = std::move(value); }

    /**
     * <p>The unique identifier for the client request. Use a different token for
     * different meetings.</p>
     */
    inline void SetClientRequestToken(const char* value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken.assign(value); }

    /**
     * <p>The unique identifier for the client request. Use a different token for
     * different meetings.</p>
     */
    inline CreateMeetingRequest& WithClientRequestToken(const Aws::String& value) { SetClientRequestToken(value); return *this;}

    /**
     * <p>The unique identifier for the client request. Use a different token for
     * different meetings.</p>
     */
    inline CreateMeetingRequest& WithClientRequestToken(Aws::String&& value) { SetClientRequestToken(std::move(value)); return *this;}

    /**
     * <p>The unique identifier for the client request. Use a different token for
     * different meetings.</p>
     */
    inline CreateMeetingRequest& WithClientRequestToken(const char* value) { SetClientRequestToken(value); return *this;}


    /**
     * <p>The Region in which to create the meeting.</p> <p> Available values:
     * <code>af-south-1</code>, <code>ap-northeast-1</code>,
     * <code>ap-northeast-2</code>, <code>ap-south-1</code>,
     * <code>ap-southeast-1</code>, <code>ap-southeast-2</code>,
     * <code>ca-central-1</code>, <code>eu-central-1</code>, <code>eu-north-1</code>,
     * <code>eu-south-1</code>, <code>eu-west-1</code>, <code>eu-west-2</code>,
     * <code>eu-west-3</code>, <code>sa-east-1</code>, <code>us-east-1</code>,
     * <code>us-east-2</code>, <code>us-west-1</code>, <code>us-west-2</code>. </p>
     * <p>Available values in AWS GovCloud (US) Regions: <code>us-gov-east-1</code>,
     * <code>us-gov-west-1</code>.</p>
     */
    inline const Aws::String& GetMediaRegion() const{ return m_mediaRegion; }

    /**
     * <p>The Region in which to create the meeting.</p> <p> Available values:
     * <code>af-south-1</code>, <code>ap-northeast-1</code>,
     * <code>ap-northeast-2</code>, <code>ap-south-1</code>,
     * <code>ap-southeast-1</code>, <code>ap-southeast-2</code>,
     * <code>ca-central-1</code>, <code>eu-central-1</code>, <code>eu-north-1</code>,
     * <code>eu-south-1</code>, <code>eu-west-1</code>, <code>eu-west-2</code>,
     * <code>eu-west-3</code>, <code>sa-east-1</code>, <code>us-east-1</code>,
     * <code>us-east-2</code>, <code>us-west-1</code>, <code>us-west-2</code>. </p>
     * <p>Available values in AWS GovCloud (US) Regions: <code>us-gov-east-1</code>,
     * <code>us-gov-west-1</code>.</p>
     */
    inline bool MediaRegionHasBeenSet() const { return m_mediaRegionHasBeenSet; }

    /**
     * <p>The Region in which to create the meeting.</p> <p> Available values:
     * <code>af-south-1</code>, <code>ap-northeast-1</code>,
     * <code>ap-northeast-2</code>, <code>ap-south-1</code>,
     * <code>ap-southeast-1</code>, <code>ap-southeast-2</code>,
     * <code>ca-central-1</code>, <code>eu-central-1</code>, <code>eu-north-1</code>,
     * <code>eu-south-1</code>, <code>eu-west-1</code>, <code>eu-west-2</code>,
     * <code>eu-west-3</code>, <code>sa-east-1</code>, <code>us-east-1</code>,
     * <code>us-east-2</code>, <code>us-west-1</code>, <code>us-west-2</code>. </p>
     * <p>Available values in AWS GovCloud (US) Regions: <code>us-gov-east-1</code>,
     * <code>us-gov-west-1</code>.</p>
     */
    inline void SetMediaRegion(const Aws::String& value) { m_mediaRegionHasBeenSet = true; m_mediaRegion = value; }

    /**
     * <p>The Region in which to create the meeting.</p> <p> Available values:
     * <code>af-south-1</code>, <code>ap-northeast-1</code>,
     * <code>ap-northeast-2</code>, <code>ap-south-1</code>,
     * <code>ap-southeast-1</code>, <code>ap-southeast-2</code>,
     * <code>ca-central-1</code>, <code>eu-central-1</code>, <code>eu-north-1</code>,
     * <code>eu-south-1</code>, <code>eu-west-1</code>, <code>eu-west-2</code>,
     * <code>eu-west-3</code>, <code>sa-east-1</code>, <code>us-east-1</code>,
     * <code>us-east-2</code>, <code>us-west-1</code>, <code>us-west-2</code>. </p>
     * <p>Available values in AWS GovCloud (US) Regions: <code>us-gov-east-1</code>,
     * <code>us-gov-west-1</code>.</p>
     */
    inline void SetMediaRegion(Aws::String&& value) { m_mediaRegionHasBeenSet = true; m_mediaRegion = std::move(value); }

    /**
     * <p>The Region in which to create the meeting.</p> <p> Available values:
     * <code>af-south-1</code>, <code>ap-northeast-1</code>,
     * <code>ap-northeast-2</code>, <code>ap-south-1</code>,
     * <code>ap-southeast-1</code>, <code>ap-southeast-2</code>,
     * <code>ca-central-1</code>, <code>eu-central-1</code>, <code>eu-north-1</code>,
     * <code>eu-south-1</code>, <code>eu-west-1</code>, <code>eu-west-2</code>,
     * <code>eu-west-3</code>, <code>sa-east-1</code>, <code>us-east-1</code>,
     * <code>us-east-2</code>, <code>us-west-1</code>, <code>us-west-2</code>. </p>
     * <p>Available values in AWS GovCloud (US) Regions: <code>us-gov-east-1</code>,
     * <code>us-gov-west-1</code>.</p>
     */
    inline void SetMediaRegion(const char* value) { m_mediaRegionHasBeenSet = true; m_mediaRegion.assign(value); }

    /**
     * <p>The Region in which to create the meeting.</p> <p> Available values:
     * <code>af-south-1</code>, <code>ap-northeast-1</code>,
     * <code>ap-northeast-2</code>, <code>ap-south-1</code>,
     * <code>ap-southeast-1</code>, <code>ap-southeast-2</code>,
     * <code>ca-central-1</code>, <code>eu-central-1</code>, <code>eu-north-1</code>,
     * <code>eu-south-1</code>, <code>eu-west-1</code>, <code>eu-west-2</code>,
     * <code>eu-west-3</code>, <code>sa-east-1</code>, <code>us-east-1</code>,
     * <code>us-east-2</code>, <code>us-west-1</code>, <code>us-west-2</code>. </p>
     * <p>Available values in AWS GovCloud (US) Regions: <code>us-gov-east-1</code>,
     * <code>us-gov-west-1</code>.</p>
     */
    inline CreateMeetingRequest& WithMediaRegion(const Aws::String& value) { SetMediaRegion(value); return *this;}

    /**
     * <p>The Region in which to create the meeting.</p> <p> Available values:
     * <code>af-south-1</code>, <code>ap-northeast-1</code>,
     * <code>ap-northeast-2</code>, <code>ap-south-1</code>,
     * <code>ap-southeast-1</code>, <code>ap-southeast-2</code>,
     * <code>ca-central-1</code>, <code>eu-central-1</code>, <code>eu-north-1</code>,
     * <code>eu-south-1</code>, <code>eu-west-1</code>, <code>eu-west-2</code>,
     * <code>eu-west-3</code>, <code>sa-east-1</code>, <code>us-east-1</code>,
     * <code>us-east-2</code>, <code>us-west-1</code>, <code>us-west-2</code>. </p>
     * <p>Available values in AWS GovCloud (US) Regions: <code>us-gov-east-1</code>,
     * <code>us-gov-west-1</code>.</p>
     */
    inline CreateMeetingRequest& WithMediaRegion(Aws::String&& value) { SetMediaRegion(std::move(value)); return *this;}

    /**
     * <p>The Region in which to create the meeting.</p> <p> Available values:
     * <code>af-south-1</code>, <code>ap-northeast-1</code>,
     * <code>ap-northeast-2</code>, <code>ap-south-1</code>,
     * <code>ap-southeast-1</code>, <code>ap-southeast-2</code>,
     * <code>ca-central-1</code>, <code>eu-central-1</code>, <code>eu-north-1</code>,
     * <code>eu-south-1</code>, <code>eu-west-1</code>, <code>eu-west-2</code>,
     * <code>eu-west-3</code>, <code>sa-east-1</code>, <code>us-east-1</code>,
     * <code>us-east-2</code>, <code>us-west-1</code>, <code>us-west-2</code>. </p>
     * <p>Available values in AWS GovCloud (US) Regions: <code>us-gov-east-1</code>,
     * <code>us-gov-west-1</code>.</p>
     */
    inline CreateMeetingRequest& WithMediaRegion(const char* value) { SetMediaRegion(value); return *this;}


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
    inline CreateMeetingRequest& WithMeetingHostId(const Aws::String& value) { SetMeetingHostId(value); return *this;}

    /**
     * <p>Reserved.</p>
     */
    inline CreateMeetingRequest& WithMeetingHostId(Aws::String&& value) { SetMeetingHostId(std::move(value)); return *this;}

    /**
     * <p>Reserved.</p>
     */
    inline CreateMeetingRequest& WithMeetingHostId(const char* value) { SetMeetingHostId(value); return *this;}


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
    inline CreateMeetingRequest& WithExternalMeetingId(const Aws::String& value) { SetExternalMeetingId(value); return *this;}

    /**
     * <p>The external meeting ID.</p>
     */
    inline CreateMeetingRequest& WithExternalMeetingId(Aws::String&& value) { SetExternalMeetingId(std::move(value)); return *this;}

    /**
     * <p>The external meeting ID.</p>
     */
    inline CreateMeetingRequest& WithExternalMeetingId(const char* value) { SetExternalMeetingId(value); return *this;}


    /**
     * <p>The configuration for resource targets to receive notifications when meeting
     * and attendee events occur.</p>
     */
    inline const NotificationsConfiguration& GetNotificationsConfiguration() const{ return m_notificationsConfiguration; }

    /**
     * <p>The configuration for resource targets to receive notifications when meeting
     * and attendee events occur.</p>
     */
    inline bool NotificationsConfigurationHasBeenSet() const { return m_notificationsConfigurationHasBeenSet; }

    /**
     * <p>The configuration for resource targets to receive notifications when meeting
     * and attendee events occur.</p>
     */
    inline void SetNotificationsConfiguration(const NotificationsConfiguration& value) { m_notificationsConfigurationHasBeenSet = true; m_notificationsConfiguration = value; }

    /**
     * <p>The configuration for resource targets to receive notifications when meeting
     * and attendee events occur.</p>
     */
    inline void SetNotificationsConfiguration(NotificationsConfiguration&& value) { m_notificationsConfigurationHasBeenSet = true; m_notificationsConfiguration = std::move(value); }

    /**
     * <p>The configuration for resource targets to receive notifications when meeting
     * and attendee events occur.</p>
     */
    inline CreateMeetingRequest& WithNotificationsConfiguration(const NotificationsConfiguration& value) { SetNotificationsConfiguration(value); return *this;}

    /**
     * <p>The configuration for resource targets to receive notifications when meeting
     * and attendee events occur.</p>
     */
    inline CreateMeetingRequest& WithNotificationsConfiguration(NotificationsConfiguration&& value) { SetNotificationsConfiguration(std::move(value)); return *this;}


    /**
     * <p>Lists the audio and video features enabled for a meeting, such as echo
     * reduction.</p>
     */
    inline const MeetingFeaturesConfiguration& GetMeetingFeatures() const{ return m_meetingFeatures; }

    /**
     * <p>Lists the audio and video features enabled for a meeting, such as echo
     * reduction.</p>
     */
    inline bool MeetingFeaturesHasBeenSet() const { return m_meetingFeaturesHasBeenSet; }

    /**
     * <p>Lists the audio and video features enabled for a meeting, such as echo
     * reduction.</p>
     */
    inline void SetMeetingFeatures(const MeetingFeaturesConfiguration& value) { m_meetingFeaturesHasBeenSet = true; m_meetingFeatures = value; }

    /**
     * <p>Lists the audio and video features enabled for a meeting, such as echo
     * reduction.</p>
     */
    inline void SetMeetingFeatures(MeetingFeaturesConfiguration&& value) { m_meetingFeaturesHasBeenSet = true; m_meetingFeatures = std::move(value); }

    /**
     * <p>Lists the audio and video features enabled for a meeting, such as echo
     * reduction.</p>
     */
    inline CreateMeetingRequest& WithMeetingFeatures(const MeetingFeaturesConfiguration& value) { SetMeetingFeatures(value); return *this;}

    /**
     * <p>Lists the audio and video features enabled for a meeting, such as echo
     * reduction.</p>
     */
    inline CreateMeetingRequest& WithMeetingFeatures(MeetingFeaturesConfiguration&& value) { SetMeetingFeatures(std::move(value)); return *this;}


    /**
     * <p>When specified, replicates the media from the primary meeting to the new
     * meeting.</p>
     */
    inline const Aws::String& GetPrimaryMeetingId() const{ return m_primaryMeetingId; }

    /**
     * <p>When specified, replicates the media from the primary meeting to the new
     * meeting.</p>
     */
    inline bool PrimaryMeetingIdHasBeenSet() const { return m_primaryMeetingIdHasBeenSet; }

    /**
     * <p>When specified, replicates the media from the primary meeting to the new
     * meeting.</p>
     */
    inline void SetPrimaryMeetingId(const Aws::String& value) { m_primaryMeetingIdHasBeenSet = true; m_primaryMeetingId = value; }

    /**
     * <p>When specified, replicates the media from the primary meeting to the new
     * meeting.</p>
     */
    inline void SetPrimaryMeetingId(Aws::String&& value) { m_primaryMeetingIdHasBeenSet = true; m_primaryMeetingId = std::move(value); }

    /**
     * <p>When specified, replicates the media from the primary meeting to the new
     * meeting.</p>
     */
    inline void SetPrimaryMeetingId(const char* value) { m_primaryMeetingIdHasBeenSet = true; m_primaryMeetingId.assign(value); }

    /**
     * <p>When specified, replicates the media from the primary meeting to the new
     * meeting.</p>
     */
    inline CreateMeetingRequest& WithPrimaryMeetingId(const Aws::String& value) { SetPrimaryMeetingId(value); return *this;}

    /**
     * <p>When specified, replicates the media from the primary meeting to the new
     * meeting.</p>
     */
    inline CreateMeetingRequest& WithPrimaryMeetingId(Aws::String&& value) { SetPrimaryMeetingId(std::move(value)); return *this;}

    /**
     * <p>When specified, replicates the media from the primary meeting to the new
     * meeting.</p>
     */
    inline CreateMeetingRequest& WithPrimaryMeetingId(const char* value) { SetPrimaryMeetingId(value); return *this;}


    /**
     * <p>A consistent and opaque identifier, created and maintained by the builder to
     * represent a segment of their users.</p>
     */
    inline const Aws::Vector<Aws::String>& GetTenantIds() const{ return m_tenantIds; }

    /**
     * <p>A consistent and opaque identifier, created and maintained by the builder to
     * represent a segment of their users.</p>
     */
    inline bool TenantIdsHasBeenSet() const { return m_tenantIdsHasBeenSet; }

    /**
     * <p>A consistent and opaque identifier, created and maintained by the builder to
     * represent a segment of their users.</p>
     */
    inline void SetTenantIds(const Aws::Vector<Aws::String>& value) { m_tenantIdsHasBeenSet = true; m_tenantIds = value; }

    /**
     * <p>A consistent and opaque identifier, created and maintained by the builder to
     * represent a segment of their users.</p>
     */
    inline void SetTenantIds(Aws::Vector<Aws::String>&& value) { m_tenantIdsHasBeenSet = true; m_tenantIds = std::move(value); }

    /**
     * <p>A consistent and opaque identifier, created and maintained by the builder to
     * represent a segment of their users.</p>
     */
    inline CreateMeetingRequest& WithTenantIds(const Aws::Vector<Aws::String>& value) { SetTenantIds(value); return *this;}

    /**
     * <p>A consistent and opaque identifier, created and maintained by the builder to
     * represent a segment of their users.</p>
     */
    inline CreateMeetingRequest& WithTenantIds(Aws::Vector<Aws::String>&& value) { SetTenantIds(std::move(value)); return *this;}

    /**
     * <p>A consistent and opaque identifier, created and maintained by the builder to
     * represent a segment of their users.</p>
     */
    inline CreateMeetingRequest& AddTenantIds(const Aws::String& value) { m_tenantIdsHasBeenSet = true; m_tenantIds.push_back(value); return *this; }

    /**
     * <p>A consistent and opaque identifier, created and maintained by the builder to
     * represent a segment of their users.</p>
     */
    inline CreateMeetingRequest& AddTenantIds(Aws::String&& value) { m_tenantIdsHasBeenSet = true; m_tenantIds.push_back(std::move(value)); return *this; }

    /**
     * <p>A consistent and opaque identifier, created and maintained by the builder to
     * represent a segment of their users.</p>
     */
    inline CreateMeetingRequest& AddTenantIds(const char* value) { m_tenantIdsHasBeenSet = true; m_tenantIds.push_back(value); return *this; }


    /**
     * <p>Applies one or more tags to an Amazon Chime SDK meeting. Note the
     * following:</p> <ul> <li> <p>Not all resources have tags. For a list of services
     * with resources that support tagging using this operation, see <a
     * href="https://docs.aws.amazon.com/resourcegroupstagging/latest/APIReference/supported-services.html">Services
     * that support the Resource Groups Tagging API</a>. If the resource doesn't yet
     * support this operation, the resource's service might support tagging using its
     * own API operations. For more information, refer to the documentation for that
     * service.</p> </li> <li> <p>Each resource can have up to 50 tags. For other
     * limits, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html#tag-conventions">Tag
     * Naming and Usage Conventions</a> in the <i>AWS General Reference</i>.</p> </li>
     * <li> <p>You can only tag resources that are located in the specified AWS Region
     * for the AWS account.</p> </li> <li> <p>To add tags to a resource, you need the
     * necessary permissions for the service that the resource belongs to as well as
     * permissions for adding tags. For more information, see the documentation for
     * each service.</p> </li> </ul>  <p>Do not store personally
     * identifiable information (PII) or other confidential or sensitive information in
     * tags. We use tags to provide you with billing and administration services. Tags
     * are not intended to be used for private or sensitive data.</p>  <p>
     * <b>Minimum permissions</b> </p> <p> In addition to the <code>tag:TagResources
     * </code>permission required by this operation, you must also have the tagging
     * permission defined by the service that created the resource. For example, to tag
     * a <code>ChimeSDKMeetings</code> instance using the <code>TagResources</code>
     * operation, you must have both of the following permissions:</p> <p>
     * <code>tag:TagResources</code> </p> <p> <code>ChimeSDKMeetings:CreateTags</code>
     * </p>  <p>Some services might have specific requirements for tagging some
     * resources. For example, to tag an Amazon S3 bucket, you must also have the
     * <code>s3:GetBucketTagging</code> permission. If the expected minimum permissions
     * don't work, check the documentation for that service's tagging APIs for more
     * information.</p> 
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>Applies one or more tags to an Amazon Chime SDK meeting. Note the
     * following:</p> <ul> <li> <p>Not all resources have tags. For a list of services
     * with resources that support tagging using this operation, see <a
     * href="https://docs.aws.amazon.com/resourcegroupstagging/latest/APIReference/supported-services.html">Services
     * that support the Resource Groups Tagging API</a>. If the resource doesn't yet
     * support this operation, the resource's service might support tagging using its
     * own API operations. For more information, refer to the documentation for that
     * service.</p> </li> <li> <p>Each resource can have up to 50 tags. For other
     * limits, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html#tag-conventions">Tag
     * Naming and Usage Conventions</a> in the <i>AWS General Reference</i>.</p> </li>
     * <li> <p>You can only tag resources that are located in the specified AWS Region
     * for the AWS account.</p> </li> <li> <p>To add tags to a resource, you need the
     * necessary permissions for the service that the resource belongs to as well as
     * permissions for adding tags. For more information, see the documentation for
     * each service.</p> </li> </ul>  <p>Do not store personally
     * identifiable information (PII) or other confidential or sensitive information in
     * tags. We use tags to provide you with billing and administration services. Tags
     * are not intended to be used for private or sensitive data.</p>  <p>
     * <b>Minimum permissions</b> </p> <p> In addition to the <code>tag:TagResources
     * </code>permission required by this operation, you must also have the tagging
     * permission defined by the service that created the resource. For example, to tag
     * a <code>ChimeSDKMeetings</code> instance using the <code>TagResources</code>
     * operation, you must have both of the following permissions:</p> <p>
     * <code>tag:TagResources</code> </p> <p> <code>ChimeSDKMeetings:CreateTags</code>
     * </p>  <p>Some services might have specific requirements for tagging some
     * resources. For example, to tag an Amazon S3 bucket, you must also have the
     * <code>s3:GetBucketTagging</code> permission. If the expected minimum permissions
     * don't work, check the documentation for that service's tagging APIs for more
     * information.</p> 
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>Applies one or more tags to an Amazon Chime SDK meeting. Note the
     * following:</p> <ul> <li> <p>Not all resources have tags. For a list of services
     * with resources that support tagging using this operation, see <a
     * href="https://docs.aws.amazon.com/resourcegroupstagging/latest/APIReference/supported-services.html">Services
     * that support the Resource Groups Tagging API</a>. If the resource doesn't yet
     * support this operation, the resource's service might support tagging using its
     * own API operations. For more information, refer to the documentation for that
     * service.</p> </li> <li> <p>Each resource can have up to 50 tags. For other
     * limits, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html#tag-conventions">Tag
     * Naming and Usage Conventions</a> in the <i>AWS General Reference</i>.</p> </li>
     * <li> <p>You can only tag resources that are located in the specified AWS Region
     * for the AWS account.</p> </li> <li> <p>To add tags to a resource, you need the
     * necessary permissions for the service that the resource belongs to as well as
     * permissions for adding tags. For more information, see the documentation for
     * each service.</p> </li> </ul>  <p>Do not store personally
     * identifiable information (PII) or other confidential or sensitive information in
     * tags. We use tags to provide you with billing and administration services. Tags
     * are not intended to be used for private or sensitive data.</p>  <p>
     * <b>Minimum permissions</b> </p> <p> In addition to the <code>tag:TagResources
     * </code>permission required by this operation, you must also have the tagging
     * permission defined by the service that created the resource. For example, to tag
     * a <code>ChimeSDKMeetings</code> instance using the <code>TagResources</code>
     * operation, you must have both of the following permissions:</p> <p>
     * <code>tag:TagResources</code> </p> <p> <code>ChimeSDKMeetings:CreateTags</code>
     * </p>  <p>Some services might have specific requirements for tagging some
     * resources. For example, to tag an Amazon S3 bucket, you must also have the
     * <code>s3:GetBucketTagging</code> permission. If the expected minimum permissions
     * don't work, check the documentation for that service's tagging APIs for more
     * information.</p> 
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>Applies one or more tags to an Amazon Chime SDK meeting. Note the
     * following:</p> <ul> <li> <p>Not all resources have tags. For a list of services
     * with resources that support tagging using this operation, see <a
     * href="https://docs.aws.amazon.com/resourcegroupstagging/latest/APIReference/supported-services.html">Services
     * that support the Resource Groups Tagging API</a>. If the resource doesn't yet
     * support this operation, the resource's service might support tagging using its
     * own API operations. For more information, refer to the documentation for that
     * service.</p> </li> <li> <p>Each resource can have up to 50 tags. For other
     * limits, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html#tag-conventions">Tag
     * Naming and Usage Conventions</a> in the <i>AWS General Reference</i>.</p> </li>
     * <li> <p>You can only tag resources that are located in the specified AWS Region
     * for the AWS account.</p> </li> <li> <p>To add tags to a resource, you need the
     * necessary permissions for the service that the resource belongs to as well as
     * permissions for adding tags. For more information, see the documentation for
     * each service.</p> </li> </ul>  <p>Do not store personally
     * identifiable information (PII) or other confidential or sensitive information in
     * tags. We use tags to provide you with billing and administration services. Tags
     * are not intended to be used for private or sensitive data.</p>  <p>
     * <b>Minimum permissions</b> </p> <p> In addition to the <code>tag:TagResources
     * </code>permission required by this operation, you must also have the tagging
     * permission defined by the service that created the resource. For example, to tag
     * a <code>ChimeSDKMeetings</code> instance using the <code>TagResources</code>
     * operation, you must have both of the following permissions:</p> <p>
     * <code>tag:TagResources</code> </p> <p> <code>ChimeSDKMeetings:CreateTags</code>
     * </p>  <p>Some services might have specific requirements for tagging some
     * resources. For example, to tag an Amazon S3 bucket, you must also have the
     * <code>s3:GetBucketTagging</code> permission. If the expected minimum permissions
     * don't work, check the documentation for that service's tagging APIs for more
     * information.</p> 
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>Applies one or more tags to an Amazon Chime SDK meeting. Note the
     * following:</p> <ul> <li> <p>Not all resources have tags. For a list of services
     * with resources that support tagging using this operation, see <a
     * href="https://docs.aws.amazon.com/resourcegroupstagging/latest/APIReference/supported-services.html">Services
     * that support the Resource Groups Tagging API</a>. If the resource doesn't yet
     * support this operation, the resource's service might support tagging using its
     * own API operations. For more information, refer to the documentation for that
     * service.</p> </li> <li> <p>Each resource can have up to 50 tags. For other
     * limits, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html#tag-conventions">Tag
     * Naming and Usage Conventions</a> in the <i>AWS General Reference</i>.</p> </li>
     * <li> <p>You can only tag resources that are located in the specified AWS Region
     * for the AWS account.</p> </li> <li> <p>To add tags to a resource, you need the
     * necessary permissions for the service that the resource belongs to as well as
     * permissions for adding tags. For more information, see the documentation for
     * each service.</p> </li> </ul>  <p>Do not store personally
     * identifiable information (PII) or other confidential or sensitive information in
     * tags. We use tags to provide you with billing and administration services. Tags
     * are not intended to be used for private or sensitive data.</p>  <p>
     * <b>Minimum permissions</b> </p> <p> In addition to the <code>tag:TagResources
     * </code>permission required by this operation, you must also have the tagging
     * permission defined by the service that created the resource. For example, to tag
     * a <code>ChimeSDKMeetings</code> instance using the <code>TagResources</code>
     * operation, you must have both of the following permissions:</p> <p>
     * <code>tag:TagResources</code> </p> <p> <code>ChimeSDKMeetings:CreateTags</code>
     * </p>  <p>Some services might have specific requirements for tagging some
     * resources. For example, to tag an Amazon S3 bucket, you must also have the
     * <code>s3:GetBucketTagging</code> permission. If the expected minimum permissions
     * don't work, check the documentation for that service's tagging APIs for more
     * information.</p> 
     */
    inline CreateMeetingRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>Applies one or more tags to an Amazon Chime SDK meeting. Note the
     * following:</p> <ul> <li> <p>Not all resources have tags. For a list of services
     * with resources that support tagging using this operation, see <a
     * href="https://docs.aws.amazon.com/resourcegroupstagging/latest/APIReference/supported-services.html">Services
     * that support the Resource Groups Tagging API</a>. If the resource doesn't yet
     * support this operation, the resource's service might support tagging using its
     * own API operations. For more information, refer to the documentation for that
     * service.</p> </li> <li> <p>Each resource can have up to 50 tags. For other
     * limits, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html#tag-conventions">Tag
     * Naming and Usage Conventions</a> in the <i>AWS General Reference</i>.</p> </li>
     * <li> <p>You can only tag resources that are located in the specified AWS Region
     * for the AWS account.</p> </li> <li> <p>To add tags to a resource, you need the
     * necessary permissions for the service that the resource belongs to as well as
     * permissions for adding tags. For more information, see the documentation for
     * each service.</p> </li> </ul>  <p>Do not store personally
     * identifiable information (PII) or other confidential or sensitive information in
     * tags. We use tags to provide you with billing and administration services. Tags
     * are not intended to be used for private or sensitive data.</p>  <p>
     * <b>Minimum permissions</b> </p> <p> In addition to the <code>tag:TagResources
     * </code>permission required by this operation, you must also have the tagging
     * permission defined by the service that created the resource. For example, to tag
     * a <code>ChimeSDKMeetings</code> instance using the <code>TagResources</code>
     * operation, you must have both of the following permissions:</p> <p>
     * <code>tag:TagResources</code> </p> <p> <code>ChimeSDKMeetings:CreateTags</code>
     * </p>  <p>Some services might have specific requirements for tagging some
     * resources. For example, to tag an Amazon S3 bucket, you must also have the
     * <code>s3:GetBucketTagging</code> permission. If the expected minimum permissions
     * don't work, check the documentation for that service's tagging APIs for more
     * information.</p> 
     */
    inline CreateMeetingRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>Applies one or more tags to an Amazon Chime SDK meeting. Note the
     * following:</p> <ul> <li> <p>Not all resources have tags. For a list of services
     * with resources that support tagging using this operation, see <a
     * href="https://docs.aws.amazon.com/resourcegroupstagging/latest/APIReference/supported-services.html">Services
     * that support the Resource Groups Tagging API</a>. If the resource doesn't yet
     * support this operation, the resource's service might support tagging using its
     * own API operations. For more information, refer to the documentation for that
     * service.</p> </li> <li> <p>Each resource can have up to 50 tags. For other
     * limits, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html#tag-conventions">Tag
     * Naming and Usage Conventions</a> in the <i>AWS General Reference</i>.</p> </li>
     * <li> <p>You can only tag resources that are located in the specified AWS Region
     * for the AWS account.</p> </li> <li> <p>To add tags to a resource, you need the
     * necessary permissions for the service that the resource belongs to as well as
     * permissions for adding tags. For more information, see the documentation for
     * each service.</p> </li> </ul>  <p>Do not store personally
     * identifiable information (PII) or other confidential or sensitive information in
     * tags. We use tags to provide you with billing and administration services. Tags
     * are not intended to be used for private or sensitive data.</p>  <p>
     * <b>Minimum permissions</b> </p> <p> In addition to the <code>tag:TagResources
     * </code>permission required by this operation, you must also have the tagging
     * permission defined by the service that created the resource. For example, to tag
     * a <code>ChimeSDKMeetings</code> instance using the <code>TagResources</code>
     * operation, you must have both of the following permissions:</p> <p>
     * <code>tag:TagResources</code> </p> <p> <code>ChimeSDKMeetings:CreateTags</code>
     * </p>  <p>Some services might have specific requirements for tagging some
     * resources. For example, to tag an Amazon S3 bucket, you must also have the
     * <code>s3:GetBucketTagging</code> permission. If the expected minimum permissions
     * don't work, check the documentation for that service's tagging APIs for more
     * information.</p> 
     */
    inline CreateMeetingRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>Applies one or more tags to an Amazon Chime SDK meeting. Note the
     * following:</p> <ul> <li> <p>Not all resources have tags. For a list of services
     * with resources that support tagging using this operation, see <a
     * href="https://docs.aws.amazon.com/resourcegroupstagging/latest/APIReference/supported-services.html">Services
     * that support the Resource Groups Tagging API</a>. If the resource doesn't yet
     * support this operation, the resource's service might support tagging using its
     * own API operations. For more information, refer to the documentation for that
     * service.</p> </li> <li> <p>Each resource can have up to 50 tags. For other
     * limits, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html#tag-conventions">Tag
     * Naming and Usage Conventions</a> in the <i>AWS General Reference</i>.</p> </li>
     * <li> <p>You can only tag resources that are located in the specified AWS Region
     * for the AWS account.</p> </li> <li> <p>To add tags to a resource, you need the
     * necessary permissions for the service that the resource belongs to as well as
     * permissions for adding tags. For more information, see the documentation for
     * each service.</p> </li> </ul>  <p>Do not store personally
     * identifiable information (PII) or other confidential or sensitive information in
     * tags. We use tags to provide you with billing and administration services. Tags
     * are not intended to be used for private or sensitive data.</p>  <p>
     * <b>Minimum permissions</b> </p> <p> In addition to the <code>tag:TagResources
     * </code>permission required by this operation, you must also have the tagging
     * permission defined by the service that created the resource. For example, to tag
     * a <code>ChimeSDKMeetings</code> instance using the <code>TagResources</code>
     * operation, you must have both of the following permissions:</p> <p>
     * <code>tag:TagResources</code> </p> <p> <code>ChimeSDKMeetings:CreateTags</code>
     * </p>  <p>Some services might have specific requirements for tagging some
     * resources. For example, to tag an Amazon S3 bucket, you must also have the
     * <code>s3:GetBucketTagging</code> permission. If the expected minimum permissions
     * don't work, check the documentation for that service's tagging APIs for more
     * information.</p> 
     */
    inline CreateMeetingRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_clientRequestToken;
    bool m_clientRequestTokenHasBeenSet = false;

    Aws::String m_mediaRegion;
    bool m_mediaRegionHasBeenSet = false;

    Aws::String m_meetingHostId;
    bool m_meetingHostIdHasBeenSet = false;

    Aws::String m_externalMeetingId;
    bool m_externalMeetingIdHasBeenSet = false;

    NotificationsConfiguration m_notificationsConfiguration;
    bool m_notificationsConfigurationHasBeenSet = false;

    MeetingFeaturesConfiguration m_meetingFeatures;
    bool m_meetingFeaturesHasBeenSet = false;

    Aws::String m_primaryMeetingId;
    bool m_primaryMeetingIdHasBeenSet = false;

    Aws::Vector<Aws::String> m_tenantIds;
    bool m_tenantIdsHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace ChimeSDKMeetings
} // namespace Aws
