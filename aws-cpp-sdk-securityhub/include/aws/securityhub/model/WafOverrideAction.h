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
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>Details about an override action for a rule.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/WafOverrideAction">AWS
   * API Reference</a></p>
   */
  class AWS_SECURITYHUB_API WafOverrideAction
  {
  public:
    WafOverrideAction();
    WafOverrideAction(Aws::Utils::Json::JsonView jsonValue);
    WafOverrideAction& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> <code>COUNT</code> overrides the action specified by the individual rule
     * within a RuleGroup .</p> <p>If set to <code>NONE</code>, the rule's action takes
     * place.</p>
     */
    inline const Aws::String& GetType() const{ return m_type; }

    /**
     * <p> <code>COUNT</code> overrides the action specified by the individual rule
     * within a RuleGroup .</p> <p>If set to <code>NONE</code>, the rule's action takes
     * place.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p> <code>COUNT</code> overrides the action specified by the individual rule
     * within a RuleGroup .</p> <p>If set to <code>NONE</code>, the rule's action takes
     * place.</p>
     */
    inline void SetType(const Aws::String& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p> <code>COUNT</code> overrides the action specified by the individual rule
     * within a RuleGroup .</p> <p>If set to <code>NONE</code>, the rule's action takes
     * place.</p>
     */
    inline void SetType(Aws::String&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p> <code>COUNT</code> overrides the action specified by the individual rule
     * within a RuleGroup .</p> <p>If set to <code>NONE</code>, the rule's action takes
     * place.</p>
     */
    inline void SetType(const char* value) { m_typeHasBeenSet = true; m_type.assign(value); }

    /**
     * <p> <code>COUNT</code> overrides the action specified by the individual rule
     * within a RuleGroup .</p> <p>If set to <code>NONE</code>, the rule's action takes
     * place.</p>
     */
    inline WafOverrideAction& WithType(const Aws::String& value) { SetType(value); return *this;}

    /**
     * <p> <code>COUNT</code> overrides the action specified by the individual rule
     * within a RuleGroup .</p> <p>If set to <code>NONE</code>, the rule's action takes
     * place.</p>
     */
    inline WafOverrideAction& WithType(Aws::String&& value) { SetType(std::move(value)); return *this;}

    /**
     * <p> <code>COUNT</code> overrides the action specified by the individual rule
     * within a RuleGroup .</p> <p>If set to <code>NONE</code>, the rule's action takes
     * place.</p>
     */
    inline WafOverrideAction& WithType(const char* value) { SetType(value); return *this;}

  private:

    Aws::String m_type;
    bool m_typeHasBeenSet;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
