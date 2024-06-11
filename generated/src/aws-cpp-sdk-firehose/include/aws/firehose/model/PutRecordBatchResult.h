﻿/**
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
    AWS_FIREHOSE_API PutRecordBatchResult();
    AWS_FIREHOSE_API PutRecordBatchResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_FIREHOSE_API PutRecordBatchResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The number of records that might have failed processing. This number might be
     * greater than 0 even if the <a>PutRecordBatch</a> call succeeds. Check
     * <code>FailedPutCount</code> to determine whether there are records that you need
     * to resend.</p>
     */
    inline int GetFailedPutCount() const{ return m_failedPutCount; }
    inline void SetFailedPutCount(int value) { m_failedPutCount = value; }
    inline PutRecordBatchResult& WithFailedPutCount(int value) { SetFailedPutCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether server-side encryption (SSE) was enabled during this
     * operation.</p>
     */
    inline bool GetEncrypted() const{ return m_encrypted; }
    inline void SetEncrypted(bool value) { m_encrypted = value; }
    inline PutRecordBatchResult& WithEncrypted(bool value) { SetEncrypted(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The results array. For each record, the index of the response element is the
     * same as the index used in the request array.</p>
     */
    inline const Aws::Vector<PutRecordBatchResponseEntry>& GetRequestResponses() const{ return m_requestResponses; }
    inline void SetRequestResponses(const Aws::Vector<PutRecordBatchResponseEntry>& value) { m_requestResponses = value; }
    inline void SetRequestResponses(Aws::Vector<PutRecordBatchResponseEntry>&& value) { m_requestResponses = std::move(value); }
    inline PutRecordBatchResult& WithRequestResponses(const Aws::Vector<PutRecordBatchResponseEntry>& value) { SetRequestResponses(value); return *this;}
    inline PutRecordBatchResult& WithRequestResponses(Aws::Vector<PutRecordBatchResponseEntry>&& value) { SetRequestResponses(std::move(value)); return *this;}
    inline PutRecordBatchResult& AddRequestResponses(const PutRecordBatchResponseEntry& value) { m_requestResponses.push_back(value); return *this; }
    inline PutRecordBatchResult& AddRequestResponses(PutRecordBatchResponseEntry&& value) { m_requestResponses.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline PutRecordBatchResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline PutRecordBatchResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline PutRecordBatchResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    int m_failedPutCount;

    bool m_encrypted;

    Aws::Vector<PutRecordBatchResponseEntry> m_requestResponses;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Firehose
} // namespace Aws
