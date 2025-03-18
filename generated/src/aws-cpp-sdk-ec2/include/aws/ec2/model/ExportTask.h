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
    AWS_EC2_API ExportTask() = default;
    AWS_EC2_API ExportTask(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API ExportTask& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>A description of the resource being exported.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    ExportTask& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the export task.</p>
     */
    inline const Aws::String& GetExportTaskId() const { return m_exportTaskId; }
    inline bool ExportTaskIdHasBeenSet() const { return m_exportTaskIdHasBeenSet; }
    template<typename ExportTaskIdT = Aws::String>
    void SetExportTaskId(ExportTaskIdT&& value) { m_exportTaskIdHasBeenSet = true; m_exportTaskId = std::forward<ExportTaskIdT>(value); }
    template<typename ExportTaskIdT = Aws::String>
    ExportTask& WithExportTaskId(ExportTaskIdT&& value) { SetExportTaskId(std::forward<ExportTaskIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the export task.</p>
     */
    inline const ExportToS3Task& GetExportToS3Task() const { return m_exportToS3Task; }
    inline bool ExportToS3TaskHasBeenSet() const { return m_exportToS3TaskHasBeenSet; }
    template<typename ExportToS3TaskT = ExportToS3Task>
    void SetExportToS3Task(ExportToS3TaskT&& value) { m_exportToS3TaskHasBeenSet = true; m_exportToS3Task = std::forward<ExportToS3TaskT>(value); }
    template<typename ExportToS3TaskT = ExportToS3Task>
    ExportTask& WithExportToS3Task(ExportToS3TaskT&& value) { SetExportToS3Task(std::forward<ExportToS3TaskT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the instance to export.</p>
     */
    inline const InstanceExportDetails& GetInstanceExportDetails() const { return m_instanceExportDetails; }
    inline bool InstanceExportDetailsHasBeenSet() const { return m_instanceExportDetailsHasBeenSet; }
    template<typename InstanceExportDetailsT = InstanceExportDetails>
    void SetInstanceExportDetails(InstanceExportDetailsT&& value) { m_instanceExportDetailsHasBeenSet = true; m_instanceExportDetails = std::forward<InstanceExportDetailsT>(value); }
    template<typename InstanceExportDetailsT = InstanceExportDetails>
    ExportTask& WithInstanceExportDetails(InstanceExportDetailsT&& value) { SetInstanceExportDetails(std::forward<InstanceExportDetailsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The state of the export task.</p>
     */
    inline ExportTaskState GetState() const { return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(ExportTaskState value) { m_stateHasBeenSet = true; m_state = value; }
    inline ExportTask& WithState(ExportTaskState value) { SetState(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status message related to the export task.</p>
     */
    inline const Aws::String& GetStatusMessage() const { return m_statusMessage; }
    inline bool StatusMessageHasBeenSet() const { return m_statusMessageHasBeenSet; }
    template<typename StatusMessageT = Aws::String>
    void SetStatusMessage(StatusMessageT&& value) { m_statusMessageHasBeenSet = true; m_statusMessage = std::forward<StatusMessageT>(value); }
    template<typename StatusMessageT = Aws::String>
    ExportTask& WithStatusMessage(StatusMessageT&& value) { SetStatusMessage(std::forward<StatusMessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags for the export task.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    ExportTask& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    ExportTask& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
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

    ExportTaskState m_state{ExportTaskState::NOT_SET};
    bool m_stateHasBeenSet = false;

    Aws::String m_statusMessage;
    bool m_statusMessageHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
