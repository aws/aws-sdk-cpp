/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/invoicing/Invoicing_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace Invoicing {
namespace Model {

/**
 * <p> This is used to categorize the invoice unit. Values are Amazon Web Services
 * account IDs. Currently, the only supported rule is <code>LINKED_ACCOUNT</code>.
 * </p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/invoicing-2024-12-01/InvoiceUnitRule">AWS
 * API Reference</a></p>
 */
class InvoiceUnitRule {
 public:
  AWS_INVOICING_API InvoiceUnitRule() = default;
  AWS_INVOICING_API InvoiceUnitRule(Aws::Utils::Json::JsonView jsonValue);
  AWS_INVOICING_API InvoiceUnitRule& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_INVOICING_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The list of <code>LINKED_ACCOUNT</code> IDs where charges are included within
   * the invoice unit. </p>
   */
  inline const Aws::Vector<Aws::String>& GetLinkedAccounts() const { return m_linkedAccounts; }
  inline bool LinkedAccountsHasBeenSet() const { return m_linkedAccountsHasBeenSet; }
  template <typename LinkedAccountsT = Aws::Vector<Aws::String>>
  void SetLinkedAccounts(LinkedAccountsT&& value) {
    m_linkedAccountsHasBeenSet = true;
    m_linkedAccounts = std::forward<LinkedAccountsT>(value);
  }
  template <typename LinkedAccountsT = Aws::Vector<Aws::String>>
  InvoiceUnitRule& WithLinkedAccounts(LinkedAccountsT&& value) {
    SetLinkedAccounts(std::forward<LinkedAccountsT>(value));
    return *this;
  }
  template <typename LinkedAccountsT = Aws::String>
  InvoiceUnitRule& AddLinkedAccounts(LinkedAccountsT&& value) {
    m_linkedAccountsHasBeenSet = true;
    m_linkedAccounts.emplace_back(std::forward<LinkedAccountsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> A list of Amazon Web Services account account IDs that have delegated their
   * billing responsibility to the receiver account through transfer billing. Unlike
   * linked accounts, these bill source accounts can be payer accounts from other
   * organizations that have authorized billing transfer to this account. </p>
   */
  inline const Aws::Vector<Aws::String>& GetBillSourceAccounts() const { return m_billSourceAccounts; }
  inline bool BillSourceAccountsHasBeenSet() const { return m_billSourceAccountsHasBeenSet; }
  template <typename BillSourceAccountsT = Aws::Vector<Aws::String>>
  void SetBillSourceAccounts(BillSourceAccountsT&& value) {
    m_billSourceAccountsHasBeenSet = true;
    m_billSourceAccounts = std::forward<BillSourceAccountsT>(value);
  }
  template <typename BillSourceAccountsT = Aws::Vector<Aws::String>>
  InvoiceUnitRule& WithBillSourceAccounts(BillSourceAccountsT&& value) {
    SetBillSourceAccounts(std::forward<BillSourceAccountsT>(value));
    return *this;
  }
  template <typename BillSourceAccountsT = Aws::String>
  InvoiceUnitRule& AddBillSourceAccounts(BillSourceAccountsT&& value) {
    m_billSourceAccountsHasBeenSet = true;
    m_billSourceAccounts.emplace_back(std::forward<BillSourceAccountsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<Aws::String> m_linkedAccounts;

  Aws::Vector<Aws::String> m_billSourceAccounts;
  bool m_linkedAccountsHasBeenSet = false;
  bool m_billSourceAccountsHasBeenSet = false;
};

}  // namespace Model
}  // namespace Invoicing
}  // namespace Aws
