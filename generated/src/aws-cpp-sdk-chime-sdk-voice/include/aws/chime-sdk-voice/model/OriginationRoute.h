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

  class OriginationRoute
  {
  public:
    AWS_CHIMESDKVOICE_API OriginationRoute();
    AWS_CHIMESDKVOICE_API OriginationRoute(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKVOICE_API OriginationRoute& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKVOICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const Aws::String& GetHost() const{ return m_host; }

    
    inline bool HostHasBeenSet() const { return m_hostHasBeenSet; }

    
    inline void SetHost(const Aws::String& value) { m_hostHasBeenSet = true; m_host = value; }

    
    inline void SetHost(Aws::String&& value) { m_hostHasBeenSet = true; m_host = std::move(value); }

    
    inline void SetHost(const char* value) { m_hostHasBeenSet = true; m_host.assign(value); }

    
    inline OriginationRoute& WithHost(const Aws::String& value) { SetHost(value); return *this;}

    
    inline OriginationRoute& WithHost(Aws::String&& value) { SetHost(std::move(value)); return *this;}

    
    inline OriginationRoute& WithHost(const char* value) { SetHost(value); return *this;}


    
    inline int GetPort() const{ return m_port; }

    
    inline bool PortHasBeenSet() const { return m_portHasBeenSet; }

    
    inline void SetPort(int value) { m_portHasBeenSet = true; m_port = value; }

    
    inline OriginationRoute& WithPort(int value) { SetPort(value); return *this;}


    
    inline const OriginationRouteProtocol& GetProtocol() const{ return m_protocol; }

    
    inline bool ProtocolHasBeenSet() const { return m_protocolHasBeenSet; }

    
    inline void SetProtocol(const OriginationRouteProtocol& value) { m_protocolHasBeenSet = true; m_protocol = value; }

    
    inline void SetProtocol(OriginationRouteProtocol&& value) { m_protocolHasBeenSet = true; m_protocol = std::move(value); }

    
    inline OriginationRoute& WithProtocol(const OriginationRouteProtocol& value) { SetProtocol(value); return *this;}

    
    inline OriginationRoute& WithProtocol(OriginationRouteProtocol&& value) { SetProtocol(std::move(value)); return *this;}


    
    inline int GetPriority() const{ return m_priority; }

    
    inline bool PriorityHasBeenSet() const { return m_priorityHasBeenSet; }

    
    inline void SetPriority(int value) { m_priorityHasBeenSet = true; m_priority = value; }

    
    inline OriginationRoute& WithPriority(int value) { SetPriority(value); return *this;}


    
    inline int GetWeight() const{ return m_weight; }

    
    inline bool WeightHasBeenSet() const { return m_weightHasBeenSet; }

    
    inline void SetWeight(int value) { m_weightHasBeenSet = true; m_weight = value; }

    
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
