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
  class StartRemoteDeleteRequest : public TransferRequest
  {
  public:
    AWS_TRANSFER_API StartRemoteDeleteRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StartRemoteDelete"; }

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
    StartRemoteDeleteRequest& WithConnectorId(ConnectorIdT&& value) { SetConnectorId(std::forward<ConnectorIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The absolute path of the file or directory to delete. You can only specify
     * one path per call to this operation.</p>
     */
    inline const Aws::String& GetDeletePath() const { return m_deletePath; }
    inline bool DeletePathHasBeenSet() const { return m_deletePathHasBeenSet; }
    template<typename DeletePathT = Aws::String>
    void SetDeletePath(DeletePathT&& value) { m_deletePathHasBeenSet = true; m_deletePath = std::forward<DeletePathT>(value); }
    template<typename DeletePathT = Aws::String>
    StartRemoteDeleteRequest& WithDeletePath(DeletePathT&& value) { SetDeletePath(std::forward<DeletePathT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_connectorId;
    bool m_connectorIdHasBeenSet = false;

    Aws::String m_deletePath;
    bool m_deletePathHasBeenSet = false;
  };

} // namespace Model
} // namespace Transfer
} // namespace Aws
