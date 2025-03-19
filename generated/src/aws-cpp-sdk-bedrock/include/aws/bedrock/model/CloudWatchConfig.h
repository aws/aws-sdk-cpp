/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock/Bedrock_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/bedrock/model/S3Config.h>
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
namespace Bedrock
{
namespace Model
{

  /**
   * <p>CloudWatch logging configuration.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-2023-04-20/CloudWatchConfig">AWS
   * API Reference</a></p>
   */
  class CloudWatchConfig
  {
  public:
    AWS_BEDROCK_API CloudWatchConfig() = default;
    AWS_BEDROCK_API CloudWatchConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCK_API CloudWatchConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCK_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The log group name.</p>
     */
    inline const Aws::String& GetLogGroupName() const { return m_logGroupName; }
    inline bool LogGroupNameHasBeenSet() const { return m_logGroupNameHasBeenSet; }
    template<typename LogGroupNameT = Aws::String>
    void SetLogGroupName(LogGroupNameT&& value) { m_logGroupNameHasBeenSet = true; m_logGroupName = std::forward<LogGroupNameT>(value); }
    template<typename LogGroupNameT = Aws::String>
    CloudWatchConfig& WithLogGroupName(LogGroupNameT&& value) { SetLogGroupName(std::forward<LogGroupNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The role Amazon Resource Name (ARN).</p>
     */
    inline const Aws::String& GetRoleArn() const { return m_roleArn; }
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }
    template<typename RoleArnT = Aws::String>
    void SetRoleArn(RoleArnT&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::forward<RoleArnT>(value); }
    template<typename RoleArnT = Aws::String>
    CloudWatchConfig& WithRoleArn(RoleArnT&& value) { SetRoleArn(std::forward<RoleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>S3 configuration for delivering a large amount of data.</p>
     */
    inline const S3Config& GetLargeDataDeliveryS3Config() const { return m_largeDataDeliveryS3Config; }
    inline bool LargeDataDeliveryS3ConfigHasBeenSet() const { return m_largeDataDeliveryS3ConfigHasBeenSet; }
    template<typename LargeDataDeliveryS3ConfigT = S3Config>
    void SetLargeDataDeliveryS3Config(LargeDataDeliveryS3ConfigT&& value) { m_largeDataDeliveryS3ConfigHasBeenSet = true; m_largeDataDeliveryS3Config = std::forward<LargeDataDeliveryS3ConfigT>(value); }
    template<typename LargeDataDeliveryS3ConfigT = S3Config>
    CloudWatchConfig& WithLargeDataDeliveryS3Config(LargeDataDeliveryS3ConfigT&& value) { SetLargeDataDeliveryS3Config(std::forward<LargeDataDeliveryS3ConfigT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_logGroupName;
    bool m_logGroupNameHasBeenSet = false;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;

    S3Config m_largeDataDeliveryS3Config;
    bool m_largeDataDeliveryS3ConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace Bedrock
} // namespace Aws
