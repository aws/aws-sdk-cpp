/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ds/DirectoryService_EXPORTS.h>
#include <aws/ds/DirectoryServiceRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace DirectoryService
{
namespace Model
{

  /**
   * <p>Deletes a conditional forwarder.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ds-2015-04-16/DeleteConditionalForwarderRequest">AWS
   * API Reference</a></p>
   */
  class DeleteConditionalForwarderRequest : public DirectoryServiceRequest
  {
  public:
    AWS_DIRECTORYSERVICE_API DeleteConditionalForwarderRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteConditionalForwarder"; }

    AWS_DIRECTORYSERVICE_API Aws::String SerializePayload() const override;

    AWS_DIRECTORYSERVICE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The directory ID for which you are deleting the conditional forwarder.</p>
     */
    inline const Aws::String& GetDirectoryId() const { return m_directoryId; }
    inline bool DirectoryIdHasBeenSet() const { return m_directoryIdHasBeenSet; }
    template<typename DirectoryIdT = Aws::String>
    void SetDirectoryId(DirectoryIdT&& value) { m_directoryIdHasBeenSet = true; m_directoryId = std::forward<DirectoryIdT>(value); }
    template<typename DirectoryIdT = Aws::String>
    DeleteConditionalForwarderRequest& WithDirectoryId(DirectoryIdT&& value) { SetDirectoryId(std::forward<DirectoryIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The fully qualified domain name (FQDN) of the remote domain with which you
     * are deleting the conditional forwarder.</p>
     */
    inline const Aws::String& GetRemoteDomainName() const { return m_remoteDomainName; }
    inline bool RemoteDomainNameHasBeenSet() const { return m_remoteDomainNameHasBeenSet; }
    template<typename RemoteDomainNameT = Aws::String>
    void SetRemoteDomainName(RemoteDomainNameT&& value) { m_remoteDomainNameHasBeenSet = true; m_remoteDomainName = std::forward<RemoteDomainNameT>(value); }
    template<typename RemoteDomainNameT = Aws::String>
    DeleteConditionalForwarderRequest& WithRemoteDomainName(RemoteDomainNameT&& value) { SetRemoteDomainName(std::forward<RemoteDomainNameT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_directoryId;
    bool m_directoryIdHasBeenSet = false;

    Aws::String m_remoteDomainName;
    bool m_remoteDomainNameHasBeenSet = false;
  };

} // namespace Model
} // namespace DirectoryService
} // namespace Aws
