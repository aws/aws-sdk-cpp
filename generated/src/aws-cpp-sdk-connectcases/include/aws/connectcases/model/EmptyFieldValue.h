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
   * <p>An empty value. You cannot set <code>EmptyFieldValue</code> on a field that
   * is required on a case template.</p> <p>This structure will never have any data
   * members. It signifies an empty value on a case field.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connectcases-2022-10-03/EmptyFieldValue">AWS
   * API Reference</a></p>
   */
  class EmptyFieldValue
  {
  public:
    AWS_CONNECTCASES_API EmptyFieldValue();
    AWS_CONNECTCASES_API EmptyFieldValue(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECTCASES_API EmptyFieldValue& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECTCASES_API Aws::Utils::Json::JsonValue Jsonize() const;

  };

} // namespace Model
} // namespace ConnectCases
} // namespace Aws
