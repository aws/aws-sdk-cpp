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
    AWS_IOTMANAGEDINTEGRATIONS_API ListManagedThingsRequest();

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
    inline const Aws::String& GetOwnerFilter() const{ return m_ownerFilter; }
    inline bool OwnerFilterHasBeenSet() const { return m_ownerFilterHasBeenSet; }
    inline void SetOwnerFilter(const Aws::String& value) { m_ownerFilterHasBeenSet = true; m_ownerFilter = value; }
    inline void SetOwnerFilter(Aws::String&& value) { m_ownerFilterHasBeenSet = true; m_ownerFilter = std::move(value); }
    inline void SetOwnerFilter(const char* value) { m_ownerFilterHasBeenSet = true; m_ownerFilter.assign(value); }
    inline ListManagedThingsRequest& WithOwnerFilter(const Aws::String& value) { SetOwnerFilter(value); return *this;}
    inline ListManagedThingsRequest& WithOwnerFilter(Aws::String&& value) { SetOwnerFilter(std::move(value)); return *this;}
    inline ListManagedThingsRequest& WithOwnerFilter(const char* value) { SetOwnerFilter(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Filter on a credential locker for a managed thing.</p>
     */
    inline const Aws::String& GetCredentialLockerFilter() const{ return m_credentialLockerFilter; }
    inline bool CredentialLockerFilterHasBeenSet() const { return m_credentialLockerFilterHasBeenSet; }
    inline void SetCredentialLockerFilter(const Aws::String& value) { m_credentialLockerFilterHasBeenSet = true; m_credentialLockerFilter = value; }
    inline void SetCredentialLockerFilter(Aws::String&& value) { m_credentialLockerFilterHasBeenSet = true; m_credentialLockerFilter = std::move(value); }
    inline void SetCredentialLockerFilter(const char* value) { m_credentialLockerFilterHasBeenSet = true; m_credentialLockerFilter.assign(value); }
    inline ListManagedThingsRequest& WithCredentialLockerFilter(const Aws::String& value) { SetCredentialLockerFilter(value); return *this;}
    inline ListManagedThingsRequest& WithCredentialLockerFilter(Aws::String&& value) { SetCredentialLockerFilter(std::move(value)); return *this;}
    inline ListManagedThingsRequest& WithCredentialLockerFilter(const char* value) { SetCredentialLockerFilter(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Filter on the type of device used. This will be the Amazon Web Services hub
     * controller, cloud device, or IoT device.</p>
     */
    inline const Role& GetRoleFilter() const{ return m_roleFilter; }
    inline bool RoleFilterHasBeenSet() const { return m_roleFilterHasBeenSet; }
    inline void SetRoleFilter(const Role& value) { m_roleFilterHasBeenSet = true; m_roleFilter = value; }
    inline void SetRoleFilter(Role&& value) { m_roleFilterHasBeenSet = true; m_roleFilter = std::move(value); }
    inline ListManagedThingsRequest& WithRoleFilter(const Role& value) { SetRoleFilter(value); return *this;}
    inline ListManagedThingsRequest& WithRoleFilter(Role&& value) { SetRoleFilter(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Filter on a parent controller id for a managed thing.</p>
     */
    inline const Aws::String& GetParentControllerIdentifierFilter() const{ return m_parentControllerIdentifierFilter; }
    inline bool ParentControllerIdentifierFilterHasBeenSet() const { return m_parentControllerIdentifierFilterHasBeenSet; }
    inline void SetParentControllerIdentifierFilter(const Aws::String& value) { m_parentControllerIdentifierFilterHasBeenSet = true; m_parentControllerIdentifierFilter = value; }
    inline void SetParentControllerIdentifierFilter(Aws::String&& value) { m_parentControllerIdentifierFilterHasBeenSet = true; m_parentControllerIdentifierFilter = std::move(value); }
    inline void SetParentControllerIdentifierFilter(const char* value) { m_parentControllerIdentifierFilterHasBeenSet = true; m_parentControllerIdentifierFilter.assign(value); }
    inline ListManagedThingsRequest& WithParentControllerIdentifierFilter(const Aws::String& value) { SetParentControllerIdentifierFilter(value); return *this;}
    inline ListManagedThingsRequest& WithParentControllerIdentifierFilter(Aws::String&& value) { SetParentControllerIdentifierFilter(std::move(value)); return *this;}
    inline ListManagedThingsRequest& WithParentControllerIdentifierFilter(const char* value) { SetParentControllerIdentifierFilter(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Filter on a connector policy id for a managed thing.</p>
     */
    inline const Aws::String& GetConnectorPolicyIdFilter() const{ return m_connectorPolicyIdFilter; }
    inline bool ConnectorPolicyIdFilterHasBeenSet() const { return m_connectorPolicyIdFilterHasBeenSet; }
    inline void SetConnectorPolicyIdFilter(const Aws::String& value) { m_connectorPolicyIdFilterHasBeenSet = true; m_connectorPolicyIdFilter = value; }
    inline void SetConnectorPolicyIdFilter(Aws::String&& value) { m_connectorPolicyIdFilterHasBeenSet = true; m_connectorPolicyIdFilter = std::move(value); }
    inline void SetConnectorPolicyIdFilter(const char* value) { m_connectorPolicyIdFilterHasBeenSet = true; m_connectorPolicyIdFilter.assign(value); }
    inline ListManagedThingsRequest& WithConnectorPolicyIdFilter(const Aws::String& value) { SetConnectorPolicyIdFilter(value); return *this;}
    inline ListManagedThingsRequest& WithConnectorPolicyIdFilter(Aws::String&& value) { SetConnectorPolicyIdFilter(std::move(value)); return *this;}
    inline ListManagedThingsRequest& WithConnectorPolicyIdFilter(const char* value) { SetConnectorPolicyIdFilter(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Filter on the serial number of the device.</p>
     */
    inline const Aws::String& GetSerialNumberFilter() const{ return m_serialNumberFilter; }
    inline bool SerialNumberFilterHasBeenSet() const { return m_serialNumberFilterHasBeenSet; }
    inline void SetSerialNumberFilter(const Aws::String& value) { m_serialNumberFilterHasBeenSet = true; m_serialNumberFilter = value; }
    inline void SetSerialNumberFilter(Aws::String&& value) { m_serialNumberFilterHasBeenSet = true; m_serialNumberFilter = std::move(value); }
    inline void SetSerialNumberFilter(const char* value) { m_serialNumberFilterHasBeenSet = true; m_serialNumberFilter.assign(value); }
    inline ListManagedThingsRequest& WithSerialNumberFilter(const Aws::String& value) { SetSerialNumberFilter(value); return *this;}
    inline ListManagedThingsRequest& WithSerialNumberFilter(Aws::String&& value) { SetSerialNumberFilter(std::move(value)); return *this;}
    inline ListManagedThingsRequest& WithSerialNumberFilter(const char* value) { SetSerialNumberFilter(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Filter on the status of the device.</p>
     */
    inline const ProvisioningStatus& GetProvisioningStatusFilter() const{ return m_provisioningStatusFilter; }
    inline bool ProvisioningStatusFilterHasBeenSet() const { return m_provisioningStatusFilterHasBeenSet; }
    inline void SetProvisioningStatusFilter(const ProvisioningStatus& value) { m_provisioningStatusFilterHasBeenSet = true; m_provisioningStatusFilter = value; }
    inline void SetProvisioningStatusFilter(ProvisioningStatus&& value) { m_provisioningStatusFilterHasBeenSet = true; m_provisioningStatusFilter = std::move(value); }
    inline ListManagedThingsRequest& WithProvisioningStatusFilter(const ProvisioningStatus& value) { SetProvisioningStatusFilter(value); return *this;}
    inline ListManagedThingsRequest& WithProvisioningStatusFilter(ProvisioningStatus&& value) { SetProvisioningStatusFilter(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A token that can be used to retrieve the next set of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }
    inline ListManagedThingsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListManagedThingsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListManagedThingsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of results to return at one time.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListManagedThingsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}
  private:

    Aws::String m_ownerFilter;
    bool m_ownerFilterHasBeenSet = false;

    Aws::String m_credentialLockerFilter;
    bool m_credentialLockerFilterHasBeenSet = false;

    Role m_roleFilter;
    bool m_roleFilterHasBeenSet = false;

    Aws::String m_parentControllerIdentifierFilter;
    bool m_parentControllerIdentifierFilterHasBeenSet = false;

    Aws::String m_connectorPolicyIdFilter;
    bool m_connectorPolicyIdFilterHasBeenSet = false;

    Aws::String m_serialNumberFilter;
    bool m_serialNumberFilterHasBeenSet = false;

    ProvisioningStatus m_provisioningStatusFilter;
    bool m_provisioningStatusFilterHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTManagedIntegrations
} // namespace Aws
