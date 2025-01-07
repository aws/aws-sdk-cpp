/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datazone/DataZone_EXPORTS.h>
#include <aws/datazone/model/OpenLineageRunState.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/datazone/model/NameIdentifier.h>
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
namespace DataZone
{
namespace Model
{

  /**
   * <p>The open lineage run event summary.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/OpenLineageRunEventSummary">AWS
   * API Reference</a></p>
   */
  class OpenLineageRunEventSummary
  {
  public:
    AWS_DATAZONE_API OpenLineageRunEventSummary();
    AWS_DATAZONE_API OpenLineageRunEventSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API OpenLineageRunEventSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The event type of the open lineage run event summary.</p>
     */
    inline const OpenLineageRunState& GetEventType() const{ return m_eventType; }
    inline bool EventTypeHasBeenSet() const { return m_eventTypeHasBeenSet; }
    inline void SetEventType(const OpenLineageRunState& value) { m_eventTypeHasBeenSet = true; m_eventType = value; }
    inline void SetEventType(OpenLineageRunState&& value) { m_eventTypeHasBeenSet = true; m_eventType = std::move(value); }
    inline OpenLineageRunEventSummary& WithEventType(const OpenLineageRunState& value) { SetEventType(value); return *this;}
    inline OpenLineageRunEventSummary& WithEventType(OpenLineageRunState&& value) { SetEventType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The inputs of the open lineage run event summary.</p>
     */
    inline const Aws::Vector<NameIdentifier>& GetInputs() const{ return m_inputs; }
    inline bool InputsHasBeenSet() const { return m_inputsHasBeenSet; }
    inline void SetInputs(const Aws::Vector<NameIdentifier>& value) { m_inputsHasBeenSet = true; m_inputs = value; }
    inline void SetInputs(Aws::Vector<NameIdentifier>&& value) { m_inputsHasBeenSet = true; m_inputs = std::move(value); }
    inline OpenLineageRunEventSummary& WithInputs(const Aws::Vector<NameIdentifier>& value) { SetInputs(value); return *this;}
    inline OpenLineageRunEventSummary& WithInputs(Aws::Vector<NameIdentifier>&& value) { SetInputs(std::move(value)); return *this;}
    inline OpenLineageRunEventSummary& AddInputs(const NameIdentifier& value) { m_inputsHasBeenSet = true; m_inputs.push_back(value); return *this; }
    inline OpenLineageRunEventSummary& AddInputs(NameIdentifier&& value) { m_inputsHasBeenSet = true; m_inputs.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The job of the open lineage run event summary.</p>
     */
    inline const NameIdentifier& GetJob() const{ return m_job; }
    inline bool JobHasBeenSet() const { return m_jobHasBeenSet; }
    inline void SetJob(const NameIdentifier& value) { m_jobHasBeenSet = true; m_job = value; }
    inline void SetJob(NameIdentifier&& value) { m_jobHasBeenSet = true; m_job = std::move(value); }
    inline OpenLineageRunEventSummary& WithJob(const NameIdentifier& value) { SetJob(value); return *this;}
    inline OpenLineageRunEventSummary& WithJob(NameIdentifier&& value) { SetJob(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The outputs of the open lineage run event summary.</p>
     */
    inline const Aws::Vector<NameIdentifier>& GetOutputs() const{ return m_outputs; }
    inline bool OutputsHasBeenSet() const { return m_outputsHasBeenSet; }
    inline void SetOutputs(const Aws::Vector<NameIdentifier>& value) { m_outputsHasBeenSet = true; m_outputs = value; }
    inline void SetOutputs(Aws::Vector<NameIdentifier>&& value) { m_outputsHasBeenSet = true; m_outputs = std::move(value); }
    inline OpenLineageRunEventSummary& WithOutputs(const Aws::Vector<NameIdentifier>& value) { SetOutputs(value); return *this;}
    inline OpenLineageRunEventSummary& WithOutputs(Aws::Vector<NameIdentifier>&& value) { SetOutputs(std::move(value)); return *this;}
    inline OpenLineageRunEventSummary& AddOutputs(const NameIdentifier& value) { m_outputsHasBeenSet = true; m_outputs.push_back(value); return *this; }
    inline OpenLineageRunEventSummary& AddOutputs(NameIdentifier&& value) { m_outputsHasBeenSet = true; m_outputs.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The runID of the open lineage run event summary.</p>
     */
    inline const Aws::String& GetRunId() const{ return m_runId; }
    inline bool RunIdHasBeenSet() const { return m_runIdHasBeenSet; }
    inline void SetRunId(const Aws::String& value) { m_runIdHasBeenSet = true; m_runId = value; }
    inline void SetRunId(Aws::String&& value) { m_runIdHasBeenSet = true; m_runId = std::move(value); }
    inline void SetRunId(const char* value) { m_runIdHasBeenSet = true; m_runId.assign(value); }
    inline OpenLineageRunEventSummary& WithRunId(const Aws::String& value) { SetRunId(value); return *this;}
    inline OpenLineageRunEventSummary& WithRunId(Aws::String&& value) { SetRunId(std::move(value)); return *this;}
    inline OpenLineageRunEventSummary& WithRunId(const char* value) { SetRunId(value); return *this;}
    ///@}
  private:

    OpenLineageRunState m_eventType;
    bool m_eventTypeHasBeenSet = false;

    Aws::Vector<NameIdentifier> m_inputs;
    bool m_inputsHasBeenSet = false;

    NameIdentifier m_job;
    bool m_jobHasBeenSet = false;

    Aws::Vector<NameIdentifier> m_outputs;
    bool m_outputsHasBeenSet = false;

    Aws::String m_runId;
    bool m_runIdHasBeenSet = false;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws
