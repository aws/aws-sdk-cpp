/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/ec2/model/VerifiedAccessLogS3DestinationOptions.h>
#include <aws/ec2/model/VerifiedAccessLogCloudWatchLogsDestinationOptions.h>
#include <aws/ec2/model/VerifiedAccessLogKinesisDataFirehoseDestinationOptions.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace EC2
{
namespace Model
{

  /**
   * <p>Describes the destinations for Verified Access logs.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/VerifiedAccessLogOptions">AWS
   * API Reference</a></p>
   */
  class VerifiedAccessLogOptions
  {
  public:
    AWS_EC2_API VerifiedAccessLogOptions();
    AWS_EC2_API VerifiedAccessLogOptions(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API VerifiedAccessLogOptions& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>Sends Verified Access logs to Amazon S3.</p>
     */
    inline const VerifiedAccessLogS3DestinationOptions& GetS3() const{ return m_s3; }

    /**
     * <p>Sends Verified Access logs to Amazon S3.</p>
     */
    inline bool S3HasBeenSet() const { return m_s3HasBeenSet; }

    /**
     * <p>Sends Verified Access logs to Amazon S3.</p>
     */
    inline void SetS3(const VerifiedAccessLogS3DestinationOptions& value) { m_s3HasBeenSet = true; m_s3 = value; }

    /**
     * <p>Sends Verified Access logs to Amazon S3.</p>
     */
    inline void SetS3(VerifiedAccessLogS3DestinationOptions&& value) { m_s3HasBeenSet = true; m_s3 = std::move(value); }

    /**
     * <p>Sends Verified Access logs to Amazon S3.</p>
     */
    inline VerifiedAccessLogOptions& WithS3(const VerifiedAccessLogS3DestinationOptions& value) { SetS3(value); return *this;}

    /**
     * <p>Sends Verified Access logs to Amazon S3.</p>
     */
    inline VerifiedAccessLogOptions& WithS3(VerifiedAccessLogS3DestinationOptions&& value) { SetS3(std::move(value)); return *this;}


    /**
     * <p>Sends Verified Access logs to CloudWatch Logs.</p>
     */
    inline const VerifiedAccessLogCloudWatchLogsDestinationOptions& GetCloudWatchLogs() const{ return m_cloudWatchLogs; }

    /**
     * <p>Sends Verified Access logs to CloudWatch Logs.</p>
     */
    inline bool CloudWatchLogsHasBeenSet() const { return m_cloudWatchLogsHasBeenSet; }

    /**
     * <p>Sends Verified Access logs to CloudWatch Logs.</p>
     */
    inline void SetCloudWatchLogs(const VerifiedAccessLogCloudWatchLogsDestinationOptions& value) { m_cloudWatchLogsHasBeenSet = true; m_cloudWatchLogs = value; }

    /**
     * <p>Sends Verified Access logs to CloudWatch Logs.</p>
     */
    inline void SetCloudWatchLogs(VerifiedAccessLogCloudWatchLogsDestinationOptions&& value) { m_cloudWatchLogsHasBeenSet = true; m_cloudWatchLogs = std::move(value); }

    /**
     * <p>Sends Verified Access logs to CloudWatch Logs.</p>
     */
    inline VerifiedAccessLogOptions& WithCloudWatchLogs(const VerifiedAccessLogCloudWatchLogsDestinationOptions& value) { SetCloudWatchLogs(value); return *this;}

    /**
     * <p>Sends Verified Access logs to CloudWatch Logs.</p>
     */
    inline VerifiedAccessLogOptions& WithCloudWatchLogs(VerifiedAccessLogCloudWatchLogsDestinationOptions&& value) { SetCloudWatchLogs(std::move(value)); return *this;}


    /**
     * <p>Sends Verified Access logs to Kinesis.</p>
     */
    inline const VerifiedAccessLogKinesisDataFirehoseDestinationOptions& GetKinesisDataFirehose() const{ return m_kinesisDataFirehose; }

    /**
     * <p>Sends Verified Access logs to Kinesis.</p>
     */
    inline bool KinesisDataFirehoseHasBeenSet() const { return m_kinesisDataFirehoseHasBeenSet; }

    /**
     * <p>Sends Verified Access logs to Kinesis.</p>
     */
    inline void SetKinesisDataFirehose(const VerifiedAccessLogKinesisDataFirehoseDestinationOptions& value) { m_kinesisDataFirehoseHasBeenSet = true; m_kinesisDataFirehose = value; }

    /**
     * <p>Sends Verified Access logs to Kinesis.</p>
     */
    inline void SetKinesisDataFirehose(VerifiedAccessLogKinesisDataFirehoseDestinationOptions&& value) { m_kinesisDataFirehoseHasBeenSet = true; m_kinesisDataFirehose = std::move(value); }

    /**
     * <p>Sends Verified Access logs to Kinesis.</p>
     */
    inline VerifiedAccessLogOptions& WithKinesisDataFirehose(const VerifiedAccessLogKinesisDataFirehoseDestinationOptions& value) { SetKinesisDataFirehose(value); return *this;}

    /**
     * <p>Sends Verified Access logs to Kinesis.</p>
     */
    inline VerifiedAccessLogOptions& WithKinesisDataFirehose(VerifiedAccessLogKinesisDataFirehoseDestinationOptions&& value) { SetKinesisDataFirehose(std::move(value)); return *this;}

  private:

    VerifiedAccessLogS3DestinationOptions m_s3;
    bool m_s3HasBeenSet = false;

    VerifiedAccessLogCloudWatchLogsDestinationOptions m_cloudWatchLogs;
    bool m_cloudWatchLogsHasBeenSet = false;

    VerifiedAccessLogKinesisDataFirehoseDestinationOptions m_kinesisDataFirehose;
    bool m_kinesisDataFirehoseHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
