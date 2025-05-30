﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/evidently/CloudWatchEvidently_EXPORTS.h>
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
namespace CloudWatchEvidently
{
namespace Model
{

  /**
   * <p>This structure contains the date and time that the experiment started and
   * ended.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/evidently-2021-02-01/ExperimentExecution">AWS
   * API Reference</a></p>
   */
  class ExperimentExecution
  {
  public:
    AWS_CLOUDWATCHEVIDENTLY_API ExperimentExecution() = default;
    AWS_CLOUDWATCHEVIDENTLY_API ExperimentExecution(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDWATCHEVIDENTLY_API ExperimentExecution& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDWATCHEVIDENTLY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The date and time that the experiment ended.</p>
     */
    inline const Aws::Utils::DateTime& GetEndedTime() const { return m_endedTime; }
    inline bool EndedTimeHasBeenSet() const { return m_endedTimeHasBeenSet; }
    template<typename EndedTimeT = Aws::Utils::DateTime>
    void SetEndedTime(EndedTimeT&& value) { m_endedTimeHasBeenSet = true; m_endedTime = std::forward<EndedTimeT>(value); }
    template<typename EndedTimeT = Aws::Utils::DateTime>
    ExperimentExecution& WithEndedTime(EndedTimeT&& value) { SetEndedTime(std::forward<EndedTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time that the experiment started.</p>
     */
    inline const Aws::Utils::DateTime& GetStartedTime() const { return m_startedTime; }
    inline bool StartedTimeHasBeenSet() const { return m_startedTimeHasBeenSet; }
    template<typename StartedTimeT = Aws::Utils::DateTime>
    void SetStartedTime(StartedTimeT&& value) { m_startedTimeHasBeenSet = true; m_startedTime = std::forward<StartedTimeT>(value); }
    template<typename StartedTimeT = Aws::Utils::DateTime>
    ExperimentExecution& WithStartedTime(StartedTimeT&& value) { SetStartedTime(std::forward<StartedTimeT>(value)); return *this;}
    ///@}
  private:

    Aws::Utils::DateTime m_endedTime{};
    bool m_endedTimeHasBeenSet = false;

    Aws::Utils::DateTime m_startedTime{};
    bool m_startedTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatchEvidently
} // namespace Aws
