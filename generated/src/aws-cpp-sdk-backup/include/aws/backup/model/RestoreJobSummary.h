/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/backup/Backup_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/backup/model/RestoreJobState.h>
#include <aws/core/utils/DateTime.h>
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
namespace Backup
{
namespace Model
{

  /**
   * <p>This is a summary of restore jobs created or running within the most recent
   * 30 days.</p> <p>The returned summary may contain the following: Region, Account,
   * State, ResourceType, MessageCategory, StartTime, EndTime, and Count of included
   * jobs.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/backup-2018-11-15/RestoreJobSummary">AWS
   * API Reference</a></p>
   */
  class RestoreJobSummary
  {
  public:
    AWS_BACKUP_API RestoreJobSummary();
    AWS_BACKUP_API RestoreJobSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_BACKUP_API RestoreJobSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BACKUP_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Web Services Regions within the job summary.</p>
     */
    inline const Aws::String& GetRegion() const{ return m_region; }
    inline bool RegionHasBeenSet() const { return m_regionHasBeenSet; }
    inline void SetRegion(const Aws::String& value) { m_regionHasBeenSet = true; m_region = value; }
    inline void SetRegion(Aws::String&& value) { m_regionHasBeenSet = true; m_region = std::move(value); }
    inline void SetRegion(const char* value) { m_regionHasBeenSet = true; m_region.assign(value); }
    inline RestoreJobSummary& WithRegion(const Aws::String& value) { SetRegion(value); return *this;}
    inline RestoreJobSummary& WithRegion(Aws::String&& value) { SetRegion(std::move(value)); return *this;}
    inline RestoreJobSummary& WithRegion(const char* value) { SetRegion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The account ID that owns the jobs within the summary.</p>
     */
    inline const Aws::String& GetAccountId() const{ return m_accountId; }
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }
    inline void SetAccountId(const Aws::String& value) { m_accountIdHasBeenSet = true; m_accountId = value; }
    inline void SetAccountId(Aws::String&& value) { m_accountIdHasBeenSet = true; m_accountId = std::move(value); }
    inline void SetAccountId(const char* value) { m_accountIdHasBeenSet = true; m_accountId.assign(value); }
    inline RestoreJobSummary& WithAccountId(const Aws::String& value) { SetAccountId(value); return *this;}
    inline RestoreJobSummary& WithAccountId(Aws::String&& value) { SetAccountId(std::move(value)); return *this;}
    inline RestoreJobSummary& WithAccountId(const char* value) { SetAccountId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>This value is job count for jobs with the specified state.</p>
     */
    inline const RestoreJobState& GetState() const{ return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(const RestoreJobState& value) { m_stateHasBeenSet = true; m_state = value; }
    inline void SetState(RestoreJobState&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }
    inline RestoreJobSummary& WithState(const RestoreJobState& value) { SetState(value); return *this;}
    inline RestoreJobSummary& WithState(RestoreJobState&& value) { SetState(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>This value is the job count for the specified resource type. The request
     * <code>GetSupportedResourceTypes</code> returns strings for supported resource
     * types.</p>
     */
    inline const Aws::String& GetResourceType() const{ return m_resourceType; }
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }
    inline void SetResourceType(const Aws::String& value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }
    inline void SetResourceType(Aws::String&& value) { m_resourceTypeHasBeenSet = true; m_resourceType = std::move(value); }
    inline void SetResourceType(const char* value) { m_resourceTypeHasBeenSet = true; m_resourceType.assign(value); }
    inline RestoreJobSummary& WithResourceType(const Aws::String& value) { SetResourceType(value); return *this;}
    inline RestoreJobSummary& WithResourceType(Aws::String&& value) { SetResourceType(std::move(value)); return *this;}
    inline RestoreJobSummary& WithResourceType(const char* value) { SetResourceType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The value as a number of jobs in a job summary.</p>
     */
    inline int GetCount() const{ return m_count; }
    inline bool CountHasBeenSet() const { return m_countHasBeenSet; }
    inline void SetCount(int value) { m_countHasBeenSet = true; m_count = value; }
    inline RestoreJobSummary& WithCount(int value) { SetCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The value of time in number format of a job start time.</p> <p>This value is
     * the time in Unix format, Coordinated Universal Time (UTC), and accurate to
     * milliseconds. For example, the value 1516925490.087 represents Friday, January
     * 26, 2018 12:11:30.087 AM.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const{ return m_startTime; }
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }
    inline void SetStartTime(const Aws::Utils::DateTime& value) { m_startTimeHasBeenSet = true; m_startTime = value; }
    inline void SetStartTime(Aws::Utils::DateTime&& value) { m_startTimeHasBeenSet = true; m_startTime = std::move(value); }
    inline RestoreJobSummary& WithStartTime(const Aws::Utils::DateTime& value) { SetStartTime(value); return *this;}
    inline RestoreJobSummary& WithStartTime(Aws::Utils::DateTime&& value) { SetStartTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The value of time in number format of a job end time.</p> <p>This value is
     * the time in Unix format, Coordinated Universal Time (UTC), and accurate to
     * milliseconds. For example, the value 1516925490.087 represents Friday, January
     * 26, 2018 12:11:30.087 AM.</p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const{ return m_endTime; }
    inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }
    inline void SetEndTime(const Aws::Utils::DateTime& value) { m_endTimeHasBeenSet = true; m_endTime = value; }
    inline void SetEndTime(Aws::Utils::DateTime&& value) { m_endTimeHasBeenSet = true; m_endTime = std::move(value); }
    inline RestoreJobSummary& WithEndTime(const Aws::Utils::DateTime& value) { SetEndTime(value); return *this;}
    inline RestoreJobSummary& WithEndTime(Aws::Utils::DateTime&& value) { SetEndTime(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_region;
    bool m_regionHasBeenSet = false;

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet = false;

    RestoreJobState m_state;
    bool m_stateHasBeenSet = false;

    Aws::String m_resourceType;
    bool m_resourceTypeHasBeenSet = false;

    int m_count;
    bool m_countHasBeenSet = false;

    Aws::Utils::DateTime m_startTime;
    bool m_startTimeHasBeenSet = false;

    Aws::Utils::DateTime m_endTime;
    bool m_endTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace Backup
} // namespace Aws
