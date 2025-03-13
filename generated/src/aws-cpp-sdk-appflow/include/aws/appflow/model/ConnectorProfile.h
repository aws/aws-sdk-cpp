/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appflow/Appflow_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/appflow/model/ConnectorType.h>
#include <aws/appflow/model/ConnectionMode.h>
#include <aws/appflow/model/ConnectorProfileProperties.h>
#include <aws/core/utils/DateTime.h>
#include <aws/appflow/model/PrivateConnectionProvisioningState.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace Appflow
{
namespace Model
{

  /**
   * <p> Describes an instance of a connector. This includes the provided name,
   * credentials ARN, connection-mode, and so on. To keep the API intuitive and
   * extensible, the fields that are common to all types of connector profiles are
   * explicitly specified at the top level. The rest of the connector-specific
   * properties are available via the <code>connectorProfileProperties</code> field.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appflow-2020-08-23/ConnectorProfile">AWS
   * API Reference</a></p>
   */
  class ConnectorProfile
  {
  public:
    AWS_APPFLOW_API ConnectorProfile() = default;
    AWS_APPFLOW_API ConnectorProfile(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPFLOW_API ConnectorProfile& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPFLOW_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The Amazon Resource Name (ARN) of the connector profile. </p>
     */
    inline const Aws::String& GetConnectorProfileArn() const { return m_connectorProfileArn; }
    inline bool ConnectorProfileArnHasBeenSet() const { return m_connectorProfileArnHasBeenSet; }
    template<typename ConnectorProfileArnT = Aws::String>
    void SetConnectorProfileArn(ConnectorProfileArnT&& value) { m_connectorProfileArnHasBeenSet = true; m_connectorProfileArn = std::forward<ConnectorProfileArnT>(value); }
    template<typename ConnectorProfileArnT = Aws::String>
    ConnectorProfile& WithConnectorProfileArn(ConnectorProfileArnT&& value) { SetConnectorProfileArn(std::forward<ConnectorProfileArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The name of the connector profile. The name is unique for each
     * <code>ConnectorProfile</code> in the Amazon Web Services account. </p>
     */
    inline const Aws::String& GetConnectorProfileName() const { return m_connectorProfileName; }
    inline bool ConnectorProfileNameHasBeenSet() const { return m_connectorProfileNameHasBeenSet; }
    template<typename ConnectorProfileNameT = Aws::String>
    void SetConnectorProfileName(ConnectorProfileNameT&& value) { m_connectorProfileNameHasBeenSet = true; m_connectorProfileName = std::forward<ConnectorProfileNameT>(value); }
    template<typename ConnectorProfileNameT = Aws::String>
    ConnectorProfile& WithConnectorProfileName(ConnectorProfileNameT&& value) { SetConnectorProfileName(std::forward<ConnectorProfileNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The type of connector, such as Salesforce, Amplitude, and so on. </p>
     */
    inline ConnectorType GetConnectorType() const { return m_connectorType; }
    inline bool ConnectorTypeHasBeenSet() const { return m_connectorTypeHasBeenSet; }
    inline void SetConnectorType(ConnectorType value) { m_connectorTypeHasBeenSet = true; m_connectorType = value; }
    inline ConnectorProfile& WithConnectorType(ConnectorType value) { SetConnectorType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The label for the connector profile being created.</p>
     */
    inline const Aws::String& GetConnectorLabel() const { return m_connectorLabel; }
    inline bool ConnectorLabelHasBeenSet() const { return m_connectorLabelHasBeenSet; }
    template<typename ConnectorLabelT = Aws::String>
    void SetConnectorLabel(ConnectorLabelT&& value) { m_connectorLabelHasBeenSet = true; m_connectorLabel = std::forward<ConnectorLabelT>(value); }
    template<typename ConnectorLabelT = Aws::String>
    ConnectorProfile& WithConnectorLabel(ConnectorLabelT&& value) { SetConnectorLabel(std::forward<ConnectorLabelT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Indicates the connection mode and if it is public or private. </p>
     */
    inline ConnectionMode GetConnectionMode() const { return m_connectionMode; }
    inline bool ConnectionModeHasBeenSet() const { return m_connectionModeHasBeenSet; }
    inline void SetConnectionMode(ConnectionMode value) { m_connectionModeHasBeenSet = true; m_connectionMode = value; }
    inline ConnectorProfile& WithConnectionMode(ConnectionMode value) { SetConnectionMode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The Amazon Resource Name (ARN) of the connector profile credentials. </p>
     */
    inline const Aws::String& GetCredentialsArn() const { return m_credentialsArn; }
    inline bool CredentialsArnHasBeenSet() const { return m_credentialsArnHasBeenSet; }
    template<typename CredentialsArnT = Aws::String>
    void SetCredentialsArn(CredentialsArnT&& value) { m_credentialsArnHasBeenSet = true; m_credentialsArn = std::forward<CredentialsArnT>(value); }
    template<typename CredentialsArnT = Aws::String>
    ConnectorProfile& WithCredentialsArn(CredentialsArnT&& value) { SetCredentialsArn(std::forward<CredentialsArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The connector-specific properties of the profile configuration. </p>
     */
    inline const ConnectorProfileProperties& GetConnectorProfileProperties() const { return m_connectorProfileProperties; }
    inline bool ConnectorProfilePropertiesHasBeenSet() const { return m_connectorProfilePropertiesHasBeenSet; }
    template<typename ConnectorProfilePropertiesT = ConnectorProfileProperties>
    void SetConnectorProfileProperties(ConnectorProfilePropertiesT&& value) { m_connectorProfilePropertiesHasBeenSet = true; m_connectorProfileProperties = std::forward<ConnectorProfilePropertiesT>(value); }
    template<typename ConnectorProfilePropertiesT = ConnectorProfileProperties>
    ConnectorProfile& WithConnectorProfileProperties(ConnectorProfilePropertiesT&& value) { SetConnectorProfileProperties(std::forward<ConnectorProfilePropertiesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Specifies when the connector profile was created. </p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    void SetCreatedAt(CreatedAtT&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::forward<CreatedAtT>(value); }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    ConnectorProfile& WithCreatedAt(CreatedAtT&& value) { SetCreatedAt(std::forward<CreatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Specifies when the connector profile was last updated. </p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedAt() const { return m_lastUpdatedAt; }
    inline bool LastUpdatedAtHasBeenSet() const { return m_lastUpdatedAtHasBeenSet; }
    template<typename LastUpdatedAtT = Aws::Utils::DateTime>
    void SetLastUpdatedAt(LastUpdatedAtT&& value) { m_lastUpdatedAtHasBeenSet = true; m_lastUpdatedAt = std::forward<LastUpdatedAtT>(value); }
    template<typename LastUpdatedAtT = Aws::Utils::DateTime>
    ConnectorProfile& WithLastUpdatedAt(LastUpdatedAtT&& value) { SetLastUpdatedAt(std::forward<LastUpdatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Specifies the private connection provisioning state. </p>
     */
    inline const PrivateConnectionProvisioningState& GetPrivateConnectionProvisioningState() const { return m_privateConnectionProvisioningState; }
    inline bool PrivateConnectionProvisioningStateHasBeenSet() const { return m_privateConnectionProvisioningStateHasBeenSet; }
    template<typename PrivateConnectionProvisioningStateT = PrivateConnectionProvisioningState>
    void SetPrivateConnectionProvisioningState(PrivateConnectionProvisioningStateT&& value) { m_privateConnectionProvisioningStateHasBeenSet = true; m_privateConnectionProvisioningState = std::forward<PrivateConnectionProvisioningStateT>(value); }
    template<typename PrivateConnectionProvisioningStateT = PrivateConnectionProvisioningState>
    ConnectorProfile& WithPrivateConnectionProvisioningState(PrivateConnectionProvisioningStateT&& value) { SetPrivateConnectionProvisioningState(std::forward<PrivateConnectionProvisioningStateT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_connectorProfileArn;
    bool m_connectorProfileArnHasBeenSet = false;

    Aws::String m_connectorProfileName;
    bool m_connectorProfileNameHasBeenSet = false;

    ConnectorType m_connectorType{ConnectorType::NOT_SET};
    bool m_connectorTypeHasBeenSet = false;

    Aws::String m_connectorLabel;
    bool m_connectorLabelHasBeenSet = false;

    ConnectionMode m_connectionMode{ConnectionMode::NOT_SET};
    bool m_connectionModeHasBeenSet = false;

    Aws::String m_credentialsArn;
    bool m_credentialsArnHasBeenSet = false;

    ConnectorProfileProperties m_connectorProfileProperties;
    bool m_connectorProfilePropertiesHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt{};
    bool m_createdAtHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdatedAt{};
    bool m_lastUpdatedAtHasBeenSet = false;

    PrivateConnectionProvisioningState m_privateConnectionProvisioningState;
    bool m_privateConnectionProvisioningStateHasBeenSet = false;
  };

} // namespace Model
} // namespace Appflow
} // namespace Aws
