/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wellarchitected/WellArchitected_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/wellarchitected/model/Workload.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace WellArchitected
{
namespace Model
{

  /**
   * <p>A milestone return object.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/wellarchitected-2020-03-31/Milestone">AWS
   * API Reference</a></p>
   */
  class Milestone
  {
  public:
    AWS_WELLARCHITECTED_API Milestone();
    AWS_WELLARCHITECTED_API Milestone(Aws::Utils::Json::JsonView jsonValue);
    AWS_WELLARCHITECTED_API Milestone& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WELLARCHITECTED_API Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline int GetMilestoneNumber() const{ return m_milestoneNumber; }

    
    inline bool MilestoneNumberHasBeenSet() const { return m_milestoneNumberHasBeenSet; }

    
    inline void SetMilestoneNumber(int value) { m_milestoneNumberHasBeenSet = true; m_milestoneNumber = value; }

    
    inline Milestone& WithMilestoneNumber(int value) { SetMilestoneNumber(value); return *this;}


    
    inline const Aws::String& GetMilestoneName() const{ return m_milestoneName; }

    
    inline bool MilestoneNameHasBeenSet() const { return m_milestoneNameHasBeenSet; }

    
    inline void SetMilestoneName(const Aws::String& value) { m_milestoneNameHasBeenSet = true; m_milestoneName = value; }

    
    inline void SetMilestoneName(Aws::String&& value) { m_milestoneNameHasBeenSet = true; m_milestoneName = std::move(value); }

    
    inline void SetMilestoneName(const char* value) { m_milestoneNameHasBeenSet = true; m_milestoneName.assign(value); }

    
    inline Milestone& WithMilestoneName(const Aws::String& value) { SetMilestoneName(value); return *this;}

    
    inline Milestone& WithMilestoneName(Aws::String&& value) { SetMilestoneName(std::move(value)); return *this;}

    
    inline Milestone& WithMilestoneName(const char* value) { SetMilestoneName(value); return *this;}


    
    inline const Aws::Utils::DateTime& GetRecordedAt() const{ return m_recordedAt; }

    
    inline bool RecordedAtHasBeenSet() const { return m_recordedAtHasBeenSet; }

    
    inline void SetRecordedAt(const Aws::Utils::DateTime& value) { m_recordedAtHasBeenSet = true; m_recordedAt = value; }

    
    inline void SetRecordedAt(Aws::Utils::DateTime&& value) { m_recordedAtHasBeenSet = true; m_recordedAt = std::move(value); }

    
    inline Milestone& WithRecordedAt(const Aws::Utils::DateTime& value) { SetRecordedAt(value); return *this;}

    
    inline Milestone& WithRecordedAt(Aws::Utils::DateTime&& value) { SetRecordedAt(std::move(value)); return *this;}


    
    inline const Workload& GetWorkload() const{ return m_workload; }

    
    inline bool WorkloadHasBeenSet() const { return m_workloadHasBeenSet; }

    
    inline void SetWorkload(const Workload& value) { m_workloadHasBeenSet = true; m_workload = value; }

    
    inline void SetWorkload(Workload&& value) { m_workloadHasBeenSet = true; m_workload = std::move(value); }

    
    inline Milestone& WithWorkload(const Workload& value) { SetWorkload(value); return *this;}

    
    inline Milestone& WithWorkload(Workload&& value) { SetWorkload(std::move(value)); return *this;}

  private:

    int m_milestoneNumber;
    bool m_milestoneNumberHasBeenSet = false;

    Aws::String m_milestoneName;
    bool m_milestoneNameHasBeenSet = false;

    Aws::Utils::DateTime m_recordedAt;
    bool m_recordedAtHasBeenSet = false;

    Workload m_workload;
    bool m_workloadHasBeenSet = false;
  };

} // namespace Model
} // namespace WellArchitected
} // namespace Aws
