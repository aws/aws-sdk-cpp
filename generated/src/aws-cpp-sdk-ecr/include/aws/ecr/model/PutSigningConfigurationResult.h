/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ecr/ECR_EXPORTS.h>
#include <aws/ecr/model/SigningConfiguration.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace ECR {
namespace Model {
class PutSigningConfigurationResult {
 public:
  AWS_ECR_API PutSigningConfigurationResult() = default;
  AWS_ECR_API PutSigningConfigurationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_ECR_API PutSigningConfigurationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The registry's updated signing configuration.</p>
   */
  inline const SigningConfiguration& GetSigningConfiguration() const { return m_signingConfiguration; }
  template <typename SigningConfigurationT = SigningConfiguration>
  void SetSigningConfiguration(SigningConfigurationT&& value) {
    m_signingConfigurationHasBeenSet = true;
    m_signingConfiguration = std::forward<SigningConfigurationT>(value);
  }
  template <typename SigningConfigurationT = SigningConfiguration>
  PutSigningConfigurationResult& WithSigningConfiguration(SigningConfigurationT&& value) {
    SetSigningConfiguration(std::forward<SigningConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::String& GetRequestId() const { return m_requestId; }
  template <typename RequestIdT = Aws::String>
  void SetRequestId(RequestIdT&& value) {
    m_requestIdHasBeenSet = true;
    m_requestId = std::forward<RequestIdT>(value);
  }
  template <typename RequestIdT = Aws::String>
  PutSigningConfigurationResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
 private:
  SigningConfiguration m_signingConfiguration;

  Aws::String m_requestId;
  bool m_signingConfigurationHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace ECR
}  // namespace Aws
