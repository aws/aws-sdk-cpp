/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot-managed-integrations/IoTManagedIntegrations_EXPORTS.h>
#include <aws/iot-managed-integrations/IoTManagedIntegrationsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iot-managed-integrations/model/Role.h>
#include <aws/iot-managed-integrations/model/ProvisioningStatus.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace IoTManagedIntegrations
{
namespace Model
{

  /**
   */
  class ListManagedThingsRequest : public IoTManagedIntegrationsRequest
  {
  public:
    AWS_IOTMANAGEDINTEGRATIONS_API ListManagedThingsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListManagedThings"; }

    AWS_IOTMANAGEDINTEGRATIONS_API Aws::String SerializePayload() const override;

    AWS_IOTMANAGEDINTEGRATIONS_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p>Filter on device owners when listing managed things.</p>
     */
    inline const Aws::String& GetOwnerFilter() const { return m_ownerFilter; }
    inline bool OwnerFilterHasBeenSet() const { return m_ownerFilterHasBeenSet; }
    template<typename OwnerFilterT = Aws::String>
    void SetOwnerFilter(OwnerFilterT&& value) { m_ownerFilterHasBeenSet = true; m_ownerFilter = std::forward<OwnerFilterT>(value); }
    template<typename OwnerFilterT = Aws::String>
    ListManagedThingsRequest& WithOwnerFilter(OwnerFilterT&& value) { SetOwnerFilter(std::forward<OwnerFilterT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Filter on a credential locker for a managed thing.</p>
     */
    inline const Aws::String& GetCredentialLockerFilter() const { return m_credentialLockerFilter; }
    inline bool CredentialLockerFilterHasBeenSet() const { return m_credentialLockerFilterHasBeenSet; }
    template<typename CredentialLockerFilterT = Aws::String>
    void SetCredentialLockerFilter(CredentialLockerFilterT&& value) { m_credentialLockerFilterHasBeenSet = true; m_credentialLockerFilter = std::forward<CredentialLockerFilterT>(value); }
    template<typename CredentialLockerFilterT = Aws::String>
    ListManagedThingsRequest& WithCredentialLockerFilter(CredentialLockerFilterT&& value) { SetCredentialLockerFilter(std::forward<CredentialLockerFilterT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Filter on the type of device used. This will be the Amazon Web Services hub
     * controller, cloud device, or IoT device.</p>
     */
    inline Role GetRoleFilter() const { return m_roleFilter; }
    inline bool RoleFilterHasBeenSet() const { return m_roleFilterHasBeenSet; }
    inline void SetRoleFilter(Role value) { m_roleFilterHasBeenSet = true; m_roleFilter = value; }
    inline ListManagedThingsRequest& WithRoleFilter(Role value) { SetRoleFilter(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Filter on a parent controller id for a managed thing.</p>
     */
    inline const Aws::String& GetParentControllerIdentifierFilter() const { return m_parentControllerIdentifierFilter; }
    inline bool ParentControllerIdentifierFilterHasBeenSet() const { return m_parentControllerIdentifierFilterHasBeenSet; }
    template<typename ParentControllerIdentifierFilterT = Aws::String>
    void SetParentControllerIdentifierFilter(ParentControllerIdentifierFilterT&& value) { m_parentControllerIdentifierFilterHasBeenSet = true; m_parentControllerIdentifierFilter = std::forward<ParentControllerIdentifierFilterT>(value); }
    template<typename ParentControllerIdentifierFilterT = Aws::String>
    ListManagedThingsRequest& WithParentControllerIdentifierFilter(ParentControllerIdentifierFilterT&& value) { SetParentControllerIdentifierFilter(std::forward<ParentControllerIdentifierFilterT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Filter managed things by the connector destination ID they are associated
     * with.</p>
     */
    inline const Aws::String& GetConnectorDestinationIdFilter() const { return m_connectorDestinationIdFilter; }
    inline bool ConnectorDestinationIdFilterHasBeenSet() const { return m_connectorDestinationIdFilterHasBeenSet; }
    template<typename ConnectorDestinationIdFilterT = Aws::String>
    void SetConnectorDestinationIdFilter(ConnectorDestinationIdFilterT&& value) { m_connectorDestinationIdFilterHasBeenSet = true; m_connectorDestinationIdFilter = std::forward<ConnectorDestinationIdFilterT>(value); }
    template<typename ConnectorDestinationIdFilterT = Aws::String>
    ListManagedThingsRequest& WithConnectorDestinationIdFilter(ConnectorDestinationIdFilterT&& value) { SetConnectorDestinationIdFilter(std::forward<ConnectorDestinationIdFilterT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Filter managed things by the connector device ID they are associated with.
     * When specified, only managed things with this connector device ID will be
     * returned.</p>
     */
    inline const Aws::String& GetConnectorDeviceIdFilter() const { return m_connectorDeviceIdFilter; }
    inline bool ConnectorDeviceIdFilterHasBeenSet() const { return m_connectorDeviceIdFilterHasBeenSet; }
    template<typename ConnectorDeviceIdFilterT = Aws::String>
    void SetConnectorDeviceIdFilter(ConnectorDeviceIdFilterT&& value) { m_connectorDeviceIdFilterHasBeenSet = true; m_connectorDeviceIdFilter = std::forward<ConnectorDeviceIdFilterT>(value); }
    template<typename ConnectorDeviceIdFilterT = Aws::String>
    ListManagedThingsRequest& WithConnectorDeviceIdFilter(ConnectorDeviceIdFilterT&& value) { SetConnectorDeviceIdFilter(std::forward<ConnectorDeviceIdFilterT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Filter on the serial number of the device.</p>
     */
    inline const Aws::String& GetSerialNumberFilter() const { return m_serialNumberFilter; }
    inline bool SerialNumberFilterHasBeenSet() const { return m_serialNumberFilterHasBeenSet; }
    template<typename SerialNumberFilterT = Aws::String>
    void SetSerialNumberFilter(SerialNumberFilterT&& value) { m_serialNumberFilterHasBeenSet = true; m_serialNumberFilter = std::forward<SerialNumberFilterT>(value); }
    template<typename SerialNumberFilterT = Aws::String>
    ListManagedThingsRequest& WithSerialNumberFilter(SerialNumberFilterT&& value) { SetSerialNumberFilter(std::forward<SerialNumberFilterT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Filter on the status of the device.</p>
     */
    inline ProvisioningStatus GetProvisioningStatusFilter() const { return m_provisioningStatusFilter; }
    inline bool ProvisioningStatusFilterHasBeenSet() const { return m_provisioningStatusFilterHasBeenSet; }
    inline void SetProvisioningStatusFilter(ProvisioningStatus value) { m_provisioningStatusFilterHasBeenSet = true; m_provisioningStatusFilter = value; }
    inline ListManagedThingsRequest& WithProvisioningStatusFilter(ProvisioningStatus value) { SetProvisioningStatusFilter(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A token that can be used to retrieve the next set of results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListManagedThingsRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of results to return at one time.</p>
     */
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListManagedThingsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}
  private:

    Aws::String m_ownerFilter;
    bool m_ownerFilterHasBeenSet = false;

    Aws::String m_credentialLockerFilter;
    bool m_credentialLockerFilterHasBeenSet = false;

    Role m_roleFilter{Role::NOT_SET};
    bool m_roleFilterHasBeenSet = false;

    Aws::String m_parentControllerIdentifierFilter;
    bool m_parentControllerIdentifierFilterHasBeenSet = false;

    Aws::String m_connectorDestinationIdFilter;
    bool m_connectorDestinationIdFilterHasBeenSet = false;

    Aws::String m_connectorDeviceIdFilter;
    bool m_connectorDeviceIdFilterHasBeenSet = false;

    Aws::String m_serialNumberFilter;
    bool m_serialNumberFilterHasBeenSet = false;

    ProvisioningStatus m_provisioningStatusFilter{ProvisioningStatus::NOT_SET};
    bool m_provisioningStatusFilterHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTManagedIntegrations
} // namespace Aws
