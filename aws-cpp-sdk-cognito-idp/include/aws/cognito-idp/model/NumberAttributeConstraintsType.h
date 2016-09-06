/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/
#pragma once
#include <aws/cognito-idp/CognitoIdentityProvider_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace CognitoIdentityProvider
{
namespace Model
{

  /**
   * <p>The minimum and maximum value of an attribute that is of the number data
   * type.</p>
   */
  class AWS_COGNITOIDENTITYPROVIDER_API NumberAttributeConstraintsType
  {
  public:
    NumberAttributeConstraintsType();
    NumberAttributeConstraintsType(const Aws::Utils::Json::JsonValue& jsonValue);
    NumberAttributeConstraintsType& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>The minimum value of an attribute that is of the number data type.</p>
     */
    inline const Aws::String& GetMinValue() const{ return m_minValue; }

    /**
     * <p>The minimum value of an attribute that is of the number data type.</p>
     */
    inline void SetMinValue(const Aws::String& value) { m_minValueHasBeenSet = true; m_minValue = value; }

    /**
     * <p>The minimum value of an attribute that is of the number data type.</p>
     */
    inline void SetMinValue(Aws::String&& value) { m_minValueHasBeenSet = true; m_minValue = value; }

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
    inline NumberAttributeConstraintsType& WithMinValue(Aws::String&& value) { SetMinValue(value); return *this;}

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
    inline void SetMaxValue(const Aws::String& value) { m_maxValueHasBeenSet = true; m_maxValue = value; }

    /**
     * <p>The maximum value of an attribute that is of the number data type.</p>
     */
    inline void SetMaxValue(Aws::String&& value) { m_maxValueHasBeenSet = true; m_maxValue = value; }

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
    inline NumberAttributeConstraintsType& WithMaxValue(Aws::String&& value) { SetMaxValue(value); return *this;}

    /**
     * <p>The maximum value of an attribute that is of the number data type.</p>
     */
    inline NumberAttributeConstraintsType& WithMaxValue(const char* value) { SetMaxValue(value); return *this;}

  private:
    Aws::String m_minValue;
    bool m_minValueHasBeenSet;
    Aws::String m_maxValue;
    bool m_maxValueHasBeenSet;
  };

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
