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
#include <aws/datapipeline/DataPipeline_EXPORTS.h>
#include <aws/datapipeline/DataPipelineRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/datapipeline/model/Field.h>
#include <utility>

namespace Aws
{
namespace DataPipeline
{
namespace Model
{

  /**
   * <p>Contains the parameters for ReportTaskProgress.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/datapipeline-2012-10-29/ReportTaskProgressInput">AWS
   * API Reference</a></p>
   */
  class AWS_DATAPIPELINE_API ReportTaskProgressRequest : public DataPipelineRequest
  {
  public:
    ReportTaskProgressRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ReportTaskProgress"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The ID of the task assigned to the task runner. This value is provided in the
     * response for <a>PollForTask</a>.</p>
     */
    inline const Aws::String& GetTaskId() const{ return m_taskId; }

    /**
     * <p>The ID of the task assigned to the task runner. This value is provided in the
     * response for <a>PollForTask</a>.</p>
     */
    inline bool TaskIdHasBeenSet() const { return m_taskIdHasBeenSet; }

    /**
     * <p>The ID of the task assigned to the task runner. This value is provided in the
     * response for <a>PollForTask</a>.</p>
     */
    inline void SetTaskId(const Aws::String& value) { m_taskIdHasBeenSet = true; m_taskId = value; }

    /**
     * <p>The ID of the task assigned to the task runner. This value is provided in the
     * response for <a>PollForTask</a>.</p>
     */
    inline void SetTaskId(Aws::String&& value) { m_taskIdHasBeenSet = true; m_taskId = std::move(value); }

    /**
     * <p>The ID of the task assigned to the task runner. This value is provided in the
     * response for <a>PollForTask</a>.</p>
     */
    inline void SetTaskId(const char* value) { m_taskIdHasBeenSet = true; m_taskId.assign(value); }

    /**
     * <p>The ID of the task assigned to the task runner. This value is provided in the
     * response for <a>PollForTask</a>.</p>
     */
    inline ReportTaskProgressRequest& WithTaskId(const Aws::String& value) { SetTaskId(value); return *this;}

    /**
     * <p>The ID of the task assigned to the task runner. This value is provided in the
     * response for <a>PollForTask</a>.</p>
     */
    inline ReportTaskProgressRequest& WithTaskId(Aws::String&& value) { SetTaskId(std::move(value)); return *this;}

    /**
     * <p>The ID of the task assigned to the task runner. This value is provided in the
     * response for <a>PollForTask</a>.</p>
     */
    inline ReportTaskProgressRequest& WithTaskId(const char* value) { SetTaskId(value); return *this;}


    /**
     * <p>Key-value pairs that define the properties of the ReportTaskProgressInput
     * object.</p>
     */
    inline const Aws::Vector<Field>& GetFields() const{ return m_fields; }

    /**
     * <p>Key-value pairs that define the properties of the ReportTaskProgressInput
     * object.</p>
     */
    inline bool FieldsHasBeenSet() const { return m_fieldsHasBeenSet; }

    /**
     * <p>Key-value pairs that define the properties of the ReportTaskProgressInput
     * object.</p>
     */
    inline void SetFields(const Aws::Vector<Field>& value) { m_fieldsHasBeenSet = true; m_fields = value; }

    /**
     * <p>Key-value pairs that define the properties of the ReportTaskProgressInput
     * object.</p>
     */
    inline void SetFields(Aws::Vector<Field>&& value) { m_fieldsHasBeenSet = true; m_fields = std::move(value); }

    /**
     * <p>Key-value pairs that define the properties of the ReportTaskProgressInput
     * object.</p>
     */
    inline ReportTaskProgressRequest& WithFields(const Aws::Vector<Field>& value) { SetFields(value); return *this;}

    /**
     * <p>Key-value pairs that define the properties of the ReportTaskProgressInput
     * object.</p>
     */
    inline ReportTaskProgressRequest& WithFields(Aws::Vector<Field>&& value) { SetFields(std::move(value)); return *this;}

    /**
     * <p>Key-value pairs that define the properties of the ReportTaskProgressInput
     * object.</p>
     */
    inline ReportTaskProgressRequest& AddFields(const Field& value) { m_fieldsHasBeenSet = true; m_fields.push_back(value); return *this; }

    /**
     * <p>Key-value pairs that define the properties of the ReportTaskProgressInput
     * object.</p>
     */
    inline ReportTaskProgressRequest& AddFields(Field&& value) { m_fieldsHasBeenSet = true; m_fields.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_taskId;
    bool m_taskIdHasBeenSet;

    Aws::Vector<Field> m_fields;
    bool m_fieldsHasBeenSet;
  };

} // namespace Model
} // namespace DataPipeline
} // namespace Aws
