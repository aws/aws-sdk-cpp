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
   * <p>Inspect all of the elements that WAF has parsed and extracted from the web
   * request component that you've identified in your <a>FieldToMatch</a>
   * specifications. </p> <p>This is used only in the <a>FieldToMatch</a>
   * specification for some web request component types. </p> <p>JSON specification:
   * <code>"All": {}</code> </p><p><h3>See Also:</h3>   <a
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
