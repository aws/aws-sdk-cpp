/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/securityhub/model/AwsWafRegionalWebAclRulesListDetails.h>
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
   * <p>Provides information about the web access control list (web ACL). The web ACL
   * contains the rules that identify the requests that you want to allow, block, or
   * count. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsWafRegionalWebAclDetails">AWS
   * API Reference</a></p>
   */
  class AwsWafRegionalWebAclDetails
  {
  public:
    AWS_SECURITYHUB_API AwsWafRegionalWebAclDetails();
    AWS_SECURITYHUB_API AwsWafRegionalWebAclDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsWafRegionalWebAclDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The action to perform if none of the rules contained in the web ACL match.
     * </p>
     */
    inline const Aws::String& GetDefaultAction() const{ return m_defaultAction; }

    /**
     * <p>The action to perform if none of the rules contained in the web ACL match.
     * </p>
     */
    inline bool DefaultActionHasBeenSet() const { return m_defaultActionHasBeenSet; }

    /**
     * <p>The action to perform if none of the rules contained in the web ACL match.
     * </p>
     */
    inline void SetDefaultAction(const Aws::String& value) { m_defaultActionHasBeenSet = true; m_defaultAction = value; }

    /**
     * <p>The action to perform if none of the rules contained in the web ACL match.
     * </p>
     */
    inline void SetDefaultAction(Aws::String&& value) { m_defaultActionHasBeenSet = true; m_defaultAction = std::move(value); }

    /**
     * <p>The action to perform if none of the rules contained in the web ACL match.
     * </p>
     */
    inline void SetDefaultAction(const char* value) { m_defaultActionHasBeenSet = true; m_defaultAction.assign(value); }

    /**
     * <p>The action to perform if none of the rules contained in the web ACL match.
     * </p>
     */
    inline AwsWafRegionalWebAclDetails& WithDefaultAction(const Aws::String& value) { SetDefaultAction(value); return *this;}

    /**
     * <p>The action to perform if none of the rules contained in the web ACL match.
     * </p>
     */
    inline AwsWafRegionalWebAclDetails& WithDefaultAction(Aws::String&& value) { SetDefaultAction(std::move(value)); return *this;}

    /**
     * <p>The action to perform if none of the rules contained in the web ACL match.
     * </p>
     */
    inline AwsWafRegionalWebAclDetails& WithDefaultAction(const char* value) { SetDefaultAction(value); return *this;}


    /**
     * <p>A name for the metrics for this web ACL. </p>
     */
    inline const Aws::String& GetMetricName() const{ return m_metricName; }

    /**
     * <p>A name for the metrics for this web ACL. </p>
     */
    inline bool MetricNameHasBeenSet() const { return m_metricNameHasBeenSet; }

    /**
     * <p>A name for the metrics for this web ACL. </p>
     */
    inline void SetMetricName(const Aws::String& value) { m_metricNameHasBeenSet = true; m_metricName = value; }

    /**
     * <p>A name for the metrics for this web ACL. </p>
     */
    inline void SetMetricName(Aws::String&& value) { m_metricNameHasBeenSet = true; m_metricName = std::move(value); }

    /**
     * <p>A name for the metrics for this web ACL. </p>
     */
    inline void SetMetricName(const char* value) { m_metricNameHasBeenSet = true; m_metricName.assign(value); }

    /**
     * <p>A name for the metrics for this web ACL. </p>
     */
    inline AwsWafRegionalWebAclDetails& WithMetricName(const Aws::String& value) { SetMetricName(value); return *this;}

    /**
     * <p>A name for the metrics for this web ACL. </p>
     */
    inline AwsWafRegionalWebAclDetails& WithMetricName(Aws::String&& value) { SetMetricName(std::move(value)); return *this;}

    /**
     * <p>A name for the metrics for this web ACL. </p>
     */
    inline AwsWafRegionalWebAclDetails& WithMetricName(const char* value) { SetMetricName(value); return *this;}


    /**
     * <p>A descriptive name for the web ACL. </p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>A descriptive name for the web ACL. </p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>A descriptive name for the web ACL. </p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>A descriptive name for the web ACL. </p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>A descriptive name for the web ACL. </p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>A descriptive name for the web ACL. </p>
     */
    inline AwsWafRegionalWebAclDetails& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>A descriptive name for the web ACL. </p>
     */
    inline AwsWafRegionalWebAclDetails& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>A descriptive name for the web ACL. </p>
     */
    inline AwsWafRegionalWebAclDetails& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>An array that contains the action for each rule in a web ACL, the priority of
     * the rule, and the ID of the rule. </p>
     */
    inline const Aws::Vector<AwsWafRegionalWebAclRulesListDetails>& GetRulesList() const{ return m_rulesList; }

    /**
     * <p>An array that contains the action for each rule in a web ACL, the priority of
     * the rule, and the ID of the rule. </p>
     */
    inline bool RulesListHasBeenSet() const { return m_rulesListHasBeenSet; }

    /**
     * <p>An array that contains the action for each rule in a web ACL, the priority of
     * the rule, and the ID of the rule. </p>
     */
    inline void SetRulesList(const Aws::Vector<AwsWafRegionalWebAclRulesListDetails>& value) { m_rulesListHasBeenSet = true; m_rulesList = value; }

    /**
     * <p>An array that contains the action for each rule in a web ACL, the priority of
     * the rule, and the ID of the rule. </p>
     */
    inline void SetRulesList(Aws::Vector<AwsWafRegionalWebAclRulesListDetails>&& value) { m_rulesListHasBeenSet = true; m_rulesList = std::move(value); }

    /**
     * <p>An array that contains the action for each rule in a web ACL, the priority of
     * the rule, and the ID of the rule. </p>
     */
    inline AwsWafRegionalWebAclDetails& WithRulesList(const Aws::Vector<AwsWafRegionalWebAclRulesListDetails>& value) { SetRulesList(value); return *this;}

    /**
     * <p>An array that contains the action for each rule in a web ACL, the priority of
     * the rule, and the ID of the rule. </p>
     */
    inline AwsWafRegionalWebAclDetails& WithRulesList(Aws::Vector<AwsWafRegionalWebAclRulesListDetails>&& value) { SetRulesList(std::move(value)); return *this;}

    /**
     * <p>An array that contains the action for each rule in a web ACL, the priority of
     * the rule, and the ID of the rule. </p>
     */
    inline AwsWafRegionalWebAclDetails& AddRulesList(const AwsWafRegionalWebAclRulesListDetails& value) { m_rulesListHasBeenSet = true; m_rulesList.push_back(value); return *this; }

    /**
     * <p>An array that contains the action for each rule in a web ACL, the priority of
     * the rule, and the ID of the rule. </p>
     */
    inline AwsWafRegionalWebAclDetails& AddRulesList(AwsWafRegionalWebAclRulesListDetails&& value) { m_rulesListHasBeenSet = true; m_rulesList.push_back(std::move(value)); return *this; }


    /**
     * <p>The ID of the web ACL. </p>
     */
    inline const Aws::String& GetWebAclId() const{ return m_webAclId; }

    /**
     * <p>The ID of the web ACL. </p>
     */
    inline bool WebAclIdHasBeenSet() const { return m_webAclIdHasBeenSet; }

    /**
     * <p>The ID of the web ACL. </p>
     */
    inline void SetWebAclId(const Aws::String& value) { m_webAclIdHasBeenSet = true; m_webAclId = value; }

    /**
     * <p>The ID of the web ACL. </p>
     */
    inline void SetWebAclId(Aws::String&& value) { m_webAclIdHasBeenSet = true; m_webAclId = std::move(value); }

    /**
     * <p>The ID of the web ACL. </p>
     */
    inline void SetWebAclId(const char* value) { m_webAclIdHasBeenSet = true; m_webAclId.assign(value); }

    /**
     * <p>The ID of the web ACL. </p>
     */
    inline AwsWafRegionalWebAclDetails& WithWebAclId(const Aws::String& value) { SetWebAclId(value); return *this;}

    /**
     * <p>The ID of the web ACL. </p>
     */
    inline AwsWafRegionalWebAclDetails& WithWebAclId(Aws::String&& value) { SetWebAclId(std::move(value)); return *this;}

    /**
     * <p>The ID of the web ACL. </p>
     */
    inline AwsWafRegionalWebAclDetails& WithWebAclId(const char* value) { SetWebAclId(value); return *this;}

  private:

    Aws::String m_defaultAction;
    bool m_defaultActionHasBeenSet = false;

    Aws::String m_metricName;
    bool m_metricNameHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::Vector<AwsWafRegionalWebAclRulesListDetails> m_rulesList;
    bool m_rulesListHasBeenSet = false;

    Aws::String m_webAclId;
    bool m_webAclIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
