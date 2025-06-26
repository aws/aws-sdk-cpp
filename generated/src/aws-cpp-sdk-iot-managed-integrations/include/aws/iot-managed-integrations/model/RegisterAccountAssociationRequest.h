/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot-managed-integrations/IoTManagedIntegrations_EXPORTS.h>
#include <aws/iot-managed-integrations/IoTManagedIntegrationsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace IoTManagedIntegrations
{
namespace Model
{

  /**
   */
  class RegisterAccountAssociationRequest : public IoTManagedIntegrationsRequest
  {
  public:
    AWS_IOTMANAGEDINTEGRATIONS_API RegisterAccountAssociationRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "RegisterAccountAssociation"; }

    AWS_IOTMANAGEDINTEGRATIONS_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The identifier of the managed thing to register with the account
     * association.</p>
     */
    inline const Aws::String& GetManagedThingId() const { return m_managedThingId; }
    inline bool ManagedThingIdHasBeenSet() const { return m_managedThingIdHasBeenSet; }
    template<typename ManagedThingIdT = Aws::String>
    void SetManagedThingId(ManagedThingIdT&& value) { m_managedThingIdHasBeenSet = true; m_managedThingId = std::forward<ManagedThingIdT>(value); }
    template<typename ManagedThingIdT = Aws::String>
    RegisterAccountAssociationRequest& WithManagedThingId(ManagedThingIdT&& value) { SetManagedThingId(std::forward<ManagedThingIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the account association to register with the managed
     * thing.</p>
     */
    inline const Aws::String& GetAccountAssociationId() const { return m_accountAssociationId; }
    inline bool AccountAssociationIdHasBeenSet() const { return m_accountAssociationIdHasBeenSet; }
    template<typename AccountAssociationIdT = Aws::String>
    void SetAccountAssociationId(AccountAssociationIdT&& value) { m_accountAssociationIdHasBeenSet = true; m_accountAssociationId = std::forward<AccountAssociationIdT>(value); }
    template<typename AccountAssociationIdT = Aws::String>
    RegisterAccountAssociationRequest& WithAccountAssociationId(AccountAssociationIdT&& value) { SetAccountAssociationId(std::forward<AccountAssociationIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the device discovery job associated with this
     * registration.</p>
     */
    inline const Aws::String& GetDeviceDiscoveryId() const { return m_deviceDiscoveryId; }
    inline bool DeviceDiscoveryIdHasBeenSet() const { return m_deviceDiscoveryIdHasBeenSet; }
    template<typename DeviceDiscoveryIdT = Aws::String>
    void SetDeviceDiscoveryId(DeviceDiscoveryIdT&& value) { m_deviceDiscoveryIdHasBeenSet = true; m_deviceDiscoveryId = std::forward<DeviceDiscoveryIdT>(value); }
    template<typename DeviceDiscoveryIdT = Aws::String>
    RegisterAccountAssociationRequest& WithDeviceDiscoveryId(DeviceDiscoveryIdT&& value) { SetDeviceDiscoveryId(std::forward<DeviceDiscoveryIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_managedThingId;
    bool m_managedThingIdHasBeenSet = false;

    Aws::String m_accountAssociationId;
    bool m_accountAssociationIdHasBeenSet = false;

    Aws::String m_deviceDiscoveryId;
    bool m_deviceDiscoveryIdHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTManagedIntegrations
} // namespace Aws
