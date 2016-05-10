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
   * in either domain, with a single set of credentials.</p><p>This action initiates
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
     * The Directory ID of the Microsoft AD in the AWS cloud for which to establish the
     * trust relationship.
     */
    inline const Aws::String& GetDirectoryId() const{ return m_directoryId; }

    /**
     * The Directory ID of the Microsoft AD in the AWS cloud for which to establish the
     * trust relationship.
     */
    inline void SetDirectoryId(const Aws::String& value) { m_directoryIdHasBeenSet = true; m_directoryId = value; }

    /**
     * The Directory ID of the Microsoft AD in the AWS cloud for which to establish the
     * trust relationship.
     */
    inline void SetDirectoryId(Aws::String&& value) { m_directoryIdHasBeenSet = true; m_directoryId = value; }

    /**
     * The Directory ID of the Microsoft AD in the AWS cloud for which to establish the
     * trust relationship.
     */
    inline void SetDirectoryId(const char* value) { m_directoryIdHasBeenSet = true; m_directoryId.assign(value); }

    /**
     * The Directory ID of the Microsoft AD in the AWS cloud for which to establish the
     * trust relationship.
     */
    inline CreateTrustRequest& WithDirectoryId(const Aws::String& value) { SetDirectoryId(value); return *this;}

    /**
     * The Directory ID of the Microsoft AD in the AWS cloud for which to establish the
     * trust relationship.
     */
    inline CreateTrustRequest& WithDirectoryId(Aws::String&& value) { SetDirectoryId(value); return *this;}

    /**
     * The Directory ID of the Microsoft AD in the AWS cloud for which to establish the
     * trust relationship.
     */
    inline CreateTrustRequest& WithDirectoryId(const char* value) { SetDirectoryId(value); return *this;}

    /**
     * The Fully Qualified Domain Name (FQDN) of the external domain for which to
     * create the trust relationship.
     */
    inline const Aws::String& GetRemoteDomainName() const{ return m_remoteDomainName; }

    /**
     * The Fully Qualified Domain Name (FQDN) of the external domain for which to
     * create the trust relationship.
     */
    inline void SetRemoteDomainName(const Aws::String& value) { m_remoteDomainNameHasBeenSet = true; m_remoteDomainName = value; }

    /**
     * The Fully Qualified Domain Name (FQDN) of the external domain for which to
     * create the trust relationship.
     */
    inline void SetRemoteDomainName(Aws::String&& value) { m_remoteDomainNameHasBeenSet = true; m_remoteDomainName = value; }

    /**
     * The Fully Qualified Domain Name (FQDN) of the external domain for which to
     * create the trust relationship.
     */
    inline void SetRemoteDomainName(const char* value) { m_remoteDomainNameHasBeenSet = true; m_remoteDomainName.assign(value); }

    /**
     * The Fully Qualified Domain Name (FQDN) of the external domain for which to
     * create the trust relationship.
     */
    inline CreateTrustRequest& WithRemoteDomainName(const Aws::String& value) { SetRemoteDomainName(value); return *this;}

    /**
     * The Fully Qualified Domain Name (FQDN) of the external domain for which to
     * create the trust relationship.
     */
    inline CreateTrustRequest& WithRemoteDomainName(Aws::String&& value) { SetRemoteDomainName(value); return *this;}

    /**
     * The Fully Qualified Domain Name (FQDN) of the external domain for which to
     * create the trust relationship.
     */
    inline CreateTrustRequest& WithRemoteDomainName(const char* value) { SetRemoteDomainName(value); return *this;}

    /**
     * The trust password. The must be the same password that was used when creating
     * the trust relationship on the external domain.
     */
    inline const Aws::String& GetTrustPassword() const{ return m_trustPassword; }

    /**
     * The trust password. The must be the same password that was used when creating
     * the trust relationship on the external domain.
     */
    inline void SetTrustPassword(const Aws::String& value) { m_trustPasswordHasBeenSet = true; m_trustPassword = value; }

    /**
     * The trust password. The must be the same password that was used when creating
     * the trust relationship on the external domain.
     */
    inline void SetTrustPassword(Aws::String&& value) { m_trustPasswordHasBeenSet = true; m_trustPassword = value; }

    /**
     * The trust password. The must be the same password that was used when creating
     * the trust relationship on the external domain.
     */
    inline void SetTrustPassword(const char* value) { m_trustPasswordHasBeenSet = true; m_trustPassword.assign(value); }

    /**
     * The trust password. The must be the same password that was used when creating
     * the trust relationship on the external domain.
     */
    inline CreateTrustRequest& WithTrustPassword(const Aws::String& value) { SetTrustPassword(value); return *this;}

    /**
     * The trust password. The must be the same password that was used when creating
     * the trust relationship on the external domain.
     */
    inline CreateTrustRequest& WithTrustPassword(Aws::String&& value) { SetTrustPassword(value); return *this;}

    /**
     * The trust password. The must be the same password that was used when creating
     * the trust relationship on the external domain.
     */
    inline CreateTrustRequest& WithTrustPassword(const char* value) { SetTrustPassword(value); return *this;}

    /**
     * The direction of the trust relationship.
     */
    inline const TrustDirection& GetTrustDirection() const{ return m_trustDirection; }

    /**
     * The direction of the trust relationship.
     */
    inline void SetTrustDirection(const TrustDirection& value) { m_trustDirectionHasBeenSet = true; m_trustDirection = value; }

    /**
     * The direction of the trust relationship.
     */
    inline void SetTrustDirection(TrustDirection&& value) { m_trustDirectionHasBeenSet = true; m_trustDirection = value; }

    /**
     * The direction of the trust relationship.
     */
    inline CreateTrustRequest& WithTrustDirection(const TrustDirection& value) { SetTrustDirection(value); return *this;}

    /**
     * The direction of the trust relationship.
     */
    inline CreateTrustRequest& WithTrustDirection(TrustDirection&& value) { SetTrustDirection(value); return *this;}

    /**
     * The trust relationship type.
     */
    inline const TrustType& GetTrustType() const{ return m_trustType; }

    /**
     * The trust relationship type.
     */
    inline void SetTrustType(const TrustType& value) { m_trustTypeHasBeenSet = true; m_trustType = value; }

    /**
     * The trust relationship type.
     */
    inline void SetTrustType(TrustType&& value) { m_trustTypeHasBeenSet = true; m_trustType = value; }

    /**
     * The trust relationship type.
     */
    inline CreateTrustRequest& WithTrustType(const TrustType& value) { SetTrustType(value); return *this;}

    /**
     * The trust relationship type.
     */
    inline CreateTrustRequest& WithTrustType(TrustType&& value) { SetTrustType(value); return *this;}

    
    inline const Aws::Vector<Aws::String>& GetConditionalForwarderIpAddrs() const{ return m_conditionalForwarderIpAddrs; }

    
    inline void SetConditionalForwarderIpAddrs(const Aws::Vector<Aws::String>& value) { m_conditionalForwarderIpAddrsHasBeenSet = true; m_conditionalForwarderIpAddrs = value; }

    
    inline void SetConditionalForwarderIpAddrs(Aws::Vector<Aws::String>&& value) { m_conditionalForwarderIpAddrsHasBeenSet = true; m_conditionalForwarderIpAddrs = value; }

    
    inline CreateTrustRequest& WithConditionalForwarderIpAddrs(const Aws::Vector<Aws::String>& value) { SetConditionalForwarderIpAddrs(value); return *this;}

    
    inline CreateTrustRequest& WithConditionalForwarderIpAddrs(Aws::Vector<Aws::String>&& value) { SetConditionalForwarderIpAddrs(value); return *this;}

    
    inline CreateTrustRequest& AddConditionalForwarderIpAddrs(const Aws::String& value) { m_conditionalForwarderIpAddrsHasBeenSet = true; m_conditionalForwarderIpAddrs.push_back(value); return *this; }

    
    inline CreateTrustRequest& AddConditionalForwarderIpAddrs(Aws::String&& value) { m_conditionalForwarderIpAddrsHasBeenSet = true; m_conditionalForwarderIpAddrs.push_back(value); return *this; }

    
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
