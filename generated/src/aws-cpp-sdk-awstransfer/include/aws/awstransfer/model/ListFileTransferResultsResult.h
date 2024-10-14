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
    AWS_TRANSFER_API ListFileTransferResultsResult();
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
    inline const Aws::Vector<ConnectorFileTransferResult>& GetFileTransferResults() const{ return m_fileTransferResults; }
    inline void SetFileTransferResults(const Aws::Vector<ConnectorFileTransferResult>& value) { m_fileTransferResults = value; }
    inline void SetFileTransferResults(Aws::Vector<ConnectorFileTransferResult>&& value) { m_fileTransferResults = std::move(value); }
    inline ListFileTransferResultsResult& WithFileTransferResults(const Aws::Vector<ConnectorFileTransferResult>& value) { SetFileTransferResults(value); return *this;}
    inline ListFileTransferResultsResult& WithFileTransferResults(Aws::Vector<ConnectorFileTransferResult>&& value) { SetFileTransferResults(std::move(value)); return *this;}
    inline ListFileTransferResultsResult& AddFileTransferResults(const ConnectorFileTransferResult& value) { m_fileTransferResults.push_back(value); return *this; }
    inline ListFileTransferResultsResult& AddFileTransferResults(ConnectorFileTransferResult&& value) { m_fileTransferResults.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Returns a token that you can use to call <code>ListFileTransferResults</code>
     * again and receive additional results, if there are any (against the same
     * <code>TransferId</code>.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListFileTransferResultsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListFileTransferResultsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListFileTransferResultsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListFileTransferResultsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListFileTransferResultsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListFileTransferResultsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<ConnectorFileTransferResult> m_fileTransferResults;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Transfer
} // namespace Aws
