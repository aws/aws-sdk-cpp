/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wellarchitected/WellArchitected_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/wellarchitected/model/MilestoneSummary.h>
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
   * <p>Output of a list milestones call.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/wellarchitected-2020-03-31/ListMilestonesOutput">AWS
   * API Reference</a></p>
   */
  class ListMilestonesResult
  {
  public:
    AWS_WELLARCHITECTED_API ListMilestonesResult();
    AWS_WELLARCHITECTED_API ListMilestonesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_WELLARCHITECTED_API ListMilestonesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    
    inline const Aws::String& GetWorkloadId() const{ return m_workloadId; }

    
    inline void SetWorkloadId(const Aws::String& value) { m_workloadId = value; }

    
    inline void SetWorkloadId(Aws::String&& value) { m_workloadId = std::move(value); }

    
    inline void SetWorkloadId(const char* value) { m_workloadId.assign(value); }

    
    inline ListMilestonesResult& WithWorkloadId(const Aws::String& value) { SetWorkloadId(value); return *this;}

    
    inline ListMilestonesResult& WithWorkloadId(Aws::String&& value) { SetWorkloadId(std::move(value)); return *this;}

    
    inline ListMilestonesResult& WithWorkloadId(const char* value) { SetWorkloadId(value); return *this;}


    
    inline const Aws::Vector<MilestoneSummary>& GetMilestoneSummaries() const{ return m_milestoneSummaries; }

    
    inline void SetMilestoneSummaries(const Aws::Vector<MilestoneSummary>& value) { m_milestoneSummaries = value; }

    
    inline void SetMilestoneSummaries(Aws::Vector<MilestoneSummary>&& value) { m_milestoneSummaries = std::move(value); }

    
    inline ListMilestonesResult& WithMilestoneSummaries(const Aws::Vector<MilestoneSummary>& value) { SetMilestoneSummaries(value); return *this;}

    
    inline ListMilestonesResult& WithMilestoneSummaries(Aws::Vector<MilestoneSummary>&& value) { SetMilestoneSummaries(std::move(value)); return *this;}

    
    inline ListMilestonesResult& AddMilestoneSummaries(const MilestoneSummary& value) { m_milestoneSummaries.push_back(value); return *this; }

    
    inline ListMilestonesResult& AddMilestoneSummaries(MilestoneSummary&& value) { m_milestoneSummaries.push_back(std::move(value)); return *this; }


    
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    
    inline ListMilestonesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    
    inline ListMilestonesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    
    inline ListMilestonesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::String m_workloadId;

    Aws::Vector<MilestoneSummary> m_milestoneSummaries;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace WellArchitected
} // namespace Aws
