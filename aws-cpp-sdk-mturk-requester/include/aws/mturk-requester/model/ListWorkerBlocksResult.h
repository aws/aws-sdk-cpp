/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/mturk-requester/MTurk_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/mturk-requester/model/WorkerBlock.h>
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
namespace MTurk
{
namespace Model
{
  class AWS_MTURK_API ListWorkerBlocksResult
  {
  public:
    ListWorkerBlocksResult();
    ListWorkerBlocksResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ListWorkerBlocksResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    
    inline ListWorkerBlocksResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    
    inline ListWorkerBlocksResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    
    inline ListWorkerBlocksResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p> The number of assignments on the page in the filtered results list,
     * equivalent to the number of assignments returned by this call.</p>
     */
    inline int GetNumResults() const{ return m_numResults; }

    /**
     * <p> The number of assignments on the page in the filtered results list,
     * equivalent to the number of assignments returned by this call.</p>
     */
    inline void SetNumResults(int value) { m_numResults = value; }

    /**
     * <p> The number of assignments on the page in the filtered results list,
     * equivalent to the number of assignments returned by this call.</p>
     */
    inline ListWorkerBlocksResult& WithNumResults(int value) { SetNumResults(value); return *this;}


    /**
     * <p> The list of WorkerBlocks, containing the collection of Worker IDs and
     * reasons for blocking.</p>
     */
    inline const Aws::Vector<WorkerBlock>& GetWorkerBlocks() const{ return m_workerBlocks; }

    /**
     * <p> The list of WorkerBlocks, containing the collection of Worker IDs and
     * reasons for blocking.</p>
     */
    inline void SetWorkerBlocks(const Aws::Vector<WorkerBlock>& value) { m_workerBlocks = value; }

    /**
     * <p> The list of WorkerBlocks, containing the collection of Worker IDs and
     * reasons for blocking.</p>
     */
    inline void SetWorkerBlocks(Aws::Vector<WorkerBlock>&& value) { m_workerBlocks = std::move(value); }

    /**
     * <p> The list of WorkerBlocks, containing the collection of Worker IDs and
     * reasons for blocking.</p>
     */
    inline ListWorkerBlocksResult& WithWorkerBlocks(const Aws::Vector<WorkerBlock>& value) { SetWorkerBlocks(value); return *this;}

    /**
     * <p> The list of WorkerBlocks, containing the collection of Worker IDs and
     * reasons for blocking.</p>
     */
    inline ListWorkerBlocksResult& WithWorkerBlocks(Aws::Vector<WorkerBlock>&& value) { SetWorkerBlocks(std::move(value)); return *this;}

    /**
     * <p> The list of WorkerBlocks, containing the collection of Worker IDs and
     * reasons for blocking.</p>
     */
    inline ListWorkerBlocksResult& AddWorkerBlocks(const WorkerBlock& value) { m_workerBlocks.push_back(value); return *this; }

    /**
     * <p> The list of WorkerBlocks, containing the collection of Worker IDs and
     * reasons for blocking.</p>
     */
    inline ListWorkerBlocksResult& AddWorkerBlocks(WorkerBlock&& value) { m_workerBlocks.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_nextToken;

    int m_numResults;

    Aws::Vector<WorkerBlock> m_workerBlocks;
  };

} // namespace Model
} // namespace MTurk
} // namespace Aws
