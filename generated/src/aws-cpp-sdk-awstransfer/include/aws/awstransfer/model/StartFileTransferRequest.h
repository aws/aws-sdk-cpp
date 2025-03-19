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
    AWS_TRANSFER_API StartFileTransferRequest() = default;

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
    inline const Aws::String& GetConnectorId() const { return m_connectorId; }
    inline bool ConnectorIdHasBeenSet() const { return m_connectorIdHasBeenSet; }
    template<typename ConnectorIdT = Aws::String>
    void SetConnectorId(ConnectorIdT&& value) { m_connectorIdHasBeenSet = true; m_connectorId = std::forward<ConnectorIdT>(value); }
    template<typename ConnectorIdT = Aws::String>
    StartFileTransferRequest& WithConnectorId(ConnectorIdT&& value) { SetConnectorId(std::forward<ConnectorIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>One or more source paths for the Amazon S3 storage. Each string represents a
     * source file path for one outbound file transfer. For example, <code>
     * <i>amzn-s3-demo-bucket</i>/<i>myfile.txt</i> </code>.</p>  <p>Replace
     * <code> <i>amzn-s3-demo-bucket</i> </code> with one of your actual buckets.</p>
     * 
     */
    inline const Aws::Vector<Aws::String>& GetSendFilePaths() const { return m_sendFilePaths; }
    inline bool SendFilePathsHasBeenSet() const { return m_sendFilePathsHasBeenSet; }
    template<typename SendFilePathsT = Aws::Vector<Aws::String>>
    void SetSendFilePaths(SendFilePathsT&& value) { m_sendFilePathsHasBeenSet = true; m_sendFilePaths = std::forward<SendFilePathsT>(value); }
    template<typename SendFilePathsT = Aws::Vector<Aws::String>>
    StartFileTransferRequest& WithSendFilePaths(SendFilePathsT&& value) { SetSendFilePaths(std::forward<SendFilePathsT>(value)); return *this;}
    template<typename SendFilePathsT = Aws::String>
    StartFileTransferRequest& AddSendFilePaths(SendFilePathsT&& value) { m_sendFilePathsHasBeenSet = true; m_sendFilePaths.emplace_back(std::forward<SendFilePathsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>One or more source paths for the partner's SFTP server. Each string
     * represents a source file path for one inbound file transfer.</p>
     */
    inline const Aws::Vector<Aws::String>& GetRetrieveFilePaths() const { return m_retrieveFilePaths; }
    inline bool RetrieveFilePathsHasBeenSet() const { return m_retrieveFilePathsHasBeenSet; }
    template<typename RetrieveFilePathsT = Aws::Vector<Aws::String>>
    void SetRetrieveFilePaths(RetrieveFilePathsT&& value) { m_retrieveFilePathsHasBeenSet = true; m_retrieveFilePaths = std::forward<RetrieveFilePathsT>(value); }
    template<typename RetrieveFilePathsT = Aws::Vector<Aws::String>>
    StartFileTransferRequest& WithRetrieveFilePaths(RetrieveFilePathsT&& value) { SetRetrieveFilePaths(std::forward<RetrieveFilePathsT>(value)); return *this;}
    template<typename RetrieveFilePathsT = Aws::String>
    StartFileTransferRequest& AddRetrieveFilePaths(RetrieveFilePathsT&& value) { m_retrieveFilePathsHasBeenSet = true; m_retrieveFilePaths.emplace_back(std::forward<RetrieveFilePathsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>For an inbound transfer, the <code>LocaDirectoryPath</code> specifies the
     * destination for one or more files that are transferred from the partner's SFTP
     * server.</p>
     */
    inline const Aws::String& GetLocalDirectoryPath() const { return m_localDirectoryPath; }
    inline bool LocalDirectoryPathHasBeenSet() const { return m_localDirectoryPathHasBeenSet; }
    template<typename LocalDirectoryPathT = Aws::String>
    void SetLocalDirectoryPath(LocalDirectoryPathT&& value) { m_localDirectoryPathHasBeenSet = true; m_localDirectoryPath = std::forward<LocalDirectoryPathT>(value); }
    template<typename LocalDirectoryPathT = Aws::String>
    StartFileTransferRequest& WithLocalDirectoryPath(LocalDirectoryPathT&& value) { SetLocalDirectoryPath(std::forward<LocalDirectoryPathT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>For an outbound transfer, the <code>RemoteDirectoryPath</code> specifies the
     * destination for one or more files that are transferred to the partner's SFTP
     * server. If you don't specify a <code>RemoteDirectoryPath</code>, the destination
     * for transferred files is the SFTP user's home directory.</p>
     */
    inline const Aws::String& GetRemoteDirectoryPath() const { return m_remoteDirectoryPath; }
    inline bool RemoteDirectoryPathHasBeenSet() const { return m_remoteDirectoryPathHasBeenSet; }
    template<typename RemoteDirectoryPathT = Aws::String>
    void SetRemoteDirectoryPath(RemoteDirectoryPathT&& value) { m_remoteDirectoryPathHasBeenSet = true; m_remoteDirectoryPath = std::forward<RemoteDirectoryPathT>(value); }
    template<typename RemoteDirectoryPathT = Aws::String>
    StartFileTransferRequest& WithRemoteDirectoryPath(RemoteDirectoryPathT&& value) { SetRemoteDirectoryPath(std::forward<RemoteDirectoryPathT>(value)); return *this;}
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
