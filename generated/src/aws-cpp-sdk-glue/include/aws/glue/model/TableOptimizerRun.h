/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/glue/model/TableOptimizerEventType.h>
#include <aws/core/utils/DateTime.h>
#include <aws/glue/model/RunMetrics.h>
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
namespace Glue
{
namespace Model
{

  /**
   * <p>Contains details for a table optimizer run.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/TableOptimizerRun">AWS
   * API Reference</a></p>
   */
  class TableOptimizerRun
  {
  public:
    AWS_GLUE_API TableOptimizerRun();
    AWS_GLUE_API TableOptimizerRun(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API TableOptimizerRun& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>An event type representing the status of the table optimizer run.</p>
     */
    inline const TableOptimizerEventType& GetEventType() const{ return m_eventType; }
    inline bool EventTypeHasBeenSet() const { return m_eventTypeHasBeenSet; }
    inline void SetEventType(const TableOptimizerEventType& value) { m_eventTypeHasBeenSet = true; m_eventType = value; }
    inline void SetEventType(TableOptimizerEventType&& value) { m_eventTypeHasBeenSet = true; m_eventType = std::move(value); }
    inline TableOptimizerRun& WithEventType(const TableOptimizerEventType& value) { SetEventType(value); return *this;}
    inline TableOptimizerRun& WithEventType(TableOptimizerEventType&& value) { SetEventType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Represents the epoch timestamp at which the compaction job was started within
     * Lake Formation.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTimestamp() const{ return m_startTimestamp; }
    inline bool StartTimestampHasBeenSet() const { return m_startTimestampHasBeenSet; }
    inline void SetStartTimestamp(const Aws::Utils::DateTime& value) { m_startTimestampHasBeenSet = true; m_startTimestamp = value; }
    inline void SetStartTimestamp(Aws::Utils::DateTime&& value) { m_startTimestampHasBeenSet = true; m_startTimestamp = std::move(value); }
    inline TableOptimizerRun& WithStartTimestamp(const Aws::Utils::DateTime& value) { SetStartTimestamp(value); return *this;}
    inline TableOptimizerRun& WithStartTimestamp(Aws::Utils::DateTime&& value) { SetStartTimestamp(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Represents the epoch timestamp at which the compaction job ended.</p>
     */
    inline const Aws::Utils::DateTime& GetEndTimestamp() const{ return m_endTimestamp; }
    inline bool EndTimestampHasBeenSet() const { return m_endTimestampHasBeenSet; }
    inline void SetEndTimestamp(const Aws::Utils::DateTime& value) { m_endTimestampHasBeenSet = true; m_endTimestamp = value; }
    inline void SetEndTimestamp(Aws::Utils::DateTime&& value) { m_endTimestampHasBeenSet = true; m_endTimestamp = std::move(value); }
    inline TableOptimizerRun& WithEndTimestamp(const Aws::Utils::DateTime& value) { SetEndTimestamp(value); return *this;}
    inline TableOptimizerRun& WithEndTimestamp(Aws::Utils::DateTime&& value) { SetEndTimestamp(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A <code>RunMetrics</code> object containing metrics for the optimizer
     * run.</p>
     */
    inline const RunMetrics& GetMetrics() const{ return m_metrics; }
    inline bool MetricsHasBeenSet() const { return m_metricsHasBeenSet; }
    inline void SetMetrics(const RunMetrics& value) { m_metricsHasBeenSet = true; m_metrics = value; }
    inline void SetMetrics(RunMetrics&& value) { m_metricsHasBeenSet = true; m_metrics = std::move(value); }
    inline TableOptimizerRun& WithMetrics(const RunMetrics& value) { SetMetrics(value); return *this;}
    inline TableOptimizerRun& WithMetrics(RunMetrics&& value) { SetMetrics(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An error that occured during the optimizer run.</p>
     */
    inline const Aws::String& GetError() const{ return m_error; }
    inline bool ErrorHasBeenSet() const { return m_errorHasBeenSet; }
    inline void SetError(const Aws::String& value) { m_errorHasBeenSet = true; m_error = value; }
    inline void SetError(Aws::String&& value) { m_errorHasBeenSet = true; m_error = std::move(value); }
    inline void SetError(const char* value) { m_errorHasBeenSet = true; m_error.assign(value); }
    inline TableOptimizerRun& WithError(const Aws::String& value) { SetError(value); return *this;}
    inline TableOptimizerRun& WithError(Aws::String&& value) { SetError(std::move(value)); return *this;}
    inline TableOptimizerRun& WithError(const char* value) { SetError(value); return *this;}
    ///@}
  private:

    TableOptimizerEventType m_eventType;
    bool m_eventTypeHasBeenSet = false;

    Aws::Utils::DateTime m_startTimestamp;
    bool m_startTimestampHasBeenSet = false;

    Aws::Utils::DateTime m_endTimestamp;
    bool m_endTimestampHasBeenSet = false;

    RunMetrics m_metrics;
    bool m_metricsHasBeenSet = false;

    Aws::String m_error;
    bool m_errorHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
