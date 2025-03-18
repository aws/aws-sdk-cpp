/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lookoutmetrics/LookoutMetrics_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lookoutmetrics/model/BackTestConfiguration.h>
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
namespace LookoutMetrics
{
namespace Model
{

  /**
   * <p>Details about an Amazon CloudWatch datasource.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutmetrics-2017-07-25/CloudWatchConfig">AWS
   * API Reference</a></p>
   */
  class CloudWatchConfig
  {
  public:
    AWS_LOOKOUTMETRICS_API CloudWatchConfig() = default;
    AWS_LOOKOUTMETRICS_API CloudWatchConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOOKOUTMETRICS_API CloudWatchConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOOKOUTMETRICS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>An IAM role that gives Amazon Lookout for Metrics permission to access data
     * in Amazon CloudWatch.</p>
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
     * <p>Settings for backtest mode.</p>
     */
    inline const BackTestConfiguration& GetBackTestConfiguration() const { return m_backTestConfiguration; }
    inline bool BackTestConfigurationHasBeenSet() const { return m_backTestConfigurationHasBeenSet; }
    template<typename BackTestConfigurationT = BackTestConfiguration>
    void SetBackTestConfiguration(BackTestConfigurationT&& value) { m_backTestConfigurationHasBeenSet = true; m_backTestConfiguration = std::forward<BackTestConfigurationT>(value); }
    template<typename BackTestConfigurationT = BackTestConfiguration>
    CloudWatchConfig& WithBackTestConfiguration(BackTestConfigurationT&& value) { SetBackTestConfiguration(std::forward<BackTestConfigurationT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;

    BackTestConfiguration m_backTestConfiguration;
    bool m_backTestConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace LookoutMetrics
} // namespace Aws
