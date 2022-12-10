/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconnect/MediaConnect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mediaconnect/model/Interface.h>
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
   * The transport parameters that are associated with an outbound media
   * stream.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/DestinationConfiguration">AWS
   * API Reference</a></p>
   */
  class DestinationConfiguration
  {
  public:
    AWS_MEDIACONNECT_API DestinationConfiguration();
    AWS_MEDIACONNECT_API DestinationConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONNECT_API DestinationConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * The IP address where contents of the media stream will be sent.
     */
    inline const Aws::String& GetDestinationIp() const{ return m_destinationIp; }

    /**
     * The IP address where contents of the media stream will be sent.
     */
    inline bool DestinationIpHasBeenSet() const { return m_destinationIpHasBeenSet; }

    /**
     * The IP address where contents of the media stream will be sent.
     */
    inline void SetDestinationIp(const Aws::String& value) { m_destinationIpHasBeenSet = true; m_destinationIp = value; }

    /**
     * The IP address where contents of the media stream will be sent.
     */
    inline void SetDestinationIp(Aws::String&& value) { m_destinationIpHasBeenSet = true; m_destinationIp = std::move(value); }

    /**
     * The IP address where contents of the media stream will be sent.
     */
    inline void SetDestinationIp(const char* value) { m_destinationIpHasBeenSet = true; m_destinationIp.assign(value); }

    /**
     * The IP address where contents of the media stream will be sent.
     */
    inline DestinationConfiguration& WithDestinationIp(const Aws::String& value) { SetDestinationIp(value); return *this;}

    /**
     * The IP address where contents of the media stream will be sent.
     */
    inline DestinationConfiguration& WithDestinationIp(Aws::String&& value) { SetDestinationIp(std::move(value)); return *this;}

    /**
     * The IP address where contents of the media stream will be sent.
     */
    inline DestinationConfiguration& WithDestinationIp(const char* value) { SetDestinationIp(value); return *this;}


    /**
     * The port to use when the content of the media stream is distributed to the
     * output.
     */
    inline int GetDestinationPort() const{ return m_destinationPort; }

    /**
     * The port to use when the content of the media stream is distributed to the
     * output.
     */
    inline bool DestinationPortHasBeenSet() const { return m_destinationPortHasBeenSet; }

    /**
     * The port to use when the content of the media stream is distributed to the
     * output.
     */
    inline void SetDestinationPort(int value) { m_destinationPortHasBeenSet = true; m_destinationPort = value; }

    /**
     * The port to use when the content of the media stream is distributed to the
     * output.
     */
    inline DestinationConfiguration& WithDestinationPort(int value) { SetDestinationPort(value); return *this;}


    /**
     * The VPC interface that is used for the media stream associated with the output.
     */
    inline const Interface& GetInterface() const{ return m_interface; }

    /**
     * The VPC interface that is used for the media stream associated with the output.
     */
    inline bool InterfaceHasBeenSet() const { return m_interfaceHasBeenSet; }

    /**
     * The VPC interface that is used for the media stream associated with the output.
     */
    inline void SetInterface(const Interface& value) { m_interfaceHasBeenSet = true; m_interface = value; }

    /**
     * The VPC interface that is used for the media stream associated with the output.
     */
    inline void SetInterface(Interface&& value) { m_interfaceHasBeenSet = true; m_interface = std::move(value); }

    /**
     * The VPC interface that is used for the media stream associated with the output.
     */
    inline DestinationConfiguration& WithInterface(const Interface& value) { SetInterface(value); return *this;}

    /**
     * The VPC interface that is used for the media stream associated with the output.
     */
    inline DestinationConfiguration& WithInterface(Interface&& value) { SetInterface(std::move(value)); return *this;}


    /**
     * The IP address that the receiver requires in order to establish a connection
     * with the flow. This value is represented by the elastic network interface IP
     * address of the VPC. This field applies only to outputs that use the CDI or ST
     * 2110 JPEG XS protocol.
     */
    inline const Aws::String& GetOutboundIp() const{ return m_outboundIp; }

    /**
     * The IP address that the receiver requires in order to establish a connection
     * with the flow. This value is represented by the elastic network interface IP
     * address of the VPC. This field applies only to outputs that use the CDI or ST
     * 2110 JPEG XS protocol.
     */
    inline bool OutboundIpHasBeenSet() const { return m_outboundIpHasBeenSet; }

    /**
     * The IP address that the receiver requires in order to establish a connection
     * with the flow. This value is represented by the elastic network interface IP
     * address of the VPC. This field applies only to outputs that use the CDI or ST
     * 2110 JPEG XS protocol.
     */
    inline void SetOutboundIp(const Aws::String& value) { m_outboundIpHasBeenSet = true; m_outboundIp = value; }

    /**
     * The IP address that the receiver requires in order to establish a connection
     * with the flow. This value is represented by the elastic network interface IP
     * address of the VPC. This field applies only to outputs that use the CDI or ST
     * 2110 JPEG XS protocol.
     */
    inline void SetOutboundIp(Aws::String&& value) { m_outboundIpHasBeenSet = true; m_outboundIp = std::move(value); }

    /**
     * The IP address that the receiver requires in order to establish a connection
     * with the flow. This value is represented by the elastic network interface IP
     * address of the VPC. This field applies only to outputs that use the CDI or ST
     * 2110 JPEG XS protocol.
     */
    inline void SetOutboundIp(const char* value) { m_outboundIpHasBeenSet = true; m_outboundIp.assign(value); }

    /**
     * The IP address that the receiver requires in order to establish a connection
     * with the flow. This value is represented by the elastic network interface IP
     * address of the VPC. This field applies only to outputs that use the CDI or ST
     * 2110 JPEG XS protocol.
     */
    inline DestinationConfiguration& WithOutboundIp(const Aws::String& value) { SetOutboundIp(value); return *this;}

    /**
     * The IP address that the receiver requires in order to establish a connection
     * with the flow. This value is represented by the elastic network interface IP
     * address of the VPC. This field applies only to outputs that use the CDI or ST
     * 2110 JPEG XS protocol.
     */
    inline DestinationConfiguration& WithOutboundIp(Aws::String&& value) { SetOutboundIp(std::move(value)); return *this;}

    /**
     * The IP address that the receiver requires in order to establish a connection
     * with the flow. This value is represented by the elastic network interface IP
     * address of the VPC. This field applies only to outputs that use the CDI or ST
     * 2110 JPEG XS protocol.
     */
    inline DestinationConfiguration& WithOutboundIp(const char* value) { SetOutboundIp(value); return *this;}

  private:

    Aws::String m_destinationIp;
    bool m_destinationIpHasBeenSet = false;

    int m_destinationPort;
    bool m_destinationPortHasBeenSet = false;

    Interface m_interface;
    bool m_interfaceHasBeenSet = false;

    Aws::String m_outboundIp;
    bool m_outboundIpHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaConnect
} // namespace Aws
