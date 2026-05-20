/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore/BedrockAgentCore_EXPORTS.h>
#include <aws/bedrock-agentcore/model/CryptoWalletNetwork.h>
#include <aws/bedrock-agentcore/model/LinkedAccount.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace BedrockAgentCore {
namespace Model {

/**
 * <p>Embedded crypto wallet instrument details.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-2024-02-28/EmbeddedCryptoWallet">AWS
 * API Reference</a></p>
 */
class EmbeddedCryptoWallet {
 public:
  AWS_BEDROCKAGENTCORE_API EmbeddedCryptoWallet() = default;
  AWS_BEDROCKAGENTCORE_API EmbeddedCryptoWallet(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORE_API EmbeddedCryptoWallet& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The blockchain network for this embedded crypto wallet. Supported networks:
   * ETHEREUM, SOLANA.</p>
   */
  inline CryptoWalletNetwork GetNetwork() const { return m_network; }
  inline bool NetworkHasBeenSet() const { return m_networkHasBeenSet; }
  inline void SetNetwork(CryptoWalletNetwork value) {
    m_networkHasBeenSet = true;
    m_network = value;
  }
  inline EmbeddedCryptoWallet& WithNetwork(CryptoWalletNetwork value) {
    SetNetwork(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>List of linked accounts linked to this wallet. Each represents a way the end
   * user can authenticate to this wallet.</p>
   */
  inline const Aws::Vector<LinkedAccount>& GetLinkedAccounts() const { return m_linkedAccounts; }
  inline bool LinkedAccountsHasBeenSet() const { return m_linkedAccountsHasBeenSet; }
  template <typename LinkedAccountsT = Aws::Vector<LinkedAccount>>
  void SetLinkedAccounts(LinkedAccountsT&& value) {
    m_linkedAccountsHasBeenSet = true;
    m_linkedAccounts = std::forward<LinkedAccountsT>(value);
  }
  template <typename LinkedAccountsT = Aws::Vector<LinkedAccount>>
  EmbeddedCryptoWallet& WithLinkedAccounts(LinkedAccountsT&& value) {
    SetLinkedAccounts(std::forward<LinkedAccountsT>(value));
    return *this;
  }
  template <typename LinkedAccountsT = LinkedAccount>
  EmbeddedCryptoWallet& AddLinkedAccounts(LinkedAccountsT&& value) {
    m_linkedAccountsHasBeenSet = true;
    m_linkedAccounts.emplace_back(std::forward<LinkedAccountsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The wallet address on the specified blockchain network.</p>
   */
  inline const Aws::String& GetWalletAddress() const { return m_walletAddress; }
  inline bool WalletAddressHasBeenSet() const { return m_walletAddressHasBeenSet; }
  template <typename WalletAddressT = Aws::String>
  void SetWalletAddress(WalletAddressT&& value) {
    m_walletAddressHasBeenSet = true;
    m_walletAddress = std::forward<WalletAddressT>(value);
  }
  template <typename WalletAddressT = Aws::String>
  EmbeddedCryptoWallet& WithWalletAddress(WalletAddressT&& value) {
    SetWalletAddress(std::forward<WalletAddressT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>URL for the end user to complete a provider-specific action such as wallet
   * linking or onboarding.</p>
   */
  inline const Aws::String& GetRedirectUrl() const { return m_redirectUrl; }
  inline bool RedirectUrlHasBeenSet() const { return m_redirectUrlHasBeenSet; }
  template <typename RedirectUrlT = Aws::String>
  void SetRedirectUrl(RedirectUrlT&& value) {
    m_redirectUrlHasBeenSet = true;
    m_redirectUrl = std::forward<RedirectUrlT>(value);
  }
  template <typename RedirectUrlT = Aws::String>
  EmbeddedCryptoWallet& WithRedirectUrl(RedirectUrlT&& value) {
    SetRedirectUrl(std::forward<RedirectUrlT>(value));
    return *this;
  }
  ///@}
 private:
  CryptoWalletNetwork m_network{CryptoWalletNetwork::NOT_SET};

  Aws::Vector<LinkedAccount> m_linkedAccounts;

  Aws::String m_walletAddress;

  Aws::String m_redirectUrl;
  bool m_networkHasBeenSet = false;
  bool m_linkedAccountsHasBeenSet = false;
  bool m_walletAddressHasBeenSet = false;
  bool m_redirectUrlHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
