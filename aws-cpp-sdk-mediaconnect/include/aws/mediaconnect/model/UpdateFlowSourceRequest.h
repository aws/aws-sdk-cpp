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
#include <aws/mediaconnect/model/UpdateEncryption.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mediaconnect/model/Protocol.h>
#include <utility>

namespace Aws
{
namespace MediaConnect
{
namespace Model
{

  /**
   * A request to update the source of a flow.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/UpdateFlowSourceRequest">AWS
   * API Reference</a></p>
   */
  class AWS_MEDIACONNECT_API UpdateFlowSourceRequest : public MediaConnectRequest
  {
  public:
    UpdateFlowSourceRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateFlowSource"; }

    Aws::String SerializePayload() const override;


    /**
     * The type of encryption used on the content ingested from this source.
     */
    inline const UpdateEncryption& GetDecryption() const{ return m_decryption; }

    /**
     * The type of encryption used on the content ingested from this source.
     */
    inline bool DecryptionHasBeenSet() const { return m_decryptionHasBeenSet; }

    /**
     * The type of encryption used on the content ingested from this source.
     */
    inline void SetDecryption(const UpdateEncryption& value) { m_decryptionHasBeenSet = true; m_decryption = value; }

    /**
     * The type of encryption used on the content ingested from this source.
     */
    inline void SetDecryption(UpdateEncryption&& value) { m_decryptionHasBeenSet = true; m_decryption = std::move(value); }

    /**
     * The type of encryption used on the content ingested from this source.
     */
    inline UpdateFlowSourceRequest& WithDecryption(const UpdateEncryption& value) { SetDecryption(value); return *this;}

    /**
     * The type of encryption used on the content ingested from this source.
     */
    inline UpdateFlowSourceRequest& WithDecryption(UpdateEncryption&& value) { SetDecryption(std::move(value)); return *this;}


    /**
     * A description for the source. This value is not used or seen outside of the
     * current AWS Elemental MediaConnect account.
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * A description for the source. This value is not used or seen outside of the
     * current AWS Elemental MediaConnect account.
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * A description for the source. This value is not used or seen outside of the
     * current AWS Elemental MediaConnect account.
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * A description for the source. This value is not used or seen outside of the
     * current AWS Elemental MediaConnect account.
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * A description for the source. This value is not used or seen outside of the
     * current AWS Elemental MediaConnect account.
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * A description for the source. This value is not used or seen outside of the
     * current AWS Elemental MediaConnect account.
     */
    inline UpdateFlowSourceRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * A description for the source. This value is not used or seen outside of the
     * current AWS Elemental MediaConnect account.
     */
    inline UpdateFlowSourceRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * A description for the source. This value is not used or seen outside of the
     * current AWS Elemental MediaConnect account.
     */
    inline UpdateFlowSourceRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * The ARN of the entitlement that allows you to subscribe to this flow. The
     * entitlement is set by the flow originator, and the ARN is generated as part of
     * the originator's flow.
     */
    inline const Aws::String& GetEntitlementArn() const{ return m_entitlementArn; }

    /**
     * The ARN of the entitlement that allows you to subscribe to this flow. The
     * entitlement is set by the flow originator, and the ARN is generated as part of
     * the originator's flow.
     */
    inline bool EntitlementArnHasBeenSet() const { return m_entitlementArnHasBeenSet; }

    /**
     * The ARN of the entitlement that allows you to subscribe to this flow. The
     * entitlement is set by the flow originator, and the ARN is generated as part of
     * the originator's flow.
     */
    inline void SetEntitlementArn(const Aws::String& value) { m_entitlementArnHasBeenSet = true; m_entitlementArn = value; }

    /**
     * The ARN of the entitlement that allows you to subscribe to this flow. The
     * entitlement is set by the flow originator, and the ARN is generated as part of
     * the originator's flow.
     */
    inline void SetEntitlementArn(Aws::String&& value) { m_entitlementArnHasBeenSet = true; m_entitlementArn = std::move(value); }

    /**
     * The ARN of the entitlement that allows you to subscribe to this flow. The
     * entitlement is set by the flow originator, and the ARN is generated as part of
     * the originator's flow.
     */
    inline void SetEntitlementArn(const char* value) { m_entitlementArnHasBeenSet = true; m_entitlementArn.assign(value); }

    /**
     * The ARN of the entitlement that allows you to subscribe to this flow. The
     * entitlement is set by the flow originator, and the ARN is generated as part of
     * the originator's flow.
     */
    inline UpdateFlowSourceRequest& WithEntitlementArn(const Aws::String& value) { SetEntitlementArn(value); return *this;}

    /**
     * The ARN of the entitlement that allows you to subscribe to this flow. The
     * entitlement is set by the flow originator, and the ARN is generated as part of
     * the originator's flow.
     */
    inline UpdateFlowSourceRequest& WithEntitlementArn(Aws::String&& value) { SetEntitlementArn(std::move(value)); return *this;}

    /**
     * The ARN of the entitlement that allows you to subscribe to this flow. The
     * entitlement is set by the flow originator, and the ARN is generated as part of
     * the originator's flow.
     */
    inline UpdateFlowSourceRequest& WithEntitlementArn(const char* value) { SetEntitlementArn(value); return *this;}


    /**
     * The flow that is associated with the source that you want to update.
     */
    inline const Aws::String& GetFlowArn() const{ return m_flowArn; }

    /**
     * The flow that is associated with the source that you want to update.
     */
    inline bool FlowArnHasBeenSet() const { return m_flowArnHasBeenSet; }

    /**
     * The flow that is associated with the source that you want to update.
     */
    inline void SetFlowArn(const Aws::String& value) { m_flowArnHasBeenSet = true; m_flowArn = value; }

    /**
     * The flow that is associated with the source that you want to update.
     */
    inline void SetFlowArn(Aws::String&& value) { m_flowArnHasBeenSet = true; m_flowArn = std::move(value); }

    /**
     * The flow that is associated with the source that you want to update.
     */
    inline void SetFlowArn(const char* value) { m_flowArnHasBeenSet = true; m_flowArn.assign(value); }

    /**
     * The flow that is associated with the source that you want to update.
     */
    inline UpdateFlowSourceRequest& WithFlowArn(const Aws::String& value) { SetFlowArn(value); return *this;}

    /**
     * The flow that is associated with the source that you want to update.
     */
    inline UpdateFlowSourceRequest& WithFlowArn(Aws::String&& value) { SetFlowArn(std::move(value)); return *this;}

    /**
     * The flow that is associated with the source that you want to update.
     */
    inline UpdateFlowSourceRequest& WithFlowArn(const char* value) { SetFlowArn(value); return *this;}


    /**
     * The port that the flow will be listening on for incoming content.
     */
    inline int GetIngestPort() const{ return m_ingestPort; }

    /**
     * The port that the flow will be listening on for incoming content.
     */
    inline bool IngestPortHasBeenSet() const { return m_ingestPortHasBeenSet; }

    /**
     * The port that the flow will be listening on for incoming content.
     */
    inline void SetIngestPort(int value) { m_ingestPortHasBeenSet = true; m_ingestPort = value; }

    /**
     * The port that the flow will be listening on for incoming content.
     */
    inline UpdateFlowSourceRequest& WithIngestPort(int value) { SetIngestPort(value); return *this;}


    /**
     * The smoothing max bitrate for RTP and RTP-FEC streams.
     */
    inline int GetMaxBitrate() const{ return m_maxBitrate; }

    /**
     * The smoothing max bitrate for RTP and RTP-FEC streams.
     */
    inline bool MaxBitrateHasBeenSet() const { return m_maxBitrateHasBeenSet; }

    /**
     * The smoothing max bitrate for RTP and RTP-FEC streams.
     */
    inline void SetMaxBitrate(int value) { m_maxBitrateHasBeenSet = true; m_maxBitrate = value; }

    /**
     * The smoothing max bitrate for RTP and RTP-FEC streams.
     */
    inline UpdateFlowSourceRequest& WithMaxBitrate(int value) { SetMaxBitrate(value); return *this;}


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
    inline UpdateFlowSourceRequest& WithMaxLatency(int value) { SetMaxLatency(value); return *this;}


    /**
     * The protocol that is used by the source.
     */
    inline const Protocol& GetProtocol() const{ return m_protocol; }

    /**
     * The protocol that is used by the source.
     */
    inline bool ProtocolHasBeenSet() const { return m_protocolHasBeenSet; }

    /**
     * The protocol that is used by the source.
     */
    inline void SetProtocol(const Protocol& value) { m_protocolHasBeenSet = true; m_protocol = value; }

    /**
     * The protocol that is used by the source.
     */
    inline void SetProtocol(Protocol&& value) { m_protocolHasBeenSet = true; m_protocol = std::move(value); }

    /**
     * The protocol that is used by the source.
     */
    inline UpdateFlowSourceRequest& WithProtocol(const Protocol& value) { SetProtocol(value); return *this;}

    /**
     * The protocol that is used by the source.
     */
    inline UpdateFlowSourceRequest& WithProtocol(Protocol&& value) { SetProtocol(std::move(value)); return *this;}


    /**
     * The ARN of the source that you want to update.
     */
    inline const Aws::String& GetSourceArn() const{ return m_sourceArn; }

    /**
     * The ARN of the source that you want to update.
     */
    inline bool SourceArnHasBeenSet() const { return m_sourceArnHasBeenSet; }

    /**
     * The ARN of the source that you want to update.
     */
    inline void SetSourceArn(const Aws::String& value) { m_sourceArnHasBeenSet = true; m_sourceArn = value; }

    /**
     * The ARN of the source that you want to update.
     */
    inline void SetSourceArn(Aws::String&& value) { m_sourceArnHasBeenSet = true; m_sourceArn = std::move(value); }

    /**
     * The ARN of the source that you want to update.
     */
    inline void SetSourceArn(const char* value) { m_sourceArnHasBeenSet = true; m_sourceArn.assign(value); }

    /**
     * The ARN of the source that you want to update.
     */
    inline UpdateFlowSourceRequest& WithSourceArn(const Aws::String& value) { SetSourceArn(value); return *this;}

    /**
     * The ARN of the source that you want to update.
     */
    inline UpdateFlowSourceRequest& WithSourceArn(Aws::String&& value) { SetSourceArn(std::move(value)); return *this;}

    /**
     * The ARN of the source that you want to update.
     */
    inline UpdateFlowSourceRequest& WithSourceArn(const char* value) { SetSourceArn(value); return *this;}


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
    inline UpdateFlowSourceRequest& WithStreamId(const Aws::String& value) { SetStreamId(value); return *this;}

    /**
     * The stream ID that you want to use for this transport. This parameter applies
     * only to Zixi-based streams.
     */
    inline UpdateFlowSourceRequest& WithStreamId(Aws::String&& value) { SetStreamId(std::move(value)); return *this;}

    /**
     * The stream ID that you want to use for this transport. This parameter applies
     * only to Zixi-based streams.
     */
    inline UpdateFlowSourceRequest& WithStreamId(const char* value) { SetStreamId(value); return *this;}


    /**
     * The range of IP addresses that should be allowed to contribute content to your
     * source. These IP addresses should in the form of a Classless Inter-Domain
     * Routing (CIDR) block; for example, 10.0.0.0/16.
     */
    inline const Aws::String& GetWhitelistCidr() const{ return m_whitelistCidr; }

    /**
     * The range of IP addresses that should be allowed to contribute content to your
     * source. These IP addresses should in the form of a Classless Inter-Domain
     * Routing (CIDR) block; for example, 10.0.0.0/16.
     */
    inline bool WhitelistCidrHasBeenSet() const { return m_whitelistCidrHasBeenSet; }

    /**
     * The range of IP addresses that should be allowed to contribute content to your
     * source. These IP addresses should in the form of a Classless Inter-Domain
     * Routing (CIDR) block; for example, 10.0.0.0/16.
     */
    inline void SetWhitelistCidr(const Aws::String& value) { m_whitelistCidrHasBeenSet = true; m_whitelistCidr = value; }

    /**
     * The range of IP addresses that should be allowed to contribute content to your
     * source. These IP addresses should in the form of a Classless Inter-Domain
     * Routing (CIDR) block; for example, 10.0.0.0/16.
     */
    inline void SetWhitelistCidr(Aws::String&& value) { m_whitelistCidrHasBeenSet = true; m_whitelistCidr = std::move(value); }

    /**
     * The range of IP addresses that should be allowed to contribute content to your
     * source. These IP addresses should in the form of a Classless Inter-Domain
     * Routing (CIDR) block; for example, 10.0.0.0/16.
     */
    inline void SetWhitelistCidr(const char* value) { m_whitelistCidrHasBeenSet = true; m_whitelistCidr.assign(value); }

    /**
     * The range of IP addresses that should be allowed to contribute content to your
     * source. These IP addresses should in the form of a Classless Inter-Domain
     * Routing (CIDR) block; for example, 10.0.0.0/16.
     */
    inline UpdateFlowSourceRequest& WithWhitelistCidr(const Aws::String& value) { SetWhitelistCidr(value); return *this;}

    /**
     * The range of IP addresses that should be allowed to contribute content to your
     * source. These IP addresses should in the form of a Classless Inter-Domain
     * Routing (CIDR) block; for example, 10.0.0.0/16.
     */
    inline UpdateFlowSourceRequest& WithWhitelistCidr(Aws::String&& value) { SetWhitelistCidr(std::move(value)); return *this;}

    /**
     * The range of IP addresses that should be allowed to contribute content to your
     * source. These IP addresses should in the form of a Classless Inter-Domain
     * Routing (CIDR) block; for example, 10.0.0.0/16.
     */
    inline UpdateFlowSourceRequest& WithWhitelistCidr(const char* value) { SetWhitelistCidr(value); return *this;}

  private:

    UpdateEncryption m_decryption;
    bool m_decryptionHasBeenSet;

    Aws::String m_description;
    bool m_descriptionHasBeenSet;

    Aws::String m_entitlementArn;
    bool m_entitlementArnHasBeenSet;

    Aws::String m_flowArn;
    bool m_flowArnHasBeenSet;

    int m_ingestPort;
    bool m_ingestPortHasBeenSet;

    int m_maxBitrate;
    bool m_maxBitrateHasBeenSet;

    int m_maxLatency;
    bool m_maxLatencyHasBeenSet;

    Protocol m_protocol;
    bool m_protocolHasBeenSet;

    Aws::String m_sourceArn;
    bool m_sourceArnHasBeenSet;

    Aws::String m_streamId;
    bool m_streamIdHasBeenSet;

    Aws::String m_whitelistCidr;
    bool m_whitelistCidrHasBeenSet;
  };

} // namespace Model
} // namespace MediaConnect
} // namespace Aws
