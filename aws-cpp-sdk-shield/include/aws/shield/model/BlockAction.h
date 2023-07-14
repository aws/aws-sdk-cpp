/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/shield/Shield_EXPORTS.h>

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
namespace Shield
{
namespace Model
{

  /**
   * <p>Specifies that Shield Advanced should configure its WAF rules with the WAF
   * <code>Block</code> action. </p> <p>This is only used in the context of the
   * <code>ResponseAction</code> setting. </p> <p>JSON specification: <code>"Block":
   * {}</code> </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/shield-2016-06-02/BlockAction">AWS
   * API Reference</a></p>
   */
  class AWS_SHIELD_API BlockAction
  {
  public:
    BlockAction();
    BlockAction(Aws::Utils::Json::JsonView jsonValue);
    BlockAction& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

  };

} // namespace Model
} // namespace Shield
} // namespace Aws
