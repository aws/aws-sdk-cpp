/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/groundstation/GroundStation_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/groundstation/model/AgentStatus.h>
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
namespace GroundStation
{
namespace Model
{

  /**
   * <p>Data on the status of agent components.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/groundstation-2019-05-23/ComponentStatusData">AWS
   * API Reference</a></p>
   */
  class ComponentStatusData
  {
  public:
    AWS_GROUNDSTATION_API ComponentStatusData() = default;
    AWS_GROUNDSTATION_API ComponentStatusData(Aws::Utils::Json::JsonView jsonValue);
    AWS_GROUNDSTATION_API ComponentStatusData& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GROUNDSTATION_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Bytes received by the component.</p>
     */
    inline long long GetBytesReceived() const { return m_bytesReceived; }
    inline bool BytesReceivedHasBeenSet() const { return m_bytesReceivedHasBeenSet; }
    inline void SetBytesReceived(long long value) { m_bytesReceivedHasBeenSet = true; m_bytesReceived = value; }
    inline ComponentStatusData& WithBytesReceived(long long value) { SetBytesReceived(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Bytes sent by the component.</p>
     */
    inline long long GetBytesSent() const { return m_bytesSent; }
    inline bool BytesSentHasBeenSet() const { return m_bytesSentHasBeenSet; }
    inline void SetBytesSent(long long value) { m_bytesSentHasBeenSet = true; m_bytesSent = value; }
    inline ComponentStatusData& WithBytesSent(long long value) { SetBytesSent(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Capability ARN of the component.</p>
     */
    inline const Aws::String& GetCapabilityArn() const { return m_capabilityArn; }
    inline bool CapabilityArnHasBeenSet() const { return m_capabilityArnHasBeenSet; }
    template<typename CapabilityArnT = Aws::String>
    void SetCapabilityArn(CapabilityArnT&& value) { m_capabilityArnHasBeenSet = true; m_capabilityArn = std::forward<CapabilityArnT>(value); }
    template<typename CapabilityArnT = Aws::String>
    ComponentStatusData& WithCapabilityArn(CapabilityArnT&& value) { SetCapabilityArn(std::forward<CapabilityArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Component type.</p>
     */
    inline const Aws::String& GetComponentType() const { return m_componentType; }
    inline bool ComponentTypeHasBeenSet() const { return m_componentTypeHasBeenSet; }
    template<typename ComponentTypeT = Aws::String>
    void SetComponentType(ComponentTypeT&& value) { m_componentTypeHasBeenSet = true; m_componentType = std::forward<ComponentTypeT>(value); }
    template<typename ComponentTypeT = Aws::String>
    ComponentStatusData& WithComponentType(ComponentTypeT&& value) { SetComponentType(std::forward<ComponentTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Dataflow UUID associated with the component.</p>
     */
    inline const Aws::String& GetDataflowId() const { return m_dataflowId; }
    inline bool DataflowIdHasBeenSet() const { return m_dataflowIdHasBeenSet; }
    template<typename DataflowIdT = Aws::String>
    void SetDataflowId(DataflowIdT&& value) { m_dataflowIdHasBeenSet = true; m_dataflowId = std::forward<DataflowIdT>(value); }
    template<typename DataflowIdT = Aws::String>
    ComponentStatusData& WithDataflowId(DataflowIdT&& value) { SetDataflowId(std::forward<DataflowIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Packets dropped by component.</p>
     */
    inline long long GetPacketsDropped() const { return m_packetsDropped; }
    inline bool PacketsDroppedHasBeenSet() const { return m_packetsDroppedHasBeenSet; }
    inline void SetPacketsDropped(long long value) { m_packetsDroppedHasBeenSet = true; m_packetsDropped = value; }
    inline ComponentStatusData& WithPacketsDropped(long long value) { SetPacketsDropped(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Component status.</p>
     */
    inline AgentStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(AgentStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline ComponentStatusData& WithStatus(AgentStatus value) { SetStatus(value); return *this;}
    ///@}
  private:

    long long m_bytesReceived{0};
    bool m_bytesReceivedHasBeenSet = false;

    long long m_bytesSent{0};
    bool m_bytesSentHasBeenSet = false;

    Aws::String m_capabilityArn;
    bool m_capabilityArnHasBeenSet = false;

    Aws::String m_componentType;
    bool m_componentTypeHasBeenSet = false;

    Aws::String m_dataflowId;
    bool m_dataflowIdHasBeenSet = false;

    long long m_packetsDropped{0};
    bool m_packetsDroppedHasBeenSet = false;

    AgentStatus m_status{AgentStatus::NOT_SET};
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace GroundStation
} // namespace Aws
