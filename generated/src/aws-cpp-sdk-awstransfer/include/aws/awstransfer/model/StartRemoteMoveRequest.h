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
  class StartRemoteMoveRequest : public TransferRequest
  {
  public:
    AWS_TRANSFER_API StartRemoteMoveRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StartRemoteMove"; }

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
    StartRemoteMoveRequest& WithConnectorId(ConnectorIdT&& value) { SetConnectorId(std::forward<ConnectorIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The absolute path of the file or directory to move or rename. You can only
     * specify one path per call to this operation.</p>
     */
    inline const Aws::String& GetSourcePath() const { return m_sourcePath; }
    inline bool SourcePathHasBeenSet() const { return m_sourcePathHasBeenSet; }
    template<typename SourcePathT = Aws::String>
    void SetSourcePath(SourcePathT&& value) { m_sourcePathHasBeenSet = true; m_sourcePath = std::forward<SourcePathT>(value); }
    template<typename SourcePathT = Aws::String>
    StartRemoteMoveRequest& WithSourcePath(SourcePathT&& value) { SetSourcePath(std::forward<SourcePathT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The absolute path for the target of the move/rename operation.</p>
     */
    inline const Aws::String& GetTargetPath() const { return m_targetPath; }
    inline bool TargetPathHasBeenSet() const { return m_targetPathHasBeenSet; }
    template<typename TargetPathT = Aws::String>
    void SetTargetPath(TargetPathT&& value) { m_targetPathHasBeenSet = true; m_targetPath = std::forward<TargetPathT>(value); }
    template<typename TargetPathT = Aws::String>
    StartRemoteMoveRequest& WithTargetPath(TargetPathT&& value) { SetTargetPath(std::forward<TargetPathT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_connectorId;
    bool m_connectorIdHasBeenSet = false;

    Aws::String m_sourcePath;
    bool m_sourcePathHasBeenSet = false;

    Aws::String m_targetPath;
    bool m_targetPathHasBeenSet = false;
  };

} // namespace Model
} // namespace Transfer
} // namespace Aws
