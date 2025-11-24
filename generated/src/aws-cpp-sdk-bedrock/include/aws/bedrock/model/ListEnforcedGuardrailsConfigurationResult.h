/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock/Bedrock_EXPORTS.h>
#include <aws/bedrock/model/AccountEnforcedGuardrailOutputConfiguration.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace Bedrock {
namespace Model {
class ListEnforcedGuardrailsConfigurationResult {
 public:
  AWS_BEDROCK_API ListEnforcedGuardrailsConfigurationResult() = default;
  AWS_BEDROCK_API ListEnforcedGuardrailsConfigurationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_BEDROCK_API ListEnforcedGuardrailsConfigurationResult& operator=(
      const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>Array of AccountEnforcedGuardrailOutputConfiguration objects.</p>
   */
  inline const Aws::Vector<AccountEnforcedGuardrailOutputConfiguration>& GetGuardrailsConfig() const { return m_guardrailsConfig; }
  template <typename GuardrailsConfigT = Aws::Vector<AccountEnforcedGuardrailOutputConfiguration>>
  void SetGuardrailsConfig(GuardrailsConfigT&& value) {
    m_guardrailsConfigHasBeenSet = true;
    m_guardrailsConfig = std::forward<GuardrailsConfigT>(value);
  }
  template <typename GuardrailsConfigT = Aws::Vector<AccountEnforcedGuardrailOutputConfiguration>>
  ListEnforcedGuardrailsConfigurationResult& WithGuardrailsConfig(GuardrailsConfigT&& value) {
    SetGuardrailsConfig(std::forward<GuardrailsConfigT>(value));
    return *this;
  }
  template <typename GuardrailsConfigT = AccountEnforcedGuardrailOutputConfiguration>
  ListEnforcedGuardrailsConfigurationResult& AddGuardrailsConfig(GuardrailsConfigT&& value) {
    m_guardrailsConfigHasBeenSet = true;
    m_guardrailsConfig.emplace_back(std::forward<GuardrailsConfigT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Opaque continuation token of previous paginated response.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  ListEnforcedGuardrailsConfigurationResult& WithNextToken(NextTokenT&& value) {
    SetNextToken(std::forward<NextTokenT>(value));
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
  ListEnforcedGuardrailsConfigurationResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<AccountEnforcedGuardrailOutputConfiguration> m_guardrailsConfig;
  bool m_guardrailsConfigHasBeenSet = false;

  Aws::String m_nextToken;
  bool m_nextTokenHasBeenSet = false;

  Aws::String m_requestId;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace Bedrock
}  // namespace Aws
