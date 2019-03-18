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
#include <aws/mediaconnect/model/Encryption.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mediaconnect/model/Protocol.h>
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
   * The settings for the source of the flow.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/SetSourceRequest">AWS
   * API Reference</a></p>
   */
  class AWS_MEDIACONNECT_API SetSourceRequest
  {
  public:
    SetSourceRequest();
    SetSourceRequest(Aws::Utils::Json::JsonView jsonValue);
    SetSourceRequest& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * The type of encryption that is used on the content ingested from this source.
     */
    inline const Encryption& GetDecryption() const{ return m_decryption; }

    /**
     * The type of encryption that is used on the content ingested from this source.
     */
    inline bool DecryptionHasBeenSet() const { return m_decryptionHasBeenSet; }

    /**
     * The type of encryption that is used on the content ingested from this source.
     */
    inline void SetDecryption(const Encryption& value) { m_decryptionHasBeenSet = true; m_decryption = value; }

    /**
     * The type of encryption that is used on the content ingested from this source.
     */
    inline void SetDecryption(Encryption&& value) { m_decryptionHasBeenSet = true; m_decryption = std::move(value); }

    /**
     * The type of encryption that is used on the content ingested from this source.
     */
    inline SetSourceRequest& WithDecryption(const Encryption& value) { SetDecryption(value); return *this;}

    /**
     * The type of encryption that is used on the content ingested from this source.
     */
    inline SetSourceRequest& WithDecryption(Encryption&& value) { SetDecryption(std::move(value)); return *this;}


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
    inline SetSourceRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * A description for the source. This value is not used or seen outside of the
     * current AWS Elemental MediaConnect account.
     */
    inline SetSourceRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * A description for the source. This value is not used or seen outside of the
     * current AWS Elemental MediaConnect account.
     */
    inline SetSourceRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


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
    inline SetSourceRequest& WithEntitlementArn(const Aws::String& value) { SetEntitlementArn(value); return *this;}

    /**
     * The ARN of the entitlement that allows you to subscribe to this flow. The
     * entitlement is set by the flow originator, and the ARN is generated as part of
     * the originator's flow.
     */
    inline SetSourceRequest& WithEntitlementArn(Aws::String&& value) { SetEntitlementArn(std::move(value)); return *this;}

    /**
     * The ARN of the entitlement that allows you to subscribe to this flow. The
     * entitlement is set by the flow originator, and the ARN is generated as part of
     * the originator's flow.
     */
    inline SetSourceRequest& WithEntitlementArn(const char* value) { SetEntitlementArn(value); return *this;}


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
    inline SetSourceRequest& WithIngestPort(int value) { SetIngestPort(value); return *this;}


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
    inline SetSourceRequest& WithMaxBitrate(int value) { SetMaxBitrate(value); return *this;}


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
    inline SetSourceRequest& WithMaxLatency(int value) { SetMaxLatency(value); return *this;}


    /**
     * The name of the source.
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * The name of the source.
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * The name of the source.
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * The name of the source.
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * The name of the source.
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * The name of the source.
     */
    inline SetSourceRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * The name of the source.
     */
    inline SetSourceRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * The name of the source.
     */
    inline SetSourceRequest& WithName(const char* value) { SetName(value); return *this;}


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
    inline SetSourceRequest& WithProtocol(const Protocol& value) { SetProtocol(value); return *this;}

    /**
     * The protocol that is used by the source.
     */
    inline SetSourceRequest& WithProtocol(Protocol&& value) { SetProtocol(std::move(value)); return *this;}


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
    inline SetSourceRequest& WithStreamId(const Aws::String& value) { SetStreamId(value); return *this;}

    /**
     * The stream ID that you want to use for this transport. This parameter applies
     * only to Zixi-based streams.
     */
    inline SetSourceRequest& WithStreamId(Aws::String&& value) { SetStreamId(std::move(value)); return *this;}

    /**
     * The stream ID that you want to use for this transport. This parameter applies
     * only to Zixi-based streams.
     */
    inline SetSourceRequest& WithStreamId(const char* value) { SetStreamId(value); return *this;}


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
    inline SetSourceRequest& WithWhitelistCidr(const Aws::String& value) { SetWhitelistCidr(value); return *this;}

    /**
     * The range of IP addresses that should be allowed to contribute content to your
     * source. These IP addresses should in the form of a Classless Inter-Domain
     * Routing (CIDR) block; for example, 10.0.0.0/16.
     */
    inline SetSourceRequest& WithWhitelistCidr(Aws::String&& value) { SetWhitelistCidr(std::move(value)); return *this;}

    /**
     * The range of IP addresses that should be allowed to contribute content to your
     * source. These IP addresses should in the form of a Classless Inter-Domain
     * Routing (CIDR) block; for example, 10.0.0.0/16.
     */
    inline SetSourceRequest& WithWhitelistCidr(const char* value) { SetWhitelistCidr(value); return *this;}

  private:

    Encryption m_decryption;
    bool m_decryptionHasBeenSet;

    Aws::String m_description;
    bool m_descriptionHasBeenSet;

    Aws::String m_entitlementArn;
    bool m_entitlementArnHasBeenSet;

    int m_ingestPort;
    bool m_ingestPortHasBeenSet;

    int m_maxBitrate;
    bool m_maxBitrateHasBeenSet;

    int m_maxLatency;
    bool m_maxLatencyHasBeenSet;

    Aws::String m_name;
    bool m_nameHasBeenSet;

    Protocol m_protocol;
    bool m_protocolHasBeenSet;

    Aws::String m_streamId;
    bool m_streamIdHasBeenSet;

    Aws::String m_whitelistCidr;
    bool m_whitelistCidrHasBeenSet;
  };

} // namespace Model
} // namespace MediaConnect
} // namespace Aws
