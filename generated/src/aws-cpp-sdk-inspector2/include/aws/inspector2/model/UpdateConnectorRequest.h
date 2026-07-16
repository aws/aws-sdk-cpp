/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/inspector2/Inspector2Request.h>
#include <aws/inspector2/Inspector2_EXPORTS.h>
#include <aws/inspector2/model/ProviderDetailUpdate.h>

#include <utility>

namespace Aws {
namespace Inspector2 {
namespace Model {

/**
 */
class UpdateConnectorRequest : public Inspector2Request {
 public:
  AWS_INSPECTOR2_API UpdateConnectorRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "UpdateConnector"; }

  AWS_INSPECTOR2_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the connector to update.</p>
   */
  inline const Aws::String& GetConnectorArn() const { return m_connectorArn; }
  inline bool ConnectorArnHasBeenSet() const { return m_connectorArnHasBeenSet; }
  template <typename ConnectorArnT = Aws::String>
  void SetConnectorArn(ConnectorArnT&& value) {
    m_connectorArnHasBeenSet = true;
    m_connectorArn = std::forward<ConnectorArnT>(value);
  }
  template <typename ConnectorArnT = Aws::String>
  UpdateConnectorRequest& WithConnectorArn(ConnectorArnT&& value) {
    SetConnectorArn(std::forward<ConnectorArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The updated description of the connector.</p>
   */
  inline const Aws::String& GetDescription() const { return m_description; }
  inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
  template <typename DescriptionT = Aws::String>
  void SetDescription(DescriptionT&& value) {
    m_descriptionHasBeenSet = true;
    m_description = std::forward<DescriptionT>(value);
  }
  template <typename DescriptionT = Aws::String>
  UpdateConnectorRequest& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The updated provider-specific configuration details for the connector.</p>
   */
  inline const ProviderDetailUpdate& GetProviderDetail() const { return m_providerDetail; }
  inline bool ProviderDetailHasBeenSet() const { return m_providerDetailHasBeenSet; }
  template <typename ProviderDetailT = ProviderDetailUpdate>
  void SetProviderDetail(ProviderDetailT&& value) {
    m_providerDetailHasBeenSet = true;
    m_providerDetail = std::forward<ProviderDetailT>(value);
  }
  template <typename ProviderDetailT = ProviderDetailUpdate>
  UpdateConnectorRequest& WithProviderDetail(ProviderDetailT&& value) {
    SetProviderDetail(std::forward<ProviderDetailT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_connectorArn;

  Aws::String m_description;

  ProviderDetailUpdate m_providerDetail;
  bool m_connectorArnHasBeenSet = false;
  bool m_descriptionHasBeenSet = false;
  bool m_providerDetailHasBeenSet = false;
};

}  // namespace Model
}  // namespace Inspector2
}  // namespace Aws
