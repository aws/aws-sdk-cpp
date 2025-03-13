/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codebuild/CodeBuild_EXPORTS.h>
#include <aws/codebuild/model/FleetProxyRuleType.h>
#include <aws/codebuild/model/FleetProxyRuleEffectType.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace CodeBuild
{
namespace Model
{

  /**
   * <p>Information about the proxy rule for your reserved capacity
   * instances.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codebuild-2016-10-06/FleetProxyRule">AWS
   * API Reference</a></p>
   */
  class FleetProxyRule
  {
  public:
    AWS_CODEBUILD_API FleetProxyRule() = default;
    AWS_CODEBUILD_API FleetProxyRule(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEBUILD_API FleetProxyRule& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEBUILD_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The type of proxy rule.</p>
     */
    inline FleetProxyRuleType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(FleetProxyRuleType value) { m_typeHasBeenSet = true; m_type = value; }
    inline FleetProxyRule& WithType(FleetProxyRuleType value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The behavior of the proxy rule.</p>
     */
    inline FleetProxyRuleEffectType GetEffect() const { return m_effect; }
    inline bool EffectHasBeenSet() const { return m_effectHasBeenSet; }
    inline void SetEffect(FleetProxyRuleEffectType value) { m_effectHasBeenSet = true; m_effect = value; }
    inline FleetProxyRule& WithEffect(FleetProxyRuleEffectType value) { SetEffect(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The destination of the proxy rule.</p>
     */
    inline const Aws::Vector<Aws::String>& GetEntities() const { return m_entities; }
    inline bool EntitiesHasBeenSet() const { return m_entitiesHasBeenSet; }
    template<typename EntitiesT = Aws::Vector<Aws::String>>
    void SetEntities(EntitiesT&& value) { m_entitiesHasBeenSet = true; m_entities = std::forward<EntitiesT>(value); }
    template<typename EntitiesT = Aws::Vector<Aws::String>>
    FleetProxyRule& WithEntities(EntitiesT&& value) { SetEntities(std::forward<EntitiesT>(value)); return *this;}
    template<typename EntitiesT = Aws::String>
    FleetProxyRule& AddEntities(EntitiesT&& value) { m_entitiesHasBeenSet = true; m_entities.emplace_back(std::forward<EntitiesT>(value)); return *this; }
    ///@}
  private:

    FleetProxyRuleType m_type{FleetProxyRuleType::NOT_SET};
    bool m_typeHasBeenSet = false;

    FleetProxyRuleEffectType m_effect{FleetProxyRuleEffectType::NOT_SET};
    bool m_effectHasBeenSet = false;

    Aws::Vector<Aws::String> m_entities;
    bool m_entitiesHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeBuild
} // namespace Aws
