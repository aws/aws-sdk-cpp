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
#include <aws/firehose/Firehose_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/firehose/model/PutRecordBatchResponseEntry.h>

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
  /**
   * <p>Contains the output of <a>PutRecordBatch</a>.</p>
   */
  class AWS_FIREHOSE_API PutRecordBatchResult
  {
  public:
    PutRecordBatchResult();
    PutRecordBatchResult(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    PutRecordBatchResult& operator=(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

    /**
     * <p>The number of unsuccessfully written records.</p>
     */
    inline int GetFailedPutCount() const{ return m_failedPutCount; }

    /**
     * <p>The number of unsuccessfully written records.</p>
     */
    inline void SetFailedPutCount(int value) { m_failedPutCount = value; }

    /**
     * <p>The number of unsuccessfully written records.</p>
     */
    inline PutRecordBatchResult& WithFailedPutCount(int value) { SetFailedPutCount(value); return *this;}

    /**
     * <p>The results for the individual records. The index of each element matches the
     * same index in which records were sent.</p>
     */
    inline const Aws::Vector<PutRecordBatchResponseEntry>& GetRequestResponses() const{ return m_requestResponses; }

    /**
     * <p>The results for the individual records. The index of each element matches the
     * same index in which records were sent.</p>
     */
    inline void SetRequestResponses(const Aws::Vector<PutRecordBatchResponseEntry>& value) { m_requestResponses = value; }

    /**
     * <p>The results for the individual records. The index of each element matches the
     * same index in which records were sent.</p>
     */
    inline void SetRequestResponses(Aws::Vector<PutRecordBatchResponseEntry>&& value) { m_requestResponses = value; }

    /**
     * <p>The results for the individual records. The index of each element matches the
     * same index in which records were sent.</p>
     */
    inline PutRecordBatchResult& WithRequestResponses(const Aws::Vector<PutRecordBatchResponseEntry>& value) { SetRequestResponses(value); return *this;}

    /**
     * <p>The results for the individual records. The index of each element matches the
     * same index in which records were sent.</p>
     */
    inline PutRecordBatchResult& WithRequestResponses(Aws::Vector<PutRecordBatchResponseEntry>&& value) { SetRequestResponses(value); return *this;}

    /**
     * <p>The results for the individual records. The index of each element matches the
     * same index in which records were sent.</p>
     */
    inline PutRecordBatchResult& AddRequestResponses(const PutRecordBatchResponseEntry& value) { m_requestResponses.push_back(value); return *this; }

    /**
     * <p>The results for the individual records. The index of each element matches the
     * same index in which records were sent.</p>
     */
    inline PutRecordBatchResult& AddRequestResponses(PutRecordBatchResponseEntry&& value) { m_requestResponses.push_back(value); return *this; }

  private:
    int m_failedPutCount;
    Aws::Vector<PutRecordBatchResponseEntry> m_requestResponses;
  };

} // namespace Model
} // namespace Firehose
} // namespace Aws
