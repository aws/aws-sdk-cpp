/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connectcases/ConnectCases_EXPORTS.h>

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
namespace ConnectCases
{
namespace Model
{

  /**
   * <p>Represents an empty operand value. In the Amazon Connect admin website, case
   * rules are known as <i>case field conditions</i>. For more information about case
   * field conditions, see <a
   * href="https://docs.aws.amazon.com/connect/latest/adminguide/case-field-conditions.html">Add
   * case field conditions to a case template</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connectcases-2022-10-03/EmptyOperandValue">AWS
   * API Reference</a></p>
   */
  class EmptyOperandValue
  {
  public:
    AWS_CONNECTCASES_API EmptyOperandValue() = default;
    AWS_CONNECTCASES_API EmptyOperandValue(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECTCASES_API EmptyOperandValue& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECTCASES_API Aws::Utils::Json::JsonValue Jsonize() const;

  };

} // namespace Model
} // namespace ConnectCases
} // namespace Aws
