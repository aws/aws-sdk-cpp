/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class EntitlementValue
  {
  public:
    AWS_MARKETPLACEENTITLEMENTSERVICE_API EntitlementValue();
    AWS_MARKETPLACEENTITLEMENTSERVICE_API EntitlementValue(Aws::Utils::Json::JsonView jsonValue);
    AWS_MARKETPLACEENTITLEMENTSERVICE_API EntitlementValue& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MARKETPLACEENTITLEMENTSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


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
    bool m_integerValueHasBeenSet = false;

    double m_doubleValue;
    bool m_doubleValueHasBeenSet = false;

    bool m_booleanValue;
    bool m_booleanValueHasBeenSet = false;

    Aws::String m_stringValue;
    bool m_stringValueHasBeenSet = false;
  };

} // namespace Model
} // namespace MarketplaceEntitlementService
} // namespace Aws
