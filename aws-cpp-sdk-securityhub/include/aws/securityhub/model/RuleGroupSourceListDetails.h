/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace SecurityHub
{
namespace Model
{

  /**
   * <p>Stateful inspection criteria for a domain list rule group.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/RuleGroupSourceListDetails">AWS
   * API Reference</a></p>
   */
  class RuleGroupSourceListDetails
  {
  public:
    AWS_SECURITYHUB_API RuleGroupSourceListDetails();
    AWS_SECURITYHUB_API RuleGroupSourceListDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API RuleGroupSourceListDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Indicates whether to allow or deny access to the domains listed in
     * <code>Targets</code>.</p>
     */
    inline const Aws::String& GetGeneratedRulesType() const{ return m_generatedRulesType; }

    /**
     * <p>Indicates whether to allow or deny access to the domains listed in
     * <code>Targets</code>.</p>
     */
    inline bool GeneratedRulesTypeHasBeenSet() const { return m_generatedRulesTypeHasBeenSet; }

    /**
     * <p>Indicates whether to allow or deny access to the domains listed in
     * <code>Targets</code>.</p>
     */
    inline void SetGeneratedRulesType(const Aws::String& value) { m_generatedRulesTypeHasBeenSet = true; m_generatedRulesType = value; }

    /**
     * <p>Indicates whether to allow or deny access to the domains listed in
     * <code>Targets</code>.</p>
     */
    inline void SetGeneratedRulesType(Aws::String&& value) { m_generatedRulesTypeHasBeenSet = true; m_generatedRulesType = std::move(value); }

    /**
     * <p>Indicates whether to allow or deny access to the domains listed in
     * <code>Targets</code>.</p>
     */
    inline void SetGeneratedRulesType(const char* value) { m_generatedRulesTypeHasBeenSet = true; m_generatedRulesType.assign(value); }

    /**
     * <p>Indicates whether to allow or deny access to the domains listed in
     * <code>Targets</code>.</p>
     */
    inline RuleGroupSourceListDetails& WithGeneratedRulesType(const Aws::String& value) { SetGeneratedRulesType(value); return *this;}

    /**
     * <p>Indicates whether to allow or deny access to the domains listed in
     * <code>Targets</code>.</p>
     */
    inline RuleGroupSourceListDetails& WithGeneratedRulesType(Aws::String&& value) { SetGeneratedRulesType(std::move(value)); return *this;}

    /**
     * <p>Indicates whether to allow or deny access to the domains listed in
     * <code>Targets</code>.</p>
     */
    inline RuleGroupSourceListDetails& WithGeneratedRulesType(const char* value) { SetGeneratedRulesType(value); return *this;}


    /**
     * <p>The protocols that you want to inspect. Specify <code>LS_SNI</code> for
     * HTTPS. Specify <code>HTTP_HOST</code> for HTTP. You can specify either or
     * both.</p>
     */
    inline const Aws::Vector<Aws::String>& GetTargetTypes() const{ return m_targetTypes; }

    /**
     * <p>The protocols that you want to inspect. Specify <code>LS_SNI</code> for
     * HTTPS. Specify <code>HTTP_HOST</code> for HTTP. You can specify either or
     * both.</p>
     */
    inline bool TargetTypesHasBeenSet() const { return m_targetTypesHasBeenSet; }

    /**
     * <p>The protocols that you want to inspect. Specify <code>LS_SNI</code> for
     * HTTPS. Specify <code>HTTP_HOST</code> for HTTP. You can specify either or
     * both.</p>
     */
    inline void SetTargetTypes(const Aws::Vector<Aws::String>& value) { m_targetTypesHasBeenSet = true; m_targetTypes = value; }

    /**
     * <p>The protocols that you want to inspect. Specify <code>LS_SNI</code> for
     * HTTPS. Specify <code>HTTP_HOST</code> for HTTP. You can specify either or
     * both.</p>
     */
    inline void SetTargetTypes(Aws::Vector<Aws::String>&& value) { m_targetTypesHasBeenSet = true; m_targetTypes = std::move(value); }

    /**
     * <p>The protocols that you want to inspect. Specify <code>LS_SNI</code> for
     * HTTPS. Specify <code>HTTP_HOST</code> for HTTP. You can specify either or
     * both.</p>
     */
    inline RuleGroupSourceListDetails& WithTargetTypes(const Aws::Vector<Aws::String>& value) { SetTargetTypes(value); return *this;}

    /**
     * <p>The protocols that you want to inspect. Specify <code>LS_SNI</code> for
     * HTTPS. Specify <code>HTTP_HOST</code> for HTTP. You can specify either or
     * both.</p>
     */
    inline RuleGroupSourceListDetails& WithTargetTypes(Aws::Vector<Aws::String>&& value) { SetTargetTypes(std::move(value)); return *this;}

    /**
     * <p>The protocols that you want to inspect. Specify <code>LS_SNI</code> for
     * HTTPS. Specify <code>HTTP_HOST</code> for HTTP. You can specify either or
     * both.</p>
     */
    inline RuleGroupSourceListDetails& AddTargetTypes(const Aws::String& value) { m_targetTypesHasBeenSet = true; m_targetTypes.push_back(value); return *this; }

    /**
     * <p>The protocols that you want to inspect. Specify <code>LS_SNI</code> for
     * HTTPS. Specify <code>HTTP_HOST</code> for HTTP. You can specify either or
     * both.</p>
     */
    inline RuleGroupSourceListDetails& AddTargetTypes(Aws::String&& value) { m_targetTypesHasBeenSet = true; m_targetTypes.push_back(std::move(value)); return *this; }

    /**
     * <p>The protocols that you want to inspect. Specify <code>LS_SNI</code> for
     * HTTPS. Specify <code>HTTP_HOST</code> for HTTP. You can specify either or
     * both.</p>
     */
    inline RuleGroupSourceListDetails& AddTargetTypes(const char* value) { m_targetTypesHasBeenSet = true; m_targetTypes.push_back(value); return *this; }


    /**
     * <p>The domains that you want to inspect for in your traffic flows. You can
     * provide full domain names, or use the '.' prefix as a wildcard. For example,
     * <code>.example.com</code> matches all domains that end with
     * <code>example.com</code>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetTargets() const{ return m_targets; }

    /**
     * <p>The domains that you want to inspect for in your traffic flows. You can
     * provide full domain names, or use the '.' prefix as a wildcard. For example,
     * <code>.example.com</code> matches all domains that end with
     * <code>example.com</code>.</p>
     */
    inline bool TargetsHasBeenSet() const { return m_targetsHasBeenSet; }

    /**
     * <p>The domains that you want to inspect for in your traffic flows. You can
     * provide full domain names, or use the '.' prefix as a wildcard. For example,
     * <code>.example.com</code> matches all domains that end with
     * <code>example.com</code>.</p>
     */
    inline void SetTargets(const Aws::Vector<Aws::String>& value) { m_targetsHasBeenSet = true; m_targets = value; }

    /**
     * <p>The domains that you want to inspect for in your traffic flows. You can
     * provide full domain names, or use the '.' prefix as a wildcard. For example,
     * <code>.example.com</code> matches all domains that end with
     * <code>example.com</code>.</p>
     */
    inline void SetTargets(Aws::Vector<Aws::String>&& value) { m_targetsHasBeenSet = true; m_targets = std::move(value); }

    /**
     * <p>The domains that you want to inspect for in your traffic flows. You can
     * provide full domain names, or use the '.' prefix as a wildcard. For example,
     * <code>.example.com</code> matches all domains that end with
     * <code>example.com</code>.</p>
     */
    inline RuleGroupSourceListDetails& WithTargets(const Aws::Vector<Aws::String>& value) { SetTargets(value); return *this;}

    /**
     * <p>The domains that you want to inspect for in your traffic flows. You can
     * provide full domain names, or use the '.' prefix as a wildcard. For example,
     * <code>.example.com</code> matches all domains that end with
     * <code>example.com</code>.</p>
     */
    inline RuleGroupSourceListDetails& WithTargets(Aws::Vector<Aws::String>&& value) { SetTargets(std::move(value)); return *this;}

    /**
     * <p>The domains that you want to inspect for in your traffic flows. You can
     * provide full domain names, or use the '.' prefix as a wildcard. For example,
     * <code>.example.com</code> matches all domains that end with
     * <code>example.com</code>.</p>
     */
    inline RuleGroupSourceListDetails& AddTargets(const Aws::String& value) { m_targetsHasBeenSet = true; m_targets.push_back(value); return *this; }

    /**
     * <p>The domains that you want to inspect for in your traffic flows. You can
     * provide full domain names, or use the '.' prefix as a wildcard. For example,
     * <code>.example.com</code> matches all domains that end with
     * <code>example.com</code>.</p>
     */
    inline RuleGroupSourceListDetails& AddTargets(Aws::String&& value) { m_targetsHasBeenSet = true; m_targets.push_back(std::move(value)); return *this; }

    /**
     * <p>The domains that you want to inspect for in your traffic flows. You can
     * provide full domain names, or use the '.' prefix as a wildcard. For example,
     * <code>.example.com</code> matches all domains that end with
     * <code>example.com</code>.</p>
     */
    inline RuleGroupSourceListDetails& AddTargets(const char* value) { m_targetsHasBeenSet = true; m_targets.push_back(value); return *this; }

  private:

    Aws::String m_generatedRulesType;
    bool m_generatedRulesTypeHasBeenSet = false;

    Aws::Vector<Aws::String> m_targetTypes;
    bool m_targetTypesHasBeenSet = false;

    Aws::Vector<Aws::String> m_targets;
    bool m_targetsHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
