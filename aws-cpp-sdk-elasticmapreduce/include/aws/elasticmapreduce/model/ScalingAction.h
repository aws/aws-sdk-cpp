/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
  class AWS_EMR_API ScalingAction
  {
  public:
    ScalingAction();
    ScalingAction(Aws::Utils::Json::JsonView jsonValue);
    ScalingAction& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Not available for instance groups. Instance groups use the market type
     * specified for the group.</p>
     */
    inline const MarketType& GetMarket() const{ return m_market; }

    /**
     * <p>Not available for instance groups. Instance groups use the market type
     * specified for the group.</p>
     */
    inline bool MarketHasBeenSet() const { return m_marketHasBeenSet; }

    /**
     * <p>Not available for instance groups. Instance groups use the market type
     * specified for the group.</p>
     */
    inline void SetMarket(const MarketType& value) { m_marketHasBeenSet = true; m_market = value; }

    /**
     * <p>Not available for instance groups. Instance groups use the market type
     * specified for the group.</p>
     */
    inline void SetMarket(MarketType&& value) { m_marketHasBeenSet = true; m_market = std::move(value); }

    /**
     * <p>Not available for instance groups. Instance groups use the market type
     * specified for the group.</p>
     */
    inline ScalingAction& WithMarket(const MarketType& value) { SetMarket(value); return *this;}

    /**
     * <p>Not available for instance groups. Instance groups use the market type
     * specified for the group.</p>
     */
    inline ScalingAction& WithMarket(MarketType&& value) { SetMarket(std::move(value)); return *this;}


    /**
     * <p>The type of adjustment the automatic scaling activity makes when triggered,
     * and the periodicity of the adjustment.</p>
     */
    inline const SimpleScalingPolicyConfiguration& GetSimpleScalingPolicyConfiguration() const{ return m_simpleScalingPolicyConfiguration; }

    /**
     * <p>The type of adjustment the automatic scaling activity makes when triggered,
     * and the periodicity of the adjustment.</p>
     */
    inline bool SimpleScalingPolicyConfigurationHasBeenSet() const { return m_simpleScalingPolicyConfigurationHasBeenSet; }

    /**
     * <p>The type of adjustment the automatic scaling activity makes when triggered,
     * and the periodicity of the adjustment.</p>
     */
    inline void SetSimpleScalingPolicyConfiguration(const SimpleScalingPolicyConfiguration& value) { m_simpleScalingPolicyConfigurationHasBeenSet = true; m_simpleScalingPolicyConfiguration = value; }

    /**
     * <p>The type of adjustment the automatic scaling activity makes when triggered,
     * and the periodicity of the adjustment.</p>
     */
    inline void SetSimpleScalingPolicyConfiguration(SimpleScalingPolicyConfiguration&& value) { m_simpleScalingPolicyConfigurationHasBeenSet = true; m_simpleScalingPolicyConfiguration = std::move(value); }

    /**
     * <p>The type of adjustment the automatic scaling activity makes when triggered,
     * and the periodicity of the adjustment.</p>
     */
    inline ScalingAction& WithSimpleScalingPolicyConfiguration(const SimpleScalingPolicyConfiguration& value) { SetSimpleScalingPolicyConfiguration(value); return *this;}

    /**
     * <p>The type of adjustment the automatic scaling activity makes when triggered,
     * and the periodicity of the adjustment.</p>
     */
    inline ScalingAction& WithSimpleScalingPolicyConfiguration(SimpleScalingPolicyConfiguration&& value) { SetSimpleScalingPolicyConfiguration(std::move(value)); return *this;}

  private:

    MarketType m_market;
    bool m_marketHasBeenSet;

    SimpleScalingPolicyConfiguration m_simpleScalingPolicyConfiguration;
    bool m_simpleScalingPolicyConfigurationHasBeenSet;
  };

} // namespace Model
} // namespace EMR
} // namespace Aws
