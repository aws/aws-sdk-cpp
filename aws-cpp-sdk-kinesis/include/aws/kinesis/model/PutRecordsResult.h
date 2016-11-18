/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/
#pragma once
#include <aws/kinesis/Kinesis_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/kinesis/model/PutRecordsResultEntry.h>

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
   * <p> <code>PutRecords</code> results.</p>
   */
  class AWS_KINESIS_API PutRecordsResult
  {
  public:
    PutRecordsResult();
    PutRecordsResult(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    PutRecordsResult& operator=(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

    /**
     * <p>The number of unsuccessfully processed records in a <code>PutRecords</code>
     * request.</p>
     */
    inline int GetFailedRecordCount() const{ return m_failedRecordCount; }

    /**
     * <p>The number of unsuccessfully processed records in a <code>PutRecords</code>
     * request.</p>
     */
    inline void SetFailedRecordCount(int value) { m_failedRecordCount = value; }

    /**
     * <p>The number of unsuccessfully processed records in a <code>PutRecords</code>
     * request.</p>
     */
    inline PutRecordsResult& WithFailedRecordCount(int value) { SetFailedRecordCount(value); return *this;}

    /**
     * <p>An array of successfully and unsuccessfully processed record results,
     * correlated with the request by natural ordering. A record that is successfully
     * added to a stream includes <code>SequenceNumber</code> and <code>ShardId</code>
     * in the result. A record that fails to be added to a stream includes
     * <code>ErrorCode</code> and <code>ErrorMessage</code> in the result.</p>
     */
    inline const Aws::Vector<PutRecordsResultEntry>& GetRecords() const{ return m_records; }

    /**
     * <p>An array of successfully and unsuccessfully processed record results,
     * correlated with the request by natural ordering. A record that is successfully
     * added to a stream includes <code>SequenceNumber</code> and <code>ShardId</code>
     * in the result. A record that fails to be added to a stream includes
     * <code>ErrorCode</code> and <code>ErrorMessage</code> in the result.</p>
     */
    inline void SetRecords(const Aws::Vector<PutRecordsResultEntry>& value) { m_records = value; }

    /**
     * <p>An array of successfully and unsuccessfully processed record results,
     * correlated with the request by natural ordering. A record that is successfully
     * added to a stream includes <code>SequenceNumber</code> and <code>ShardId</code>
     * in the result. A record that fails to be added to a stream includes
     * <code>ErrorCode</code> and <code>ErrorMessage</code> in the result.</p>
     */
    inline void SetRecords(Aws::Vector<PutRecordsResultEntry>&& value) { m_records = value; }

    /**
     * <p>An array of successfully and unsuccessfully processed record results,
     * correlated with the request by natural ordering. A record that is successfully
     * added to a stream includes <code>SequenceNumber</code> and <code>ShardId</code>
     * in the result. A record that fails to be added to a stream includes
     * <code>ErrorCode</code> and <code>ErrorMessage</code> in the result.</p>
     */
    inline PutRecordsResult& WithRecords(const Aws::Vector<PutRecordsResultEntry>& value) { SetRecords(value); return *this;}

    /**
     * <p>An array of successfully and unsuccessfully processed record results,
     * correlated with the request by natural ordering. A record that is successfully
     * added to a stream includes <code>SequenceNumber</code> and <code>ShardId</code>
     * in the result. A record that fails to be added to a stream includes
     * <code>ErrorCode</code> and <code>ErrorMessage</code> in the result.</p>
     */
    inline PutRecordsResult& WithRecords(Aws::Vector<PutRecordsResultEntry>&& value) { SetRecords(value); return *this;}

    /**
     * <p>An array of successfully and unsuccessfully processed record results,
     * correlated with the request by natural ordering. A record that is successfully
     * added to a stream includes <code>SequenceNumber</code> and <code>ShardId</code>
     * in the result. A record that fails to be added to a stream includes
     * <code>ErrorCode</code> and <code>ErrorMessage</code> in the result.</p>
     */
    inline PutRecordsResult& AddRecords(const PutRecordsResultEntry& value) { m_records.push_back(value); return *this; }

    /**
     * <p>An array of successfully and unsuccessfully processed record results,
     * correlated with the request by natural ordering. A record that is successfully
     * added to a stream includes <code>SequenceNumber</code> and <code>ShardId</code>
     * in the result. A record that fails to be added to a stream includes
     * <code>ErrorCode</code> and <code>ErrorMessage</code> in the result.</p>
     */
    inline PutRecordsResult& AddRecords(PutRecordsResultEntry&& value) { m_records.push_back(value); return *this; }

  private:
    int m_failedRecordCount;
    Aws::Vector<PutRecordsResultEntry> m_records;
  };

} // namespace Model
} // namespace Kinesis
} // namespace Aws
