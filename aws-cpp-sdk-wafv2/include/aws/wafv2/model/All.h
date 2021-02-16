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
   * <p>Inspect all of the elements that AWS WAF has parsed and extracted from the
   * web request JSON body that are within the <a>JsonBody</a>
   * <code>MatchScope</code>. This is used with the <a>FieldToMatch</a> option
   * <code>JsonBody</code>. </p> <p>This is used only to indicate the web request
   * component for AWS WAF to inspect, in the <a>FieldToMatch</a> specification.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/wafv2-2019-07-29/All">AWS API
   * Reference</a></p>
   */
  class AWS_WAFV2_API All
  {
  public:
    All();
    All(Aws::Utils::Json::JsonView jsonValue);
    All& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

  };

} // namespace Model
} // namespace WAFV2
} // namespace Aws
