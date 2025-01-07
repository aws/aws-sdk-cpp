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
   * <p> This is used to categorize the invoice unit. Values are Amazon Web Services
   * account IDs. Currently, the only supported rule is <code>LINKED_ACCOUNT</code>.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/invoicing-2024-12-01/InvoiceUnitRule">AWS
   * API Reference</a></p>
   */
  class InvoiceUnitRule
  {
  public:
    AWS_INVOICING_API InvoiceUnitRule();
    AWS_INVOICING_API InvoiceUnitRule(Aws::Utils::Json::JsonView jsonValue);
    AWS_INVOICING_API InvoiceUnitRule& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_INVOICING_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The list of <code>LINKED_ACCOUNT</code> IDs where charges are included within
     * the invoice unit. </p>
     */
    inline const Aws::Vector<Aws::String>& GetLinkedAccounts() const{ return m_linkedAccounts; }
    inline bool LinkedAccountsHasBeenSet() const { return m_linkedAccountsHasBeenSet; }
    inline void SetLinkedAccounts(const Aws::Vector<Aws::String>& value) { m_linkedAccountsHasBeenSet = true; m_linkedAccounts = value; }
    inline void SetLinkedAccounts(Aws::Vector<Aws::String>&& value) { m_linkedAccountsHasBeenSet = true; m_linkedAccounts = std::move(value); }
    inline InvoiceUnitRule& WithLinkedAccounts(const Aws::Vector<Aws::String>& value) { SetLinkedAccounts(value); return *this;}
    inline InvoiceUnitRule& WithLinkedAccounts(Aws::Vector<Aws::String>&& value) { SetLinkedAccounts(std::move(value)); return *this;}
    inline InvoiceUnitRule& AddLinkedAccounts(const Aws::String& value) { m_linkedAccountsHasBeenSet = true; m_linkedAccounts.push_back(value); return *this; }
    inline InvoiceUnitRule& AddLinkedAccounts(Aws::String&& value) { m_linkedAccountsHasBeenSet = true; m_linkedAccounts.push_back(std::move(value)); return *this; }
    inline InvoiceUnitRule& AddLinkedAccounts(const char* value) { m_linkedAccountsHasBeenSet = true; m_linkedAccounts.push_back(value); return *this; }
    ///@}
  private:

    Aws::Vector<Aws::String> m_linkedAccounts;
    bool m_linkedAccountsHasBeenSet = false;
  };

} // namespace Model
} // namespace Invoicing
} // namespace Aws
