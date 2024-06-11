﻿/**
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
    AWS_EMR_API ScalingAction();
    AWS_EMR_API ScalingAction(Aws::Utils::Json::JsonView jsonValue);
    AWS_EMR_API ScalingAction& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_EMR_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Not available for instance groups. Instance groups use the market type
     * specified for the group.</p>
     */
    inline const MarketType& GetMarket() const{ return m_market; }
    inline bool MarketHasBeenSet() const { return m_marketHasBeenSet; }
    inline void SetMarket(const MarketType& value) { m_marketHasBeenSet = true; m_market = value; }
    inline void SetMarket(MarketType&& value) { m_marketHasBeenSet = true; m_market = std::move(value); }
    inline ScalingAction& WithMarket(const MarketType& value) { SetMarket(value); return *this;}
    inline ScalingAction& WithMarket(MarketType&& value) { SetMarket(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of adjustment the automatic scaling activity makes when triggered,
     * and the periodicity of the adjustment.</p>
     */
    inline const SimpleScalingPolicyConfiguration& GetSimpleScalingPolicyConfiguration() const{ return m_simpleScalingPolicyConfiguration; }
    inline bool SimpleScalingPolicyConfigurationHasBeenSet() const { return m_simpleScalingPolicyConfigurationHasBeenSet; }
    inline void SetSimpleScalingPolicyConfiguration(const SimpleScalingPolicyConfiguration& value) { m_simpleScalingPolicyConfigurationHasBeenSet = true; m_simpleScalingPolicyConfiguration = value; }
    inline void SetSimpleScalingPolicyConfiguration(SimpleScalingPolicyConfiguration&& value) { m_simpleScalingPolicyConfigurationHasBeenSet = true; m_simpleScalingPolicyConfiguration = std::move(value); }
    inline ScalingAction& WithSimpleScalingPolicyConfiguration(const SimpleScalingPolicyConfiguration& value) { SetSimpleScalingPolicyConfiguration(value); return *this;}
    inline ScalingAction& WithSimpleScalingPolicyConfiguration(SimpleScalingPolicyConfiguration&& value) { SetSimpleScalingPolicyConfiguration(std::move(value)); return *this;}
    ///@}
  private:

    MarketType m_market;
    bool m_marketHasBeenSet = false;

    SimpleScalingPolicyConfiguration m_simpleScalingPolicyConfiguration;
    bool m_simpleScalingPolicyConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace EMR
} // namespace Aws
