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
   * <code>Count</code> action. </p> <p>This is only used in the context of the
   * <code>ResponseAction</code> setting. </p> <p>JSON specification: <code>"Count":
   * {}</code> </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/shield-2016-06-02/CountAction">AWS
   * API Reference</a></p>
   */
  class CountAction
  {
  public:
    AWS_SHIELD_API CountAction();
    AWS_SHIELD_API CountAction(Aws::Utils::Json::JsonView jsonValue);
    AWS_SHIELD_API CountAction& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SHIELD_API Aws::Utils::Json::JsonValue Jsonize() const;

  };

} // namespace Model
} // namespace Shield
} // namespace Aws
