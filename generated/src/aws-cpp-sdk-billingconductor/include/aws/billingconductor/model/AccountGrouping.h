/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/billingconductor/BillingConductor_EXPORTS.h>
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
namespace BillingConductor
{
namespace Model
{

  /**
   * <p>The set of accounts that will be under the billing group. The set of accounts
   * resemble the linked accounts in a consolidated billing family.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/billingconductor-2021-07-30/AccountGrouping">AWS
   * API Reference</a></p>
   */
  class AccountGrouping
  {
  public:
    AWS_BILLINGCONDUCTOR_API AccountGrouping() = default;
    AWS_BILLINGCONDUCTOR_API AccountGrouping(Aws::Utils::Json::JsonView jsonValue);
    AWS_BILLINGCONDUCTOR_API AccountGrouping& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BILLINGCONDUCTOR_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The account IDs that make up the billing group. Account IDs must be a part of
     * the consolidated billing family, and not associated with another billing
     * group.</p>
     */
    inline const Aws::Vector<Aws::String>& GetLinkedAccountIds() const { return m_linkedAccountIds; }
    inline bool LinkedAccountIdsHasBeenSet() const { return m_linkedAccountIdsHasBeenSet; }
    template<typename LinkedAccountIdsT = Aws::Vector<Aws::String>>
    void SetLinkedAccountIds(LinkedAccountIdsT&& value) { m_linkedAccountIdsHasBeenSet = true; m_linkedAccountIds = std::forward<LinkedAccountIdsT>(value); }
    template<typename LinkedAccountIdsT = Aws::Vector<Aws::String>>
    AccountGrouping& WithLinkedAccountIds(LinkedAccountIdsT&& value) { SetLinkedAccountIds(std::forward<LinkedAccountIdsT>(value)); return *this;}
    template<typename LinkedAccountIdsT = Aws::String>
    AccountGrouping& AddLinkedAccountIds(LinkedAccountIdsT&& value) { m_linkedAccountIdsHasBeenSet = true; m_linkedAccountIds.emplace_back(std::forward<LinkedAccountIdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Specifies if this billing group will automatically associate newly added
     * Amazon Web Services accounts that join your consolidated billing family.</p>
     */
    inline bool GetAutoAssociate() const { return m_autoAssociate; }
    inline bool AutoAssociateHasBeenSet() const { return m_autoAssociateHasBeenSet; }
    inline void SetAutoAssociate(bool value) { m_autoAssociateHasBeenSet = true; m_autoAssociate = value; }
    inline AccountGrouping& WithAutoAssociate(bool value) { SetAutoAssociate(value); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_linkedAccountIds;
    bool m_linkedAccountIdsHasBeenSet = false;

    bool m_autoAssociate{false};
    bool m_autoAssociateHasBeenSet = false;
  };

} // namespace Model
} // namespace BillingConductor
} // namespace Aws
