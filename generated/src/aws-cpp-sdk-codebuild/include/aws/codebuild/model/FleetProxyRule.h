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
    AWS_CODEBUILD_API FleetProxyRule();
    AWS_CODEBUILD_API FleetProxyRule(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEBUILD_API FleetProxyRule& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEBUILD_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The type of proxy rule.</p>
     */
    inline const FleetProxyRuleType& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const FleetProxyRuleType& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(FleetProxyRuleType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline FleetProxyRule& WithType(const FleetProxyRuleType& value) { SetType(value); return *this;}
    inline FleetProxyRule& WithType(FleetProxyRuleType&& value) { SetType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The behavior of the proxy rule.</p>
     */
    inline const FleetProxyRuleEffectType& GetEffect() const{ return m_effect; }
    inline bool EffectHasBeenSet() const { return m_effectHasBeenSet; }
    inline void SetEffect(const FleetProxyRuleEffectType& value) { m_effectHasBeenSet = true; m_effect = value; }
    inline void SetEffect(FleetProxyRuleEffectType&& value) { m_effectHasBeenSet = true; m_effect = std::move(value); }
    inline FleetProxyRule& WithEffect(const FleetProxyRuleEffectType& value) { SetEffect(value); return *this;}
    inline FleetProxyRule& WithEffect(FleetProxyRuleEffectType&& value) { SetEffect(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The destination of the proxy rule.</p>
     */
    inline const Aws::Vector<Aws::String>& GetEntities() const{ return m_entities; }
    inline bool EntitiesHasBeenSet() const { return m_entitiesHasBeenSet; }
    inline void SetEntities(const Aws::Vector<Aws::String>& value) { m_entitiesHasBeenSet = true; m_entities = value; }
    inline void SetEntities(Aws::Vector<Aws::String>&& value) { m_entitiesHasBeenSet = true; m_entities = std::move(value); }
    inline FleetProxyRule& WithEntities(const Aws::Vector<Aws::String>& value) { SetEntities(value); return *this;}
    inline FleetProxyRule& WithEntities(Aws::Vector<Aws::String>&& value) { SetEntities(std::move(value)); return *this;}
    inline FleetProxyRule& AddEntities(const Aws::String& value) { m_entitiesHasBeenSet = true; m_entities.push_back(value); return *this; }
    inline FleetProxyRule& AddEntities(Aws::String&& value) { m_entitiesHasBeenSet = true; m_entities.push_back(std::move(value)); return *this; }
    inline FleetProxyRule& AddEntities(const char* value) { m_entitiesHasBeenSet = true; m_entities.push_back(value); return *this; }
    ///@}
  private:

    FleetProxyRuleType m_type;
    bool m_typeHasBeenSet = false;

    FleetProxyRuleEffectType m_effect;
    bool m_effectHasBeenSet = false;

    Aws::Vector<Aws::String> m_entities;
    bool m_entitiesHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeBuild
} // namespace Aws
