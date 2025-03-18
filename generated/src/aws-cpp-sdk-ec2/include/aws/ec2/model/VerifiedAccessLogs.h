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
    AWS_EC2_API VerifiedAccessLogs() = default;
    AWS_EC2_API VerifiedAccessLogs(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API VerifiedAccessLogs& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>Amazon S3 logging options.</p>
     */
    inline const VerifiedAccessLogS3Destination& GetS3() const { return m_s3; }
    inline bool S3HasBeenSet() const { return m_s3HasBeenSet; }
    template<typename S3T = VerifiedAccessLogS3Destination>
    void SetS3(S3T&& value) { m_s3HasBeenSet = true; m_s3 = std::forward<S3T>(value); }
    template<typename S3T = VerifiedAccessLogS3Destination>
    VerifiedAccessLogs& WithS3(S3T&& value) { SetS3(std::forward<S3T>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>CloudWatch Logs logging destination.</p>
     */
    inline const VerifiedAccessLogCloudWatchLogsDestination& GetCloudWatchLogs() const { return m_cloudWatchLogs; }
    inline bool CloudWatchLogsHasBeenSet() const { return m_cloudWatchLogsHasBeenSet; }
    template<typename CloudWatchLogsT = VerifiedAccessLogCloudWatchLogsDestination>
    void SetCloudWatchLogs(CloudWatchLogsT&& value) { m_cloudWatchLogsHasBeenSet = true; m_cloudWatchLogs = std::forward<CloudWatchLogsT>(value); }
    template<typename CloudWatchLogsT = VerifiedAccessLogCloudWatchLogsDestination>
    VerifiedAccessLogs& WithCloudWatchLogs(CloudWatchLogsT&& value) { SetCloudWatchLogs(std::forward<CloudWatchLogsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Kinesis logging destination.</p>
     */
    inline const VerifiedAccessLogKinesisDataFirehoseDestination& GetKinesisDataFirehose() const { return m_kinesisDataFirehose; }
    inline bool KinesisDataFirehoseHasBeenSet() const { return m_kinesisDataFirehoseHasBeenSet; }
    template<typename KinesisDataFirehoseT = VerifiedAccessLogKinesisDataFirehoseDestination>
    void SetKinesisDataFirehose(KinesisDataFirehoseT&& value) { m_kinesisDataFirehoseHasBeenSet = true; m_kinesisDataFirehose = std::forward<KinesisDataFirehoseT>(value); }
    template<typename KinesisDataFirehoseT = VerifiedAccessLogKinesisDataFirehoseDestination>
    VerifiedAccessLogs& WithKinesisDataFirehose(KinesisDataFirehoseT&& value) { SetKinesisDataFirehose(std::forward<KinesisDataFirehoseT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The log version.</p>
     */
    inline const Aws::String& GetLogVersion() const { return m_logVersion; }
    inline bool LogVersionHasBeenSet() const { return m_logVersionHasBeenSet; }
    template<typename LogVersionT = Aws::String>
    void SetLogVersion(LogVersionT&& value) { m_logVersionHasBeenSet = true; m_logVersion = std::forward<LogVersionT>(value); }
    template<typename LogVersionT = Aws::String>
    VerifiedAccessLogs& WithLogVersion(LogVersionT&& value) { SetLogVersion(std::forward<LogVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether trust data is included in the logs.</p>
     */
    inline bool GetIncludeTrustContext() const { return m_includeTrustContext; }
    inline bool IncludeTrustContextHasBeenSet() const { return m_includeTrustContextHasBeenSet; }
    inline void SetIncludeTrustContext(bool value) { m_includeTrustContextHasBeenSet = true; m_includeTrustContext = value; }
    inline VerifiedAccessLogs& WithIncludeTrustContext(bool value) { SetIncludeTrustContext(value); return *this;}
    ///@}
  private:

    VerifiedAccessLogS3Destination m_s3;
    bool m_s3HasBeenSet = false;

    VerifiedAccessLogCloudWatchLogsDestination m_cloudWatchLogs;
    bool m_cloudWatchLogsHasBeenSet = false;

    VerifiedAccessLogKinesisDataFirehoseDestination m_kinesisDataFirehose;
    bool m_kinesisDataFirehoseHasBeenSet = false;

    Aws::String m_logVersion;
    bool m_logVersionHasBeenSet = false;

    bool m_includeTrustContext{false};
    bool m_includeTrustContextHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
