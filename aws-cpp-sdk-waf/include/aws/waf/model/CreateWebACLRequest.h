﻿/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/waf/WAF_EXPORTS.h>
#include <aws/waf/WAFRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/waf/model/WafAction.h>

namespace Aws
{
namespace WAF
{
namespace Model
{

  /**
   */
  class AWS_WAF_API CreateWebACLRequest : public WAFRequest
  {
  public:
    CreateWebACLRequest();
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
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>A friendly name or description of the <a>WebACL</a>. You can't change
     * <code>Name</code> after you create the <code>WebACL</code>.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = value; }

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
    inline CreateWebACLRequest& WithName(Aws::String&& value) { SetName(value); return *this;}

    /**
     * <p>A friendly name or description of the <a>WebACL</a>. You can't change
     * <code>Name</code> after you create the <code>WebACL</code>.</p>
     */
    inline CreateWebACLRequest& WithName(const char* value) { SetName(value); return *this;}

    /**
     * <p>A friendly name or description for the metrics for this <code>WebACL</code>.
     * The name can contain only alphanumeric characters (A-Z, a-z, 0-9); the name
     * can't contain whitespace. You can't change <code>MetricName</code> after you
     * create the <code>WebACL</code>.</p>
     */
    inline const Aws::String& GetMetricName() const{ return m_metricName; }

    /**
     * <p>A friendly name or description for the metrics for this <code>WebACL</code>.
     * The name can contain only alphanumeric characters (A-Z, a-z, 0-9); the name
     * can't contain whitespace. You can't change <code>MetricName</code> after you
     * create the <code>WebACL</code>.</p>
     */
    inline void SetMetricName(const Aws::String& value) { m_metricNameHasBeenSet = true; m_metricName = value; }

    /**
     * <p>A friendly name or description for the metrics for this <code>WebACL</code>.
     * The name can contain only alphanumeric characters (A-Z, a-z, 0-9); the name
     * can't contain whitespace. You can't change <code>MetricName</code> after you
     * create the <code>WebACL</code>.</p>
     */
    inline void SetMetricName(Aws::String&& value) { m_metricNameHasBeenSet = true; m_metricName = value; }

    /**
     * <p>A friendly name or description for the metrics for this <code>WebACL</code>.
     * The name can contain only alphanumeric characters (A-Z, a-z, 0-9); the name
     * can't contain whitespace. You can't change <code>MetricName</code> after you
     * create the <code>WebACL</code>.</p>
     */
    inline void SetMetricName(const char* value) { m_metricNameHasBeenSet = true; m_metricName.assign(value); }

    /**
     * <p>A friendly name or description for the metrics for this <code>WebACL</code>.
     * The name can contain only alphanumeric characters (A-Z, a-z, 0-9); the name
     * can't contain whitespace. You can't change <code>MetricName</code> after you
     * create the <code>WebACL</code>.</p>
     */
    inline CreateWebACLRequest& WithMetricName(const Aws::String& value) { SetMetricName(value); return *this;}

    /**
     * <p>A friendly name or description for the metrics for this <code>WebACL</code>.
     * The name can contain only alphanumeric characters (A-Z, a-z, 0-9); the name
     * can't contain whitespace. You can't change <code>MetricName</code> after you
     * create the <code>WebACL</code>.</p>
     */
    inline CreateWebACLRequest& WithMetricName(Aws::String&& value) { SetMetricName(value); return *this;}

    /**
     * <p>A friendly name or description for the metrics for this <code>WebACL</code>.
     * The name can contain only alphanumeric characters (A-Z, a-z, 0-9); the name
     * can't contain whitespace. You can't change <code>MetricName</code> after you
     * create the <code>WebACL</code>.</p>
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
    inline void SetDefaultAction(const WafAction& value) { m_defaultActionHasBeenSet = true; m_defaultAction = value; }

    /**
     * <p>The action that you want AWS WAF to take when a request doesn't match the
     * criteria specified in any of the <code>Rule</code> objects that are associated
     * with the <code>WebACL</code>.</p>
     */
    inline void SetDefaultAction(WafAction&& value) { m_defaultActionHasBeenSet = true; m_defaultAction = value; }

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
    inline CreateWebACLRequest& WithDefaultAction(WafAction&& value) { SetDefaultAction(value); return *this;}

    /**
     * <p>The value returned by the most recent call to <a>GetChangeToken</a>.</p>
     */
    inline const Aws::String& GetChangeToken() const{ return m_changeToken; }

    /**
     * <p>The value returned by the most recent call to <a>GetChangeToken</a>.</p>
     */
    inline void SetChangeToken(const Aws::String& value) { m_changeTokenHasBeenSet = true; m_changeToken = value; }

    /**
     * <p>The value returned by the most recent call to <a>GetChangeToken</a>.</p>
     */
    inline void SetChangeToken(Aws::String&& value) { m_changeTokenHasBeenSet = true; m_changeToken = value; }

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
    inline CreateWebACLRequest& WithChangeToken(Aws::String&& value) { SetChangeToken(value); return *this;}

    /**
     * <p>The value returned by the most recent call to <a>GetChangeToken</a>.</p>
     */
    inline CreateWebACLRequest& WithChangeToken(const char* value) { SetChangeToken(value); return *this;}

  private:
    Aws::String m_name;
    bool m_nameHasBeenSet;
    Aws::String m_metricName;
    bool m_metricNameHasBeenSet;
    WafAction m_defaultAction;
    bool m_defaultActionHasBeenSet;
    Aws::String m_changeToken;
    bool m_changeTokenHasBeenSet;
  };

} // namespace Model
} // namespace WAF
} // namespace Aws
