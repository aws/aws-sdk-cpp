/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock/Bedrock_EXPORTS.h>
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
namespace Bedrock
{
namespace Model
{

  /**
   * <p>Defines the value for one rating in a custom metric rating
   * scale.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-2023-04-20/RatingScaleItemValue">AWS
   * API Reference</a></p>
   */
  class RatingScaleItemValue
  {
  public:
    AWS_BEDROCK_API RatingScaleItemValue() = default;
    AWS_BEDROCK_API RatingScaleItemValue(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCK_API RatingScaleItemValue& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCK_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A string representing the value for a rating in a custom metric rating
     * scale.</p>
     */
    inline const Aws::String& GetStringValue() const { return m_stringValue; }
    inline bool StringValueHasBeenSet() const { return m_stringValueHasBeenSet; }
    template<typename StringValueT = Aws::String>
    void SetStringValue(StringValueT&& value) { m_stringValueHasBeenSet = true; m_stringValue = std::forward<StringValueT>(value); }
    template<typename StringValueT = Aws::String>
    RatingScaleItemValue& WithStringValue(StringValueT&& value) { SetStringValue(std::forward<StringValueT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A floating point number representing the value for a rating in a custom
     * metric rating scale.</p>
     */
    inline double GetFloatValue() const { return m_floatValue; }
    inline bool FloatValueHasBeenSet() const { return m_floatValueHasBeenSet; }
    inline void SetFloatValue(double value) { m_floatValueHasBeenSet = true; m_floatValue = value; }
    inline RatingScaleItemValue& WithFloatValue(double value) { SetFloatValue(value); return *this;}
    ///@}
  private:

    Aws::String m_stringValue;
    bool m_stringValueHasBeenSet = false;

    double m_floatValue{0.0};
    bool m_floatValueHasBeenSet = false;
  };

} // namespace Model
} // namespace Bedrock
} // namespace Aws
