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
    AWS_DATAZONE_API OpenLineageRunEventSummary() = default;
    AWS_DATAZONE_API OpenLineageRunEventSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API OpenLineageRunEventSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The event type of the open lineage run event summary.</p>
     */
    inline OpenLineageRunState GetEventType() const { return m_eventType; }
    inline bool EventTypeHasBeenSet() const { return m_eventTypeHasBeenSet; }
    inline void SetEventType(OpenLineageRunState value) { m_eventTypeHasBeenSet = true; m_eventType = value; }
    inline OpenLineageRunEventSummary& WithEventType(OpenLineageRunState value) { SetEventType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The inputs of the open lineage run event summary.</p>
     */
    inline const Aws::Vector<NameIdentifier>& GetInputs() const { return m_inputs; }
    inline bool InputsHasBeenSet() const { return m_inputsHasBeenSet; }
    template<typename InputsT = Aws::Vector<NameIdentifier>>
    void SetInputs(InputsT&& value) { m_inputsHasBeenSet = true; m_inputs = std::forward<InputsT>(value); }
    template<typename InputsT = Aws::Vector<NameIdentifier>>
    OpenLineageRunEventSummary& WithInputs(InputsT&& value) { SetInputs(std::forward<InputsT>(value)); return *this;}
    template<typename InputsT = NameIdentifier>
    OpenLineageRunEventSummary& AddInputs(InputsT&& value) { m_inputsHasBeenSet = true; m_inputs.emplace_back(std::forward<InputsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The job of the open lineage run event summary.</p>
     */
    inline const NameIdentifier& GetJob() const { return m_job; }
    inline bool JobHasBeenSet() const { return m_jobHasBeenSet; }
    template<typename JobT = NameIdentifier>
    void SetJob(JobT&& value) { m_jobHasBeenSet = true; m_job = std::forward<JobT>(value); }
    template<typename JobT = NameIdentifier>
    OpenLineageRunEventSummary& WithJob(JobT&& value) { SetJob(std::forward<JobT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The outputs of the open lineage run event summary.</p>
     */
    inline const Aws::Vector<NameIdentifier>& GetOutputs() const { return m_outputs; }
    inline bool OutputsHasBeenSet() const { return m_outputsHasBeenSet; }
    template<typename OutputsT = Aws::Vector<NameIdentifier>>
    void SetOutputs(OutputsT&& value) { m_outputsHasBeenSet = true; m_outputs = std::forward<OutputsT>(value); }
    template<typename OutputsT = Aws::Vector<NameIdentifier>>
    OpenLineageRunEventSummary& WithOutputs(OutputsT&& value) { SetOutputs(std::forward<OutputsT>(value)); return *this;}
    template<typename OutputsT = NameIdentifier>
    OpenLineageRunEventSummary& AddOutputs(OutputsT&& value) { m_outputsHasBeenSet = true; m_outputs.emplace_back(std::forward<OutputsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The runID of the open lineage run event summary.</p>
     */
    inline const Aws::String& GetRunId() const { return m_runId; }
    inline bool RunIdHasBeenSet() const { return m_runIdHasBeenSet; }
    template<typename RunIdT = Aws::String>
    void SetRunId(RunIdT&& value) { m_runIdHasBeenSet = true; m_runId = std::forward<RunIdT>(value); }
    template<typename RunIdT = Aws::String>
    OpenLineageRunEventSummary& WithRunId(RunIdT&& value) { SetRunId(std::forward<RunIdT>(value)); return *this;}
    ///@}
  private:

    OpenLineageRunState m_eventType{OpenLineageRunState::NOT_SET};
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
