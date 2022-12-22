/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/securityhub/model/AwsWafRegionalRulePredicateListDetails.h>
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
   * <p>Provides information about an WAF Regional rule. This rule identifies the web
   * requests that you want to allow, block, or count. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsWafRegionalRuleDetails">AWS
   * API Reference</a></p>
   */
  class AwsWafRegionalRuleDetails
  {
  public:
    AWS_SECURITYHUB_API AwsWafRegionalRuleDetails();
    AWS_SECURITYHUB_API AwsWafRegionalRuleDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsWafRegionalRuleDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A name for the metrics for the rule. </p>
     */
    inline const Aws::String& GetMetricName() const{ return m_metricName; }

    /**
     * <p>A name for the metrics for the rule. </p>
     */
    inline bool MetricNameHasBeenSet() const { return m_metricNameHasBeenSet; }

    /**
     * <p>A name for the metrics for the rule. </p>
     */
    inline void SetMetricName(const Aws::String& value) { m_metricNameHasBeenSet = true; m_metricName = value; }

    /**
     * <p>A name for the metrics for the rule. </p>
     */
    inline void SetMetricName(Aws::String&& value) { m_metricNameHasBeenSet = true; m_metricName = std::move(value); }

    /**
     * <p>A name for the metrics for the rule. </p>
     */
    inline void SetMetricName(const char* value) { m_metricNameHasBeenSet = true; m_metricName.assign(value); }

    /**
     * <p>A name for the metrics for the rule. </p>
     */
    inline AwsWafRegionalRuleDetails& WithMetricName(const Aws::String& value) { SetMetricName(value); return *this;}

    /**
     * <p>A name for the metrics for the rule. </p>
     */
    inline AwsWafRegionalRuleDetails& WithMetricName(Aws::String&& value) { SetMetricName(std::move(value)); return *this;}

    /**
     * <p>A name for the metrics for the rule. </p>
     */
    inline AwsWafRegionalRuleDetails& WithMetricName(const char* value) { SetMetricName(value); return *this;}


    /**
     * <p>A descriptive name for the rule. </p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>A descriptive name for the rule. </p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>A descriptive name for the rule. </p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>A descriptive name for the rule. </p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>A descriptive name for the rule. </p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>A descriptive name for the rule. </p>
     */
    inline AwsWafRegionalRuleDetails& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>A descriptive name for the rule. </p>
     */
    inline AwsWafRegionalRuleDetails& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>A descriptive name for the rule. </p>
     */
    inline AwsWafRegionalRuleDetails& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>Specifies the <code>ByteMatchSet</code>, <code>IPSet</code>,
     * <code>SqlInjectionMatchSet</code>, <code>XssMatchSet</code>,
     * <code>RegexMatchSet</code>, <code>GeoMatchSet</code>, and
     * <code>SizeConstraintSet</code> objects that you want to add to a rule and, for
     * each object, indicates whether you want to negate the settings. </p>
     */
    inline const Aws::Vector<AwsWafRegionalRulePredicateListDetails>& GetPredicateList() const{ return m_predicateList; }

    /**
     * <p>Specifies the <code>ByteMatchSet</code>, <code>IPSet</code>,
     * <code>SqlInjectionMatchSet</code>, <code>XssMatchSet</code>,
     * <code>RegexMatchSet</code>, <code>GeoMatchSet</code>, and
     * <code>SizeConstraintSet</code> objects that you want to add to a rule and, for
     * each object, indicates whether you want to negate the settings. </p>
     */
    inline bool PredicateListHasBeenSet() const { return m_predicateListHasBeenSet; }

    /**
     * <p>Specifies the <code>ByteMatchSet</code>, <code>IPSet</code>,
     * <code>SqlInjectionMatchSet</code>, <code>XssMatchSet</code>,
     * <code>RegexMatchSet</code>, <code>GeoMatchSet</code>, and
     * <code>SizeConstraintSet</code> objects that you want to add to a rule and, for
     * each object, indicates whether you want to negate the settings. </p>
     */
    inline void SetPredicateList(const Aws::Vector<AwsWafRegionalRulePredicateListDetails>& value) { m_predicateListHasBeenSet = true; m_predicateList = value; }

    /**
     * <p>Specifies the <code>ByteMatchSet</code>, <code>IPSet</code>,
     * <code>SqlInjectionMatchSet</code>, <code>XssMatchSet</code>,
     * <code>RegexMatchSet</code>, <code>GeoMatchSet</code>, and
     * <code>SizeConstraintSet</code> objects that you want to add to a rule and, for
     * each object, indicates whether you want to negate the settings. </p>
     */
    inline void SetPredicateList(Aws::Vector<AwsWafRegionalRulePredicateListDetails>&& value) { m_predicateListHasBeenSet = true; m_predicateList = std::move(value); }

    /**
     * <p>Specifies the <code>ByteMatchSet</code>, <code>IPSet</code>,
     * <code>SqlInjectionMatchSet</code>, <code>XssMatchSet</code>,
     * <code>RegexMatchSet</code>, <code>GeoMatchSet</code>, and
     * <code>SizeConstraintSet</code> objects that you want to add to a rule and, for
     * each object, indicates whether you want to negate the settings. </p>
     */
    inline AwsWafRegionalRuleDetails& WithPredicateList(const Aws::Vector<AwsWafRegionalRulePredicateListDetails>& value) { SetPredicateList(value); return *this;}

    /**
     * <p>Specifies the <code>ByteMatchSet</code>, <code>IPSet</code>,
     * <code>SqlInjectionMatchSet</code>, <code>XssMatchSet</code>,
     * <code>RegexMatchSet</code>, <code>GeoMatchSet</code>, and
     * <code>SizeConstraintSet</code> objects that you want to add to a rule and, for
     * each object, indicates whether you want to negate the settings. </p>
     */
    inline AwsWafRegionalRuleDetails& WithPredicateList(Aws::Vector<AwsWafRegionalRulePredicateListDetails>&& value) { SetPredicateList(std::move(value)); return *this;}

    /**
     * <p>Specifies the <code>ByteMatchSet</code>, <code>IPSet</code>,
     * <code>SqlInjectionMatchSet</code>, <code>XssMatchSet</code>,
     * <code>RegexMatchSet</code>, <code>GeoMatchSet</code>, and
     * <code>SizeConstraintSet</code> objects that you want to add to a rule and, for
     * each object, indicates whether you want to negate the settings. </p>
     */
    inline AwsWafRegionalRuleDetails& AddPredicateList(const AwsWafRegionalRulePredicateListDetails& value) { m_predicateListHasBeenSet = true; m_predicateList.push_back(value); return *this; }

    /**
     * <p>Specifies the <code>ByteMatchSet</code>, <code>IPSet</code>,
     * <code>SqlInjectionMatchSet</code>, <code>XssMatchSet</code>,
     * <code>RegexMatchSet</code>, <code>GeoMatchSet</code>, and
     * <code>SizeConstraintSet</code> objects that you want to add to a rule and, for
     * each object, indicates whether you want to negate the settings. </p>
     */
    inline AwsWafRegionalRuleDetails& AddPredicateList(AwsWafRegionalRulePredicateListDetails&& value) { m_predicateListHasBeenSet = true; m_predicateList.push_back(std::move(value)); return *this; }


    /**
     * <p>The ID of the rule. </p>
     */
    inline const Aws::String& GetRuleId() const{ return m_ruleId; }

    /**
     * <p>The ID of the rule. </p>
     */
    inline bool RuleIdHasBeenSet() const { return m_ruleIdHasBeenSet; }

    /**
     * <p>The ID of the rule. </p>
     */
    inline void SetRuleId(const Aws::String& value) { m_ruleIdHasBeenSet = true; m_ruleId = value; }

    /**
     * <p>The ID of the rule. </p>
     */
    inline void SetRuleId(Aws::String&& value) { m_ruleIdHasBeenSet = true; m_ruleId = std::move(value); }

    /**
     * <p>The ID of the rule. </p>
     */
    inline void SetRuleId(const char* value) { m_ruleIdHasBeenSet = true; m_ruleId.assign(value); }

    /**
     * <p>The ID of the rule. </p>
     */
    inline AwsWafRegionalRuleDetails& WithRuleId(const Aws::String& value) { SetRuleId(value); return *this;}

    /**
     * <p>The ID of the rule. </p>
     */
    inline AwsWafRegionalRuleDetails& WithRuleId(Aws::String&& value) { SetRuleId(std::move(value)); return *this;}

    /**
     * <p>The ID of the rule. </p>
     */
    inline AwsWafRegionalRuleDetails& WithRuleId(const char* value) { SetRuleId(value); return *this;}

  private:

    Aws::String m_metricName;
    bool m_metricNameHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::Vector<AwsWafRegionalRulePredicateListDetails> m_predicateList;
    bool m_predicateListHasBeenSet = false;

    Aws::String m_ruleId;
    bool m_ruleIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
