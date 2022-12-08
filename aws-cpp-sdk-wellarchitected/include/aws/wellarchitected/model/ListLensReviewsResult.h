/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wellarchitected/WellArchitected_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/wellarchitected/model/LensReviewSummary.h>
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
   * <p>Output of a list lens reviews call.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/wellarchitected-2020-03-31/ListLensReviewsOutput">AWS
   * API Reference</a></p>
   */
  class ListLensReviewsResult
  {
  public:
    AWS_WELLARCHITECTED_API ListLensReviewsResult();
    AWS_WELLARCHITECTED_API ListLensReviewsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_WELLARCHITECTED_API ListLensReviewsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    
    inline const Aws::String& GetWorkloadId() const{ return m_workloadId; }

    
    inline void SetWorkloadId(const Aws::String& value) { m_workloadId = value; }

    
    inline void SetWorkloadId(Aws::String&& value) { m_workloadId = std::move(value); }

    
    inline void SetWorkloadId(const char* value) { m_workloadId.assign(value); }

    
    inline ListLensReviewsResult& WithWorkloadId(const Aws::String& value) { SetWorkloadId(value); return *this;}

    
    inline ListLensReviewsResult& WithWorkloadId(Aws::String&& value) { SetWorkloadId(std::move(value)); return *this;}

    
    inline ListLensReviewsResult& WithWorkloadId(const char* value) { SetWorkloadId(value); return *this;}


    
    inline int GetMilestoneNumber() const{ return m_milestoneNumber; }

    
    inline void SetMilestoneNumber(int value) { m_milestoneNumber = value; }

    
    inline ListLensReviewsResult& WithMilestoneNumber(int value) { SetMilestoneNumber(value); return *this;}


    
    inline const Aws::Vector<LensReviewSummary>& GetLensReviewSummaries() const{ return m_lensReviewSummaries; }

    
    inline void SetLensReviewSummaries(const Aws::Vector<LensReviewSummary>& value) { m_lensReviewSummaries = value; }

    
    inline void SetLensReviewSummaries(Aws::Vector<LensReviewSummary>&& value) { m_lensReviewSummaries = std::move(value); }

    
    inline ListLensReviewsResult& WithLensReviewSummaries(const Aws::Vector<LensReviewSummary>& value) { SetLensReviewSummaries(value); return *this;}

    
    inline ListLensReviewsResult& WithLensReviewSummaries(Aws::Vector<LensReviewSummary>&& value) { SetLensReviewSummaries(std::move(value)); return *this;}

    
    inline ListLensReviewsResult& AddLensReviewSummaries(const LensReviewSummary& value) { m_lensReviewSummaries.push_back(value); return *this; }

    
    inline ListLensReviewsResult& AddLensReviewSummaries(LensReviewSummary&& value) { m_lensReviewSummaries.push_back(std::move(value)); return *this; }


    
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    
    inline ListLensReviewsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    
    inline ListLensReviewsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    
    inline ListLensReviewsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::String m_workloadId;

    int m_milestoneNumber;

    Aws::Vector<LensReviewSummary> m_lensReviewSummaries;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace WellArchitected
} // namespace Aws
