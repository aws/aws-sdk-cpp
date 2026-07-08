/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/config/ConfigServiceRequest.h>
#include <aws/config/ConfigService_EXPORTS.h>
#include <aws/config/model/ScopeConfiguration.h>
#include <aws/config/model/Tag.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <utility>

namespace Aws {
namespace ConfigService {
namespace Model {

/**
 */
class PutThirdPartyServiceLinkedConfigurationRecorderRequest : public ConfigServiceRequest {
 public:
  AWS_CONFIGSERVICE_API PutThirdPartyServiceLinkedConfigurationRecorderRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "PutThirdPartyServiceLinkedConfigurationRecorder"; }

  AWS_CONFIGSERVICE_API Aws::String SerializePayload() const override;

  AWS_CONFIGSERVICE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>The service principal of the Amazon Web Services service for the
   * service-linked configuration recorder that you want to create.</p>
   */
  inline const Aws::String& GetServicePrincipal() const { return m_servicePrincipal; }
  inline bool ServicePrincipalHasBeenSet() const { return m_servicePrincipalHasBeenSet; }
  template <typename ServicePrincipalT = Aws::String>
  void SetServicePrincipal(ServicePrincipalT&& value) {
    m_servicePrincipalHasBeenSet = true;
    m_servicePrincipal = std::forward<ServicePrincipalT>(value);
  }
  template <typename ServicePrincipalT = Aws::String>
  PutThirdPartyServiceLinkedConfigurationRecorderRequest& WithServicePrincipal(ServicePrincipalT&& value) {
    SetServicePrincipal(std::forward<ServicePrincipalT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the connector that specifies the connection
   * between the third-party cloud service provider and Config. The specified
   * connector must exist.</p>
   */
  inline const Aws::String& GetConnectorArn() const { return m_connectorArn; }
  inline bool ConnectorArnHasBeenSet() const { return m_connectorArnHasBeenSet; }
  template <typename ConnectorArnT = Aws::String>
  void SetConnectorArn(ConnectorArnT&& value) {
    m_connectorArnHasBeenSet = true;
    m_connectorArn = std::forward<ConnectorArnT>(value);
  }
  template <typename ConnectorArnT = Aws::String>
  PutThirdPartyServiceLinkedConfigurationRecorderRequest& WithConnectorArn(ConnectorArnT&& value) {
    SetConnectorArn(std::forward<ConnectorArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies the scope of resources to record from the third-party cloud service
   * provider.</p>
   */
  inline const ScopeConfiguration& GetScopeConfiguration() const { return m_scopeConfiguration; }
  inline bool ScopeConfigurationHasBeenSet() const { return m_scopeConfigurationHasBeenSet; }
  template <typename ScopeConfigurationT = ScopeConfiguration>
  void SetScopeConfiguration(ScopeConfigurationT&& value) {
    m_scopeConfigurationHasBeenSet = true;
    m_scopeConfiguration = std::forward<ScopeConfigurationT>(value);
  }
  template <typename ScopeConfigurationT = ScopeConfiguration>
  PutThirdPartyServiceLinkedConfigurationRecorderRequest& WithScopeConfiguration(ScopeConfigurationT&& value) {
    SetScopeConfiguration(std::forward<ScopeConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The tags for a service-linked configuration recorder. Each tag consists of a
   * key and an optional value, both of which you define.</p>
   */
  inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
  inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
  template <typename TagsT = Aws::Vector<Tag>>
  void SetTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags = std::forward<TagsT>(value);
  }
  template <typename TagsT = Aws::Vector<Tag>>
  PutThirdPartyServiceLinkedConfigurationRecorderRequest& WithTags(TagsT&& value) {
    SetTags(std::forward<TagsT>(value));
    return *this;
  }
  template <typename TagsT = Tag>
  PutThirdPartyServiceLinkedConfigurationRecorderRequest& AddTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags.emplace_back(std::forward<TagsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_servicePrincipal;

  Aws::String m_connectorArn;

  ScopeConfiguration m_scopeConfiguration;

  Aws::Vector<Tag> m_tags;
  bool m_servicePrincipalHasBeenSet = false;
  bool m_connectorArnHasBeenSet = false;
  bool m_scopeConfigurationHasBeenSet = false;
  bool m_tagsHasBeenSet = false;
};

}  // namespace Model
}  // namespace ConfigService
}  // namespace Aws
