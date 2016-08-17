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
#include <aws/route53domains/Route53Domains_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/route53domains/model/OperationType.h>
#include <aws/core/utils/DateTime.h>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace Route53Domains
{
namespace Model
{

  class AWS_ROUTE53DOMAINS_API BillingRecord
  {
  public:
    BillingRecord();
    BillingRecord(const Aws::Utils::Json::JsonValue& jsonValue);
    BillingRecord& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>The name of a domain.</p> <p>Type: String</p>
     */
    inline const Aws::String& GetDomainName() const{ return m_domainName; }

    /**
     * <p>The name of a domain.</p> <p>Type: String</p>
     */
    inline void SetDomainName(const Aws::String& value) { m_domainNameHasBeenSet = true; m_domainName = value; }

    /**
     * <p>The name of a domain.</p> <p>Type: String</p>
     */
    inline void SetDomainName(Aws::String&& value) { m_domainNameHasBeenSet = true; m_domainName = value; }

    /**
     * <p>The name of a domain.</p> <p>Type: String</p>
     */
    inline void SetDomainName(const char* value) { m_domainNameHasBeenSet = true; m_domainName.assign(value); }

    /**
     * <p>The name of a domain.</p> <p>Type: String</p>
     */
    inline BillingRecord& WithDomainName(const Aws::String& value) { SetDomainName(value); return *this;}

    /**
     * <p>The name of a domain.</p> <p>Type: String</p>
     */
    inline BillingRecord& WithDomainName(Aws::String&& value) { SetDomainName(value); return *this;}

    /**
     * <p>The name of a domain.</p> <p>Type: String</p>
     */
    inline BillingRecord& WithDomainName(const char* value) { SetDomainName(value); return *this;}

    /**
     * <p>The operation that you were charged for.</p> <p>Type: String</p> <p>Valid
     * values: <ul> <li><code>REGISTER_DOMAIN</code></li>
     * <li><code>TRANSFER_IN_DOMAIN</code></li> <li><code>RENEW_DOMAIN</code></li>
     * <li><code>CHANGE_DOMAIN_OWNER</code></li> </ul> </p>
     */
    inline const OperationType& GetOperation() const{ return m_operation; }

    /**
     * <p>The operation that you were charged for.</p> <p>Type: String</p> <p>Valid
     * values: <ul> <li><code>REGISTER_DOMAIN</code></li>
     * <li><code>TRANSFER_IN_DOMAIN</code></li> <li><code>RENEW_DOMAIN</code></li>
     * <li><code>CHANGE_DOMAIN_OWNER</code></li> </ul> </p>
     */
    inline void SetOperation(const OperationType& value) { m_operationHasBeenSet = true; m_operation = value; }

    /**
     * <p>The operation that you were charged for.</p> <p>Type: String</p> <p>Valid
     * values: <ul> <li><code>REGISTER_DOMAIN</code></li>
     * <li><code>TRANSFER_IN_DOMAIN</code></li> <li><code>RENEW_DOMAIN</code></li>
     * <li><code>CHANGE_DOMAIN_OWNER</code></li> </ul> </p>
     */
    inline void SetOperation(OperationType&& value) { m_operationHasBeenSet = true; m_operation = value; }

    /**
     * <p>The operation that you were charged for.</p> <p>Type: String</p> <p>Valid
     * values: <ul> <li><code>REGISTER_DOMAIN</code></li>
     * <li><code>TRANSFER_IN_DOMAIN</code></li> <li><code>RENEW_DOMAIN</code></li>
     * <li><code>CHANGE_DOMAIN_OWNER</code></li> </ul> </p>
     */
    inline BillingRecord& WithOperation(const OperationType& value) { SetOperation(value); return *this;}

    /**
     * <p>The operation that you were charged for.</p> <p>Type: String</p> <p>Valid
     * values: <ul> <li><code>REGISTER_DOMAIN</code></li>
     * <li><code>TRANSFER_IN_DOMAIN</code></li> <li><code>RENEW_DOMAIN</code></li>
     * <li><code>CHANGE_DOMAIN_OWNER</code></li> </ul> </p>
     */
    inline BillingRecord& WithOperation(OperationType&& value) { SetOperation(value); return *this;}

    /**
     * <p>The ID of the invoice that is associated with the billing record.</p>
     * <p>Type: String</p>
     */
    inline const Aws::String& GetInvoiceId() const{ return m_invoiceId; }

    /**
     * <p>The ID of the invoice that is associated with the billing record.</p>
     * <p>Type: String</p>
     */
    inline void SetInvoiceId(const Aws::String& value) { m_invoiceIdHasBeenSet = true; m_invoiceId = value; }

    /**
     * <p>The ID of the invoice that is associated with the billing record.</p>
     * <p>Type: String</p>
     */
    inline void SetInvoiceId(Aws::String&& value) { m_invoiceIdHasBeenSet = true; m_invoiceId = value; }

    /**
     * <p>The ID of the invoice that is associated with the billing record.</p>
     * <p>Type: String</p>
     */
    inline void SetInvoiceId(const char* value) { m_invoiceIdHasBeenSet = true; m_invoiceId.assign(value); }

    /**
     * <p>The ID of the invoice that is associated with the billing record.</p>
     * <p>Type: String</p>
     */
    inline BillingRecord& WithInvoiceId(const Aws::String& value) { SetInvoiceId(value); return *this;}

    /**
     * <p>The ID of the invoice that is associated with the billing record.</p>
     * <p>Type: String</p>
     */
    inline BillingRecord& WithInvoiceId(Aws::String&& value) { SetInvoiceId(value); return *this;}

    /**
     * <p>The ID of the invoice that is associated with the billing record.</p>
     * <p>Type: String</p>
     */
    inline BillingRecord& WithInvoiceId(const char* value) { SetInvoiceId(value); return *this;}

    /**
     * <p>The date that the operation was billed, in Unix format.</p> <p>Type:
     * Double</p>
     */
    inline const Aws::Utils::DateTime& GetBillDate() const{ return m_billDate; }

    /**
     * <p>The date that the operation was billed, in Unix format.</p> <p>Type:
     * Double</p>
     */
    inline void SetBillDate(const Aws::Utils::DateTime& value) { m_billDateHasBeenSet = true; m_billDate = value; }

    /**
     * <p>The date that the operation was billed, in Unix format.</p> <p>Type:
     * Double</p>
     */
    inline void SetBillDate(Aws::Utils::DateTime&& value) { m_billDateHasBeenSet = true; m_billDate = value; }

    /**
     * <p>The date that the operation was billed, in Unix format.</p> <p>Type:
     * Double</p>
     */
    inline BillingRecord& WithBillDate(const Aws::Utils::DateTime& value) { SetBillDate(value); return *this;}

    /**
     * <p>The date that the operation was billed, in Unix format.</p> <p>Type:
     * Double</p>
     */
    inline BillingRecord& WithBillDate(Aws::Utils::DateTime&& value) { SetBillDate(value); return *this;}

    /**
     * <p>The price that you were charged for the operation, in US dollars.</p>
     * <p>Type: Double</p> <p>Example value: 12.0</p>
     */
    inline double GetPrice() const{ return m_price; }

    /**
     * <p>The price that you were charged for the operation, in US dollars.</p>
     * <p>Type: Double</p> <p>Example value: 12.0</p>
     */
    inline void SetPrice(double value) { m_priceHasBeenSet = true; m_price = value; }

    /**
     * <p>The price that you were charged for the operation, in US dollars.</p>
     * <p>Type: Double</p> <p>Example value: 12.0</p>
     */
    inline BillingRecord& WithPrice(double value) { SetPrice(value); return *this;}

  private:
    Aws::String m_domainName;
    bool m_domainNameHasBeenSet;
    OperationType m_operation;
    bool m_operationHasBeenSet;
    Aws::String m_invoiceId;
    bool m_invoiceIdHasBeenSet;
    Aws::Utils::DateTime m_billDate;
    bool m_billDateHasBeenSet;
    double m_price;
    bool m_priceHasBeenSet;
  };

} // namespace Model
} // namespace Route53Domains
} // namespace Aws
