/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/ec2/model/VerifiedAccessLogS3Destination.h>
#include <aws/ec2/model/VerifiedAccessLogCloudWatchLogsDestination.h>
#include <aws/ec2/model/VerifiedAccessLogKinesisDataFirehoseDestination.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>Describes the options for Verified Access logs.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/VerifiedAccessLogs">AWS
   * API Reference</a></p>
   */
  class VerifiedAccessLogs
  {
  public:
    AWS_EC2_API VerifiedAccessLogs();
    AWS_EC2_API VerifiedAccessLogs(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API VerifiedAccessLogs& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>Amazon S3 logging options.</p>
     */
    inline const VerifiedAccessLogS3Destination& GetS3() const{ return m_s3; }

    /**
     * <p>Amazon S3 logging options.</p>
     */
    inline bool S3HasBeenSet() const { return m_s3HasBeenSet; }

    /**
     * <p>Amazon S3 logging options.</p>
     */
    inline void SetS3(const VerifiedAccessLogS3Destination& value) { m_s3HasBeenSet = true; m_s3 = value; }

    /**
     * <p>Amazon S3 logging options.</p>
     */
    inline void SetS3(VerifiedAccessLogS3Destination&& value) { m_s3HasBeenSet = true; m_s3 = std::move(value); }

    /**
     * <p>Amazon S3 logging options.</p>
     */
    inline VerifiedAccessLogs& WithS3(const VerifiedAccessLogS3Destination& value) { SetS3(value); return *this;}

    /**
     * <p>Amazon S3 logging options.</p>
     */
    inline VerifiedAccessLogs& WithS3(VerifiedAccessLogS3Destination&& value) { SetS3(std::move(value)); return *this;}


    /**
     * <p>CloudWatch Logs logging destination.</p>
     */
    inline const VerifiedAccessLogCloudWatchLogsDestination& GetCloudWatchLogs() const{ return m_cloudWatchLogs; }

    /**
     * <p>CloudWatch Logs logging destination.</p>
     */
    inline bool CloudWatchLogsHasBeenSet() const { return m_cloudWatchLogsHasBeenSet; }

    /**
     * <p>CloudWatch Logs logging destination.</p>
     */
    inline void SetCloudWatchLogs(const VerifiedAccessLogCloudWatchLogsDestination& value) { m_cloudWatchLogsHasBeenSet = true; m_cloudWatchLogs = value; }

    /**
     * <p>CloudWatch Logs logging destination.</p>
     */
    inline void SetCloudWatchLogs(VerifiedAccessLogCloudWatchLogsDestination&& value) { m_cloudWatchLogsHasBeenSet = true; m_cloudWatchLogs = std::move(value); }

    /**
     * <p>CloudWatch Logs logging destination.</p>
     */
    inline VerifiedAccessLogs& WithCloudWatchLogs(const VerifiedAccessLogCloudWatchLogsDestination& value) { SetCloudWatchLogs(value); return *this;}

    /**
     * <p>CloudWatch Logs logging destination.</p>
     */
    inline VerifiedAccessLogs& WithCloudWatchLogs(VerifiedAccessLogCloudWatchLogsDestination&& value) { SetCloudWatchLogs(std::move(value)); return *this;}


    /**
     * <p>Kinesis logging destination.</p>
     */
    inline const VerifiedAccessLogKinesisDataFirehoseDestination& GetKinesisDataFirehose() const{ return m_kinesisDataFirehose; }

    /**
     * <p>Kinesis logging destination.</p>
     */
    inline bool KinesisDataFirehoseHasBeenSet() const { return m_kinesisDataFirehoseHasBeenSet; }

    /**
     * <p>Kinesis logging destination.</p>
     */
    inline void SetKinesisDataFirehose(const VerifiedAccessLogKinesisDataFirehoseDestination& value) { m_kinesisDataFirehoseHasBeenSet = true; m_kinesisDataFirehose = value; }

    /**
     * <p>Kinesis logging destination.</p>
     */
    inline void SetKinesisDataFirehose(VerifiedAccessLogKinesisDataFirehoseDestination&& value) { m_kinesisDataFirehoseHasBeenSet = true; m_kinesisDataFirehose = std::move(value); }

    /**
     * <p>Kinesis logging destination.</p>
     */
    inline VerifiedAccessLogs& WithKinesisDataFirehose(const VerifiedAccessLogKinesisDataFirehoseDestination& value) { SetKinesisDataFirehose(value); return *this;}

    /**
     * <p>Kinesis logging destination.</p>
     */
    inline VerifiedAccessLogs& WithKinesisDataFirehose(VerifiedAccessLogKinesisDataFirehoseDestination&& value) { SetKinesisDataFirehose(std::move(value)); return *this;}


    /**
     * <p>The log version.</p>
     */
    inline const Aws::String& GetLogVersion() const{ return m_logVersion; }

    /**
     * <p>The log version.</p>
     */
    inline bool LogVersionHasBeenSet() const { return m_logVersionHasBeenSet; }

    /**
     * <p>The log version.</p>
     */
    inline void SetLogVersion(const Aws::String& value) { m_logVersionHasBeenSet = true; m_logVersion = value; }

    /**
     * <p>The log version.</p>
     */
    inline void SetLogVersion(Aws::String&& value) { m_logVersionHasBeenSet = true; m_logVersion = std::move(value); }

    /**
     * <p>The log version.</p>
     */
    inline void SetLogVersion(const char* value) { m_logVersionHasBeenSet = true; m_logVersion.assign(value); }

    /**
     * <p>The log version.</p>
     */
    inline VerifiedAccessLogs& WithLogVersion(const Aws::String& value) { SetLogVersion(value); return *this;}

    /**
     * <p>The log version.</p>
     */
    inline VerifiedAccessLogs& WithLogVersion(Aws::String&& value) { SetLogVersion(std::move(value)); return *this;}

    /**
     * <p>The log version.</p>
     */
    inline VerifiedAccessLogs& WithLogVersion(const char* value) { SetLogVersion(value); return *this;}


    /**
     * <p>Indicates whether trust data is included in the logs.</p>
     */
    inline bool GetIncludeTrustContext() const{ return m_includeTrustContext; }

    /**
     * <p>Indicates whether trust data is included in the logs.</p>
     */
    inline bool IncludeTrustContextHasBeenSet() const { return m_includeTrustContextHasBeenSet; }

    /**
     * <p>Indicates whether trust data is included in the logs.</p>
     */
    inline void SetIncludeTrustContext(bool value) { m_includeTrustContextHasBeenSet = true; m_includeTrustContext = value; }

    /**
     * <p>Indicates whether trust data is included in the logs.</p>
     */
    inline VerifiedAccessLogs& WithIncludeTrustContext(bool value) { SetIncludeTrustContext(value); return *this;}

  private:

    VerifiedAccessLogS3Destination m_s3;
    bool m_s3HasBeenSet = false;

    VerifiedAccessLogCloudWatchLogsDestination m_cloudWatchLogs;
    bool m_cloudWatchLogsHasBeenSet = false;

    VerifiedAccessLogKinesisDataFirehoseDestination m_kinesisDataFirehose;
    bool m_kinesisDataFirehoseHasBeenSet = false;

    Aws::String m_logVersion;
    bool m_logVersionHasBeenSet = false;

    bool m_includeTrustContext;
    bool m_includeTrustContextHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
