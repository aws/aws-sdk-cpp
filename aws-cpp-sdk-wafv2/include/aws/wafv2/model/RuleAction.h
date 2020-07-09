/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wafv2/WAFV2_EXPORTS.h>
#include <aws/wafv2/model/BlockAction.h>
#include <aws/wafv2/model/AllowAction.h>
#include <aws/wafv2/model/CountAction.h>
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
   *  <p>This is the latest version of <b>AWS WAF</b>, named AWS WAFV2,
   * released in November, 2019. For information, including how to migrate your AWS
   * WAF resources from the prior release, see the <a
   * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-chapter.html">AWS
   * WAF Developer Guide</a>. </p>  <p>The action that AWS WAF should take on
   * a web request when it matches a rule's statement. Settings at the web ACL level
   * can override the rule action setting. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/wafv2-2019-07-29/RuleAction">AWS
   * API Reference</a></p>
   */
  class AWS_WAFV2_API RuleAction
  {
  public:
    RuleAction();
    RuleAction(Aws::Utils::Json::JsonView jsonValue);
    RuleAction& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Instructs AWS WAF to block the web request.</p>
     */
    inline const BlockAction& GetBlock() const{ return m_block; }

    /**
     * <p>Instructs AWS WAF to block the web request.</p>
     */
    inline bool BlockHasBeenSet() const { return m_blockHasBeenSet; }

    /**
     * <p>Instructs AWS WAF to block the web request.</p>
     */
    inline void SetBlock(const BlockAction& value) { m_blockHasBeenSet = true; m_block = value; }

    /**
     * <p>Instructs AWS WAF to block the web request.</p>
     */
    inline void SetBlock(BlockAction&& value) { m_blockHasBeenSet = true; m_block = std::move(value); }

    /**
     * <p>Instructs AWS WAF to block the web request.</p>
     */
    inline RuleAction& WithBlock(const BlockAction& value) { SetBlock(value); return *this;}

    /**
     * <p>Instructs AWS WAF to block the web request.</p>
     */
    inline RuleAction& WithBlock(BlockAction&& value) { SetBlock(std::move(value)); return *this;}


    /**
     * <p>Instructs AWS WAF to allow the web request.</p>
     */
    inline const AllowAction& GetAllow() const{ return m_allow; }

    /**
     * <p>Instructs AWS WAF to allow the web request.</p>
     */
    inline bool AllowHasBeenSet() const { return m_allowHasBeenSet; }

    /**
     * <p>Instructs AWS WAF to allow the web request.</p>
     */
    inline void SetAllow(const AllowAction& value) { m_allowHasBeenSet = true; m_allow = value; }

    /**
     * <p>Instructs AWS WAF to allow the web request.</p>
     */
    inline void SetAllow(AllowAction&& value) { m_allowHasBeenSet = true; m_allow = std::move(value); }

    /**
     * <p>Instructs AWS WAF to allow the web request.</p>
     */
    inline RuleAction& WithAllow(const AllowAction& value) { SetAllow(value); return *this;}

    /**
     * <p>Instructs AWS WAF to allow the web request.</p>
     */
    inline RuleAction& WithAllow(AllowAction&& value) { SetAllow(std::move(value)); return *this;}


    /**
     * <p>Instructs AWS WAF to count the web request and allow it.</p>
     */
    inline const CountAction& GetCount() const{ return m_count; }

    /**
     * <p>Instructs AWS WAF to count the web request and allow it.</p>
     */
    inline bool CountHasBeenSet() const { return m_countHasBeenSet; }

    /**
     * <p>Instructs AWS WAF to count the web request and allow it.</p>
     */
    inline void SetCount(const CountAction& value) { m_countHasBeenSet = true; m_count = value; }

    /**
     * <p>Instructs AWS WAF to count the web request and allow it.</p>
     */
    inline void SetCount(CountAction&& value) { m_countHasBeenSet = true; m_count = std::move(value); }

    /**
     * <p>Instructs AWS WAF to count the web request and allow it.</p>
     */
    inline RuleAction& WithCount(const CountAction& value) { SetCount(value); return *this;}

    /**
     * <p>Instructs AWS WAF to count the web request and allow it.</p>
     */
    inline RuleAction& WithCount(CountAction&& value) { SetCount(std::move(value)); return *this;}

  private:

    BlockAction m_block;
    bool m_blockHasBeenSet;

    AllowAction m_allow;
    bool m_allowHasBeenSet;

    CountAction m_count;
    bool m_countHasBeenSet;
  };

} // namespace Model
} // namespace WAFV2
} // namespace Aws
