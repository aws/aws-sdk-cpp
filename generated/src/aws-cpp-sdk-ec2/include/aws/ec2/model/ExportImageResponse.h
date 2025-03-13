/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/DiskImageFormat.h>
#include <aws/ec2/model/ExportTaskS3Location.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/ResponseMetadata.h>
#include <aws/ec2/model/Tag.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Xml
{
  class XmlDocument;
} // namespace Xml
} // namespace Utils
namespace EC2
{
namespace Model
{
  class ExportImageResponse
  {
  public:
    AWS_EC2_API ExportImageResponse() = default;
    AWS_EC2_API ExportImageResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API ExportImageResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>A description of the image being exported.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    ExportImageResponse& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The disk image format for the exported image.</p>
     */
    inline DiskImageFormat GetDiskImageFormat() const { return m_diskImageFormat; }
    inline void SetDiskImageFormat(DiskImageFormat value) { m_diskImageFormatHasBeenSet = true; m_diskImageFormat = value; }
    inline ExportImageResponse& WithDiskImageFormat(DiskImageFormat value) { SetDiskImageFormat(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the export image task.</p>
     */
    inline const Aws::String& GetExportImageTaskId() const { return m_exportImageTaskId; }
    template<typename ExportImageTaskIdT = Aws::String>
    void SetExportImageTaskId(ExportImageTaskIdT&& value) { m_exportImageTaskIdHasBeenSet = true; m_exportImageTaskId = std::forward<ExportImageTaskIdT>(value); }
    template<typename ExportImageTaskIdT = Aws::String>
    ExportImageResponse& WithExportImageTaskId(ExportImageTaskIdT&& value) { SetExportImageTaskId(std::forward<ExportImageTaskIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the image.</p>
     */
    inline const Aws::String& GetImageId() const { return m_imageId; }
    template<typename ImageIdT = Aws::String>
    void SetImageId(ImageIdT&& value) { m_imageIdHasBeenSet = true; m_imageId = std::forward<ImageIdT>(value); }
    template<typename ImageIdT = Aws::String>
    ExportImageResponse& WithImageId(ImageIdT&& value) { SetImageId(std::forward<ImageIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the role that grants VM Import/Export permission to export images
     * to your Amazon S3 bucket.</p>
     */
    inline const Aws::String& GetRoleName() const { return m_roleName; }
    template<typename RoleNameT = Aws::String>
    void SetRoleName(RoleNameT&& value) { m_roleNameHasBeenSet = true; m_roleName = std::forward<RoleNameT>(value); }
    template<typename RoleNameT = Aws::String>
    ExportImageResponse& WithRoleName(RoleNameT&& value) { SetRoleName(std::forward<RoleNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The percent complete of the export image task.</p>
     */
    inline const Aws::String& GetProgress() const { return m_progress; }
    template<typename ProgressT = Aws::String>
    void SetProgress(ProgressT&& value) { m_progressHasBeenSet = true; m_progress = std::forward<ProgressT>(value); }
    template<typename ProgressT = Aws::String>
    ExportImageResponse& WithProgress(ProgressT&& value) { SetProgress(std::forward<ProgressT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the destination Amazon S3 bucket.</p>
     */
    inline const ExportTaskS3Location& GetS3ExportLocation() const { return m_s3ExportLocation; }
    template<typename S3ExportLocationT = ExportTaskS3Location>
    void SetS3ExportLocation(S3ExportLocationT&& value) { m_s3ExportLocationHasBeenSet = true; m_s3ExportLocation = std::forward<S3ExportLocationT>(value); }
    template<typename S3ExportLocationT = ExportTaskS3Location>
    ExportImageResponse& WithS3ExportLocation(S3ExportLocationT&& value) { SetS3ExportLocation(std::forward<S3ExportLocationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the export image task. The possible values are
     * <code>active</code>, <code>completed</code>, <code>deleting</code>, and
     * <code>deleted</code>.</p>
     */
    inline const Aws::String& GetStatus() const { return m_status; }
    template<typename StatusT = Aws::String>
    void SetStatus(StatusT&& value) { m_statusHasBeenSet = true; m_status = std::forward<StatusT>(value); }
    template<typename StatusT = Aws::String>
    ExportImageResponse& WithStatus(StatusT&& value) { SetStatus(std::forward<StatusT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status message for the export image task.</p>
     */
    inline const Aws::String& GetStatusMessage() const { return m_statusMessage; }
    template<typename StatusMessageT = Aws::String>
    void SetStatusMessage(StatusMessageT&& value) { m_statusMessageHasBeenSet = true; m_statusMessage = std::forward<StatusMessageT>(value); }
    template<typename StatusMessageT = Aws::String>
    ExportImageResponse& WithStatusMessage(StatusMessageT&& value) { SetStatusMessage(std::forward<StatusMessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Any tags assigned to the export image task.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    ExportImageResponse& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    ExportImageResponse& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    ExportImageResponse& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    DiskImageFormat m_diskImageFormat{DiskImageFormat::NOT_SET};
    bool m_diskImageFormatHasBeenSet = false;

    Aws::String m_exportImageTaskId;
    bool m_exportImageTaskIdHasBeenSet = false;

    Aws::String m_imageId;
    bool m_imageIdHasBeenSet = false;

    Aws::String m_roleName;
    bool m_roleNameHasBeenSet = false;

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

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
