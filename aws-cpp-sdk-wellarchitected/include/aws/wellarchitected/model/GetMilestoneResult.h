/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wellarchitected/WellArchitected_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/wellarchitected/model/Milestone.h>
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
   * <p>Output of a get milestone call.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/wellarchitected-2020-03-31/GetMilestoneOutput">AWS
   * API Reference</a></p>
   */
  class GetMilestoneResult
  {
  public:
    AWS_WELLARCHITECTED_API GetMilestoneResult();
    AWS_WELLARCHITECTED_API GetMilestoneResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_WELLARCHITECTED_API GetMilestoneResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    
    inline const Aws::String& GetWorkloadId() const{ return m_workloadId; }

    
    inline void SetWorkloadId(const Aws::String& value) { m_workloadId = value; }

    
    inline void SetWorkloadId(Aws::String&& value) { m_workloadId = std::move(value); }

    
    inline void SetWorkloadId(const char* value) { m_workloadId.assign(value); }

    
    inline GetMilestoneResult& WithWorkloadId(const Aws::String& value) { SetWorkloadId(value); return *this;}

    
    inline GetMilestoneResult& WithWorkloadId(Aws::String&& value) { SetWorkloadId(std::move(value)); return *this;}

    
    inline GetMilestoneResult& WithWorkloadId(const char* value) { SetWorkloadId(value); return *this;}


    
    inline const Milestone& GetMilestone() const{ return m_milestone; }

    
    inline void SetMilestone(const Milestone& value) { m_milestone = value; }

    
    inline void SetMilestone(Milestone&& value) { m_milestone = std::move(value); }

    
    inline GetMilestoneResult& WithMilestone(const Milestone& value) { SetMilestone(value); return *this;}

    
    inline GetMilestoneResult& WithMilestone(Milestone&& value) { SetMilestone(std::move(value)); return *this;}

  private:

    Aws::String m_workloadId;

    Milestone m_milestone;
  };

} // namespace Model
} // namespace WellArchitected
} // namespace Aws
