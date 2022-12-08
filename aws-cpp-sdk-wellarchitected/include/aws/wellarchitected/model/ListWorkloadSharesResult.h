/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wellarchitected/WellArchitected_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/wellarchitected/model/WorkloadShareSummary.h>
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
namespace WellArchitected
{
namespace Model
{
  /**
   * <p>Input for List Workload Share</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/wellarchitected-2020-03-31/ListWorkloadSharesOutput">AWS
   * API Reference</a></p>
   */
  class ListWorkloadSharesResult
  {
  public:
    AWS_WELLARCHITECTED_API ListWorkloadSharesResult();
    AWS_WELLARCHITECTED_API ListWorkloadSharesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_WELLARCHITECTED_API ListWorkloadSharesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    
    inline const Aws::String& GetWorkloadId() const{ return m_workloadId; }

    
    inline void SetWorkloadId(const Aws::String& value) { m_workloadId = value; }

    
    inline void SetWorkloadId(Aws::String&& value) { m_workloadId = std::move(value); }

    
    inline void SetWorkloadId(const char* value) { m_workloadId.assign(value); }

    
    inline ListWorkloadSharesResult& WithWorkloadId(const Aws::String& value) { SetWorkloadId(value); return *this;}

    
    inline ListWorkloadSharesResult& WithWorkloadId(Aws::String&& value) { SetWorkloadId(std::move(value)); return *this;}

    
    inline ListWorkloadSharesResult& WithWorkloadId(const char* value) { SetWorkloadId(value); return *this;}


    
    inline const Aws::Vector<WorkloadShareSummary>& GetWorkloadShareSummaries() const{ return m_workloadShareSummaries; }

    
    inline void SetWorkloadShareSummaries(const Aws::Vector<WorkloadShareSummary>& value) { m_workloadShareSummaries = value; }

    
    inline void SetWorkloadShareSummaries(Aws::Vector<WorkloadShareSummary>&& value) { m_workloadShareSummaries = std::move(value); }

    
    inline ListWorkloadSharesResult& WithWorkloadShareSummaries(const Aws::Vector<WorkloadShareSummary>& value) { SetWorkloadShareSummaries(value); return *this;}

    
    inline ListWorkloadSharesResult& WithWorkloadShareSummaries(Aws::Vector<WorkloadShareSummary>&& value) { SetWorkloadShareSummaries(std::move(value)); return *this;}

    
    inline ListWorkloadSharesResult& AddWorkloadShareSummaries(const WorkloadShareSummary& value) { m_workloadShareSummaries.push_back(value); return *this; }

    
    inline ListWorkloadSharesResult& AddWorkloadShareSummaries(WorkloadShareSummary&& value) { m_workloadShareSummaries.push_back(std::move(value)); return *this; }


    
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    
    inline ListWorkloadSharesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    
    inline ListWorkloadSharesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    
    inline ListWorkloadSharesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::String m_workloadId;

    Aws::Vector<WorkloadShareSummary> m_workloadShareSummaries;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace WellArchitected
} // namespace Aws
