/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore/BedrockAgentCore_EXPORTS.h>
#include <aws/bedrock-agentcore/model/JwkEllipticCurve.h>
#include <aws/bedrock-agentcore/model/JwkKeyType.h>
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
 * <p>An elliptic curve public key in JSON Web Key (JWK) format, as described in
 * RFC 7518 section 6.2, used to bind a payment token to the agent.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-2024-02-28/DpopJwk">AWS
 * API Reference</a></p>
 */
class DpopJwk {
 public:
  AWS_BEDROCKAGENTCORE_API DpopJwk() = default;
  AWS_BEDROCKAGENTCORE_API DpopJwk(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORE_API DpopJwk& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The key type. The only valid value is <code>EC</code>.</p>
   */
  inline JwkKeyType GetKty() const { return m_kty; }
  inline bool KtyHasBeenSet() const { return m_ktyHasBeenSet; }
  inline void SetKty(JwkKeyType value) {
    m_ktyHasBeenSet = true;
    m_kty = value;
  }
  inline DpopJwk& WithKty(JwkKeyType value) {
    SetKty(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The elliptic curve of the key.</p>
   */
  inline JwkEllipticCurve GetCrv() const { return m_crv; }
  inline bool CrvHasBeenSet() const { return m_crvHasBeenSet; }
  inline void SetCrv(JwkEllipticCurve value) {
    m_crvHasBeenSet = true;
    m_crv = value;
  }
  inline DpopJwk& WithCrv(JwkEllipticCurve value) {
    SetCrv(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The x-coordinate of the elliptic curve point, base64url-encoded.</p>
   */
  inline const Aws::String& GetX() const { return m_x; }
  inline bool XHasBeenSet() const { return m_xHasBeenSet; }
  template <typename XT = Aws::String>
  void SetX(XT&& value) {
    m_xHasBeenSet = true;
    m_x = std::forward<XT>(value);
  }
  template <typename XT = Aws::String>
  DpopJwk& WithX(XT&& value) {
    SetX(std::forward<XT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The y-coordinate of the elliptic curve point, base64url-encoded.</p>
   */
  inline const Aws::String& GetY() const { return m_y; }
  inline bool YHasBeenSet() const { return m_yHasBeenSet; }
  template <typename YT = Aws::String>
  void SetY(YT&& value) {
    m_yHasBeenSet = true;
    m_y = std::forward<YT>(value);
  }
  template <typename YT = Aws::String>
  DpopJwk& WithY(YT&& value) {
    SetY(std::forward<YT>(value));
    return *this;
  }
  ///@}
 private:
  JwkKeyType m_kty{JwkKeyType::NOT_SET};

  JwkEllipticCurve m_crv{JwkEllipticCurve::NOT_SET};

  Aws::String m_x;

  Aws::String m_y;
  bool m_ktyHasBeenSet = false;
  bool m_crvHasBeenSet = false;
  bool m_xHasBeenSet = false;
  bool m_yHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
