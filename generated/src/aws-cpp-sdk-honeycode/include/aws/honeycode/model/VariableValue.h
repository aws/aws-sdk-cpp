/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/honeycode/Honeycode_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace Honeycode
{
namespace Model
{

  /**
   * <p>The input variables to the app to be used by the InvokeScreenAutomation
   * action request.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/honeycode-2020-03-01/VariableValue">AWS
   * API Reference</a></p>
   */
  class VariableValue
  {
  public:
    AWS_HONEYCODE_API VariableValue();
    AWS_HONEYCODE_API VariableValue(Aws::Utils::Json::JsonView jsonValue);
    AWS_HONEYCODE_API VariableValue& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_HONEYCODE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Raw value of the variable.</p>
     */
    inline const Aws::String& GetRawValue() const{ return m_rawValue; }

    /**
     * <p>Raw value of the variable.</p>
     */
    inline bool RawValueHasBeenSet() const { return m_rawValueHasBeenSet; }

    /**
     * <p>Raw value of the variable.</p>
     */
    inline void SetRawValue(const Aws::String& value) { m_rawValueHasBeenSet = true; m_rawValue = value; }

    /**
     * <p>Raw value of the variable.</p>
     */
    inline void SetRawValue(Aws::String&& value) { m_rawValueHasBeenSet = true; m_rawValue = std::move(value); }

    /**
     * <p>Raw value of the variable.</p>
     */
    inline void SetRawValue(const char* value) { m_rawValueHasBeenSet = true; m_rawValue.assign(value); }

    /**
     * <p>Raw value of the variable.</p>
     */
    inline VariableValue& WithRawValue(const Aws::String& value) { SetRawValue(value); return *this;}

    /**
     * <p>Raw value of the variable.</p>
     */
    inline VariableValue& WithRawValue(Aws::String&& value) { SetRawValue(std::move(value)); return *this;}

    /**
     * <p>Raw value of the variable.</p>
     */
    inline VariableValue& WithRawValue(const char* value) { SetRawValue(value); return *this;}

  private:

    Aws::String m_rawValue;
    bool m_rawValueHasBeenSet = false;
  };

} // namespace Model
} // namespace Honeycode
} // namespace Aws
