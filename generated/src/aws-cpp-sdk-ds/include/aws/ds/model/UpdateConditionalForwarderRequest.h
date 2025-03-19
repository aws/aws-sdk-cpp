/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ds/DirectoryService_EXPORTS.h>
#include <aws/ds/DirectoryServiceRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace DirectoryService
{
namespace Model
{

  /**
   * <p>Updates a conditional forwarder.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ds-2015-04-16/UpdateConditionalForwarderRequest">AWS
   * API Reference</a></p>
   */
  class UpdateConditionalForwarderRequest : public DirectoryServiceRequest
  {
  public:
    AWS_DIRECTORYSERVICE_API UpdateConditionalForwarderRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateConditionalForwarder"; }

    AWS_DIRECTORYSERVICE_API Aws::String SerializePayload() const override;

    AWS_DIRECTORYSERVICE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The directory ID of the Amazon Web Services directory for which to update the
     * conditional forwarder.</p>
     */
    inline const Aws::String& GetDirectoryId() const { return m_directoryId; }
    inline bool DirectoryIdHasBeenSet() const { return m_directoryIdHasBeenSet; }
    template<typename DirectoryIdT = Aws::String>
    void SetDirectoryId(DirectoryIdT&& value) { m_directoryIdHasBeenSet = true; m_directoryId = std::forward<DirectoryIdT>(value); }
    template<typename DirectoryIdT = Aws::String>
    UpdateConditionalForwarderRequest& WithDirectoryId(DirectoryIdT&& value) { SetDirectoryId(std::forward<DirectoryIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The fully qualified domain name (FQDN) of the remote domain with which you
     * will set up a trust relationship.</p>
     */
    inline const Aws::String& GetRemoteDomainName() const { return m_remoteDomainName; }
    inline bool RemoteDomainNameHasBeenSet() const { return m_remoteDomainNameHasBeenSet; }
    template<typename RemoteDomainNameT = Aws::String>
    void SetRemoteDomainName(RemoteDomainNameT&& value) { m_remoteDomainNameHasBeenSet = true; m_remoteDomainName = std::forward<RemoteDomainNameT>(value); }
    template<typename RemoteDomainNameT = Aws::String>
    UpdateConditionalForwarderRequest& WithRemoteDomainName(RemoteDomainNameT&& value) { SetRemoteDomainName(std::forward<RemoteDomainNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The updated IP addresses of the remote DNS server associated with the
     * conditional forwarder.</p>
     */
    inline const Aws::Vector<Aws::String>& GetDnsIpAddrs() const { return m_dnsIpAddrs; }
    inline bool DnsIpAddrsHasBeenSet() const { return m_dnsIpAddrsHasBeenSet; }
    template<typename DnsIpAddrsT = Aws::Vector<Aws::String>>
    void SetDnsIpAddrs(DnsIpAddrsT&& value) { m_dnsIpAddrsHasBeenSet = true; m_dnsIpAddrs = std::forward<DnsIpAddrsT>(value); }
    template<typename DnsIpAddrsT = Aws::Vector<Aws::String>>
    UpdateConditionalForwarderRequest& WithDnsIpAddrs(DnsIpAddrsT&& value) { SetDnsIpAddrs(std::forward<DnsIpAddrsT>(value)); return *this;}
    template<typename DnsIpAddrsT = Aws::String>
    UpdateConditionalForwarderRequest& AddDnsIpAddrs(DnsIpAddrsT&& value) { m_dnsIpAddrsHasBeenSet = true; m_dnsIpAddrs.emplace_back(std::forward<DnsIpAddrsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_directoryId;
    bool m_directoryIdHasBeenSet = false;

    Aws::String m_remoteDomainName;
    bool m_remoteDomainNameHasBeenSet = false;

    Aws::Vector<Aws::String> m_dnsIpAddrs;
    bool m_dnsIpAddrsHasBeenSet = false;
  };

} // namespace Model
} // namespace DirectoryService
} // namespace Aws
