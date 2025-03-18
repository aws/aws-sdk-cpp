/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kinesis/Kinesis_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/kinesis/model/EncryptionType.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/kinesis/model/PutRecordsResultEntry.h>
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
namespace Kinesis
{
namespace Model
{
  /**
   * <p> <code>PutRecords</code> results.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kinesis-2013-12-02/PutRecordsOutput">AWS
   * API Reference</a></p>
   */
  class PutRecordsResult
  {
  public:
    AWS_KINESIS_API PutRecordsResult() = default;
    AWS_KINESIS_API PutRecordsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_KINESIS_API PutRecordsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The number of unsuccessfully processed records in a <code>PutRecords</code>
     * request.</p>
     */
    inline int GetFailedRecordCount() const { return m_failedRecordCount; }
    inline void SetFailedRecordCount(int value) { m_failedRecordCountHasBeenSet = true; m_failedRecordCount = value; }
    inline PutRecordsResult& WithFailedRecordCount(int value) { SetFailedRecordCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of successfully and unsuccessfully processed record results. A
     * record that is successfully added to a stream includes
     * <code>SequenceNumber</code> and <code>ShardId</code> in the result. A record
     * that fails to be added to a stream includes <code>ErrorCode</code> and
     * <code>ErrorMessage</code> in the result.</p>
     */
    inline const Aws::Vector<PutRecordsResultEntry>& GetRecords() const { return m_records; }
    template<typename RecordsT = Aws::Vector<PutRecordsResultEntry>>
    void SetRecords(RecordsT&& value) { m_recordsHasBeenSet = true; m_records = std::forward<RecordsT>(value); }
    template<typename RecordsT = Aws::Vector<PutRecordsResultEntry>>
    PutRecordsResult& WithRecords(RecordsT&& value) { SetRecords(std::forward<RecordsT>(value)); return *this;}
    template<typename RecordsT = PutRecordsResultEntry>
    PutRecordsResult& AddRecords(RecordsT&& value) { m_recordsHasBeenSet = true; m_records.emplace_back(std::forward<RecordsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The encryption type used on the records. This parameter can be one of the
     * following values:</p> <ul> <li> <p> <code>NONE</code>: Do not encrypt the
     * records.</p> </li> <li> <p> <code>KMS</code>: Use server-side encryption on the
     * records using a customer-managed Amazon Web Services KMS key.</p> </li> </ul>
     */
    inline EncryptionType GetEncryptionType() const { return m_encryptionType; }
    inline void SetEncryptionType(EncryptionType value) { m_encryptionTypeHasBeenSet = true; m_encryptionType = value; }
    inline PutRecordsResult& WithEncryptionType(EncryptionType value) { SetEncryptionType(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    PutRecordsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    int m_failedRecordCount{0};
    bool m_failedRecordCountHasBeenSet = false;

    Aws::Vector<PutRecordsResultEntry> m_records;
    bool m_recordsHasBeenSet = false;

    EncryptionType m_encryptionType{EncryptionType::NOT_SET};
    bool m_encryptionTypeHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Kinesis
} // namespace Aws
