/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore/BedrockAgentCore_EXPORTS.h>
#include <aws/bedrock-agentcore/model/BlockchainChainId.h>
#include <aws/bedrock-agentcore/model/CryptoWalletNetwork.h>
#include <aws/bedrock-agentcore/model/InstrumentBalanceToken.h>
#include <aws/core/utils/memory/stl/AWSString.h>

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
 * <p>A single token balance entry.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-2024-02-28/TokenBalance">AWS
 * API Reference</a></p>
 */
class TokenBalance {
 public:
  AWS_BEDROCKAGENTCORE_API TokenBalance() = default;
  AWS_BEDROCKAGENTCORE_API TokenBalance(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORE_API TokenBalance& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Raw balance in the smallest denomination (e.g., USDC base units where 1 USDC
   * = 1000000).</p>
   */
  inline const Aws::String& GetAmount() const { return m_amount; }
  inline bool AmountHasBeenSet() const { return m_amountHasBeenSet; }
  template <typename AmountT = Aws::String>
  void SetAmount(AmountT&& value) {
    m_amountHasBeenSet = true;
    m_amount = std::forward<AmountT>(value);
  }
  template <typename AmountT = Aws::String>
  TokenBalance& WithAmount(AmountT&& value) {
    SetAmount(std::forward<AmountT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Number of decimal places for the token (e.g., 6 for USDC).</p>
   */
  inline int GetDecimals() const { return m_decimals; }
  inline bool DecimalsHasBeenSet() const { return m_decimalsHasBeenSet; }
  inline void SetDecimals(int value) {
    m_decimalsHasBeenSet = true;
    m_decimals = value;
  }
  inline TokenBalance& WithDecimals(int value) {
    SetDecimals(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The supported token for this balance.</p>
   */
  inline InstrumentBalanceToken GetToken() const { return m_token; }
  inline bool TokenHasBeenSet() const { return m_tokenHasBeenSet; }
  inline void SetToken(InstrumentBalanceToken value) {
    m_tokenHasBeenSet = true;
    m_token = value;
  }
  inline TokenBalance& WithToken(InstrumentBalanceToken value) {
    SetToken(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The blockchain network family (ETHEREUM or SOLANA).</p>
   */
  inline CryptoWalletNetwork GetNetwork() const { return m_network; }
  inline bool NetworkHasBeenSet() const { return m_networkHasBeenSet; }
  inline void SetNetwork(CryptoWalletNetwork value) {
    m_networkHasBeenSet = true;
    m_network = value;
  }
  inline TokenBalance& WithNetwork(CryptoWalletNetwork value) {
    SetNetwork(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The specific blockchain chain.</p>
   */
  inline BlockchainChainId GetChain() const { return m_chain; }
  inline bool ChainHasBeenSet() const { return m_chainHasBeenSet; }
  inline void SetChain(BlockchainChainId value) {
    m_chainHasBeenSet = true;
    m_chain = value;
  }
  inline TokenBalance& WithChain(BlockchainChainId value) {
    SetChain(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_amount;

  int m_decimals{0};

  InstrumentBalanceToken m_token{InstrumentBalanceToken::NOT_SET};

  CryptoWalletNetwork m_network{CryptoWalletNetwork::NOT_SET};

  BlockchainChainId m_chain{BlockchainChainId::NOT_SET};
  bool m_amountHasBeenSet = false;
  bool m_decimalsHasBeenSet = false;
  bool m_tokenHasBeenSet = false;
  bool m_networkHasBeenSet = false;
  bool m_chainHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
