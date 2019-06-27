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
   * <p>Specifies settings for publishing event data to an Amazon Kinesis data stream
   * or an Amazon Kinesis Data Firehose delivery stream.</p><p><h3>See Also:</h3>  
   * <a
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
     * <p>The unique identifier for the application to publish event data for.</p>
     */
    inline const Aws::String& GetApplicationId() const{ return m_applicationId; }

    /**
     * <p>The unique identifier for the application to publish event data for.</p>
     */
    inline bool ApplicationIdHasBeenSet() const { return m_applicationIdHasBeenSet; }

    /**
     * <p>The unique identifier for the application to publish event data for.</p>
     */
    inline void SetApplicationId(const Aws::String& value) { m_applicationIdHasBeenSet = true; m_applicationId = value; }

    /**
     * <p>The unique identifier for the application to publish event data for.</p>
     */
    inline void SetApplicationId(Aws::String&& value) { m_applicationIdHasBeenSet = true; m_applicationId = std::move(value); }

    /**
     * <p>The unique identifier for the application to publish event data for.</p>
     */
    inline void SetApplicationId(const char* value) { m_applicationIdHasBeenSet = true; m_applicationId.assign(value); }

    /**
     * <p>The unique identifier for the application to publish event data for.</p>
     */
    inline EventStream& WithApplicationId(const Aws::String& value) { SetApplicationId(value); return *this;}

    /**
     * <p>The unique identifier for the application to publish event data for.</p>
     */
    inline EventStream& WithApplicationId(Aws::String&& value) { SetApplicationId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier for the application to publish event data for.</p>
     */
    inline EventStream& WithApplicationId(const char* value) { SetApplicationId(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon Kinesis data stream or Amazon
     * Kinesis Data Firehose delivery stream to publish event data to.</p> <p>For a
     * Kinesis data stream, the ARN format is:
     * arn:aws:kinesis:<replaceable>region</replaceable>:<replaceable>account-id</replaceable>:stream/<replaceable>stream_name</replaceable>

     * </p> <p>For a Kinesis Data Firehose delivery stream, the ARN format is:
     * arn:aws:firehose:<replaceable>region</replaceable>:<replaceable>account-id</replaceable>:deliverystream/<replaceable>stream_name</replaceable>

     *               </p>
     */
    inline const Aws::String& GetDestinationStreamArn() const{ return m_destinationStreamArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon Kinesis data stream or Amazon
     * Kinesis Data Firehose delivery stream to publish event data to.</p> <p>For a
     * Kinesis data stream, the ARN format is:
     * arn:aws:kinesis:<replaceable>region</replaceable>:<replaceable>account-id</replaceable>:stream/<replaceable>stream_name</replaceable>

     * </p> <p>For a Kinesis Data Firehose delivery stream, the ARN format is:
     * arn:aws:firehose:<replaceable>region</replaceable>:<replaceable>account-id</replaceable>:deliverystream/<replaceable>stream_name</replaceable>

     *               </p>
     */
    inline bool DestinationStreamArnHasBeenSet() const { return m_destinationStreamArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon Kinesis data stream or Amazon
     * Kinesis Data Firehose delivery stream to publish event data to.</p> <p>For a
     * Kinesis data stream, the ARN format is:
     * arn:aws:kinesis:<replaceable>region</replaceable>:<replaceable>account-id</replaceable>:stream/<replaceable>stream_name</replaceable>

     * </p> <p>For a Kinesis Data Firehose delivery stream, the ARN format is:
     * arn:aws:firehose:<replaceable>region</replaceable>:<replaceable>account-id</replaceable>:deliverystream/<replaceable>stream_name</replaceable>

     *               </p>
     */
    inline void SetDestinationStreamArn(const Aws::String& value) { m_destinationStreamArnHasBeenSet = true; m_destinationStreamArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon Kinesis data stream or Amazon
     * Kinesis Data Firehose delivery stream to publish event data to.</p> <p>For a
     * Kinesis data stream, the ARN format is:
     * arn:aws:kinesis:<replaceable>region</replaceable>:<replaceable>account-id</replaceable>:stream/<replaceable>stream_name</replaceable>

     * </p> <p>For a Kinesis Data Firehose delivery stream, the ARN format is:
     * arn:aws:firehose:<replaceable>region</replaceable>:<replaceable>account-id</replaceable>:deliverystream/<replaceable>stream_name</replaceable>

     *               </p>
     */
    inline void SetDestinationStreamArn(Aws::String&& value) { m_destinationStreamArnHasBeenSet = true; m_destinationStreamArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon Kinesis data stream or Amazon
     * Kinesis Data Firehose delivery stream to publish event data to.</p> <p>For a
     * Kinesis data stream, the ARN format is:
     * arn:aws:kinesis:<replaceable>region</replaceable>:<replaceable>account-id</replaceable>:stream/<replaceable>stream_name</replaceable>

     * </p> <p>For a Kinesis Data Firehose delivery stream, the ARN format is:
     * arn:aws:firehose:<replaceable>region</replaceable>:<replaceable>account-id</replaceable>:deliverystream/<replaceable>stream_name</replaceable>

     *               </p>
     */
    inline void SetDestinationStreamArn(const char* value) { m_destinationStreamArnHasBeenSet = true; m_destinationStreamArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon Kinesis data stream or Amazon
     * Kinesis Data Firehose delivery stream to publish event data to.</p> <p>For a
     * Kinesis data stream, the ARN format is:
     * arn:aws:kinesis:<replaceable>region</replaceable>:<replaceable>account-id</replaceable>:stream/<replaceable>stream_name</replaceable>

     * </p> <p>For a Kinesis Data Firehose delivery stream, the ARN format is:
     * arn:aws:firehose:<replaceable>region</replaceable>:<replaceable>account-id</replaceable>:deliverystream/<replaceable>stream_name</replaceable>

     *               </p>
     */
    inline EventStream& WithDestinationStreamArn(const Aws::String& value) { SetDestinationStreamArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon Kinesis data stream or Amazon
     * Kinesis Data Firehose delivery stream to publish event data to.</p> <p>For a
     * Kinesis data stream, the ARN format is:
     * arn:aws:kinesis:<replaceable>region</replaceable>:<replaceable>account-id</replaceable>:stream/<replaceable>stream_name</replaceable>

     * </p> <p>For a Kinesis Data Firehose delivery stream, the ARN format is:
     * arn:aws:firehose:<replaceable>region</replaceable>:<replaceable>account-id</replaceable>:deliverystream/<replaceable>stream_name</replaceable>

     *               </p>
     */
    inline EventStream& WithDestinationStreamArn(Aws::String&& value) { SetDestinationStreamArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon Kinesis data stream or Amazon
     * Kinesis Data Firehose delivery stream to publish event data to.</p> <p>For a
     * Kinesis data stream, the ARN format is:
     * arn:aws:kinesis:<replaceable>region</replaceable>:<replaceable>account-id</replaceable>:stream/<replaceable>stream_name</replaceable>

     * </p> <p>For a Kinesis Data Firehose delivery stream, the ARN format is:
     * arn:aws:firehose:<replaceable>region</replaceable>:<replaceable>account-id</replaceable>:deliverystream/<replaceable>stream_name</replaceable>

     *               </p>
     */
    inline EventStream& WithDestinationStreamArn(const char* value) { SetDestinationStreamArn(value); return *this;}


    /**
     * <p>(Deprecated) Your AWS account ID, which you assigned to an external ID key in
     * an IAM trust policy. Amazon Pinpoint previously used this value to assume an IAM
     * role when publishing event data, but we removed this requirement. We don't
     * recommend use of external IDs for IAM roles that are assumed by Amazon
     * Pinpoint.</p>
     */
    inline const Aws::String& GetExternalId() const{ return m_externalId; }

    /**
     * <p>(Deprecated) Your AWS account ID, which you assigned to an external ID key in
     * an IAM trust policy. Amazon Pinpoint previously used this value to assume an IAM
     * role when publishing event data, but we removed this requirement. We don't
     * recommend use of external IDs for IAM roles that are assumed by Amazon
     * Pinpoint.</p>
     */
    inline bool ExternalIdHasBeenSet() const { return m_externalIdHasBeenSet; }

    /**
     * <p>(Deprecated) Your AWS account ID, which you assigned to an external ID key in
     * an IAM trust policy. Amazon Pinpoint previously used this value to assume an IAM
     * role when publishing event data, but we removed this requirement. We don't
     * recommend use of external IDs for IAM roles that are assumed by Amazon
     * Pinpoint.</p>
     */
    inline void SetExternalId(const Aws::String& value) { m_externalIdHasBeenSet = true; m_externalId = value; }

    /**
     * <p>(Deprecated) Your AWS account ID, which you assigned to an external ID key in
     * an IAM trust policy. Amazon Pinpoint previously used this value to assume an IAM
     * role when publishing event data, but we removed this requirement. We don't
     * recommend use of external IDs for IAM roles that are assumed by Amazon
     * Pinpoint.</p>
     */
    inline void SetExternalId(Aws::String&& value) { m_externalIdHasBeenSet = true; m_externalId = std::move(value); }

    /**
     * <p>(Deprecated) Your AWS account ID, which you assigned to an external ID key in
     * an IAM trust policy. Amazon Pinpoint previously used this value to assume an IAM
     * role when publishing event data, but we removed this requirement. We don't
     * recommend use of external IDs for IAM roles that are assumed by Amazon
     * Pinpoint.</p>
     */
    inline void SetExternalId(const char* value) { m_externalIdHasBeenSet = true; m_externalId.assign(value); }

    /**
     * <p>(Deprecated) Your AWS account ID, which you assigned to an external ID key in
     * an IAM trust policy. Amazon Pinpoint previously used this value to assume an IAM
     * role when publishing event data, but we removed this requirement. We don't
     * recommend use of external IDs for IAM roles that are assumed by Amazon
     * Pinpoint.</p>
     */
    inline EventStream& WithExternalId(const Aws::String& value) { SetExternalId(value); return *this;}

    /**
     * <p>(Deprecated) Your AWS account ID, which you assigned to an external ID key in
     * an IAM trust policy. Amazon Pinpoint previously used this value to assume an IAM
     * role when publishing event data, but we removed this requirement. We don't
     * recommend use of external IDs for IAM roles that are assumed by Amazon
     * Pinpoint.</p>
     */
    inline EventStream& WithExternalId(Aws::String&& value) { SetExternalId(std::move(value)); return *this;}

    /**
     * <p>(Deprecated) Your AWS account ID, which you assigned to an external ID key in
     * an IAM trust policy. Amazon Pinpoint previously used this value to assume an IAM
     * role when publishing event data, but we removed this requirement. We don't
     * recommend use of external IDs for IAM roles that are assumed by Amazon
     * Pinpoint.</p>
     */
    inline EventStream& WithExternalId(const char* value) { SetExternalId(value); return *this;}


    /**
     * <p>The date, in ISO 8601 format, when the event stream was last modified.</p>
     */
    inline const Aws::String& GetLastModifiedDate() const{ return m_lastModifiedDate; }

    /**
     * <p>The date, in ISO 8601 format, when the event stream was last modified.</p>
     */
    inline bool LastModifiedDateHasBeenSet() const { return m_lastModifiedDateHasBeenSet; }

    /**
     * <p>The date, in ISO 8601 format, when the event stream was last modified.</p>
     */
    inline void SetLastModifiedDate(const Aws::String& value) { m_lastModifiedDateHasBeenSet = true; m_lastModifiedDate = value; }

    /**
     * <p>The date, in ISO 8601 format, when the event stream was last modified.</p>
     */
    inline void SetLastModifiedDate(Aws::String&& value) { m_lastModifiedDateHasBeenSet = true; m_lastModifiedDate = std::move(value); }

    /**
     * <p>The date, in ISO 8601 format, when the event stream was last modified.</p>
     */
    inline void SetLastModifiedDate(const char* value) { m_lastModifiedDateHasBeenSet = true; m_lastModifiedDate.assign(value); }

    /**
     * <p>The date, in ISO 8601 format, when the event stream was last modified.</p>
     */
    inline EventStream& WithLastModifiedDate(const Aws::String& value) { SetLastModifiedDate(value); return *this;}

    /**
     * <p>The date, in ISO 8601 format, when the event stream was last modified.</p>
     */
    inline EventStream& WithLastModifiedDate(Aws::String&& value) { SetLastModifiedDate(std::move(value)); return *this;}

    /**
     * <p>The date, in ISO 8601 format, when the event stream was last modified.</p>
     */
    inline EventStream& WithLastModifiedDate(const char* value) { SetLastModifiedDate(value); return *this;}


    /**
     * <p>The IAM user who last modified the event stream.</p>
     */
    inline const Aws::String& GetLastUpdatedBy() const{ return m_lastUpdatedBy; }

    /**
     * <p>The IAM user who last modified the event stream.</p>
     */
    inline bool LastUpdatedByHasBeenSet() const { return m_lastUpdatedByHasBeenSet; }

    /**
     * <p>The IAM user who last modified the event stream.</p>
     */
    inline void SetLastUpdatedBy(const Aws::String& value) { m_lastUpdatedByHasBeenSet = true; m_lastUpdatedBy = value; }

    /**
     * <p>The IAM user who last modified the event stream.</p>
     */
    inline void SetLastUpdatedBy(Aws::String&& value) { m_lastUpdatedByHasBeenSet = true; m_lastUpdatedBy = std::move(value); }

    /**
     * <p>The IAM user who last modified the event stream.</p>
     */
    inline void SetLastUpdatedBy(const char* value) { m_lastUpdatedByHasBeenSet = true; m_lastUpdatedBy.assign(value); }

    /**
     * <p>The IAM user who last modified the event stream.</p>
     */
    inline EventStream& WithLastUpdatedBy(const Aws::String& value) { SetLastUpdatedBy(value); return *this;}

    /**
     * <p>The IAM user who last modified the event stream.</p>
     */
    inline EventStream& WithLastUpdatedBy(Aws::String&& value) { SetLastUpdatedBy(std::move(value)); return *this;}

    /**
     * <p>The IAM user who last modified the event stream.</p>
     */
    inline EventStream& WithLastUpdatedBy(const char* value) { SetLastUpdatedBy(value); return *this;}


    /**
     * <p>The AWS Identity and Access Management (IAM) role that authorizes Amazon
     * Pinpoint to publish event data to the stream in your AWS account.</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }

    /**
     * <p>The AWS Identity and Access Management (IAM) role that authorizes Amazon
     * Pinpoint to publish event data to the stream in your AWS account.</p>
     */
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }

    /**
     * <p>The AWS Identity and Access Management (IAM) role that authorizes Amazon
     * Pinpoint to publish event data to the stream in your AWS account.</p>
     */
    inline void SetRoleArn(const Aws::String& value) { m_roleArnHasBeenSet = true; m_roleArn = value; }

    /**
     * <p>The AWS Identity and Access Management (IAM) role that authorizes Amazon
     * Pinpoint to publish event data to the stream in your AWS account.</p>
     */
    inline void SetRoleArn(Aws::String&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::move(value); }

    /**
     * <p>The AWS Identity and Access Management (IAM) role that authorizes Amazon
     * Pinpoint to publish event data to the stream in your AWS account.</p>
     */
    inline void SetRoleArn(const char* value) { m_roleArnHasBeenSet = true; m_roleArn.assign(value); }

    /**
     * <p>The AWS Identity and Access Management (IAM) role that authorizes Amazon
     * Pinpoint to publish event data to the stream in your AWS account.</p>
     */
    inline EventStream& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}

    /**
     * <p>The AWS Identity and Access Management (IAM) role that authorizes Amazon
     * Pinpoint to publish event data to the stream in your AWS account.</p>
     */
    inline EventStream& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}

    /**
     * <p>The AWS Identity and Access Management (IAM) role that authorizes Amazon
     * Pinpoint to publish event data to the stream in your AWS account.</p>
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
