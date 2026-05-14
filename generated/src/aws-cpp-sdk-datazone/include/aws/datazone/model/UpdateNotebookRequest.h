/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/UUID.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/datazone/DataZoneRequest.h>
#include <aws/datazone/DataZone_EXPORTS.h>
#include <aws/datazone/model/CellInformation.h>
#include <aws/datazone/model/EnvironmentConfig.h>
#include <aws/datazone/model/NotebookStatus.h>

#include <utility>

namespace Aws {
namespace DataZone {
namespace Model {

/**
 */
class UpdateNotebookRequest : public DataZoneRequest {
 public:
  AWS_DATAZONE_API UpdateNotebookRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "UpdateNotebook"; }

  AWS_DATAZONE_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The identifier of the Amazon SageMaker Unified Studio domain in which the
   * notebook exists.</p>
   */
  inline const Aws::String& GetDomainIdentifier() const { return m_domainIdentifier; }
  inline bool DomainIdentifierHasBeenSet() const { return m_domainIdentifierHasBeenSet; }
  template <typename DomainIdentifierT = Aws::String>
  void SetDomainIdentifier(DomainIdentifierT&& value) {
    m_domainIdentifierHasBeenSet = true;
    m_domainIdentifier = std::forward<DomainIdentifierT>(value);
  }
  template <typename DomainIdentifierT = Aws::String>
  UpdateNotebookRequest& WithDomainIdentifier(DomainIdentifierT&& value) {
    SetDomainIdentifier(std::forward<DomainIdentifierT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The identifier of the notebook to update.</p>
   */
  inline const Aws::String& GetIdentifier() const { return m_identifier; }
  inline bool IdentifierHasBeenSet() const { return m_identifierHasBeenSet; }
  template <typename IdentifierT = Aws::String>
  void SetIdentifier(IdentifierT&& value) {
    m_identifierHasBeenSet = true;
    m_identifier = std::forward<IdentifierT>(value);
  }
  template <typename IdentifierT = Aws::String>
  UpdateNotebookRequest& WithIdentifier(IdentifierT&& value) {
    SetIdentifier(std::forward<IdentifierT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The updated description of the notebook.</p>
   */
  inline const Aws::String& GetDescription() const { return m_description; }
  inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
  template <typename DescriptionT = Aws::String>
  void SetDescription(DescriptionT&& value) {
    m_descriptionHasBeenSet = true;
    m_description = std::forward<DescriptionT>(value);
  }
  template <typename DescriptionT = Aws::String>
  UpdateNotebookRequest& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The updated status of the notebook.</p>
   */
  inline NotebookStatus GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  inline void SetStatus(NotebookStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline UpdateNotebookRequest& WithStatus(NotebookStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The updated name of the notebook.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  UpdateNotebookRequest& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The updated ordered list of cells in the notebook.</p>
   */
  inline const Aws::Vector<CellInformation>& GetCellOrder() const { return m_cellOrder; }
  inline bool CellOrderHasBeenSet() const { return m_cellOrderHasBeenSet; }
  template <typename CellOrderT = Aws::Vector<CellInformation>>
  void SetCellOrder(CellOrderT&& value) {
    m_cellOrderHasBeenSet = true;
    m_cellOrder = std::forward<CellOrderT>(value);
  }
  template <typename CellOrderT = Aws::Vector<CellInformation>>
  UpdateNotebookRequest& WithCellOrder(CellOrderT&& value) {
    SetCellOrder(std::forward<CellOrderT>(value));
    return *this;
  }
  template <typename CellOrderT = CellInformation>
  UpdateNotebookRequest& AddCellOrder(CellOrderT&& value) {
    m_cellOrderHasBeenSet = true;
    m_cellOrder.emplace_back(std::forward<CellOrderT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The updated metadata for the notebook, specified as key-value pairs.</p>
   */
  inline const Aws::Map<Aws::String, Aws::String>& GetMetadata() const { return m_metadata; }
  inline bool MetadataHasBeenSet() const { return m_metadataHasBeenSet; }
  template <typename MetadataT = Aws::Map<Aws::String, Aws::String>>
  void SetMetadata(MetadataT&& value) {
    m_metadataHasBeenSet = true;
    m_metadata = std::forward<MetadataT>(value);
  }
  template <typename MetadataT = Aws::Map<Aws::String, Aws::String>>
  UpdateNotebookRequest& WithMetadata(MetadataT&& value) {
    SetMetadata(std::forward<MetadataT>(value));
    return *this;
  }
  template <typename MetadataKeyT = Aws::String, typename MetadataValueT = Aws::String>
  UpdateNotebookRequest& AddMetadata(MetadataKeyT&& key, MetadataValueT&& value) {
    m_metadataHasBeenSet = true;
    m_metadata.emplace(std::forward<MetadataKeyT>(key), std::forward<MetadataValueT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The updated sensitive parameters for the notebook, specified as key-value
   * pairs.</p>
   */
  inline const Aws::Map<Aws::String, Aws::String>& GetParameters() const { return m_parameters; }
  inline bool ParametersHasBeenSet() const { return m_parametersHasBeenSet; }
  template <typename ParametersT = Aws::Map<Aws::String, Aws::String>>
  void SetParameters(ParametersT&& value) {
    m_parametersHasBeenSet = true;
    m_parameters = std::forward<ParametersT>(value);
  }
  template <typename ParametersT = Aws::Map<Aws::String, Aws::String>>
  UpdateNotebookRequest& WithParameters(ParametersT&& value) {
    SetParameters(std::forward<ParametersT>(value));
    return *this;
  }
  template <typename ParametersKeyT = Aws::String, typename ParametersValueT = Aws::String>
  UpdateNotebookRequest& AddParameters(ParametersKeyT&& key, ParametersValueT&& value) {
    m_parametersHasBeenSet = true;
    m_parameters.emplace(std::forward<ParametersKeyT>(key), std::forward<ParametersValueT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The updated environment configuration for the notebook.</p>
   */
  inline const EnvironmentConfig& GetEnvironmentConfiguration() const { return m_environmentConfiguration; }
  inline bool EnvironmentConfigurationHasBeenSet() const { return m_environmentConfigurationHasBeenSet; }
  template <typename EnvironmentConfigurationT = EnvironmentConfig>
  void SetEnvironmentConfiguration(EnvironmentConfigurationT&& value) {
    m_environmentConfigurationHasBeenSet = true;
    m_environmentConfiguration = std::forward<EnvironmentConfigurationT>(value);
  }
  template <typename EnvironmentConfigurationT = EnvironmentConfig>
  UpdateNotebookRequest& WithEnvironmentConfiguration(EnvironmentConfigurationT&& value) {
    SetEnvironmentConfiguration(std::forward<EnvironmentConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A unique, case-sensitive identifier to ensure idempotency of the request.
   * This field is automatically populated if not provided.</p>
   */
  inline const Aws::String& GetClientToken() const { return m_clientToken; }
  inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
  template <typename ClientTokenT = Aws::String>
  void SetClientToken(ClientTokenT&& value) {
    m_clientTokenHasBeenSet = true;
    m_clientToken = std::forward<ClientTokenT>(value);
  }
  template <typename ClientTokenT = Aws::String>
  UpdateNotebookRequest& WithClientToken(ClientTokenT&& value) {
    SetClientToken(std::forward<ClientTokenT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_domainIdentifier;

  Aws::String m_identifier;

  Aws::String m_description;

  NotebookStatus m_status{NotebookStatus::NOT_SET};

  Aws::String m_name;

  Aws::Vector<CellInformation> m_cellOrder;

  Aws::Map<Aws::String, Aws::String> m_metadata;

  Aws::Map<Aws::String, Aws::String> m_parameters;

  EnvironmentConfig m_environmentConfiguration;

  Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};
  bool m_domainIdentifierHasBeenSet = false;
  bool m_identifierHasBeenSet = false;
  bool m_descriptionHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_nameHasBeenSet = false;
  bool m_cellOrderHasBeenSet = false;
  bool m_metadataHasBeenSet = false;
  bool m_parametersHasBeenSet = false;
  bool m_environmentConfigurationHasBeenSet = false;
  bool m_clientTokenHasBeenSet = true;
};

}  // namespace Model
}  // namespace DataZone
}  // namespace Aws
