/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/config/ConfigServiceRequest.h>
#include <aws/config/ConfigService_EXPORTS.h>
#include <aws/config/model/ConnectorConfiguration.h>
#include <aws/config/model/Tag.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <utility>

namespace Aws {
namespace ConfigService {
namespace Model {

/**
 */
class PutConnectorRequest : public ConfigServiceRequest {
 public:
  AWS_CONFIGSERVICE_API PutConnectorRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "PutConnector"; }

  AWS_CONFIGSERVICE_API Aws::String SerializePayload() const override;

  AWS_CONFIGSERVICE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>The provider-specific configuration for connecting to the third-party cloud
   * service provider.</p>
   */
  inline const ConnectorConfiguration& GetConnectorConfiguration() const { return m_connectorConfiguration; }
  inline bool ConnectorConfigurationHasBeenSet() const { return m_connectorConfigurationHasBeenSet; }
  template <typename ConnectorConfigurationT = ConnectorConfiguration>
  void SetConnectorConfiguration(ConnectorConfigurationT&& value) {
    m_connectorConfigurationHasBeenSet = true;
    m_connectorConfiguration = std::forward<ConnectorConfigurationT>(value);
  }
  template <typename ConnectorConfigurationT = ConnectorConfiguration>
  PutConnectorRequest& WithConnectorConfiguration(ConnectorConfigurationT&& value) {
    SetConnectorConfiguration(std::forward<ConnectorConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The tags for the connector. Each tag consists of a key and an optional value,
   * both of which you define.</p>
   */
  inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
  inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
  template <typename TagsT = Aws::Vector<Tag>>
  void SetTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags = std::forward<TagsT>(value);
  }
  template <typename TagsT = Aws::Vector<Tag>>
  PutConnectorRequest& WithTags(TagsT&& value) {
    SetTags(std::forward<TagsT>(value));
    return *this;
  }
  template <typename TagsT = Tag>
  PutConnectorRequest& AddTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags.emplace_back(std::forward<TagsT>(value));
    return *this;
  }
  ///@}
 private:
  ConnectorConfiguration m_connectorConfiguration;

  Aws::Vector<Tag> m_tags;
  bool m_connectorConfigurationHasBeenSet = false;
  bool m_tagsHasBeenSet = false;
};

}  // namespace Model
}  // namespace ConfigService
}  // namespace Aws
