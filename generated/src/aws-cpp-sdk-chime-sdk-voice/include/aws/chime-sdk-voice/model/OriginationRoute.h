/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-voice/ChimeSDKVoice_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/chime-sdk-voice/model/OriginationRouteProtocol.h>
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
namespace ChimeSDKVoice
{
namespace Model
{

  /**
   * <p>Origination routes define call distribution properties for your SIP hosts to
   * receive inbound calls using an Amazon Chime SDK Voice Connector. Limit: Ten
   * origination routes for each Voice Connector.</p>  <p>The parameters listed
   * below are not required, but you must use at least one.</p> <p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-voice-2022-08-03/OriginationRoute">AWS
   * API Reference</a></p>
   */
  class OriginationRoute
  {
  public:
    AWS_CHIMESDKVOICE_API OriginationRoute();
    AWS_CHIMESDKVOICE_API OriginationRoute(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKVOICE_API OriginationRoute& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKVOICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The FQDN or IP address to contact for origination traffic.</p>
     */
    inline const Aws::String& GetHost() const{ return m_host; }

    /**
     * <p>The FQDN or IP address to contact for origination traffic.</p>
     */
    inline bool HostHasBeenSet() const { return m_hostHasBeenSet; }

    /**
     * <p>The FQDN or IP address to contact for origination traffic.</p>
     */
    inline void SetHost(const Aws::String& value) { m_hostHasBeenSet = true; m_host = value; }

    /**
     * <p>The FQDN or IP address to contact for origination traffic.</p>
     */
    inline void SetHost(Aws::String&& value) { m_hostHasBeenSet = true; m_host = std::move(value); }

    /**
     * <p>The FQDN or IP address to contact for origination traffic.</p>
     */
    inline void SetHost(const char* value) { m_hostHasBeenSet = true; m_host.assign(value); }

    /**
     * <p>The FQDN or IP address to contact for origination traffic.</p>
     */
    inline OriginationRoute& WithHost(const Aws::String& value) { SetHost(value); return *this;}

    /**
     * <p>The FQDN or IP address to contact for origination traffic.</p>
     */
    inline OriginationRoute& WithHost(Aws::String&& value) { SetHost(std::move(value)); return *this;}

    /**
     * <p>The FQDN or IP address to contact for origination traffic.</p>
     */
    inline OriginationRoute& WithHost(const char* value) { SetHost(value); return *this;}


    /**
     * <p>The designated origination route port. Defaults to 5060.</p>
     */
    inline int GetPort() const{ return m_port; }

    /**
     * <p>The designated origination route port. Defaults to 5060.</p>
     */
    inline bool PortHasBeenSet() const { return m_portHasBeenSet; }

    /**
     * <p>The designated origination route port. Defaults to 5060.</p>
     */
    inline void SetPort(int value) { m_portHasBeenSet = true; m_port = value; }

    /**
     * <p>The designated origination route port. Defaults to 5060.</p>
     */
    inline OriginationRoute& WithPort(int value) { SetPort(value); return *this;}


    /**
     * <p>The protocol to use for the origination route. Encryption-enabled Amazon
     * Chime SDK Voice Connectors use TCP protocol by default.</p>
     */
    inline const OriginationRouteProtocol& GetProtocol() const{ return m_protocol; }

    /**
     * <p>The protocol to use for the origination route. Encryption-enabled Amazon
     * Chime SDK Voice Connectors use TCP protocol by default.</p>
     */
    inline bool ProtocolHasBeenSet() const { return m_protocolHasBeenSet; }

    /**
     * <p>The protocol to use for the origination route. Encryption-enabled Amazon
     * Chime SDK Voice Connectors use TCP protocol by default.</p>
     */
    inline void SetProtocol(const OriginationRouteProtocol& value) { m_protocolHasBeenSet = true; m_protocol = value; }

    /**
     * <p>The protocol to use for the origination route. Encryption-enabled Amazon
     * Chime SDK Voice Connectors use TCP protocol by default.</p>
     */
    inline void SetProtocol(OriginationRouteProtocol&& value) { m_protocolHasBeenSet = true; m_protocol = std::move(value); }

    /**
     * <p>The protocol to use for the origination route. Encryption-enabled Amazon
     * Chime SDK Voice Connectors use TCP protocol by default.</p>
     */
    inline OriginationRoute& WithProtocol(const OriginationRouteProtocol& value) { SetProtocol(value); return *this;}

    /**
     * <p>The protocol to use for the origination route. Encryption-enabled Amazon
     * Chime SDK Voice Connectors use TCP protocol by default.</p>
     */
    inline OriginationRoute& WithProtocol(OriginationRouteProtocol&& value) { SetProtocol(std::move(value)); return *this;}


    /**
     * <p>The priority associated with the host, with 1 being the highest priority.
     * Higher priority hosts are attempted first.</p>
     */
    inline int GetPriority() const{ return m_priority; }

    /**
     * <p>The priority associated with the host, with 1 being the highest priority.
     * Higher priority hosts are attempted first.</p>
     */
    inline bool PriorityHasBeenSet() const { return m_priorityHasBeenSet; }

    /**
     * <p>The priority associated with the host, with 1 being the highest priority.
     * Higher priority hosts are attempted first.</p>
     */
    inline void SetPriority(int value) { m_priorityHasBeenSet = true; m_priority = value; }

    /**
     * <p>The priority associated with the host, with 1 being the highest priority.
     * Higher priority hosts are attempted first.</p>
     */
    inline OriginationRoute& WithPriority(int value) { SetPriority(value); return *this;}


    /**
     * <p>The weight assigned to an origination route. When hosts have equal priority,
     * calls are distributed between them based on their relative weights.</p>
     */
    inline int GetWeight() const{ return m_weight; }

    /**
     * <p>The weight assigned to an origination route. When hosts have equal priority,
     * calls are distributed between them based on their relative weights.</p>
     */
    inline bool WeightHasBeenSet() const { return m_weightHasBeenSet; }

    /**
     * <p>The weight assigned to an origination route. When hosts have equal priority,
     * calls are distributed between them based on their relative weights.</p>
     */
    inline void SetWeight(int value) { m_weightHasBeenSet = true; m_weight = value; }

    /**
     * <p>The weight assigned to an origination route. When hosts have equal priority,
     * calls are distributed between them based on their relative weights.</p>
     */
    inline OriginationRoute& WithWeight(int value) { SetWeight(value); return *this;}

  private:

    Aws::String m_host;
    bool m_hostHasBeenSet = false;

    int m_port;
    bool m_portHasBeenSet = false;

    OriginationRouteProtocol m_protocol;
    bool m_protocolHasBeenSet = false;

    int m_priority;
    bool m_priorityHasBeenSet = false;

    int m_weight;
    bool m_weightHasBeenSet = false;
  };

} // namespace Model
} // namespace ChimeSDKVoice
} // namespace Aws
