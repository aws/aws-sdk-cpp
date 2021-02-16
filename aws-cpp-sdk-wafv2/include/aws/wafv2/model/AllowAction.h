﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wafv2/WAFV2_EXPORTS.h>

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
   * <p>Specifies that AWS WAF should allow requests.</p> <p>This is used only in the
   * context of other settings, for example to specify values for <a>RuleAction</a>
   * and web ACL <a>DefaultAction</a>. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/wafv2-2019-07-29/AllowAction">AWS
   * API Reference</a></p>
   */
  class AWS_WAFV2_API AllowAction
  {
  public:
    AllowAction();
    AllowAction(Aws::Utils::Json::JsonView jsonValue);
    AllowAction& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

  };

} // namespace Model
} // namespace WAFV2
} // namespace Aws
