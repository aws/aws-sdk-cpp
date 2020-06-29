/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconnect/MediaConnect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mediaconnect/model/Encryption.h>
#include <aws/mediaconnect/model/Protocol.h>
#include <aws/mediaconnect/model/VpcInterfaceAttachment.h>
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
namespace MediaConnect
{
namespace Model
{

  /**
   * The output that you want to add to this flow.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/AddOutputRequest">AWS
   * API Reference</a></p>
   */
  class AWS_MEDIACONNECT_API AddOutputRequest
  {
  public:
    AddOutputRequest();
    AddOutputRequest(Aws::Utils::Json::JsonView jsonValue);
    AddOutputRequest& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * The range of IP addresses that should be allowed to initiate output requests to
     * this flow. These IP addresses should be in the form of a Classless Inter-Domain
     * Routing (CIDR) block; for example, 10.0.0.0/16.
     */
    inline const Aws::Vector<Aws::String>& GetCidrAllowList() const{ return m_cidrAllowList; }

    /**
     * The range of IP addresses that should be allowed to initiate output requests to
     * this flow. These IP addresses should be in the form of a Classless Inter-Domain
     * Routing (CIDR) block; for example, 10.0.0.0/16.
     */
    inline bool CidrAllowListHasBeenSet() const { return m_cidrAllowListHasBeenSet; }

    /**
     * The range of IP addresses that should be allowed to initiate output requests to
     * this flow. These IP addresses should be in the form of a Classless Inter-Domain
     * Routing (CIDR) block; for example, 10.0.0.0/16.
     */
    inline void SetCidrAllowList(const Aws::Vector<Aws::String>& value) { m_cidrAllowListHasBeenSet = true; m_cidrAllowList = value; }

    /**
     * The range of IP addresses that should be allowed to initiate output requests to
     * this flow. These IP addresses should be in the form of a Classless Inter-Domain
     * Routing (CIDR) block; for example, 10.0.0.0/16.
     */
    inline void SetCidrAllowList(Aws::Vector<Aws::String>&& value) { m_cidrAllowListHasBeenSet = true; m_cidrAllowList = std::move(value); }

    /**
     * The range of IP addresses that should be allowed to initiate output requests to
     * this flow. These IP addresses should be in the form of a Classless Inter-Domain
     * Routing (CIDR) block; for example, 10.0.0.0/16.
     */
    inline AddOutputRequest& WithCidrAllowList(const Aws::Vector<Aws::String>& value) { SetCidrAllowList(value); return *this;}

    /**
     * The range of IP addresses that should be allowed to initiate output requests to
     * this flow. These IP addresses should be in the form of a Classless Inter-Domain
     * Routing (CIDR) block; for example, 10.0.0.0/16.
     */
    inline AddOutputRequest& WithCidrAllowList(Aws::Vector<Aws::String>&& value) { SetCidrAllowList(std::move(value)); return *this;}

    /**
     * The range of IP addresses that should be allowed to initiate output requests to
     * this flow. These IP addresses should be in the form of a Classless Inter-Domain
     * Routing (CIDR) block; for example, 10.0.0.0/16.
     */
    inline AddOutputRequest& AddCidrAllowList(const Aws::String& value) { m_cidrAllowListHasBeenSet = true; m_cidrAllowList.push_back(value); return *this; }

    /**
     * The range of IP addresses that should be allowed to initiate output requests to
     * this flow. These IP addresses should be in the form of a Classless Inter-Domain
     * Routing (CIDR) block; for example, 10.0.0.0/16.
     */
    inline AddOutputRequest& AddCidrAllowList(Aws::String&& value) { m_cidrAllowListHasBeenSet = true; m_cidrAllowList.push_back(std::move(value)); return *this; }

    /**
     * The range of IP addresses that should be allowed to initiate output requests to
     * this flow. These IP addresses should be in the form of a Classless Inter-Domain
     * Routing (CIDR) block; for example, 10.0.0.0/16.
     */
    inline AddOutputRequest& AddCidrAllowList(const char* value) { m_cidrAllowListHasBeenSet = true; m_cidrAllowList.push_back(value); return *this; }


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
    inline AddOutputRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * A description of the output. This description appears only on the AWS Elemental
     * MediaConnect console and will not be seen by the end user.
     */
    inline AddOutputRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * A description of the output. This description appears only on the AWS Elemental
     * MediaConnect console and will not be seen by the end user.
     */
    inline AddOutputRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * The IP address from which video will be sent to output destinations.
     */
    inline const Aws::String& GetDestination() const{ return m_destination; }

    /**
     * The IP address from which video will be sent to output destinations.
     */
    inline bool DestinationHasBeenSet() const { return m_destinationHasBeenSet; }

    /**
     * The IP address from which video will be sent to output destinations.
     */
    inline void SetDestination(const Aws::String& value) { m_destinationHasBeenSet = true; m_destination = value; }

    /**
     * The IP address from which video will be sent to output destinations.
     */
    inline void SetDestination(Aws::String&& value) { m_destinationHasBeenSet = true; m_destination = std::move(value); }

    /**
     * The IP address from which video will be sent to output destinations.
     */
    inline void SetDestination(const char* value) { m_destinationHasBeenSet = true; m_destination.assign(value); }

    /**
     * The IP address from which video will be sent to output destinations.
     */
    inline AddOutputRequest& WithDestination(const Aws::String& value) { SetDestination(value); return *this;}

    /**
     * The IP address from which video will be sent to output destinations.
     */
    inline AddOutputRequest& WithDestination(Aws::String&& value) { SetDestination(std::move(value)); return *this;}

    /**
     * The IP address from which video will be sent to output destinations.
     */
    inline AddOutputRequest& WithDestination(const char* value) { SetDestination(value); return *this;}


    /**
     * The type of key used for the encryption. If no keyType is provided, the service
     * will use the default setting (static-key).
     */
    inline const Encryption& GetEncryption() const{ return m_encryption; }

    /**
     * The type of key used for the encryption. If no keyType is provided, the service
     * will use the default setting (static-key).
     */
    inline bool EncryptionHasBeenSet() const { return m_encryptionHasBeenSet; }

    /**
     * The type of key used for the encryption. If no keyType is provided, the service
     * will use the default setting (static-key).
     */
    inline void SetEncryption(const Encryption& value) { m_encryptionHasBeenSet = true; m_encryption = value; }

    /**
     * The type of key used for the encryption. If no keyType is provided, the service
     * will use the default setting (static-key).
     */
    inline void SetEncryption(Encryption&& value) { m_encryptionHasBeenSet = true; m_encryption = std::move(value); }

    /**
     * The type of key used for the encryption. If no keyType is provided, the service
     * will use the default setting (static-key).
     */
    inline AddOutputRequest& WithEncryption(const Encryption& value) { SetEncryption(value); return *this;}

    /**
     * The type of key used for the encryption. If no keyType is provided, the service
     * will use the default setting (static-key).
     */
    inline AddOutputRequest& WithEncryption(Encryption&& value) { SetEncryption(std::move(value)); return *this;}


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
    inline AddOutputRequest& WithMaxLatency(int value) { SetMaxLatency(value); return *this;}


    /**
     * The name of the output. This value must be unique within the current flow.
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * The name of the output. This value must be unique within the current flow.
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * The name of the output. This value must be unique within the current flow.
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * The name of the output. This value must be unique within the current flow.
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * The name of the output. This value must be unique within the current flow.
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * The name of the output. This value must be unique within the current flow.
     */
    inline AddOutputRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * The name of the output. This value must be unique within the current flow.
     */
    inline AddOutputRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * The name of the output. This value must be unique within the current flow.
     */
    inline AddOutputRequest& WithName(const char* value) { SetName(value); return *this;}


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
    inline AddOutputRequest& WithPort(int value) { SetPort(value); return *this;}


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
    inline AddOutputRequest& WithProtocol(const Protocol& value) { SetProtocol(value); return *this;}

    /**
     * The protocol to use for the output.
     */
    inline AddOutputRequest& WithProtocol(Protocol&& value) { SetProtocol(std::move(value)); return *this;}


    /**
     * The remote ID for the Zixi-pull output stream.
     */
    inline const Aws::String& GetRemoteId() const{ return m_remoteId; }

    /**
     * The remote ID for the Zixi-pull output stream.
     */
    inline bool RemoteIdHasBeenSet() const { return m_remoteIdHasBeenSet; }

    /**
     * The remote ID for the Zixi-pull output stream.
     */
    inline void SetRemoteId(const Aws::String& value) { m_remoteIdHasBeenSet = true; m_remoteId = value; }

    /**
     * The remote ID for the Zixi-pull output stream.
     */
    inline void SetRemoteId(Aws::String&& value) { m_remoteIdHasBeenSet = true; m_remoteId = std::move(value); }

    /**
     * The remote ID for the Zixi-pull output stream.
     */
    inline void SetRemoteId(const char* value) { m_remoteIdHasBeenSet = true; m_remoteId.assign(value); }

    /**
     * The remote ID for the Zixi-pull output stream.
     */
    inline AddOutputRequest& WithRemoteId(const Aws::String& value) { SetRemoteId(value); return *this;}

    /**
     * The remote ID for the Zixi-pull output stream.
     */
    inline AddOutputRequest& WithRemoteId(Aws::String&& value) { SetRemoteId(std::move(value)); return *this;}

    /**
     * The remote ID for the Zixi-pull output stream.
     */
    inline AddOutputRequest& WithRemoteId(const char* value) { SetRemoteId(value); return *this;}


    /**
     * The smoothing latency in milliseconds for RIST, RTP, and RTP-FEC streams.
     */
    inline int GetSmoothingLatency() const{ return m_smoothingLatency; }

    /**
     * The smoothing latency in milliseconds for RIST, RTP, and RTP-FEC streams.
     */
    inline bool SmoothingLatencyHasBeenSet() const { return m_smoothingLatencyHasBeenSet; }

    /**
     * The smoothing latency in milliseconds for RIST, RTP, and RTP-FEC streams.
     */
    inline void SetSmoothingLatency(int value) { m_smoothingLatencyHasBeenSet = true; m_smoothingLatency = value; }

    /**
     * The smoothing latency in milliseconds for RIST, RTP, and RTP-FEC streams.
     */
    inline AddOutputRequest& WithSmoothingLatency(int value) { SetSmoothingLatency(value); return *this;}


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
    inline AddOutputRequest& WithStreamId(const Aws::String& value) { SetStreamId(value); return *this;}

    /**
     * The stream ID that you want to use for this transport. This parameter applies
     * only to Zixi-based streams.
     */
    inline AddOutputRequest& WithStreamId(Aws::String&& value) { SetStreamId(std::move(value)); return *this;}

    /**
     * The stream ID that you want to use for this transport. This parameter applies
     * only to Zixi-based streams.
     */
    inline AddOutputRequest& WithStreamId(const char* value) { SetStreamId(value); return *this;}


    /**
     * The name of the VPC interface attachment to use for this output.
     */
    inline const VpcInterfaceAttachment& GetVpcInterfaceAttachment() const{ return m_vpcInterfaceAttachment; }

    /**
     * The name of the VPC interface attachment to use for this output.
     */
    inline bool VpcInterfaceAttachmentHasBeenSet() const { return m_vpcInterfaceAttachmentHasBeenSet; }

    /**
     * The name of the VPC interface attachment to use for this output.
     */
    inline void SetVpcInterfaceAttachment(const VpcInterfaceAttachment& value) { m_vpcInterfaceAttachmentHasBeenSet = true; m_vpcInterfaceAttachment = value; }

    /**
     * The name of the VPC interface attachment to use for this output.
     */
    inline void SetVpcInterfaceAttachment(VpcInterfaceAttachment&& value) { m_vpcInterfaceAttachmentHasBeenSet = true; m_vpcInterfaceAttachment = std::move(value); }

    /**
     * The name of the VPC interface attachment to use for this output.
     */
    inline AddOutputRequest& WithVpcInterfaceAttachment(const VpcInterfaceAttachment& value) { SetVpcInterfaceAttachment(value); return *this;}

    /**
     * The name of the VPC interface attachment to use for this output.
     */
    inline AddOutputRequest& WithVpcInterfaceAttachment(VpcInterfaceAttachment&& value) { SetVpcInterfaceAttachment(std::move(value)); return *this;}

  private:

    Aws::Vector<Aws::String> m_cidrAllowList;
    bool m_cidrAllowListHasBeenSet;

    Aws::String m_description;
    bool m_descriptionHasBeenSet;

    Aws::String m_destination;
    bool m_destinationHasBeenSet;

    Encryption m_encryption;
    bool m_encryptionHasBeenSet;

    int m_maxLatency;
    bool m_maxLatencyHasBeenSet;

    Aws::String m_name;
    bool m_nameHasBeenSet;

    int m_port;
    bool m_portHasBeenSet;

    Protocol m_protocol;
    bool m_protocolHasBeenSet;

    Aws::String m_remoteId;
    bool m_remoteIdHasBeenSet;

    int m_smoothingLatency;
    bool m_smoothingLatencyHasBeenSet;

    Aws::String m_streamId;
    bool m_streamIdHasBeenSet;

    VpcInterfaceAttachment m_vpcInterfaceAttachment;
    bool m_vpcInterfaceAttachmentHasBeenSet;
  };

} // namespace Model
} // namespace MediaConnect
} // namespace Aws
