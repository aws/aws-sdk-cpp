/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/UUID.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/inspector2/Inspector2Request.h>
#include <aws/inspector2/Inspector2_EXPORTS.h>
#include <aws/inspector2/model/ConnectorCloudProvider.h>
#include <aws/inspector2/model/ProviderDetailCreate.h>

#include <utility>

namespace Aws {
namespace Inspector2 {
namespace Model {

/**
 */
class CreateConnectorRequest : public Inspector2Request {
 public:
  AWS_INSPECTOR2_API CreateConnectorRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "CreateConnector"; }

  AWS_INSPECTOR2_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>A unique, case-sensitive identifier that you provide to ensure that the
   * operation completes no more than one time. If this token matches a previous
   * request, the service ignores the request but does not return an error.</p>
   */
  inline const Aws::String& GetClientToken() const { return m_clientToken; }
  inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
  template <typename ClientTokenT = Aws::String>
  void SetClientToken(ClientTokenT&& value) {
    m_clientTokenHasBeenSet = true;
    m_clientToken = std::forward<ClientTokenT>(value);
  }
  template <typename ClientTokenT = Aws::String>
  CreateConnectorRequest& WithClientToken(ClientTokenT&& value) {
    SetClientToken(std::forward<ClientTokenT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the connector.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  CreateConnectorRequest& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The cloud provider for the connector.</p>
   */
  inline ConnectorCloudProvider GetProvider() const { return m_provider; }
  inline bool ProviderHasBeenSet() const { return m_providerHasBeenSet; }
  inline void SetProvider(ConnectorCloudProvider value) {
    m_providerHasBeenSet = true;
    m_provider = value;
  }
  inline CreateConnectorRequest& WithProvider(ConnectorCloudProvider value) {
    SetProvider(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A description of the connector.</p>
   */
  inline const Aws::String& GetDescription() const { return m_description; }
  inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
  template <typename DescriptionT = Aws::String>
  void SetDescription(DescriptionT&& value) {
    m_descriptionHasBeenSet = true;
    m_description = std::forward<DescriptionT>(value);
  }
  template <typename DescriptionT = Aws::String>
  CreateConnectorRequest& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The provider-specific configuration details for the connector.</p>
   */
  inline const ProviderDetailCreate& GetProviderDetail() const { return m_providerDetail; }
  inline bool ProviderDetailHasBeenSet() const { return m_providerDetailHasBeenSet; }
  template <typename ProviderDetailT = ProviderDetailCreate>
  void SetProviderDetail(ProviderDetailT&& value) {
    m_providerDetailHasBeenSet = true;
    m_providerDetail = std::forward<ProviderDetailT>(value);
  }
  template <typename ProviderDetailT = ProviderDetailCreate>
  CreateConnectorRequest& WithProviderDetail(ProviderDetailT&& value) {
    SetProviderDetail(std::forward<ProviderDetailT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The tags to apply to the connector.</p>
   */
  inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
  inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
  template <typename TagsT = Aws::Map<Aws::String, Aws::String>>
  void SetTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags = std::forward<TagsT>(value);
  }
  template <typename TagsT = Aws::Map<Aws::String, Aws::String>>
  CreateConnectorRequest& WithTags(TagsT&& value) {
    SetTags(std::forward<TagsT>(value));
    return *this;
  }
  template <typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
  CreateConnectorRequest& AddTags(TagsKeyT&& key, TagsValueT&& value) {
    m_tagsHasBeenSet = true;
    m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};

  Aws::String m_name;

  ConnectorCloudProvider m_provider{ConnectorCloudProvider::NOT_SET};

  Aws::String m_description;

  ProviderDetailCreate m_providerDetail;

  Aws::Map<Aws::String, Aws::String> m_tags;
  bool m_clientTokenHasBeenSet = true;
  bool m_nameHasBeenSet = false;
  bool m_providerHasBeenSet = false;
  bool m_descriptionHasBeenSet = false;
  bool m_providerDetailHasBeenSet = false;
  bool m_tagsHasBeenSet = false;
};

}  // namespace Model
}  // namespace Inspector2
}  // namespace Aws
