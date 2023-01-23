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
   * <p>Initiates the creation of a conditional forwarder for your Directory Service
   * for Microsoft Active Directory. Conditional forwarders are required in order to
   * set up a trust relationship with another domain.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ds-2015-04-16/CreateConditionalForwarderRequest">AWS
   * API Reference</a></p>
   */
  class CreateConditionalForwarderRequest : public DirectoryServiceRequest
  {
  public:
    AWS_DIRECTORYSERVICE_API CreateConditionalForwarderRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateConditionalForwarder"; }

    AWS_DIRECTORYSERVICE_API Aws::String SerializePayload() const override;

    AWS_DIRECTORYSERVICE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The directory ID of the Amazon Web Services directory for which you are
     * creating the conditional forwarder.</p>
     */
    inline const Aws::String& GetDirectoryId() const{ return m_directoryId; }

    /**
     * <p>The directory ID of the Amazon Web Services directory for which you are
     * creating the conditional forwarder.</p>
     */
    inline bool DirectoryIdHasBeenSet() const { return m_directoryIdHasBeenSet; }

    /**
     * <p>The directory ID of the Amazon Web Services directory for which you are
     * creating the conditional forwarder.</p>
     */
    inline void SetDirectoryId(const Aws::String& value) { m_directoryIdHasBeenSet = true; m_directoryId = value; }

    /**
     * <p>The directory ID of the Amazon Web Services directory for which you are
     * creating the conditional forwarder.</p>
     */
    inline void SetDirectoryId(Aws::String&& value) { m_directoryIdHasBeenSet = true; m_directoryId = std::move(value); }

    /**
     * <p>The directory ID of the Amazon Web Services directory for which you are
     * creating the conditional forwarder.</p>
     */
    inline void SetDirectoryId(const char* value) { m_directoryIdHasBeenSet = true; m_directoryId.assign(value); }

    /**
     * <p>The directory ID of the Amazon Web Services directory for which you are
     * creating the conditional forwarder.</p>
     */
    inline CreateConditionalForwarderRequest& WithDirectoryId(const Aws::String& value) { SetDirectoryId(value); return *this;}

    /**
     * <p>The directory ID of the Amazon Web Services directory for which you are
     * creating the conditional forwarder.</p>
     */
    inline CreateConditionalForwarderRequest& WithDirectoryId(Aws::String&& value) { SetDirectoryId(std::move(value)); return *this;}

    /**
     * <p>The directory ID of the Amazon Web Services directory for which you are
     * creating the conditional forwarder.</p>
     */
    inline CreateConditionalForwarderRequest& WithDirectoryId(const char* value) { SetDirectoryId(value); return *this;}


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
    inline CreateConditionalForwarderRequest& WithRemoteDomainName(const Aws::String& value) { SetRemoteDomainName(value); return *this;}

    /**
     * <p>The fully qualified domain name (FQDN) of the remote domain with which you
     * will set up a trust relationship.</p>
     */
    inline CreateConditionalForwarderRequest& WithRemoteDomainName(Aws::String&& value) { SetRemoteDomainName(std::move(value)); return *this;}

    /**
     * <p>The fully qualified domain name (FQDN) of the remote domain with which you
     * will set up a trust relationship.</p>
     */
    inline CreateConditionalForwarderRequest& WithRemoteDomainName(const char* value) { SetRemoteDomainName(value); return *this;}


    /**
     * <p>The IP addresses of the remote DNS server associated with
     * RemoteDomainName.</p>
     */
    inline const Aws::Vector<Aws::String>& GetDnsIpAddrs() const{ return m_dnsIpAddrs; }

    /**
     * <p>The IP addresses of the remote DNS server associated with
     * RemoteDomainName.</p>
     */
    inline bool DnsIpAddrsHasBeenSet() const { return m_dnsIpAddrsHasBeenSet; }

    /**
     * <p>The IP addresses of the remote DNS server associated with
     * RemoteDomainName.</p>
     */
    inline void SetDnsIpAddrs(const Aws::Vector<Aws::String>& value) { m_dnsIpAddrsHasBeenSet = true; m_dnsIpAddrs = value; }

    /**
     * <p>The IP addresses of the remote DNS server associated with
     * RemoteDomainName.</p>
     */
    inline void SetDnsIpAddrs(Aws::Vector<Aws::String>&& value) { m_dnsIpAddrsHasBeenSet = true; m_dnsIpAddrs = std::move(value); }

    /**
     * <p>The IP addresses of the remote DNS server associated with
     * RemoteDomainName.</p>
     */
    inline CreateConditionalForwarderRequest& WithDnsIpAddrs(const Aws::Vector<Aws::String>& value) { SetDnsIpAddrs(value); return *this;}

    /**
     * <p>The IP addresses of the remote DNS server associated with
     * RemoteDomainName.</p>
     */
    inline CreateConditionalForwarderRequest& WithDnsIpAddrs(Aws::Vector<Aws::String>&& value) { SetDnsIpAddrs(std::move(value)); return *this;}

    /**
     * <p>The IP addresses of the remote DNS server associated with
     * RemoteDomainName.</p>
     */
    inline CreateConditionalForwarderRequest& AddDnsIpAddrs(const Aws::String& value) { m_dnsIpAddrsHasBeenSet = true; m_dnsIpAddrs.push_back(value); return *this; }

    /**
     * <p>The IP addresses of the remote DNS server associated with
     * RemoteDomainName.</p>
     */
    inline CreateConditionalForwarderRequest& AddDnsIpAddrs(Aws::String&& value) { m_dnsIpAddrsHasBeenSet = true; m_dnsIpAddrs.push_back(std::move(value)); return *this; }

    /**
     * <p>The IP addresses of the remote DNS server associated with
     * RemoteDomainName.</p>
     */
    inline CreateConditionalForwarderRequest& AddDnsIpAddrs(const char* value) { m_dnsIpAddrsHasBeenSet = true; m_dnsIpAddrs.push_back(value); return *this; }

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
