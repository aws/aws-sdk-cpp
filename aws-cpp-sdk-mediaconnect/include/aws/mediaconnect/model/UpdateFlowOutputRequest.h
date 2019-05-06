/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/mediaconnect/MediaConnect_EXPORTS.h>
#include <aws/mediaconnect/MediaConnectRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mediaconnect/model/UpdateEncryption.h>
#include <aws/mediaconnect/model/Protocol.h>
#include <utility>

namespace Aws
{
namespace MediaConnect
{
namespace Model
{

  /**
   * The fields that you want to update in the output.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/UpdateFlowOutputRequest">AWS
   * API Reference</a></p>
   */
  class AWS_MEDIACONNECT_API UpdateFlowOutputRequest : public MediaConnectRequest
  {
  public:
    UpdateFlowOutputRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateFlowOutput"; }

    Aws::String SerializePayload() const override;


    /**
     * A description of the output. This description appears only on the AWS Elemental
     * MediaConnect console and will not be seen by the end user.
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * A description of the output. This description appears only on the AWS Elemental
     * MediaConnect console and will not be seen by the end user.
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * A description of the output. This description appears only on the AWS Elemental
     * MediaConnect console and will not be seen by the end user.
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * A description of the output. This description appears only on the AWS Elemental
     * MediaConnect console and will not be seen by the end user.
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * A description of the output. This description appears only on the AWS Elemental
     * MediaConnect console and will not be seen by the end user.
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * A description of the output. This description appears only on the AWS Elemental
     * MediaConnect console and will not be seen by the end user.
     */
    inline UpdateFlowOutputRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * A description of the output. This description appears only on the AWS Elemental
     * MediaConnect console and will not be seen by the end user.
     */
    inline UpdateFlowOutputRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * A description of the output. This description appears only on the AWS Elemental
     * MediaConnect console and will not be seen by the end user.
     */
    inline UpdateFlowOutputRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * The IP address where you want to send the output.
     */
    inline const Aws::String& GetDestination() const{ return m_destination; }

    /**
     * The IP address where you want to send the output.
     */
    inline bool DestinationHasBeenSet() const { return m_destinationHasBeenSet; }

    /**
     * The IP address where you want to send the output.
     */
    inline void SetDestination(const Aws::String& value) { m_destinationHasBeenSet = true; m_destination = value; }

    /**
     * The IP address where you want to send the output.
     */
    inline void SetDestination(Aws::String&& value) { m_destinationHasBeenSet = true; m_destination = std::move(value); }

    /**
     * The IP address where you want to send the output.
     */
    inline void SetDestination(const char* value) { m_destinationHasBeenSet = true; m_destination.assign(value); }

    /**
     * The IP address where you want to send the output.
     */
    inline UpdateFlowOutputRequest& WithDestination(const Aws::String& value) { SetDestination(value); return *this;}

    /**
     * The IP address where you want to send the output.
     */
    inline UpdateFlowOutputRequest& WithDestination(Aws::String&& value) { SetDestination(std::move(value)); return *this;}

    /**
     * The IP address where you want to send the output.
     */
    inline UpdateFlowOutputRequest& WithDestination(const char* value) { SetDestination(value); return *this;}


    /**
     * The type of key used for the encryption. If no keyType is provided, the service
     * will use the default setting (static-key).
     */
    inline const UpdateEncryption& GetEncryption() const{ return m_encryption; }

    /**
     * The type of key used for the encryption. If no keyType is provided, the service
     * will use the default setting (static-key).
     */
    inline bool EncryptionHasBeenSet() const { return m_encryptionHasBeenSet; }

    /**
     * The type of key used for the encryption. If no keyType is provided, the service
     * will use the default setting (static-key).
     */
    inline void SetEncryption(const UpdateEncryption& value) { m_encryptionHasBeenSet = true; m_encryption = value; }

    /**
     * The type of key used for the encryption. If no keyType is provided, the service
     * will use the default setting (static-key).
     */
    inline void SetEncryption(UpdateEncryption&& value) { m_encryptionHasBeenSet = true; m_encryption = std::move(value); }

    /**
     * The type of key used for the encryption. If no keyType is provided, the service
     * will use the default setting (static-key).
     */
    inline UpdateFlowOutputRequest& WithEncryption(const UpdateEncryption& value) { SetEncryption(value); return *this;}

    /**
     * The type of key used for the encryption. If no keyType is provided, the service
     * will use the default setting (static-key).
     */
    inline UpdateFlowOutputRequest& WithEncryption(UpdateEncryption&& value) { SetEncryption(std::move(value)); return *this;}


    /**
     * The flow that is associated with the output that you want to update.
     */
    inline const Aws::String& GetFlowArn() const{ return m_flowArn; }

    /**
     * The flow that is associated with the output that you want to update.
     */
    inline bool FlowArnHasBeenSet() const { return m_flowArnHasBeenSet; }

    /**
     * The flow that is associated with the output that you want to update.
     */
    inline void SetFlowArn(const Aws::String& value) { m_flowArnHasBeenSet = true; m_flowArn = value; }

    /**
     * The flow that is associated with the output that you want to update.
     */
    inline void SetFlowArn(Aws::String&& value) { m_flowArnHasBeenSet = true; m_flowArn = std::move(value); }

    /**
     * The flow that is associated with the output that you want to update.
     */
    inline void SetFlowArn(const char* value) { m_flowArnHasBeenSet = true; m_flowArn.assign(value); }

    /**
     * The flow that is associated with the output that you want to update.
     */
    inline UpdateFlowOutputRequest& WithFlowArn(const Aws::String& value) { SetFlowArn(value); return *this;}

    /**
     * The flow that is associated with the output that you want to update.
     */
    inline UpdateFlowOutputRequest& WithFlowArn(Aws::String&& value) { SetFlowArn(std::move(value)); return *this;}

    /**
     * The flow that is associated with the output that you want to update.
     */
    inline UpdateFlowOutputRequest& WithFlowArn(const char* value) { SetFlowArn(value); return *this;}


    /**
     * The maximum latency in milliseconds for Zixi-based streams.
     */
    inline int GetMaxLatency() const{ return m_maxLatency; }

    /**
     * The maximum latency in milliseconds for Zixi-based streams.
     */
    inline bool MaxLatencyHasBeenSet() const { return m_maxLatencyHasBeenSet; }

    /**
     * The maximum latency in milliseconds for Zixi-based streams.
     */
    inline void SetMaxLatency(int value) { m_maxLatencyHasBeenSet = true; m_maxLatency = value; }

    /**
     * The maximum latency in milliseconds for Zixi-based streams.
     */
    inline UpdateFlowOutputRequest& WithMaxLatency(int value) { SetMaxLatency(value); return *this;}


    /**
     * The ARN of the output that you want to update.
     */
    inline const Aws::String& GetOutputArn() const{ return m_outputArn; }

    /**
     * The ARN of the output that you want to update.
     */
    inline bool OutputArnHasBeenSet() const { return m_outputArnHasBeenSet; }

    /**
     * The ARN of the output that you want to update.
     */
    inline void SetOutputArn(const Aws::String& value) { m_outputArnHasBeenSet = true; m_outputArn = value; }

    /**
     * The ARN of the output that you want to update.
     */
    inline void SetOutputArn(Aws::String&& value) { m_outputArnHasBeenSet = true; m_outputArn = std::move(value); }

    /**
     * The ARN of the output that you want to update.
     */
    inline void SetOutputArn(const char* value) { m_outputArnHasBeenSet = true; m_outputArn.assign(value); }

    /**
     * The ARN of the output that you want to update.
     */
    inline UpdateFlowOutputRequest& WithOutputArn(const Aws::String& value) { SetOutputArn(value); return *this;}

    /**
     * The ARN of the output that you want to update.
     */
    inline UpdateFlowOutputRequest& WithOutputArn(Aws::String&& value) { SetOutputArn(std::move(value)); return *this;}

    /**
     * The ARN of the output that you want to update.
     */
    inline UpdateFlowOutputRequest& WithOutputArn(const char* value) { SetOutputArn(value); return *this;}


    /**
     * The port to use when content is distributed to this output.
     */
    inline int GetPort() const{ return m_port; }

    /**
     * The port to use when content is distributed to this output.
     */
    inline bool PortHasBeenSet() const { return m_portHasBeenSet; }

    /**
     * The port to use when content is distributed to this output.
     */
    inline void SetPort(int value) { m_portHasBeenSet = true; m_port = value; }

    /**
     * The port to use when content is distributed to this output.
     */
    inline UpdateFlowOutputRequest& WithPort(int value) { SetPort(value); return *this;}


    /**
     * The protocol to use for the output.
     */
    inline const Protocol& GetProtocol() const{ return m_protocol; }

    /**
     * The protocol to use for the output.
     */
    inline bool ProtocolHasBeenSet() const { return m_protocolHasBeenSet; }

    /**
     * The protocol to use for the output.
     */
    inline void SetProtocol(const Protocol& value) { m_protocolHasBeenSet = true; m_protocol = value; }

    /**
     * The protocol to use for the output.
     */
    inline void SetProtocol(Protocol&& value) { m_protocolHasBeenSet = true; m_protocol = std::move(value); }

    /**
     * The protocol to use for the output.
     */
    inline UpdateFlowOutputRequest& WithProtocol(const Protocol& value) { SetProtocol(value); return *this;}

    /**
     * The protocol to use for the output.
     */
    inline UpdateFlowOutputRequest& WithProtocol(Protocol&& value) { SetProtocol(std::move(value)); return *this;}


    /**
     * The smoothing latency in milliseconds for RTP and RTP-FEC streams.
     */
    inline int GetSmoothingLatency() const{ return m_smoothingLatency; }

    /**
     * The smoothing latency in milliseconds for RTP and RTP-FEC streams.
     */
    inline bool SmoothingLatencyHasBeenSet() const { return m_smoothingLatencyHasBeenSet; }

    /**
     * The smoothing latency in milliseconds for RTP and RTP-FEC streams.
     */
    inline void SetSmoothingLatency(int value) { m_smoothingLatencyHasBeenSet = true; m_smoothingLatency = value; }

    /**
     * The smoothing latency in milliseconds for RTP and RTP-FEC streams.
     */
    inline UpdateFlowOutputRequest& WithSmoothingLatency(int value) { SetSmoothingLatency(value); return *this;}


    /**
     * The stream ID that you want to use for this transport. This parameter applies
     * only to Zixi-based streams.
     */
    inline const Aws::String& GetStreamId() const{ return m_streamId; }

    /**
     * The stream ID that you want to use for this transport. This parameter applies
     * only to Zixi-based streams.
     */
    inline bool StreamIdHasBeenSet() const { return m_streamIdHasBeenSet; }

    /**
     * The stream ID that you want to use for this transport. This parameter applies
     * only to Zixi-based streams.
     */
    inline void SetStreamId(const Aws::String& value) { m_streamIdHasBeenSet = true; m_streamId = value; }

    /**
     * The stream ID that you want to use for this transport. This parameter applies
     * only to Zixi-based streams.
     */
    inline void SetStreamId(Aws::String&& value) { m_streamIdHasBeenSet = true; m_streamId = std::move(value); }

    /**
     * The stream ID that you want to use for this transport. This parameter applies
     * only to Zixi-based streams.
     */
    inline void SetStreamId(const char* value) { m_streamIdHasBeenSet = true; m_streamId.assign(value); }

    /**
     * The stream ID that you want to use for this transport. This parameter applies
     * only to Zixi-based streams.
     */
    inline UpdateFlowOutputRequest& WithStreamId(const Aws::String& value) { SetStreamId(value); return *this;}

    /**
     * The stream ID that you want to use for this transport. This parameter applies
     * only to Zixi-based streams.
     */
    inline UpdateFlowOutputRequest& WithStreamId(Aws::String&& value) { SetStreamId(std::move(value)); return *this;}

    /**
     * The stream ID that you want to use for this transport. This parameter applies
     * only to Zixi-based streams.
     */
    inline UpdateFlowOutputRequest& WithStreamId(const char* value) { SetStreamId(value); return *this;}

  private:

    Aws::String m_description;
    bool m_descriptionHasBeenSet;

    Aws::String m_destination;
    bool m_destinationHasBeenSet;

    UpdateEncryption m_encryption;
    bool m_encryptionHasBeenSet;

    Aws::String m_flowArn;
    bool m_flowArnHasBeenSet;

    int m_maxLatency;
    bool m_maxLatencyHasBeenSet;

    Aws::String m_outputArn;
    bool m_outputArnHasBeenSet;

    int m_port;
    bool m_portHasBeenSet;

    Protocol m_protocol;
    bool m_protocolHasBeenSet;

    int m_smoothingLatency;
    bool m_smoothingLatencyHasBeenSet;

    Aws::String m_streamId;
    bool m_streamIdHasBeenSet;
  };

} // namespace Model
} // namespace MediaConnect
} // namespace Aws
