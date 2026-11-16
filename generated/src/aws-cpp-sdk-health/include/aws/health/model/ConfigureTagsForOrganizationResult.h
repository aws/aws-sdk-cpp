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
#include <aws/health/model/TagKeyForOrganization.h>

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
class ConfigureTagsForOrganizationResult {
 public:
  AWS_HEALTH_API ConfigureTagsForOrganizationResult() = default;
  AWS_HEALTH_API ConfigureTagsForOrganizationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Cbor::CborValue>& result);
  AWS_HEALTH_API ConfigureTagsForOrganizationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Cbor::CborValue>& result);

  ///@{
  /**
   * <p>The list of tag keys that were successfully configured for the
   * organization.</p>
   */
  inline const Aws::Vector<TagKeyForOrganization>& GetConfiguredTagKeys() const { return m_configuredTagKeys; }
  template <typename ConfiguredTagKeysT = Aws::Vector<TagKeyForOrganization>>
  void SetConfiguredTagKeys(ConfiguredTagKeysT&& value) {
    m_configuredTagKeysHasBeenSet = true;
    m_configuredTagKeys = std::forward<ConfiguredTagKeysT>(value);
  }
  template <typename ConfiguredTagKeysT = Aws::Vector<TagKeyForOrganization>>
  ConfigureTagsForOrganizationResult& WithConfiguredTagKeys(ConfiguredTagKeysT&& value) {
    SetConfiguredTagKeys(std::forward<ConfiguredTagKeysT>(value));
    return *this;
  }
  template <typename ConfiguredTagKeysT = TagKeyForOrganization>
  ConfigureTagsForOrganizationResult& AddConfiguredTagKeys(ConfiguredTagKeysT&& value) {
    m_configuredTagKeysHasBeenSet = true;
    m_configuredTagKeys.emplace_back(std::forward<ConfiguredTagKeysT>(value));
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
  ConfigureTagsForOrganizationResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::Vector<TagKeyForOrganization> m_configuredTagKeys;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_configuredTagKeysHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace Health
}  // namespace Aws
