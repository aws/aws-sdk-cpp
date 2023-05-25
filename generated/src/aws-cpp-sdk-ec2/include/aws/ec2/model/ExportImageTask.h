/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/ExportTaskS3Location.h>
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
   * <p>Describes an export image task.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/ExportImageTask">AWS
   * API Reference</a></p>
   */
  class ExportImageTask
  {
  public:
    AWS_EC2_API ExportImageTask();
    AWS_EC2_API ExportImageTask(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API ExportImageTask& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>A description of the image being exported.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A description of the image being exported.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>A description of the image being exported.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A description of the image being exported.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>A description of the image being exported.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>A description of the image being exported.</p>
     */
    inline ExportImageTask& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A description of the image being exported.</p>
     */
    inline ExportImageTask& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A description of the image being exported.</p>
     */
    inline ExportImageTask& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The ID of the export image task.</p>
     */
    inline const Aws::String& GetExportImageTaskId() const{ return m_exportImageTaskId; }

    /**
     * <p>The ID of the export image task.</p>
     */
    inline bool ExportImageTaskIdHasBeenSet() const { return m_exportImageTaskIdHasBeenSet; }

    /**
     * <p>The ID of the export image task.</p>
     */
    inline void SetExportImageTaskId(const Aws::String& value) { m_exportImageTaskIdHasBeenSet = true; m_exportImageTaskId = value; }

    /**
     * <p>The ID of the export image task.</p>
     */
    inline void SetExportImageTaskId(Aws::String&& value) { m_exportImageTaskIdHasBeenSet = true; m_exportImageTaskId = std::move(value); }

    /**
     * <p>The ID of the export image task.</p>
     */
    inline void SetExportImageTaskId(const char* value) { m_exportImageTaskIdHasBeenSet = true; m_exportImageTaskId.assign(value); }

    /**
     * <p>The ID of the export image task.</p>
     */
    inline ExportImageTask& WithExportImageTaskId(const Aws::String& value) { SetExportImageTaskId(value); return *this;}

    /**
     * <p>The ID of the export image task.</p>
     */
    inline ExportImageTask& WithExportImageTaskId(Aws::String&& value) { SetExportImageTaskId(std::move(value)); return *this;}

    /**
     * <p>The ID of the export image task.</p>
     */
    inline ExportImageTask& WithExportImageTaskId(const char* value) { SetExportImageTaskId(value); return *this;}


    /**
     * <p>The ID of the image.</p>
     */
    inline const Aws::String& GetImageId() const{ return m_imageId; }

    /**
     * <p>The ID of the image.</p>
     */
    inline bool ImageIdHasBeenSet() const { return m_imageIdHasBeenSet; }

    /**
     * <p>The ID of the image.</p>
     */
    inline void SetImageId(const Aws::String& value) { m_imageIdHasBeenSet = true; m_imageId = value; }

    /**
     * <p>The ID of the image.</p>
     */
    inline void SetImageId(Aws::String&& value) { m_imageIdHasBeenSet = true; m_imageId = std::move(value); }

    /**
     * <p>The ID of the image.</p>
     */
    inline void SetImageId(const char* value) { m_imageIdHasBeenSet = true; m_imageId.assign(value); }

    /**
     * <p>The ID of the image.</p>
     */
    inline ExportImageTask& WithImageId(const Aws::String& value) { SetImageId(value); return *this;}

    /**
     * <p>The ID of the image.</p>
     */
    inline ExportImageTask& WithImageId(Aws::String&& value) { SetImageId(std::move(value)); return *this;}

    /**
     * <p>The ID of the image.</p>
     */
    inline ExportImageTask& WithImageId(const char* value) { SetImageId(value); return *this;}


    /**
     * <p>The percent complete of the export image task.</p>
     */
    inline const Aws::String& GetProgress() const{ return m_progress; }

    /**
     * <p>The percent complete of the export image task.</p>
     */
    inline bool ProgressHasBeenSet() const { return m_progressHasBeenSet; }

    /**
     * <p>The percent complete of the export image task.</p>
     */
    inline void SetProgress(const Aws::String& value) { m_progressHasBeenSet = true; m_progress = value; }

    /**
     * <p>The percent complete of the export image task.</p>
     */
    inline void SetProgress(Aws::String&& value) { m_progressHasBeenSet = true; m_progress = std::move(value); }

    /**
     * <p>The percent complete of the export image task.</p>
     */
    inline void SetProgress(const char* value) { m_progressHasBeenSet = true; m_progress.assign(value); }

    /**
     * <p>The percent complete of the export image task.</p>
     */
    inline ExportImageTask& WithProgress(const Aws::String& value) { SetProgress(value); return *this;}

    /**
     * <p>The percent complete of the export image task.</p>
     */
    inline ExportImageTask& WithProgress(Aws::String&& value) { SetProgress(std::move(value)); return *this;}

    /**
     * <p>The percent complete of the export image task.</p>
     */
    inline ExportImageTask& WithProgress(const char* value) { SetProgress(value); return *this;}


    /**
     * <p>Information about the destination Amazon S3 bucket.</p>
     */
    inline const ExportTaskS3Location& GetS3ExportLocation() const{ return m_s3ExportLocation; }

    /**
     * <p>Information about the destination Amazon S3 bucket.</p>
     */
    inline bool S3ExportLocationHasBeenSet() const { return m_s3ExportLocationHasBeenSet; }

    /**
     * <p>Information about the destination Amazon S3 bucket.</p>
     */
    inline void SetS3ExportLocation(const ExportTaskS3Location& value) { m_s3ExportLocationHasBeenSet = true; m_s3ExportLocation = value; }

    /**
     * <p>Information about the destination Amazon S3 bucket.</p>
     */
    inline void SetS3ExportLocation(ExportTaskS3Location&& value) { m_s3ExportLocationHasBeenSet = true; m_s3ExportLocation = std::move(value); }

    /**
     * <p>Information about the destination Amazon S3 bucket.</p>
     */
    inline ExportImageTask& WithS3ExportLocation(const ExportTaskS3Location& value) { SetS3ExportLocation(value); return *this;}

    /**
     * <p>Information about the destination Amazon S3 bucket.</p>
     */
    inline ExportImageTask& WithS3ExportLocation(ExportTaskS3Location&& value) { SetS3ExportLocation(std::move(value)); return *this;}


    /**
     * <p>The status of the export image task. The possible values are
     * <code>active</code>, <code>completed</code>, <code>deleting</code>, and
     * <code>deleted</code>.</p>
     */
    inline const Aws::String& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the export image task. The possible values are
     * <code>active</code>, <code>completed</code>, <code>deleting</code>, and
     * <code>deleted</code>.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The status of the export image task. The possible values are
     * <code>active</code>, <code>completed</code>, <code>deleting</code>, and
     * <code>deleted</code>.</p>
     */
    inline void SetStatus(const Aws::String& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of the export image task. The possible values are
     * <code>active</code>, <code>completed</code>, <code>deleting</code>, and
     * <code>deleted</code>.</p>
     */
    inline void SetStatus(Aws::String&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status of the export image task. The possible values are
     * <code>active</code>, <code>completed</code>, <code>deleting</code>, and
     * <code>deleted</code>.</p>
     */
    inline void SetStatus(const char* value) { m_statusHasBeenSet = true; m_status.assign(value); }

    /**
     * <p>The status of the export image task. The possible values are
     * <code>active</code>, <code>completed</code>, <code>deleting</code>, and
     * <code>deleted</code>.</p>
     */
    inline ExportImageTask& WithStatus(const Aws::String& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the export image task. The possible values are
     * <code>active</code>, <code>completed</code>, <code>deleting</code>, and
     * <code>deleted</code>.</p>
     */
    inline ExportImageTask& WithStatus(Aws::String&& value) { SetStatus(std::move(value)); return *this;}

    /**
     * <p>The status of the export image task. The possible values are
     * <code>active</code>, <code>completed</code>, <code>deleting</code>, and
     * <code>deleted</code>.</p>
     */
    inline ExportImageTask& WithStatus(const char* value) { SetStatus(value); return *this;}


    /**
     * <p>The status message for the export image task.</p>
     */
    inline const Aws::String& GetStatusMessage() const{ return m_statusMessage; }

    /**
     * <p>The status message for the export image task.</p>
     */
    inline bool StatusMessageHasBeenSet() const { return m_statusMessageHasBeenSet; }

    /**
     * <p>The status message for the export image task.</p>
     */
    inline void SetStatusMessage(const Aws::String& value) { m_statusMessageHasBeenSet = true; m_statusMessage = value; }

    /**
     * <p>The status message for the export image task.</p>
     */
    inline void SetStatusMessage(Aws::String&& value) { m_statusMessageHasBeenSet = true; m_statusMessage = std::move(value); }

    /**
     * <p>The status message for the export image task.</p>
     */
    inline void SetStatusMessage(const char* value) { m_statusMessageHasBeenSet = true; m_statusMessage.assign(value); }

    /**
     * <p>The status message for the export image task.</p>
     */
    inline ExportImageTask& WithStatusMessage(const Aws::String& value) { SetStatusMessage(value); return *this;}

    /**
     * <p>The status message for the export image task.</p>
     */
    inline ExportImageTask& WithStatusMessage(Aws::String&& value) { SetStatusMessage(std::move(value)); return *this;}

    /**
     * <p>The status message for the export image task.</p>
     */
    inline ExportImageTask& WithStatusMessage(const char* value) { SetStatusMessage(value); return *this;}


    /**
     * <p>Any tags assigned to the export image task.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>Any tags assigned to the export image task.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>Any tags assigned to the export image task.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>Any tags assigned to the export image task.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>Any tags assigned to the export image task.</p>
     */
    inline ExportImageTask& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>Any tags assigned to the export image task.</p>
     */
    inline ExportImageTask& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>Any tags assigned to the export image task.</p>
     */
    inline ExportImageTask& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>Any tags assigned to the export image task.</p>
     */
    inline ExportImageTask& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_exportImageTaskId;
    bool m_exportImageTaskIdHasBeenSet = false;

    Aws::String m_imageId;
    bool m_imageIdHasBeenSet = false;

    Aws::String m_progress;
    bool m_progressHasBeenSet = false;

    ExportTaskS3Location m_s3ExportLocation;
    bool m_s3ExportLocationHasBeenSet = false;

    Aws::String m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_statusMessage;
    bool m_statusMessageHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
