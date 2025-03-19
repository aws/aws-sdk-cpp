/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/awstransfer/Transfer_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/awstransfer/model/ConnectorFileTransferResult.h>
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
  class ListFileTransferResultsResult
  {
  public:
    AWS_TRANSFER_API ListFileTransferResultsResult() = default;
    AWS_TRANSFER_API ListFileTransferResultsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_TRANSFER_API ListFileTransferResultsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Returns the details for the files transferred in the transfer identified by
     * the <code>TransferId</code> and <code>ConnectorId</code> specified.</p> <ul>
     * <li> <p> <code>FilePath</code>: the filename and path to where the file was sent
     * to or retrieved from.</p> </li> <li> <p> <code>StatusCode</code>: current status
     * for the transfer. The status returned is one of the following
     * values:<code>QUEUED</code>, <code>IN_PROGRESS</code>, <code>COMPLETED</code>, or
     * <code>FAILED</code> </p> </li> <li> <p> <code>FailureCode</code>: for transfers
     * that fail, this parameter contains a code indicating the reason. For example,
     * <code>RETRIEVE_FILE_NOT_FOUND</code> </p> </li> <li> <p>
     * <code>FailureMessage</code>: for transfers that fail, this parameter describes
     * the reason for the failure.</p> </li> </ul>
     */
    inline const Aws::Vector<ConnectorFileTransferResult>& GetFileTransferResults() const { return m_fileTransferResults; }
    template<typename FileTransferResultsT = Aws::Vector<ConnectorFileTransferResult>>
    void SetFileTransferResults(FileTransferResultsT&& value) { m_fileTransferResultsHasBeenSet = true; m_fileTransferResults = std::forward<FileTransferResultsT>(value); }
    template<typename FileTransferResultsT = Aws::Vector<ConnectorFileTransferResult>>
    ListFileTransferResultsResult& WithFileTransferResults(FileTransferResultsT&& value) { SetFileTransferResults(std::forward<FileTransferResultsT>(value)); return *this;}
    template<typename FileTransferResultsT = ConnectorFileTransferResult>
    ListFileTransferResultsResult& AddFileTransferResults(FileTransferResultsT&& value) { m_fileTransferResultsHasBeenSet = true; m_fileTransferResults.emplace_back(std::forward<FileTransferResultsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Returns a token that you can use to call <code>ListFileTransferResults</code>
     * again and receive additional results, if there are any (against the same
     * <code>TransferId</code>.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListFileTransferResultsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListFileTransferResultsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<ConnectorFileTransferResult> m_fileTransferResults;
    bool m_fileTransferResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Transfer
} // namespace Aws
