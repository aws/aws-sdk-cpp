/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/network-firewall/NetworkFirewall_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/network-firewall/model/GeneratedRulesType.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/network-firewall/model/TargetType.h>
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
namespace NetworkFirewall
{
namespace Model
{

  /**
   * <p>Stateful inspection criteria for a domain list rule group. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/network-firewall-2020-11-12/RulesSourceList">AWS
   * API Reference</a></p>
   */
  class AWS_NETWORKFIREWALL_API RulesSourceList
  {
  public:
    RulesSourceList();
    RulesSourceList(Aws::Utils::Json::JsonView jsonValue);
    RulesSourceList& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The domains that you want to inspect for in your traffic flows. To provide
     * multiple domains, separate them with commas.</p>
     */
    inline const Aws::Vector<Aws::String>& GetTargets() const{ return m_targets; }

    /**
     * <p>The domains that you want to inspect for in your traffic flows. To provide
     * multiple domains, separate them with commas.</p>
     */
    inline bool TargetsHasBeenSet() const { return m_targetsHasBeenSet; }

    /**
     * <p>The domains that you want to inspect for in your traffic flows. To provide
     * multiple domains, separate them with commas.</p>
     */
    inline void SetTargets(const Aws::Vector<Aws::String>& value) { m_targetsHasBeenSet = true; m_targets = value; }

    /**
     * <p>The domains that you want to inspect for in your traffic flows. To provide
     * multiple domains, separate them with commas.</p>
     */
    inline void SetTargets(Aws::Vector<Aws::String>&& value) { m_targetsHasBeenSet = true; m_targets = std::move(value); }

    /**
     * <p>The domains that you want to inspect for in your traffic flows. To provide
     * multiple domains, separate them with commas.</p>
     */
    inline RulesSourceList& WithTargets(const Aws::Vector<Aws::String>& value) { SetTargets(value); return *this;}

    /**
     * <p>The domains that you want to inspect for in your traffic flows. To provide
     * multiple domains, separate them with commas.</p>
     */
    inline RulesSourceList& WithTargets(Aws::Vector<Aws::String>&& value) { SetTargets(std::move(value)); return *this;}

    /**
     * <p>The domains that you want to inspect for in your traffic flows. To provide
     * multiple domains, separate them with commas.</p>
     */
    inline RulesSourceList& AddTargets(const Aws::String& value) { m_targetsHasBeenSet = true; m_targets.push_back(value); return *this; }

    /**
     * <p>The domains that you want to inspect for in your traffic flows. To provide
     * multiple domains, separate them with commas.</p>
     */
    inline RulesSourceList& AddTargets(Aws::String&& value) { m_targetsHasBeenSet = true; m_targets.push_back(std::move(value)); return *this; }

    /**
     * <p>The domains that you want to inspect for in your traffic flows. To provide
     * multiple domains, separate them with commas.</p>
     */
    inline RulesSourceList& AddTargets(const char* value) { m_targetsHasBeenSet = true; m_targets.push_back(value); return *this; }


    /**
     * <p/>
     */
    inline const Aws::Vector<TargetType>& GetTargetTypes() const{ return m_targetTypes; }

    /**
     * <p/>
     */
    inline bool TargetTypesHasBeenSet() const { return m_targetTypesHasBeenSet; }

    /**
     * <p/>
     */
    inline void SetTargetTypes(const Aws::Vector<TargetType>& value) { m_targetTypesHasBeenSet = true; m_targetTypes = value; }

    /**
     * <p/>
     */
    inline void SetTargetTypes(Aws::Vector<TargetType>&& value) { m_targetTypesHasBeenSet = true; m_targetTypes = std::move(value); }

    /**
     * <p/>
     */
    inline RulesSourceList& WithTargetTypes(const Aws::Vector<TargetType>& value) { SetTargetTypes(value); return *this;}

    /**
     * <p/>
     */
    inline RulesSourceList& WithTargetTypes(Aws::Vector<TargetType>&& value) { SetTargetTypes(std::move(value)); return *this;}

    /**
     * <p/>
     */
    inline RulesSourceList& AddTargetTypes(const TargetType& value) { m_targetTypesHasBeenSet = true; m_targetTypes.push_back(value); return *this; }

    /**
     * <p/>
     */
    inline RulesSourceList& AddTargetTypes(TargetType&& value) { m_targetTypesHasBeenSet = true; m_targetTypes.push_back(std::move(value)); return *this; }


    /**
     * <p>Whether you want to allow or deny access to the domains in your target
     * list.</p>
     */
    inline const GeneratedRulesType& GetGeneratedRulesType() const{ return m_generatedRulesType; }

    /**
     * <p>Whether you want to allow or deny access to the domains in your target
     * list.</p>
     */
    inline bool GeneratedRulesTypeHasBeenSet() const { return m_generatedRulesTypeHasBeenSet; }

    /**
     * <p>Whether you want to allow or deny access to the domains in your target
     * list.</p>
     */
    inline void SetGeneratedRulesType(const GeneratedRulesType& value) { m_generatedRulesTypeHasBeenSet = true; m_generatedRulesType = value; }

    /**
     * <p>Whether you want to allow or deny access to the domains in your target
     * list.</p>
     */
    inline void SetGeneratedRulesType(GeneratedRulesType&& value) { m_generatedRulesTypeHasBeenSet = true; m_generatedRulesType = std::move(value); }

    /**
     * <p>Whether you want to allow or deny access to the domains in your target
     * list.</p>
     */
    inline RulesSourceList& WithGeneratedRulesType(const GeneratedRulesType& value) { SetGeneratedRulesType(value); return *this;}

    /**
     * <p>Whether you want to allow or deny access to the domains in your target
     * list.</p>
     */
    inline RulesSourceList& WithGeneratedRulesType(GeneratedRulesType&& value) { SetGeneratedRulesType(std::move(value)); return *this;}

  private:

    Aws::Vector<Aws::String> m_targets;
    bool m_targetsHasBeenSet;

    Aws::Vector<TargetType> m_targetTypes;
    bool m_targetTypesHasBeenSet;

    GeneratedRulesType m_generatedRulesType;
    bool m_generatedRulesTypeHasBeenSet;
  };

} // namespace Model
} // namespace NetworkFirewall
} // namespace Aws
