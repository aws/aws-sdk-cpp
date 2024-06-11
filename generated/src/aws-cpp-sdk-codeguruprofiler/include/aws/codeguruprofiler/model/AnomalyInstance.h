/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codeguruprofiler/CodeGuruProfiler_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/codeguruprofiler/model/UserFeedback.h>
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
namespace CodeGuruProfiler
{
namespace Model
{

  /**
   * <p>The specific duration in which the metric is flagged as
   * anomalous.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codeguruprofiler-2019-07-18/AnomalyInstance">AWS
   * API Reference</a></p>
   */
  class AnomalyInstance
  {
  public:
    AWS_CODEGURUPROFILER_API AnomalyInstance();
    AWS_CODEGURUPROFILER_API AnomalyInstance(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEGURUPROFILER_API AnomalyInstance& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEGURUPROFILER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The end time of the period during which the metric is flagged as anomalous.
     * This is specified using the ISO 8601 format. For example,
     * 2020-06-01T13:15:02.001Z represents 1 millisecond past June 1, 2020 1:15:02 PM
     * UTC. </p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const{ return m_endTime; }
    inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }
    inline void SetEndTime(const Aws::Utils::DateTime& value) { m_endTimeHasBeenSet = true; m_endTime = value; }
    inline void SetEndTime(Aws::Utils::DateTime&& value) { m_endTimeHasBeenSet = true; m_endTime = std::move(value); }
    inline AnomalyInstance& WithEndTime(const Aws::Utils::DateTime& value) { SetEndTime(value); return *this;}
    inline AnomalyInstance& WithEndTime(Aws::Utils::DateTime&& value) { SetEndTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The universally unique identifier (UUID) of an instance of an anomaly in a
     * metric. </p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }
    inline AnomalyInstance& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline AnomalyInstance& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline AnomalyInstance& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The start time of the period during which the metric is flagged as
     * anomalous. This is specified using the ISO 8601 format. For example,
     * 2020-06-01T13:15:02.001Z represents 1 millisecond past June 1, 2020 1:15:02 PM
     * UTC. </p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const{ return m_startTime; }
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }
    inline void SetStartTime(const Aws::Utils::DateTime& value) { m_startTimeHasBeenSet = true; m_startTime = value; }
    inline void SetStartTime(Aws::Utils::DateTime&& value) { m_startTimeHasBeenSet = true; m_startTime = std::move(value); }
    inline AnomalyInstance& WithStartTime(const Aws::Utils::DateTime& value) { SetStartTime(value); return *this;}
    inline AnomalyInstance& WithStartTime(Aws::Utils::DateTime&& value) { SetStartTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Feedback type on a specific instance of anomaly submitted by the user.</p>
     */
    inline const UserFeedback& GetUserFeedback() const{ return m_userFeedback; }
    inline bool UserFeedbackHasBeenSet() const { return m_userFeedbackHasBeenSet; }
    inline void SetUserFeedback(const UserFeedback& value) { m_userFeedbackHasBeenSet = true; m_userFeedback = value; }
    inline void SetUserFeedback(UserFeedback&& value) { m_userFeedbackHasBeenSet = true; m_userFeedback = std::move(value); }
    inline AnomalyInstance& WithUserFeedback(const UserFeedback& value) { SetUserFeedback(value); return *this;}
    inline AnomalyInstance& WithUserFeedback(UserFeedback&& value) { SetUserFeedback(std::move(value)); return *this;}
    ///@}
  private:

    Aws::Utils::DateTime m_endTime;
    bool m_endTimeHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::Utils::DateTime m_startTime;
    bool m_startTimeHasBeenSet = false;

    UserFeedback m_userFeedback;
    bool m_userFeedbackHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeGuruProfiler
} // namespace Aws
