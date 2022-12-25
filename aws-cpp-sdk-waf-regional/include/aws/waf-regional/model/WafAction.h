/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/waf-regional/WAFRegional_EXPORTS.h>
#include <aws/waf-regional/model/WafActionType.h>
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
namespace WAFRegional
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
   * endpoints for regional and global use. </p>  <p>For the action that is
   * associated with a rule in a <code>WebACL</code>, specifies the action that you
   * want AWS WAF to perform when a web request matches all of the conditions in a
   * rule. For the default action in a <code>WebACL</code>, specifies the action that
   * you want AWS WAF to take when a web request doesn't match all of the conditions
   * in any of the rules in a <code>WebACL</code>. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/waf-regional-2016-11-28/WafAction">AWS
   * API Reference</a></p>
   */
  class WafAction
  {
  public:
    AWS_WAFREGIONAL_API WafAction();
    AWS_WAFREGIONAL_API WafAction(Aws::Utils::Json::JsonView jsonValue);
    AWS_WAFREGIONAL_API WafAction& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WAFREGIONAL_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Specifies how you want AWS WAF to respond to requests that match the settings
     * in a <code>Rule</code>. Valid settings include the following:</p> <ul> <li> <p>
     * <code>ALLOW</code>: AWS WAF allows requests</p> </li> <li> <p>
     * <code>BLOCK</code>: AWS WAF blocks requests</p> </li> <li> <p>
     * <code>COUNT</code>: AWS WAF increments a counter of the requests that match all
     * of the conditions in the rule. AWS WAF then continues to inspect the web request
     * based on the remaining rules in the web ACL. You can't specify
     * <code>COUNT</code> for the default action for a <code>WebACL</code>.</p> </li>
     * </ul>
     */
    inline const WafActionType& GetType() const{ return m_type; }

    /**
     * <p>Specifies how you want AWS WAF to respond to requests that match the settings
     * in a <code>Rule</code>. Valid settings include the following:</p> <ul> <li> <p>
     * <code>ALLOW</code>: AWS WAF allows requests</p> </li> <li> <p>
     * <code>BLOCK</code>: AWS WAF blocks requests</p> </li> <li> <p>
     * <code>COUNT</code>: AWS WAF increments a counter of the requests that match all
     * of the conditions in the rule. AWS WAF then continues to inspect the web request
     * based on the remaining rules in the web ACL. You can't specify
     * <code>COUNT</code> for the default action for a <code>WebACL</code>.</p> </li>
     * </ul>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>Specifies how you want AWS WAF to respond to requests that match the settings
     * in a <code>Rule</code>. Valid settings include the following:</p> <ul> <li> <p>
     * <code>ALLOW</code>: AWS WAF allows requests</p> </li> <li> <p>
     * <code>BLOCK</code>: AWS WAF blocks requests</p> </li> <li> <p>
     * <code>COUNT</code>: AWS WAF increments a counter of the requests that match all
     * of the conditions in the rule. AWS WAF then continues to inspect the web request
     * based on the remaining rules in the web ACL. You can't specify
     * <code>COUNT</code> for the default action for a <code>WebACL</code>.</p> </li>
     * </ul>
     */
    inline void SetType(const WafActionType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>Specifies how you want AWS WAF to respond to requests that match the settings
     * in a <code>Rule</code>. Valid settings include the following:</p> <ul> <li> <p>
     * <code>ALLOW</code>: AWS WAF allows requests</p> </li> <li> <p>
     * <code>BLOCK</code>: AWS WAF blocks requests</p> </li> <li> <p>
     * <code>COUNT</code>: AWS WAF increments a counter of the requests that match all
     * of the conditions in the rule. AWS WAF then continues to inspect the web request
     * based on the remaining rules in the web ACL. You can't specify
     * <code>COUNT</code> for the default action for a <code>WebACL</code>.</p> </li>
     * </ul>
     */
    inline void SetType(WafActionType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>Specifies how you want AWS WAF to respond to requests that match the settings
     * in a <code>Rule</code>. Valid settings include the following:</p> <ul> <li> <p>
     * <code>ALLOW</code>: AWS WAF allows requests</p> </li> <li> <p>
     * <code>BLOCK</code>: AWS WAF blocks requests</p> </li> <li> <p>
     * <code>COUNT</code>: AWS WAF increments a counter of the requests that match all
     * of the conditions in the rule. AWS WAF then continues to inspect the web request
     * based on the remaining rules in the web ACL. You can't specify
     * <code>COUNT</code> for the default action for a <code>WebACL</code>.</p> </li>
     * </ul>
     */
    inline WafAction& WithType(const WafActionType& value) { SetType(value); return *this;}

    /**
     * <p>Specifies how you want AWS WAF to respond to requests that match the settings
     * in a <code>Rule</code>. Valid settings include the following:</p> <ul> <li> <p>
     * <code>ALLOW</code>: AWS WAF allows requests</p> </li> <li> <p>
     * <code>BLOCK</code>: AWS WAF blocks requests</p> </li> <li> <p>
     * <code>COUNT</code>: AWS WAF increments a counter of the requests that match all
     * of the conditions in the rule. AWS WAF then continues to inspect the web request
     * based on the remaining rules in the web ACL. You can't specify
     * <code>COUNT</code> for the default action for a <code>WebACL</code>.</p> </li>
     * </ul>
     */
    inline WafAction& WithType(WafActionType&& value) { SetType(std::move(value)); return *this;}

  private:

    WafActionType m_type;
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace WAFRegional
} // namespace Aws
