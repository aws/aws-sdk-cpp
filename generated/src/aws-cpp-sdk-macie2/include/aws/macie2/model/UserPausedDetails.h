/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/macie2/Macie2_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace Macie2
{
namespace Model
{

  /**
   * <p>Provides information about when a classification job was paused. For a
   * one-time job, this object also specifies when the job will expire and be
   * cancelled if it isn't resumed. For a recurring job, this object also specifies
   * when the paused job run will expire and be cancelled if it isn't resumed. This
   * object is present only if a job's current status (jobStatus) is USER_PAUSED. The
   * information in this object applies only to a job that was paused while it had a
   * status of RUNNING.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/UserPausedDetails">AWS
   * API Reference</a></p>
   */
  class UserPausedDetails
  {
  public:
    AWS_MACIE2_API UserPausedDetails() = default;
    AWS_MACIE2_API UserPausedDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_MACIE2_API UserPausedDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MACIE2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The date and time, in UTC and extended ISO 8601 format, when the job or job
     * run will expire and be cancelled if you don't resume it first.</p>
     */
    inline const Aws::Utils::DateTime& GetJobExpiresAt() const { return m_jobExpiresAt; }
    inline bool JobExpiresAtHasBeenSet() const { return m_jobExpiresAtHasBeenSet; }
    template<typename JobExpiresAtT = Aws::Utils::DateTime>
    void SetJobExpiresAt(JobExpiresAtT&& value) { m_jobExpiresAtHasBeenSet = true; m_jobExpiresAt = std::forward<JobExpiresAtT>(value); }
    template<typename JobExpiresAtT = Aws::Utils::DateTime>
    UserPausedDetails& WithJobExpiresAt(JobExpiresAtT&& value) { SetJobExpiresAt(std::forward<JobExpiresAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the Health event that Amazon Macie sent to
     * notify you of the job or job run's pending expiration and cancellation. This
     * value is null if a job has been paused for less than 23 days.</p>
     */
    inline const Aws::String& GetJobImminentExpirationHealthEventArn() const { return m_jobImminentExpirationHealthEventArn; }
    inline bool JobImminentExpirationHealthEventArnHasBeenSet() const { return m_jobImminentExpirationHealthEventArnHasBeenSet; }
    template<typename JobImminentExpirationHealthEventArnT = Aws::String>
    void SetJobImminentExpirationHealthEventArn(JobImminentExpirationHealthEventArnT&& value) { m_jobImminentExpirationHealthEventArnHasBeenSet = true; m_jobImminentExpirationHealthEventArn = std::forward<JobImminentExpirationHealthEventArnT>(value); }
    template<typename JobImminentExpirationHealthEventArnT = Aws::String>
    UserPausedDetails& WithJobImminentExpirationHealthEventArn(JobImminentExpirationHealthEventArnT&& value) { SetJobImminentExpirationHealthEventArn(std::forward<JobImminentExpirationHealthEventArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time, in UTC and extended ISO 8601 format, when you paused the
     * job.</p>
     */
    inline const Aws::Utils::DateTime& GetJobPausedAt() const { return m_jobPausedAt; }
    inline bool JobPausedAtHasBeenSet() const { return m_jobPausedAtHasBeenSet; }
    template<typename JobPausedAtT = Aws::Utils::DateTime>
    void SetJobPausedAt(JobPausedAtT&& value) { m_jobPausedAtHasBeenSet = true; m_jobPausedAt = std::forward<JobPausedAtT>(value); }
    template<typename JobPausedAtT = Aws::Utils::DateTime>
    UserPausedDetails& WithJobPausedAt(JobPausedAtT&& value) { SetJobPausedAt(std::forward<JobPausedAtT>(value)); return *this;}
    ///@}
  private:

    Aws::Utils::DateTime m_jobExpiresAt{};
    bool m_jobExpiresAtHasBeenSet = false;

    Aws::String m_jobImminentExpirationHealthEventArn;
    bool m_jobImminentExpirationHealthEventArnHasBeenSet = false;

    Aws::Utils::DateTime m_jobPausedAt{};
    bool m_jobPausedAtHasBeenSet = false;
  };

} // namespace Model
} // namespace Macie2
} // namespace Aws
