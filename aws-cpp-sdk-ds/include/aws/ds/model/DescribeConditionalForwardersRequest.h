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
   * <p>Describes a conditional forwarder.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ds-2015-04-16/DescribeConditionalForwardersRequest">AWS
   * API Reference</a></p>
   */
  class DescribeConditionalForwardersRequest : public DirectoryServiceRequest
  {
  public:
    AWS_DIRECTORYSERVICE_API DescribeConditionalForwardersRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeConditionalForwarders"; }

    AWS_DIRECTORYSERVICE_API Aws::String SerializePayload() const override;

    AWS_DIRECTORYSERVICE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The directory ID for which to get the list of associated conditional
     * forwarders.</p>
     */
    inline const Aws::String& GetDirectoryId() const{ return m_directoryId; }

    /**
     * <p>The directory ID for which to get the list of associated conditional
     * forwarders.</p>
     */
    inline bool DirectoryIdHasBeenSet() const { return m_directoryIdHasBeenSet; }

    /**
     * <p>The directory ID for which to get the list of associated conditional
     * forwarders.</p>
     */
    inline void SetDirectoryId(const Aws::String& value) { m_directoryIdHasBeenSet = true; m_directoryId = value; }

    /**
     * <p>The directory ID for which to get the list of associated conditional
     * forwarders.</p>
     */
    inline void SetDirectoryId(Aws::String&& value) { m_directoryIdHasBeenSet = true; m_directoryId = std::move(value); }

    /**
     * <p>The directory ID for which to get the list of associated conditional
     * forwarders.</p>
     */
    inline void SetDirectoryId(const char* value) { m_directoryIdHasBeenSet = true; m_directoryId.assign(value); }

    /**
     * <p>The directory ID for which to get the list of associated conditional
     * forwarders.</p>
     */
    inline DescribeConditionalForwardersRequest& WithDirectoryId(const Aws::String& value) { SetDirectoryId(value); return *this;}

    /**
     * <p>The directory ID for which to get the list of associated conditional
     * forwarders.</p>
     */
    inline DescribeConditionalForwardersRequest& WithDirectoryId(Aws::String&& value) { SetDirectoryId(std::move(value)); return *this;}

    /**
     * <p>The directory ID for which to get the list of associated conditional
     * forwarders.</p>
     */
    inline DescribeConditionalForwardersRequest& WithDirectoryId(const char* value) { SetDirectoryId(value); return *this;}


    /**
     * <p>The fully qualified domain names (FQDN) of the remote domains for which to
     * get the list of associated conditional forwarders. If this member is null, all
     * conditional forwarders are returned.</p>
     */
    inline const Aws::Vector<Aws::String>& GetRemoteDomainNames() const{ return m_remoteDomainNames; }

    /**
     * <p>The fully qualified domain names (FQDN) of the remote domains for which to
     * get the list of associated conditional forwarders. If this member is null, all
     * conditional forwarders are returned.</p>
     */
    inline bool RemoteDomainNamesHasBeenSet() const { return m_remoteDomainNamesHasBeenSet; }

    /**
     * <p>The fully qualified domain names (FQDN) of the remote domains for which to
     * get the list of associated conditional forwarders. If this member is null, all
     * conditional forwarders are returned.</p>
     */
    inline void SetRemoteDomainNames(const Aws::Vector<Aws::String>& value) { m_remoteDomainNamesHasBeenSet = true; m_remoteDomainNames = value; }

    /**
     * <p>The fully qualified domain names (FQDN) of the remote domains for which to
     * get the list of associated conditional forwarders. If this member is null, all
     * conditional forwarders are returned.</p>
     */
    inline void SetRemoteDomainNames(Aws::Vector<Aws::String>&& value) { m_remoteDomainNamesHasBeenSet = true; m_remoteDomainNames = std::move(value); }

    /**
     * <p>The fully qualified domain names (FQDN) of the remote domains for which to
     * get the list of associated conditional forwarders. If this member is null, all
     * conditional forwarders are returned.</p>
     */
    inline DescribeConditionalForwardersRequest& WithRemoteDomainNames(const Aws::Vector<Aws::String>& value) { SetRemoteDomainNames(value); return *this;}

    /**
     * <p>The fully qualified domain names (FQDN) of the remote domains for which to
     * get the list of associated conditional forwarders. If this member is null, all
     * conditional forwarders are returned.</p>
     */
    inline DescribeConditionalForwardersRequest& WithRemoteDomainNames(Aws::Vector<Aws::String>&& value) { SetRemoteDomainNames(std::move(value)); return *this;}

    /**
     * <p>The fully qualified domain names (FQDN) of the remote domains for which to
     * get the list of associated conditional forwarders. If this member is null, all
     * conditional forwarders are returned.</p>
     */
    inline DescribeConditionalForwardersRequest& AddRemoteDomainNames(const Aws::String& value) { m_remoteDomainNamesHasBeenSet = true; m_remoteDomainNames.push_back(value); return *this; }

    /**
     * <p>The fully qualified domain names (FQDN) of the remote domains for which to
     * get the list of associated conditional forwarders. If this member is null, all
     * conditional forwarders are returned.</p>
     */
    inline DescribeConditionalForwardersRequest& AddRemoteDomainNames(Aws::String&& value) { m_remoteDomainNamesHasBeenSet = true; m_remoteDomainNames.push_back(std::move(value)); return *this; }

    /**
     * <p>The fully qualified domain names (FQDN) of the remote domains for which to
     * get the list of associated conditional forwarders. If this member is null, all
     * conditional forwarders are returned.</p>
     */
    inline DescribeConditionalForwardersRequest& AddRemoteDomainNames(const char* value) { m_remoteDomainNamesHasBeenSet = true; m_remoteDomainNames.push_back(value); return *this; }

  private:

    Aws::String m_directoryId;
    bool m_directoryIdHasBeenSet = false;

    Aws::Vector<Aws::String> m_remoteDomainNames;
    bool m_remoteDomainNamesHasBeenSet = false;
  };

} // namespace Model
} // namespace DirectoryService
} // namespace Aws
