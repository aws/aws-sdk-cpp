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
#include <aws/pinpoint/Pinpoint_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace Pinpoint
{
namespace Model
{

  /**
   * Model for an event publishing subscription export.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/EventStream">AWS
   * API Reference</a></p>
   */
  class AWS_PINPOINT_API EventStream
  {
  public:
    EventStream();
    EventStream(Aws::Utils::Json::JsonView jsonValue);
    EventStream& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * The ID of the application from which events should be published.
     */
    inline const Aws::String& GetApplicationId() const{ return m_applicationId; }

    /**
     * The ID of the application from which events should be published.
     */
    inline bool ApplicationIdHasBeenSet() const { return m_applicationIdHasBeenSet; }

    /**
     * The ID of the application from which events should be published.
     */
    inline void SetApplicationId(const Aws::String& value) { m_applicationIdHasBeenSet = true; m_applicationId = value; }

    /**
     * The ID of the application from which events should be published.
     */
    inline void SetApplicationId(Aws::String&& value) { m_applicationIdHasBeenSet = true; m_applicationId = std::move(value); }

    /**
     * The ID of the application from which events should be published.
     */
    inline void SetApplicationId(const char* value) { m_applicationIdHasBeenSet = true; m_applicationId.assign(value); }

    /**
     * The ID of the application from which events should be published.
     */
    inline EventStream& WithApplicationId(const Aws::String& value) { SetApplicationId(value); return *this;}

    /**
     * The ID of the application from which events should be published.
     */
    inline EventStream& WithApplicationId(Aws::String&& value) { SetApplicationId(std::move(value)); return *this;}

    /**
     * The ID of the application from which events should be published.
     */
    inline EventStream& WithApplicationId(const char* value) { SetApplicationId(value); return *this;}


    /**
     * The Amazon Resource Name (ARN) of the Amazon Kinesis stream or Firehose delivery
     * stream to which you want to publish events.
 Firehose ARN:
     * arn:aws:firehose:REGION:ACCOUNT_ID:deliverystream/STREAM_NAME
 Kinesis ARN:
     * arn:aws:kinesis:REGION:ACCOUNT_ID:stream/STREAM_NAME
     */
    inline const Aws::String& GetDestinationStreamArn() const{ return m_destinationStreamArn; }

    /**
     * The Amazon Resource Name (ARN) of the Amazon Kinesis stream or Firehose delivery
     * stream to which you want to publish events.
 Firehose ARN:
     * arn:aws:firehose:REGION:ACCOUNT_ID:deliverystream/STREAM_NAME
 Kinesis ARN:
     * arn:aws:kinesis:REGION:ACCOUNT_ID:stream/STREAM_NAME
     */
    inline bool DestinationStreamArnHasBeenSet() const { return m_destinationStreamArnHasBeenSet; }

    /**
     * The Amazon Resource Name (ARN) of the Amazon Kinesis stream or Firehose delivery
     * stream to which you want to publish events.
 Firehose ARN:
     * arn:aws:firehose:REGION:ACCOUNT_ID:deliverystream/STREAM_NAME
 Kinesis ARN:
     * arn:aws:kinesis:REGION:ACCOUNT_ID:stream/STREAM_NAME
     */
    inline void SetDestinationStreamArn(const Aws::String& value) { m_destinationStreamArnHasBeenSet = true; m_destinationStreamArn = value; }

    /**
     * The Amazon Resource Name (ARN) of the Amazon Kinesis stream or Firehose delivery
     * stream to which you want to publish events.
 Firehose ARN:
     * arn:aws:firehose:REGION:ACCOUNT_ID:deliverystream/STREAM_NAME
 Kinesis ARN:
     * arn:aws:kinesis:REGION:ACCOUNT_ID:stream/STREAM_NAME
     */
    inline void SetDestinationStreamArn(Aws::String&& value) { m_destinationStreamArnHasBeenSet = true; m_destinationStreamArn = std::move(value); }

    /**
     * The Amazon Resource Name (ARN) of the Amazon Kinesis stream or Firehose delivery
     * stream to which you want to publish events.
 Firehose ARN:
     * arn:aws:firehose:REGION:ACCOUNT_ID:deliverystream/STREAM_NAME
 Kinesis ARN:
     * arn:aws:kinesis:REGION:ACCOUNT_ID:stream/STREAM_NAME
     */
    inline void SetDestinationStreamArn(const char* value) { m_destinationStreamArnHasBeenSet = true; m_destinationStreamArn.assign(value); }

    /**
     * The Amazon Resource Name (ARN) of the Amazon Kinesis stream or Firehose delivery
     * stream to which you want to publish events.
 Firehose ARN:
     * arn:aws:firehose:REGION:ACCOUNT_ID:deliverystream/STREAM_NAME
 Kinesis ARN:
     * arn:aws:kinesis:REGION:ACCOUNT_ID:stream/STREAM_NAME
     */
    inline EventStream& WithDestinationStreamArn(const Aws::String& value) { SetDestinationStreamArn(value); return *this;}

    /**
     * The Amazon Resource Name (ARN) of the Amazon Kinesis stream or Firehose delivery
     * stream to which you want to publish events.
 Firehose ARN:
     * arn:aws:firehose:REGION:ACCOUNT_ID:deliverystream/STREAM_NAME
 Kinesis ARN:
     * arn:aws:kinesis:REGION:ACCOUNT_ID:stream/STREAM_NAME
     */
    inline EventStream& WithDestinationStreamArn(Aws::String&& value) { SetDestinationStreamArn(std::move(value)); return *this;}

    /**
     * The Amazon Resource Name (ARN) of the Amazon Kinesis stream or Firehose delivery
     * stream to which you want to publish events.
 Firehose ARN:
     * arn:aws:firehose:REGION:ACCOUNT_ID:deliverystream/STREAM_NAME
 Kinesis ARN:
     * arn:aws:kinesis:REGION:ACCOUNT_ID:stream/STREAM_NAME
     */
    inline EventStream& WithDestinationStreamArn(const char* value) { SetDestinationStreamArn(value); return *this;}


    /**
     * (Deprecated) Your AWS account ID, which you assigned to the ExternalID key in an
     * IAM trust policy. Used by Amazon Pinpoint to assume an IAM role. This
     * requirement is removed, and external IDs are not recommended for IAM roles
     * assumed by Amazon Pinpoint.
     */
    inline const Aws::String& GetExternalId() const{ return m_externalId; }

    /**
     * (Deprecated) Your AWS account ID, which you assigned to the ExternalID key in an
     * IAM trust policy. Used by Amazon Pinpoint to assume an IAM role. This
     * requirement is removed, and external IDs are not recommended for IAM roles
     * assumed by Amazon Pinpoint.
     */
    inline bool ExternalIdHasBeenSet() const { return m_externalIdHasBeenSet; }

    /**
     * (Deprecated) Your AWS account ID, which you assigned to the ExternalID key in an
     * IAM trust policy. Used by Amazon Pinpoint to assume an IAM role. This
     * requirement is removed, and external IDs are not recommended for IAM roles
     * assumed by Amazon Pinpoint.
     */
    inline void SetExternalId(const Aws::String& value) { m_externalIdHasBeenSet = true; m_externalId = value; }

    /**
     * (Deprecated) Your AWS account ID, which you assigned to the ExternalID key in an
     * IAM trust policy. Used by Amazon Pinpoint to assume an IAM role. This
     * requirement is removed, and external IDs are not recommended for IAM roles
     * assumed by Amazon Pinpoint.
     */
    inline void SetExternalId(Aws::String&& value) { m_externalIdHasBeenSet = true; m_externalId = std::move(value); }

    /**
     * (Deprecated) Your AWS account ID, which you assigned to the ExternalID key in an
     * IAM trust policy. Used by Amazon Pinpoint to assume an IAM role. This
     * requirement is removed, and external IDs are not recommended for IAM roles
     * assumed by Amazon Pinpoint.
     */
    inline void SetExternalId(const char* value) { m_externalIdHasBeenSet = true; m_externalId.assign(value); }

    /**
     * (Deprecated) Your AWS account ID, which you assigned to the ExternalID key in an
     * IAM trust policy. Used by Amazon Pinpoint to assume an IAM role. This
     * requirement is removed, and external IDs are not recommended for IAM roles
     * assumed by Amazon Pinpoint.
     */
    inline EventStream& WithExternalId(const Aws::String& value) { SetExternalId(value); return *this;}

    /**
     * (Deprecated) Your AWS account ID, which you assigned to the ExternalID key in an
     * IAM trust policy. Used by Amazon Pinpoint to assume an IAM role. This
     * requirement is removed, and external IDs are not recommended for IAM roles
     * assumed by Amazon Pinpoint.
     */
    inline EventStream& WithExternalId(Aws::String&& value) { SetExternalId(std::move(value)); return *this;}

    /**
     * (Deprecated) Your AWS account ID, which you assigned to the ExternalID key in an
     * IAM trust policy. Used by Amazon Pinpoint to assume an IAM role. This
     * requirement is removed, and external IDs are not recommended for IAM roles
     * assumed by Amazon Pinpoint.
     */
    inline EventStream& WithExternalId(const char* value) { SetExternalId(value); return *this;}


    /**
     * The date the event stream was last updated in ISO 8601 format.
     */
    inline const Aws::String& GetLastModifiedDate() const{ return m_lastModifiedDate; }

    /**
     * The date the event stream was last updated in ISO 8601 format.
     */
    inline bool LastModifiedDateHasBeenSet() const { return m_lastModifiedDateHasBeenSet; }

    /**
     * The date the event stream was last updated in ISO 8601 format.
     */
    inline void SetLastModifiedDate(const Aws::String& value) { m_lastModifiedDateHasBeenSet = true; m_lastModifiedDate = value; }

    /**
     * The date the event stream was last updated in ISO 8601 format.
     */
    inline void SetLastModifiedDate(Aws::String&& value) { m_lastModifiedDateHasBeenSet = true; m_lastModifiedDate = std::move(value); }

    /**
     * The date the event stream was last updated in ISO 8601 format.
     */
    inline void SetLastModifiedDate(const char* value) { m_lastModifiedDateHasBeenSet = true; m_lastModifiedDate.assign(value); }

    /**
     * The date the event stream was last updated in ISO 8601 format.
     */
    inline EventStream& WithLastModifiedDate(const Aws::String& value) { SetLastModifiedDate(value); return *this;}

    /**
     * The date the event stream was last updated in ISO 8601 format.
     */
    inline EventStream& WithLastModifiedDate(Aws::String&& value) { SetLastModifiedDate(std::move(value)); return *this;}

    /**
     * The date the event stream was last updated in ISO 8601 format.
     */
    inline EventStream& WithLastModifiedDate(const char* value) { SetLastModifiedDate(value); return *this;}


    /**
     * The IAM user who last modified the event stream.
     */
    inline const Aws::String& GetLastUpdatedBy() const{ return m_lastUpdatedBy; }

    /**
     * The IAM user who last modified the event stream.
     */
    inline bool LastUpdatedByHasBeenSet() const { return m_lastUpdatedByHasBeenSet; }

    /**
     * The IAM user who last modified the event stream.
     */
    inline void SetLastUpdatedBy(const Aws::String& value) { m_lastUpdatedByHasBeenSet = true; m_lastUpdatedBy = value; }

    /**
     * The IAM user who last modified the event stream.
     */
    inline void SetLastUpdatedBy(Aws::String&& value) { m_lastUpdatedByHasBeenSet = true; m_lastUpdatedBy = std::move(value); }

    /**
     * The IAM user who last modified the event stream.
     */
    inline void SetLastUpdatedBy(const char* value) { m_lastUpdatedByHasBeenSet = true; m_lastUpdatedBy.assign(value); }

    /**
     * The IAM user who last modified the event stream.
     */
    inline EventStream& WithLastUpdatedBy(const Aws::String& value) { SetLastUpdatedBy(value); return *this;}

    /**
     * The IAM user who last modified the event stream.
     */
    inline EventStream& WithLastUpdatedBy(Aws::String&& value) { SetLastUpdatedBy(std::move(value)); return *this;}

    /**
     * The IAM user who last modified the event stream.
     */
    inline EventStream& WithLastUpdatedBy(const char* value) { SetLastUpdatedBy(value); return *this;}


    /**
     * The IAM role that authorizes Amazon Pinpoint to publish events to the stream in
     * your account.
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }

    /**
     * The IAM role that authorizes Amazon Pinpoint to publish events to the stream in
     * your account.
     */
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }

    /**
     * The IAM role that authorizes Amazon Pinpoint to publish events to the stream in
     * your account.
     */
    inline void SetRoleArn(const Aws::String& value) { m_roleArnHasBeenSet = true; m_roleArn = value; }

    /**
     * The IAM role that authorizes Amazon Pinpoint to publish events to the stream in
     * your account.
     */
    inline void SetRoleArn(Aws::String&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::move(value); }

    /**
     * The IAM role that authorizes Amazon Pinpoint to publish events to the stream in
     * your account.
     */
    inline void SetRoleArn(const char* value) { m_roleArnHasBeenSet = true; m_roleArn.assign(value); }

    /**
     * The IAM role that authorizes Amazon Pinpoint to publish events to the stream in
     * your account.
     */
    inline EventStream& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}

    /**
     * The IAM role that authorizes Amazon Pinpoint to publish events to the stream in
     * your account.
     */
    inline EventStream& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}

    /**
     * The IAM role that authorizes Amazon Pinpoint to publish events to the stream in
     * your account.
     */
    inline EventStream& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}

  private:

    Aws::String m_applicationId;
    bool m_applicationIdHasBeenSet;

    Aws::String m_destinationStreamArn;
    bool m_destinationStreamArnHasBeenSet;

    Aws::String m_externalId;
    bool m_externalIdHasBeenSet;

    Aws::String m_lastModifiedDate;
    bool m_lastModifiedDateHasBeenSet;

    Aws::String m_lastUpdatedBy;
    bool m_lastUpdatedByHasBeenSet;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
