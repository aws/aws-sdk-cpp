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
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ssm/model/PatchRule.h>
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
namespace SSM
{
namespace Model
{

  /**
   * <p>A set of rules defining the approval rules for a patch
   * baseline.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/PatchRuleGroup">AWS
   * API Reference</a></p>
   */
  class AWS_SSM_API PatchRuleGroup
  {
  public:
    PatchRuleGroup();
    PatchRuleGroup(Aws::Utils::Json::JsonView jsonValue);
    PatchRuleGroup& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The rules that make up the rule group.</p>
     */
    inline const Aws::Vector<PatchRule>& GetPatchRules() const{ return m_patchRules; }

    /**
     * <p>The rules that make up the rule group.</p>
     */
    inline void SetPatchRules(const Aws::Vector<PatchRule>& value) { m_patchRulesHasBeenSet = true; m_patchRules = value; }

    /**
     * <p>The rules that make up the rule group.</p>
     */
    inline void SetPatchRules(Aws::Vector<PatchRule>&& value) { m_patchRulesHasBeenSet = true; m_patchRules = std::move(value); }

    /**
     * <p>The rules that make up the rule group.</p>
     */
    inline PatchRuleGroup& WithPatchRules(const Aws::Vector<PatchRule>& value) { SetPatchRules(value); return *this;}

    /**
     * <p>The rules that make up the rule group.</p>
     */
    inline PatchRuleGroup& WithPatchRules(Aws::Vector<PatchRule>&& value) { SetPatchRules(std::move(value)); return *this;}

    /**
     * <p>The rules that make up the rule group.</p>
     */
    inline PatchRuleGroup& AddPatchRules(const PatchRule& value) { m_patchRulesHasBeenSet = true; m_patchRules.push_back(value); return *this; }

    /**
     * <p>The rules that make up the rule group.</p>
     */
    inline PatchRuleGroup& AddPatchRules(PatchRule&& value) { m_patchRulesHasBeenSet = true; m_patchRules.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<PatchRule> m_patchRules;
    bool m_patchRulesHasBeenSet;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
