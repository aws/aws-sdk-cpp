/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
  class AWS_IOTTHINGSGRAPH_API FlowExecutionSummary
  {
  public:
    FlowExecutionSummary();
    FlowExecutionSummary(Aws::Utils::Json::JsonView jsonValue);
    FlowExecutionSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ID of the flow execution.</p>
     */
    inline const Aws::String& GetFlowExecutionId() const{ return m_flowExecutionId; }

    /**
     * <p>The ID of the flow execution.</p>
     */
    inline bool FlowExecutionIdHasBeenSet() const { return m_flowExecutionIdHasBeenSet; }

    /**
     * <p>The ID of the flow execution.</p>
     */
    inline void SetFlowExecutionId(const Aws::String& value) { m_flowExecutionIdHasBeenSet = true; m_flowExecutionId = value; }

    /**
     * <p>The ID of the flow execution.</p>
     */
    inline void SetFlowExecutionId(Aws::String&& value) { m_flowExecutionIdHasBeenSet = true; m_flowExecutionId = std::move(value); }

    /**
     * <p>The ID of the flow execution.</p>
     */
    inline void SetFlowExecutionId(const char* value) { m_flowExecutionIdHasBeenSet = true; m_flowExecutionId.assign(value); }

    /**
     * <p>The ID of the flow execution.</p>
     */
    inline FlowExecutionSummary& WithFlowExecutionId(const Aws::String& value) { SetFlowExecutionId(value); return *this;}

    /**
     * <p>The ID of the flow execution.</p>
     */
    inline FlowExecutionSummary& WithFlowExecutionId(Aws::String&& value) { SetFlowExecutionId(std::move(value)); return *this;}

    /**
     * <p>The ID of the flow execution.</p>
     */
    inline FlowExecutionSummary& WithFlowExecutionId(const char* value) { SetFlowExecutionId(value); return *this;}


    /**
     * <p>The current status of the flow execution.</p>
     */
    inline const FlowExecutionStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The current status of the flow execution.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The current status of the flow execution.</p>
     */
    inline void SetStatus(const FlowExecutionStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The current status of the flow execution.</p>
     */
    inline void SetStatus(FlowExecutionStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The current status of the flow execution.</p>
     */
    inline FlowExecutionSummary& WithStatus(const FlowExecutionStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The current status of the flow execution.</p>
     */
    inline FlowExecutionSummary& WithStatus(FlowExecutionStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The ID of the system instance that contains the flow.</p>
     */
    inline const Aws::String& GetSystemInstanceId() const{ return m_systemInstanceId; }

    /**
     * <p>The ID of the system instance that contains the flow.</p>
     */
    inline bool SystemInstanceIdHasBeenSet() const { return m_systemInstanceIdHasBeenSet; }

    /**
     * <p>The ID of the system instance that contains the flow.</p>
     */
    inline void SetSystemInstanceId(const Aws::String& value) { m_systemInstanceIdHasBeenSet = true; m_systemInstanceId = value; }

    /**
     * <p>The ID of the system instance that contains the flow.</p>
     */
    inline void SetSystemInstanceId(Aws::String&& value) { m_systemInstanceIdHasBeenSet = true; m_systemInstanceId = std::move(value); }

    /**
     * <p>The ID of the system instance that contains the flow.</p>
     */
    inline void SetSystemInstanceId(const char* value) { m_systemInstanceIdHasBeenSet = true; m_systemInstanceId.assign(value); }

    /**
     * <p>The ID of the system instance that contains the flow.</p>
     */
    inline FlowExecutionSummary& WithSystemInstanceId(const Aws::String& value) { SetSystemInstanceId(value); return *this;}

    /**
     * <p>The ID of the system instance that contains the flow.</p>
     */
    inline FlowExecutionSummary& WithSystemInstanceId(Aws::String&& value) { SetSystemInstanceId(std::move(value)); return *this;}

    /**
     * <p>The ID of the system instance that contains the flow.</p>
     */
    inline FlowExecutionSummary& WithSystemInstanceId(const char* value) { SetSystemInstanceId(value); return *this;}


    /**
     * <p>The ID of the flow.</p>
     */
    inline const Aws::String& GetFlowTemplateId() const{ return m_flowTemplateId; }

    /**
     * <p>The ID of the flow.</p>
     */
    inline bool FlowTemplateIdHasBeenSet() const { return m_flowTemplateIdHasBeenSet; }

    /**
     * <p>The ID of the flow.</p>
     */
    inline void SetFlowTemplateId(const Aws::String& value) { m_flowTemplateIdHasBeenSet = true; m_flowTemplateId = value; }

    /**
     * <p>The ID of the flow.</p>
     */
    inline void SetFlowTemplateId(Aws::String&& value) { m_flowTemplateIdHasBeenSet = true; m_flowTemplateId = std::move(value); }

    /**
     * <p>The ID of the flow.</p>
     */
    inline void SetFlowTemplateId(const char* value) { m_flowTemplateIdHasBeenSet = true; m_flowTemplateId.assign(value); }

    /**
     * <p>The ID of the flow.</p>
     */
    inline FlowExecutionSummary& WithFlowTemplateId(const Aws::String& value) { SetFlowTemplateId(value); return *this;}

    /**
     * <p>The ID of the flow.</p>
     */
    inline FlowExecutionSummary& WithFlowTemplateId(Aws::String&& value) { SetFlowTemplateId(std::move(value)); return *this;}

    /**
     * <p>The ID of the flow.</p>
     */
    inline FlowExecutionSummary& WithFlowTemplateId(const char* value) { SetFlowTemplateId(value); return *this;}


    /**
     * <p>The date and time when the flow execution summary was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }

    /**
     * <p>The date and time when the flow execution summary was created.</p>
     */
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }

    /**
     * <p>The date and time when the flow execution summary was created.</p>
     */
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }

    /**
     * <p>The date and time when the flow execution summary was created.</p>
     */
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }

    /**
     * <p>The date and time when the flow execution summary was created.</p>
     */
    inline FlowExecutionSummary& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}

    /**
     * <p>The date and time when the flow execution summary was created.</p>
     */
    inline FlowExecutionSummary& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}


    /**
     * <p>The date and time when the flow execution summary was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedAt() const{ return m_updatedAt; }

    /**
     * <p>The date and time when the flow execution summary was last updated.</p>
     */
    inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }

    /**
     * <p>The date and time when the flow execution summary was last updated.</p>
     */
    inline void SetUpdatedAt(const Aws::Utils::DateTime& value) { m_updatedAtHasBeenSet = true; m_updatedAt = value; }

    /**
     * <p>The date and time when the flow execution summary was last updated.</p>
     */
    inline void SetUpdatedAt(Aws::Utils::DateTime&& value) { m_updatedAtHasBeenSet = true; m_updatedAt = std::move(value); }

    /**
     * <p>The date and time when the flow execution summary was last updated.</p>
     */
    inline FlowExecutionSummary& WithUpdatedAt(const Aws::Utils::DateTime& value) { SetUpdatedAt(value); return *this;}

    /**
     * <p>The date and time when the flow execution summary was last updated.</p>
     */
    inline FlowExecutionSummary& WithUpdatedAt(Aws::Utils::DateTime&& value) { SetUpdatedAt(std::move(value)); return *this;}

  private:

    Aws::String m_flowExecutionId;
    bool m_flowExecutionIdHasBeenSet;

    FlowExecutionStatus m_status;
    bool m_statusHasBeenSet;

    Aws::String m_systemInstanceId;
    bool m_systemInstanceIdHasBeenSet;

    Aws::String m_flowTemplateId;
    bool m_flowTemplateIdHasBeenSet;

    Aws::Utils::DateTime m_createdAt;
    bool m_createdAtHasBeenSet;

    Aws::Utils::DateTime m_updatedAt;
    bool m_updatedAtHasBeenSet;
  };

} // namespace Model
} // namespace IoTThingsGraph
} // namespace Aws
