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
    AWS_DRS_API RecoveryLifeCycle();
    AWS_DRS_API RecoveryLifeCycle(Aws::Utils::Json::JsonView jsonValue);
    AWS_DRS_API RecoveryLifeCycle& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DRS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The date and time the last Source Network recovery was initiated.</p>
     */
    inline const Aws::Utils::DateTime& GetApiCallDateTime() const{ return m_apiCallDateTime; }

    /**
     * <p>The date and time the last Source Network recovery was initiated.</p>
     */
    inline bool ApiCallDateTimeHasBeenSet() const { return m_apiCallDateTimeHasBeenSet; }

    /**
     * <p>The date and time the last Source Network recovery was initiated.</p>
     */
    inline void SetApiCallDateTime(const Aws::Utils::DateTime& value) { m_apiCallDateTimeHasBeenSet = true; m_apiCallDateTime = value; }

    /**
     * <p>The date and time the last Source Network recovery was initiated.</p>
     */
    inline void SetApiCallDateTime(Aws::Utils::DateTime&& value) { m_apiCallDateTimeHasBeenSet = true; m_apiCallDateTime = std::move(value); }

    /**
     * <p>The date and time the last Source Network recovery was initiated.</p>
     */
    inline RecoveryLifeCycle& WithApiCallDateTime(const Aws::Utils::DateTime& value) { SetApiCallDateTime(value); return *this;}

    /**
     * <p>The date and time the last Source Network recovery was initiated.</p>
     */
    inline RecoveryLifeCycle& WithApiCallDateTime(Aws::Utils::DateTime&& value) { SetApiCallDateTime(std::move(value)); return *this;}


    /**
     * <p>The ID of the Job that was used to last recover the Source Network.</p>
     */
    inline const Aws::String& GetJobID() const{ return m_jobID; }

    /**
     * <p>The ID of the Job that was used to last recover the Source Network.</p>
     */
    inline bool JobIDHasBeenSet() const { return m_jobIDHasBeenSet; }

    /**
     * <p>The ID of the Job that was used to last recover the Source Network.</p>
     */
    inline void SetJobID(const Aws::String& value) { m_jobIDHasBeenSet = true; m_jobID = value; }

    /**
     * <p>The ID of the Job that was used to last recover the Source Network.</p>
     */
    inline void SetJobID(Aws::String&& value) { m_jobIDHasBeenSet = true; m_jobID = std::move(value); }

    /**
     * <p>The ID of the Job that was used to last recover the Source Network.</p>
     */
    inline void SetJobID(const char* value) { m_jobIDHasBeenSet = true; m_jobID.assign(value); }

    /**
     * <p>The ID of the Job that was used to last recover the Source Network.</p>
     */
    inline RecoveryLifeCycle& WithJobID(const Aws::String& value) { SetJobID(value); return *this;}

    /**
     * <p>The ID of the Job that was used to last recover the Source Network.</p>
     */
    inline RecoveryLifeCycle& WithJobID(Aws::String&& value) { SetJobID(std::move(value)); return *this;}

    /**
     * <p>The ID of the Job that was used to last recover the Source Network.</p>
     */
    inline RecoveryLifeCycle& WithJobID(const char* value) { SetJobID(value); return *this;}


    /**
     * <p>The status of the last recovery status of this Source Network.</p>
     */
    inline const RecoveryResult& GetLastRecoveryResult() const{ return m_lastRecoveryResult; }

    /**
     * <p>The status of the last recovery status of this Source Network.</p>
     */
    inline bool LastRecoveryResultHasBeenSet() const { return m_lastRecoveryResultHasBeenSet; }

    /**
     * <p>The status of the last recovery status of this Source Network.</p>
     */
    inline void SetLastRecoveryResult(const RecoveryResult& value) { m_lastRecoveryResultHasBeenSet = true; m_lastRecoveryResult = value; }

    /**
     * <p>The status of the last recovery status of this Source Network.</p>
     */
    inline void SetLastRecoveryResult(RecoveryResult&& value) { m_lastRecoveryResultHasBeenSet = true; m_lastRecoveryResult = std::move(value); }

    /**
     * <p>The status of the last recovery status of this Source Network.</p>
     */
    inline RecoveryLifeCycle& WithLastRecoveryResult(const RecoveryResult& value) { SetLastRecoveryResult(value); return *this;}

    /**
     * <p>The status of the last recovery status of this Source Network.</p>
     */
    inline RecoveryLifeCycle& WithLastRecoveryResult(RecoveryResult&& value) { SetLastRecoveryResult(std::move(value)); return *this;}

  private:

    Aws::Utils::DateTime m_apiCallDateTime;
    bool m_apiCallDateTimeHasBeenSet = false;

    Aws::String m_jobID;
    bool m_jobIDHasBeenSet = false;

    RecoveryResult m_lastRecoveryResult;
    bool m_lastRecoveryResultHasBeenSet = false;
  };

} // namespace Model
} // namespace drs
} // namespace Aws
