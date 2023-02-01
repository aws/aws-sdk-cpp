/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/ExportToS3Task.h>
#include <aws/ec2/model/InstanceExportDetails.h>
#include <aws/ec2/model/ExportTaskState.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/Tag.h>
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
   * <p>Describes an export instance task.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/ExportTask">AWS API
   * Reference</a></p>
   */
  class ExportTask
  {
  public:
    AWS_EC2_API ExportTask();
    AWS_EC2_API ExportTask(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API ExportTask& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>A description of the resource being exported.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A description of the resource being exported.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

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
    inline bool ExportTaskIdHasBeenSet() const { return m_exportTaskIdHasBeenSet; }

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
    inline bool ExportToS3TaskHasBeenSet() const { return m_exportToS3TaskHasBeenSet; }

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
    inline bool InstanceExportDetailsHasBeenSet() const { return m_instanceExportDetailsHasBeenSet; }

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
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }

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
    inline bool StatusMessageHasBeenSet() const { return m_statusMessageHasBeenSet; }

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


    /**
     * <p>The tags for the export task.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>The tags for the export task.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>The tags for the export task.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The tags for the export task.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>The tags for the export task.</p>
     */
    inline ExportTask& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>The tags for the export task.</p>
     */
    inline ExportTask& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The tags for the export task.</p>
     */
    inline ExportTask& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>The tags for the export task.</p>
     */
    inline ExportTask& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_exportTaskId;
    bool m_exportTaskIdHasBeenSet = false;

    ExportToS3Task m_exportToS3Task;
    bool m_exportToS3TaskHasBeenSet = false;

    InstanceExportDetails m_instanceExportDetails;
    bool m_instanceExportDetailsHasBeenSet = false;

    ExportTaskState m_state;
    bool m_stateHasBeenSet = false;

    Aws::String m_statusMessage;
    bool m_statusMessageHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
