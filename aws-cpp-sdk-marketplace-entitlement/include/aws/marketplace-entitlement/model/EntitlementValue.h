/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/marketplace-entitlement/MarketplaceEntitlementService_EXPORTS.h>
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
namespace MarketplaceEntitlementService
{
namespace Model
{

  /**
   * <p>The EntitlementValue represents the amount of capacity that the customer is
   * entitled to for the product.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/entitlement.marketplace-2017-01-11/EntitlementValue">AWS
   * API Reference</a></p>
   */
  class AWS_MARKETPLACEENTITLEMENTSERVICE_API EntitlementValue
  {
  public:
    EntitlementValue();
    EntitlementValue(Aws::Utils::Json::JsonView jsonValue);
    EntitlementValue& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The IntegerValue field will be populated with an integer value when the
     * entitlement is an integer type. Otherwise, the field will not be set.</p>
     */
    inline int GetIntegerValue() const{ return m_integerValue; }

    /**
     * <p>The IntegerValue field will be populated with an integer value when the
     * entitlement is an integer type. Otherwise, the field will not be set.</p>
     */
    inline bool IntegerValueHasBeenSet() const { return m_integerValueHasBeenSet; }

    /**
     * <p>The IntegerValue field will be populated with an integer value when the
     * entitlement is an integer type. Otherwise, the field will not be set.</p>
     */
    inline void SetIntegerValue(int value) { m_integerValueHasBeenSet = true; m_integerValue = value; }

    /**
     * <p>The IntegerValue field will be populated with an integer value when the
     * entitlement is an integer type. Otherwise, the field will not be set.</p>
     */
    inline EntitlementValue& WithIntegerValue(int value) { SetIntegerValue(value); return *this;}


    /**
     * <p>The DoubleValue field will be populated with a double value when the
     * entitlement is a double type. Otherwise, the field will not be set.</p>
     */
    inline double GetDoubleValue() const{ return m_doubleValue; }

    /**
     * <p>The DoubleValue field will be populated with a double value when the
     * entitlement is a double type. Otherwise, the field will not be set.</p>
     */
    inline bool DoubleValueHasBeenSet() const { return m_doubleValueHasBeenSet; }

    /**
     * <p>The DoubleValue field will be populated with a double value when the
     * entitlement is a double type. Otherwise, the field will not be set.</p>
     */
    inline void SetDoubleValue(double value) { m_doubleValueHasBeenSet = true; m_doubleValue = value; }

    /**
     * <p>The DoubleValue field will be populated with a double value when the
     * entitlement is a double type. Otherwise, the field will not be set.</p>
     */
    inline EntitlementValue& WithDoubleValue(double value) { SetDoubleValue(value); return *this;}


    /**
     * <p>The BooleanValue field will be populated with a boolean value when the
     * entitlement is a boolean type. Otherwise, the field will not be set.</p>
     */
    inline bool GetBooleanValue() const{ return m_booleanValue; }

    /**
     * <p>The BooleanValue field will be populated with a boolean value when the
     * entitlement is a boolean type. Otherwise, the field will not be set.</p>
     */
    inline bool BooleanValueHasBeenSet() const { return m_booleanValueHasBeenSet; }

    /**
     * <p>The BooleanValue field will be populated with a boolean value when the
     * entitlement is a boolean type. Otherwise, the field will not be set.</p>
     */
    inline void SetBooleanValue(bool value) { m_booleanValueHasBeenSet = true; m_booleanValue = value; }

    /**
     * <p>The BooleanValue field will be populated with a boolean value when the
     * entitlement is a boolean type. Otherwise, the field will not be set.</p>
     */
    inline EntitlementValue& WithBooleanValue(bool value) { SetBooleanValue(value); return *this;}


    /**
     * <p>The StringValue field will be populated with a string value when the
     * entitlement is a string type. Otherwise, the field will not be set.</p>
     */
    inline const Aws::String& GetStringValue() const{ return m_stringValue; }

    /**
     * <p>The StringValue field will be populated with a string value when the
     * entitlement is a string type. Otherwise, the field will not be set.</p>
     */
    inline bool StringValueHasBeenSet() const { return m_stringValueHasBeenSet; }

    /**
     * <p>The StringValue field will be populated with a string value when the
     * entitlement is a string type. Otherwise, the field will not be set.</p>
     */
    inline void SetStringValue(const Aws::String& value) { m_stringValueHasBeenSet = true; m_stringValue = value; }

    /**
     * <p>The StringValue field will be populated with a string value when the
     * entitlement is a string type. Otherwise, the field will not be set.</p>
     */
    inline void SetStringValue(Aws::String&& value) { m_stringValueHasBeenSet = true; m_stringValue = std::move(value); }

    /**
     * <p>The StringValue field will be populated with a string value when the
     * entitlement is a string type. Otherwise, the field will not be set.</p>
     */
    inline void SetStringValue(const char* value) { m_stringValueHasBeenSet = true; m_stringValue.assign(value); }

    /**
     * <p>The StringValue field will be populated with a string value when the
     * entitlement is a string type. Otherwise, the field will not be set.</p>
     */
    inline EntitlementValue& WithStringValue(const Aws::String& value) { SetStringValue(value); return *this;}

    /**
     * <p>The StringValue field will be populated with a string value when the
     * entitlement is a string type. Otherwise, the field will not be set.</p>
     */
    inline EntitlementValue& WithStringValue(Aws::String&& value) { SetStringValue(std::move(value)); return *this;}

    /**
     * <p>The StringValue field will be populated with a string value when the
     * entitlement is a string type. Otherwise, the field will not be set.</p>
     */
    inline EntitlementValue& WithStringValue(const char* value) { SetStringValue(value); return *this;}

  private:

    int m_integerValue;
    bool m_integerValueHasBeenSet;

    double m_doubleValue;
    bool m_doubleValueHasBeenSet;

    bool m_booleanValue;
    bool m_booleanValueHasBeenSet;

    Aws::String m_stringValue;
    bool m_stringValueHasBeenSet;
  };

} // namespace Model
} // namespace MarketplaceEntitlementService
} // namespace Aws
