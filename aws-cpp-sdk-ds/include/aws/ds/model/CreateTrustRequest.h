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
#include <aws/ds/model/TrustDirection.h>
#include <aws/ds/model/TrustType.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ds/model/SelectiveAuth.h>
#include <utility>

namespace Aws
{
namespace DirectoryService
{
namespace Model
{

  /**
   * <p>AWS Directory Service for Microsoft Active Directory allows you to configure
   * trust relationships. For example, you can establish a trust between your AWS
   * Managed Microsoft AD directory, and your existing on-premises Microsoft Active
   * Directory. This would allow you to provide users and groups access to resources
   * in either domain, with a single set of credentials.</p> <p>This action initiates
   * the creation of the AWS side of a trust relationship between an AWS Managed
   * Microsoft AD directory and an external domain.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ds-2015-04-16/CreateTrustRequest">AWS
   * API Reference</a></p>
   */
  class AWS_DIRECTORYSERVICE_API CreateTrustRequest : public DirectoryServiceRequest
  {
  public:
    CreateTrustRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateTrust"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The Directory ID of the AWS Managed Microsoft AD directory for which to
     * establish the trust relationship.</p>
     */
    inline const Aws::String& GetDirectoryId() const{ return m_directoryId; }

    /**
     * <p>The Directory ID of the AWS Managed Microsoft AD directory for which to
     * establish the trust relationship.</p>
     */
    inline bool DirectoryIdHasBeenSet() const { return m_directoryIdHasBeenSet; }

    /**
     * <p>The Directory ID of the AWS Managed Microsoft AD directory for which to
     * establish the trust relationship.</p>
     */
    inline void SetDirectoryId(const Aws::String& value) { m_directoryIdHasBeenSet = true; m_directoryId = value; }

    /**
     * <p>The Directory ID of the AWS Managed Microsoft AD directory for which to
     * establish the trust relationship.</p>
     */
    inline void SetDirectoryId(Aws::String&& value) { m_directoryIdHasBeenSet = true; m_directoryId = std::move(value); }

    /**
     * <p>The Directory ID of the AWS Managed Microsoft AD directory for which to
     * establish the trust relationship.</p>
     */
    inline void SetDirectoryId(const char* value) { m_directoryIdHasBeenSet = true; m_directoryId.assign(value); }

    /**
     * <p>The Directory ID of the AWS Managed Microsoft AD directory for which to
     * establish the trust relationship.</p>
     */
    inline CreateTrustRequest& WithDirectoryId(const Aws::String& value) { SetDirectoryId(value); return *this;}

    /**
     * <p>The Directory ID of the AWS Managed Microsoft AD directory for which to
     * establish the trust relationship.</p>
     */
    inline CreateTrustRequest& WithDirectoryId(Aws::String&& value) { SetDirectoryId(std::move(value)); return *this;}

    /**
     * <p>The Directory ID of the AWS Managed Microsoft AD directory for which to
     * establish the trust relationship.</p>
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
    inline bool RemoteDomainNameHasBeenSet() const { return m_remoteDomainNameHasBeenSet; }

    /**
     * <p>The Fully Qualified Domain Name (FQDN) of the external domain for which to
     * create the trust relationship.</p>
     */
    inline void SetRemoteDomainName(const Aws::String& value) { m_remoteDomainNameHasBeenSet = true; m_remoteDomainName = value; }

    /**
     * <p>The Fully Qualified Domain Name (FQDN) of the external domain for which to
     * create the trust relationship.</p>
     */
    inline void SetRemoteDomainName(Aws::String&& value) { m_remoteDomainNameHasBeenSet = true; m_remoteDomainName = std::move(value); }

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
    inline CreateTrustRequest& WithRemoteDomainName(Aws::String&& value) { SetRemoteDomainName(std::move(value)); return *this;}

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
    inline bool TrustPasswordHasBeenSet() const { return m_trustPasswordHasBeenSet; }

    /**
     * <p>The trust password. The must be the same password that was used when creating
     * the trust relationship on the external domain.</p>
     */
    inline void SetTrustPassword(const Aws::String& value) { m_trustPasswordHasBeenSet = true; m_trustPassword = value; }

    /**
     * <p>The trust password. The must be the same password that was used when creating
     * the trust relationship on the external domain.</p>
     */
    inline void SetTrustPassword(Aws::String&& value) { m_trustPasswordHasBeenSet = true; m_trustPassword = std::move(value); }

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
    inline CreateTrustRequest& WithTrustPassword(Aws::String&& value) { SetTrustPassword(std::move(value)); return *this;}

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
    inline bool TrustDirectionHasBeenSet() const { return m_trustDirectionHasBeenSet; }

    /**
     * <p>The direction of the trust relationship.</p>
     */
    inline void SetTrustDirection(const TrustDirection& value) { m_trustDirectionHasBeenSet = true; m_trustDirection = value; }

    /**
     * <p>The direction of the trust relationship.</p>
     */
    inline void SetTrustDirection(TrustDirection&& value) { m_trustDirectionHasBeenSet = true; m_trustDirection = std::move(value); }

    /**
     * <p>The direction of the trust relationship.</p>
     */
    inline CreateTrustRequest& WithTrustDirection(const TrustDirection& value) { SetTrustDirection(value); return *this;}

    /**
     * <p>The direction of the trust relationship.</p>
     */
    inline CreateTrustRequest& WithTrustDirection(TrustDirection&& value) { SetTrustDirection(std::move(value)); return *this;}


    /**
     * <p>The trust relationship type. <code>Forest</code> is the default.</p>
     */
    inline const TrustType& GetTrustType() const{ return m_trustType; }

    /**
     * <p>The trust relationship type. <code>Forest</code> is the default.</p>
     */
    inline bool TrustTypeHasBeenSet() const { return m_trustTypeHasBeenSet; }

    /**
     * <p>The trust relationship type. <code>Forest</code> is the default.</p>
     */
    inline void SetTrustType(const TrustType& value) { m_trustTypeHasBeenSet = true; m_trustType = value; }

    /**
     * <p>The trust relationship type. <code>Forest</code> is the default.</p>
     */
    inline void SetTrustType(TrustType&& value) { m_trustTypeHasBeenSet = true; m_trustType = std::move(value); }

    /**
     * <p>The trust relationship type. <code>Forest</code> is the default.</p>
     */
    inline CreateTrustRequest& WithTrustType(const TrustType& value) { SetTrustType(value); return *this;}

    /**
     * <p>The trust relationship type. <code>Forest</code> is the default.</p>
     */
    inline CreateTrustRequest& WithTrustType(TrustType&& value) { SetTrustType(std::move(value)); return *this;}


    /**
     * <p>The IP addresses of the remote DNS server associated with
     * RemoteDomainName.</p>
     */
    inline const Aws::Vector<Aws::String>& GetConditionalForwarderIpAddrs() const{ return m_conditionalForwarderIpAddrs; }

    /**
     * <p>The IP addresses of the remote DNS server associated with
     * RemoteDomainName.</p>
     */
    inline bool ConditionalForwarderIpAddrsHasBeenSet() const { return m_conditionalForwarderIpAddrsHasBeenSet; }

    /**
     * <p>The IP addresses of the remote DNS server associated with
     * RemoteDomainName.</p>
     */
    inline void SetConditionalForwarderIpAddrs(const Aws::Vector<Aws::String>& value) { m_conditionalForwarderIpAddrsHasBeenSet = true; m_conditionalForwarderIpAddrs = value; }

    /**
     * <p>The IP addresses of the remote DNS server associated with
     * RemoteDomainName.</p>
     */
    inline void SetConditionalForwarderIpAddrs(Aws::Vector<Aws::String>&& value) { m_conditionalForwarderIpAddrsHasBeenSet = true; m_conditionalForwarderIpAddrs = std::move(value); }

    /**
     * <p>The IP addresses of the remote DNS server associated with
     * RemoteDomainName.</p>
     */
    inline CreateTrustRequest& WithConditionalForwarderIpAddrs(const Aws::Vector<Aws::String>& value) { SetConditionalForwarderIpAddrs(value); return *this;}

    /**
     * <p>The IP addresses of the remote DNS server associated with
     * RemoteDomainName.</p>
     */
    inline CreateTrustRequest& WithConditionalForwarderIpAddrs(Aws::Vector<Aws::String>&& value) { SetConditionalForwarderIpAddrs(std::move(value)); return *this;}

    /**
     * <p>The IP addresses of the remote DNS server associated with
     * RemoteDomainName.</p>
     */
    inline CreateTrustRequest& AddConditionalForwarderIpAddrs(const Aws::String& value) { m_conditionalForwarderIpAddrsHasBeenSet = true; m_conditionalForwarderIpAddrs.push_back(value); return *this; }

    /**
     * <p>The IP addresses of the remote DNS server associated with
     * RemoteDomainName.</p>
     */
    inline CreateTrustRequest& AddConditionalForwarderIpAddrs(Aws::String&& value) { m_conditionalForwarderIpAddrsHasBeenSet = true; m_conditionalForwarderIpAddrs.push_back(std::move(value)); return *this; }

    /**
     * <p>The IP addresses of the remote DNS server associated with
     * RemoteDomainName.</p>
     */
    inline CreateTrustRequest& AddConditionalForwarderIpAddrs(const char* value) { m_conditionalForwarderIpAddrsHasBeenSet = true; m_conditionalForwarderIpAddrs.push_back(value); return *this; }


    /**
     * <p>Optional parameter to enable selective authentication for the trust.</p>
     */
    inline const SelectiveAuth& GetSelectiveAuth() const{ return m_selectiveAuth; }

    /**
     * <p>Optional parameter to enable selective authentication for the trust.</p>
     */
    inline bool SelectiveAuthHasBeenSet() const { return m_selectiveAuthHasBeenSet; }

    /**
     * <p>Optional parameter to enable selective authentication for the trust.</p>
     */
    inline void SetSelectiveAuth(const SelectiveAuth& value) { m_selectiveAuthHasBeenSet = true; m_selectiveAuth = value; }

    /**
     * <p>Optional parameter to enable selective authentication for the trust.</p>
     */
    inline void SetSelectiveAuth(SelectiveAuth&& value) { m_selectiveAuthHasBeenSet = true; m_selectiveAuth = std::move(value); }

    /**
     * <p>Optional parameter to enable selective authentication for the trust.</p>
     */
    inline CreateTrustRequest& WithSelectiveAuth(const SelectiveAuth& value) { SetSelectiveAuth(value); return *this;}

    /**
     * <p>Optional parameter to enable selective authentication for the trust.</p>
     */
    inline CreateTrustRequest& WithSelectiveAuth(SelectiveAuth&& value) { SetSelectiveAuth(std::move(value)); return *this;}

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

    SelectiveAuth m_selectiveAuth;
    bool m_selectiveAuthHasBeenSet;
  };

} // namespace Model
} // namespace DirectoryService
} // namespace Aws
