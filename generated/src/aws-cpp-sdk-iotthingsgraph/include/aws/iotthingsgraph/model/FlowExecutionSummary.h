/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotthingsgraph/IoTThingsGraph_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iotthingsgraph/model/FlowExecutionStatus.h>
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
namespace IoTThingsGraph
{
namespace Model
{

  /**
   * <p>An object that contains summary information about a flow
   * execution.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotthingsgraph-2018-09-06/FlowExecutionSummary">AWS
   * API Reference</a></p>
   */
  class FlowExecutionSummary
  {
  public:
    AWS_IOTTHINGSGRAPH_API FlowExecutionSummary() = default;
    AWS_IOTTHINGSGRAPH_API FlowExecutionSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTTHINGSGRAPH_API FlowExecutionSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTTHINGSGRAPH_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the flow execution.</p>
     */
    inline const Aws::String& GetFlowExecutionId() const { return m_flowExecutionId; }
    inline bool FlowExecutionIdHasBeenSet() const { return m_flowExecutionIdHasBeenSet; }
    template<typename FlowExecutionIdT = Aws::String>
    void SetFlowExecutionId(FlowExecutionIdT&& value) { m_flowExecutionIdHasBeenSet = true; m_flowExecutionId = std::forward<FlowExecutionIdT>(value); }
    template<typename FlowExecutionIdT = Aws::String>
    FlowExecutionSummary& WithFlowExecutionId(FlowExecutionIdT&& value) { SetFlowExecutionId(std::forward<FlowExecutionIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current status of the flow execution.</p>
     */
    inline FlowExecutionStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(FlowExecutionStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline FlowExecutionSummary& WithStatus(FlowExecutionStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the system instance that contains the flow.</p>
     */
    inline const Aws::String& GetSystemInstanceId() const { return m_systemInstanceId; }
    inline bool SystemInstanceIdHasBeenSet() const { return m_systemInstanceIdHasBeenSet; }
    template<typename SystemInstanceIdT = Aws::String>
    void SetSystemInstanceId(SystemInstanceIdT&& value) { m_systemInstanceIdHasBeenSet = true; m_systemInstanceId = std::forward<SystemInstanceIdT>(value); }
    template<typename SystemInstanceIdT = Aws::String>
    FlowExecutionSummary& WithSystemInstanceId(SystemInstanceIdT&& value) { SetSystemInstanceId(std::forward<SystemInstanceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the flow.</p>
     */
    inline const Aws::String& GetFlowTemplateId() const { return m_flowTemplateId; }
    inline bool FlowTemplateIdHasBeenSet() const { return m_flowTemplateIdHasBeenSet; }
    template<typename FlowTemplateIdT = Aws::String>
    void SetFlowTemplateId(FlowTemplateIdT&& value) { m_flowTemplateIdHasBeenSet = true; m_flowTemplateId = std::forward<FlowTemplateIdT>(value); }
    template<typename FlowTemplateIdT = Aws::String>
    FlowExecutionSummary& WithFlowTemplateId(FlowTemplateIdT&& value) { SetFlowTemplateId(std::forward<FlowTemplateIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time when the flow execution summary was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    void SetCreatedAt(CreatedAtT&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::forward<CreatedAtT>(value); }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    FlowExecutionSummary& WithCreatedAt(CreatedAtT&& value) { SetCreatedAt(std::forward<CreatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time when the flow execution summary was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedAt() const { return m_updatedAt; }
    inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }
    template<typename UpdatedAtT = Aws::Utils::DateTime>
    void SetUpdatedAt(UpdatedAtT&& value) { m_updatedAtHasBeenSet = true; m_updatedAt = std::forward<UpdatedAtT>(value); }
    template<typename UpdatedAtT = Aws::Utils::DateTime>
    FlowExecutionSummary& WithUpdatedAt(UpdatedAtT&& value) { SetUpdatedAt(std::forward<UpdatedAtT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_flowExecutionId;
    bool m_flowExecutionIdHasBeenSet = false;

    FlowExecutionStatus m_status{FlowExecutionStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::String m_systemInstanceId;
    bool m_systemInstanceIdHasBeenSet = false;

    Aws::String m_flowTemplateId;
    bool m_flowTemplateIdHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt{};
    bool m_createdAtHasBeenSet = false;

    Aws::Utils::DateTime m_updatedAt{};
    bool m_updatedAtHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTThingsGraph
} // namespace Aws
