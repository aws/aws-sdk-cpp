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
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/securityhub/model/NetworkDirection.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace SecurityHub
{
namespace Model
{

  /**
   * <p>The details of network-related information about a finding.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/Network">AWS
   * API Reference</a></p>
   */
  class AWS_SECURITYHUB_API Network
  {
  public:
    Network();
    Network(Aws::Utils::Json::JsonView jsonValue);
    Network& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The direction of network traffic associated with a finding.</p>
     */
    inline const NetworkDirection& GetDirection() const{ return m_direction; }

    /**
     * <p>The direction of network traffic associated with a finding.</p>
     */
    inline bool DirectionHasBeenSet() const { return m_directionHasBeenSet; }

    /**
     * <p>The direction of network traffic associated with a finding.</p>
     */
    inline void SetDirection(const NetworkDirection& value) { m_directionHasBeenSet = true; m_direction = value; }

    /**
     * <p>The direction of network traffic associated with a finding.</p>
     */
    inline void SetDirection(NetworkDirection&& value) { m_directionHasBeenSet = true; m_direction = std::move(value); }

    /**
     * <p>The direction of network traffic associated with a finding.</p>
     */
    inline Network& WithDirection(const NetworkDirection& value) { SetDirection(value); return *this;}

    /**
     * <p>The direction of network traffic associated with a finding.</p>
     */
    inline Network& WithDirection(NetworkDirection&& value) { SetDirection(std::move(value)); return *this;}


    /**
     * <p>The protocol of network-related information about a finding.</p>
     */
    inline const Aws::String& GetProtocol() const{ return m_protocol; }

    /**
     * <p>The protocol of network-related information about a finding.</p>
     */
    inline bool ProtocolHasBeenSet() const { return m_protocolHasBeenSet; }

    /**
     * <p>The protocol of network-related information about a finding.</p>
     */
    inline void SetProtocol(const Aws::String& value) { m_protocolHasBeenSet = true; m_protocol = value; }

    /**
     * <p>The protocol of network-related information about a finding.</p>
     */
    inline void SetProtocol(Aws::String&& value) { m_protocolHasBeenSet = true; m_protocol = std::move(value); }

    /**
     * <p>The protocol of network-related information about a finding.</p>
     */
    inline void SetProtocol(const char* value) { m_protocolHasBeenSet = true; m_protocol.assign(value); }

    /**
     * <p>The protocol of network-related information about a finding.</p>
     */
    inline Network& WithProtocol(const Aws::String& value) { SetProtocol(value); return *this;}

    /**
     * <p>The protocol of network-related information about a finding.</p>
     */
    inline Network& WithProtocol(Aws::String&& value) { SetProtocol(std::move(value)); return *this;}

    /**
     * <p>The protocol of network-related information about a finding.</p>
     */
    inline Network& WithProtocol(const char* value) { SetProtocol(value); return *this;}


    /**
     * <p>The source IPv4 address of network-related information about a finding.</p>
     */
    inline const Aws::String& GetSourceIpV4() const{ return m_sourceIpV4; }

    /**
     * <p>The source IPv4 address of network-related information about a finding.</p>
     */
    inline bool SourceIpV4HasBeenSet() const { return m_sourceIpV4HasBeenSet; }

    /**
     * <p>The source IPv4 address of network-related information about a finding.</p>
     */
    inline void SetSourceIpV4(const Aws::String& value) { m_sourceIpV4HasBeenSet = true; m_sourceIpV4 = value; }

    /**
     * <p>The source IPv4 address of network-related information about a finding.</p>
     */
    inline void SetSourceIpV4(Aws::String&& value) { m_sourceIpV4HasBeenSet = true; m_sourceIpV4 = std::move(value); }

    /**
     * <p>The source IPv4 address of network-related information about a finding.</p>
     */
    inline void SetSourceIpV4(const char* value) { m_sourceIpV4HasBeenSet = true; m_sourceIpV4.assign(value); }

    /**
     * <p>The source IPv4 address of network-related information about a finding.</p>
     */
    inline Network& WithSourceIpV4(const Aws::String& value) { SetSourceIpV4(value); return *this;}

    /**
     * <p>The source IPv4 address of network-related information about a finding.</p>
     */
    inline Network& WithSourceIpV4(Aws::String&& value) { SetSourceIpV4(std::move(value)); return *this;}

    /**
     * <p>The source IPv4 address of network-related information about a finding.</p>
     */
    inline Network& WithSourceIpV4(const char* value) { SetSourceIpV4(value); return *this;}


    /**
     * <p>The source IPv6 address of network-related information about a finding.</p>
     */
    inline const Aws::String& GetSourceIpV6() const{ return m_sourceIpV6; }

    /**
     * <p>The source IPv6 address of network-related information about a finding.</p>
     */
    inline bool SourceIpV6HasBeenSet() const { return m_sourceIpV6HasBeenSet; }

    /**
     * <p>The source IPv6 address of network-related information about a finding.</p>
     */
    inline void SetSourceIpV6(const Aws::String& value) { m_sourceIpV6HasBeenSet = true; m_sourceIpV6 = value; }

    /**
     * <p>The source IPv6 address of network-related information about a finding.</p>
     */
    inline void SetSourceIpV6(Aws::String&& value) { m_sourceIpV6HasBeenSet = true; m_sourceIpV6 = std::move(value); }

    /**
     * <p>The source IPv6 address of network-related information about a finding.</p>
     */
    inline void SetSourceIpV6(const char* value) { m_sourceIpV6HasBeenSet = true; m_sourceIpV6.assign(value); }

    /**
     * <p>The source IPv6 address of network-related information about a finding.</p>
     */
    inline Network& WithSourceIpV6(const Aws::String& value) { SetSourceIpV6(value); return *this;}

    /**
     * <p>The source IPv6 address of network-related information about a finding.</p>
     */
    inline Network& WithSourceIpV6(Aws::String&& value) { SetSourceIpV6(std::move(value)); return *this;}

    /**
     * <p>The source IPv6 address of network-related information about a finding.</p>
     */
    inline Network& WithSourceIpV6(const char* value) { SetSourceIpV6(value); return *this;}


    /**
     * <p>The source port of network-related information about a finding.</p>
     */
    inline int GetSourcePort() const{ return m_sourcePort; }

    /**
     * <p>The source port of network-related information about a finding.</p>
     */
    inline bool SourcePortHasBeenSet() const { return m_sourcePortHasBeenSet; }

    /**
     * <p>The source port of network-related information about a finding.</p>
     */
    inline void SetSourcePort(int value) { m_sourcePortHasBeenSet = true; m_sourcePort = value; }

    /**
     * <p>The source port of network-related information about a finding.</p>
     */
    inline Network& WithSourcePort(int value) { SetSourcePort(value); return *this;}


    /**
     * <p>The source domain of network-related information about a finding.</p>
     */
    inline const Aws::String& GetSourceDomain() const{ return m_sourceDomain; }

    /**
     * <p>The source domain of network-related information about a finding.</p>
     */
    inline bool SourceDomainHasBeenSet() const { return m_sourceDomainHasBeenSet; }

    /**
     * <p>The source domain of network-related information about a finding.</p>
     */
    inline void SetSourceDomain(const Aws::String& value) { m_sourceDomainHasBeenSet = true; m_sourceDomain = value; }

    /**
     * <p>The source domain of network-related information about a finding.</p>
     */
    inline void SetSourceDomain(Aws::String&& value) { m_sourceDomainHasBeenSet = true; m_sourceDomain = std::move(value); }

    /**
     * <p>The source domain of network-related information about a finding.</p>
     */
    inline void SetSourceDomain(const char* value) { m_sourceDomainHasBeenSet = true; m_sourceDomain.assign(value); }

    /**
     * <p>The source domain of network-related information about a finding.</p>
     */
    inline Network& WithSourceDomain(const Aws::String& value) { SetSourceDomain(value); return *this;}

    /**
     * <p>The source domain of network-related information about a finding.</p>
     */
    inline Network& WithSourceDomain(Aws::String&& value) { SetSourceDomain(std::move(value)); return *this;}

    /**
     * <p>The source domain of network-related information about a finding.</p>
     */
    inline Network& WithSourceDomain(const char* value) { SetSourceDomain(value); return *this;}


    /**
     * <p>The source media access control (MAC) address of network-related information
     * about a finding.</p>
     */
    inline const Aws::String& GetSourceMac() const{ return m_sourceMac; }

    /**
     * <p>The source media access control (MAC) address of network-related information
     * about a finding.</p>
     */
    inline bool SourceMacHasBeenSet() const { return m_sourceMacHasBeenSet; }

    /**
     * <p>The source media access control (MAC) address of network-related information
     * about a finding.</p>
     */
    inline void SetSourceMac(const Aws::String& value) { m_sourceMacHasBeenSet = true; m_sourceMac = value; }

    /**
     * <p>The source media access control (MAC) address of network-related information
     * about a finding.</p>
     */
    inline void SetSourceMac(Aws::String&& value) { m_sourceMacHasBeenSet = true; m_sourceMac = std::move(value); }

    /**
     * <p>The source media access control (MAC) address of network-related information
     * about a finding.</p>
     */
    inline void SetSourceMac(const char* value) { m_sourceMacHasBeenSet = true; m_sourceMac.assign(value); }

    /**
     * <p>The source media access control (MAC) address of network-related information
     * about a finding.</p>
     */
    inline Network& WithSourceMac(const Aws::String& value) { SetSourceMac(value); return *this;}

    /**
     * <p>The source media access control (MAC) address of network-related information
     * about a finding.</p>
     */
    inline Network& WithSourceMac(Aws::String&& value) { SetSourceMac(std::move(value)); return *this;}

    /**
     * <p>The source media access control (MAC) address of network-related information
     * about a finding.</p>
     */
    inline Network& WithSourceMac(const char* value) { SetSourceMac(value); return *this;}


    /**
     * <p>The destination IPv4 address of network-related information about a
     * finding.</p>
     */
    inline const Aws::String& GetDestinationIpV4() const{ return m_destinationIpV4; }

    /**
     * <p>The destination IPv4 address of network-related information about a
     * finding.</p>
     */
    inline bool DestinationIpV4HasBeenSet() const { return m_destinationIpV4HasBeenSet; }

    /**
     * <p>The destination IPv4 address of network-related information about a
     * finding.</p>
     */
    inline void SetDestinationIpV4(const Aws::String& value) { m_destinationIpV4HasBeenSet = true; m_destinationIpV4 = value; }

    /**
     * <p>The destination IPv4 address of network-related information about a
     * finding.</p>
     */
    inline void SetDestinationIpV4(Aws::String&& value) { m_destinationIpV4HasBeenSet = true; m_destinationIpV4 = std::move(value); }

    /**
     * <p>The destination IPv4 address of network-related information about a
     * finding.</p>
     */
    inline void SetDestinationIpV4(const char* value) { m_destinationIpV4HasBeenSet = true; m_destinationIpV4.assign(value); }

    /**
     * <p>The destination IPv4 address of network-related information about a
     * finding.</p>
     */
    inline Network& WithDestinationIpV4(const Aws::String& value) { SetDestinationIpV4(value); return *this;}

    /**
     * <p>The destination IPv4 address of network-related information about a
     * finding.</p>
     */
    inline Network& WithDestinationIpV4(Aws::String&& value) { SetDestinationIpV4(std::move(value)); return *this;}

    /**
     * <p>The destination IPv4 address of network-related information about a
     * finding.</p>
     */
    inline Network& WithDestinationIpV4(const char* value) { SetDestinationIpV4(value); return *this;}


    /**
     * <p>The destination IPv6 address of network-related information about a
     * finding.</p>
     */
    inline const Aws::String& GetDestinationIpV6() const{ return m_destinationIpV6; }

    /**
     * <p>The destination IPv6 address of network-related information about a
     * finding.</p>
     */
    inline bool DestinationIpV6HasBeenSet() const { return m_destinationIpV6HasBeenSet; }

    /**
     * <p>The destination IPv6 address of network-related information about a
     * finding.</p>
     */
    inline void SetDestinationIpV6(const Aws::String& value) { m_destinationIpV6HasBeenSet = true; m_destinationIpV6 = value; }

    /**
     * <p>The destination IPv6 address of network-related information about a
     * finding.</p>
     */
    inline void SetDestinationIpV6(Aws::String&& value) { m_destinationIpV6HasBeenSet = true; m_destinationIpV6 = std::move(value); }

    /**
     * <p>The destination IPv6 address of network-related information about a
     * finding.</p>
     */
    inline void SetDestinationIpV6(const char* value) { m_destinationIpV6HasBeenSet = true; m_destinationIpV6.assign(value); }

    /**
     * <p>The destination IPv6 address of network-related information about a
     * finding.</p>
     */
    inline Network& WithDestinationIpV6(const Aws::String& value) { SetDestinationIpV6(value); return *this;}

    /**
     * <p>The destination IPv6 address of network-related information about a
     * finding.</p>
     */
    inline Network& WithDestinationIpV6(Aws::String&& value) { SetDestinationIpV6(std::move(value)); return *this;}

    /**
     * <p>The destination IPv6 address of network-related information about a
     * finding.</p>
     */
    inline Network& WithDestinationIpV6(const char* value) { SetDestinationIpV6(value); return *this;}


    /**
     * <p>The destination port of network-related information about a finding.</p>
     */
    inline int GetDestinationPort() const{ return m_destinationPort; }

    /**
     * <p>The destination port of network-related information about a finding.</p>
     */
    inline bool DestinationPortHasBeenSet() const { return m_destinationPortHasBeenSet; }

    /**
     * <p>The destination port of network-related information about a finding.</p>
     */
    inline void SetDestinationPort(int value) { m_destinationPortHasBeenSet = true; m_destinationPort = value; }

    /**
     * <p>The destination port of network-related information about a finding.</p>
     */
    inline Network& WithDestinationPort(int value) { SetDestinationPort(value); return *this;}


    /**
     * <p>The destination domain of network-related information about a finding.</p>
     */
    inline const Aws::String& GetDestinationDomain() const{ return m_destinationDomain; }

    /**
     * <p>The destination domain of network-related information about a finding.</p>
     */
    inline bool DestinationDomainHasBeenSet() const { return m_destinationDomainHasBeenSet; }

    /**
     * <p>The destination domain of network-related information about a finding.</p>
     */
    inline void SetDestinationDomain(const Aws::String& value) { m_destinationDomainHasBeenSet = true; m_destinationDomain = value; }

    /**
     * <p>The destination domain of network-related information about a finding.</p>
     */
    inline void SetDestinationDomain(Aws::String&& value) { m_destinationDomainHasBeenSet = true; m_destinationDomain = std::move(value); }

    /**
     * <p>The destination domain of network-related information about a finding.</p>
     */
    inline void SetDestinationDomain(const char* value) { m_destinationDomainHasBeenSet = true; m_destinationDomain.assign(value); }

    /**
     * <p>The destination domain of network-related information about a finding.</p>
     */
    inline Network& WithDestinationDomain(const Aws::String& value) { SetDestinationDomain(value); return *this;}

    /**
     * <p>The destination domain of network-related information about a finding.</p>
     */
    inline Network& WithDestinationDomain(Aws::String&& value) { SetDestinationDomain(std::move(value)); return *this;}

    /**
     * <p>The destination domain of network-related information about a finding.</p>
     */
    inline Network& WithDestinationDomain(const char* value) { SetDestinationDomain(value); return *this;}

  private:

    NetworkDirection m_direction;
    bool m_directionHasBeenSet;

    Aws::String m_protocol;
    bool m_protocolHasBeenSet;

    Aws::String m_sourceIpV4;
    bool m_sourceIpV4HasBeenSet;

    Aws::String m_sourceIpV6;
    bool m_sourceIpV6HasBeenSet;

    int m_sourcePort;
    bool m_sourcePortHasBeenSet;

    Aws::String m_sourceDomain;
    bool m_sourceDomainHasBeenSet;

    Aws::String m_sourceMac;
    bool m_sourceMacHasBeenSet;

    Aws::String m_destinationIpV4;
    bool m_destinationIpV4HasBeenSet;

    Aws::String m_destinationIpV6;
    bool m_destinationIpV6HasBeenSet;

    int m_destinationPort;
    bool m_destinationPortHasBeenSet;

    Aws::String m_destinationDomain;
    bool m_destinationDomainHasBeenSet;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
