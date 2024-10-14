/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/awstransfer/Transfer_EXPORTS.h>
#include <aws/awstransfer/TransferRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace Transfer
{
namespace Model
{

  /**
   */
  class StartFileTransferRequest : public TransferRequest
  {
  public:
    AWS_TRANSFER_API StartFileTransferRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StartFileTransfer"; }

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
    inline StartFileTransferRequest& WithConnectorId(const Aws::String& value) { SetConnectorId(value); return *this;}
    inline StartFileTransferRequest& WithConnectorId(Aws::String&& value) { SetConnectorId(std::move(value)); return *this;}
    inline StartFileTransferRequest& WithConnectorId(const char* value) { SetConnectorId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>One or more source paths for the Amazon S3 storage. Each string represents a
     * source file path for one outbound file transfer. For example, <code>
     * <i>amzn-s3-demo-bucket</i>/<i>myfile.txt</i> </code>.</p>  <p>Replace
     * <code> <i>amzn-s3-demo-bucket</i> </code> with one of your actual buckets.</p>
     * 
     */
    inline const Aws::Vector<Aws::String>& GetSendFilePaths() const{ return m_sendFilePaths; }
    inline bool SendFilePathsHasBeenSet() const { return m_sendFilePathsHasBeenSet; }
    inline void SetSendFilePaths(const Aws::Vector<Aws::String>& value) { m_sendFilePathsHasBeenSet = true; m_sendFilePaths = value; }
    inline void SetSendFilePaths(Aws::Vector<Aws::String>&& value) { m_sendFilePathsHasBeenSet = true; m_sendFilePaths = std::move(value); }
    inline StartFileTransferRequest& WithSendFilePaths(const Aws::Vector<Aws::String>& value) { SetSendFilePaths(value); return *this;}
    inline StartFileTransferRequest& WithSendFilePaths(Aws::Vector<Aws::String>&& value) { SetSendFilePaths(std::move(value)); return *this;}
    inline StartFileTransferRequest& AddSendFilePaths(const Aws::String& value) { m_sendFilePathsHasBeenSet = true; m_sendFilePaths.push_back(value); return *this; }
    inline StartFileTransferRequest& AddSendFilePaths(Aws::String&& value) { m_sendFilePathsHasBeenSet = true; m_sendFilePaths.push_back(std::move(value)); return *this; }
    inline StartFileTransferRequest& AddSendFilePaths(const char* value) { m_sendFilePathsHasBeenSet = true; m_sendFilePaths.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>One or more source paths for the partner's SFTP server. Each string
     * represents a source file path for one inbound file transfer.</p>
     */
    inline const Aws::Vector<Aws::String>& GetRetrieveFilePaths() const{ return m_retrieveFilePaths; }
    inline bool RetrieveFilePathsHasBeenSet() const { return m_retrieveFilePathsHasBeenSet; }
    inline void SetRetrieveFilePaths(const Aws::Vector<Aws::String>& value) { m_retrieveFilePathsHasBeenSet = true; m_retrieveFilePaths = value; }
    inline void SetRetrieveFilePaths(Aws::Vector<Aws::String>&& value) { m_retrieveFilePathsHasBeenSet = true; m_retrieveFilePaths = std::move(value); }
    inline StartFileTransferRequest& WithRetrieveFilePaths(const Aws::Vector<Aws::String>& value) { SetRetrieveFilePaths(value); return *this;}
    inline StartFileTransferRequest& WithRetrieveFilePaths(Aws::Vector<Aws::String>&& value) { SetRetrieveFilePaths(std::move(value)); return *this;}
    inline StartFileTransferRequest& AddRetrieveFilePaths(const Aws::String& value) { m_retrieveFilePathsHasBeenSet = true; m_retrieveFilePaths.push_back(value); return *this; }
    inline StartFileTransferRequest& AddRetrieveFilePaths(Aws::String&& value) { m_retrieveFilePathsHasBeenSet = true; m_retrieveFilePaths.push_back(std::move(value)); return *this; }
    inline StartFileTransferRequest& AddRetrieveFilePaths(const char* value) { m_retrieveFilePathsHasBeenSet = true; m_retrieveFilePaths.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>For an inbound transfer, the <code>LocaDirectoryPath</code> specifies the
     * destination for one or more files that are transferred from the partner's SFTP
     * server.</p>
     */
    inline const Aws::String& GetLocalDirectoryPath() const{ return m_localDirectoryPath; }
    inline bool LocalDirectoryPathHasBeenSet() const { return m_localDirectoryPathHasBeenSet; }
    inline void SetLocalDirectoryPath(const Aws::String& value) { m_localDirectoryPathHasBeenSet = true; m_localDirectoryPath = value; }
    inline void SetLocalDirectoryPath(Aws::String&& value) { m_localDirectoryPathHasBeenSet = true; m_localDirectoryPath = std::move(value); }
    inline void SetLocalDirectoryPath(const char* value) { m_localDirectoryPathHasBeenSet = true; m_localDirectoryPath.assign(value); }
    inline StartFileTransferRequest& WithLocalDirectoryPath(const Aws::String& value) { SetLocalDirectoryPath(value); return *this;}
    inline StartFileTransferRequest& WithLocalDirectoryPath(Aws::String&& value) { SetLocalDirectoryPath(std::move(value)); return *this;}
    inline StartFileTransferRequest& WithLocalDirectoryPath(const char* value) { SetLocalDirectoryPath(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>For an outbound transfer, the <code>RemoteDirectoryPath</code> specifies the
     * destination for one or more files that are transferred to the partner's SFTP
     * server. If you don't specify a <code>RemoteDirectoryPath</code>, the destination
     * for transferred files is the SFTP user's home directory.</p>
     */
    inline const Aws::String& GetRemoteDirectoryPath() const{ return m_remoteDirectoryPath; }
    inline bool RemoteDirectoryPathHasBeenSet() const { return m_remoteDirectoryPathHasBeenSet; }
    inline void SetRemoteDirectoryPath(const Aws::String& value) { m_remoteDirectoryPathHasBeenSet = true; m_remoteDirectoryPath = value; }
    inline void SetRemoteDirectoryPath(Aws::String&& value) { m_remoteDirectoryPathHasBeenSet = true; m_remoteDirectoryPath = std::move(value); }
    inline void SetRemoteDirectoryPath(const char* value) { m_remoteDirectoryPathHasBeenSet = true; m_remoteDirectoryPath.assign(value); }
    inline StartFileTransferRequest& WithRemoteDirectoryPath(const Aws::String& value) { SetRemoteDirectoryPath(value); return *this;}
    inline StartFileTransferRequest& WithRemoteDirectoryPath(Aws::String&& value) { SetRemoteDirectoryPath(std::move(value)); return *this;}
    inline StartFileTransferRequest& WithRemoteDirectoryPath(const char* value) { SetRemoteDirectoryPath(value); return *this;}
    ///@}
  private:

    Aws::String m_connectorId;
    bool m_connectorIdHasBeenSet = false;

    Aws::Vector<Aws::String> m_sendFilePaths;
    bool m_sendFilePathsHasBeenSet = false;

    Aws::Vector<Aws::String> m_retrieveFilePaths;
    bool m_retrieveFilePathsHasBeenSet = false;

    Aws::String m_localDirectoryPath;
    bool m_localDirectoryPathHasBeenSet = false;

    Aws::String m_remoteDirectoryPath;
    bool m_remoteDirectoryPathHasBeenSet = false;
  };

} // namespace Model
} // namespace Transfer
} // namespace Aws
