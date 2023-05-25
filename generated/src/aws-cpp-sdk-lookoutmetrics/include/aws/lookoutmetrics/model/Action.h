/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lookoutmetrics/LookoutMetrics_EXPORTS.h>
#include <aws/lookoutmetrics/model/SNSConfiguration.h>
#include <aws/lookoutmetrics/model/LambdaConfiguration.h>
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
   * <p>A configuration that specifies the action to perform when anomalies are
   * detected.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutmetrics-2017-07-25/Action">AWS
   * API Reference</a></p>
   */
  class Action
  {
  public:
    AWS_LOOKOUTMETRICS_API Action();
    AWS_LOOKOUTMETRICS_API Action(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOOKOUTMETRICS_API Action& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOOKOUTMETRICS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A configuration for an Amazon SNS channel.</p>
     */
    inline const SNSConfiguration& GetSNSConfiguration() const{ return m_sNSConfiguration; }

    /**
     * <p>A configuration for an Amazon SNS channel.</p>
     */
    inline bool SNSConfigurationHasBeenSet() const { return m_sNSConfigurationHasBeenSet; }

    /**
     * <p>A configuration for an Amazon SNS channel.</p>
     */
    inline void SetSNSConfiguration(const SNSConfiguration& value) { m_sNSConfigurationHasBeenSet = true; m_sNSConfiguration = value; }

    /**
     * <p>A configuration for an Amazon SNS channel.</p>
     */
    inline void SetSNSConfiguration(SNSConfiguration&& value) { m_sNSConfigurationHasBeenSet = true; m_sNSConfiguration = std::move(value); }

    /**
     * <p>A configuration for an Amazon SNS channel.</p>
     */
    inline Action& WithSNSConfiguration(const SNSConfiguration& value) { SetSNSConfiguration(value); return *this;}

    /**
     * <p>A configuration for an Amazon SNS channel.</p>
     */
    inline Action& WithSNSConfiguration(SNSConfiguration&& value) { SetSNSConfiguration(std::move(value)); return *this;}


    /**
     * <p>A configuration for an AWS Lambda channel.</p>
     */
    inline const LambdaConfiguration& GetLambdaConfiguration() const{ return m_lambdaConfiguration; }

    /**
     * <p>A configuration for an AWS Lambda channel.</p>
     */
    inline bool LambdaConfigurationHasBeenSet() const { return m_lambdaConfigurationHasBeenSet; }

    /**
     * <p>A configuration for an AWS Lambda channel.</p>
     */
    inline void SetLambdaConfiguration(const LambdaConfiguration& value) { m_lambdaConfigurationHasBeenSet = true; m_lambdaConfiguration = value; }

    /**
     * <p>A configuration for an AWS Lambda channel.</p>
     */
    inline void SetLambdaConfiguration(LambdaConfiguration&& value) { m_lambdaConfigurationHasBeenSet = true; m_lambdaConfiguration = std::move(value); }

    /**
     * <p>A configuration for an AWS Lambda channel.</p>
     */
    inline Action& WithLambdaConfiguration(const LambdaConfiguration& value) { SetLambdaConfiguration(value); return *this;}

    /**
     * <p>A configuration for an AWS Lambda channel.</p>
     */
    inline Action& WithLambdaConfiguration(LambdaConfiguration&& value) { SetLambdaConfiguration(std::move(value)); return *this;}

  private:

    SNSConfiguration m_sNSConfiguration;
    bool m_sNSConfigurationHasBeenSet = false;

    LambdaConfiguration m_lambdaConfiguration;
    bool m_lambdaConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace LookoutMetrics
} // namespace Aws
