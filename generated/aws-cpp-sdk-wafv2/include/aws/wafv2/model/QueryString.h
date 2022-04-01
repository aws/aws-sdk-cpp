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
   * <p>Inspect the query string of the web request. This is the part of a URL that
   * appears after a <code>?</code> character, if any.</p> <p>This is used only in
   * the <a>FieldToMatch</a> specification for some web request component types. </p>
   * <p>JSON specification: <code>"QueryString": {}</code> </p><p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/wafv2-2019-07-29/QueryString">AWS
   * API Reference</a></p>
   */
  class AWS_WAFV2_API QueryString
  {
  public:
    QueryString();
    QueryString(Aws::Utils::Json::JsonView jsonValue);
    QueryString& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

  };

} // namespace Model
} // namespace WAFV2
} // namespace Aws
