﻿/*
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
#include <aws/waf/WAF_EXPORTS.h>
#include <aws/waf/model/WafOverrideActionType.h>
#include <utility>

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
   * <p>The action to take if any rule within the <code>RuleGroup</code> matches a
   * request. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/waf-2015-08-24/WafOverrideAction">AWS
   * API Reference</a></p>
   */
  class AWS_WAF_API WafOverrideAction
  {
  public:
    WafOverrideAction();
    WafOverrideAction(const Aws::Utils::Json::JsonValue& jsonValue);
    WafOverrideAction& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> <code>COUNT</code> overrides the action specified by the individual rule
     * within a <code>RuleGroup</code> . If set to <code>NONE</code>, the rule's action
     * will take place.</p>
     */
    inline const WafOverrideActionType& GetType() const{ return m_type; }

    /**
     * <p> <code>COUNT</code> overrides the action specified by the individual rule
     * within a <code>RuleGroup</code> . If set to <code>NONE</code>, the rule's action
     * will take place.</p>
     */
    inline void SetType(const WafOverrideActionType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p> <code>COUNT</code> overrides the action specified by the individual rule
     * within a <code>RuleGroup</code> . If set to <code>NONE</code>, the rule's action
     * will take place.</p>
     */
    inline void SetType(WafOverrideActionType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p> <code>COUNT</code> overrides the action specified by the individual rule
     * within a <code>RuleGroup</code> . If set to <code>NONE</code>, the rule's action
     * will take place.</p>
     */
    inline WafOverrideAction& WithType(const WafOverrideActionType& value) { SetType(value); return *this;}

    /**
     * <p> <code>COUNT</code> overrides the action specified by the individual rule
     * within a <code>RuleGroup</code> . If set to <code>NONE</code>, the rule's action
     * will take place.</p>
     */
    inline WafOverrideAction& WithType(WafOverrideActionType&& value) { SetType(std::move(value)); return *this;}

  private:

    WafOverrideActionType m_type;
    bool m_typeHasBeenSet;
  };

} // namespace Model
} // namespace WAF
} // namespace Aws
