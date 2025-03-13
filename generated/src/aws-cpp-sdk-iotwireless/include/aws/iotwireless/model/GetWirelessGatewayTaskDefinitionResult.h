/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotwireless/IoTWireless_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iotwireless/model/UpdateWirelessGatewayTaskCreate.h>
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
namespace IoTWireless
{
namespace Model
{
  class GetWirelessGatewayTaskDefinitionResult
  {
  public:
    AWS_IOTWIRELESS_API GetWirelessGatewayTaskDefinitionResult() = default;
    AWS_IOTWIRELESS_API GetWirelessGatewayTaskDefinitionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTWIRELESS_API GetWirelessGatewayTaskDefinitionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Whether to automatically create tasks using this task definition for all
     * gateways with the specified current version. If <code>false</code>, the task
     * must me created by calling <code>CreateWirelessGatewayTask</code>.</p>
     */
    inline bool GetAutoCreateTasks() const { return m_autoCreateTasks; }
    inline void SetAutoCreateTasks(bool value) { m_autoCreateTasksHasBeenSet = true; m_autoCreateTasks = value; }
    inline GetWirelessGatewayTaskDefinitionResult& WithAutoCreateTasks(bool value) { SetAutoCreateTasks(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the resource.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    GetWirelessGatewayTaskDefinitionResult& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the gateways to update.</p>
     */
    inline const UpdateWirelessGatewayTaskCreate& GetUpdate() const { return m_update; }
    template<typename UpdateT = UpdateWirelessGatewayTaskCreate>
    void SetUpdate(UpdateT&& value) { m_updateHasBeenSet = true; m_update = std::forward<UpdateT>(value); }
    template<typename UpdateT = UpdateWirelessGatewayTaskCreate>
    GetWirelessGatewayTaskDefinitionResult& WithUpdate(UpdateT&& value) { SetUpdate(std::forward<UpdateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name of the resource.</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    GetWirelessGatewayTaskDefinitionResult& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetWirelessGatewayTaskDefinitionResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    bool m_autoCreateTasks{false};
    bool m_autoCreateTasksHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    UpdateWirelessGatewayTaskCreate m_update;
    bool m_updateHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTWireless
} // namespace Aws
