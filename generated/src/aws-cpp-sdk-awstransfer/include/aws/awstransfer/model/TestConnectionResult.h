/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/awstransfer/Transfer_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/awstransfer/model/SftpConnectorConnectionDetails.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace Transfer
{
namespace Model
{
  class TestConnectionResult
  {
  public:
    AWS_TRANSFER_API TestConnectionResult() = default;
    AWS_TRANSFER_API TestConnectionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_TRANSFER_API TestConnectionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Returns the identifier of the connector object that you are testing.</p>
     */
    inline const Aws::String& GetConnectorId() const { return m_connectorId; }
    template<typename ConnectorIdT = Aws::String>
    void SetConnectorId(ConnectorIdT&& value) { m_connectorIdHasBeenSet = true; m_connectorId = std::forward<ConnectorIdT>(value); }
    template<typename ConnectorIdT = Aws::String>
    TestConnectionResult& WithConnectorId(ConnectorIdT&& value) { SetConnectorId(std::forward<ConnectorIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Returns <code>OK</code> for successful test, or <code>ERROR</code> if the
     * test fails.</p>
     */
    inline const Aws::String& GetStatus() const { return m_status; }
    template<typename StatusT = Aws::String>
    void SetStatus(StatusT&& value) { m_statusHasBeenSet = true; m_status = std::forward<StatusT>(value); }
    template<typename StatusT = Aws::String>
    TestConnectionResult& WithStatus(StatusT&& value) { SetStatus(std::forward<StatusT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Returns <code>Connection succeeded</code> if the test is successful. Or,
     * returns a descriptive error message if the test fails. The following list
     * provides troubleshooting details, depending on the error message that you
     * receive.</p> <ul> <li> <p>Verify that your secret name aligns with the one in
     * Transfer Role permissions.</p> </li> <li> <p>Verify the server URL in the
     * connector configuration , and verify that the login credentials work
     * successfully outside of the connector.</p> </li> <li> <p>Verify that the secret
     * exists and is formatted correctly.</p> </li> <li> <p>Verify that the trusted
     * host key in the connector configuration matches the <code>ssh-keyscan</code>
     * output.</p> </li> </ul>
     */
    inline const Aws::String& GetStatusMessage() const { return m_statusMessage; }
    template<typename StatusMessageT = Aws::String>
    void SetStatusMessage(StatusMessageT&& value) { m_statusMessageHasBeenSet = true; m_statusMessage = std::forward<StatusMessageT>(value); }
    template<typename StatusMessageT = Aws::String>
    TestConnectionResult& WithStatusMessage(StatusMessageT&& value) { SetStatusMessage(std::forward<StatusMessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Structure that contains the SFTP connector host key.</p>
     */
    inline const SftpConnectorConnectionDetails& GetSftpConnectionDetails() const { return m_sftpConnectionDetails; }
    template<typename SftpConnectionDetailsT = SftpConnectorConnectionDetails>
    void SetSftpConnectionDetails(SftpConnectionDetailsT&& value) { m_sftpConnectionDetailsHasBeenSet = true; m_sftpConnectionDetails = std::forward<SftpConnectionDetailsT>(value); }
    template<typename SftpConnectionDetailsT = SftpConnectorConnectionDetails>
    TestConnectionResult& WithSftpConnectionDetails(SftpConnectionDetailsT&& value) { SetSftpConnectionDetails(std::forward<SftpConnectionDetailsT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    TestConnectionResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_connectorId;
    bool m_connectorIdHasBeenSet = false;

    Aws::String m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_statusMessage;
    bool m_statusMessageHasBeenSet = false;

    SftpConnectorConnectionDetails m_sftpConnectionDetails;
    bool m_sftpConnectionDetailsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Transfer
} // namespace Aws
