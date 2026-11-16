/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/crt/cbor/Cbor.h>
#include <aws/health/Health_EXPORTS.h>

#include <utility>
namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Cbor {
class CborValue;
}  // namespace Cbor
}  // namespace Utils
namespace Health {
namespace Model {
class DescribeTagKeysForOrganizationResult {
 public:
  AWS_HEALTH_API DescribeTagKeysForOrganizationResult() = default;
  AWS_HEALTH_API DescribeTagKeysForOrganizationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Cbor::CborValue>& result);
  AWS_HEALTH_API DescribeTagKeysForOrganizationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Cbor::CborValue>& result);

  ///@{
  /**
   * <p>The list of configured tag keys for the organization and their status.</p>
   */
  inline const Aws::Vector<Aws::String>& GetKeys() const { return m_keys; }
  template <typename KeysT = Aws::Vector<Aws::String>>
  void SetKeys(KeysT&& value) {
    m_keysHasBeenSet = true;
    m_keys = std::forward<KeysT>(value);
  }
  template <typename KeysT = Aws::Vector<Aws::String>>
  DescribeTagKeysForOrganizationResult& WithKeys(KeysT&& value) {
    SetKeys(std::forward<KeysT>(value));
    return *this;
  }
  template <typename KeysT = Aws::String>
  DescribeTagKeysForOrganizationResult& AddKeys(KeysT&& value) {
    m_keysHasBeenSet = true;
    m_keys.emplace_back(std::forward<KeysT>(value));
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
  DescribeTagKeysForOrganizationResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::Vector<Aws::String> m_keys;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_keysHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace Health
}  // namespace Aws
