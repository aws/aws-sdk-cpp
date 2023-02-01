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
   * <p>The minimum and maximum values of an attribute that is of the number data
   * type.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/NumberAttributeConstraintsType">AWS
   * API Reference</a></p>
   */
  class NumberAttributeConstraintsType
  {
  public:
    AWS_COGNITOIDENTITYPROVIDER_API NumberAttributeConstraintsType();
    AWS_COGNITOIDENTITYPROVIDER_API NumberAttributeConstraintsType(Aws::Utils::Json::JsonView jsonValue);
    AWS_COGNITOIDENTITYPROVIDER_API NumberAttributeConstraintsType& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COGNITOIDENTITYPROVIDER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The minimum value of an attribute that is of the number data type.</p>
     */
    inline const Aws::String& GetMinValue() const{ return m_minValue; }

    /**
     * <p>The minimum value of an attribute that is of the number data type.</p>
     */
    inline bool MinValueHasBeenSet() const { return m_minValueHasBeenSet; }

    /**
     * <p>The minimum value of an attribute that is of the number data type.</p>
     */
    inline void SetMinValue(const Aws::String& value) { m_minValueHasBeenSet = true; m_minValue = value; }

    /**
     * <p>The minimum value of an attribute that is of the number data type.</p>
     */
    inline void SetMinValue(Aws::String&& value) { m_minValueHasBeenSet = true; m_minValue = std::move(value); }

    /**
     * <p>The minimum value of an attribute that is of the number data type.</p>
     */
    inline void SetMinValue(const char* value) { m_minValueHasBeenSet = true; m_minValue.assign(value); }

    /**
     * <p>The minimum value of an attribute that is of the number data type.</p>
     */
    inline NumberAttributeConstraintsType& WithMinValue(const Aws::String& value) { SetMinValue(value); return *this;}

    /**
     * <p>The minimum value of an attribute that is of the number data type.</p>
     */
    inline NumberAttributeConstraintsType& WithMinValue(Aws::String&& value) { SetMinValue(std::move(value)); return *this;}

    /**
     * <p>The minimum value of an attribute that is of the number data type.</p>
     */
    inline NumberAttributeConstraintsType& WithMinValue(const char* value) { SetMinValue(value); return *this;}


    /**
     * <p>The maximum value of an attribute that is of the number data type.</p>
     */
    inline const Aws::String& GetMaxValue() const{ return m_maxValue; }

    /**
     * <p>The maximum value of an attribute that is of the number data type.</p>
     */
    inline bool MaxValueHasBeenSet() const { return m_maxValueHasBeenSet; }

    /**
     * <p>The maximum value of an attribute that is of the number data type.</p>
     */
    inline void SetMaxValue(const Aws::String& value) { m_maxValueHasBeenSet = true; m_maxValue = value; }

    /**
     * <p>The maximum value of an attribute that is of the number data type.</p>
     */
    inline void SetMaxValue(Aws::String&& value) { m_maxValueHasBeenSet = true; m_maxValue = std::move(value); }

    /**
     * <p>The maximum value of an attribute that is of the number data type.</p>
     */
    inline void SetMaxValue(const char* value) { m_maxValueHasBeenSet = true; m_maxValue.assign(value); }

    /**
     * <p>The maximum value of an attribute that is of the number data type.</p>
     */
    inline NumberAttributeConstraintsType& WithMaxValue(const Aws::String& value) { SetMaxValue(value); return *this;}

    /**
     * <p>The maximum value of an attribute that is of the number data type.</p>
     */
    inline NumberAttributeConstraintsType& WithMaxValue(Aws::String&& value) { SetMaxValue(std::move(value)); return *this;}

    /**
     * <p>The maximum value of an attribute that is of the number data type.</p>
     */
    inline NumberAttributeConstraintsType& WithMaxValue(const char* value) { SetMaxValue(value); return *this;}

  private:

    Aws::String m_minValue;
    bool m_minValueHasBeenSet = false;

    Aws::String m_maxValue;
    bool m_maxValueHasBeenSet = false;
  };

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
