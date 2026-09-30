/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/crt/cbor/Cbor.h>
#include <aws/eventbridgev2/EventBridgeV2_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Cbor {
class CborValue;
}  // namespace Cbor
}  // namespace Utils
namespace EventBridgeV2 {
namespace Model {

/**
 * <p>HTTP invocation parameters for subscribers (API Gateway / API Destination).
 * Values are forwarded to the HTTP endpoint.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/eventbridgev2-2025-05-15/HttpParameters">AWS
 * API Reference</a></p>
 */
class HttpParameters {
 public:
  AWS_EVENTBRIDGEV2_API HttpParameters() = default;
  AWS_EVENTBRIDGEV2_API HttpParameters(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_EVENTBRIDGEV2_API HttpParameters& operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_EVENTBRIDGEV2_API void CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const;

  ///@{

  inline const Aws::Vector<Aws::String>& GetPathParameterValues() const { return m_pathParameterValues; }
  inline bool PathParameterValuesHasBeenSet() const { return m_pathParameterValuesHasBeenSet; }
  template <typename PathParameterValuesT = Aws::Vector<Aws::String>>
  void SetPathParameterValues(PathParameterValuesT&& value) {
    m_pathParameterValuesHasBeenSet = true;
    m_pathParameterValues = std::forward<PathParameterValuesT>(value);
  }
  template <typename PathParameterValuesT = Aws::Vector<Aws::String>>
  HttpParameters& WithPathParameterValues(PathParameterValuesT&& value) {
    SetPathParameterValues(std::forward<PathParameterValuesT>(value));
    return *this;
  }
  template <typename PathParameterValuesT = Aws::String>
  HttpParameters& AddPathParameterValues(PathParameterValuesT&& value) {
    m_pathParameterValuesHasBeenSet = true;
    m_pathParameterValues.emplace_back(std::forward<PathParameterValuesT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::Map<Aws::String, Aws::String>& GetHeaderParameters() const { return m_headerParameters; }
  inline bool HeaderParametersHasBeenSet() const { return m_headerParametersHasBeenSet; }
  template <typename HeaderParametersT = Aws::Map<Aws::String, Aws::String>>
  void SetHeaderParameters(HeaderParametersT&& value) {
    m_headerParametersHasBeenSet = true;
    m_headerParameters = std::forward<HeaderParametersT>(value);
  }
  template <typename HeaderParametersT = Aws::Map<Aws::String, Aws::String>>
  HttpParameters& WithHeaderParameters(HeaderParametersT&& value) {
    SetHeaderParameters(std::forward<HeaderParametersT>(value));
    return *this;
  }
  template <typename HeaderParametersKeyT = Aws::String, typename HeaderParametersValueT = Aws::String>
  HttpParameters& AddHeaderParameters(HeaderParametersKeyT&& key, HeaderParametersValueT&& value) {
    m_headerParametersHasBeenSet = true;
    m_headerParameters.emplace(std::forward<HeaderParametersKeyT>(key), std::forward<HeaderParametersValueT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::Map<Aws::String, Aws::String>& GetQueryStringParameters() const { return m_queryStringParameters; }
  inline bool QueryStringParametersHasBeenSet() const { return m_queryStringParametersHasBeenSet; }
  template <typename QueryStringParametersT = Aws::Map<Aws::String, Aws::String>>
  void SetQueryStringParameters(QueryStringParametersT&& value) {
    m_queryStringParametersHasBeenSet = true;
    m_queryStringParameters = std::forward<QueryStringParametersT>(value);
  }
  template <typename QueryStringParametersT = Aws::Map<Aws::String, Aws::String>>
  HttpParameters& WithQueryStringParameters(QueryStringParametersT&& value) {
    SetQueryStringParameters(std::forward<QueryStringParametersT>(value));
    return *this;
  }
  template <typename QueryStringParametersKeyT = Aws::String, typename QueryStringParametersValueT = Aws::String>
  HttpParameters& AddQueryStringParameters(QueryStringParametersKeyT&& key, QueryStringParametersValueT&& value) {
    m_queryStringParametersHasBeenSet = true;
    m_queryStringParameters.emplace(std::forward<QueryStringParametersKeyT>(key), std::forward<QueryStringParametersValueT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Timeout in seconds for each invocation of the target (1-30). String-typed
   * (not integer) so the value may be a JSONata expression.</p>
   */
  inline const Aws::String& GetInvocationTimeoutSeconds() const { return m_invocationTimeoutSeconds; }
  inline bool InvocationTimeoutSecondsHasBeenSet() const { return m_invocationTimeoutSecondsHasBeenSet; }
  template <typename InvocationTimeoutSecondsT = Aws::String>
  void SetInvocationTimeoutSeconds(InvocationTimeoutSecondsT&& value) {
    m_invocationTimeoutSecondsHasBeenSet = true;
    m_invocationTimeoutSeconds = std::forward<InvocationTimeoutSecondsT>(value);
  }
  template <typename InvocationTimeoutSecondsT = Aws::String>
  HttpParameters& WithInvocationTimeoutSeconds(InvocationTimeoutSecondsT&& value) {
    SetInvocationTimeoutSeconds(std::forward<InvocationTimeoutSecondsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<Aws::String> m_pathParameterValues;

  Aws::Map<Aws::String, Aws::String> m_headerParameters;

  Aws::Map<Aws::String, Aws::String> m_queryStringParameters;

  Aws::String m_invocationTimeoutSeconds;
  bool m_pathParameterValuesHasBeenSet = false;
  bool m_headerParametersHasBeenSet = false;
  bool m_queryStringParametersHasBeenSet = false;
  bool m_invocationTimeoutSecondsHasBeenSet = false;
};

}  // namespace Model
}  // namespace EventBridgeV2
}  // namespace Aws
