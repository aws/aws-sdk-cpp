/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>

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
namespace Connect
{
namespace Model
{

  /**
   * <p>An empty value.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/EmptyFieldValue">AWS
   * API Reference</a></p>
   */
  class EmptyFieldValue
  {
  public:
    AWS_CONNECT_API EmptyFieldValue();
    AWS_CONNECT_API EmptyFieldValue(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API EmptyFieldValue& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;

  };

} // namespace Model
} // namespace Connect
} // namespace Aws
