/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wafv2/WAFV2_EXPORTS.h>
#include <aws/wafv2/model/BlockAction.h>
#include <aws/wafv2/model/AllowAction.h>
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
   * <p>In a <a>WebACL</a>, this is the action that you want WAF to perform when a
   * web request doesn't match any of the rules in the <code>WebACL</code>. The
   * default action must be a terminating action.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/wafv2-2019-07-29/DefaultAction">AWS
   * API Reference</a></p>
   */
  class DefaultAction
  {
  public:
    AWS_WAFV2_API DefaultAction();
    AWS_WAFV2_API DefaultAction(Aws::Utils::Json::JsonView jsonValue);
    AWS_WAFV2_API DefaultAction& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WAFV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Specifies that WAF should block requests by default. </p>
     */
    inline const BlockAction& GetBlock() const{ return m_block; }

    /**
     * <p>Specifies that WAF should block requests by default. </p>
     */
    inline bool BlockHasBeenSet() const { return m_blockHasBeenSet; }

    /**
     * <p>Specifies that WAF should block requests by default. </p>
     */
    inline void SetBlock(const BlockAction& value) { m_blockHasBeenSet = true; m_block = value; }

    /**
     * <p>Specifies that WAF should block requests by default. </p>
     */
    inline void SetBlock(BlockAction&& value) { m_blockHasBeenSet = true; m_block = std::move(value); }

    /**
     * <p>Specifies that WAF should block requests by default. </p>
     */
    inline DefaultAction& WithBlock(const BlockAction& value) { SetBlock(value); return *this;}

    /**
     * <p>Specifies that WAF should block requests by default. </p>
     */
    inline DefaultAction& WithBlock(BlockAction&& value) { SetBlock(std::move(value)); return *this;}


    /**
     * <p>Specifies that WAF should allow requests by default.</p>
     */
    inline const AllowAction& GetAllow() const{ return m_allow; }

    /**
     * <p>Specifies that WAF should allow requests by default.</p>
     */
    inline bool AllowHasBeenSet() const { return m_allowHasBeenSet; }

    /**
     * <p>Specifies that WAF should allow requests by default.</p>
     */
    inline void SetAllow(const AllowAction& value) { m_allowHasBeenSet = true; m_allow = value; }

    /**
     * <p>Specifies that WAF should allow requests by default.</p>
     */
    inline void SetAllow(AllowAction&& value) { m_allowHasBeenSet = true; m_allow = std::move(value); }

    /**
     * <p>Specifies that WAF should allow requests by default.</p>
     */
    inline DefaultAction& WithAllow(const AllowAction& value) { SetAllow(value); return *this;}

    /**
     * <p>Specifies that WAF should allow requests by default.</p>
     */
    inline DefaultAction& WithAllow(AllowAction&& value) { SetAllow(std::move(value)); return *this;}

  private:

    BlockAction m_block;
    bool m_blockHasBeenSet = false;

    AllowAction m_allow;
    bool m_allowHasBeenSet = false;
  };

} // namespace Model
} // namespace WAFV2
} // namespace Aws
