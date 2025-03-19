/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/batch/Batch_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/batch/model/JobDefinition.h>
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
namespace Batch
{
namespace Model
{
  class DescribeJobDefinitionsResult
  {
  public:
    AWS_BATCH_API DescribeJobDefinitionsResult() = default;
    AWS_BATCH_API DescribeJobDefinitionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BATCH_API DescribeJobDefinitionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The list of job definitions.</p>
     */
    inline const Aws::Vector<JobDefinition>& GetJobDefinitions() const { return m_jobDefinitions; }
    template<typename JobDefinitionsT = Aws::Vector<JobDefinition>>
    void SetJobDefinitions(JobDefinitionsT&& value) { m_jobDefinitionsHasBeenSet = true; m_jobDefinitions = std::forward<JobDefinitionsT>(value); }
    template<typename JobDefinitionsT = Aws::Vector<JobDefinition>>
    DescribeJobDefinitionsResult& WithJobDefinitions(JobDefinitionsT&& value) { SetJobDefinitions(std::forward<JobDefinitionsT>(value)); return *this;}
    template<typename JobDefinitionsT = JobDefinition>
    DescribeJobDefinitionsResult& AddJobDefinitions(JobDefinitionsT&& value) { m_jobDefinitionsHasBeenSet = true; m_jobDefinitions.emplace_back(std::forward<JobDefinitionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The <code>nextToken</code> value to include in a future
     * <code>DescribeJobDefinitions</code> request. When the results of a
     * <code>DescribeJobDefinitions</code> request exceed <code>maxResults</code>, this
     * value can be used to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    DescribeJobDefinitionsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeJobDefinitionsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<JobDefinition> m_jobDefinitions;
    bool m_jobDefinitionsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Batch
} // namespace Aws
