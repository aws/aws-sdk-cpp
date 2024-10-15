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
    AWS_CODEBUILD_API ProxyConfiguration();
    AWS_CODEBUILD_API ProxyConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEBUILD_API ProxyConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEBUILD_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The default behavior of outgoing traffic.</p>
     */
    inline const FleetProxyRuleBehavior& GetDefaultBehavior() const{ return m_defaultBehavior; }
    inline bool DefaultBehaviorHasBeenSet() const { return m_defaultBehaviorHasBeenSet; }
    inline void SetDefaultBehavior(const FleetProxyRuleBehavior& value) { m_defaultBehaviorHasBeenSet = true; m_defaultBehavior = value; }
    inline void SetDefaultBehavior(FleetProxyRuleBehavior&& value) { m_defaultBehaviorHasBeenSet = true; m_defaultBehavior = std::move(value); }
    inline ProxyConfiguration& WithDefaultBehavior(const FleetProxyRuleBehavior& value) { SetDefaultBehavior(value); return *this;}
    inline ProxyConfiguration& WithDefaultBehavior(FleetProxyRuleBehavior&& value) { SetDefaultBehavior(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of <code>FleetProxyRule</code> objects that represent the specified
     * destination domains or IPs to allow or deny network access control to.</p>
     */
    inline const Aws::Vector<FleetProxyRule>& GetOrderedProxyRules() const{ return m_orderedProxyRules; }
    inline bool OrderedProxyRulesHasBeenSet() const { return m_orderedProxyRulesHasBeenSet; }
    inline void SetOrderedProxyRules(const Aws::Vector<FleetProxyRule>& value) { m_orderedProxyRulesHasBeenSet = true; m_orderedProxyRules = value; }
    inline void SetOrderedProxyRules(Aws::Vector<FleetProxyRule>&& value) { m_orderedProxyRulesHasBeenSet = true; m_orderedProxyRules = std::move(value); }
    inline ProxyConfiguration& WithOrderedProxyRules(const Aws::Vector<FleetProxyRule>& value) { SetOrderedProxyRules(value); return *this;}
    inline ProxyConfiguration& WithOrderedProxyRules(Aws::Vector<FleetProxyRule>&& value) { SetOrderedProxyRules(std::move(value)); return *this;}
    inline ProxyConfiguration& AddOrderedProxyRules(const FleetProxyRule& value) { m_orderedProxyRulesHasBeenSet = true; m_orderedProxyRules.push_back(value); return *this; }
    inline ProxyConfiguration& AddOrderedProxyRules(FleetProxyRule&& value) { m_orderedProxyRulesHasBeenSet = true; m_orderedProxyRules.push_back(std::move(value)); return *this; }
    ///@}
  private:

    FleetProxyRuleBehavior m_defaultBehavior;
    bool m_defaultBehaviorHasBeenSet = false;

    Aws::Vector<FleetProxyRule> m_orderedProxyRules;
    bool m_orderedProxyRulesHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeBuild
} // namespace Aws
