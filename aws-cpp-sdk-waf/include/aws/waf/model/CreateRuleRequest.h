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

namespace Aws
{
namespace WAF
{
namespace Model
{

  /**
   */
  class AWS_WAF_API CreateRuleRequest : public WAFRequest
  {
  public:
    CreateRuleRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    /**
     * <p>A friendly name or description of the <a>Rule</a>. You can't change the name
     * of a <code>Rule</code> after you create it.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>A friendly name or description of the <a>Rule</a>. You can't change the name
     * of a <code>Rule</code> after you create it.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>A friendly name or description of the <a>Rule</a>. You can't change the name
     * of a <code>Rule</code> after you create it.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>A friendly name or description of the <a>Rule</a>. You can't change the name
     * of a <code>Rule</code> after you create it.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>A friendly name or description of the <a>Rule</a>. You can't change the name
     * of a <code>Rule</code> after you create it.</p>
     */
    inline CreateRuleRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>A friendly name or description of the <a>Rule</a>. You can't change the name
     * of a <code>Rule</code> after you create it.</p>
     */
    inline CreateRuleRequest& WithName(Aws::String&& value) { SetName(value); return *this;}

    /**
     * <p>A friendly name or description of the <a>Rule</a>. You can't change the name
     * of a <code>Rule</code> after you create it.</p>
     */
    inline CreateRuleRequest& WithName(const char* value) { SetName(value); return *this;}

    /**
     * <p>A friendly name or description for the metrics for this <code>Rule</code>.
     * The name can contain only alphanumeric characters (A-Z, a-z, 0-9); the name
     * can't contain whitespace. You can't change the name of the metric after you
     * create the <code>Rule</code>.</p>
     */
    inline const Aws::String& GetMetricName() const{ return m_metricName; }

    /**
     * <p>A friendly name or description for the metrics for this <code>Rule</code>.
     * The name can contain only alphanumeric characters (A-Z, a-z, 0-9); the name
     * can't contain whitespace. You can't change the name of the metric after you
     * create the <code>Rule</code>.</p>
     */
    inline void SetMetricName(const Aws::String& value) { m_metricNameHasBeenSet = true; m_metricName = value; }

    /**
     * <p>A friendly name or description for the metrics for this <code>Rule</code>.
     * The name can contain only alphanumeric characters (A-Z, a-z, 0-9); the name
     * can't contain whitespace. You can't change the name of the metric after you
     * create the <code>Rule</code>.</p>
     */
    inline void SetMetricName(Aws::String&& value) { m_metricNameHasBeenSet = true; m_metricName = value; }

    /**
     * <p>A friendly name or description for the metrics for this <code>Rule</code>.
     * The name can contain only alphanumeric characters (A-Z, a-z, 0-9); the name
     * can't contain whitespace. You can't change the name of the metric after you
     * create the <code>Rule</code>.</p>
     */
    inline void SetMetricName(const char* value) { m_metricNameHasBeenSet = true; m_metricName.assign(value); }

    /**
     * <p>A friendly name or description for the metrics for this <code>Rule</code>.
     * The name can contain only alphanumeric characters (A-Z, a-z, 0-9); the name
     * can't contain whitespace. You can't change the name of the metric after you
     * create the <code>Rule</code>.</p>
     */
    inline CreateRuleRequest& WithMetricName(const Aws::String& value) { SetMetricName(value); return *this;}

    /**
     * <p>A friendly name or description for the metrics for this <code>Rule</code>.
     * The name can contain only alphanumeric characters (A-Z, a-z, 0-9); the name
     * can't contain whitespace. You can't change the name of the metric after you
     * create the <code>Rule</code>.</p>
     */
    inline CreateRuleRequest& WithMetricName(Aws::String&& value) { SetMetricName(value); return *this;}

    /**
     * <p>A friendly name or description for the metrics for this <code>Rule</code>.
     * The name can contain only alphanumeric characters (A-Z, a-z, 0-9); the name
     * can't contain whitespace. You can't change the name of the metric after you
     * create the <code>Rule</code>.</p>
     */
    inline CreateRuleRequest& WithMetricName(const char* value) { SetMetricName(value); return *this;}

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
    inline CreateRuleRequest& WithChangeToken(const Aws::String& value) { SetChangeToken(value); return *this;}

    /**
     * <p>The value returned by the most recent call to <a>GetChangeToken</a>.</p>
     */
    inline CreateRuleRequest& WithChangeToken(Aws::String&& value) { SetChangeToken(value); return *this;}

    /**
     * <p>The value returned by the most recent call to <a>GetChangeToken</a>.</p>
     */
    inline CreateRuleRequest& WithChangeToken(const char* value) { SetChangeToken(value); return *this;}

  private:
    Aws::String m_name;
    bool m_nameHasBeenSet;
    Aws::String m_metricName;
    bool m_metricNameHasBeenSet;
    Aws::String m_changeToken;
    bool m_changeTokenHasBeenSet;
  };

} // namespace Model
} // namespace WAF
} // namespace Aws
