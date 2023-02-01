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
    AWS_DIRECTORYSERVICE_API UpdateConditionalForwarderRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateConditionalForwarder"; }

    AWS_DIRECTORYSERVICE_API Aws::String SerializePayload() const override;

    AWS_DIRECTORYSERVICE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The directory ID of the Amazon Web Services directory for which to update the
     * conditional forwarder.</p>
     */
    inline const Aws::String& GetDirectoryId() const{ return m_directoryId; }

    /**
     * <p>The directory ID of the Amazon Web Services directory for which to update the
     * conditional forwarder.</p>
     */
    inline bool DirectoryIdHasBeenSet() const { return m_directoryIdHasBeenSet; }

    /**
     * <p>The directory ID of the Amazon Web Services directory for which to update the
     * conditional forwarder.</p>
     */
    inline void SetDirectoryId(const Aws::String& value) { m_directoryIdHasBeenSet = true; m_directoryId = value; }

    /**
     * <p>The directory ID of the Amazon Web Services directory for which to update the
     * conditional forwarder.</p>
     */
    inline void SetDirectoryId(Aws::String&& value) { m_directoryIdHasBeenSet = true; m_directoryId = std::move(value); }

    /**
     * <p>The directory ID of the Amazon Web Services directory for which to update the
     * conditional forwarder.</p>
     */
    inline void SetDirectoryId(const char* value) { m_directoryIdHasBeenSet = true; m_directoryId.assign(value); }

    /**
     * <p>The directory ID of the Amazon Web Services directory for which to update the
     * conditional forwarder.</p>
     */
    inline UpdateConditionalForwarderRequest& WithDirectoryId(const Aws::String& value) { SetDirectoryId(value); return *this;}

    /**
     * <p>The directory ID of the Amazon Web Services directory for which to update the
     * conditional forwarder.</p>
     */
    inline UpdateConditionalForwarderRequest& WithDirectoryId(Aws::String&& value) { SetDirectoryId(std::move(value)); return *this;}

    /**
     * <p>The directory ID of the Amazon Web Services directory for which to update the
     * conditional forwarder.</p>
     */
    inline UpdateConditionalForwarderRequest& WithDirectoryId(const char* value) { SetDirectoryId(value); return *this;}


    /**
     * <p>The fully qualified domain name (FQDN) of the remote domain with which you
     * will set up a trust relationship.</p>
     */
    inline const Aws::String& GetRemoteDomainName() const{ return m_remoteDomainName; }

    /**
     * <p>The fully qualified domain name (FQDN) of the remote domain with which you
     * will set up a trust relationship.</p>
     */
    inline bool RemoteDomainNameHasBeenSet() const { return m_remoteDomainNameHasBeenSet; }

    /**
     * <p>The fully qualified domain name (FQDN) of the remote domain with which you
     * will set up a trust relationship.</p>
     */
    inline void SetRemoteDomainName(const Aws::String& value) { m_remoteDomainNameHasBeenSet = true; m_remoteDomainName = value; }

    /**
     * <p>The fully qualified domain name (FQDN) of the remote domain with which you
     * will set up a trust relationship.</p>
     */
    inline void SetRemoteDomainName(Aws::String&& value) { m_remoteDomainNameHasBeenSet = true; m_remoteDomainName = std::move(value); }

    /**
     * <p>The fully qualified domain name (FQDN) of the remote domain with which you
     * will set up a trust relationship.</p>
     */
    inline void SetRemoteDomainName(const char* value) { m_remoteDomainNameHasBeenSet = true; m_remoteDomainName.assign(value); }

    /**
     * <p>The fully qualified domain name (FQDN) of the remote domain with which you
     * will set up a trust relationship.</p>
     */
    inline UpdateConditionalForwarderRequest& WithRemoteDomainName(const Aws::String& value) { SetRemoteDomainName(value); return *this;}

    /**
     * <p>The fully qualified domain name (FQDN) of the remote domain with which you
     * will set up a trust relationship.</p>
     */
    inline UpdateConditionalForwarderRequest& WithRemoteDomainName(Aws::String&& value) { SetRemoteDomainName(std::move(value)); return *this;}

    /**
     * <p>The fully qualified domain name (FQDN) of the remote domain with which you
     * will set up a trust relationship.</p>
     */
    inline UpdateConditionalForwarderRequest& WithRemoteDomainName(const char* value) { SetRemoteDomainName(value); return *this;}


    /**
     * <p>The updated IP addresses of the remote DNS server associated with the
     * conditional forwarder.</p>
     */
    inline const Aws::Vector<Aws::String>& GetDnsIpAddrs() const{ return m_dnsIpAddrs; }

    /**
     * <p>The updated IP addresses of the remote DNS server associated with the
     * conditional forwarder.</p>
     */
    inline bool DnsIpAddrsHasBeenSet() const { return m_dnsIpAddrsHasBeenSet; }

    /**
     * <p>The updated IP addresses of the remote DNS server associated with the
     * conditional forwarder.</p>
     */
    inline void SetDnsIpAddrs(const Aws::Vector<Aws::String>& value) { m_dnsIpAddrsHasBeenSet = true; m_dnsIpAddrs = value; }

    /**
     * <p>The updated IP addresses of the remote DNS server associated with the
     * conditional forwarder.</p>
     */
    inline void SetDnsIpAddrs(Aws::Vector<Aws::String>&& value) { m_dnsIpAddrsHasBeenSet = true; m_dnsIpAddrs = std::move(value); }

    /**
     * <p>The updated IP addresses of the remote DNS server associated with the
     * conditional forwarder.</p>
     */
    inline UpdateConditionalForwarderRequest& WithDnsIpAddrs(const Aws::Vector<Aws::String>& value) { SetDnsIpAddrs(value); return *this;}

    /**
     * <p>The updated IP addresses of the remote DNS server associated with the
     * conditional forwarder.</p>
     */
    inline UpdateConditionalForwarderRequest& WithDnsIpAddrs(Aws::Vector<Aws::String>&& value) { SetDnsIpAddrs(std::move(value)); return *this;}

    /**
     * <p>The updated IP addresses of the remote DNS server associated with the
     * conditional forwarder.</p>
     */
    inline UpdateConditionalForwarderRequest& AddDnsIpAddrs(const Aws::String& value) { m_dnsIpAddrsHasBeenSet = true; m_dnsIpAddrs.push_back(value); return *this; }

    /**
     * <p>The updated IP addresses of the remote DNS server associated with the
     * conditional forwarder.</p>
     */
    inline UpdateConditionalForwarderRequest& AddDnsIpAddrs(Aws::String&& value) { m_dnsIpAddrsHasBeenSet = true; m_dnsIpAddrs.push_back(std::move(value)); return *this; }

    /**
     * <p>The updated IP addresses of the remote DNS server associated with the
     * conditional forwarder.</p>
     */
    inline UpdateConditionalForwarderRequest& AddDnsIpAddrs(const char* value) { m_dnsIpAddrsHasBeenSet = true; m_dnsIpAddrs.push_back(value); return *this; }

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
