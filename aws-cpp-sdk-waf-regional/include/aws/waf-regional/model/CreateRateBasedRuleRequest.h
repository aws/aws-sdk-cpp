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
#include <aws/waf-regional/WAFRegional_EXPORTS.h>
#include <aws/waf-regional/WAFRegionalRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/waf-regional/model/RateKey.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/waf-regional/model/Tag.h>
#include <utility>

namespace Aws
{
namespace WAFRegional
{
namespace Model
{

  /**
   */
  class AWS_WAFREGIONAL_API CreateRateBasedRuleRequest : public WAFRegionalRequest
  {
  public:
    CreateRateBasedRuleRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateRateBasedRule"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>A friendly name or description of the <a>RateBasedRule</a>. You can't change
     * the name of a <code>RateBasedRule</code> after you create it.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>A friendly name or description of the <a>RateBasedRule</a>. You can't change
     * the name of a <code>RateBasedRule</code> after you create it.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>A friendly name or description of the <a>RateBasedRule</a>. You can't change
     * the name of a <code>RateBasedRule</code> after you create it.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>A friendly name or description of the <a>RateBasedRule</a>. You can't change
     * the name of a <code>RateBasedRule</code> after you create it.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>A friendly name or description of the <a>RateBasedRule</a>. You can't change
     * the name of a <code>RateBasedRule</code> after you create it.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>A friendly name or description of the <a>RateBasedRule</a>. You can't change
     * the name of a <code>RateBasedRule</code> after you create it.</p>
     */
    inline CreateRateBasedRuleRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>A friendly name or description of the <a>RateBasedRule</a>. You can't change
     * the name of a <code>RateBasedRule</code> after you create it.</p>
     */
    inline CreateRateBasedRuleRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>A friendly name or description of the <a>RateBasedRule</a>. You can't change
     * the name of a <code>RateBasedRule</code> after you create it.</p>
     */
    inline CreateRateBasedRuleRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>A friendly name or description for the metrics for this
     * <code>RateBasedRule</code>. The name can contain only alphanumeric characters
     * (A-Z, a-z, 0-9), with maximum length 128 and minimum length one. It can't
     * contain whitespace or metric names reserved for AWS WAF, including "All" and
     * "Default_Action." You can't change the name of the metric after you create the
     * <code>RateBasedRule</code>.</p>
     */
    inline const Aws::String& GetMetricName() const{ return m_metricName; }

    /**
     * <p>A friendly name or description for the metrics for this
     * <code>RateBasedRule</code>. The name can contain only alphanumeric characters
     * (A-Z, a-z, 0-9), with maximum length 128 and minimum length one. It can't
     * contain whitespace or metric names reserved for AWS WAF, including "All" and
     * "Default_Action." You can't change the name of the metric after you create the
     * <code>RateBasedRule</code>.</p>
     */
    inline bool MetricNameHasBeenSet() const { return m_metricNameHasBeenSet; }

    /**
     * <p>A friendly name or description for the metrics for this
     * <code>RateBasedRule</code>. The name can contain only alphanumeric characters
     * (A-Z, a-z, 0-9), with maximum length 128 and minimum length one. It can't
     * contain whitespace or metric names reserved for AWS WAF, including "All" and
     * "Default_Action." You can't change the name of the metric after you create the
     * <code>RateBasedRule</code>.</p>
     */
    inline void SetMetricName(const Aws::String& value) { m_metricNameHasBeenSet = true; m_metricName = value; }

    /**
     * <p>A friendly name or description for the metrics for this
     * <code>RateBasedRule</code>. The name can contain only alphanumeric characters
     * (A-Z, a-z, 0-9), with maximum length 128 and minimum length one. It can't
     * contain whitespace or metric names reserved for AWS WAF, including "All" and
     * "Default_Action." You can't change the name of the metric after you create the
     * <code>RateBasedRule</code>.</p>
     */
    inline void SetMetricName(Aws::String&& value) { m_metricNameHasBeenSet = true; m_metricName = std::move(value); }

    /**
     * <p>A friendly name or description for the metrics for this
     * <code>RateBasedRule</code>. The name can contain only alphanumeric characters
     * (A-Z, a-z, 0-9), with maximum length 128 and minimum length one. It can't
     * contain whitespace or metric names reserved for AWS WAF, including "All" and
     * "Default_Action." You can't change the name of the metric after you create the
     * <code>RateBasedRule</code>.</p>
     */
    inline void SetMetricName(const char* value) { m_metricNameHasBeenSet = true; m_metricName.assign(value); }

    /**
     * <p>A friendly name or description for the metrics for this
     * <code>RateBasedRule</code>. The name can contain only alphanumeric characters
     * (A-Z, a-z, 0-9), with maximum length 128 and minimum length one. It can't
     * contain whitespace or metric names reserved for AWS WAF, including "All" and
     * "Default_Action." You can't change the name of the metric after you create the
     * <code>RateBasedRule</code>.</p>
     */
    inline CreateRateBasedRuleRequest& WithMetricName(const Aws::String& value) { SetMetricName(value); return *this;}

    /**
     * <p>A friendly name or description for the metrics for this
     * <code>RateBasedRule</code>. The name can contain only alphanumeric characters
     * (A-Z, a-z, 0-9), with maximum length 128 and minimum length one. It can't
     * contain whitespace or metric names reserved for AWS WAF, including "All" and
     * "Default_Action." You can't change the name of the metric after you create the
     * <code>RateBasedRule</code>.</p>
     */
    inline CreateRateBasedRuleRequest& WithMetricName(Aws::String&& value) { SetMetricName(std::move(value)); return *this;}

    /**
     * <p>A friendly name or description for the metrics for this
     * <code>RateBasedRule</code>. The name can contain only alphanumeric characters
     * (A-Z, a-z, 0-9), with maximum length 128 and minimum length one. It can't
     * contain whitespace or metric names reserved for AWS WAF, including "All" and
     * "Default_Action." You can't change the name of the metric after you create the
     * <code>RateBasedRule</code>.</p>
     */
    inline CreateRateBasedRuleRequest& WithMetricName(const char* value) { SetMetricName(value); return *this;}


    /**
     * <p>The field that AWS WAF uses to determine if requests are likely arriving from
     * a single source and thus subject to rate monitoring. The only valid value for
     * <code>RateKey</code> is <code>IP</code>. <code>IP</code> indicates that requests
     * that arrive from the same IP address are subject to the <code>RateLimit</code>
     * that is specified in the <code>RateBasedRule</code>.</p>
     */
    inline const RateKey& GetRateKey() const{ return m_rateKey; }

    /**
     * <p>The field that AWS WAF uses to determine if requests are likely arriving from
     * a single source and thus subject to rate monitoring. The only valid value for
     * <code>RateKey</code> is <code>IP</code>. <code>IP</code> indicates that requests
     * that arrive from the same IP address are subject to the <code>RateLimit</code>
     * that is specified in the <code>RateBasedRule</code>.</p>
     */
    inline bool RateKeyHasBeenSet() const { return m_rateKeyHasBeenSet; }

    /**
     * <p>The field that AWS WAF uses to determine if requests are likely arriving from
     * a single source and thus subject to rate monitoring. The only valid value for
     * <code>RateKey</code> is <code>IP</code>. <code>IP</code> indicates that requests
     * that arrive from the same IP address are subject to the <code>RateLimit</code>
     * that is specified in the <code>RateBasedRule</code>.</p>
     */
    inline void SetRateKey(const RateKey& value) { m_rateKeyHasBeenSet = true; m_rateKey = value; }

    /**
     * <p>The field that AWS WAF uses to determine if requests are likely arriving from
     * a single source and thus subject to rate monitoring. The only valid value for
     * <code>RateKey</code> is <code>IP</code>. <code>IP</code> indicates that requests
     * that arrive from the same IP address are subject to the <code>RateLimit</code>
     * that is specified in the <code>RateBasedRule</code>.</p>
     */
    inline void SetRateKey(RateKey&& value) { m_rateKeyHasBeenSet = true; m_rateKey = std::move(value); }

    /**
     * <p>The field that AWS WAF uses to determine if requests are likely arriving from
     * a single source and thus subject to rate monitoring. The only valid value for
     * <code>RateKey</code> is <code>IP</code>. <code>IP</code> indicates that requests
     * that arrive from the same IP address are subject to the <code>RateLimit</code>
     * that is specified in the <code>RateBasedRule</code>.</p>
     */
    inline CreateRateBasedRuleRequest& WithRateKey(const RateKey& value) { SetRateKey(value); return *this;}

    /**
     * <p>The field that AWS WAF uses to determine if requests are likely arriving from
     * a single source and thus subject to rate monitoring. The only valid value for
     * <code>RateKey</code> is <code>IP</code>. <code>IP</code> indicates that requests
     * that arrive from the same IP address are subject to the <code>RateLimit</code>
     * that is specified in the <code>RateBasedRule</code>.</p>
     */
    inline CreateRateBasedRuleRequest& WithRateKey(RateKey&& value) { SetRateKey(std::move(value)); return *this;}


    /**
     * <p>The maximum number of requests, which have an identical value in the field
     * that is specified by <code>RateKey</code>, allowed in a five-minute period. If
     * the number of requests exceeds the <code>RateLimit</code> and the other
     * predicates specified in the rule are also met, AWS WAF triggers the action that
     * is specified for this rule.</p>
     */
    inline long long GetRateLimit() const{ return m_rateLimit; }

    /**
     * <p>The maximum number of requests, which have an identical value in the field
     * that is specified by <code>RateKey</code>, allowed in a five-minute period. If
     * the number of requests exceeds the <code>RateLimit</code> and the other
     * predicates specified in the rule are also met, AWS WAF triggers the action that
     * is specified for this rule.</p>
     */
    inline bool RateLimitHasBeenSet() const { return m_rateLimitHasBeenSet; }

    /**
     * <p>The maximum number of requests, which have an identical value in the field
     * that is specified by <code>RateKey</code>, allowed in a five-minute period. If
     * the number of requests exceeds the <code>RateLimit</code> and the other
     * predicates specified in the rule are also met, AWS WAF triggers the action that
     * is specified for this rule.</p>
     */
    inline void SetRateLimit(long long value) { m_rateLimitHasBeenSet = true; m_rateLimit = value; }

    /**
     * <p>The maximum number of requests, which have an identical value in the field
     * that is specified by <code>RateKey</code>, allowed in a five-minute period. If
     * the number of requests exceeds the <code>RateLimit</code> and the other
     * predicates specified in the rule are also met, AWS WAF triggers the action that
     * is specified for this rule.</p>
     */
    inline CreateRateBasedRuleRequest& WithRateLimit(long long value) { SetRateLimit(value); return *this;}


    /**
     * <p>The <code>ChangeToken</code> that you used to submit the
     * <code>CreateRateBasedRule</code> request. You can also use this value to query
     * the status of the request. For more information, see
     * <a>GetChangeTokenStatus</a>.</p>
     */
    inline const Aws::String& GetChangeToken() const{ return m_changeToken; }

    /**
     * <p>The <code>ChangeToken</code> that you used to submit the
     * <code>CreateRateBasedRule</code> request. You can also use this value to query
     * the status of the request. For more information, see
     * <a>GetChangeTokenStatus</a>.</p>
     */
    inline bool ChangeTokenHasBeenSet() const { return m_changeTokenHasBeenSet; }

    /**
     * <p>The <code>ChangeToken</code> that you used to submit the
     * <code>CreateRateBasedRule</code> request. You can also use this value to query
     * the status of the request. For more information, see
     * <a>GetChangeTokenStatus</a>.</p>
     */
    inline void SetChangeToken(const Aws::String& value) { m_changeTokenHasBeenSet = true; m_changeToken = value; }

    /**
     * <p>The <code>ChangeToken</code> that you used to submit the
     * <code>CreateRateBasedRule</code> request. You can also use this value to query
     * the status of the request. For more information, see
     * <a>GetChangeTokenStatus</a>.</p>
     */
    inline void SetChangeToken(Aws::String&& value) { m_changeTokenHasBeenSet = true; m_changeToken = std::move(value); }

    /**
     * <p>The <code>ChangeToken</code> that you used to submit the
     * <code>CreateRateBasedRule</code> request. You can also use this value to query
     * the status of the request. For more information, see
     * <a>GetChangeTokenStatus</a>.</p>
     */
    inline void SetChangeToken(const char* value) { m_changeTokenHasBeenSet = true; m_changeToken.assign(value); }

    /**
     * <p>The <code>ChangeToken</code> that you used to submit the
     * <code>CreateRateBasedRule</code> request. You can also use this value to query
     * the status of the request. For more information, see
     * <a>GetChangeTokenStatus</a>.</p>
     */
    inline CreateRateBasedRuleRequest& WithChangeToken(const Aws::String& value) { SetChangeToken(value); return *this;}

    /**
     * <p>The <code>ChangeToken</code> that you used to submit the
     * <code>CreateRateBasedRule</code> request. You can also use this value to query
     * the status of the request. For more information, see
     * <a>GetChangeTokenStatus</a>.</p>
     */
    inline CreateRateBasedRuleRequest& WithChangeToken(Aws::String&& value) { SetChangeToken(std::move(value)); return *this;}

    /**
     * <p>The <code>ChangeToken</code> that you used to submit the
     * <code>CreateRateBasedRule</code> request. You can also use this value to query
     * the status of the request. For more information, see
     * <a>GetChangeTokenStatus</a>.</p>
     */
    inline CreateRateBasedRuleRequest& WithChangeToken(const char* value) { SetChangeToken(value); return *this;}


    
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    
    inline CreateRateBasedRuleRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    
    inline CreateRateBasedRuleRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    
    inline CreateRateBasedRuleRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    
    inline CreateRateBasedRuleRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet;

    Aws::String m_metricName;
    bool m_metricNameHasBeenSet;

    RateKey m_rateKey;
    bool m_rateKeyHasBeenSet;

    long long m_rateLimit;
    bool m_rateLimitHasBeenSet;

    Aws::String m_changeToken;
    bool m_changeTokenHasBeenSet;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet;
  };

} // namespace Model
} // namespace WAFRegional
} // namespace Aws
