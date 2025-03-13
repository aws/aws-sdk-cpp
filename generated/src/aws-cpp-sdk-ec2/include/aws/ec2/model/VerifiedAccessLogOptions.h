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
   * <p>Options for Verified Access logs.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/VerifiedAccessLogOptions">AWS
   * API Reference</a></p>
   */
  class VerifiedAccessLogOptions
  {
  public:
    AWS_EC2_API VerifiedAccessLogOptions() = default;
    AWS_EC2_API VerifiedAccessLogOptions(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API VerifiedAccessLogOptions& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>Sends Verified Access logs to Amazon S3.</p>
     */
    inline const VerifiedAccessLogS3DestinationOptions& GetS3() const { return m_s3; }
    inline bool S3HasBeenSet() const { return m_s3HasBeenSet; }
    template<typename S3T = VerifiedAccessLogS3DestinationOptions>
    void SetS3(S3T&& value) { m_s3HasBeenSet = true; m_s3 = std::forward<S3T>(value); }
    template<typename S3T = VerifiedAccessLogS3DestinationOptions>
    VerifiedAccessLogOptions& WithS3(S3T&& value) { SetS3(std::forward<S3T>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Sends Verified Access logs to CloudWatch Logs.</p>
     */
    inline const VerifiedAccessLogCloudWatchLogsDestinationOptions& GetCloudWatchLogs() const { return m_cloudWatchLogs; }
    inline bool CloudWatchLogsHasBeenSet() const { return m_cloudWatchLogsHasBeenSet; }
    template<typename CloudWatchLogsT = VerifiedAccessLogCloudWatchLogsDestinationOptions>
    void SetCloudWatchLogs(CloudWatchLogsT&& value) { m_cloudWatchLogsHasBeenSet = true; m_cloudWatchLogs = std::forward<CloudWatchLogsT>(value); }
    template<typename CloudWatchLogsT = VerifiedAccessLogCloudWatchLogsDestinationOptions>
    VerifiedAccessLogOptions& WithCloudWatchLogs(CloudWatchLogsT&& value) { SetCloudWatchLogs(std::forward<CloudWatchLogsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Sends Verified Access logs to Kinesis.</p>
     */
    inline const VerifiedAccessLogKinesisDataFirehoseDestinationOptions& GetKinesisDataFirehose() const { return m_kinesisDataFirehose; }
    inline bool KinesisDataFirehoseHasBeenSet() const { return m_kinesisDataFirehoseHasBeenSet; }
    template<typename KinesisDataFirehoseT = VerifiedAccessLogKinesisDataFirehoseDestinationOptions>
    void SetKinesisDataFirehose(KinesisDataFirehoseT&& value) { m_kinesisDataFirehoseHasBeenSet = true; m_kinesisDataFirehose = std::forward<KinesisDataFirehoseT>(value); }
    template<typename KinesisDataFirehoseT = VerifiedAccessLogKinesisDataFirehoseDestinationOptions>
    VerifiedAccessLogOptions& WithKinesisDataFirehose(KinesisDataFirehoseT&& value) { SetKinesisDataFirehose(std::forward<KinesisDataFirehoseT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The logging version.</p> <p>Valid values: <code>ocsf-0.1</code> |
     * <code>ocsf-1.0.0-rc.2</code> </p>
     */
    inline const Aws::String& GetLogVersion() const { return m_logVersion; }
    inline bool LogVersionHasBeenSet() const { return m_logVersionHasBeenSet; }
    template<typename LogVersionT = Aws::String>
    void SetLogVersion(LogVersionT&& value) { m_logVersionHasBeenSet = true; m_logVersion = std::forward<LogVersionT>(value); }
    template<typename LogVersionT = Aws::String>
    VerifiedAccessLogOptions& WithLogVersion(LogVersionT&& value) { SetLogVersion(std::forward<LogVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether to include trust data sent by trust providers in the
     * logs.</p>
     */
    inline bool GetIncludeTrustContext() const { return m_includeTrustContext; }
    inline bool IncludeTrustContextHasBeenSet() const { return m_includeTrustContextHasBeenSet; }
    inline void SetIncludeTrustContext(bool value) { m_includeTrustContextHasBeenSet = true; m_includeTrustContext = value; }
    inline VerifiedAccessLogOptions& WithIncludeTrustContext(bool value) { SetIncludeTrustContext(value); return *this;}
    ///@}
  private:

    VerifiedAccessLogS3DestinationOptions m_s3;
    bool m_s3HasBeenSet = false;

    VerifiedAccessLogCloudWatchLogsDestinationOptions m_cloudWatchLogs;
    bool m_cloudWatchLogsHasBeenSet = false;

    VerifiedAccessLogKinesisDataFirehoseDestinationOptions m_kinesisDataFirehose;
    bool m_kinesisDataFirehoseHasBeenSet = false;

    Aws::String m_logVersion;
    bool m_logVersionHasBeenSet = false;

    bool m_includeTrustContext{false};
    bool m_includeTrustContextHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
