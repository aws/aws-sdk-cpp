/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codebuild/CodeBuild_EXPORTS.h>
#include <aws/codebuild/model/FleetProxyRuleBehavior.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/codebuild/model/FleetProxyRule.h>
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
namespace CodeBuild
{
namespace Model
{

  /**
   * <p>Information about the proxy configurations that apply network access control
   * to your reserved capacity instances.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codebuild-2016-10-06/ProxyConfiguration">AWS
   * API Reference</a></p>
   */
  class ProxyConfiguration
  {
  public:
    AWS_CODEBUILD_API ProxyConfiguration() = default;
    AWS_CODEBUILD_API ProxyConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEBUILD_API ProxyConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEBUILD_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The default behavior of outgoing traffic.</p>
     */
    inline FleetProxyRuleBehavior GetDefaultBehavior() const { return m_defaultBehavior; }
    inline bool DefaultBehaviorHasBeenSet() const { return m_defaultBehaviorHasBeenSet; }
    inline void SetDefaultBehavior(FleetProxyRuleBehavior value) { m_defaultBehaviorHasBeenSet = true; m_defaultBehavior = value; }
    inline ProxyConfiguration& WithDefaultBehavior(FleetProxyRuleBehavior value) { SetDefaultBehavior(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of <code>FleetProxyRule</code> objects that represent the specified
     * destination domains or IPs to allow or deny network access control to.</p>
     */
    inline const Aws::Vector<FleetProxyRule>& GetOrderedProxyRules() const { return m_orderedProxyRules; }
    inline bool OrderedProxyRulesHasBeenSet() const { return m_orderedProxyRulesHasBeenSet; }
    template<typename OrderedProxyRulesT = Aws::Vector<FleetProxyRule>>
    void SetOrderedProxyRules(OrderedProxyRulesT&& value) { m_orderedProxyRulesHasBeenSet = true; m_orderedProxyRules = std::forward<OrderedProxyRulesT>(value); }
    template<typename OrderedProxyRulesT = Aws::Vector<FleetProxyRule>>
    ProxyConfiguration& WithOrderedProxyRules(OrderedProxyRulesT&& value) { SetOrderedProxyRules(std::forward<OrderedProxyRulesT>(value)); return *this;}
    template<typename OrderedProxyRulesT = FleetProxyRule>
    ProxyConfiguration& AddOrderedProxyRules(OrderedProxyRulesT&& value) { m_orderedProxyRulesHasBeenSet = true; m_orderedProxyRules.emplace_back(std::forward<OrderedProxyRulesT>(value)); return *this; }
    ///@}
  private:

    FleetProxyRuleBehavior m_defaultBehavior{FleetProxyRuleBehavior::NOT_SET};
    bool m_defaultBehaviorHasBeenSet = false;

    Aws::Vector<FleetProxyRule> m_orderedProxyRules;
    bool m_orderedProxyRulesHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeBuild
} // namespace Aws
