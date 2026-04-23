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
#include <aws/discovery/ApplicationDiscoveryService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/discovery/model/ContinuousExportStatus.h>
#include <aws/core/utils/DateTime.h>
#include <aws/discovery/model/DataSource.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
namespace ApplicationDiscoveryService
{
namespace Model
{

  /**
   * <p>A list of continuous export descriptions.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/discovery-2015-11-01/ContinuousExportDescription">AWS
   * API Reference</a></p>
   */
  class AWS_APPLICATIONDISCOVERYSERVICE_API ContinuousExportDescription
  {
  public:
    ContinuousExportDescription();
    ContinuousExportDescription(Aws::Utils::Json::JsonView jsonValue);
    ContinuousExportDescription& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The unique ID assigned to this export.</p>
     */
    inline const Aws::String& GetExportId() const{ return m_exportId; }

    /**
     * <p>The unique ID assigned to this export.</p>
     */
    inline bool ExportIdHasBeenSet() const { return m_exportIdHasBeenSet; }

    /**
     * <p>The unique ID assigned to this export.</p>
     */
    inline void SetExportId(const Aws::String& value) { m_exportIdHasBeenSet = true; m_exportId = value; }

    /**
     * <p>The unique ID assigned to this export.</p>
     */
    inline void SetExportId(Aws::String&& value) { m_exportIdHasBeenSet = true; m_exportId = std::move(value); }

    /**
     * <p>The unique ID assigned to this export.</p>
     */
    inline void SetExportId(const char* value) { m_exportIdHasBeenSet = true; m_exportId.assign(value); }

    /**
     * <p>The unique ID assigned to this export.</p>
     */
    inline ContinuousExportDescription& WithExportId(const Aws::String& value) { SetExportId(value); return *this;}

    /**
     * <p>The unique ID assigned to this export.</p>
     */
    inline ContinuousExportDescription& WithExportId(Aws::String&& value) { SetExportId(std::move(value)); return *this;}

    /**
     * <p>The unique ID assigned to this export.</p>
     */
    inline ContinuousExportDescription& WithExportId(const char* value) { SetExportId(value); return *this;}


    /**
     * <p>Describes the status of the export. Can be one of the following values:</p>
     * <ul> <li> <p>START_IN_PROGRESS - setting up resources to start continuous
     * export.</p> </li> <li> <p>START_FAILED - an error occurred setting up continuous
     * export. To recover, call start-continuous-export again.</p> </li> <li> <p>ACTIVE
     * - data is being exported to the customer bucket.</p> </li> <li> <p>ERROR - an
     * error occurred during export. To fix the issue, call stop-continuous-export and
     * start-continuous-export.</p> </li> <li> <p>STOP_IN_PROGRESS - stopping the
     * export.</p> </li> <li> <p>STOP_FAILED - an error occurred stopping the export.
     * To recover, call stop-continuous-export again.</p> </li> <li> <p>INACTIVE - the
     * continuous export has been stopped. Data is no longer being exported to the
     * customer bucket.</p> </li> </ul>
     */
    inline const ContinuousExportStatus& GetStatus() const{ return m_status; }

    /**
     * <p>Describes the status of the export. Can be one of the following values:</p>
     * <ul> <li> <p>START_IN_PROGRESS - setting up resources to start continuous
     * export.</p> </li> <li> <p>START_FAILED - an error occurred setting up continuous
     * export. To recover, call start-continuous-export again.</p> </li> <li> <p>ACTIVE
     * - data is being exported to the customer bucket.</p> </li> <li> <p>ERROR - an
     * error occurred during export. To fix the issue, call stop-continuous-export and
     * start-continuous-export.</p> </li> <li> <p>STOP_IN_PROGRESS - stopping the
     * export.</p> </li> <li> <p>STOP_FAILED - an error occurred stopping the export.
     * To recover, call stop-continuous-export again.</p> </li> <li> <p>INACTIVE - the
     * continuous export has been stopped. Data is no longer being exported to the
     * customer bucket.</p> </li> </ul>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>Describes the status of the export. Can be one of the following values:</p>
     * <ul> <li> <p>START_IN_PROGRESS - setting up resources to start continuous
     * export.</p> </li> <li> <p>START_FAILED - an error occurred setting up continuous
     * export. To recover, call start-continuous-export again.</p> </li> <li> <p>ACTIVE
     * - data is being exported to the customer bucket.</p> </li> <li> <p>ERROR - an
     * error occurred during export. To fix the issue, call stop-continuous-export and
     * start-continuous-export.</p> </li> <li> <p>STOP_IN_PROGRESS - stopping the
     * export.</p> </li> <li> <p>STOP_FAILED - an error occurred stopping the export.
     * To recover, call stop-continuous-export again.</p> </li> <li> <p>INACTIVE - the
     * continuous export has been stopped. Data is no longer being exported to the
     * customer bucket.</p> </li> </ul>
     */
    inline void SetStatus(const ContinuousExportStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>Describes the status of the export. Can be one of the following values:</p>
     * <ul> <li> <p>START_IN_PROGRESS - setting up resources to start continuous
     * export.</p> </li> <li> <p>START_FAILED - an error occurred setting up continuous
     * export. To recover, call start-continuous-export again.</p> </li> <li> <p>ACTIVE
     * - data is being exported to the customer bucket.</p> </li> <li> <p>ERROR - an
     * error occurred during export. To fix the issue, call stop-continuous-export and
     * start-continuous-export.</p> </li> <li> <p>STOP_IN_PROGRESS - stopping the
     * export.</p> </li> <li> <p>STOP_FAILED - an error occurred stopping the export.
     * To recover, call stop-continuous-export again.</p> </li> <li> <p>INACTIVE - the
     * continuous export has been stopped. Data is no longer being exported to the
     * customer bucket.</p> </li> </ul>
     */
    inline void SetStatus(ContinuousExportStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>Describes the status of the export. Can be one of the following values:</p>
     * <ul> <li> <p>START_IN_PROGRESS - setting up resources to start continuous
     * export.</p> </li> <li> <p>START_FAILED - an error occurred setting up continuous
     * export. To recover, call start-continuous-export again.</p> </li> <li> <p>ACTIVE
     * - data is being exported to the customer bucket.</p> </li> <li> <p>ERROR - an
     * error occurred during export. To fix the issue, call stop-continuous-export and
     * start-continuous-export.</p> </li> <li> <p>STOP_IN_PROGRESS - stopping the
     * export.</p> </li> <li> <p>STOP_FAILED - an error occurred stopping the export.
     * To recover, call stop-continuous-export again.</p> </li> <li> <p>INACTIVE - the
     * continuous export has been stopped. Data is no longer being exported to the
     * customer bucket.</p> </li> </ul>
     */
    inline ContinuousExportDescription& WithStatus(const ContinuousExportStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>Describes the status of the export. Can be one of the following values:</p>
     * <ul> <li> <p>START_IN_PROGRESS - setting up resources to start continuous
     * export.</p> </li> <li> <p>START_FAILED - an error occurred setting up continuous
     * export. To recover, call start-continuous-export again.</p> </li> <li> <p>ACTIVE
     * - data is being exported to the customer bucket.</p> </li> <li> <p>ERROR - an
     * error occurred during export. To fix the issue, call stop-continuous-export and
     * start-continuous-export.</p> </li> <li> <p>STOP_IN_PROGRESS - stopping the
     * export.</p> </li> <li> <p>STOP_FAILED - an error occurred stopping the export.
     * To recover, call stop-continuous-export again.</p> </li> <li> <p>INACTIVE - the
     * continuous export has been stopped. Data is no longer being exported to the
     * customer bucket.</p> </li> </ul>
     */
    inline ContinuousExportDescription& WithStatus(ContinuousExportStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>Contains information about any errors that have occurred. This data type can
     * have the following values:</p> <ul> <li> <p>ACCESS_DENIED - You don’t have
     * permission to start Data Exploration in Amazon Athena. Contact your AWS
     * administrator for help. For more information, see <a
     * href="http://docs.aws.amazon.com/application-discovery/latest/userguide/setting-up.html">Setting
     * Up AWS Application Discovery Service</a> in the Application Discovery Service
     * User Guide.</p> </li> <li> <p>DELIVERY_STREAM_LIMIT_FAILURE - You reached the
     * limit for Amazon Kinesis Data Firehose delivery streams. Reduce the number of
     * streams or request a limit increase and try again. For more information, see <a
     * href="http://docs.aws.amazon.com/streams/latest/dev/service-sizes-and-limits.html">Kinesis
     * Data Streams Limits</a> in the Amazon Kinesis Data Streams Developer Guide.</p>
     * </li> <li> <p>FIREHOSE_ROLE_MISSING - The Data Exploration feature is in an
     * error state because your IAM User is missing the
     * AWSApplicationDiscoveryServiceFirehose role. Turn on Data Exploration in Amazon
     * Athena and try again. For more information, see <a
     * href="http://docs.aws.amazon.com/application-discovery/latest/userguide/setting-up.html#setting-up-user-policy">Step
     * 3: Provide Application Discovery Service Access to Non-Administrator Users by
     * Attaching Policies</a> in the Application Discovery Service User Guide.</p>
     * </li> <li> <p>FIREHOSE_STREAM_DOES_NOT_EXIST - The Data Exploration feature is
     * in an error state because your IAM User is missing one or more of the Kinesis
     * data delivery streams.</p> </li> <li> <p>INTERNAL_FAILURE - The Data Exploration
     * feature is in an error state because of an internal failure. Try again later. If
     * this problem persists, contact AWS Support.</p> </li> <li>
     * <p>S3_BUCKET_LIMIT_FAILURE - You reached the limit for Amazon S3 buckets. Reduce
     * the number of Amazon S3 buckets or request a limit increase and try again. For
     * more information, see <a
     * href="http://docs.aws.amazon.com/AmazonS3/latest/dev/BucketRestrictions.html">Bucket
     * Restrictions and Limitations</a> in the Amazon Simple Storage Service Developer
     * Guide.</p> </li> <li> <p>S3_NOT_SIGNED_UP - Your account is not signed up for
     * the Amazon S3 service. You must sign up before you can use Amazon S3. You can
     * sign up at the following URL: <a
     * href="https://aws.amazon.com/s3">https://aws.amazon.com/s3</a>.</p> </li> </ul>
     */
    inline const Aws::String& GetStatusDetail() const{ return m_statusDetail; }

    /**
     * <p>Contains information about any errors that have occurred. This data type can
     * have the following values:</p> <ul> <li> <p>ACCESS_DENIED - You don’t have
     * permission to start Data Exploration in Amazon Athena. Contact your AWS
     * administrator for help. For more information, see <a
     * href="http://docs.aws.amazon.com/application-discovery/latest/userguide/setting-up.html">Setting
     * Up AWS Application Discovery Service</a> in the Application Discovery Service
     * User Guide.</p> </li> <li> <p>DELIVERY_STREAM_LIMIT_FAILURE - You reached the
     * limit for Amazon Kinesis Data Firehose delivery streams. Reduce the number of
     * streams or request a limit increase and try again. For more information, see <a
     * href="http://docs.aws.amazon.com/streams/latest/dev/service-sizes-and-limits.html">Kinesis
     * Data Streams Limits</a> in the Amazon Kinesis Data Streams Developer Guide.</p>
     * </li> <li> <p>FIREHOSE_ROLE_MISSING - The Data Exploration feature is in an
     * error state because your IAM User is missing the
     * AWSApplicationDiscoveryServiceFirehose role. Turn on Data Exploration in Amazon
     * Athena and try again. For more information, see <a
     * href="http://docs.aws.amazon.com/application-discovery/latest/userguide/setting-up.html#setting-up-user-policy">Step
     * 3: Provide Application Discovery Service Access to Non-Administrator Users by
     * Attaching Policies</a> in the Application Discovery Service User Guide.</p>
     * </li> <li> <p>FIREHOSE_STREAM_DOES_NOT_EXIST - The Data Exploration feature is
     * in an error state because your IAM User is missing one or more of the Kinesis
     * data delivery streams.</p> </li> <li> <p>INTERNAL_FAILURE - The Data Exploration
     * feature is in an error state because of an internal failure. Try again later. If
     * this problem persists, contact AWS Support.</p> </li> <li>
     * <p>S3_BUCKET_LIMIT_FAILURE - You reached the limit for Amazon S3 buckets. Reduce
     * the number of Amazon S3 buckets or request a limit increase and try again. For
     * more information, see <a
     * href="http://docs.aws.amazon.com/AmazonS3/latest/dev/BucketRestrictions.html">Bucket
     * Restrictions and Limitations</a> in the Amazon Simple Storage Service Developer
     * Guide.</p> </li> <li> <p>S3_NOT_SIGNED_UP - Your account is not signed up for
     * the Amazon S3 service. You must sign up before you can use Amazon S3. You can
     * sign up at the following URL: <a
     * href="https://aws.amazon.com/s3">https://aws.amazon.com/s3</a>.</p> </li> </ul>
     */
    inline bool StatusDetailHasBeenSet() const { return m_statusDetailHasBeenSet; }

    /**
     * <p>Contains information about any errors that have occurred. This data type can
     * have the following values:</p> <ul> <li> <p>ACCESS_DENIED - You don’t have
     * permission to start Data Exploration in Amazon Athena. Contact your AWS
     * administrator for help. For more information, see <a
     * href="http://docs.aws.amazon.com/application-discovery/latest/userguide/setting-up.html">Setting
     * Up AWS Application Discovery Service</a> in the Application Discovery Service
     * User Guide.</p> </li> <li> <p>DELIVERY_STREAM_LIMIT_FAILURE - You reached the
     * limit for Amazon Kinesis Data Firehose delivery streams. Reduce the number of
     * streams or request a limit increase and try again. For more information, see <a
     * href="http://docs.aws.amazon.com/streams/latest/dev/service-sizes-and-limits.html">Kinesis
     * Data Streams Limits</a> in the Amazon Kinesis Data Streams Developer Guide.</p>
     * </li> <li> <p>FIREHOSE_ROLE_MISSING - The Data Exploration feature is in an
     * error state because your IAM User is missing the
     * AWSApplicationDiscoveryServiceFirehose role. Turn on Data Exploration in Amazon
     * Athena and try again. For more information, see <a
     * href="http://docs.aws.amazon.com/application-discovery/latest/userguide/setting-up.html#setting-up-user-policy">Step
     * 3: Provide Application Discovery Service Access to Non-Administrator Users by
     * Attaching Policies</a> in the Application Discovery Service User Guide.</p>
     * </li> <li> <p>FIREHOSE_STREAM_DOES_NOT_EXIST - The Data Exploration feature is
     * in an error state because your IAM User is missing one or more of the Kinesis
     * data delivery streams.</p> </li> <li> <p>INTERNAL_FAILURE - The Data Exploration
     * feature is in an error state because of an internal failure. Try again later. If
     * this problem persists, contact AWS Support.</p> </li> <li>
     * <p>S3_BUCKET_LIMIT_FAILURE - You reached the limit for Amazon S3 buckets. Reduce
     * the number of Amazon S3 buckets or request a limit increase and try again. For
     * more information, see <a
     * href="http://docs.aws.amazon.com/AmazonS3/latest/dev/BucketRestrictions.html">Bucket
     * Restrictions and Limitations</a> in the Amazon Simple Storage Service Developer
     * Guide.</p> </li> <li> <p>S3_NOT_SIGNED_UP - Your account is not signed up for
     * the Amazon S3 service. You must sign up before you can use Amazon S3. You can
     * sign up at the following URL: <a
     * href="https://aws.amazon.com/s3">https://aws.amazon.com/s3</a>.</p> </li> </ul>
     */
    inline void SetStatusDetail(const Aws::String& value) { m_statusDetailHasBeenSet = true; m_statusDetail = value; }

    /**
     * <p>Contains information about any errors that have occurred. This data type can
     * have the following values:</p> <ul> <li> <p>ACCESS_DENIED - You don’t have
     * permission to start Data Exploration in Amazon Athena. Contact your AWS
     * administrator for help. For more information, see <a
     * href="http://docs.aws.amazon.com/application-discovery/latest/userguide/setting-up.html">Setting
     * Up AWS Application Discovery Service</a> in the Application Discovery Service
     * User Guide.</p> </li> <li> <p>DELIVERY_STREAM_LIMIT_FAILURE - You reached the
     * limit for Amazon Kinesis Data Firehose delivery streams. Reduce the number of
     * streams or request a limit increase and try again. For more information, see <a
     * href="http://docs.aws.amazon.com/streams/latest/dev/service-sizes-and-limits.html">Kinesis
     * Data Streams Limits</a> in the Amazon Kinesis Data Streams Developer Guide.</p>
     * </li> <li> <p>FIREHOSE_ROLE_MISSING - The Data Exploration feature is in an
     * error state because your IAM User is missing the
     * AWSApplicationDiscoveryServiceFirehose role. Turn on Data Exploration in Amazon
     * Athena and try again. For more information, see <a
     * href="http://docs.aws.amazon.com/application-discovery/latest/userguide/setting-up.html#setting-up-user-policy">Step
     * 3: Provide Application Discovery Service Access to Non-Administrator Users by
     * Attaching Policies</a> in the Application Discovery Service User Guide.</p>
     * </li> <li> <p>FIREHOSE_STREAM_DOES_NOT_EXIST - The Data Exploration feature is
     * in an error state because your IAM User is missing one or more of the Kinesis
     * data delivery streams.</p> </li> <li> <p>INTERNAL_FAILURE - The Data Exploration
     * feature is in an error state because of an internal failure. Try again later. If
     * this problem persists, contact AWS Support.</p> </li> <li>
     * <p>S3_BUCKET_LIMIT_FAILURE - You reached the limit for Amazon S3 buckets. Reduce
     * the number of Amazon S3 buckets or request a limit increase and try again. For
     * more information, see <a
     * href="http://docs.aws.amazon.com/AmazonS3/latest/dev/BucketRestrictions.html">Bucket
     * Restrictions and Limitations</a> in the Amazon Simple Storage Service Developer
     * Guide.</p> </li> <li> <p>S3_NOT_SIGNED_UP - Your account is not signed up for
     * the Amazon S3 service. You must sign up before you can use Amazon S3. You can
     * sign up at the following URL: <a
     * href="https://aws.amazon.com/s3">https://aws.amazon.com/s3</a>.</p> </li> </ul>
     */
    inline void SetStatusDetail(Aws::String&& value) { m_statusDetailHasBeenSet = true; m_statusDetail = std::move(value); }

    /**
     * <p>Contains information about any errors that have occurred. This data type can
     * have the following values:</p> <ul> <li> <p>ACCESS_DENIED - You don’t have
     * permission to start Data Exploration in Amazon Athena. Contact your AWS
     * administrator for help. For more information, see <a
     * href="http://docs.aws.amazon.com/application-discovery/latest/userguide/setting-up.html">Setting
     * Up AWS Application Discovery Service</a> in the Application Discovery Service
     * User Guide.</p> </li> <li> <p>DELIVERY_STREAM_LIMIT_FAILURE - You reached the
     * limit for Amazon Kinesis Data Firehose delivery streams. Reduce the number of
     * streams or request a limit increase and try again. For more information, see <a
     * href="http://docs.aws.amazon.com/streams/latest/dev/service-sizes-and-limits.html">Kinesis
     * Data Streams Limits</a> in the Amazon Kinesis Data Streams Developer Guide.</p>
     * </li> <li> <p>FIREHOSE_ROLE_MISSING - The Data Exploration feature is in an
     * error state because your IAM User is missing the
     * AWSApplicationDiscoveryServiceFirehose role. Turn on Data Exploration in Amazon
     * Athena and try again. For more information, see <a
     * href="http://docs.aws.amazon.com/application-discovery/latest/userguide/setting-up.html#setting-up-user-policy">Step
     * 3: Provide Application Discovery Service Access to Non-Administrator Users by
     * Attaching Policies</a> in the Application Discovery Service User Guide.</p>
     * </li> <li> <p>FIREHOSE_STREAM_DOES_NOT_EXIST - The Data Exploration feature is
     * in an error state because your IAM User is missing one or more of the Kinesis
     * data delivery streams.</p> </li> <li> <p>INTERNAL_FAILURE - The Data Exploration
     * feature is in an error state because of an internal failure. Try again later. If
     * this problem persists, contact AWS Support.</p> </li> <li>
     * <p>S3_BUCKET_LIMIT_FAILURE - You reached the limit for Amazon S3 buckets. Reduce
     * the number of Amazon S3 buckets or request a limit increase and try again. For
     * more information, see <a
     * href="http://docs.aws.amazon.com/AmazonS3/latest/dev/BucketRestrictions.html">Bucket
     * Restrictions and Limitations</a> in the Amazon Simple Storage Service Developer
     * Guide.</p> </li> <li> <p>S3_NOT_SIGNED_UP - Your account is not signed up for
     * the Amazon S3 service. You must sign up before you can use Amazon S3. You can
     * sign up at the following URL: <a
     * href="https://aws.amazon.com/s3">https://aws.amazon.com/s3</a>.</p> </li> </ul>
     */
    inline void SetStatusDetail(const char* value) { m_statusDetailHasBeenSet = true; m_statusDetail.assign(value); }

    /**
     * <p>Contains information about any errors that have occurred. This data type can
     * have the following values:</p> <ul> <li> <p>ACCESS_DENIED - You don’t have
     * permission to start Data Exploration in Amazon Athena. Contact your AWS
     * administrator for help. For more information, see <a
     * href="http://docs.aws.amazon.com/application-discovery/latest/userguide/setting-up.html">Setting
     * Up AWS Application Discovery Service</a> in the Application Discovery Service
     * User Guide.</p> </li> <li> <p>DELIVERY_STREAM_LIMIT_FAILURE - You reached the
     * limit for Amazon Kinesis Data Firehose delivery streams. Reduce the number of
     * streams or request a limit increase and try again. For more information, see <a
     * href="http://docs.aws.amazon.com/streams/latest/dev/service-sizes-and-limits.html">Kinesis
     * Data Streams Limits</a> in the Amazon Kinesis Data Streams Developer Guide.</p>
     * </li> <li> <p>FIREHOSE_ROLE_MISSING - The Data Exploration feature is in an
     * error state because your IAM User is missing the
     * AWSApplicationDiscoveryServiceFirehose role. Turn on Data Exploration in Amazon
     * Athena and try again. For more information, see <a
     * href="http://docs.aws.amazon.com/application-discovery/latest/userguide/setting-up.html#setting-up-user-policy">Step
     * 3: Provide Application Discovery Service Access to Non-Administrator Users by
     * Attaching Policies</a> in the Application Discovery Service User Guide.</p>
     * </li> <li> <p>FIREHOSE_STREAM_DOES_NOT_EXIST - The Data Exploration feature is
     * in an error state because your IAM User is missing one or more of the Kinesis
     * data delivery streams.</p> </li> <li> <p>INTERNAL_FAILURE - The Data Exploration
     * feature is in an error state because of an internal failure. Try again later. If
     * this problem persists, contact AWS Support.</p> </li> <li>
     * <p>S3_BUCKET_LIMIT_FAILURE - You reached the limit for Amazon S3 buckets. Reduce
     * the number of Amazon S3 buckets or request a limit increase and try again. For
     * more information, see <a
     * href="http://docs.aws.amazon.com/AmazonS3/latest/dev/BucketRestrictions.html">Bucket
     * Restrictions and Limitations</a> in the Amazon Simple Storage Service Developer
     * Guide.</p> </li> <li> <p>S3_NOT_SIGNED_UP - Your account is not signed up for
     * the Amazon S3 service. You must sign up before you can use Amazon S3. You can
     * sign up at the following URL: <a
     * href="https://aws.amazon.com/s3">https://aws.amazon.com/s3</a>.</p> </li> </ul>
     */
    inline ContinuousExportDescription& WithStatusDetail(const Aws::String& value) { SetStatusDetail(value); return *this;}

    /**
     * <p>Contains information about any errors that have occurred. This data type can
     * have the following values:</p> <ul> <li> <p>ACCESS_DENIED - You don’t have
     * permission to start Data Exploration in Amazon Athena. Contact your AWS
     * administrator for help. For more information, see <a
     * href="http://docs.aws.amazon.com/application-discovery/latest/userguide/setting-up.html">Setting
     * Up AWS Application Discovery Service</a> in the Application Discovery Service
     * User Guide.</p> </li> <li> <p>DELIVERY_STREAM_LIMIT_FAILURE - You reached the
     * limit for Amazon Kinesis Data Firehose delivery streams. Reduce the number of
     * streams or request a limit increase and try again. For more information, see <a
     * href="http://docs.aws.amazon.com/streams/latest/dev/service-sizes-and-limits.html">Kinesis
     * Data Streams Limits</a> in the Amazon Kinesis Data Streams Developer Guide.</p>
     * </li> <li> <p>FIREHOSE_ROLE_MISSING - The Data Exploration feature is in an
     * error state because your IAM User is missing the
     * AWSApplicationDiscoveryServiceFirehose role. Turn on Data Exploration in Amazon
     * Athena and try again. For more information, see <a
     * href="http://docs.aws.amazon.com/application-discovery/latest/userguide/setting-up.html#setting-up-user-policy">Step
     * 3: Provide Application Discovery Service Access to Non-Administrator Users by
     * Attaching Policies</a> in the Application Discovery Service User Guide.</p>
     * </li> <li> <p>FIREHOSE_STREAM_DOES_NOT_EXIST - The Data Exploration feature is
     * in an error state because your IAM User is missing one or more of the Kinesis
     * data delivery streams.</p> </li> <li> <p>INTERNAL_FAILURE - The Data Exploration
     * feature is in an error state because of an internal failure. Try again later. If
     * this problem persists, contact AWS Support.</p> </li> <li>
     * <p>S3_BUCKET_LIMIT_FAILURE - You reached the limit for Amazon S3 buckets. Reduce
     * the number of Amazon S3 buckets or request a limit increase and try again. For
     * more information, see <a
     * href="http://docs.aws.amazon.com/AmazonS3/latest/dev/BucketRestrictions.html">Bucket
     * Restrictions and Limitations</a> in the Amazon Simple Storage Service Developer
     * Guide.</p> </li> <li> <p>S3_NOT_SIGNED_UP - Your account is not signed up for
     * the Amazon S3 service. You must sign up before you can use Amazon S3. You can
     * sign up at the following URL: <a
     * href="https://aws.amazon.com/s3">https://aws.amazon.com/s3</a>.</p> </li> </ul>
     */
    inline ContinuousExportDescription& WithStatusDetail(Aws::String&& value) { SetStatusDetail(std::move(value)); return *this;}

    /**
     * <p>Contains information about any errors that have occurred. This data type can
     * have the following values:</p> <ul> <li> <p>ACCESS_DENIED - You don’t have
     * permission to start Data Exploration in Amazon Athena. Contact your AWS
     * administrator for help. For more information, see <a
     * href="http://docs.aws.amazon.com/application-discovery/latest/userguide/setting-up.html">Setting
     * Up AWS Application Discovery Service</a> in the Application Discovery Service
     * User Guide.</p> </li> <li> <p>DELIVERY_STREAM_LIMIT_FAILURE - You reached the
     * limit for Amazon Kinesis Data Firehose delivery streams. Reduce the number of
     * streams or request a limit increase and try again. For more information, see <a
     * href="http://docs.aws.amazon.com/streams/latest/dev/service-sizes-and-limits.html">Kinesis
     * Data Streams Limits</a> in the Amazon Kinesis Data Streams Developer Guide.</p>
     * </li> <li> <p>FIREHOSE_ROLE_MISSING - The Data Exploration feature is in an
     * error state because your IAM User is missing the
     * AWSApplicationDiscoveryServiceFirehose role. Turn on Data Exploration in Amazon
     * Athena and try again. For more information, see <a
     * href="http://docs.aws.amazon.com/application-discovery/latest/userguide/setting-up.html#setting-up-user-policy">Step
     * 3: Provide Application Discovery Service Access to Non-Administrator Users by
     * Attaching Policies</a> in the Application Discovery Service User Guide.</p>
     * </li> <li> <p>FIREHOSE_STREAM_DOES_NOT_EXIST - The Data Exploration feature is
     * in an error state because your IAM User is missing one or more of the Kinesis
     * data delivery streams.</p> </li> <li> <p>INTERNAL_FAILURE - The Data Exploration
     * feature is in an error state because of an internal failure. Try again later. If
     * this problem persists, contact AWS Support.</p> </li> <li>
     * <p>S3_BUCKET_LIMIT_FAILURE - You reached the limit for Amazon S3 buckets. Reduce
     * the number of Amazon S3 buckets or request a limit increase and try again. For
     * more information, see <a
     * href="http://docs.aws.amazon.com/AmazonS3/latest/dev/BucketRestrictions.html">Bucket
     * Restrictions and Limitations</a> in the Amazon Simple Storage Service Developer
     * Guide.</p> </li> <li> <p>S3_NOT_SIGNED_UP - Your account is not signed up for
     * the Amazon S3 service. You must sign up before you can use Amazon S3. You can
     * sign up at the following URL: <a
     * href="https://aws.amazon.com/s3">https://aws.amazon.com/s3</a>.</p> </li> </ul>
     */
    inline ContinuousExportDescription& WithStatusDetail(const char* value) { SetStatusDetail(value); return *this;}


    /**
     * <p>The name of the s3 bucket where the export data parquet files are stored.</p>
     */
    inline const Aws::String& GetS3Bucket() const{ return m_s3Bucket; }

    /**
     * <p>The name of the s3 bucket where the export data parquet files are stored.</p>
     */
    inline bool S3BucketHasBeenSet() const { return m_s3BucketHasBeenSet; }

    /**
     * <p>The name of the s3 bucket where the export data parquet files are stored.</p>
     */
    inline void SetS3Bucket(const Aws::String& value) { m_s3BucketHasBeenSet = true; m_s3Bucket = value; }

    /**
     * <p>The name of the s3 bucket where the export data parquet files are stored.</p>
     */
    inline void SetS3Bucket(Aws::String&& value) { m_s3BucketHasBeenSet = true; m_s3Bucket = std::move(value); }

    /**
     * <p>The name of the s3 bucket where the export data parquet files are stored.</p>
     */
    inline void SetS3Bucket(const char* value) { m_s3BucketHasBeenSet = true; m_s3Bucket.assign(value); }

    /**
     * <p>The name of the s3 bucket where the export data parquet files are stored.</p>
     */
    inline ContinuousExportDescription& WithS3Bucket(const Aws::String& value) { SetS3Bucket(value); return *this;}

    /**
     * <p>The name of the s3 bucket where the export data parquet files are stored.</p>
     */
    inline ContinuousExportDescription& WithS3Bucket(Aws::String&& value) { SetS3Bucket(std::move(value)); return *this;}

    /**
     * <p>The name of the s3 bucket where the export data parquet files are stored.</p>
     */
    inline ContinuousExportDescription& WithS3Bucket(const char* value) { SetS3Bucket(value); return *this;}


    /**
     * <p>The timestamp representing when the continuous export was started.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const{ return m_startTime; }

    /**
     * <p>The timestamp representing when the continuous export was started.</p>
     */
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }

    /**
     * <p>The timestamp representing when the continuous export was started.</p>
     */
    inline void SetStartTime(const Aws::Utils::DateTime& value) { m_startTimeHasBeenSet = true; m_startTime = value; }

    /**
     * <p>The timestamp representing when the continuous export was started.</p>
     */
    inline void SetStartTime(Aws::Utils::DateTime&& value) { m_startTimeHasBeenSet = true; m_startTime = std::move(value); }

    /**
     * <p>The timestamp representing when the continuous export was started.</p>
     */
    inline ContinuousExportDescription& WithStartTime(const Aws::Utils::DateTime& value) { SetStartTime(value); return *this;}

    /**
     * <p>The timestamp representing when the continuous export was started.</p>
     */
    inline ContinuousExportDescription& WithStartTime(Aws::Utils::DateTime&& value) { SetStartTime(std::move(value)); return *this;}


    /**
     * <p>The timestamp that represents when this continuous export was stopped.</p>
     */
    inline const Aws::Utils::DateTime& GetStopTime() const{ return m_stopTime; }

    /**
     * <p>The timestamp that represents when this continuous export was stopped.</p>
     */
    inline bool StopTimeHasBeenSet() const { return m_stopTimeHasBeenSet; }

    /**
     * <p>The timestamp that represents when this continuous export was stopped.</p>
     */
    inline void SetStopTime(const Aws::Utils::DateTime& value) { m_stopTimeHasBeenSet = true; m_stopTime = value; }

    /**
     * <p>The timestamp that represents when this continuous export was stopped.</p>
     */
    inline void SetStopTime(Aws::Utils::DateTime&& value) { m_stopTimeHasBeenSet = true; m_stopTime = std::move(value); }

    /**
     * <p>The timestamp that represents when this continuous export was stopped.</p>
     */
    inline ContinuousExportDescription& WithStopTime(const Aws::Utils::DateTime& value) { SetStopTime(value); return *this;}

    /**
     * <p>The timestamp that represents when this continuous export was stopped.</p>
     */
    inline ContinuousExportDescription& WithStopTime(Aws::Utils::DateTime&& value) { SetStopTime(std::move(value)); return *this;}


    /**
     * <p>The type of data collector used to gather this data (currently only offered
     * for AGENT).</p>
     */
    inline const DataSource& GetDataSource() const{ return m_dataSource; }

    /**
     * <p>The type of data collector used to gather this data (currently only offered
     * for AGENT).</p>
     */
    inline bool DataSourceHasBeenSet() const { return m_dataSourceHasBeenSet; }

    /**
     * <p>The type of data collector used to gather this data (currently only offered
     * for AGENT).</p>
     */
    inline void SetDataSource(const DataSource& value) { m_dataSourceHasBeenSet = true; m_dataSource = value; }

    /**
     * <p>The type of data collector used to gather this data (currently only offered
     * for AGENT).</p>
     */
    inline void SetDataSource(DataSource&& value) { m_dataSourceHasBeenSet = true; m_dataSource = std::move(value); }

    /**
     * <p>The type of data collector used to gather this data (currently only offered
     * for AGENT).</p>
     */
    inline ContinuousExportDescription& WithDataSource(const DataSource& value) { SetDataSource(value); return *this;}

    /**
     * <p>The type of data collector used to gather this data (currently only offered
     * for AGENT).</p>
     */
    inline ContinuousExportDescription& WithDataSource(DataSource&& value) { SetDataSource(std::move(value)); return *this;}


    /**
     * <p>An object which describes how the data is stored.</p> <ul> <li> <p>
     * <code>databaseName</code> - the name of the Glue database used to store the
     * schema.</p> </li> </ul>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetSchemaStorageConfig() const{ return m_schemaStorageConfig; }

    /**
     * <p>An object which describes how the data is stored.</p> <ul> <li> <p>
     * <code>databaseName</code> - the name of the Glue database used to store the
     * schema.</p> </li> </ul>
     */
    inline bool SchemaStorageConfigHasBeenSet() const { return m_schemaStorageConfigHasBeenSet; }

    /**
     * <p>An object which describes how the data is stored.</p> <ul> <li> <p>
     * <code>databaseName</code> - the name of the Glue database used to store the
     * schema.</p> </li> </ul>
     */
    inline void SetSchemaStorageConfig(const Aws::Map<Aws::String, Aws::String>& value) { m_schemaStorageConfigHasBeenSet = true; m_schemaStorageConfig = value; }

    /**
     * <p>An object which describes how the data is stored.</p> <ul> <li> <p>
     * <code>databaseName</code> - the name of the Glue database used to store the
     * schema.</p> </li> </ul>
     */
    inline void SetSchemaStorageConfig(Aws::Map<Aws::String, Aws::String>&& value) { m_schemaStorageConfigHasBeenSet = true; m_schemaStorageConfig = std::move(value); }

    /**
     * <p>An object which describes how the data is stored.</p> <ul> <li> <p>
     * <code>databaseName</code> - the name of the Glue database used to store the
     * schema.</p> </li> </ul>
     */
    inline ContinuousExportDescription& WithSchemaStorageConfig(const Aws::Map<Aws::String, Aws::String>& value) { SetSchemaStorageConfig(value); return *this;}

    /**
     * <p>An object which describes how the data is stored.</p> <ul> <li> <p>
     * <code>databaseName</code> - the name of the Glue database used to store the
     * schema.</p> </li> </ul>
     */
    inline ContinuousExportDescription& WithSchemaStorageConfig(Aws::Map<Aws::String, Aws::String>&& value) { SetSchemaStorageConfig(std::move(value)); return *this;}

    /**
     * <p>An object which describes how the data is stored.</p> <ul> <li> <p>
     * <code>databaseName</code> - the name of the Glue database used to store the
     * schema.</p> </li> </ul>
     */
    inline ContinuousExportDescription& AddSchemaStorageConfig(const Aws::String& key, const Aws::String& value) { m_schemaStorageConfigHasBeenSet = true; m_schemaStorageConfig.emplace(key, value); return *this; }

    /**
     * <p>An object which describes how the data is stored.</p> <ul> <li> <p>
     * <code>databaseName</code> - the name of the Glue database used to store the
     * schema.</p> </li> </ul>
     */
    inline ContinuousExportDescription& AddSchemaStorageConfig(Aws::String&& key, const Aws::String& value) { m_schemaStorageConfigHasBeenSet = true; m_schemaStorageConfig.emplace(std::move(key), value); return *this; }

    /**
     * <p>An object which describes how the data is stored.</p> <ul> <li> <p>
     * <code>databaseName</code> - the name of the Glue database used to store the
     * schema.</p> </li> </ul>
     */
    inline ContinuousExportDescription& AddSchemaStorageConfig(const Aws::String& key, Aws::String&& value) { m_schemaStorageConfigHasBeenSet = true; m_schemaStorageConfig.emplace(key, std::move(value)); return *this; }

    /**
     * <p>An object which describes how the data is stored.</p> <ul> <li> <p>
     * <code>databaseName</code> - the name of the Glue database used to store the
     * schema.</p> </li> </ul>
     */
    inline ContinuousExportDescription& AddSchemaStorageConfig(Aws::String&& key, Aws::String&& value) { m_schemaStorageConfigHasBeenSet = true; m_schemaStorageConfig.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>An object which describes how the data is stored.</p> <ul> <li> <p>
     * <code>databaseName</code> - the name of the Glue database used to store the
     * schema.</p> </li> </ul>
     */
    inline ContinuousExportDescription& AddSchemaStorageConfig(const char* key, Aws::String&& value) { m_schemaStorageConfigHasBeenSet = true; m_schemaStorageConfig.emplace(key, std::move(value)); return *this; }

    /**
     * <p>An object which describes how the data is stored.</p> <ul> <li> <p>
     * <code>databaseName</code> - the name of the Glue database used to store the
     * schema.</p> </li> </ul>
     */
    inline ContinuousExportDescription& AddSchemaStorageConfig(Aws::String&& key, const char* value) { m_schemaStorageConfigHasBeenSet = true; m_schemaStorageConfig.emplace(std::move(key), value); return *this; }

    /**
     * <p>An object which describes how the data is stored.</p> <ul> <li> <p>
     * <code>databaseName</code> - the name of the Glue database used to store the
     * schema.</p> </li> </ul>
     */
    inline ContinuousExportDescription& AddSchemaStorageConfig(const char* key, const char* value) { m_schemaStorageConfigHasBeenSet = true; m_schemaStorageConfig.emplace(key, value); return *this; }

  private:

    Aws::String m_exportId;
    bool m_exportIdHasBeenSet;

    ContinuousExportStatus m_status;
    bool m_statusHasBeenSet;

    Aws::String m_statusDetail;
    bool m_statusDetailHasBeenSet;

    Aws::String m_s3Bucket;
    bool m_s3BucketHasBeenSet;

    Aws::Utils::DateTime m_startTime;
    bool m_startTimeHasBeenSet;

    Aws::Utils::DateTime m_stopTime;
    bool m_stopTimeHasBeenSet;

    DataSource m_dataSource;
    bool m_dataSourceHasBeenSet;

    Aws::Map<Aws::String, Aws::String> m_schemaStorageConfig;
    bool m_schemaStorageConfigHasBeenSet;
  };

} // namespace Model
} // namespace ApplicationDiscoveryService
} // namespace Aws
