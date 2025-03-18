/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/awstransfer/Transfer_EXPORTS.h>
#include <aws/awstransfer/TransferRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Transfer
{
namespace Model
{

  /**
   */
  class StartDirectoryListingRequest : public TransferRequest
  {
  public:
    AWS_TRANSFER_API StartDirectoryListingRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StartDirectoryListing"; }

    AWS_TRANSFER_API Aws::String SerializePayload() const override;

    AWS_TRANSFER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The unique identifier for the connector.</p>
     */
    inline const Aws::String& GetConnectorId() const { return m_connectorId; }
    inline bool ConnectorIdHasBeenSet() const { return m_connectorIdHasBeenSet; }
    template<typename ConnectorIdT = Aws::String>
    void SetConnectorId(ConnectorIdT&& value) { m_connectorIdHasBeenSet = true; m_connectorId = std::forward<ConnectorIdT>(value); }
    template<typename ConnectorIdT = Aws::String>
    StartDirectoryListingRequest& WithConnectorId(ConnectorIdT&& value) { SetConnectorId(std::forward<ConnectorIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the directory on the remote SFTP server for which you want to list
     * its contents.</p>
     */
    inline const Aws::String& GetRemoteDirectoryPath() const { return m_remoteDirectoryPath; }
    inline bool RemoteDirectoryPathHasBeenSet() const { return m_remoteDirectoryPathHasBeenSet; }
    template<typename RemoteDirectoryPathT = Aws::String>
    void SetRemoteDirectoryPath(RemoteDirectoryPathT&& value) { m_remoteDirectoryPathHasBeenSet = true; m_remoteDirectoryPath = std::forward<RemoteDirectoryPathT>(value); }
    template<typename RemoteDirectoryPathT = Aws::String>
    StartDirectoryListingRequest& WithRemoteDirectoryPath(RemoteDirectoryPathT&& value) { SetRemoteDirectoryPath(std::forward<RemoteDirectoryPathT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An optional parameter where you can specify the maximum number of
     * file/directory names to retrieve. The default value is 1,000.</p>
     */
    inline int GetMaxItems() const { return m_maxItems; }
    inline bool MaxItemsHasBeenSet() const { return m_maxItemsHasBeenSet; }
    inline void SetMaxItems(int value) { m_maxItemsHasBeenSet = true; m_maxItems = value; }
    inline StartDirectoryListingRequest& WithMaxItems(int value) { SetMaxItems(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the path (bucket and prefix) in Amazon S3 storage to store the
     * results of the directory listing.</p>
     */
    inline const Aws::String& GetOutputDirectoryPath() const { return m_outputDirectoryPath; }
    inline bool OutputDirectoryPathHasBeenSet() const { return m_outputDirectoryPathHasBeenSet; }
    template<typename OutputDirectoryPathT = Aws::String>
    void SetOutputDirectoryPath(OutputDirectoryPathT&& value) { m_outputDirectoryPathHasBeenSet = true; m_outputDirectoryPath = std::forward<OutputDirectoryPathT>(value); }
    template<typename OutputDirectoryPathT = Aws::String>
    StartDirectoryListingRequest& WithOutputDirectoryPath(OutputDirectoryPathT&& value) { SetOutputDirectoryPath(std::forward<OutputDirectoryPathT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_connectorId;
    bool m_connectorIdHasBeenSet = false;

    Aws::String m_remoteDirectoryPath;
    bool m_remoteDirectoryPathHasBeenSet = false;

    int m_maxItems{0};
    bool m_maxItemsHasBeenSet = false;

    Aws::String m_outputDirectoryPath;
    bool m_outputDirectoryPathHasBeenSet = false;
  };

} // namespace Model
} // namespace Transfer
} // namespace Aws
