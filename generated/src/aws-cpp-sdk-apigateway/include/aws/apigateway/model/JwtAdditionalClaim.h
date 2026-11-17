/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apigateway/APIGateway_EXPORTS.h>
#include <aws/apigateway/model/JwtClaimFormat.h>
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
namespace APIGateway {
namespace Model {

/**
 * <p>An additional claim rule for an issuer.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/JwtAdditionalClaim">AWS
 * API Reference</a></p>
 */
class JwtAdditionalClaim {
 public:
  AWS_APIGATEWAY_API JwtAdditionalClaim() = default;
  AWS_APIGATEWAY_API JwtAdditionalClaim(Aws::Utils::Json::JsonView jsonValue);
  AWS_APIGATEWAY_API JwtAdditionalClaim& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_APIGATEWAY_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The name of the claim to check. The value cannot be empty and cannot be
   * <code>iss</code>, <code>aud</code>, <code>exp</code>, <code>nbf</code>,
   * <code>iat</code>, <code>scope</code>, or <code>scp</code>.</p>
   */
  inline const Aws::String& GetClaimName() const { return m_claimName; }
  inline bool ClaimNameHasBeenSet() const { return m_claimNameHasBeenSet; }
  template <typename ClaimNameT = Aws::String>
  void SetClaimName(ClaimNameT&& value) {
    m_claimNameHasBeenSet = true;
    m_claimName = std::forward<ClaimNameT>(value);
  }
  template <typename ClaimNameT = Aws::String>
  JwtAdditionalClaim& WithClaimName(ClaimNameT&& value) {
    SetClaimName(std::forward<ClaimNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The format of the claim value. The only valid value is
   * <code>SINGLE_STRING</code>.</p>
   */
  inline JwtClaimFormat GetFormat() const { return m_format; }
  inline bool FormatHasBeenSet() const { return m_formatHasBeenSet; }
  inline void SetFormat(JwtClaimFormat value) {
    m_formatHasBeenSet = true;
    m_format = value;
  }
  inline JwtAdditionalClaim& WithFormat(JwtClaimFormat value) {
    SetFormat(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies whether the claim must be present in the token. Defaults to
   * <code>false</code>. When <code>true</code>, the token must contain the
   * claim.</p>
   */
  inline bool GetRequired() const { return m_required; }
  inline bool RequiredHasBeenSet() const { return m_requiredHasBeenSet; }
  inline void SetRequired(bool value) {
    m_requiredHasBeenSet = true;
    m_required = value;
  }
  inline JwtAdditionalClaim& WithRequired(bool value) {
    SetRequired(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The accepted value for the claim. The value cannot be empty. When a value is
   * specified, the claim must match it exactly, and the match is case-sensitive.
   * When no value is specified, the claim only has to be present.</p>
   */
  inline const Aws::Vector<Aws::String>& GetExpectedValues() const { return m_expectedValues; }
  inline bool ExpectedValuesHasBeenSet() const { return m_expectedValuesHasBeenSet; }
  template <typename ExpectedValuesT = Aws::Vector<Aws::String>>
  void SetExpectedValues(ExpectedValuesT&& value) {
    m_expectedValuesHasBeenSet = true;
    m_expectedValues = std::forward<ExpectedValuesT>(value);
  }
  template <typename ExpectedValuesT = Aws::Vector<Aws::String>>
  JwtAdditionalClaim& WithExpectedValues(ExpectedValuesT&& value) {
    SetExpectedValues(std::forward<ExpectedValuesT>(value));
    return *this;
  }
  template <typename ExpectedValuesT = Aws::String>
  JwtAdditionalClaim& AddExpectedValues(ExpectedValuesT&& value) {
    m_expectedValuesHasBeenSet = true;
    m_expectedValues.emplace_back(std::forward<ExpectedValuesT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_claimName;

  JwtClaimFormat m_format{JwtClaimFormat::NOT_SET};

  bool m_required{false};

  Aws::Vector<Aws::String> m_expectedValues;
  bool m_claimNameHasBeenSet = false;
  bool m_formatHasBeenSet = false;
  bool m_requiredHasBeenSet = false;
  bool m_expectedValuesHasBeenSet = false;
};

}  // namespace Model
}  // namespace APIGateway
}  // namespace Aws
