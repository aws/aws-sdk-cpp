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
    AWS_DIRECTORYSERVICE_API DescribeConditionalForwardersRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeConditionalForwarders"; }

    AWS_DIRECTORYSERVICE_API Aws::String SerializePayload() const override;

    AWS_DIRECTORYSERVICE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The directory ID for which to get the list of associated conditional
     * forwarders.</p>
     */
    inline const Aws::String& GetDirectoryId() const { return m_directoryId; }
    inline bool DirectoryIdHasBeenSet() const { return m_directoryIdHasBeenSet; }
    template<typename DirectoryIdT = Aws::String>
    void SetDirectoryId(DirectoryIdT&& value) { m_directoryIdHasBeenSet = true; m_directoryId = std::forward<DirectoryIdT>(value); }
    template<typename DirectoryIdT = Aws::String>
    DescribeConditionalForwardersRequest& WithDirectoryId(DirectoryIdT&& value) { SetDirectoryId(std::forward<DirectoryIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The fully qualified domain names (FQDN) of the remote domains for which to
     * get the list of associated conditional forwarders. If this member is null, all
     * conditional forwarders are returned.</p>
     */
    inline const Aws::Vector<Aws::String>& GetRemoteDomainNames() const { return m_remoteDomainNames; }
    inline bool RemoteDomainNamesHasBeenSet() const { return m_remoteDomainNamesHasBeenSet; }
    template<typename RemoteDomainNamesT = Aws::Vector<Aws::String>>
    void SetRemoteDomainNames(RemoteDomainNamesT&& value) { m_remoteDomainNamesHasBeenSet = true; m_remoteDomainNames = std::forward<RemoteDomainNamesT>(value); }
    template<typename RemoteDomainNamesT = Aws::Vector<Aws::String>>
    DescribeConditionalForwardersRequest& WithRemoteDomainNames(RemoteDomainNamesT&& value) { SetRemoteDomainNames(std::forward<RemoteDomainNamesT>(value)); return *this;}
    template<typename RemoteDomainNamesT = Aws::String>
    DescribeConditionalForwardersRequest& AddRemoteDomainNames(RemoteDomainNamesT&& value) { m_remoteDomainNamesHasBeenSet = true; m_remoteDomainNames.emplace_back(std::forward<RemoteDomainNamesT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_directoryId;
    bool m_directoryIdHasBeenSet = false;

    Aws::Vector<Aws::String> m_remoteDomainNames;
    bool m_remoteDomainNamesHasBeenSet = false;
  };

} // namespace Model
} // namespace DirectoryService
} // namespace Aws
