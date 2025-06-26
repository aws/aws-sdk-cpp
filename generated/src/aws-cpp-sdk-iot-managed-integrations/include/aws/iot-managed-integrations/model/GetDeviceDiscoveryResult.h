/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot-managed-integrations/IoTManagedIntegrations_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iot-managed-integrations/model/DiscoveryType.h>
#include <aws/iot-managed-integrations/model/DeviceDiscoveryStatus.h>
#include <aws/core/utils/DateTime.h>
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
  class GetDeviceDiscoveryResult
  {
  public:
    AWS_IOTMANAGEDINTEGRATIONS_API GetDeviceDiscoveryResult() = default;
    AWS_IOTMANAGEDINTEGRATIONS_API GetDeviceDiscoveryResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTMANAGEDINTEGRATIONS_API GetDeviceDiscoveryResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The id of the device discovery job request.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    GetDeviceDiscoveryResult& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the device discovery job request.</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    GetDeviceDiscoveryResult& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The discovery type supporting the type of device to be discovered in the
     * device discovery job request.</p>
     */
    inline DiscoveryType GetDiscoveryType() const { return m_discoveryType; }
    inline void SetDiscoveryType(DiscoveryType value) { m_discoveryTypeHasBeenSet = true; m_discoveryType = value; }
    inline GetDeviceDiscoveryResult& WithDiscoveryType(DiscoveryType value) { SetDiscoveryType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the device discovery job request.</p>
     */
    inline DeviceDiscoveryStatus GetStatus() const { return m_status; }
    inline void SetStatus(DeviceDiscoveryStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline GetDeviceDiscoveryResult& WithStatus(DeviceDiscoveryStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp value for the start time of the device discovery.</p>
     */
    inline const Aws::Utils::DateTime& GetStartedAt() const { return m_startedAt; }
    template<typename StartedAtT = Aws::Utils::DateTime>
    void SetStartedAt(StartedAtT&& value) { m_startedAtHasBeenSet = true; m_startedAt = std::forward<StartedAtT>(value); }
    template<typename StartedAtT = Aws::Utils::DateTime>
    GetDeviceDiscoveryResult& WithStartedAt(StartedAtT&& value) { SetStartedAt(std::forward<StartedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The id of the end-user's IoT hub.</p>
     */
    inline const Aws::String& GetControllerId() const { return m_controllerId; }
    template<typename ControllerIdT = Aws::String>
    void SetControllerId(ControllerIdT&& value) { m_controllerIdHasBeenSet = true; m_controllerId = std::forward<ControllerIdT>(value); }
    template<typename ControllerIdT = Aws::String>
    GetDeviceDiscoveryResult& WithControllerId(ControllerIdT&& value) { SetControllerId(std::forward<ControllerIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the account association used for the device discovery.</p>
     */
    inline const Aws::String& GetAccountAssociationId() const { return m_accountAssociationId; }
    template<typename AccountAssociationIdT = Aws::String>
    void SetAccountAssociationId(AccountAssociationIdT&& value) { m_accountAssociationIdHasBeenSet = true; m_accountAssociationId = std::forward<AccountAssociationIdT>(value); }
    template<typename AccountAssociationIdT = Aws::String>
    GetDeviceDiscoveryResult& WithAccountAssociationId(AccountAssociationIdT&& value) { SetAccountAssociationId(std::forward<AccountAssociationIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp value for the completion time of the device discovery.</p>
     */
    inline const Aws::Utils::DateTime& GetFinishedAt() const { return m_finishedAt; }
    template<typename FinishedAtT = Aws::Utils::DateTime>
    void SetFinishedAt(FinishedAtT&& value) { m_finishedAtHasBeenSet = true; m_finishedAt = std::forward<FinishedAtT>(value); }
    template<typename FinishedAtT = Aws::Utils::DateTime>
    GetDeviceDiscoveryResult& WithFinishedAt(FinishedAtT&& value) { SetFinishedAt(std::forward<FinishedAtT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetDeviceDiscoveryResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    DiscoveryType m_discoveryType{DiscoveryType::NOT_SET};
    bool m_discoveryTypeHasBeenSet = false;

    DeviceDiscoveryStatus m_status{DeviceDiscoveryStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::Utils::DateTime m_startedAt{};
    bool m_startedAtHasBeenSet = false;

    Aws::String m_controllerId;
    bool m_controllerIdHasBeenSet = false;

    Aws::String m_accountAssociationId;
    bool m_accountAssociationIdHasBeenSet = false;

    Aws::Utils::DateTime m_finishedAt{};
    bool m_finishedAtHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTManagedIntegrations
} // namespace Aws
