/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticmapreduce/EMR_EXPORTS.h>
#include <aws/elasticmapreduce/model/MarketType.h>
#include <aws/elasticmapreduce/model/SimpleScalingPolicyConfiguration.h>
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
namespace EMR
{
namespace Model
{

  /**
   * <p>The type of adjustment the automatic scaling activity makes when triggered,
   * and the periodicity of the adjustment.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticmapreduce-2009-03-31/ScalingAction">AWS
   * API Reference</a></p>
   */
  class ScalingAction
  {
  public:
    AWS_EMR_API ScalingAction() = default;
    AWS_EMR_API ScalingAction(Aws::Utils::Json::JsonView jsonValue);
    AWS_EMR_API ScalingAction& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_EMR_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Not available for instance groups. Instance groups use the market type
     * specified for the group.</p>
     */
    inline MarketType GetMarket() const { return m_market; }
    inline bool MarketHasBeenSet() const { return m_marketHasBeenSet; }
    inline void SetMarket(MarketType value) { m_marketHasBeenSet = true; m_market = value; }
    inline ScalingAction& WithMarket(MarketType value) { SetMarket(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of adjustment the automatic scaling activity makes when triggered,
     * and the periodicity of the adjustment.</p>
     */
    inline const SimpleScalingPolicyConfiguration& GetSimpleScalingPolicyConfiguration() const { return m_simpleScalingPolicyConfiguration; }
    inline bool SimpleScalingPolicyConfigurationHasBeenSet() const { return m_simpleScalingPolicyConfigurationHasBeenSet; }
    template<typename SimpleScalingPolicyConfigurationT = SimpleScalingPolicyConfiguration>
    void SetSimpleScalingPolicyConfiguration(SimpleScalingPolicyConfigurationT&& value) { m_simpleScalingPolicyConfigurationHasBeenSet = true; m_simpleScalingPolicyConfiguration = std::forward<SimpleScalingPolicyConfigurationT>(value); }
    template<typename SimpleScalingPolicyConfigurationT = SimpleScalingPolicyConfiguration>
    ScalingAction& WithSimpleScalingPolicyConfiguration(SimpleScalingPolicyConfigurationT&& value) { SetSimpleScalingPolicyConfiguration(std::forward<SimpleScalingPolicyConfigurationT>(value)); return *this;}
    ///@}
  private:

    MarketType m_market{MarketType::NOT_SET};
    bool m_marketHasBeenSet = false;

    SimpleScalingPolicyConfiguration m_simpleScalingPolicyConfiguration;
    bool m_simpleScalingPolicyConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace EMR
} // namespace Aws
