/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/drs/Drs_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/drs/model/RecoveryResult.h>
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
namespace drs
{
namespace Model
{

  /**
   * <p>An object representing the Source Network recovery Lifecycle.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/drs-2020-02-26/RecoveryLifeCycle">AWS
   * API Reference</a></p>
   */
  class RecoveryLifeCycle
  {
  public:
    AWS_DRS_API RecoveryLifeCycle() = default;
    AWS_DRS_API RecoveryLifeCycle(Aws::Utils::Json::JsonView jsonValue);
    AWS_DRS_API RecoveryLifeCycle& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DRS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The date and time the last Source Network recovery was initiated.</p>
     */
    inline const Aws::Utils::DateTime& GetApiCallDateTime() const { return m_apiCallDateTime; }
    inline bool ApiCallDateTimeHasBeenSet() const { return m_apiCallDateTimeHasBeenSet; }
    template<typename ApiCallDateTimeT = Aws::Utils::DateTime>
    void SetApiCallDateTime(ApiCallDateTimeT&& value) { m_apiCallDateTimeHasBeenSet = true; m_apiCallDateTime = std::forward<ApiCallDateTimeT>(value); }
    template<typename ApiCallDateTimeT = Aws::Utils::DateTime>
    RecoveryLifeCycle& WithApiCallDateTime(ApiCallDateTimeT&& value) { SetApiCallDateTime(std::forward<ApiCallDateTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the Job that was used to last recover the Source Network.</p>
     */
    inline const Aws::String& GetJobID() const { return m_jobID; }
    inline bool JobIDHasBeenSet() const { return m_jobIDHasBeenSet; }
    template<typename JobIDT = Aws::String>
    void SetJobID(JobIDT&& value) { m_jobIDHasBeenSet = true; m_jobID = std::forward<JobIDT>(value); }
    template<typename JobIDT = Aws::String>
    RecoveryLifeCycle& WithJobID(JobIDT&& value) { SetJobID(std::forward<JobIDT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the last recovery status of this Source Network.</p>
     */
    inline RecoveryResult GetLastRecoveryResult() const { return m_lastRecoveryResult; }
    inline bool LastRecoveryResultHasBeenSet() const { return m_lastRecoveryResultHasBeenSet; }
    inline void SetLastRecoveryResult(RecoveryResult value) { m_lastRecoveryResultHasBeenSet = true; m_lastRecoveryResult = value; }
    inline RecoveryLifeCycle& WithLastRecoveryResult(RecoveryResult value) { SetLastRecoveryResult(value); return *this;}
    ///@}
  private:

    Aws::Utils::DateTime m_apiCallDateTime{};
    bool m_apiCallDateTimeHasBeenSet = false;

    Aws::String m_jobID;
    bool m_jobIDHasBeenSet = false;

    RecoveryResult m_lastRecoveryResult{RecoveryResult::NOT_SET};
    bool m_lastRecoveryResultHasBeenSet = false;
  };

} // namespace Model
} // namespace drs
} // namespace Aws
