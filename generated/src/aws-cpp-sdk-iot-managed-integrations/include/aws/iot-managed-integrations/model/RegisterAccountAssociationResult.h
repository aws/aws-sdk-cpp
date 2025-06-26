/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot-managed-integrations/IoTManagedIntegrations_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace IoTManagedIntegrations
{
namespace Model
{
  class RegisterAccountAssociationResult
  {
  public:
    AWS_IOTMANAGEDINTEGRATIONS_API RegisterAccountAssociationResult() = default;
    AWS_IOTMANAGEDINTEGRATIONS_API RegisterAccountAssociationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTMANAGEDINTEGRATIONS_API RegisterAccountAssociationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The identifier of the account association that was registered.</p>
     */
    inline const Aws::String& GetAccountAssociationId() const { return m_accountAssociationId; }
    template<typename AccountAssociationIdT = Aws::String>
    void SetAccountAssociationId(AccountAssociationIdT&& value) { m_accountAssociationIdHasBeenSet = true; m_accountAssociationId = std::forward<AccountAssociationIdT>(value); }
    template<typename AccountAssociationIdT = Aws::String>
    RegisterAccountAssociationResult& WithAccountAssociationId(AccountAssociationIdT&& value) { SetAccountAssociationId(std::forward<AccountAssociationIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the device discovery job associated with this
     * registration.</p>
     */
    inline const Aws::String& GetDeviceDiscoveryId() const { return m_deviceDiscoveryId; }
    template<typename DeviceDiscoveryIdT = Aws::String>
    void SetDeviceDiscoveryId(DeviceDiscoveryIdT&& value) { m_deviceDiscoveryIdHasBeenSet = true; m_deviceDiscoveryId = std::forward<DeviceDiscoveryIdT>(value); }
    template<typename DeviceDiscoveryIdT = Aws::String>
    RegisterAccountAssociationResult& WithDeviceDiscoveryId(DeviceDiscoveryIdT&& value) { SetDeviceDiscoveryId(std::forward<DeviceDiscoveryIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the managed thing that was registered with the account
     * association.</p>
     */
    inline const Aws::String& GetManagedThingId() const { return m_managedThingId; }
    template<typename ManagedThingIdT = Aws::String>
    void SetManagedThingId(ManagedThingIdT&& value) { m_managedThingIdHasBeenSet = true; m_managedThingId = std::forward<ManagedThingIdT>(value); }
    template<typename ManagedThingIdT = Aws::String>
    RegisterAccountAssociationResult& WithManagedThingId(ManagedThingIdT&& value) { SetManagedThingId(std::forward<ManagedThingIdT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    RegisterAccountAssociationResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_accountAssociationId;
    bool m_accountAssociationIdHasBeenSet = false;

    Aws::String m_deviceDiscoveryId;
    bool m_deviceDiscoveryIdHasBeenSet = false;

    Aws::String m_managedThingId;
    bool m_managedThingIdHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTManagedIntegrations
} // namespace Aws
