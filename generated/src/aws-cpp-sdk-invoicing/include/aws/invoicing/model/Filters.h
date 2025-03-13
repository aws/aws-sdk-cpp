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
    AWS_INVOICING_API Filters() = default;
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
    inline const Aws::Vector<Aws::String>& GetNames() const { return m_names; }
    inline bool NamesHasBeenSet() const { return m_namesHasBeenSet; }
    template<typename NamesT = Aws::Vector<Aws::String>>
    void SetNames(NamesT&& value) { m_namesHasBeenSet = true; m_names = std::forward<NamesT>(value); }
    template<typename NamesT = Aws::Vector<Aws::String>>
    Filters& WithNames(NamesT&& value) { SetNames(std::forward<NamesT>(value)); return *this;}
    template<typename NamesT = Aws::String>
    Filters& AddNames(NamesT&& value) { m_namesHasBeenSet = true; m_names.emplace_back(std::forward<NamesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> You can specify a list of Amazon Web Services account IDs inside filters to
     * return invoice units that match only the specified accounts. If multiple
     * accounts are provided, the result is an <code>OR</code> condition (match any) of
     * the specified accounts. This filter only matches the specified accounts on the
     * invoice receivers of the invoice units. </p>
     */
    inline const Aws::Vector<Aws::String>& GetInvoiceReceivers() const { return m_invoiceReceivers; }
    inline bool InvoiceReceiversHasBeenSet() const { return m_invoiceReceiversHasBeenSet; }
    template<typename InvoiceReceiversT = Aws::Vector<Aws::String>>
    void SetInvoiceReceivers(InvoiceReceiversT&& value) { m_invoiceReceiversHasBeenSet = true; m_invoiceReceivers = std::forward<InvoiceReceiversT>(value); }
    template<typename InvoiceReceiversT = Aws::Vector<Aws::String>>
    Filters& WithInvoiceReceivers(InvoiceReceiversT&& value) { SetInvoiceReceivers(std::forward<InvoiceReceiversT>(value)); return *this;}
    template<typename InvoiceReceiversT = Aws::String>
    Filters& AddInvoiceReceivers(InvoiceReceiversT&& value) { m_invoiceReceiversHasBeenSet = true; m_invoiceReceivers.emplace_back(std::forward<InvoiceReceiversT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> You can specify a list of Amazon Web Services account IDs inside filters to
     * return invoice units that match only the specified accounts. If multiple
     * accounts are provided, the result is an <code>OR</code> condition (match any) of
     * the specified accounts. The specified account IDs are matched with either the
     * receiver or the linked accounts in the rules. </p>
     */
    inline const Aws::Vector<Aws::String>& GetAccounts() const { return m_accounts; }
    inline bool AccountsHasBeenSet() const { return m_accountsHasBeenSet; }
    template<typename AccountsT = Aws::Vector<Aws::String>>
    void SetAccounts(AccountsT&& value) { m_accountsHasBeenSet = true; m_accounts = std::forward<AccountsT>(value); }
    template<typename AccountsT = Aws::Vector<Aws::String>>
    Filters& WithAccounts(AccountsT&& value) { SetAccounts(std::forward<AccountsT>(value)); return *this;}
    template<typename AccountsT = Aws::String>
    Filters& AddAccounts(AccountsT&& value) { m_accountsHasBeenSet = true; m_accounts.emplace_back(std::forward<AccountsT>(value)); return *this; }
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
