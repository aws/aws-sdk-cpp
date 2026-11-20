/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apiportal/APIPortal_EXPORTS.h>
#include <aws/apiportal/model/OrganizationDiscoveryConfigurationData.h>
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace APIPortal {
namespace Model {
class PutOrganizationDiscoveryConfigurationResult {
 public:
  AWS_APIPORTAL_API PutOrganizationDiscoveryConfigurationResult() = default;
  AWS_APIPORTAL_API PutOrganizationDiscoveryConfigurationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_APIPORTAL_API PutOrganizationDiscoveryConfigurationResult& operator=(
      const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The discovery configuration for the organization.</p>
   */
  inline const OrganizationDiscoveryConfigurationData& GetDiscoveryConfiguration() const { return m_discoveryConfiguration; }
  template <typename DiscoveryConfigurationT = OrganizationDiscoveryConfigurationData>
  void SetDiscoveryConfiguration(DiscoveryConfigurationT&& value) {
    m_discoveryConfigurationHasBeenSet = true;
    m_discoveryConfiguration = std::forward<DiscoveryConfigurationT>(value);
  }
  template <typename DiscoveryConfigurationT = OrganizationDiscoveryConfigurationData>
  PutOrganizationDiscoveryConfigurationResult& WithDiscoveryConfiguration(DiscoveryConfigurationT&& value) {
    SetDiscoveryConfiguration(std::forward<DiscoveryConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
  template <typename TagsT = Aws::Map<Aws::String, Aws::String>>
  void SetTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags = std::forward<TagsT>(value);
  }
  template <typename TagsT = Aws::Map<Aws::String, Aws::String>>
  PutOrganizationDiscoveryConfigurationResult& WithTags(TagsT&& value) {
    SetTags(std::forward<TagsT>(value));
    return *this;
  }
  template <typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
  PutOrganizationDiscoveryConfigurationResult& AddTags(TagsKeyT&& key, TagsValueT&& value) {
    m_tagsHasBeenSet = true;
    m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value));
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
  PutOrganizationDiscoveryConfigurationResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  OrganizationDiscoveryConfigurationData m_discoveryConfiguration;

  Aws::Map<Aws::String, Aws::String> m_tags;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_discoveryConfigurationHasBeenSet = false;
  bool m_tagsHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace APIPortal
}  // namespace Aws
