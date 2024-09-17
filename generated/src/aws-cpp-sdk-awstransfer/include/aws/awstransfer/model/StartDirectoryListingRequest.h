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
    AWS_TRANSFER_API StartDirectoryListingRequest();

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
    inline const Aws::String& GetConnectorId() const{ return m_connectorId; }
    inline bool ConnectorIdHasBeenSet() const { return m_connectorIdHasBeenSet; }
    inline void SetConnectorId(const Aws::String& value) { m_connectorIdHasBeenSet = true; m_connectorId = value; }
    inline void SetConnectorId(Aws::String&& value) { m_connectorIdHasBeenSet = true; m_connectorId = std::move(value); }
    inline void SetConnectorId(const char* value) { m_connectorIdHasBeenSet = true; m_connectorId.assign(value); }
    inline StartDirectoryListingRequest& WithConnectorId(const Aws::String& value) { SetConnectorId(value); return *this;}
    inline StartDirectoryListingRequest& WithConnectorId(Aws::String&& value) { SetConnectorId(std::move(value)); return *this;}
    inline StartDirectoryListingRequest& WithConnectorId(const char* value) { SetConnectorId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the directory on the remote SFTP server for which you want to list
     * its contents.</p>
     */
    inline const Aws::String& GetRemoteDirectoryPath() const{ return m_remoteDirectoryPath; }
    inline bool RemoteDirectoryPathHasBeenSet() const { return m_remoteDirectoryPathHasBeenSet; }
    inline void SetRemoteDirectoryPath(const Aws::String& value) { m_remoteDirectoryPathHasBeenSet = true; m_remoteDirectoryPath = value; }
    inline void SetRemoteDirectoryPath(Aws::String&& value) { m_remoteDirectoryPathHasBeenSet = true; m_remoteDirectoryPath = std::move(value); }
    inline void SetRemoteDirectoryPath(const char* value) { m_remoteDirectoryPathHasBeenSet = true; m_remoteDirectoryPath.assign(value); }
    inline StartDirectoryListingRequest& WithRemoteDirectoryPath(const Aws::String& value) { SetRemoteDirectoryPath(value); return *this;}
    inline StartDirectoryListingRequest& WithRemoteDirectoryPath(Aws::String&& value) { SetRemoteDirectoryPath(std::move(value)); return *this;}
    inline StartDirectoryListingRequest& WithRemoteDirectoryPath(const char* value) { SetRemoteDirectoryPath(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An optional parameter where you can specify the maximum number of
     * file/directory names to retrieve. The default value is 1,000.</p>
     */
    inline int GetMaxItems() const{ return m_maxItems; }
    inline bool MaxItemsHasBeenSet() const { return m_maxItemsHasBeenSet; }
    inline void SetMaxItems(int value) { m_maxItemsHasBeenSet = true; m_maxItems = value; }
    inline StartDirectoryListingRequest& WithMaxItems(int value) { SetMaxItems(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the path (bucket and prefix) in Amazon S3 storage to store the
     * results of the directory listing.</p>
     */
    inline const Aws::String& GetOutputDirectoryPath() const{ return m_outputDirectoryPath; }
    inline bool OutputDirectoryPathHasBeenSet() const { return m_outputDirectoryPathHasBeenSet; }
    inline void SetOutputDirectoryPath(const Aws::String& value) { m_outputDirectoryPathHasBeenSet = true; m_outputDirectoryPath = value; }
    inline void SetOutputDirectoryPath(Aws::String&& value) { m_outputDirectoryPathHasBeenSet = true; m_outputDirectoryPath = std::move(value); }
    inline void SetOutputDirectoryPath(const char* value) { m_outputDirectoryPathHasBeenSet = true; m_outputDirectoryPath.assign(value); }
    inline StartDirectoryListingRequest& WithOutputDirectoryPath(const Aws::String& value) { SetOutputDirectoryPath(value); return *this;}
    inline StartDirectoryListingRequest& WithOutputDirectoryPath(Aws::String&& value) { SetOutputDirectoryPath(std::move(value)); return *this;}
    inline StartDirectoryListingRequest& WithOutputDirectoryPath(const char* value) { SetOutputDirectoryPath(value); return *this;}
    ///@}
  private:

    Aws::String m_connectorId;
    bool m_connectorIdHasBeenSet = false;

    Aws::String m_remoteDirectoryPath;
    bool m_remoteDirectoryPathHasBeenSet = false;

    int m_maxItems;
    bool m_maxItemsHasBeenSet = false;

    Aws::String m_outputDirectoryPath;
    bool m_outputDirectoryPathHasBeenSet = false;
  };

} // namespace Model
} // namespace Transfer
} // namespace Aws
