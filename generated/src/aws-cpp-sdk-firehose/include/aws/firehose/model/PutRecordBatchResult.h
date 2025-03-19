/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/firehose/Firehose_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/firehose/model/PutRecordBatchResponseEntry.h>
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
namespace Firehose
{
namespace Model
{
  class PutRecordBatchResult
  {
  public:
    AWS_FIREHOSE_API PutRecordBatchResult() = default;
    AWS_FIREHOSE_API PutRecordBatchResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_FIREHOSE_API PutRecordBatchResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The number of records that might have failed processing. This number might be
     * greater than 0 even if the <a>PutRecordBatch</a> call succeeds. Check
     * <code>FailedPutCount</code> to determine whether there are records that you need
     * to resend.</p>
     */
    inline int GetFailedPutCount() const { return m_failedPutCount; }
    inline void SetFailedPutCount(int value) { m_failedPutCountHasBeenSet = true; m_failedPutCount = value; }
    inline PutRecordBatchResult& WithFailedPutCount(int value) { SetFailedPutCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether server-side encryption (SSE) was enabled during this
     * operation.</p>
     */
    inline bool GetEncrypted() const { return m_encrypted; }
    inline void SetEncrypted(bool value) { m_encryptedHasBeenSet = true; m_encrypted = value; }
    inline PutRecordBatchResult& WithEncrypted(bool value) { SetEncrypted(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The results array. For each record, the index of the response element is the
     * same as the index used in the request array.</p>
     */
    inline const Aws::Vector<PutRecordBatchResponseEntry>& GetRequestResponses() const { return m_requestResponses; }
    template<typename RequestResponsesT = Aws::Vector<PutRecordBatchResponseEntry>>
    void SetRequestResponses(RequestResponsesT&& value) { m_requestResponsesHasBeenSet = true; m_requestResponses = std::forward<RequestResponsesT>(value); }
    template<typename RequestResponsesT = Aws::Vector<PutRecordBatchResponseEntry>>
    PutRecordBatchResult& WithRequestResponses(RequestResponsesT&& value) { SetRequestResponses(std::forward<RequestResponsesT>(value)); return *this;}
    template<typename RequestResponsesT = PutRecordBatchResponseEntry>
    PutRecordBatchResult& AddRequestResponses(RequestResponsesT&& value) { m_requestResponsesHasBeenSet = true; m_requestResponses.emplace_back(std::forward<RequestResponsesT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    PutRecordBatchResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    int m_failedPutCount{0};
    bool m_failedPutCountHasBeenSet = false;

    bool m_encrypted{false};
    bool m_encryptedHasBeenSet = false;

    Aws::Vector<PutRecordBatchResponseEntry> m_requestResponses;
    bool m_requestResponsesHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Firehose
} // namespace Aws
