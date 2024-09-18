/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class AddIpRoutesRequest : public DirectoryServiceRequest
  {
  public:
    AWS_DIRECTORYSERVICE_API AddIpRoutesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "AddIpRoutes"; }

    AWS_DIRECTORYSERVICE_API Aws::String SerializePayload() const override;

    AWS_DIRECTORYSERVICE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>Identifier (ID) of the directory to which to add the address block.</p>
     */
    inline const Aws::String& GetDirectoryId() const{ return m_directoryId; }
    inline bool DirectoryIdHasBeenSet() const { return m_directoryIdHasBeenSet; }
    inline void SetDirectoryId(const Aws::String& value) { m_directoryIdHasBeenSet = true; m_directoryId = value; }
    inline void SetDirectoryId(Aws::String&& value) { m_directoryIdHasBeenSet = true; m_directoryId = std::move(value); }
    inline void SetDirectoryId(const char* value) { m_directoryIdHasBeenSet = true; m_directoryId.assign(value); }
    inline AddIpRoutesRequest& WithDirectoryId(const Aws::String& value) { SetDirectoryId(value); return *this;}
    inline AddIpRoutesRequest& WithDirectoryId(Aws::String&& value) { SetDirectoryId(std::move(value)); return *this;}
    inline AddIpRoutesRequest& WithDirectoryId(const char* value) { SetDirectoryId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>IP address blocks, using CIDR format, of the traffic to route. This is often
     * the IP address block of the DNS server used for your self-managed domain.</p>
     */
    inline const Aws::Vector<IpRoute>& GetIpRoutes() const{ return m_ipRoutes; }
    inline bool IpRoutesHasBeenSet() const { return m_ipRoutesHasBeenSet; }
    inline void SetIpRoutes(const Aws::Vector<IpRoute>& value) { m_ipRoutesHasBeenSet = true; m_ipRoutes = value; }
    inline void SetIpRoutes(Aws::Vector<IpRoute>&& value) { m_ipRoutesHasBeenSet = true; m_ipRoutes = std::move(value); }
    inline AddIpRoutesRequest& WithIpRoutes(const Aws::Vector<IpRoute>& value) { SetIpRoutes(value); return *this;}
    inline AddIpRoutesRequest& WithIpRoutes(Aws::Vector<IpRoute>&& value) { SetIpRoutes(std::move(value)); return *this;}
    inline AddIpRoutesRequest& AddIpRoutes(const IpRoute& value) { m_ipRoutesHasBeenSet = true; m_ipRoutes.push_back(value); return *this; }
    inline AddIpRoutesRequest& AddIpRoutes(IpRoute&& value) { m_ipRoutesHasBeenSet = true; m_ipRoutes.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>If set to true, updates the inbound and outbound rules of the security group
     * that has the description: "Amazon Web Services created security group for
     * <i>directory ID</i> directory controllers." Following are the new rules: </p>
     * <p>Inbound:</p> <ul> <li> <p>Type: Custom UDP Rule, Protocol: UDP, Range: 88,
     * Source: Managed Microsoft AD VPC IPv4 CIDR</p> </li> <li> <p>Type: Custom UDP
     * Rule, Protocol: UDP, Range: 123, Source: Managed Microsoft AD VPC IPv4 CIDR</p>
     * </li> <li> <p>Type: Custom UDP Rule, Protocol: UDP, Range: 138, Source: Managed
     * Microsoft AD VPC IPv4 CIDR</p> </li> <li> <p>Type: Custom UDP Rule, Protocol:
     * UDP, Range: 389, Source: Managed Microsoft AD VPC IPv4 CIDR</p> </li> <li>
     * <p>Type: Custom UDP Rule, Protocol: UDP, Range: 464, Source: Managed Microsoft
     * AD VPC IPv4 CIDR</p> </li> <li> <p>Type: Custom UDP Rule, Protocol: UDP, Range:
     * 445, Source: Managed Microsoft AD VPC IPv4 CIDR</p> </li> <li> <p>Type: Custom
     * TCP Rule, Protocol: TCP, Range: 88, Source: Managed Microsoft AD VPC IPv4
     * CIDR</p> </li> <li> <p>Type: Custom TCP Rule, Protocol: TCP, Range: 135, Source:
     * Managed Microsoft AD VPC IPv4 CIDR</p> </li> <li> <p>Type: Custom TCP Rule,
     * Protocol: TCP, Range: 445, Source: Managed Microsoft AD VPC IPv4 CIDR</p> </li>
     * <li> <p>Type: Custom TCP Rule, Protocol: TCP, Range: 464, Source: Managed
     * Microsoft AD VPC IPv4 CIDR</p> </li> <li> <p>Type: Custom TCP Rule, Protocol:
     * TCP, Range: 636, Source: Managed Microsoft AD VPC IPv4 CIDR</p> </li> <li>
     * <p>Type: Custom TCP Rule, Protocol: TCP, Range: 1024-65535, Source: Managed
     * Microsoft AD VPC IPv4 CIDR</p> </li> <li> <p>Type: Custom TCP Rule, Protocol:
     * TCP, Range: 3268-33269, Source: Managed Microsoft AD VPC IPv4 CIDR</p> </li>
     * <li> <p>Type: DNS (UDP), Protocol: UDP, Range: 53, Source: Managed Microsoft AD
     * VPC IPv4 CIDR</p> </li> <li> <p>Type: DNS (TCP), Protocol: TCP, Range: 53,
     * Source: Managed Microsoft AD VPC IPv4 CIDR</p> </li> <li> <p>Type: LDAP,
     * Protocol: TCP, Range: 389, Source: Managed Microsoft AD VPC IPv4 CIDR</p> </li>
     * <li> <p>Type: All ICMP, Protocol: All, Range: N/A, Source: Managed Microsoft AD
     * VPC IPv4 CIDR</p> </li> </ul> <p/> <p>Outbound:</p> <ul> <li> <p>Type: All
     * traffic, Protocol: All, Range: All, Destination: 0.0.0.0/0</p> </li> </ul>
     * <p>These security rules impact an internal network interface that is not exposed
     * publicly.</p>
     */
    inline bool GetUpdateSecurityGroupForDirectoryControllers() const{ return m_updateSecurityGroupForDirectoryControllers; }
    inline bool UpdateSecurityGroupForDirectoryControllersHasBeenSet() const { return m_updateSecurityGroupForDirectoryControllersHasBeenSet; }
    inline void SetUpdateSecurityGroupForDirectoryControllers(bool value) { m_updateSecurityGroupForDirectoryControllersHasBeenSet = true; m_updateSecurityGroupForDirectoryControllers = value; }
    inline AddIpRoutesRequest& WithUpdateSecurityGroupForDirectoryControllers(bool value) { SetUpdateSecurityGroupForDirectoryControllers(value); return *this;}
    ///@}
  private:

    Aws::String m_directoryId;
    bool m_directoryIdHasBeenSet = false;

    Aws::Vector<IpRoute> m_ipRoutes;
    bool m_ipRoutesHasBeenSet = false;

    bool m_updateSecurityGroupForDirectoryControllers;
    bool m_updateSecurityGroupForDirectoryControllersHasBeenSet = false;
  };

} // namespace Model
} // namespace DirectoryService
} // namespace Aws
