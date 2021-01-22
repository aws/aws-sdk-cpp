/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lexv2-runtime/LexRuntimeV2_EXPORTS.h>
#include <aws/lexv2-runtime/model/Value.h>
#include <utility>

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
namespace LexRuntimeV2
{
namespace Model
{

  /**
   * <p>A value that Amazon Lex uses to fulfill an intent. </p><p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/runtime.lex.v2-2020-08-07/Slot">AWS
   * API Reference</a></p>
   */
  class AWS_LEXRUNTIMEV2_API Slot
  {
  public:
    Slot();
    Slot(Aws::Utils::Json::JsonView jsonValue);
    Slot& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The current value of the slot.</p>
     */
    inline const Value& GetValue() const{ return m_value; }

    /**
     * <p>The current value of the slot.</p>
     */
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }

    /**
     * <p>The current value of the slot.</p>
     */
    inline void SetValue(const Value& value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p>The current value of the slot.</p>
     */
    inline void SetValue(Value&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }

    /**
     * <p>The current value of the slot.</p>
     */
    inline Slot& WithValue(const Value& value) { SetValue(value); return *this;}

    /**
     * <p>The current value of the slot.</p>
     */
    inline Slot& WithValue(Value&& value) { SetValue(std::move(value)); return *this;}

  private:

    Value m_value;
    bool m_valueHasBeenSet;
  };

} // namespace Model
} // namespace LexRuntimeV2
} // namespace Aws
