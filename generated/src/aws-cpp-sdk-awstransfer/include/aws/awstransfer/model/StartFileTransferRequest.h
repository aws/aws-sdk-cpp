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


    /**
     * <p>The unique identifier for the connector. </p>
     */
    inline const Aws::String& GetConnectorId() const{ return m_connectorId; }

    /**
     * <p>The unique identifier for the connector. </p>
     */
    inline bool ConnectorIdHasBeenSet() const { return m_connectorIdHasBeenSet; }

    /**
     * <p>The unique identifier for the connector. </p>
     */
    inline void SetConnectorId(const Aws::String& value) { m_connectorIdHasBeenSet = true; m_connectorId = value; }

    /**
     * <p>The unique identifier for the connector. </p>
     */
    inline void SetConnectorId(Aws::String&& value) { m_connectorIdHasBeenSet = true; m_connectorId = std::move(value); }

    /**
     * <p>The unique identifier for the connector. </p>
     */
    inline void SetConnectorId(const char* value) { m_connectorIdHasBeenSet = true; m_connectorId.assign(value); }

    /**
     * <p>The unique identifier for the connector. </p>
     */
    inline StartFileTransferRequest& WithConnectorId(const Aws::String& value) { SetConnectorId(value); return *this;}

    /**
     * <p>The unique identifier for the connector. </p>
     */
    inline StartFileTransferRequest& WithConnectorId(Aws::String&& value) { SetConnectorId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier for the connector. </p>
     */
    inline StartFileTransferRequest& WithConnectorId(const char* value) { SetConnectorId(value); return *this;}


    /**
     * <p>An array of strings. Each string represents the absolute path for one
     * outbound file transfer. For example, <code>
     * <i>DOC-EXAMPLE-BUCKET</i>/<i>myfile.txt</i> </code>. </p>
     */
    inline const Aws::Vector<Aws::String>& GetSendFilePaths() const{ return m_sendFilePaths; }

    /**
     * <p>An array of strings. Each string represents the absolute path for one
     * outbound file transfer. For example, <code>
     * <i>DOC-EXAMPLE-BUCKET</i>/<i>myfile.txt</i> </code>. </p>
     */
    inline bool SendFilePathsHasBeenSet() const { return m_sendFilePathsHasBeenSet; }

    /**
     * <p>An array of strings. Each string represents the absolute path for one
     * outbound file transfer. For example, <code>
     * <i>DOC-EXAMPLE-BUCKET</i>/<i>myfile.txt</i> </code>. </p>
     */
    inline void SetSendFilePaths(const Aws::Vector<Aws::String>& value) { m_sendFilePathsHasBeenSet = true; m_sendFilePaths = value; }

    /**
     * <p>An array of strings. Each string represents the absolute path for one
     * outbound file transfer. For example, <code>
     * <i>DOC-EXAMPLE-BUCKET</i>/<i>myfile.txt</i> </code>. </p>
     */
    inline void SetSendFilePaths(Aws::Vector<Aws::String>&& value) { m_sendFilePathsHasBeenSet = true; m_sendFilePaths = std::move(value); }

    /**
     * <p>An array of strings. Each string represents the absolute path for one
     * outbound file transfer. For example, <code>
     * <i>DOC-EXAMPLE-BUCKET</i>/<i>myfile.txt</i> </code>. </p>
     */
    inline StartFileTransferRequest& WithSendFilePaths(const Aws::Vector<Aws::String>& value) { SetSendFilePaths(value); return *this;}

    /**
     * <p>An array of strings. Each string represents the absolute path for one
     * outbound file transfer. For example, <code>
     * <i>DOC-EXAMPLE-BUCKET</i>/<i>myfile.txt</i> </code>. </p>
     */
    inline StartFileTransferRequest& WithSendFilePaths(Aws::Vector<Aws::String>&& value) { SetSendFilePaths(std::move(value)); return *this;}

    /**
     * <p>An array of strings. Each string represents the absolute path for one
     * outbound file transfer. For example, <code>
     * <i>DOC-EXAMPLE-BUCKET</i>/<i>myfile.txt</i> </code>. </p>
     */
    inline StartFileTransferRequest& AddSendFilePaths(const Aws::String& value) { m_sendFilePathsHasBeenSet = true; m_sendFilePaths.push_back(value); return *this; }

    /**
     * <p>An array of strings. Each string represents the absolute path for one
     * outbound file transfer. For example, <code>
     * <i>DOC-EXAMPLE-BUCKET</i>/<i>myfile.txt</i> </code>. </p>
     */
    inline StartFileTransferRequest& AddSendFilePaths(Aws::String&& value) { m_sendFilePathsHasBeenSet = true; m_sendFilePaths.push_back(std::move(value)); return *this; }

    /**
     * <p>An array of strings. Each string represents the absolute path for one
     * outbound file transfer. For example, <code>
     * <i>DOC-EXAMPLE-BUCKET</i>/<i>myfile.txt</i> </code>. </p>
     */
    inline StartFileTransferRequest& AddSendFilePaths(const char* value) { m_sendFilePathsHasBeenSet = true; m_sendFilePaths.push_back(value); return *this; }

  private:

    Aws::String m_connectorId;
    bool m_connectorIdHasBeenSet = false;

    Aws::Vector<Aws::String> m_sendFilePaths;
    bool m_sendFilePathsHasBeenSet = false;
  };

} // namespace Model
} // namespace Transfer
} // namespace Aws
