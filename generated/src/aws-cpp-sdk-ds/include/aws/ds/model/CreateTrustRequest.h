/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
   * <p>Directory Service for Microsoft Active Directory allows you to configure
   * trust relationships. For example, you can establish a trust between your Managed
   * Microsoft AD directory, and your existing self-managed Microsoft Active
   * Directory. This would allow you to provide users and groups access to resources
   * in either domain, with a single set of credentials.</p> <p>This action initiates
   * the creation of the Amazon Web Services side of a trust relationship between an
   * Managed Microsoft AD directory and an external domain.</p><p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ds-2015-04-16/CreateTrustRequest">AWS
   * API Reference</a></p>
   */
  class CreateTrustRequest : public DirectoryServiceRequest
  {
  public:
    AWS_DIRECTORYSERVICE_API CreateTrustRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateTrust"; }

    AWS_DIRECTORYSERVICE_API Aws::String SerializePayload() const override;

    AWS_DIRECTORYSERVICE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The Directory ID of the Managed Microsoft AD directory for which to establish
     * the trust relationship.</p>
     */
    inline const Aws::String& GetDirectoryId() const { return m_directoryId; }
    inline bool DirectoryIdHasBeenSet() const { return m_directoryIdHasBeenSet; }
    template<typename DirectoryIdT = Aws::String>
    void SetDirectoryId(DirectoryIdT&& value) { m_directoryIdHasBeenSet = true; m_directoryId = std::forward<DirectoryIdT>(value); }
    template<typename DirectoryIdT = Aws::String>
    CreateTrustRequest& WithDirectoryId(DirectoryIdT&& value) { SetDirectoryId(std::forward<DirectoryIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Fully Qualified Domain Name (FQDN) of the external domain for which to
     * create the trust relationship.</p>
     */
    inline const Aws::String& GetRemoteDomainName() const { return m_remoteDomainName; }
    inline bool RemoteDomainNameHasBeenSet() const { return m_remoteDomainNameHasBeenSet; }
    template<typename RemoteDomainNameT = Aws::String>
    void SetRemoteDomainName(RemoteDomainNameT&& value) { m_remoteDomainNameHasBeenSet = true; m_remoteDomainName = std::forward<RemoteDomainNameT>(value); }
    template<typename RemoteDomainNameT = Aws::String>
    CreateTrustRequest& WithRemoteDomainName(RemoteDomainNameT&& value) { SetRemoteDomainName(std::forward<RemoteDomainNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The trust password. The trust password must be the same password that was
     * used when creating the trust relationship on the external domain.</p>
     */
    inline const Aws::String& GetTrustPassword() const { return m_trustPassword; }
    inline bool TrustPasswordHasBeenSet() const { return m_trustPasswordHasBeenSet; }
    template<typename TrustPasswordT = Aws::String>
    void SetTrustPassword(TrustPasswordT&& value) { m_trustPasswordHasBeenSet = true; m_trustPassword = std::forward<TrustPasswordT>(value); }
    template<typename TrustPasswordT = Aws::String>
    CreateTrustRequest& WithTrustPassword(TrustPasswordT&& value) { SetTrustPassword(std::forward<TrustPasswordT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The direction of the trust relationship.</p>
     */
    inline TrustDirection GetTrustDirection() const { return m_trustDirection; }
    inline bool TrustDirectionHasBeenSet() const { return m_trustDirectionHasBeenSet; }
    inline void SetTrustDirection(TrustDirection value) { m_trustDirectionHasBeenSet = true; m_trustDirection = value; }
    inline CreateTrustRequest& WithTrustDirection(TrustDirection value) { SetTrustDirection(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The trust relationship type. <code>Forest</code> is the default.</p>
     */
    inline TrustType GetTrustType() const { return m_trustType; }
    inline bool TrustTypeHasBeenSet() const { return m_trustTypeHasBeenSet; }
    inline void SetTrustType(TrustType value) { m_trustTypeHasBeenSet = true; m_trustType = value; }
    inline CreateTrustRequest& WithTrustType(TrustType value) { SetTrustType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IP addresses of the remote DNS server associated with
     * RemoteDomainName.</p>
     */
    inline const Aws::Vector<Aws::String>& GetConditionalForwarderIpAddrs() const { return m_conditionalForwarderIpAddrs; }
    inline bool ConditionalForwarderIpAddrsHasBeenSet() const { return m_conditionalForwarderIpAddrsHasBeenSet; }
    template<typename ConditionalForwarderIpAddrsT = Aws::Vector<Aws::String>>
    void SetConditionalForwarderIpAddrs(ConditionalForwarderIpAddrsT&& value) { m_conditionalForwarderIpAddrsHasBeenSet = true; m_conditionalForwarderIpAddrs = std::forward<ConditionalForwarderIpAddrsT>(value); }
    template<typename ConditionalForwarderIpAddrsT = Aws::Vector<Aws::String>>
    CreateTrustRequest& WithConditionalForwarderIpAddrs(ConditionalForwarderIpAddrsT&& value) { SetConditionalForwarderIpAddrs(std::forward<ConditionalForwarderIpAddrsT>(value)); return *this;}
    template<typename ConditionalForwarderIpAddrsT = Aws::String>
    CreateTrustRequest& AddConditionalForwarderIpAddrs(ConditionalForwarderIpAddrsT&& value) { m_conditionalForwarderIpAddrsHasBeenSet = true; m_conditionalForwarderIpAddrs.emplace_back(std::forward<ConditionalForwarderIpAddrsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Optional parameter to enable selective authentication for the trust.</p>
     */
    inline SelectiveAuth GetSelectiveAuth() const { return m_selectiveAuth; }
    inline bool SelectiveAuthHasBeenSet() const { return m_selectiveAuthHasBeenSet; }
    inline void SetSelectiveAuth(SelectiveAuth value) { m_selectiveAuthHasBeenSet = true; m_selectiveAuth = value; }
    inline CreateTrustRequest& WithSelectiveAuth(SelectiveAuth value) { SetSelectiveAuth(value); return *this;}
    ///@}
  private:

    Aws::String m_directoryId;
    bool m_directoryIdHasBeenSet = false;

    Aws::String m_remoteDomainName;
    bool m_remoteDomainNameHasBeenSet = false;

    Aws::String m_trustPassword;
    bool m_trustPasswordHasBeenSet = false;

    TrustDirection m_trustDirection{TrustDirection::NOT_SET};
    bool m_trustDirectionHasBeenSet = false;

    TrustType m_trustType{TrustType::NOT_SET};
    bool m_trustTypeHasBeenSet = false;

    Aws::Vector<Aws::String> m_conditionalForwarderIpAddrs;
    bool m_conditionalForwarderIpAddrsHasBeenSet = false;

    SelectiveAuth m_selectiveAuth{SelectiveAuth::NOT_SET};
    bool m_selectiveAuthHasBeenSet = false;
  };

} // namespace Model
} // namespace DirectoryService
} // namespace Aws
