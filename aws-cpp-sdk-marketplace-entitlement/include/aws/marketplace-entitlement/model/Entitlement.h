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
#include <aws/marketplace-entitlement/model/EntitlementValue.h>
#include <aws/core/utils/DateTime.h>
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
   * <p>An entitlement represents capacity in a product owned by the customer. For
   * example, a customer might own some number of users or seats in an SaaS
   * application or some amount of data capacity in a multi-tenant
   * database.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/entitlement.marketplace-2017-01-11/Entitlement">AWS
   * API Reference</a></p>
   */
  class AWS_MARKETPLACEENTITLEMENTSERVICE_API Entitlement
  {
  public:
    Entitlement();
    Entitlement(Aws::Utils::Json::JsonView jsonValue);
    Entitlement& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The product code for which the given entitlement applies. Product codes are
     * provided by AWS Marketplace when the product listing is created.</p>
     */
    inline const Aws::String& GetProductCode() const{ return m_productCode; }

    /**
     * <p>The product code for which the given entitlement applies. Product codes are
     * provided by AWS Marketplace when the product listing is created.</p>
     */
    inline bool ProductCodeHasBeenSet() const { return m_productCodeHasBeenSet; }

    /**
     * <p>The product code for which the given entitlement applies. Product codes are
     * provided by AWS Marketplace when the product listing is created.</p>
     */
    inline void SetProductCode(const Aws::String& value) { m_productCodeHasBeenSet = true; m_productCode = value; }

    /**
     * <p>The product code for which the given entitlement applies. Product codes are
     * provided by AWS Marketplace when the product listing is created.</p>
     */
    inline void SetProductCode(Aws::String&& value) { m_productCodeHasBeenSet = true; m_productCode = std::move(value); }

    /**
     * <p>The product code for which the given entitlement applies. Product codes are
     * provided by AWS Marketplace when the product listing is created.</p>
     */
    inline void SetProductCode(const char* value) { m_productCodeHasBeenSet = true; m_productCode.assign(value); }

    /**
     * <p>The product code for which the given entitlement applies. Product codes are
     * provided by AWS Marketplace when the product listing is created.</p>
     */
    inline Entitlement& WithProductCode(const Aws::String& value) { SetProductCode(value); return *this;}

    /**
     * <p>The product code for which the given entitlement applies. Product codes are
     * provided by AWS Marketplace when the product listing is created.</p>
     */
    inline Entitlement& WithProductCode(Aws::String&& value) { SetProductCode(std::move(value)); return *this;}

    /**
     * <p>The product code for which the given entitlement applies. Product codes are
     * provided by AWS Marketplace when the product listing is created.</p>
     */
    inline Entitlement& WithProductCode(const char* value) { SetProductCode(value); return *this;}


    /**
     * <p>The dimension for which the given entitlement applies. Dimensions represent
     * categories of capacity in a product and are specified when the product is listed
     * in AWS Marketplace.</p>
     */
    inline const Aws::String& GetDimension() const{ return m_dimension; }

    /**
     * <p>The dimension for which the given entitlement applies. Dimensions represent
     * categories of capacity in a product and are specified when the product is listed
     * in AWS Marketplace.</p>
     */
    inline bool DimensionHasBeenSet() const { return m_dimensionHasBeenSet; }

    /**
     * <p>The dimension for which the given entitlement applies. Dimensions represent
     * categories of capacity in a product and are specified when the product is listed
     * in AWS Marketplace.</p>
     */
    inline void SetDimension(const Aws::String& value) { m_dimensionHasBeenSet = true; m_dimension = value; }

    /**
     * <p>The dimension for which the given entitlement applies. Dimensions represent
     * categories of capacity in a product and are specified when the product is listed
     * in AWS Marketplace.</p>
     */
    inline void SetDimension(Aws::String&& value) { m_dimensionHasBeenSet = true; m_dimension = std::move(value); }

    /**
     * <p>The dimension for which the given entitlement applies. Dimensions represent
     * categories of capacity in a product and are specified when the product is listed
     * in AWS Marketplace.</p>
     */
    inline void SetDimension(const char* value) { m_dimensionHasBeenSet = true; m_dimension.assign(value); }

    /**
     * <p>The dimension for which the given entitlement applies. Dimensions represent
     * categories of capacity in a product and are specified when the product is listed
     * in AWS Marketplace.</p>
     */
    inline Entitlement& WithDimension(const Aws::String& value) { SetDimension(value); return *this;}

    /**
     * <p>The dimension for which the given entitlement applies. Dimensions represent
     * categories of capacity in a product and are specified when the product is listed
     * in AWS Marketplace.</p>
     */
    inline Entitlement& WithDimension(Aws::String&& value) { SetDimension(std::move(value)); return *this;}

    /**
     * <p>The dimension for which the given entitlement applies. Dimensions represent
     * categories of capacity in a product and are specified when the product is listed
     * in AWS Marketplace.</p>
     */
    inline Entitlement& WithDimension(const char* value) { SetDimension(value); return *this;}


    /**
     * <p>The customer identifier is a handle to each unique customer in an
     * application. Customer identifiers are obtained through the ResolveCustomer
     * operation in AWS Marketplace Metering Service.</p>
     */
    inline const Aws::String& GetCustomerIdentifier() const{ return m_customerIdentifier; }

    /**
     * <p>The customer identifier is a handle to each unique customer in an
     * application. Customer identifiers are obtained through the ResolveCustomer
     * operation in AWS Marketplace Metering Service.</p>
     */
    inline bool CustomerIdentifierHasBeenSet() const { return m_customerIdentifierHasBeenSet; }

    /**
     * <p>The customer identifier is a handle to each unique customer in an
     * application. Customer identifiers are obtained through the ResolveCustomer
     * operation in AWS Marketplace Metering Service.</p>
     */
    inline void SetCustomerIdentifier(const Aws::String& value) { m_customerIdentifierHasBeenSet = true; m_customerIdentifier = value; }

    /**
     * <p>The customer identifier is a handle to each unique customer in an
     * application. Customer identifiers are obtained through the ResolveCustomer
     * operation in AWS Marketplace Metering Service.</p>
     */
    inline void SetCustomerIdentifier(Aws::String&& value) { m_customerIdentifierHasBeenSet = true; m_customerIdentifier = std::move(value); }

    /**
     * <p>The customer identifier is a handle to each unique customer in an
     * application. Customer identifiers are obtained through the ResolveCustomer
     * operation in AWS Marketplace Metering Service.</p>
     */
    inline void SetCustomerIdentifier(const char* value) { m_customerIdentifierHasBeenSet = true; m_customerIdentifier.assign(value); }

    /**
     * <p>The customer identifier is a handle to each unique customer in an
     * application. Customer identifiers are obtained through the ResolveCustomer
     * operation in AWS Marketplace Metering Service.</p>
     */
    inline Entitlement& WithCustomerIdentifier(const Aws::String& value) { SetCustomerIdentifier(value); return *this;}

    /**
     * <p>The customer identifier is a handle to each unique customer in an
     * application. Customer identifiers are obtained through the ResolveCustomer
     * operation in AWS Marketplace Metering Service.</p>
     */
    inline Entitlement& WithCustomerIdentifier(Aws::String&& value) { SetCustomerIdentifier(std::move(value)); return *this;}

    /**
     * <p>The customer identifier is a handle to each unique customer in an
     * application. Customer identifiers are obtained through the ResolveCustomer
     * operation in AWS Marketplace Metering Service.</p>
     */
    inline Entitlement& WithCustomerIdentifier(const char* value) { SetCustomerIdentifier(value); return *this;}


    /**
     * <p>The EntitlementValue represents the amount of capacity that the customer is
     * entitled to for the product.</p>
     */
    inline const EntitlementValue& GetValue() const{ return m_value; }

    /**
     * <p>The EntitlementValue represents the amount of capacity that the customer is
     * entitled to for the product.</p>
     */
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }

    /**
     * <p>The EntitlementValue represents the amount of capacity that the customer is
     * entitled to for the product.</p>
     */
    inline void SetValue(const EntitlementValue& value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p>The EntitlementValue represents the amount of capacity that the customer is
     * entitled to for the product.</p>
     */
    inline void SetValue(EntitlementValue&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }

    /**
     * <p>The EntitlementValue represents the amount of capacity that the customer is
     * entitled to for the product.</p>
     */
    inline Entitlement& WithValue(const EntitlementValue& value) { SetValue(value); return *this;}

    /**
     * <p>The EntitlementValue represents the amount of capacity that the customer is
     * entitled to for the product.</p>
     */
    inline Entitlement& WithValue(EntitlementValue&& value) { SetValue(std::move(value)); return *this;}


    /**
     * <p>The expiration date represents the minimum date through which this
     * entitlement is expected to remain valid. For contractual products listed on AWS
     * Marketplace, the expiration date is the date at which the customer will renew or
     * cancel their contract. Customers who are opting to renew their contract will
     * still have entitlements with an expiration date.</p>
     */
    inline const Aws::Utils::DateTime& GetExpirationDate() const{ return m_expirationDate; }

    /**
     * <p>The expiration date represents the minimum date through which this
     * entitlement is expected to remain valid. For contractual products listed on AWS
     * Marketplace, the expiration date is the date at which the customer will renew or
     * cancel their contract. Customers who are opting to renew their contract will
     * still have entitlements with an expiration date.</p>
     */
    inline bool ExpirationDateHasBeenSet() const { return m_expirationDateHasBeenSet; }

    /**
     * <p>The expiration date represents the minimum date through which this
     * entitlement is expected to remain valid. For contractual products listed on AWS
     * Marketplace, the expiration date is the date at which the customer will renew or
     * cancel their contract. Customers who are opting to renew their contract will
     * still have entitlements with an expiration date.</p>
     */
    inline void SetExpirationDate(const Aws::Utils::DateTime& value) { m_expirationDateHasBeenSet = true; m_expirationDate = value; }

    /**
     * <p>The expiration date represents the minimum date through which this
     * entitlement is expected to remain valid. For contractual products listed on AWS
     * Marketplace, the expiration date is the date at which the customer will renew or
     * cancel their contract. Customers who are opting to renew their contract will
     * still have entitlements with an expiration date.</p>
     */
    inline void SetExpirationDate(Aws::Utils::DateTime&& value) { m_expirationDateHasBeenSet = true; m_expirationDate = std::move(value); }

    /**
     * <p>The expiration date represents the minimum date through which this
     * entitlement is expected to remain valid. For contractual products listed on AWS
     * Marketplace, the expiration date is the date at which the customer will renew or
     * cancel their contract. Customers who are opting to renew their contract will
     * still have entitlements with an expiration date.</p>
     */
    inline Entitlement& WithExpirationDate(const Aws::Utils::DateTime& value) { SetExpirationDate(value); return *this;}

    /**
     * <p>The expiration date represents the minimum date through which this
     * entitlement is expected to remain valid. For contractual products listed on AWS
     * Marketplace, the expiration date is the date at which the customer will renew or
     * cancel their contract. Customers who are opting to renew their contract will
     * still have entitlements with an expiration date.</p>
     */
    inline Entitlement& WithExpirationDate(Aws::Utils::DateTime&& value) { SetExpirationDate(std::move(value)); return *this;}

  private:

    Aws::String m_productCode;
    bool m_productCodeHasBeenSet;

    Aws::String m_dimension;
    bool m_dimensionHasBeenSet;

    Aws::String m_customerIdentifier;
    bool m_customerIdentifierHasBeenSet;

    EntitlementValue m_value;
    bool m_valueHasBeenSet;

    Aws::Utils::DateTime m_expirationDate;
    bool m_expirationDateHasBeenSet;
  };

} // namespace Model
} // namespace MarketplaceEntitlementService
} // namespace Aws
