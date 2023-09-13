/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/drs/Drs_EXPORTS.h>
#include <aws/drs/model/LaunchAction.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/drs/model/LaunchActionRunStatus.h>
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
   * <p>Launch action run.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/drs-2020-02-26/LaunchActionRun">AWS
   * API Reference</a></p>
   */
  class LaunchActionRun
  {
  public:
    AWS_DRS_API LaunchActionRun();
    AWS_DRS_API LaunchActionRun(Aws::Utils::Json::JsonView jsonValue);
    AWS_DRS_API LaunchActionRun& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DRS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Action.</p>
     */
    inline const LaunchAction& GetAction() const{ return m_action; }

    /**
     * <p>Action.</p>
     */
    inline bool ActionHasBeenSet() const { return m_actionHasBeenSet; }

    /**
     * <p>Action.</p>
     */
    inline void SetAction(const LaunchAction& value) { m_actionHasBeenSet = true; m_action = value; }

    /**
     * <p>Action.</p>
     */
    inline void SetAction(LaunchAction&& value) { m_actionHasBeenSet = true; m_action = std::move(value); }

    /**
     * <p>Action.</p>
     */
    inline LaunchActionRun& WithAction(const LaunchAction& value) { SetAction(value); return *this;}

    /**
     * <p>Action.</p>
     */
    inline LaunchActionRun& WithAction(LaunchAction&& value) { SetAction(std::move(value)); return *this;}


    /**
     * <p>Failure reason.</p>
     */
    inline const Aws::String& GetFailureReason() const{ return m_failureReason; }

    /**
     * <p>Failure reason.</p>
     */
    inline bool FailureReasonHasBeenSet() const { return m_failureReasonHasBeenSet; }

    /**
     * <p>Failure reason.</p>
     */
    inline void SetFailureReason(const Aws::String& value) { m_failureReasonHasBeenSet = true; m_failureReason = value; }

    /**
     * <p>Failure reason.</p>
     */
    inline void SetFailureReason(Aws::String&& value) { m_failureReasonHasBeenSet = true; m_failureReason = std::move(value); }

    /**
     * <p>Failure reason.</p>
     */
    inline void SetFailureReason(const char* value) { m_failureReasonHasBeenSet = true; m_failureReason.assign(value); }

    /**
     * <p>Failure reason.</p>
     */
    inline LaunchActionRun& WithFailureReason(const Aws::String& value) { SetFailureReason(value); return *this;}

    /**
     * <p>Failure reason.</p>
     */
    inline LaunchActionRun& WithFailureReason(Aws::String&& value) { SetFailureReason(std::move(value)); return *this;}

    /**
     * <p>Failure reason.</p>
     */
    inline LaunchActionRun& WithFailureReason(const char* value) { SetFailureReason(value); return *this;}


    /**
     * <p>Run Id.</p>
     */
    inline const Aws::String& GetRunId() const{ return m_runId; }

    /**
     * <p>Run Id.</p>
     */
    inline bool RunIdHasBeenSet() const { return m_runIdHasBeenSet; }

    /**
     * <p>Run Id.</p>
     */
    inline void SetRunId(const Aws::String& value) { m_runIdHasBeenSet = true; m_runId = value; }

    /**
     * <p>Run Id.</p>
     */
    inline void SetRunId(Aws::String&& value) { m_runIdHasBeenSet = true; m_runId = std::move(value); }

    /**
     * <p>Run Id.</p>
     */
    inline void SetRunId(const char* value) { m_runIdHasBeenSet = true; m_runId.assign(value); }

    /**
     * <p>Run Id.</p>
     */
    inline LaunchActionRun& WithRunId(const Aws::String& value) { SetRunId(value); return *this;}

    /**
     * <p>Run Id.</p>
     */
    inline LaunchActionRun& WithRunId(Aws::String&& value) { SetRunId(std::move(value)); return *this;}

    /**
     * <p>Run Id.</p>
     */
    inline LaunchActionRun& WithRunId(const char* value) { SetRunId(value); return *this;}


    /**
     * <p>Run status.</p>
     */
    inline const LaunchActionRunStatus& GetStatus() const{ return m_status; }

    /**
     * <p>Run status.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>Run status.</p>
     */
    inline void SetStatus(const LaunchActionRunStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>Run status.</p>
     */
    inline void SetStatus(LaunchActionRunStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>Run status.</p>
     */
    inline LaunchActionRun& WithStatus(const LaunchActionRunStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>Run status.</p>
     */
    inline LaunchActionRun& WithStatus(LaunchActionRunStatus&& value) { SetStatus(std::move(value)); return *this;}

  private:

    LaunchAction m_action;
    bool m_actionHasBeenSet = false;

    Aws::String m_failureReason;
    bool m_failureReasonHasBeenSet = false;

    Aws::String m_runId;
    bool m_runIdHasBeenSet = false;

    LaunchActionRunStatus m_status;
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace drs
} // namespace Aws
