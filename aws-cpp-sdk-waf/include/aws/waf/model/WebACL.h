/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/waf/WAF_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/waf/model/WafAction.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/waf/model/ActivatedRule.h>
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
namespace WAF
{
namespace Model
{

  /**
   *  <p>This is <b>AWS WAF Classic</b> documentation. For more information,
   * see <a
   * href="https://docs.aws.amazon.com/waf/latest/developerguide/classic-waf-chapter.html">AWS
   * WAF Classic</a> in the developer guide.</p> <p> <b>For the latest version of AWS
   * WAF</b>, use the AWS WAFV2 API and see the <a
   * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-chapter.html">AWS
   * WAF Developer Guide</a>. With the latest version, AWS WAF has a single set of
   * endpoints for regional and global use. </p>  <p>Contains the
   * <code>Rules</code> that identify the requests that you want to allow, block, or
   * count. In a <code>WebACL</code>, you also specify a default action
   * (<code>ALLOW</code> or <code>BLOCK</code>), and the action for each
   * <code>Rule</code> that you add to a <code>WebACL</code>, for example, block
   * requests from specified IP addresses or block requests from specified referrers.
   * You also associate the <code>WebACL</code> with a CloudFront distribution to
   * identify the requests that you want AWS WAF to filter. If you add more than one
   * <code>Rule</code> to a <code>WebACL</code>, a request needs to match only one of
   * the specifications to be allowed, blocked, or counted. For more information, see
   * <a>UpdateWebACL</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/waf-2015-08-24/WebACL">AWS API
   * Reference</a></p>
   */
  class WebACL
  {
  public:
    AWS_WAF_API WebACL();
    AWS_WAF_API WebACL(Aws::Utils::Json::JsonView jsonValue);
    AWS_WAF_API WebACL& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WAF_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A unique identifier for a <code>WebACL</code>. You use <code>WebACLId</code>
     * to get information about a <code>WebACL</code> (see <a>GetWebACL</a>), update a
     * <code>WebACL</code> (see <a>UpdateWebACL</a>), and delete a <code>WebACL</code>
     * from AWS WAF (see <a>DeleteWebACL</a>).</p> <p> <code>WebACLId</code> is
     * returned by <a>CreateWebACL</a> and by <a>ListWebACLs</a>.</p>
     */
    inline const Aws::String& GetWebACLId() const{ return m_webACLId; }

    /**
     * <p>A unique identifier for a <code>WebACL</code>. You use <code>WebACLId</code>
     * to get information about a <code>WebACL</code> (see <a>GetWebACL</a>), update a
     * <code>WebACL</code> (see <a>UpdateWebACL</a>), and delete a <code>WebACL</code>
     * from AWS WAF (see <a>DeleteWebACL</a>).</p> <p> <code>WebACLId</code> is
     * returned by <a>CreateWebACL</a> and by <a>ListWebACLs</a>.</p>
     */
    inline bool WebACLIdHasBeenSet() const { return m_webACLIdHasBeenSet; }

    /**
     * <p>A unique identifier for a <code>WebACL</code>. You use <code>WebACLId</code>
     * to get information about a <code>WebACL</code> (see <a>GetWebACL</a>), update a
     * <code>WebACL</code> (see <a>UpdateWebACL</a>), and delete a <code>WebACL</code>
     * from AWS WAF (see <a>DeleteWebACL</a>).</p> <p> <code>WebACLId</code> is
     * returned by <a>CreateWebACL</a> and by <a>ListWebACLs</a>.</p>
     */
    inline void SetWebACLId(const Aws::String& value) { m_webACLIdHasBeenSet = true; m_webACLId = value; }

    /**
     * <p>A unique identifier for a <code>WebACL</code>. You use <code>WebACLId</code>
     * to get information about a <code>WebACL</code> (see <a>GetWebACL</a>), update a
     * <code>WebACL</code> (see <a>UpdateWebACL</a>), and delete a <code>WebACL</code>
     * from AWS WAF (see <a>DeleteWebACL</a>).</p> <p> <code>WebACLId</code> is
     * returned by <a>CreateWebACL</a> and by <a>ListWebACLs</a>.</p>
     */
    inline void SetWebACLId(Aws::String&& value) { m_webACLIdHasBeenSet = true; m_webACLId = std::move(value); }

    /**
     * <p>A unique identifier for a <code>WebACL</code>. You use <code>WebACLId</code>
     * to get information about a <code>WebACL</code> (see <a>GetWebACL</a>), update a
     * <code>WebACL</code> (see <a>UpdateWebACL</a>), and delete a <code>WebACL</code>
     * from AWS WAF (see <a>DeleteWebACL</a>).</p> <p> <code>WebACLId</code> is
     * returned by <a>CreateWebACL</a> and by <a>ListWebACLs</a>.</p>
     */
    inline void SetWebACLId(const char* value) { m_webACLIdHasBeenSet = true; m_webACLId.assign(value); }

    /**
     * <p>A unique identifier for a <code>WebACL</code>. You use <code>WebACLId</code>
     * to get information about a <code>WebACL</code> (see <a>GetWebACL</a>), update a
     * <code>WebACL</code> (see <a>UpdateWebACL</a>), and delete a <code>WebACL</code>
     * from AWS WAF (see <a>DeleteWebACL</a>).</p> <p> <code>WebACLId</code> is
     * returned by <a>CreateWebACL</a> and by <a>ListWebACLs</a>.</p>
     */
    inline WebACL& WithWebACLId(const Aws::String& value) { SetWebACLId(value); return *this;}

    /**
     * <p>A unique identifier for a <code>WebACL</code>. You use <code>WebACLId</code>
     * to get information about a <code>WebACL</code> (see <a>GetWebACL</a>), update a
     * <code>WebACL</code> (see <a>UpdateWebACL</a>), and delete a <code>WebACL</code>
     * from AWS WAF (see <a>DeleteWebACL</a>).</p> <p> <code>WebACLId</code> is
     * returned by <a>CreateWebACL</a> and by <a>ListWebACLs</a>.</p>
     */
    inline WebACL& WithWebACLId(Aws::String&& value) { SetWebACLId(std::move(value)); return *this;}

    /**
     * <p>A unique identifier for a <code>WebACL</code>. You use <code>WebACLId</code>
     * to get information about a <code>WebACL</code> (see <a>GetWebACL</a>), update a
     * <code>WebACL</code> (see <a>UpdateWebACL</a>), and delete a <code>WebACL</code>
     * from AWS WAF (see <a>DeleteWebACL</a>).</p> <p> <code>WebACLId</code> is
     * returned by <a>CreateWebACL</a> and by <a>ListWebACLs</a>.</p>
     */
    inline WebACL& WithWebACLId(const char* value) { SetWebACLId(value); return *this;}


    /**
     * <p>A friendly name or description of the <code>WebACL</code>. You can't change
     * the name of a <code>WebACL</code> after you create it.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>A friendly name or description of the <code>WebACL</code>. You can't change
     * the name of a <code>WebACL</code> after you create it.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>A friendly name or description of the <code>WebACL</code>. You can't change
     * the name of a <code>WebACL</code> after you create it.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>A friendly name or description of the <code>WebACL</code>. You can't change
     * the name of a <code>WebACL</code> after you create it.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>A friendly name or description of the <code>WebACL</code>. You can't change
     * the name of a <code>WebACL</code> after you create it.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>A friendly name or description of the <code>WebACL</code>. You can't change
     * the name of a <code>WebACL</code> after you create it.</p>
     */
    inline WebACL& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>A friendly name or description of the <code>WebACL</code>. You can't change
     * the name of a <code>WebACL</code> after you create it.</p>
     */
    inline WebACL& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>A friendly name or description of the <code>WebACL</code>. You can't change
     * the name of a <code>WebACL</code> after you create it.</p>
     */
    inline WebACL& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>A friendly name or description for the metrics for this <code>WebACL</code>.
     * The name can contain only alphanumeric characters (A-Z, a-z, 0-9), with maximum
     * length 128 and minimum length one. It can't contain whitespace or metric names
     * reserved for AWS WAF, including "All" and "Default_Action." You can't change
     * <code>MetricName</code> after you create the <code>WebACL</code>.</p>
     */
    inline const Aws::String& GetMetricName() const{ return m_metricName; }

    /**
     * <p>A friendly name or description for the metrics for this <code>WebACL</code>.
     * The name can contain only alphanumeric characters (A-Z, a-z, 0-9), with maximum
     * length 128 and minimum length one. It can't contain whitespace or metric names
     * reserved for AWS WAF, including "All" and "Default_Action." You can't change
     * <code>MetricName</code> after you create the <code>WebACL</code>.</p>
     */
    inline bool MetricNameHasBeenSet() const { return m_metricNameHasBeenSet; }

    /**
     * <p>A friendly name or description for the metrics for this <code>WebACL</code>.
     * The name can contain only alphanumeric characters (A-Z, a-z, 0-9), with maximum
     * length 128 and minimum length one. It can't contain whitespace or metric names
     * reserved for AWS WAF, including "All" and "Default_Action." You can't change
     * <code>MetricName</code> after you create the <code>WebACL</code>.</p>
     */
    inline void SetMetricName(const Aws::String& value) { m_metricNameHasBeenSet = true; m_metricName = value; }

    /**
     * <p>A friendly name or description for the metrics for this <code>WebACL</code>.
     * The name can contain only alphanumeric characters (A-Z, a-z, 0-9), with maximum
     * length 128 and minimum length one. It can't contain whitespace or metric names
     * reserved for AWS WAF, including "All" and "Default_Action." You can't change
     * <code>MetricName</code> after you create the <code>WebACL</code>.</p>
     */
    inline void SetMetricName(Aws::String&& value) { m_metricNameHasBeenSet = true; m_metricName = std::move(value); }

    /**
     * <p>A friendly name or description for the metrics for this <code>WebACL</code>.
     * The name can contain only alphanumeric characters (A-Z, a-z, 0-9), with maximum
     * length 128 and minimum length one. It can't contain whitespace or metric names
     * reserved for AWS WAF, including "All" and "Default_Action." You can't change
     * <code>MetricName</code> after you create the <code>WebACL</code>.</p>
     */
    inline void SetMetricName(const char* value) { m_metricNameHasBeenSet = true; m_metricName.assign(value); }

    /**
     * <p>A friendly name or description for the metrics for this <code>WebACL</code>.
     * The name can contain only alphanumeric characters (A-Z, a-z, 0-9), with maximum
     * length 128 and minimum length one. It can't contain whitespace or metric names
     * reserved for AWS WAF, including "All" and "Default_Action." You can't change
     * <code>MetricName</code> after you create the <code>WebACL</code>.</p>
     */
    inline WebACL& WithMetricName(const Aws::String& value) { SetMetricName(value); return *this;}

    /**
     * <p>A friendly name or description for the metrics for this <code>WebACL</code>.
     * The name can contain only alphanumeric characters (A-Z, a-z, 0-9), with maximum
     * length 128 and minimum length one. It can't contain whitespace or metric names
     * reserved for AWS WAF, including "All" and "Default_Action." You can't change
     * <code>MetricName</code> after you create the <code>WebACL</code>.</p>
     */
    inline WebACL& WithMetricName(Aws::String&& value) { SetMetricName(std::move(value)); return *this;}

    /**
     * <p>A friendly name or description for the metrics for this <code>WebACL</code>.
     * The name can contain only alphanumeric characters (A-Z, a-z, 0-9), with maximum
     * length 128 and minimum length one. It can't contain whitespace or metric names
     * reserved for AWS WAF, including "All" and "Default_Action." You can't change
     * <code>MetricName</code> after you create the <code>WebACL</code>.</p>
     */
    inline WebACL& WithMetricName(const char* value) { SetMetricName(value); return *this;}


    /**
     * <p>The action to perform if none of the <code>Rules</code> contained in the
     * <code>WebACL</code> match. The action is specified by the <a>WafAction</a>
     * object.</p>
     */
    inline const WafAction& GetDefaultAction() const{ return m_defaultAction; }

    /**
     * <p>The action to perform if none of the <code>Rules</code> contained in the
     * <code>WebACL</code> match. The action is specified by the <a>WafAction</a>
     * object.</p>
     */
    inline bool DefaultActionHasBeenSet() const { return m_defaultActionHasBeenSet; }

    /**
     * <p>The action to perform if none of the <code>Rules</code> contained in the
     * <code>WebACL</code> match. The action is specified by the <a>WafAction</a>
     * object.</p>
     */
    inline void SetDefaultAction(const WafAction& value) { m_defaultActionHasBeenSet = true; m_defaultAction = value; }

    /**
     * <p>The action to perform if none of the <code>Rules</code> contained in the
     * <code>WebACL</code> match. The action is specified by the <a>WafAction</a>
     * object.</p>
     */
    inline void SetDefaultAction(WafAction&& value) { m_defaultActionHasBeenSet = true; m_defaultAction = std::move(value); }

    /**
     * <p>The action to perform if none of the <code>Rules</code> contained in the
     * <code>WebACL</code> match. The action is specified by the <a>WafAction</a>
     * object.</p>
     */
    inline WebACL& WithDefaultAction(const WafAction& value) { SetDefaultAction(value); return *this;}

    /**
     * <p>The action to perform if none of the <code>Rules</code> contained in the
     * <code>WebACL</code> match. The action is specified by the <a>WafAction</a>
     * object.</p>
     */
    inline WebACL& WithDefaultAction(WafAction&& value) { SetDefaultAction(std::move(value)); return *this;}


    /**
     * <p>An array that contains the action for each <code>Rule</code> in a
     * <code>WebACL</code>, the priority of the <code>Rule</code>, and the ID of the
     * <code>Rule</code>.</p>
     */
    inline const Aws::Vector<ActivatedRule>& GetRules() const{ return m_rules; }

    /**
     * <p>An array that contains the action for each <code>Rule</code> in a
     * <code>WebACL</code>, the priority of the <code>Rule</code>, and the ID of the
     * <code>Rule</code>.</p>
     */
    inline bool RulesHasBeenSet() const { return m_rulesHasBeenSet; }

    /**
     * <p>An array that contains the action for each <code>Rule</code> in a
     * <code>WebACL</code>, the priority of the <code>Rule</code>, and the ID of the
     * <code>Rule</code>.</p>
     */
    inline void SetRules(const Aws::Vector<ActivatedRule>& value) { m_rulesHasBeenSet = true; m_rules = value; }

    /**
     * <p>An array that contains the action for each <code>Rule</code> in a
     * <code>WebACL</code>, the priority of the <code>Rule</code>, and the ID of the
     * <code>Rule</code>.</p>
     */
    inline void SetRules(Aws::Vector<ActivatedRule>&& value) { m_rulesHasBeenSet = true; m_rules = std::move(value); }

    /**
     * <p>An array that contains the action for each <code>Rule</code> in a
     * <code>WebACL</code>, the priority of the <code>Rule</code>, and the ID of the
     * <code>Rule</code>.</p>
     */
    inline WebACL& WithRules(const Aws::Vector<ActivatedRule>& value) { SetRules(value); return *this;}

    /**
     * <p>An array that contains the action for each <code>Rule</code> in a
     * <code>WebACL</code>, the priority of the <code>Rule</code>, and the ID of the
     * <code>Rule</code>.</p>
     */
    inline WebACL& WithRules(Aws::Vector<ActivatedRule>&& value) { SetRules(std::move(value)); return *this;}

    /**
     * <p>An array that contains the action for each <code>Rule</code> in a
     * <code>WebACL</code>, the priority of the <code>Rule</code>, and the ID of the
     * <code>Rule</code>.</p>
     */
    inline WebACL& AddRules(const ActivatedRule& value) { m_rulesHasBeenSet = true; m_rules.push_back(value); return *this; }

    /**
     * <p>An array that contains the action for each <code>Rule</code> in a
     * <code>WebACL</code>, the priority of the <code>Rule</code>, and the ID of the
     * <code>Rule</code>.</p>
     */
    inline WebACL& AddRules(ActivatedRule&& value) { m_rulesHasBeenSet = true; m_rules.push_back(std::move(value)); return *this; }


    /**
     * <p>Tha Amazon Resource Name (ARN) of the web ACL.</p>
     */
    inline const Aws::String& GetWebACLArn() const{ return m_webACLArn; }

    /**
     * <p>Tha Amazon Resource Name (ARN) of the web ACL.</p>
     */
    inline bool WebACLArnHasBeenSet() const { return m_webACLArnHasBeenSet; }

    /**
     * <p>Tha Amazon Resource Name (ARN) of the web ACL.</p>
     */
    inline void SetWebACLArn(const Aws::String& value) { m_webACLArnHasBeenSet = true; m_webACLArn = value; }

    /**
     * <p>Tha Amazon Resource Name (ARN) of the web ACL.</p>
     */
    inline void SetWebACLArn(Aws::String&& value) { m_webACLArnHasBeenSet = true; m_webACLArn = std::move(value); }

    /**
     * <p>Tha Amazon Resource Name (ARN) of the web ACL.</p>
     */
    inline void SetWebACLArn(const char* value) { m_webACLArnHasBeenSet = true; m_webACLArn.assign(value); }

    /**
     * <p>Tha Amazon Resource Name (ARN) of the web ACL.</p>
     */
    inline WebACL& WithWebACLArn(const Aws::String& value) { SetWebACLArn(value); return *this;}

    /**
     * <p>Tha Amazon Resource Name (ARN) of the web ACL.</p>
     */
    inline WebACL& WithWebACLArn(Aws::String&& value) { SetWebACLArn(std::move(value)); return *this;}

    /**
     * <p>Tha Amazon Resource Name (ARN) of the web ACL.</p>
     */
    inline WebACL& WithWebACLArn(const char* value) { SetWebACLArn(value); return *this;}

  private:

    Aws::String m_webACLId;
    bool m_webACLIdHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_metricName;
    bool m_metricNameHasBeenSet = false;

    WafAction m_defaultAction;
    bool m_defaultActionHasBeenSet = false;

    Aws::Vector<ActivatedRule> m_rules;
    bool m_rulesHasBeenSet = false;

    Aws::String m_webACLArn;
    bool m_webACLArnHasBeenSet = false;
  };

} // namespace Model
} // namespace WAF
} // namespace Aws
