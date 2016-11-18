/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/ds/model/TrustDirection.h>
#include <aws/ds/model/TrustType.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

namespace Aws
{
namespace DirectoryService
{
namespace Model
{

  /**
   * <p>AWS Directory Service for Microsoft Active Directory allows you to configure
   * trust relationships. For example, you can establish a trust between your
   * Microsoft AD in the AWS cloud, and your existing on-premises Microsoft Active
   * Directory. This would allow you to provide users and groups access to resources
   * in either domain, with a single set of credentials.</p> <p>This action initiates
   * the creation of the AWS side of a trust relationship between a Microsoft AD in
   * the AWS cloud and an external domain.</p>
   */
  class AWS_DIRECTORYSERVICE_API CreateTrustRequest : public DirectoryServiceRequest
  {
  public:
    CreateTrustRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    /**
     * <p>The Directory ID of the Microsoft AD in the AWS cloud for which to establish
     * the trust relationship.</p>
     */
    inline const Aws::String& GetDirectoryId() const{ return m_directoryId; }

    /**
     * <p>The Directory ID of the Microsoft AD in the AWS cloud for which to establish
     * the trust relationship.</p>
     */
    inline void SetDirectoryId(const Aws::String& value) { m_directoryIdHasBeenSet = true; m_directoryId = value; }

    /**
     * <p>The Directory ID of the Microsoft AD in the AWS cloud for which to establish
     * the trust relationship.</p>
     */
    inline void SetDirectoryId(Aws::String&& value) { m_directoryIdHasBeenSet = true; m_directoryId = value; }

    /**
     * <p>The Directory ID of the Microsoft AD in the AWS cloud for which to establish
     * the trust relationship.</p>
     */
    inline void SetDirectoryId(const char* value) { m_directoryIdHasBeenSet = true; m_directoryId.assign(value); }

    /**
     * <p>The Directory ID of the Microsoft AD in the AWS cloud for which to establish
     * the trust relationship.</p>
     */
    inline CreateTrustRequest& WithDirectoryId(const Aws::String& value) { SetDirectoryId(value); return *this;}

    /**
     * <p>The Directory ID of the Microsoft AD in the AWS cloud for which to establish
     * the trust relationship.</p>
     */
    inline CreateTrustRequest& WithDirectoryId(Aws::String&& value) { SetDirectoryId(value); return *this;}

    /**
     * <p>The Directory ID of the Microsoft AD in the AWS cloud for which to establish
     * the trust relationship.</p>
     */
    inline CreateTrustRequest& WithDirectoryId(const char* value) { SetDirectoryId(value); return *this;}

    /**
     * <p>The Fully Qualified Domain Name (FQDN) of the external domain for which to
     * create the trust relationship.</p>
     */
    inline const Aws::String& GetRemoteDomainName() const{ return m_remoteDomainName; }

    /**
     * <p>The Fully Qualified Domain Name (FQDN) of the external domain for which to
     * create the trust relationship.</p>
     */
    inline void SetRemoteDomainName(const Aws::String& value) { m_remoteDomainNameHasBeenSet = true; m_remoteDomainName = value; }

    /**
     * <p>The Fully Qualified Domain Name (FQDN) of the external domain for which to
     * create the trust relationship.</p>
     */
    inline void SetRemoteDomainName(Aws::String&& value) { m_remoteDomainNameHasBeenSet = true; m_remoteDomainName = value; }

    /**
     * <p>The Fully Qualified Domain Name (FQDN) of the external domain for which to
     * create the trust relationship.</p>
     */
    inline void SetRemoteDomainName(const char* value) { m_remoteDomainNameHasBeenSet = true; m_remoteDomainName.assign(value); }

    /**
     * <p>The Fully Qualified Domain Name (FQDN) of the external domain for which to
     * create the trust relationship.</p>
     */
    inline CreateTrustRequest& WithRemoteDomainName(const Aws::String& value) { SetRemoteDomainName(value); return *this;}

    /**
     * <p>The Fully Qualified Domain Name (FQDN) of the external domain for which to
     * create the trust relationship.</p>
     */
    inline CreateTrustRequest& WithRemoteDomainName(Aws::String&& value) { SetRemoteDomainName(value); return *this;}

    /**
     * <p>The Fully Qualified Domain Name (FQDN) of the external domain for which to
     * create the trust relationship.</p>
     */
    inline CreateTrustRequest& WithRemoteDomainName(const char* value) { SetRemoteDomainName(value); return *this;}

    /**
     * <p>The trust password. The must be the same password that was used when creating
     * the trust relationship on the external domain.</p>
     */
    inline const Aws::String& GetTrustPassword() const{ return m_trustPassword; }

    /**
     * <p>The trust password. The must be the same password that was used when creating
     * the trust relationship on the external domain.</p>
     */
    inline void SetTrustPassword(const Aws::String& value) { m_trustPasswordHasBeenSet = true; m_trustPassword = value; }

    /**
     * <p>The trust password. The must be the same password that was used when creating
     * the trust relationship on the external domain.</p>
     */
    inline void SetTrustPassword(Aws::String&& value) { m_trustPasswordHasBeenSet = true; m_trustPassword = value; }

    /**
     * <p>The trust password. The must be the same password that was used when creating
     * the trust relationship on the external domain.</p>
     */
    inline void SetTrustPassword(const char* value) { m_trustPasswordHasBeenSet = true; m_trustPassword.assign(value); }

    /**
     * <p>The trust password. The must be the same password that was used when creating
     * the trust relationship on the external domain.</p>
     */
    inline CreateTrustRequest& WithTrustPassword(const Aws::String& value) { SetTrustPassword(value); return *this;}

    /**
     * <p>The trust password. The must be the same password that was used when creating
     * the trust relationship on the external domain.</p>
     */
    inline CreateTrustRequest& WithTrustPassword(Aws::String&& value) { SetTrustPassword(value); return *this;}

    /**
     * <p>The trust password. The must be the same password that was used when creating
     * the trust relationship on the external domain.</p>
     */
    inline CreateTrustRequest& WithTrustPassword(const char* value) { SetTrustPassword(value); return *this;}

    /**
     * <p>The direction of the trust relationship.</p>
     */
    inline const TrustDirection& GetTrustDirection() const{ return m_trustDirection; }

    /**
     * <p>The direction of the trust relationship.</p>
     */
    inline void SetTrustDirection(const TrustDirection& value) { m_trustDirectionHasBeenSet = true; m_trustDirection = value; }

    /**
     * <p>The direction of the trust relationship.</p>
     */
    inline void SetTrustDirection(TrustDirection&& value) { m_trustDirectionHasBeenSet = true; m_trustDirection = value; }

    /**
     * <p>The direction of the trust relationship.</p>
     */
    inline CreateTrustRequest& WithTrustDirection(const TrustDirection& value) { SetTrustDirection(value); return *this;}

    /**
     * <p>The direction of the trust relationship.</p>
     */
    inline CreateTrustRequest& WithTrustDirection(TrustDirection&& value) { SetTrustDirection(value); return *this;}

    /**
     * <p>The trust relationship type.</p>
     */
    inline const TrustType& GetTrustType() const{ return m_trustType; }

    /**
     * <p>The trust relationship type.</p>
     */
    inline void SetTrustType(const TrustType& value) { m_trustTypeHasBeenSet = true; m_trustType = value; }

    /**
     * <p>The trust relationship type.</p>
     */
    inline void SetTrustType(TrustType&& value) { m_trustTypeHasBeenSet = true; m_trustType = value; }

    /**
     * <p>The trust relationship type.</p>
     */
    inline CreateTrustRequest& WithTrustType(const TrustType& value) { SetTrustType(value); return *this;}

    /**
     * <p>The trust relationship type.</p>
     */
    inline CreateTrustRequest& WithTrustType(TrustType&& value) { SetTrustType(value); return *this;}

    /**
     * <p>The IP addresses of the remote DNS server associated with
     * RemoteDomainName.</p>
     */
    inline const Aws::Vector<Aws::String>& GetConditionalForwarderIpAddrs() const{ return m_conditionalForwarderIpAddrs; }

    /**
     * <p>The IP addresses of the remote DNS server associated with
     * RemoteDomainName.</p>
     */
    inline void SetConditionalForwarderIpAddrs(const Aws::Vector<Aws::String>& value) { m_conditionalForwarderIpAddrsHasBeenSet = true; m_conditionalForwarderIpAddrs = value; }

    /**
     * <p>The IP addresses of the remote DNS server associated with
     * RemoteDomainName.</p>
     */
    inline void SetConditionalForwarderIpAddrs(Aws::Vector<Aws::String>&& value) { m_conditionalForwarderIpAddrsHasBeenSet = true; m_conditionalForwarderIpAddrs = value; }

    /**
     * <p>The IP addresses of the remote DNS server associated with
     * RemoteDomainName.</p>
     */
    inline CreateTrustRequest& WithConditionalForwarderIpAddrs(const Aws::Vector<Aws::String>& value) { SetConditionalForwarderIpAddrs(value); return *this;}

    /**
     * <p>The IP addresses of the remote DNS server associated with
     * RemoteDomainName.</p>
     */
    inline CreateTrustRequest& WithConditionalForwarderIpAddrs(Aws::Vector<Aws::String>&& value) { SetConditionalForwarderIpAddrs(value); return *this;}

    /**
     * <p>The IP addresses of the remote DNS server associated with
     * RemoteDomainName.</p>
     */
    inline CreateTrustRequest& AddConditionalForwarderIpAddrs(const Aws::String& value) { m_conditionalForwarderIpAddrsHasBeenSet = true; m_conditionalForwarderIpAddrs.push_back(value); return *this; }

    /**
     * <p>The IP addresses of the remote DNS server associated with
     * RemoteDomainName.</p>
     */
    inline CreateTrustRequest& AddConditionalForwarderIpAddrs(Aws::String&& value) { m_conditionalForwarderIpAddrsHasBeenSet = true; m_conditionalForwarderIpAddrs.push_back(value); return *this; }

    /**
     * <p>The IP addresses of the remote DNS server associated with
     * RemoteDomainName.</p>
     */
    inline CreateTrustRequest& AddConditionalForwarderIpAddrs(const char* value) { m_conditionalForwarderIpAddrsHasBeenSet = true; m_conditionalForwarderIpAddrs.push_back(value); return *this; }

  private:
    Aws::String m_directoryId;
    bool m_directoryIdHasBeenSet;
    Aws::String m_remoteDomainName;
    bool m_remoteDomainNameHasBeenSet;
    Aws::String m_trustPassword;
    bool m_trustPasswordHasBeenSet;
    TrustDirection m_trustDirection;
    bool m_trustDirectionHasBeenSet;
    TrustType m_trustType;
    bool m_trustTypeHasBeenSet;
    Aws::Vector<Aws::String> m_conditionalForwarderIpAddrs;
    bool m_conditionalForwarderIpAddrsHasBeenSet;
  };

} // namespace Model
} // namespace DirectoryService
} // namespace Aws
