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
    AWS_GROUNDSTATION_API ComponentStatusData();
    AWS_GROUNDSTATION_API ComponentStatusData(Aws::Utils::Json::JsonView jsonValue);
    AWS_GROUNDSTATION_API ComponentStatusData& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GROUNDSTATION_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Bytes received by the component.</p>
     */
    inline long long GetBytesReceived() const{ return m_bytesReceived; }

    /**
     * <p>Bytes received by the component.</p>
     */
    inline bool BytesReceivedHasBeenSet() const { return m_bytesReceivedHasBeenSet; }

    /**
     * <p>Bytes received by the component.</p>
     */
    inline void SetBytesReceived(long long value) { m_bytesReceivedHasBeenSet = true; m_bytesReceived = value; }

    /**
     * <p>Bytes received by the component.</p>
     */
    inline ComponentStatusData& WithBytesReceived(long long value) { SetBytesReceived(value); return *this;}


    /**
     * <p>Bytes sent by the component.</p>
     */
    inline long long GetBytesSent() const{ return m_bytesSent; }

    /**
     * <p>Bytes sent by the component.</p>
     */
    inline bool BytesSentHasBeenSet() const { return m_bytesSentHasBeenSet; }

    /**
     * <p>Bytes sent by the component.</p>
     */
    inline void SetBytesSent(long long value) { m_bytesSentHasBeenSet = true; m_bytesSent = value; }

    /**
     * <p>Bytes sent by the component.</p>
     */
    inline ComponentStatusData& WithBytesSent(long long value) { SetBytesSent(value); return *this;}


    /**
     * <p>Capability ARN of the component.</p>
     */
    inline const Aws::String& GetCapabilityArn() const{ return m_capabilityArn; }

    /**
     * <p>Capability ARN of the component.</p>
     */
    inline bool CapabilityArnHasBeenSet() const { return m_capabilityArnHasBeenSet; }

    /**
     * <p>Capability ARN of the component.</p>
     */
    inline void SetCapabilityArn(const Aws::String& value) { m_capabilityArnHasBeenSet = true; m_capabilityArn = value; }

    /**
     * <p>Capability ARN of the component.</p>
     */
    inline void SetCapabilityArn(Aws::String&& value) { m_capabilityArnHasBeenSet = true; m_capabilityArn = std::move(value); }

    /**
     * <p>Capability ARN of the component.</p>
     */
    inline void SetCapabilityArn(const char* value) { m_capabilityArnHasBeenSet = true; m_capabilityArn.assign(value); }

    /**
     * <p>Capability ARN of the component.</p>
     */
    inline ComponentStatusData& WithCapabilityArn(const Aws::String& value) { SetCapabilityArn(value); return *this;}

    /**
     * <p>Capability ARN of the component.</p>
     */
    inline ComponentStatusData& WithCapabilityArn(Aws::String&& value) { SetCapabilityArn(std::move(value)); return *this;}

    /**
     * <p>Capability ARN of the component.</p>
     */
    inline ComponentStatusData& WithCapabilityArn(const char* value) { SetCapabilityArn(value); return *this;}


    /**
     * <p>The Component type.</p>
     */
    inline const Aws::String& GetComponentType() const{ return m_componentType; }

    /**
     * <p>The Component type.</p>
     */
    inline bool ComponentTypeHasBeenSet() const { return m_componentTypeHasBeenSet; }

    /**
     * <p>The Component type.</p>
     */
    inline void SetComponentType(const Aws::String& value) { m_componentTypeHasBeenSet = true; m_componentType = value; }

    /**
     * <p>The Component type.</p>
     */
    inline void SetComponentType(Aws::String&& value) { m_componentTypeHasBeenSet = true; m_componentType = std::move(value); }

    /**
     * <p>The Component type.</p>
     */
    inline void SetComponentType(const char* value) { m_componentTypeHasBeenSet = true; m_componentType.assign(value); }

    /**
     * <p>The Component type.</p>
     */
    inline ComponentStatusData& WithComponentType(const Aws::String& value) { SetComponentType(value); return *this;}

    /**
     * <p>The Component type.</p>
     */
    inline ComponentStatusData& WithComponentType(Aws::String&& value) { SetComponentType(std::move(value)); return *this;}

    /**
     * <p>The Component type.</p>
     */
    inline ComponentStatusData& WithComponentType(const char* value) { SetComponentType(value); return *this;}


    /**
     * <p>Dataflow UUID associated with the component.</p>
     */
    inline const Aws::String& GetDataflowId() const{ return m_dataflowId; }

    /**
     * <p>Dataflow UUID associated with the component.</p>
     */
    inline bool DataflowIdHasBeenSet() const { return m_dataflowIdHasBeenSet; }

    /**
     * <p>Dataflow UUID associated with the component.</p>
     */
    inline void SetDataflowId(const Aws::String& value) { m_dataflowIdHasBeenSet = true; m_dataflowId = value; }

    /**
     * <p>Dataflow UUID associated with the component.</p>
     */
    inline void SetDataflowId(Aws::String&& value) { m_dataflowIdHasBeenSet = true; m_dataflowId = std::move(value); }

    /**
     * <p>Dataflow UUID associated with the component.</p>
     */
    inline void SetDataflowId(const char* value) { m_dataflowIdHasBeenSet = true; m_dataflowId.assign(value); }

    /**
     * <p>Dataflow UUID associated with the component.</p>
     */
    inline ComponentStatusData& WithDataflowId(const Aws::String& value) { SetDataflowId(value); return *this;}

    /**
     * <p>Dataflow UUID associated with the component.</p>
     */
    inline ComponentStatusData& WithDataflowId(Aws::String&& value) { SetDataflowId(std::move(value)); return *this;}

    /**
     * <p>Dataflow UUID associated with the component.</p>
     */
    inline ComponentStatusData& WithDataflowId(const char* value) { SetDataflowId(value); return *this;}


    /**
     * <p>Packets dropped by component.</p>
     */
    inline long long GetPacketsDropped() const{ return m_packetsDropped; }

    /**
     * <p>Packets dropped by component.</p>
     */
    inline bool PacketsDroppedHasBeenSet() const { return m_packetsDroppedHasBeenSet; }

    /**
     * <p>Packets dropped by component.</p>
     */
    inline void SetPacketsDropped(long long value) { m_packetsDroppedHasBeenSet = true; m_packetsDropped = value; }

    /**
     * <p>Packets dropped by component.</p>
     */
    inline ComponentStatusData& WithPacketsDropped(long long value) { SetPacketsDropped(value); return *this;}


    /**
     * <p>Component status.</p>
     */
    inline const AgentStatus& GetStatus() const{ return m_status; }

    /**
     * <p>Component status.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>Component status.</p>
     */
    inline void SetStatus(const AgentStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>Component status.</p>
     */
    inline void SetStatus(AgentStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>Component status.</p>
     */
    inline ComponentStatusData& WithStatus(const AgentStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>Component status.</p>
     */
    inline ComponentStatusData& WithStatus(AgentStatus&& value) { SetStatus(std::move(value)); return *this;}

  private:

    long long m_bytesReceived;
    bool m_bytesReceivedHasBeenSet = false;

    long long m_bytesSent;
    bool m_bytesSentHasBeenSet = false;

    Aws::String m_capabilityArn;
    bool m_capabilityArnHasBeenSet = false;

    Aws::String m_componentType;
    bool m_componentTypeHasBeenSet = false;

    Aws::String m_dataflowId;
    bool m_dataflowIdHasBeenSet = false;

    long long m_packetsDropped;
    bool m_packetsDroppedHasBeenSet = false;

    AgentStatus m_status;
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace GroundStation
} // namespace Aws
