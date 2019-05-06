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
#include <aws/ds/DirectoryService_EXPORTS.h>
#include <aws/ds/DirectoryServiceRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ds/model/IpRoute.h>
#include <utility>

namespace Aws
{
namespace DirectoryService
{
namespace Model
{

  /**
   */
  class AWS_DIRECTORYSERVICE_API AddIpRoutesRequest : public DirectoryServiceRequest
  {
  public:
    AddIpRoutesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "AddIpRoutes"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>Identifier (ID) of the directory to which to add the address block.</p>
     */
    inline const Aws::String& GetDirectoryId() const{ return m_directoryId; }

    /**
     * <p>Identifier (ID) of the directory to which to add the address block.</p>
     */
    inline bool DirectoryIdHasBeenSet() const { return m_directoryIdHasBeenSet; }

    /**
     * <p>Identifier (ID) of the directory to which to add the address block.</p>
     */
    inline void SetDirectoryId(const Aws::String& value) { m_directoryIdHasBeenSet = true; m_directoryId = value; }

    /**
     * <p>Identifier (ID) of the directory to which to add the address block.</p>
     */
    inline void SetDirectoryId(Aws::String&& value) { m_directoryIdHasBeenSet = true; m_directoryId = std::move(value); }

    /**
     * <p>Identifier (ID) of the directory to which to add the address block.</p>
     */
    inline void SetDirectoryId(const char* value) { m_directoryIdHasBeenSet = true; m_directoryId.assign(value); }

    /**
     * <p>Identifier (ID) of the directory to which to add the address block.</p>
     */
    inline AddIpRoutesRequest& WithDirectoryId(const Aws::String& value) { SetDirectoryId(value); return *this;}

    /**
     * <p>Identifier (ID) of the directory to which to add the address block.</p>
     */
    inline AddIpRoutesRequest& WithDirectoryId(Aws::String&& value) { SetDirectoryId(std::move(value)); return *this;}

    /**
     * <p>Identifier (ID) of the directory to which to add the address block.</p>
     */
    inline AddIpRoutesRequest& WithDirectoryId(const char* value) { SetDirectoryId(value); return *this;}


    /**
     * <p>IP address blocks, using CIDR format, of the traffic to route. This is often
     * the IP address block of the DNS server used for your on-premises domain.</p>
     */
    inline const Aws::Vector<IpRoute>& GetIpRoutes() const{ return m_ipRoutes; }

    /**
     * <p>IP address blocks, using CIDR format, of the traffic to route. This is often
     * the IP address block of the DNS server used for your on-premises domain.</p>
     */
    inline bool IpRoutesHasBeenSet() const { return m_ipRoutesHasBeenSet; }

    /**
     * <p>IP address blocks, using CIDR format, of the traffic to route. This is often
     * the IP address block of the DNS server used for your on-premises domain.</p>
     */
    inline void SetIpRoutes(const Aws::Vector<IpRoute>& value) { m_ipRoutesHasBeenSet = true; m_ipRoutes = value; }

    /**
     * <p>IP address blocks, using CIDR format, of the traffic to route. This is often
     * the IP address block of the DNS server used for your on-premises domain.</p>
     */
    inline void SetIpRoutes(Aws::Vector<IpRoute>&& value) { m_ipRoutesHasBeenSet = true; m_ipRoutes = std::move(value); }

    /**
     * <p>IP address blocks, using CIDR format, of the traffic to route. This is often
     * the IP address block of the DNS server used for your on-premises domain.</p>
     */
    inline AddIpRoutesRequest& WithIpRoutes(const Aws::Vector<IpRoute>& value) { SetIpRoutes(value); return *this;}

    /**
     * <p>IP address blocks, using CIDR format, of the traffic to route. This is often
     * the IP address block of the DNS server used for your on-premises domain.</p>
     */
    inline AddIpRoutesRequest& WithIpRoutes(Aws::Vector<IpRoute>&& value) { SetIpRoutes(std::move(value)); return *this;}

    /**
     * <p>IP address blocks, using CIDR format, of the traffic to route. This is often
     * the IP address block of the DNS server used for your on-premises domain.</p>
     */
    inline AddIpRoutesRequest& AddIpRoutes(const IpRoute& value) { m_ipRoutesHasBeenSet = true; m_ipRoutes.push_back(value); return *this; }

    /**
     * <p>IP address blocks, using CIDR format, of the traffic to route. This is often
     * the IP address block of the DNS server used for your on-premises domain.</p>
     */
    inline AddIpRoutesRequest& AddIpRoutes(IpRoute&& value) { m_ipRoutesHasBeenSet = true; m_ipRoutes.push_back(std::move(value)); return *this; }


    /**
     * <p>If set to true, updates the inbound and outbound rules of the security group
     * that has the description: "AWS created security group for <i>directory ID</i>
     * directory controllers." Following are the new rules: </p> <p>Inbound:</p> <ul>
     * <li> <p>Type: Custom UDP Rule, Protocol: UDP, Range: 88, Source: 0.0.0.0/0</p>
     * </li> <li> <p>Type: Custom UDP Rule, Protocol: UDP, Range: 123, Source:
     * 0.0.0.0/0</p> </li> <li> <p>Type: Custom UDP Rule, Protocol: UDP, Range: 138,
     * Source: 0.0.0.0/0</p> </li> <li> <p>Type: Custom UDP Rule, Protocol: UDP, Range:
     * 389, Source: 0.0.0.0/0</p> </li> <li> <p>Type: Custom UDP Rule, Protocol: UDP,
     * Range: 464, Source: 0.0.0.0/0</p> </li> <li> <p>Type: Custom UDP Rule, Protocol:
     * UDP, Range: 445, Source: 0.0.0.0/0</p> </li> <li> <p>Type: Custom TCP Rule,
     * Protocol: TCP, Range: 88, Source: 0.0.0.0/0</p> </li> <li> <p>Type: Custom TCP
     * Rule, Protocol: TCP, Range: 135, Source: 0.0.0.0/0</p> </li> <li> <p>Type:
     * Custom TCP Rule, Protocol: TCP, Range: 445, Source: 0.0.0.0/0</p> </li> <li>
     * <p>Type: Custom TCP Rule, Protocol: TCP, Range: 464, Source: 0.0.0.0/0</p> </li>
     * <li> <p>Type: Custom TCP Rule, Protocol: TCP, Range: 636, Source: 0.0.0.0/0</p>
     * </li> <li> <p>Type: Custom TCP Rule, Protocol: TCP, Range: 1024-65535, Source:
     * 0.0.0.0/0</p> </li> <li> <p>Type: Custom TCP Rule, Protocol: TCP, Range:
     * 3268-33269, Source: 0.0.0.0/0</p> </li> <li> <p>Type: DNS (UDP), Protocol: UDP,
     * Range: 53, Source: 0.0.0.0/0</p> </li> <li> <p>Type: DNS (TCP), Protocol: TCP,
     * Range: 53, Source: 0.0.0.0/0</p> </li> <li> <p>Type: LDAP, Protocol: TCP, Range:
     * 389, Source: 0.0.0.0/0</p> </li> <li> <p>Type: All ICMP, Protocol: All, Range:
     * N/A, Source: 0.0.0.0/0</p> </li> </ul> <p/> <p>Outbound:</p> <ul> <li> <p>Type:
     * All traffic, Protocol: All, Range: All, Destination: 0.0.0.0/0</p> </li> </ul>
     * <p>These security rules impact an internal network interface that is not exposed
     * publicly.</p>
     */
    inline bool GetUpdateSecurityGroupForDirectoryControllers() const{ return m_updateSecurityGroupForDirectoryControllers; }

    /**
     * <p>If set to true, updates the inbound and outbound rules of the security group
     * that has the description: "AWS created security group for <i>directory ID</i>
     * directory controllers." Following are the new rules: </p> <p>Inbound:</p> <ul>
     * <li> <p>Type: Custom UDP Rule, Protocol: UDP, Range: 88, Source: 0.0.0.0/0</p>
     * </li> <li> <p>Type: Custom UDP Rule, Protocol: UDP, Range: 123, Source:
     * 0.0.0.0/0</p> </li> <li> <p>Type: Custom UDP Rule, Protocol: UDP, Range: 138,
     * Source: 0.0.0.0/0</p> </li> <li> <p>Type: Custom UDP Rule, Protocol: UDP, Range:
     * 389, Source: 0.0.0.0/0</p> </li> <li> <p>Type: Custom UDP Rule, Protocol: UDP,
     * Range: 464, Source: 0.0.0.0/0</p> </li> <li> <p>Type: Custom UDP Rule, Protocol:
     * UDP, Range: 445, Source: 0.0.0.0/0</p> </li> <li> <p>Type: Custom TCP Rule,
     * Protocol: TCP, Range: 88, Source: 0.0.0.0/0</p> </li> <li> <p>Type: Custom TCP
     * Rule, Protocol: TCP, Range: 135, Source: 0.0.0.0/0</p> </li> <li> <p>Type:
     * Custom TCP Rule, Protocol: TCP, Range: 445, Source: 0.0.0.0/0</p> </li> <li>
     * <p>Type: Custom TCP Rule, Protocol: TCP, Range: 464, Source: 0.0.0.0/0</p> </li>
     * <li> <p>Type: Custom TCP Rule, Protocol: TCP, Range: 636, Source: 0.0.0.0/0</p>
     * </li> <li> <p>Type: Custom TCP Rule, Protocol: TCP, Range: 1024-65535, Source:
     * 0.0.0.0/0</p> </li> <li> <p>Type: Custom TCP Rule, Protocol: TCP, Range:
     * 3268-33269, Source: 0.0.0.0/0</p> </li> <li> <p>Type: DNS (UDP), Protocol: UDP,
     * Range: 53, Source: 0.0.0.0/0</p> </li> <li> <p>Type: DNS (TCP), Protocol: TCP,
     * Range: 53, Source: 0.0.0.0/0</p> </li> <li> <p>Type: LDAP, Protocol: TCP, Range:
     * 389, Source: 0.0.0.0/0</p> </li> <li> <p>Type: All ICMP, Protocol: All, Range:
     * N/A, Source: 0.0.0.0/0</p> </li> </ul> <p/> <p>Outbound:</p> <ul> <li> <p>Type:
     * All traffic, Protocol: All, Range: All, Destination: 0.0.0.0/0</p> </li> </ul>
     * <p>These security rules impact an internal network interface that is not exposed
     * publicly.</p>
     */
    inline bool UpdateSecurityGroupForDirectoryControllersHasBeenSet() const { return m_updateSecurityGroupForDirectoryControllersHasBeenSet; }

    /**
     * <p>If set to true, updates the inbound and outbound rules of the security group
     * that has the description: "AWS created security group for <i>directory ID</i>
     * directory controllers." Following are the new rules: </p> <p>Inbound:</p> <ul>
     * <li> <p>Type: Custom UDP Rule, Protocol: UDP, Range: 88, Source: 0.0.0.0/0</p>
     * </li> <li> <p>Type: Custom UDP Rule, Protocol: UDP, Range: 123, Source:
     * 0.0.0.0/0</p> </li> <li> <p>Type: Custom UDP Rule, Protocol: UDP, Range: 138,
     * Source: 0.0.0.0/0</p> </li> <li> <p>Type: Custom UDP Rule, Protocol: UDP, Range:
     * 389, Source: 0.0.0.0/0</p> </li> <li> <p>Type: Custom UDP Rule, Protocol: UDP,
     * Range: 464, Source: 0.0.0.0/0</p> </li> <li> <p>Type: Custom UDP Rule, Protocol:
     * UDP, Range: 445, Source: 0.0.0.0/0</p> </li> <li> <p>Type: Custom TCP Rule,
     * Protocol: TCP, Range: 88, Source: 0.0.0.0/0</p> </li> <li> <p>Type: Custom TCP
     * Rule, Protocol: TCP, Range: 135, Source: 0.0.0.0/0</p> </li> <li> <p>Type:
     * Custom TCP Rule, Protocol: TCP, Range: 445, Source: 0.0.0.0/0</p> </li> <li>
     * <p>Type: Custom TCP Rule, Protocol: TCP, Range: 464, Source: 0.0.0.0/0</p> </li>
     * <li> <p>Type: Custom TCP Rule, Protocol: TCP, Range: 636, Source: 0.0.0.0/0</p>
     * </li> <li> <p>Type: Custom TCP Rule, Protocol: TCP, Range: 1024-65535, Source:
     * 0.0.0.0/0</p> </li> <li> <p>Type: Custom TCP Rule, Protocol: TCP, Range:
     * 3268-33269, Source: 0.0.0.0/0</p> </li> <li> <p>Type: DNS (UDP), Protocol: UDP,
     * Range: 53, Source: 0.0.0.0/0</p> </li> <li> <p>Type: DNS (TCP), Protocol: TCP,
     * Range: 53, Source: 0.0.0.0/0</p> </li> <li> <p>Type: LDAP, Protocol: TCP, Range:
     * 389, Source: 0.0.0.0/0</p> </li> <li> <p>Type: All ICMP, Protocol: All, Range:
     * N/A, Source: 0.0.0.0/0</p> </li> </ul> <p/> <p>Outbound:</p> <ul> <li> <p>Type:
     * All traffic, Protocol: All, Range: All, Destination: 0.0.0.0/0</p> </li> </ul>
     * <p>These security rules impact an internal network interface that is not exposed
     * publicly.</p>
     */
    inline void SetUpdateSecurityGroupForDirectoryControllers(bool value) { m_updateSecurityGroupForDirectoryControllersHasBeenSet = true; m_updateSecurityGroupForDirectoryControllers = value; }

    /**
     * <p>If set to true, updates the inbound and outbound rules of the security group
     * that has the description: "AWS created security group for <i>directory ID</i>
     * directory controllers." Following are the new rules: </p> <p>Inbound:</p> <ul>
     * <li> <p>Type: Custom UDP Rule, Protocol: UDP, Range: 88, Source: 0.0.0.0/0</p>
     * </li> <li> <p>Type: Custom UDP Rule, Protocol: UDP, Range: 123, Source:
     * 0.0.0.0/0</p> </li> <li> <p>Type: Custom UDP Rule, Protocol: UDP, Range: 138,
     * Source: 0.0.0.0/0</p> </li> <li> <p>Type: Custom UDP Rule, Protocol: UDP, Range:
     * 389, Source: 0.0.0.0/0</p> </li> <li> <p>Type: Custom UDP Rule, Protocol: UDP,
     * Range: 464, Source: 0.0.0.0/0</p> </li> <li> <p>Type: Custom UDP Rule, Protocol:
     * UDP, Range: 445, Source: 0.0.0.0/0</p> </li> <li> <p>Type: Custom TCP Rule,
     * Protocol: TCP, Range: 88, Source: 0.0.0.0/0</p> </li> <li> <p>Type: Custom TCP
     * Rule, Protocol: TCP, Range: 135, Source: 0.0.0.0/0</p> </li> <li> <p>Type:
     * Custom TCP Rule, Protocol: TCP, Range: 445, Source: 0.0.0.0/0</p> </li> <li>
     * <p>Type: Custom TCP Rule, Protocol: TCP, Range: 464, Source: 0.0.0.0/0</p> </li>
     * <li> <p>Type: Custom TCP Rule, Protocol: TCP, Range: 636, Source: 0.0.0.0/0</p>
     * </li> <li> <p>Type: Custom TCP Rule, Protocol: TCP, Range: 1024-65535, Source:
     * 0.0.0.0/0</p> </li> <li> <p>Type: Custom TCP Rule, Protocol: TCP, Range:
     * 3268-33269, Source: 0.0.0.0/0</p> </li> <li> <p>Type: DNS (UDP), Protocol: UDP,
     * Range: 53, Source: 0.0.0.0/0</p> </li> <li> <p>Type: DNS (TCP), Protocol: TCP,
     * Range: 53, Source: 0.0.0.0/0</p> </li> <li> <p>Type: LDAP, Protocol: TCP, Range:
     * 389, Source: 0.0.0.0/0</p> </li> <li> <p>Type: All ICMP, Protocol: All, Range:
     * N/A, Source: 0.0.0.0/0</p> </li> </ul> <p/> <p>Outbound:</p> <ul> <li> <p>Type:
     * All traffic, Protocol: All, Range: All, Destination: 0.0.0.0/0</p> </li> </ul>
     * <p>These security rules impact an internal network interface that is not exposed
     * publicly.</p>
     */
    inline AddIpRoutesRequest& WithUpdateSecurityGroupForDirectoryControllers(bool value) { SetUpdateSecurityGroupForDirectoryControllers(value); return *this;}

  private:

    Aws::String m_directoryId;
    bool m_directoryIdHasBeenSet;

    Aws::Vector<IpRoute> m_ipRoutes;
    bool m_ipRoutesHasBeenSet;

    bool m_updateSecurityGroupForDirectoryControllers;
    bool m_updateSecurityGroupForDirectoryControllersHasBeenSet;
  };

} // namespace Model
} // namespace DirectoryService
} // namespace Aws
