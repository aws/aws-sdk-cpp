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


    /**
     * <p>The unique identifier for the connector.</p>
     */
    inline const Aws::String& GetConnectorId() const{ return m_connectorId; }

    /**
     * <p>The unique identifier for the connector.</p>
     */
    inline bool ConnectorIdHasBeenSet() const { return m_connectorIdHasBeenSet; }

    /**
     * <p>The unique identifier for the connector.</p>
     */
    inline void SetConnectorId(const Aws::String& value) { m_connectorIdHasBeenSet = true; m_connectorId = value; }

    /**
     * <p>The unique identifier for the connector.</p>
     */
    inline void SetConnectorId(Aws::String&& value) { m_connectorIdHasBeenSet = true; m_connectorId = std::move(value); }

    /**
     * <p>The unique identifier for the connector.</p>
     */
    inline void SetConnectorId(const char* value) { m_connectorIdHasBeenSet = true; m_connectorId.assign(value); }

    /**
     * <p>The unique identifier for the connector.</p>
     */
    inline StartDirectoryListingRequest& WithConnectorId(const Aws::String& value) { SetConnectorId(value); return *this;}

    /**
     * <p>The unique identifier for the connector.</p>
     */
    inline StartDirectoryListingRequest& WithConnectorId(Aws::String&& value) { SetConnectorId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier for the connector.</p>
     */
    inline StartDirectoryListingRequest& WithConnectorId(const char* value) { SetConnectorId(value); return *this;}


    /**
     * <p>Specifies the directory on the remote SFTP server for which you want to list
     * its contents.</p>
     */
    inline const Aws::String& GetRemoteDirectoryPath() const{ return m_remoteDirectoryPath; }

    /**
     * <p>Specifies the directory on the remote SFTP server for which you want to list
     * its contents.</p>
     */
    inline bool RemoteDirectoryPathHasBeenSet() const { return m_remoteDirectoryPathHasBeenSet; }

    /**
     * <p>Specifies the directory on the remote SFTP server for which you want to list
     * its contents.</p>
     */
    inline void SetRemoteDirectoryPath(const Aws::String& value) { m_remoteDirectoryPathHasBeenSet = true; m_remoteDirectoryPath = value; }

    /**
     * <p>Specifies the directory on the remote SFTP server for which you want to list
     * its contents.</p>
     */
    inline void SetRemoteDirectoryPath(Aws::String&& value) { m_remoteDirectoryPathHasBeenSet = true; m_remoteDirectoryPath = std::move(value); }

    /**
     * <p>Specifies the directory on the remote SFTP server for which you want to list
     * its contents.</p>
     */
    inline void SetRemoteDirectoryPath(const char* value) { m_remoteDirectoryPathHasBeenSet = true; m_remoteDirectoryPath.assign(value); }

    /**
     * <p>Specifies the directory on the remote SFTP server for which you want to list
     * its contents.</p>
     */
    inline StartDirectoryListingRequest& WithRemoteDirectoryPath(const Aws::String& value) { SetRemoteDirectoryPath(value); return *this;}

    /**
     * <p>Specifies the directory on the remote SFTP server for which you want to list
     * its contents.</p>
     */
    inline StartDirectoryListingRequest& WithRemoteDirectoryPath(Aws::String&& value) { SetRemoteDirectoryPath(std::move(value)); return *this;}

    /**
     * <p>Specifies the directory on the remote SFTP server for which you want to list
     * its contents.</p>
     */
    inline StartDirectoryListingRequest& WithRemoteDirectoryPath(const char* value) { SetRemoteDirectoryPath(value); return *this;}


    /**
     * <p>An optional parameter where you can specify the maximum number of
     * file/directory names to retrieve. The default value is 1,000.</p>
     */
    inline int GetMaxItems() const{ return m_maxItems; }

    /**
     * <p>An optional parameter where you can specify the maximum number of
     * file/directory names to retrieve. The default value is 1,000.</p>
     */
    inline bool MaxItemsHasBeenSet() const { return m_maxItemsHasBeenSet; }

    /**
     * <p>An optional parameter where you can specify the maximum number of
     * file/directory names to retrieve. The default value is 1,000.</p>
     */
    inline void SetMaxItems(int value) { m_maxItemsHasBeenSet = true; m_maxItems = value; }

    /**
     * <p>An optional parameter where you can specify the maximum number of
     * file/directory names to retrieve. The default value is 1,000.</p>
     */
    inline StartDirectoryListingRequest& WithMaxItems(int value) { SetMaxItems(value); return *this;}


    /**
     * <p>Specifies the path (bucket and prefix) in Amazon S3 storage to store the
     * results of the directory listing.</p>
     */
    inline const Aws::String& GetOutputDirectoryPath() const{ return m_outputDirectoryPath; }

    /**
     * <p>Specifies the path (bucket and prefix) in Amazon S3 storage to store the
     * results of the directory listing.</p>
     */
    inline bool OutputDirectoryPathHasBeenSet() const { return m_outputDirectoryPathHasBeenSet; }

    /**
     * <p>Specifies the path (bucket and prefix) in Amazon S3 storage to store the
     * results of the directory listing.</p>
     */
    inline void SetOutputDirectoryPath(const Aws::String& value) { m_outputDirectoryPathHasBeenSet = true; m_outputDirectoryPath = value; }

    /**
     * <p>Specifies the path (bucket and prefix) in Amazon S3 storage to store the
     * results of the directory listing.</p>
     */
    inline void SetOutputDirectoryPath(Aws::String&& value) { m_outputDirectoryPathHasBeenSet = true; m_outputDirectoryPath = std::move(value); }

    /**
     * <p>Specifies the path (bucket and prefix) in Amazon S3 storage to store the
     * results of the directory listing.</p>
     */
    inline void SetOutputDirectoryPath(const char* value) { m_outputDirectoryPathHasBeenSet = true; m_outputDirectoryPath.assign(value); }

    /**
     * <p>Specifies the path (bucket and prefix) in Amazon S3 storage to store the
     * results of the directory listing.</p>
     */
    inline StartDirectoryListingRequest& WithOutputDirectoryPath(const Aws::String& value) { SetOutputDirectoryPath(value); return *this;}

    /**
     * <p>Specifies the path (bucket and prefix) in Amazon S3 storage to store the
     * results of the directory listing.</p>
     */
    inline StartDirectoryListingRequest& WithOutputDirectoryPath(Aws::String&& value) { SetOutputDirectoryPath(std::move(value)); return *this;}

    /**
     * <p>Specifies the path (bucket and prefix) in Amazon S3 storage to store the
     * results of the directory listing.</p>
     */
    inline StartDirectoryListingRequest& WithOutputDirectoryPath(const char* value) { SetOutputDirectoryPath(value); return *this;}

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
