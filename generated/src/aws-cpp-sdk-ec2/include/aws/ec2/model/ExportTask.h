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


    ///@{
    /**
     * <p>A description of the resource being exported.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline ExportTask& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline ExportTask& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline ExportTask& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the export task.</p>
     */
    inline const Aws::String& GetExportTaskId() const{ return m_exportTaskId; }
    inline bool ExportTaskIdHasBeenSet() const { return m_exportTaskIdHasBeenSet; }
    inline void SetExportTaskId(const Aws::String& value) { m_exportTaskIdHasBeenSet = true; m_exportTaskId = value; }
    inline void SetExportTaskId(Aws::String&& value) { m_exportTaskIdHasBeenSet = true; m_exportTaskId = std::move(value); }
    inline void SetExportTaskId(const char* value) { m_exportTaskIdHasBeenSet = true; m_exportTaskId.assign(value); }
    inline ExportTask& WithExportTaskId(const Aws::String& value) { SetExportTaskId(value); return *this;}
    inline ExportTask& WithExportTaskId(Aws::String&& value) { SetExportTaskId(std::move(value)); return *this;}
    inline ExportTask& WithExportTaskId(const char* value) { SetExportTaskId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the export task.</p>
     */
    inline const ExportToS3Task& GetExportToS3Task() const{ return m_exportToS3Task; }
    inline bool ExportToS3TaskHasBeenSet() const { return m_exportToS3TaskHasBeenSet; }
    inline void SetExportToS3Task(const ExportToS3Task& value) { m_exportToS3TaskHasBeenSet = true; m_exportToS3Task = value; }
    inline void SetExportToS3Task(ExportToS3Task&& value) { m_exportToS3TaskHasBeenSet = true; m_exportToS3Task = std::move(value); }
    inline ExportTask& WithExportToS3Task(const ExportToS3Task& value) { SetExportToS3Task(value); return *this;}
    inline ExportTask& WithExportToS3Task(ExportToS3Task&& value) { SetExportToS3Task(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the instance to export.</p>
     */
    inline const InstanceExportDetails& GetInstanceExportDetails() const{ return m_instanceExportDetails; }
    inline bool InstanceExportDetailsHasBeenSet() const { return m_instanceExportDetailsHasBeenSet; }
    inline void SetInstanceExportDetails(const InstanceExportDetails& value) { m_instanceExportDetailsHasBeenSet = true; m_instanceExportDetails = value; }
    inline void SetInstanceExportDetails(InstanceExportDetails&& value) { m_instanceExportDetailsHasBeenSet = true; m_instanceExportDetails = std::move(value); }
    inline ExportTask& WithInstanceExportDetails(const InstanceExportDetails& value) { SetInstanceExportDetails(value); return *this;}
    inline ExportTask& WithInstanceExportDetails(InstanceExportDetails&& value) { SetInstanceExportDetails(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The state of the export task.</p>
     */
    inline const ExportTaskState& GetState() const{ return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(const ExportTaskState& value) { m_stateHasBeenSet = true; m_state = value; }
    inline void SetState(ExportTaskState&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }
    inline ExportTask& WithState(const ExportTaskState& value) { SetState(value); return *this;}
    inline ExportTask& WithState(ExportTaskState&& value) { SetState(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status message related to the export task.</p>
     */
    inline const Aws::String& GetStatusMessage() const{ return m_statusMessage; }
    inline bool StatusMessageHasBeenSet() const { return m_statusMessageHasBeenSet; }
    inline void SetStatusMessage(const Aws::String& value) { m_statusMessageHasBeenSet = true; m_statusMessage = value; }
    inline void SetStatusMessage(Aws::String&& value) { m_statusMessageHasBeenSet = true; m_statusMessage = std::move(value); }
    inline void SetStatusMessage(const char* value) { m_statusMessageHasBeenSet = true; m_statusMessage.assign(value); }
    inline ExportTask& WithStatusMessage(const Aws::String& value) { SetStatusMessage(value); return *this;}
    inline ExportTask& WithStatusMessage(Aws::String&& value) { SetStatusMessage(std::move(value)); return *this;}
    inline ExportTask& WithStatusMessage(const char* value) { SetStatusMessage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags for the export task.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline ExportTask& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}
    inline ExportTask& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}
    inline ExportTask& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }
    inline ExportTask& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }
    ///@}
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
