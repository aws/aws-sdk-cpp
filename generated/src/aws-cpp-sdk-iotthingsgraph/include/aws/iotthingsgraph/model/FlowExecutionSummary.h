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
    AWS_IOTTHINGSGRAPH_API FlowExecutionSummary();
    AWS_IOTTHINGSGRAPH_API FlowExecutionSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTTHINGSGRAPH_API FlowExecutionSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTTHINGSGRAPH_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the flow execution.</p>
     */
    inline const Aws::String& GetFlowExecutionId() const{ return m_flowExecutionId; }
    inline bool FlowExecutionIdHasBeenSet() const { return m_flowExecutionIdHasBeenSet; }
    inline void SetFlowExecutionId(const Aws::String& value) { m_flowExecutionIdHasBeenSet = true; m_flowExecutionId = value; }
    inline void SetFlowExecutionId(Aws::String&& value) { m_flowExecutionIdHasBeenSet = true; m_flowExecutionId = std::move(value); }
    inline void SetFlowExecutionId(const char* value) { m_flowExecutionIdHasBeenSet = true; m_flowExecutionId.assign(value); }
    inline FlowExecutionSummary& WithFlowExecutionId(const Aws::String& value) { SetFlowExecutionId(value); return *this;}
    inline FlowExecutionSummary& WithFlowExecutionId(Aws::String&& value) { SetFlowExecutionId(std::move(value)); return *this;}
    inline FlowExecutionSummary& WithFlowExecutionId(const char* value) { SetFlowExecutionId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current status of the flow execution.</p>
     */
    inline const FlowExecutionStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const FlowExecutionStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(FlowExecutionStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline FlowExecutionSummary& WithStatus(const FlowExecutionStatus& value) { SetStatus(value); return *this;}
    inline FlowExecutionSummary& WithStatus(FlowExecutionStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the system instance that contains the flow.</p>
     */
    inline const Aws::String& GetSystemInstanceId() const{ return m_systemInstanceId; }
    inline bool SystemInstanceIdHasBeenSet() const { return m_systemInstanceIdHasBeenSet; }
    inline void SetSystemInstanceId(const Aws::String& value) { m_systemInstanceIdHasBeenSet = true; m_systemInstanceId = value; }
    inline void SetSystemInstanceId(Aws::String&& value) { m_systemInstanceIdHasBeenSet = true; m_systemInstanceId = std::move(value); }
    inline void SetSystemInstanceId(const char* value) { m_systemInstanceIdHasBeenSet = true; m_systemInstanceId.assign(value); }
    inline FlowExecutionSummary& WithSystemInstanceId(const Aws::String& value) { SetSystemInstanceId(value); return *this;}
    inline FlowExecutionSummary& WithSystemInstanceId(Aws::String&& value) { SetSystemInstanceId(std::move(value)); return *this;}
    inline FlowExecutionSummary& WithSystemInstanceId(const char* value) { SetSystemInstanceId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the flow.</p>
     */
    inline const Aws::String& GetFlowTemplateId() const{ return m_flowTemplateId; }
    inline bool FlowTemplateIdHasBeenSet() const { return m_flowTemplateIdHasBeenSet; }
    inline void SetFlowTemplateId(const Aws::String& value) { m_flowTemplateIdHasBeenSet = true; m_flowTemplateId = value; }
    inline void SetFlowTemplateId(Aws::String&& value) { m_flowTemplateIdHasBeenSet = true; m_flowTemplateId = std::move(value); }
    inline void SetFlowTemplateId(const char* value) { m_flowTemplateIdHasBeenSet = true; m_flowTemplateId.assign(value); }
    inline FlowExecutionSummary& WithFlowTemplateId(const Aws::String& value) { SetFlowTemplateId(value); return *this;}
    inline FlowExecutionSummary& WithFlowTemplateId(Aws::String&& value) { SetFlowTemplateId(std::move(value)); return *this;}
    inline FlowExecutionSummary& WithFlowTemplateId(const char* value) { SetFlowTemplateId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time when the flow execution summary was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }
    inline FlowExecutionSummary& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}
    inline FlowExecutionSummary& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time when the flow execution summary was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedAt() const{ return m_updatedAt; }
    inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }
    inline void SetUpdatedAt(const Aws::Utils::DateTime& value) { m_updatedAtHasBeenSet = true; m_updatedAt = value; }
    inline void SetUpdatedAt(Aws::Utils::DateTime&& value) { m_updatedAtHasBeenSet = true; m_updatedAt = std::move(value); }
    inline FlowExecutionSummary& WithUpdatedAt(const Aws::Utils::DateTime& value) { SetUpdatedAt(value); return *this;}
    inline FlowExecutionSummary& WithUpdatedAt(Aws::Utils::DateTime&& value) { SetUpdatedAt(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_flowExecutionId;
    bool m_flowExecutionIdHasBeenSet = false;

    FlowExecutionStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_systemInstanceId;
    bool m_systemInstanceIdHasBeenSet = false;

    Aws::String m_flowTemplateId;
    bool m_flowTemplateIdHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt;
    bool m_createdAtHasBeenSet = false;

    Aws::Utils::DateTime m_updatedAt;
    bool m_updatedAtHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTThingsGraph
} // namespace Aws
