/*
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
#include <aws/waf/model/WafActionType.h>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace WAF
{
namespace Model
{

  /**
   * <p>For the action that is associated with a rule in a <code>WebACL</code>,
   * specifies the action that you want AWS WAF to perform when a web request matches
   * all of the conditions in a rule. For the default action in a
   * <code>WebACL</code>, specifies the action that you want AWS WAF to take when a
   * web request doesn't match all of the conditions in any of the rules in a
   * <code>WebACL</code>. </p>
   */
  class AWS_WAF_API WafAction
  {
  public:
    WafAction();
    WafAction(const Aws::Utils::Json::JsonValue& jsonValue);
    WafAction& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

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
    inline void SetType(WafActionType&& value) { m_typeHasBeenSet = true; m_type = value; }

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
    inline WafAction& WithType(WafActionType&& value) { SetType(value); return *this;}

  private:
    WafActionType m_type;
    bool m_typeHasBeenSet;
  };

} // namespace Model
} // namespace WAF
} // namespace Aws
