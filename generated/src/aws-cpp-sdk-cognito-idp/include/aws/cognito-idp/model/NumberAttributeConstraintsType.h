/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cognito-idp/CognitoIdentityProvider_EXPORTS.h>
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
namespace CognitoIdentityProvider
{
namespace Model
{

  /**
   * <p>The minimum and maximum values of an attribute that is of the number type,
   * for example <code>custom:age</code>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/NumberAttributeConstraintsType">AWS
   * API Reference</a></p>
   */
  class NumberAttributeConstraintsType
  {
  public:
    AWS_COGNITOIDENTITYPROVIDER_API NumberAttributeConstraintsType() = default;
    AWS_COGNITOIDENTITYPROVIDER_API NumberAttributeConstraintsType(Aws::Utils::Json::JsonView jsonValue);
    AWS_COGNITOIDENTITYPROVIDER_API NumberAttributeConstraintsType& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COGNITOIDENTITYPROVIDER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The minimum value of an attribute that is of the number data type.</p>
     */
    inline const Aws::String& GetMinValue() const { return m_minValue; }
    inline bool MinValueHasBeenSet() const { return m_minValueHasBeenSet; }
    template<typename MinValueT = Aws::String>
    void SetMinValue(MinValueT&& value) { m_minValueHasBeenSet = true; m_minValue = std::forward<MinValueT>(value); }
    template<typename MinValueT = Aws::String>
    NumberAttributeConstraintsType& WithMinValue(MinValueT&& value) { SetMinValue(std::forward<MinValueT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum length of a number attribute value. Must be a number less than or
     * equal to <code>2^1023</code>, represented as a string with a length of 131072
     * characters or fewer.</p>
     */
    inline const Aws::String& GetMaxValue() const { return m_maxValue; }
    inline bool MaxValueHasBeenSet() const { return m_maxValueHasBeenSet; }
    template<typename MaxValueT = Aws::String>
    void SetMaxValue(MaxValueT&& value) { m_maxValueHasBeenSet = true; m_maxValue = std::forward<MaxValueT>(value); }
    template<typename MaxValueT = Aws::String>
    NumberAttributeConstraintsType& WithMaxValue(MaxValueT&& value) { SetMaxValue(std::forward<MaxValueT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_minValue;
    bool m_minValueHasBeenSet = false;

    Aws::String m_maxValue;
    bool m_maxValueHasBeenSet = false;
  };

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
