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
#include <aws/wafv2/WAFV2_EXPORTS.h>
#include <aws/wafv2/model/CountAction.h>
#include <aws/wafv2/model/NoneAction.h>
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
namespace WAFV2
{
namespace Model
{

  /**
   * <note> <p>This is the latest version of <b>AWS WAF</b>, named AWS WAFV2,
   * released in November, 2019. For information, including how to migrate your AWS
   * WAF resources from the prior release, see the <a
   * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-chapter.html">AWS
   * WAF Developer Guide</a>. </p> </note> <p>The action to use to override the
   * rule's <code>Action</code> setting. You can use no override action, in which
   * case the rule action is in effect, or count, in which case, if the rule matches
   * a web request, it only counts the match.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/wafv2-2019-07-29/OverrideAction">AWS
   * API Reference</a></p>
   */
  class AWS_WAFV2_API OverrideAction
  {
  public:
    OverrideAction();
    OverrideAction(Aws::Utils::Json::JsonView jsonValue);
    OverrideAction& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Override the rule action setting to count.</p>
     */
    inline const CountAction& GetCount() const{ return m_count; }

    /**
     * <p>Override the rule action setting to count.</p>
     */
    inline bool CountHasBeenSet() const { return m_countHasBeenSet; }

    /**
     * <p>Override the rule action setting to count.</p>
     */
    inline void SetCount(const CountAction& value) { m_countHasBeenSet = true; m_count = value; }

    /**
     * <p>Override the rule action setting to count.</p>
     */
    inline void SetCount(CountAction&& value) { m_countHasBeenSet = true; m_count = std::move(value); }

    /**
     * <p>Override the rule action setting to count.</p>
     */
    inline OverrideAction& WithCount(const CountAction& value) { SetCount(value); return *this;}

    /**
     * <p>Override the rule action setting to count.</p>
     */
    inline OverrideAction& WithCount(CountAction&& value) { SetCount(std::move(value)); return *this;}


    /**
     * <p>Don't override the rule action setting.</p>
     */
    inline const NoneAction& GetNone() const{ return m_none; }

    /**
     * <p>Don't override the rule action setting.</p>
     */
    inline bool NoneHasBeenSet() const { return m_noneHasBeenSet; }

    /**
     * <p>Don't override the rule action setting.</p>
     */
    inline void SetNone(const NoneAction& value) { m_noneHasBeenSet = true; m_none = value; }

    /**
     * <p>Don't override the rule action setting.</p>
     */
    inline void SetNone(NoneAction&& value) { m_noneHasBeenSet = true; m_none = std::move(value); }

    /**
     * <p>Don't override the rule action setting.</p>
     */
    inline OverrideAction& WithNone(const NoneAction& value) { SetNone(value); return *this;}

    /**
     * <p>Don't override the rule action setting.</p>
     */
    inline OverrideAction& WithNone(NoneAction&& value) { SetNone(std::move(value)); return *this;}

  private:

    CountAction m_count;
    bool m_countHasBeenSet;

    NoneAction m_none;
    bool m_noneHasBeenSet;
  };

} // namespace Model
} // namespace WAFV2
} // namespace Aws
