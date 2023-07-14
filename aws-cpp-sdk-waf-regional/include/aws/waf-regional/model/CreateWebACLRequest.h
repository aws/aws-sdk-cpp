﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/waf-regional/WAFRegional_EXPORTS.h>
#include <aws/waf-regional/WAFRegionalRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/waf-regional/model/WafAction.h>
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
  class AWS_WAFREGIONAL_API CreateWebACLRequest : public WAFRegionalRequest
  {
  public:
    CreateWebACLRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateWebACL"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>A friendly name or description of the <a>WebACL</a>. You can't change
     * <code>Name</code> after you create the <code>WebACL</code>.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>A friendly name or description of the <a>WebACL</a>. You can't change
     * <code>Name</code> after you create the <code>WebACL</code>.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>A friendly name or description of the <a>WebACL</a>. You can't change
     * <code>Name</code> after you create the <code>WebACL</code>.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>A friendly name or description of the <a>WebACL</a>. You can't change
     * <code>Name</code> after you create the <code>WebACL</code>.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>A friendly name or description of the <a>WebACL</a>. You can't change
     * <code>Name</code> after you create the <code>WebACL</code>.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>A friendly name or description of the <a>WebACL</a>. You can't change
     * <code>Name</code> after you create the <code>WebACL</code>.</p>
     */
    inline CreateWebACLRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>A friendly name or description of the <a>WebACL</a>. You can't change
     * <code>Name</code> after you create the <code>WebACL</code>.</p>
     */
    inline CreateWebACLRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>A friendly name or description of the <a>WebACL</a>. You can't change
     * <code>Name</code> after you create the <code>WebACL</code>.</p>
     */
    inline CreateWebACLRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>A friendly name or description for the metrics for this
     * <code>WebACL</code>.The name can contain only alphanumeric characters (A-Z, a-z,
     * 0-9), with maximum length 128 and minimum length one. It can't contain
     * whitespace or metric names reserved for AWS WAF, including "All" and
     * "Default_Action." You can't change <code>MetricName</code> after you create the
     * <code>WebACL</code>.</p>
     */
    inline const Aws::String& GetMetricName() const{ return m_metricName; }

    /**
     * <p>A friendly name or description for the metrics for this
     * <code>WebACL</code>.The name can contain only alphanumeric characters (A-Z, a-z,
     * 0-9), with maximum length 128 and minimum length one. It can't contain
     * whitespace or metric names reserved for AWS WAF, including "All" and
     * "Default_Action." You can't change <code>MetricName</code> after you create the
     * <code>WebACL</code>.</p>
     */
    inline bool MetricNameHasBeenSet() const { return m_metricNameHasBeenSet; }

    /**
     * <p>A friendly name or description for the metrics for this
     * <code>WebACL</code>.The name can contain only alphanumeric characters (A-Z, a-z,
     * 0-9), with maximum length 128 and minimum length one. It can't contain
     * whitespace or metric names reserved for AWS WAF, including "All" and
     * "Default_Action." You can't change <code>MetricName</code> after you create the
     * <code>WebACL</code>.</p>
     */
    inline void SetMetricName(const Aws::String& value) { m_metricNameHasBeenSet = true; m_metricName = value; }

    /**
     * <p>A friendly name or description for the metrics for this
     * <code>WebACL</code>.The name can contain only alphanumeric characters (A-Z, a-z,
     * 0-9), with maximum length 128 and minimum length one. It can't contain
     * whitespace or metric names reserved for AWS WAF, including "All" and
     * "Default_Action." You can't change <code>MetricName</code> after you create the
     * <code>WebACL</code>.</p>
     */
    inline void SetMetricName(Aws::String&& value) { m_metricNameHasBeenSet = true; m_metricName = std::move(value); }

    /**
     * <p>A friendly name or description for the metrics for this
     * <code>WebACL</code>.The name can contain only alphanumeric characters (A-Z, a-z,
     * 0-9), with maximum length 128 and minimum length one. It can't contain
     * whitespace or metric names reserved for AWS WAF, including "All" and
     * "Default_Action." You can't change <code>MetricName</code> after you create the
     * <code>WebACL</code>.</p>
     */
    inline void SetMetricName(const char* value) { m_metricNameHasBeenSet = true; m_metricName.assign(value); }

    /**
     * <p>A friendly name or description for the metrics for this
     * <code>WebACL</code>.The name can contain only alphanumeric characters (A-Z, a-z,
     * 0-9), with maximum length 128 and minimum length one. It can't contain
     * whitespace or metric names reserved for AWS WAF, including "All" and
     * "Default_Action." You can't change <code>MetricName</code> after you create the
     * <code>WebACL</code>.</p>
     */
    inline CreateWebACLRequest& WithMetricName(const Aws::String& value) { SetMetricName(value); return *this;}

    /**
     * <p>A friendly name or description for the metrics for this
     * <code>WebACL</code>.The name can contain only alphanumeric characters (A-Z, a-z,
     * 0-9), with maximum length 128 and minimum length one. It can't contain
     * whitespace or metric names reserved for AWS WAF, including "All" and
     * "Default_Action." You can't change <code>MetricName</code> after you create the
     * <code>WebACL</code>.</p>
     */
    inline CreateWebACLRequest& WithMetricName(Aws::String&& value) { SetMetricName(std::move(value)); return *this;}

    /**
     * <p>A friendly name or description for the metrics for this
     * <code>WebACL</code>.The name can contain only alphanumeric characters (A-Z, a-z,
     * 0-9), with maximum length 128 and minimum length one. It can't contain
     * whitespace or metric names reserved for AWS WAF, including "All" and
     * "Default_Action." You can't change <code>MetricName</code> after you create the
     * <code>WebACL</code>.</p>
     */
    inline CreateWebACLRequest& WithMetricName(const char* value) { SetMetricName(value); return *this;}


    /**
     * <p>The action that you want AWS WAF to take when a request doesn't match the
     * criteria specified in any of the <code>Rule</code> objects that are associated
     * with the <code>WebACL</code>.</p>
     */
    inline const WafAction& GetDefaultAction() const{ return m_defaultAction; }

    /**
     * <p>The action that you want AWS WAF to take when a request doesn't match the
     * criteria specified in any of the <code>Rule</code> objects that are associated
     * with the <code>WebACL</code>.</p>
     */
    inline bool DefaultActionHasBeenSet() const { return m_defaultActionHasBeenSet; }

    /**
     * <p>The action that you want AWS WAF to take when a request doesn't match the
     * criteria specified in any of the <code>Rule</code> objects that are associated
     * with the <code>WebACL</code>.</p>
     */
    inline void SetDefaultAction(const WafAction& value) { m_defaultActionHasBeenSet = true; m_defaultAction = value; }

    /**
     * <p>The action that you want AWS WAF to take when a request doesn't match the
     * criteria specified in any of the <code>Rule</code> objects that are associated
     * with the <code>WebACL</code>.</p>
     */
    inline void SetDefaultAction(WafAction&& value) { m_defaultActionHasBeenSet = true; m_defaultAction = std::move(value); }

    /**
     * <p>The action that you want AWS WAF to take when a request doesn't match the
     * criteria specified in any of the <code>Rule</code> objects that are associated
     * with the <code>WebACL</code>.</p>
     */
    inline CreateWebACLRequest& WithDefaultAction(const WafAction& value) { SetDefaultAction(value); return *this;}

    /**
     * <p>The action that you want AWS WAF to take when a request doesn't match the
     * criteria specified in any of the <code>Rule</code> objects that are associated
     * with the <code>WebACL</code>.</p>
     */
    inline CreateWebACLRequest& WithDefaultAction(WafAction&& value) { SetDefaultAction(std::move(value)); return *this;}


    /**
     * <p>The value returned by the most recent call to <a>GetChangeToken</a>.</p>
     */
    inline const Aws::String& GetChangeToken() const{ return m_changeToken; }

    /**
     * <p>The value returned by the most recent call to <a>GetChangeToken</a>.</p>
     */
    inline bool ChangeTokenHasBeenSet() const { return m_changeTokenHasBeenSet; }

    /**
     * <p>The value returned by the most recent call to <a>GetChangeToken</a>.</p>
     */
    inline void SetChangeToken(const Aws::String& value) { m_changeTokenHasBeenSet = true; m_changeToken = value; }

    /**
     * <p>The value returned by the most recent call to <a>GetChangeToken</a>.</p>
     */
    inline void SetChangeToken(Aws::String&& value) { m_changeTokenHasBeenSet = true; m_changeToken = std::move(value); }

    /**
     * <p>The value returned by the most recent call to <a>GetChangeToken</a>.</p>
     */
    inline void SetChangeToken(const char* value) { m_changeTokenHasBeenSet = true; m_changeToken.assign(value); }

    /**
     * <p>The value returned by the most recent call to <a>GetChangeToken</a>.</p>
     */
    inline CreateWebACLRequest& WithChangeToken(const Aws::String& value) { SetChangeToken(value); return *this;}

    /**
     * <p>The value returned by the most recent call to <a>GetChangeToken</a>.</p>
     */
    inline CreateWebACLRequest& WithChangeToken(Aws::String&& value) { SetChangeToken(std::move(value)); return *this;}

    /**
     * <p>The value returned by the most recent call to <a>GetChangeToken</a>.</p>
     */
    inline CreateWebACLRequest& WithChangeToken(const char* value) { SetChangeToken(value); return *this;}


    /**
     * <p/>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p/>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p/>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p/>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p/>
     */
    inline CreateWebACLRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p/>
     */
    inline CreateWebACLRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p/>
     */
    inline CreateWebACLRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p/>
     */
    inline CreateWebACLRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet;

    Aws::String m_metricName;
    bool m_metricNameHasBeenSet;

    WafAction m_defaultAction;
    bool m_defaultActionHasBeenSet;

    Aws::String m_changeToken;
    bool m_changeTokenHasBeenSet;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet;
  };

} // namespace Model
} // namespace WAFRegional
} // namespace Aws
