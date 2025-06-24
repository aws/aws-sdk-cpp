/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/gamelift/GameLift_EXPORTS.h>
#include <aws/gamelift/model/LogDestination.h>
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
namespace GameLift
{
namespace Model
{

  /**
   * <p>A method for collecting container logs for the fleet. Amazon GameLift Servers
   * saves all standard output for each container in logs, including game session
   * logs. You can select from the following methods: </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/LogConfiguration">AWS
   * API Reference</a></p>
   */
  class LogConfiguration
  {
  public:
    AWS_GAMELIFT_API LogConfiguration() = default;
    AWS_GAMELIFT_API LogConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_GAMELIFT_API LogConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GAMELIFT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The type of log collection to use for a fleet.</p> <ul> <li> <p>
     * <code>CLOUDWATCH</code> -- (default value) Send logs to an Amazon CloudWatch log
     * group that you define. Each container emits a log stream, which is organized in
     * the log group. </p> </li> <li> <p> <code>S3</code> -- Store logs in an Amazon S3
     * bucket that you define. This bucket must reside in the fleet's home Amazon Web
     * Services Region.</p> </li> <li> <p> <code>NONE</code> -- Don't collect container
     * logs.</p> </li> </ul>
     */
    inline LogDestination GetLogDestination() const { return m_logDestination; }
    inline bool LogDestinationHasBeenSet() const { return m_logDestinationHasBeenSet; }
    inline void SetLogDestination(LogDestination value) { m_logDestinationHasBeenSet = true; m_logDestination = value; }
    inline LogConfiguration& WithLogDestination(LogDestination value) { SetLogDestination(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If log destination is <code>S3</code>, logs are sent to the specified Amazon
     * S3 bucket name.</p>
     */
    inline const Aws::String& GetS3BucketName() const { return m_s3BucketName; }
    inline bool S3BucketNameHasBeenSet() const { return m_s3BucketNameHasBeenSet; }
    template<typename S3BucketNameT = Aws::String>
    void SetS3BucketName(S3BucketNameT&& value) { m_s3BucketNameHasBeenSet = true; m_s3BucketName = std::forward<S3BucketNameT>(value); }
    template<typename S3BucketNameT = Aws::String>
    LogConfiguration& WithS3BucketName(S3BucketNameT&& value) { SetS3BucketName(std::forward<S3BucketNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If log destination is <code>CLOUDWATCH</code>, logs are sent to the specified
     * log group in Amazon CloudWatch.</p>
     */
    inline const Aws::String& GetLogGroupArn() const { return m_logGroupArn; }
    inline bool LogGroupArnHasBeenSet() const { return m_logGroupArnHasBeenSet; }
    template<typename LogGroupArnT = Aws::String>
    void SetLogGroupArn(LogGroupArnT&& value) { m_logGroupArnHasBeenSet = true; m_logGroupArn = std::forward<LogGroupArnT>(value); }
    template<typename LogGroupArnT = Aws::String>
    LogConfiguration& WithLogGroupArn(LogGroupArnT&& value) { SetLogGroupArn(std::forward<LogGroupArnT>(value)); return *this;}
    ///@}
  private:

    LogDestination m_logDestination{LogDestination::NOT_SET};
    bool m_logDestinationHasBeenSet = false;

    Aws::String m_s3BucketName;
    bool m_s3BucketNameHasBeenSet = false;

    Aws::String m_logGroupArn;
    bool m_logGroupArnHasBeenSet = false;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
