/**
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
   * <p>Specifies that WAF should do nothing. This is used for the
   * <code>OverrideAction</code> setting on a <a>Rule</a> when the rule uses a rule
   * group reference statement. </p> <p>This is used in the context of other
   * settings, for example to specify values for <a>RuleAction</a> and web ACL
   * <a>DefaultAction</a>. </p> <p>JSON specification: <code>"None": {}</code>
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/wafv2-2019-07-29/NoneAction">AWS
   * API Reference</a></p>
   */
  class NoneAction
  {
  public:
    AWS_WAFV2_API NoneAction();
    AWS_WAFV2_API NoneAction(Aws::Utils::Json::JsonView jsonValue);
    AWS_WAFV2_API NoneAction& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WAFV2_API Aws::Utils::Json::JsonValue Jsonize() const;

  };

} // namespace Model
} // namespace WAFV2
} // namespace Aws
