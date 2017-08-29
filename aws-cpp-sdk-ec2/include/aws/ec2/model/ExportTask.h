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
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/ExportToS3Task.h>
#include <aws/ec2/model/InstanceExportDetails.h>
#include <aws/ec2/model/ExportTaskState.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace EC2
{
namespace Model
{

  /**
   * <p>Describes an instance export task.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/ExportTask">AWS API
   * Reference</a></p>
   */
  class AWS_EC2_API ExportTask
  {
  public:
    ExportTask();
    ExportTask(const Aws::Utils::Xml::XmlNode& xmlNode);
    ExportTask& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>A description of the resource being exported.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A description of the resource being exported.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A description of the resource being exported.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>A description of the resource being exported.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>A description of the resource being exported.</p>
     */
    inline ExportTask& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A description of the resource being exported.</p>
     */
    inline ExportTask& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A description of the resource being exported.</p>
     */
    inline ExportTask& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The ID of the export task.</p>
     */
    inline const Aws::String& GetExportTaskId() const{ return m_exportTaskId; }

    /**
     * <p>The ID of the export task.</p>
     */
    inline void SetExportTaskId(const Aws::String& value) { m_exportTaskIdHasBeenSet = true; m_exportTaskId = value; }

    /**
     * <p>The ID of the export task.</p>
     */
    inline void SetExportTaskId(Aws::String&& value) { m_exportTaskIdHasBeenSet = true; m_exportTaskId = std::move(value); }

    /**
     * <p>The ID of the export task.</p>
     */
    inline void SetExportTaskId(const char* value) { m_exportTaskIdHasBeenSet = true; m_exportTaskId.assign(value); }

    /**
     * <p>The ID of the export task.</p>
     */
    inline ExportTask& WithExportTaskId(const Aws::String& value) { SetExportTaskId(value); return *this;}

    /**
     * <p>The ID of the export task.</p>
     */
    inline ExportTask& WithExportTaskId(Aws::String&& value) { SetExportTaskId(std::move(value)); return *this;}

    /**
     * <p>The ID of the export task.</p>
     */
    inline ExportTask& WithExportTaskId(const char* value) { SetExportTaskId(value); return *this;}


    /**
     * <p>Information about the export task.</p>
     */
    inline const ExportToS3Task& GetExportToS3Task() const{ return m_exportToS3Task; }

    /**
     * <p>Information about the export task.</p>
     */
    inline void SetExportToS3Task(const ExportToS3Task& value) { m_exportToS3TaskHasBeenSet = true; m_exportToS3Task = value; }

    /**
     * <p>Information about the export task.</p>
     */
    inline void SetExportToS3Task(ExportToS3Task&& value) { m_exportToS3TaskHasBeenSet = true; m_exportToS3Task = std::move(value); }

    /**
     * <p>Information about the export task.</p>
     */
    inline ExportTask& WithExportToS3Task(const ExportToS3Task& value) { SetExportToS3Task(value); return *this;}

    /**
     * <p>Information about the export task.</p>
     */
    inline ExportTask& WithExportToS3Task(ExportToS3Task&& value) { SetExportToS3Task(std::move(value)); return *this;}


    /**
     * <p>Information about the instance to export.</p>
     */
    inline const InstanceExportDetails& GetInstanceExportDetails() const{ return m_instanceExportDetails; }

    /**
     * <p>Information about the instance to export.</p>
     */
    inline void SetInstanceExportDetails(const InstanceExportDetails& value) { m_instanceExportDetailsHasBeenSet = true; m_instanceExportDetails = value; }

    /**
     * <p>Information about the instance to export.</p>
     */
    inline void SetInstanceExportDetails(InstanceExportDetails&& value) { m_instanceExportDetailsHasBeenSet = true; m_instanceExportDetails = std::move(value); }

    /**
     * <p>Information about the instance to export.</p>
     */
    inline ExportTask& WithInstanceExportDetails(const InstanceExportDetails& value) { SetInstanceExportDetails(value); return *this;}

    /**
     * <p>Information about the instance to export.</p>
     */
    inline ExportTask& WithInstanceExportDetails(InstanceExportDetails&& value) { SetInstanceExportDetails(std::move(value)); return *this;}


    /**
     * <p>The state of the export task.</p>
     */
    inline const ExportTaskState& GetState() const{ return m_state; }

    /**
     * <p>The state of the export task.</p>
     */
    inline void SetState(const ExportTaskState& value) { m_stateHasBeenSet = true; m_state = value; }

    /**
     * <p>The state of the export task.</p>
     */
    inline void SetState(ExportTaskState&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }

    /**
     * <p>The state of the export task.</p>
     */
    inline ExportTask& WithState(const ExportTaskState& value) { SetState(value); return *this;}

    /**
     * <p>The state of the export task.</p>
     */
    inline ExportTask& WithState(ExportTaskState&& value) { SetState(std::move(value)); return *this;}


    /**
     * <p>The status message related to the export task.</p>
     */
    inline const Aws::String& GetStatusMessage() const{ return m_statusMessage; }

    /**
     * <p>The status message related to the export task.</p>
     */
    inline void SetStatusMessage(const Aws::String& value) { m_statusMessageHasBeenSet = true; m_statusMessage = value; }

    /**
     * <p>The status message related to the export task.</p>
     */
    inline void SetStatusMessage(Aws::String&& value) { m_statusMessageHasBeenSet = true; m_statusMessage = std::move(value); }

    /**
     * <p>The status message related to the export task.</p>
     */
    inline void SetStatusMessage(const char* value) { m_statusMessageHasBeenSet = true; m_statusMessage.assign(value); }

    /**
     * <p>The status message related to the export task.</p>
     */
    inline ExportTask& WithStatusMessage(const Aws::String& value) { SetStatusMessage(value); return *this;}

    /**
     * <p>The status message related to the export task.</p>
     */
    inline ExportTask& WithStatusMessage(Aws::String&& value) { SetStatusMessage(std::move(value)); return *this;}

    /**
     * <p>The status message related to the export task.</p>
     */
    inline ExportTask& WithStatusMessage(const char* value) { SetStatusMessage(value); return *this;}

  private:

    Aws::String m_description;
    bool m_descriptionHasBeenSet;

    Aws::String m_exportTaskId;
    bool m_exportTaskIdHasBeenSet;

    ExportToS3Task m_exportToS3Task;
    bool m_exportToS3TaskHasBeenSet;

    InstanceExportDetails m_instanceExportDetails;
    bool m_instanceExportDetailsHasBeenSet;

    ExportTaskState m_state;
    bool m_stateHasBeenSet;

    Aws::String m_statusMessage;
    bool m_statusMessageHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
