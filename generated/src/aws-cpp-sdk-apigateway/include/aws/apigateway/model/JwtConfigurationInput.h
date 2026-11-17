/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apigateway/APIGateway_EXPORTS.h>
#include <aws/apigateway/model/JwtIssuerInput.h>
#include <aws/apigateway/model/JwtSigningAlgorithm.h>
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
 * <p>The JWT configuration supplied for a JWT authorizer.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/JwtConfigurationInput">AWS
 * API Reference</a></p>
 */
class JwtConfigurationInput {
 public:
  AWS_APIGATEWAY_API JwtConfigurationInput() = default;
  AWS_APIGATEWAY_API JwtConfigurationInput(Aws::Utils::Json::JsonView jsonValue);
  AWS_APIGATEWAY_API JwtConfigurationInput& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_APIGATEWAY_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The issuers that the authorizer trusts. Issuer URLs must be unique.</p>
   */
  inline const Aws::Vector<JwtIssuerInput>& GetIssuers() const { return m_issuers; }
  inline bool IssuersHasBeenSet() const { return m_issuersHasBeenSet; }
  template <typename IssuersT = Aws::Vector<JwtIssuerInput>>
  void SetIssuers(IssuersT&& value) {
    m_issuersHasBeenSet = true;
    m_issuers = std::forward<IssuersT>(value);
  }
  template <typename IssuersT = Aws::Vector<JwtIssuerInput>>
  JwtConfigurationInput& WithIssuers(IssuersT&& value) {
    SetIssuers(std::forward<IssuersT>(value));
    return *this;
  }
  template <typename IssuersT = JwtIssuerInput>
  JwtConfigurationInput& AddIssuers(IssuersT&& value) {
    m_issuersHasBeenSet = true;
    m_issuers.emplace_back(std::forward<IssuersT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The signing algorithms that the authorizer accepts, applied to every issuer.
   * Valid values are <code>RS256</code>, <code>RS384</code>, <code>RS512</code>,
   * <code>ES256</code>, <code>ES384</code>, and <code>ES512</code>.</p>
   */
  inline const Aws::Vector<JwtSigningAlgorithm>& GetDefaultAlgorithms() const { return m_defaultAlgorithms; }
  inline bool DefaultAlgorithmsHasBeenSet() const { return m_defaultAlgorithmsHasBeenSet; }
  template <typename DefaultAlgorithmsT = Aws::Vector<JwtSigningAlgorithm>>
  void SetDefaultAlgorithms(DefaultAlgorithmsT&& value) {
    m_defaultAlgorithmsHasBeenSet = true;
    m_defaultAlgorithms = std::forward<DefaultAlgorithmsT>(value);
  }
  template <typename DefaultAlgorithmsT = Aws::Vector<JwtSigningAlgorithm>>
  JwtConfigurationInput& WithDefaultAlgorithms(DefaultAlgorithmsT&& value) {
    SetDefaultAlgorithms(std::forward<DefaultAlgorithmsT>(value));
    return *this;
  }
  inline JwtConfigurationInput& AddDefaultAlgorithms(JwtSigningAlgorithm value) {
    m_defaultAlgorithmsHasBeenSet = true;
    m_defaultAlgorithms.push_back(value);
    return *this;
  }
  ///@}
 private:
  Aws::Vector<JwtIssuerInput> m_issuers;

  Aws::Vector<JwtSigningAlgorithm> m_defaultAlgorithms;
  bool m_issuersHasBeenSet = false;
  bool m_defaultAlgorithmsHasBeenSet = false;
};

}  // namespace Model
}  // namespace APIGateway
}  // namespace Aws
