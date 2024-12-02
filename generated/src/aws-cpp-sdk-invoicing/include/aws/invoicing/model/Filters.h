/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/invoicing/Invoicing_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace Invoicing
{
namespace Model
{

  /**
   * <p>An optional input to the list API. If multiple filters are specified, the
   * returned list will be a configuration that match all of the provided filters.
   * Supported filter types are <code>InvoiceReceivers</code>, <code>Names</code>,
   * and <code>Accounts</code>. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/invoicing-2024-12-01/Filters">AWS
   * API Reference</a></p>
   */
  class Filters
  {
  public:
    AWS_INVOICING_API Filters();
    AWS_INVOICING_API Filters(Aws::Utils::Json::JsonView jsonValue);
    AWS_INVOICING_API Filters& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_INVOICING_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> An optional input to the list API. You can specify a list of invoice unit
     * names inside filters to return invoice units that match only the specified
     * invoice unit names. If multiple names are provided, the result is an
     * <code>OR</code> condition (match any) of the specified invoice unit names. </p>
     */
    inline const Aws::Vector<Aws::String>& GetNames() const{ return m_names; }
    inline bool NamesHasBeenSet() const { return m_namesHasBeenSet; }
    inline void SetNames(const Aws::Vector<Aws::String>& value) { m_namesHasBeenSet = true; m_names = value; }
    inline void SetNames(Aws::Vector<Aws::String>&& value) { m_namesHasBeenSet = true; m_names = std::move(value); }
    inline Filters& WithNames(const Aws::Vector<Aws::String>& value) { SetNames(value); return *this;}
    inline Filters& WithNames(Aws::Vector<Aws::String>&& value) { SetNames(std::move(value)); return *this;}
    inline Filters& AddNames(const Aws::String& value) { m_namesHasBeenSet = true; m_names.push_back(value); return *this; }
    inline Filters& AddNames(Aws::String&& value) { m_namesHasBeenSet = true; m_names.push_back(std::move(value)); return *this; }
    inline Filters& AddNames(const char* value) { m_namesHasBeenSet = true; m_names.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p> You can specify a list of Amazon Web Services account IDs inside filters to
     * return invoice units that match only the specified accounts. If multiple
     * accounts are provided, the result is an <code>OR</code> condition (match any) of
     * the specified accounts. This filter only matches the specified accounts on the
     * invoice receivers of the invoice units. </p>
     */
    inline const Aws::Vector<Aws::String>& GetInvoiceReceivers() const{ return m_invoiceReceivers; }
    inline bool InvoiceReceiversHasBeenSet() const { return m_invoiceReceiversHasBeenSet; }
    inline void SetInvoiceReceivers(const Aws::Vector<Aws::String>& value) { m_invoiceReceiversHasBeenSet = true; m_invoiceReceivers = value; }
    inline void SetInvoiceReceivers(Aws::Vector<Aws::String>&& value) { m_invoiceReceiversHasBeenSet = true; m_invoiceReceivers = std::move(value); }
    inline Filters& WithInvoiceReceivers(const Aws::Vector<Aws::String>& value) { SetInvoiceReceivers(value); return *this;}
    inline Filters& WithInvoiceReceivers(Aws::Vector<Aws::String>&& value) { SetInvoiceReceivers(std::move(value)); return *this;}
    inline Filters& AddInvoiceReceivers(const Aws::String& value) { m_invoiceReceiversHasBeenSet = true; m_invoiceReceivers.push_back(value); return *this; }
    inline Filters& AddInvoiceReceivers(Aws::String&& value) { m_invoiceReceiversHasBeenSet = true; m_invoiceReceivers.push_back(std::move(value)); return *this; }
    inline Filters& AddInvoiceReceivers(const char* value) { m_invoiceReceiversHasBeenSet = true; m_invoiceReceivers.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p> You can specify a list of Amazon Web Services account IDs inside filters to
     * return invoice units that match only the specified accounts. If multiple
     * accounts are provided, the result is an <code>OR</code> condition (match any) of
     * the specified accounts. The specified account IDs are matched with either the
     * receiver or the linked accounts in the rules. </p>
     */
    inline const Aws::Vector<Aws::String>& GetAccounts() const{ return m_accounts; }
    inline bool AccountsHasBeenSet() const { return m_accountsHasBeenSet; }
    inline void SetAccounts(const Aws::Vector<Aws::String>& value) { m_accountsHasBeenSet = true; m_accounts = value; }
    inline void SetAccounts(Aws::Vector<Aws::String>&& value) { m_accountsHasBeenSet = true; m_accounts = std::move(value); }
    inline Filters& WithAccounts(const Aws::Vector<Aws::String>& value) { SetAccounts(value); return *this;}
    inline Filters& WithAccounts(Aws::Vector<Aws::String>&& value) { SetAccounts(std::move(value)); return *this;}
    inline Filters& AddAccounts(const Aws::String& value) { m_accountsHasBeenSet = true; m_accounts.push_back(value); return *this; }
    inline Filters& AddAccounts(Aws::String&& value) { m_accountsHasBeenSet = true; m_accounts.push_back(std::move(value)); return *this; }
    inline Filters& AddAccounts(const char* value) { m_accountsHasBeenSet = true; m_accounts.push_back(value); return *this; }
    ///@}
  private:

    Aws::Vector<Aws::String> m_names;
    bool m_namesHasBeenSet = false;

    Aws::Vector<Aws::String> m_invoiceReceivers;
    bool m_invoiceReceiversHasBeenSet = false;

    Aws::Vector<Aws::String> m_accounts;
    bool m_accountsHasBeenSet = false;
  };

} // namespace Model
} // namespace Invoicing
} // namespace Aws
