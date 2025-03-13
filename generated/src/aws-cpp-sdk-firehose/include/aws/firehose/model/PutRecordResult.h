/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/firehose/Firehose_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
  class PutRecordResult
  {
  public:
    AWS_FIREHOSE_API PutRecordResult() = default;
    AWS_FIREHOSE_API PutRecordResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_FIREHOSE_API PutRecordResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ID of the record.</p>
     */
    inline const Aws::String& GetRecordId() const { return m_recordId; }
    template<typename RecordIdT = Aws::String>
    void SetRecordId(RecordIdT&& value) { m_recordIdHasBeenSet = true; m_recordId = std::forward<RecordIdT>(value); }
    template<typename RecordIdT = Aws::String>
    PutRecordResult& WithRecordId(RecordIdT&& value) { SetRecordId(std::forward<RecordIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether server-side encryption (SSE) was enabled during this
     * operation.</p>
     */
    inline bool GetEncrypted() const { return m_encrypted; }
    inline void SetEncrypted(bool value) { m_encryptedHasBeenSet = true; m_encrypted = value; }
    inline PutRecordResult& WithEncrypted(bool value) { SetEncrypted(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    PutRecordResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_recordId;
    bool m_recordIdHasBeenSet = false;

    bool m_encrypted{false};
    bool m_encryptedHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Firehose
} // namespace Aws
