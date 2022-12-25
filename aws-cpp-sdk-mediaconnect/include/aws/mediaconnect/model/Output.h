/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconnect/MediaConnect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mediaconnect/model/Encryption.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/mediaconnect/model/Transport.h>
#include <aws/mediaconnect/model/VpcInterfaceAttachment.h>
#include <aws/mediaconnect/model/MediaStreamOutputConfiguration.h>
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
   * The settings for an output.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/Output">AWS
   * API Reference</a></p>
   */
  class Output
  {
  public:
    AWS_MEDIACONNECT_API Output();
    AWS_MEDIACONNECT_API Output(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONNECT_API Output& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * Percentage from 0-100 of the data transfer cost to be billed to the subscriber.
     */
    inline int GetDataTransferSubscriberFeePercent() const{ return m_dataTransferSubscriberFeePercent; }

    /**
     * Percentage from 0-100 of the data transfer cost to be billed to the subscriber.
     */
    inline bool DataTransferSubscriberFeePercentHasBeenSet() const { return m_dataTransferSubscriberFeePercentHasBeenSet; }

    /**
     * Percentage from 0-100 of the data transfer cost to be billed to the subscriber.
     */
    inline void SetDataTransferSubscriberFeePercent(int value) { m_dataTransferSubscriberFeePercentHasBeenSet = true; m_dataTransferSubscriberFeePercent = value; }

    /**
     * Percentage from 0-100 of the data transfer cost to be billed to the subscriber.
     */
    inline Output& WithDataTransferSubscriberFeePercent(int value) { SetDataTransferSubscriberFeePercent(value); return *this;}


    /**
     * A description of the output.
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * A description of the output.
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * A description of the output.
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * A description of the output.
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * A description of the output.
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * A description of the output.
     */
    inline Output& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * A description of the output.
     */
    inline Output& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * A description of the output.
     */
    inline Output& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * The address where you want to send the output.
     */
    inline const Aws::String& GetDestination() const{ return m_destination; }

    /**
     * The address where you want to send the output.
     */
    inline bool DestinationHasBeenSet() const { return m_destinationHasBeenSet; }

    /**
     * The address where you want to send the output.
     */
    inline void SetDestination(const Aws::String& value) { m_destinationHasBeenSet = true; m_destination = value; }

    /**
     * The address where you want to send the output.
     */
    inline void SetDestination(Aws::String&& value) { m_destinationHasBeenSet = true; m_destination = std::move(value); }

    /**
     * The address where you want to send the output.
     */
    inline void SetDestination(const char* value) { m_destinationHasBeenSet = true; m_destination.assign(value); }

    /**
     * The address where you want to send the output.
     */
    inline Output& WithDestination(const Aws::String& value) { SetDestination(value); return *this;}

    /**
     * The address where you want to send the output.
     */
    inline Output& WithDestination(Aws::String&& value) { SetDestination(std::move(value)); return *this;}

    /**
     * The address where you want to send the output.
     */
    inline Output& WithDestination(const char* value) { SetDestination(value); return *this;}


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
    inline Output& WithEncryption(const Encryption& value) { SetEncryption(value); return *this;}

    /**
     * The type of key used for the encryption. If no keyType is provided, the service
     * will use the default setting (static-key).
     */
    inline Output& WithEncryption(Encryption&& value) { SetEncryption(std::move(value)); return *this;}


    /**
     * The ARN of the entitlement on the originator''s flow. This value is relevant
     * only on entitled flows.
     */
    inline const Aws::String& GetEntitlementArn() const{ return m_entitlementArn; }

    /**
     * The ARN of the entitlement on the originator''s flow. This value is relevant
     * only on entitled flows.
     */
    inline bool EntitlementArnHasBeenSet() const { return m_entitlementArnHasBeenSet; }

    /**
     * The ARN of the entitlement on the originator''s flow. This value is relevant
     * only on entitled flows.
     */
    inline void SetEntitlementArn(const Aws::String& value) { m_entitlementArnHasBeenSet = true; m_entitlementArn = value; }

    /**
     * The ARN of the entitlement on the originator''s flow. This value is relevant
     * only on entitled flows.
     */
    inline void SetEntitlementArn(Aws::String&& value) { m_entitlementArnHasBeenSet = true; m_entitlementArn = std::move(value); }

    /**
     * The ARN of the entitlement on the originator''s flow. This value is relevant
     * only on entitled flows.
     */
    inline void SetEntitlementArn(const char* value) { m_entitlementArnHasBeenSet = true; m_entitlementArn.assign(value); }

    /**
     * The ARN of the entitlement on the originator''s flow. This value is relevant
     * only on entitled flows.
     */
    inline Output& WithEntitlementArn(const Aws::String& value) { SetEntitlementArn(value); return *this;}

    /**
     * The ARN of the entitlement on the originator''s flow. This value is relevant
     * only on entitled flows.
     */
    inline Output& WithEntitlementArn(Aws::String&& value) { SetEntitlementArn(std::move(value)); return *this;}

    /**
     * The ARN of the entitlement on the originator''s flow. This value is relevant
     * only on entitled flows.
     */
    inline Output& WithEntitlementArn(const char* value) { SetEntitlementArn(value); return *this;}


    /**
     * The IP address that the receiver requires in order to establish a connection
     * with the flow. For public networking, the ListenerAddress is represented by the
     * elastic IP address of the flow. For private networking, the ListenerAddress is
     * represented by the elastic network interface IP address of the VPC. This field
     * applies only to outputs that use the Zixi pull or SRT listener protocol.
     */
    inline const Aws::String& GetListenerAddress() const{ return m_listenerAddress; }

    /**
     * The IP address that the receiver requires in order to establish a connection
     * with the flow. For public networking, the ListenerAddress is represented by the
     * elastic IP address of the flow. For private networking, the ListenerAddress is
     * represented by the elastic network interface IP address of the VPC. This field
     * applies only to outputs that use the Zixi pull or SRT listener protocol.
     */
    inline bool ListenerAddressHasBeenSet() const { return m_listenerAddressHasBeenSet; }

    /**
     * The IP address that the receiver requires in order to establish a connection
     * with the flow. For public networking, the ListenerAddress is represented by the
     * elastic IP address of the flow. For private networking, the ListenerAddress is
     * represented by the elastic network interface IP address of the VPC. This field
     * applies only to outputs that use the Zixi pull or SRT listener protocol.
     */
    inline void SetListenerAddress(const Aws::String& value) { m_listenerAddressHasBeenSet = true; m_listenerAddress = value; }

    /**
     * The IP address that the receiver requires in order to establish a connection
     * with the flow. For public networking, the ListenerAddress is represented by the
     * elastic IP address of the flow. For private networking, the ListenerAddress is
     * represented by the elastic network interface IP address of the VPC. This field
     * applies only to outputs that use the Zixi pull or SRT listener protocol.
     */
    inline void SetListenerAddress(Aws::String&& value) { m_listenerAddressHasBeenSet = true; m_listenerAddress = std::move(value); }

    /**
     * The IP address that the receiver requires in order to establish a connection
     * with the flow. For public networking, the ListenerAddress is represented by the
     * elastic IP address of the flow. For private networking, the ListenerAddress is
     * represented by the elastic network interface IP address of the VPC. This field
     * applies only to outputs that use the Zixi pull or SRT listener protocol.
     */
    inline void SetListenerAddress(const char* value) { m_listenerAddressHasBeenSet = true; m_listenerAddress.assign(value); }

    /**
     * The IP address that the receiver requires in order to establish a connection
     * with the flow. For public networking, the ListenerAddress is represented by the
     * elastic IP address of the flow. For private networking, the ListenerAddress is
     * represented by the elastic network interface IP address of the VPC. This field
     * applies only to outputs that use the Zixi pull or SRT listener protocol.
     */
    inline Output& WithListenerAddress(const Aws::String& value) { SetListenerAddress(value); return *this;}

    /**
     * The IP address that the receiver requires in order to establish a connection
     * with the flow. For public networking, the ListenerAddress is represented by the
     * elastic IP address of the flow. For private networking, the ListenerAddress is
     * represented by the elastic network interface IP address of the VPC. This field
     * applies only to outputs that use the Zixi pull or SRT listener protocol.
     */
    inline Output& WithListenerAddress(Aws::String&& value) { SetListenerAddress(std::move(value)); return *this;}

    /**
     * The IP address that the receiver requires in order to establish a connection
     * with the flow. For public networking, the ListenerAddress is represented by the
     * elastic IP address of the flow. For private networking, the ListenerAddress is
     * represented by the elastic network interface IP address of the VPC. This field
     * applies only to outputs that use the Zixi pull or SRT listener protocol.
     */
    inline Output& WithListenerAddress(const char* value) { SetListenerAddress(value); return *this;}


    /**
     * The input ARN of the AWS Elemental MediaLive channel. This parameter is relevant
     * only for outputs that were added by creating a MediaLive input.
     */
    inline const Aws::String& GetMediaLiveInputArn() const{ return m_mediaLiveInputArn; }

    /**
     * The input ARN of the AWS Elemental MediaLive channel. This parameter is relevant
     * only for outputs that were added by creating a MediaLive input.
     */
    inline bool MediaLiveInputArnHasBeenSet() const { return m_mediaLiveInputArnHasBeenSet; }

    /**
     * The input ARN of the AWS Elemental MediaLive channel. This parameter is relevant
     * only for outputs that were added by creating a MediaLive input.
     */
    inline void SetMediaLiveInputArn(const Aws::String& value) { m_mediaLiveInputArnHasBeenSet = true; m_mediaLiveInputArn = value; }

    /**
     * The input ARN of the AWS Elemental MediaLive channel. This parameter is relevant
     * only for outputs that were added by creating a MediaLive input.
     */
    inline void SetMediaLiveInputArn(Aws::String&& value) { m_mediaLiveInputArnHasBeenSet = true; m_mediaLiveInputArn = std::move(value); }

    /**
     * The input ARN of the AWS Elemental MediaLive channel. This parameter is relevant
     * only for outputs that were added by creating a MediaLive input.
     */
    inline void SetMediaLiveInputArn(const char* value) { m_mediaLiveInputArnHasBeenSet = true; m_mediaLiveInputArn.assign(value); }

    /**
     * The input ARN of the AWS Elemental MediaLive channel. This parameter is relevant
     * only for outputs that were added by creating a MediaLive input.
     */
    inline Output& WithMediaLiveInputArn(const Aws::String& value) { SetMediaLiveInputArn(value); return *this;}

    /**
     * The input ARN of the AWS Elemental MediaLive channel. This parameter is relevant
     * only for outputs that were added by creating a MediaLive input.
     */
    inline Output& WithMediaLiveInputArn(Aws::String&& value) { SetMediaLiveInputArn(std::move(value)); return *this;}

    /**
     * The input ARN of the AWS Elemental MediaLive channel. This parameter is relevant
     * only for outputs that were added by creating a MediaLive input.
     */
    inline Output& WithMediaLiveInputArn(const char* value) { SetMediaLiveInputArn(value); return *this;}


    /**
     * The configuration for each media stream that is associated with the output.
     */
    inline const Aws::Vector<MediaStreamOutputConfiguration>& GetMediaStreamOutputConfigurations() const{ return m_mediaStreamOutputConfigurations; }

    /**
     * The configuration for each media stream that is associated with the output.
     */
    inline bool MediaStreamOutputConfigurationsHasBeenSet() const { return m_mediaStreamOutputConfigurationsHasBeenSet; }

    /**
     * The configuration for each media stream that is associated with the output.
     */
    inline void SetMediaStreamOutputConfigurations(const Aws::Vector<MediaStreamOutputConfiguration>& value) { m_mediaStreamOutputConfigurationsHasBeenSet = true; m_mediaStreamOutputConfigurations = value; }

    /**
     * The configuration for each media stream that is associated with the output.
     */
    inline void SetMediaStreamOutputConfigurations(Aws::Vector<MediaStreamOutputConfiguration>&& value) { m_mediaStreamOutputConfigurationsHasBeenSet = true; m_mediaStreamOutputConfigurations = std::move(value); }

    /**
     * The configuration for each media stream that is associated with the output.
     */
    inline Output& WithMediaStreamOutputConfigurations(const Aws::Vector<MediaStreamOutputConfiguration>& value) { SetMediaStreamOutputConfigurations(value); return *this;}

    /**
     * The configuration for each media stream that is associated with the output.
     */
    inline Output& WithMediaStreamOutputConfigurations(Aws::Vector<MediaStreamOutputConfiguration>&& value) { SetMediaStreamOutputConfigurations(std::move(value)); return *this;}

    /**
     * The configuration for each media stream that is associated with the output.
     */
    inline Output& AddMediaStreamOutputConfigurations(const MediaStreamOutputConfiguration& value) { m_mediaStreamOutputConfigurationsHasBeenSet = true; m_mediaStreamOutputConfigurations.push_back(value); return *this; }

    /**
     * The configuration for each media stream that is associated with the output.
     */
    inline Output& AddMediaStreamOutputConfigurations(MediaStreamOutputConfiguration&& value) { m_mediaStreamOutputConfigurationsHasBeenSet = true; m_mediaStreamOutputConfigurations.push_back(std::move(value)); return *this; }


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
    inline Output& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * The name of the output. This value must be unique within the current flow.
     */
    inline Output& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * The name of the output. This value must be unique within the current flow.
     */
    inline Output& WithName(const char* value) { SetName(value); return *this;}


    /**
     * The ARN of the output.
     */
    inline const Aws::String& GetOutputArn() const{ return m_outputArn; }

    /**
     * The ARN of the output.
     */
    inline bool OutputArnHasBeenSet() const { return m_outputArnHasBeenSet; }

    /**
     * The ARN of the output.
     */
    inline void SetOutputArn(const Aws::String& value) { m_outputArnHasBeenSet = true; m_outputArn = value; }

    /**
     * The ARN of the output.
     */
    inline void SetOutputArn(Aws::String&& value) { m_outputArnHasBeenSet = true; m_outputArn = std::move(value); }

    /**
     * The ARN of the output.
     */
    inline void SetOutputArn(const char* value) { m_outputArnHasBeenSet = true; m_outputArn.assign(value); }

    /**
     * The ARN of the output.
     */
    inline Output& WithOutputArn(const Aws::String& value) { SetOutputArn(value); return *this;}

    /**
     * The ARN of the output.
     */
    inline Output& WithOutputArn(Aws::String&& value) { SetOutputArn(std::move(value)); return *this;}

    /**
     * The ARN of the output.
     */
    inline Output& WithOutputArn(const char* value) { SetOutputArn(value); return *this;}


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
    inline Output& WithPort(int value) { SetPort(value); return *this;}


    /**
     * Attributes related to the transport stream that are used in the output.
     */
    inline const Transport& GetTransport() const{ return m_transport; }

    /**
     * Attributes related to the transport stream that are used in the output.
     */
    inline bool TransportHasBeenSet() const { return m_transportHasBeenSet; }

    /**
     * Attributes related to the transport stream that are used in the output.
     */
    inline void SetTransport(const Transport& value) { m_transportHasBeenSet = true; m_transport = value; }

    /**
     * Attributes related to the transport stream that are used in the output.
     */
    inline void SetTransport(Transport&& value) { m_transportHasBeenSet = true; m_transport = std::move(value); }

    /**
     * Attributes related to the transport stream that are used in the output.
     */
    inline Output& WithTransport(const Transport& value) { SetTransport(value); return *this;}

    /**
     * Attributes related to the transport stream that are used in the output.
     */
    inline Output& WithTransport(Transport&& value) { SetTransport(std::move(value)); return *this;}


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
    inline Output& WithVpcInterfaceAttachment(const VpcInterfaceAttachment& value) { SetVpcInterfaceAttachment(value); return *this;}

    /**
     * The name of the VPC interface attachment to use for this output.
     */
    inline Output& WithVpcInterfaceAttachment(VpcInterfaceAttachment&& value) { SetVpcInterfaceAttachment(std::move(value)); return *this;}

  private:

    int m_dataTransferSubscriberFeePercent;
    bool m_dataTransferSubscriberFeePercentHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_destination;
    bool m_destinationHasBeenSet = false;

    Encryption m_encryption;
    bool m_encryptionHasBeenSet = false;

    Aws::String m_entitlementArn;
    bool m_entitlementArnHasBeenSet = false;

    Aws::String m_listenerAddress;
    bool m_listenerAddressHasBeenSet = false;

    Aws::String m_mediaLiveInputArn;
    bool m_mediaLiveInputArnHasBeenSet = false;

    Aws::Vector<MediaStreamOutputConfiguration> m_mediaStreamOutputConfigurations;
    bool m_mediaStreamOutputConfigurationsHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_outputArn;
    bool m_outputArnHasBeenSet = false;

    int m_port;
    bool m_portHasBeenSet = false;

    Transport m_transport;
    bool m_transportHasBeenSet = false;

    VpcInterfaceAttachment m_vpcInterfaceAttachment;
    bool m_vpcInterfaceAttachmentHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaConnect
} // namespace Aws
