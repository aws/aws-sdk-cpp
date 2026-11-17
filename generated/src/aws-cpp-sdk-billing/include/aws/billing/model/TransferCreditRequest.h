/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/billing/BillingRequest.h>
#include <aws/billing/Billing_EXPORTS.h>
#include <aws/core/utils/UUID.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace Billing {
namespace Model {

/**
 */
class TransferCreditRequest : public BillingRequest {
 public:
  AWS_BILLING_API TransferCreditRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "TransferCredit"; }

  AWS_BILLING_API Aws::String SerializePayload() const override;

  AWS_BILLING_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>The ID of the credit to transfer.</p>
   */
  inline const Aws::String& GetCreditId() const { return m_creditId; }
  inline bool CreditIdHasBeenSet() const { return m_creditIdHasBeenSet; }
  template <typename CreditIdT = Aws::String>
  void SetCreditId(CreditIdT&& value) {
    m_creditIdHasBeenSet = true;
    m_creditId = std::forward<CreditIdT>(value);
  }
  template <typename CreditIdT = Aws::String>
  TransferCreditRequest& WithCreditId(CreditIdT&& value) {
    SetCreditId(std::forward<CreditIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Web Services account ID that becomes the owner of the credit. The
   * account must be in your consolidated billing family and must not be the current
   * owner.</p>
   */
  inline const Aws::String& GetDestinationAccountId() const { return m_destinationAccountId; }
  inline bool DestinationAccountIdHasBeenSet() const { return m_destinationAccountIdHasBeenSet; }
  template <typename DestinationAccountIdT = Aws::String>
  void SetDestinationAccountId(DestinationAccountIdT&& value) {
    m_destinationAccountIdHasBeenSet = true;
    m_destinationAccountId = std::forward<DestinationAccountIdT>(value);
  }
  template <typename DestinationAccountIdT = Aws::String>
  TransferCreditRequest& WithDestinationAccountId(DestinationAccountIdT&& value) {
    SetDestinationAccountId(std::forward<DestinationAccountIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A unique, case-sensitive identifier that you provide to ensure that the
   * operation completes no more than one time. If you retry a successful request
   * with the same client token and parameters, the retry completes without
   * performing any further actions. If you reuse a client token with different
   * parameters, the request fails with a <code>ValidationException</code>.</p>
   */
  inline const Aws::String& GetClientToken() const { return m_clientToken; }
  inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
  template <typename ClientTokenT = Aws::String>
  void SetClientToken(ClientTokenT&& value) {
    m_clientTokenHasBeenSet = true;
    m_clientToken = std::forward<ClientTokenT>(value);
  }
  template <typename ClientTokenT = Aws::String>
  TransferCreditRequest& WithClientToken(ClientTokenT&& value) {
    SetClientToken(std::forward<ClientTokenT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies whether to validate the request and return the result without
   * changing the credit.</p>
   */
  inline bool GetDryRun() const { return m_dryRun; }
  inline bool DryRunHasBeenSet() const { return m_dryRunHasBeenSet; }
  inline void SetDryRun(bool value) {
    m_dryRunHasBeenSet = true;
    m_dryRun = value;
  }
  inline TransferCreditRequest& WithDryRun(bool value) {
    SetDryRun(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_creditId;

  Aws::String m_destinationAccountId;

  Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};

  bool m_dryRun{false};
  bool m_creditIdHasBeenSet = false;
  bool m_destinationAccountIdHasBeenSet = false;
  bool m_clientTokenHasBeenSet = true;
  bool m_dryRunHasBeenSet = false;
};

}  // namespace Model
}  // namespace Billing
}  // namespace Aws
