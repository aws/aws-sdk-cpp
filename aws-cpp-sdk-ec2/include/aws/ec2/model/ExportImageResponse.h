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
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/DiskImageFormat.h>
#include <aws/ec2/model/ExportTaskS3Location.h>
#include <aws/ec2/model/ResponseMetadata.h>
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
  class AWS_EC2_API ExportImageResponse
  {
  public:
    ExportImageResponse();
    ExportImageResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    ExportImageResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>A description of the image being exported.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A description of the image being exported.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_description = value; }

    /**
     * <p>A description of the image being exported.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }

    /**
     * <p>A description of the image being exported.</p>
     */
    inline void SetDescription(const char* value) { m_description.assign(value); }

    /**
     * <p>A description of the image being exported.</p>
     */
    inline ExportImageResponse& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A description of the image being exported.</p>
     */
    inline ExportImageResponse& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A description of the image being exported.</p>
     */
    inline ExportImageResponse& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The disk image format for the exported image.</p>
     */
    inline const DiskImageFormat& GetDiskImageFormat() const{ return m_diskImageFormat; }

    /**
     * <p>The disk image format for the exported image.</p>
     */
    inline void SetDiskImageFormat(const DiskImageFormat& value) { m_diskImageFormat = value; }

    /**
     * <p>The disk image format for the exported image.</p>
     */
    inline void SetDiskImageFormat(DiskImageFormat&& value) { m_diskImageFormat = std::move(value); }

    /**
     * <p>The disk image format for the exported image.</p>
     */
    inline ExportImageResponse& WithDiskImageFormat(const DiskImageFormat& value) { SetDiskImageFormat(value); return *this;}

    /**
     * <p>The disk image format for the exported image.</p>
     */
    inline ExportImageResponse& WithDiskImageFormat(DiskImageFormat&& value) { SetDiskImageFormat(std::move(value)); return *this;}


    /**
     * <p>The ID of the export image task.</p>
     */
    inline const Aws::String& GetExportImageTaskId() const{ return m_exportImageTaskId; }

    /**
     * <p>The ID of the export image task.</p>
     */
    inline void SetExportImageTaskId(const Aws::String& value) { m_exportImageTaskId = value; }

    /**
     * <p>The ID of the export image task.</p>
     */
    inline void SetExportImageTaskId(Aws::String&& value) { m_exportImageTaskId = std::move(value); }

    /**
     * <p>The ID of the export image task.</p>
     */
    inline void SetExportImageTaskId(const char* value) { m_exportImageTaskId.assign(value); }

    /**
     * <p>The ID of the export image task.</p>
     */
    inline ExportImageResponse& WithExportImageTaskId(const Aws::String& value) { SetExportImageTaskId(value); return *this;}

    /**
     * <p>The ID of the export image task.</p>
     */
    inline ExportImageResponse& WithExportImageTaskId(Aws::String&& value) { SetExportImageTaskId(std::move(value)); return *this;}

    /**
     * <p>The ID of the export image task.</p>
     */
    inline ExportImageResponse& WithExportImageTaskId(const char* value) { SetExportImageTaskId(value); return *this;}


    /**
     * <p>The ID of the image.</p>
     */
    inline const Aws::String& GetImageId() const{ return m_imageId; }

    /**
     * <p>The ID of the image.</p>
     */
    inline void SetImageId(const Aws::String& value) { m_imageId = value; }

    /**
     * <p>The ID of the image.</p>
     */
    inline void SetImageId(Aws::String&& value) { m_imageId = std::move(value); }

    /**
     * <p>The ID of the image.</p>
     */
    inline void SetImageId(const char* value) { m_imageId.assign(value); }

    /**
     * <p>The ID of the image.</p>
     */
    inline ExportImageResponse& WithImageId(const Aws::String& value) { SetImageId(value); return *this;}

    /**
     * <p>The ID of the image.</p>
     */
    inline ExportImageResponse& WithImageId(Aws::String&& value) { SetImageId(std::move(value)); return *this;}

    /**
     * <p>The ID of the image.</p>
     */
    inline ExportImageResponse& WithImageId(const char* value) { SetImageId(value); return *this;}


    /**
     * <p>The name of the role that grants VM Import/Export permission to export images
     * to your S3 bucket.</p>
     */
    inline const Aws::String& GetRoleName() const{ return m_roleName; }

    /**
     * <p>The name of the role that grants VM Import/Export permission to export images
     * to your S3 bucket.</p>
     */
    inline void SetRoleName(const Aws::String& value) { m_roleName = value; }

    /**
     * <p>The name of the role that grants VM Import/Export permission to export images
     * to your S3 bucket.</p>
     */
    inline void SetRoleName(Aws::String&& value) { m_roleName = std::move(value); }

    /**
     * <p>The name of the role that grants VM Import/Export permission to export images
     * to your S3 bucket.</p>
     */
    inline void SetRoleName(const char* value) { m_roleName.assign(value); }

    /**
     * <p>The name of the role that grants VM Import/Export permission to export images
     * to your S3 bucket.</p>
     */
    inline ExportImageResponse& WithRoleName(const Aws::String& value) { SetRoleName(value); return *this;}

    /**
     * <p>The name of the role that grants VM Import/Export permission to export images
     * to your S3 bucket.</p>
     */
    inline ExportImageResponse& WithRoleName(Aws::String&& value) { SetRoleName(std::move(value)); return *this;}

    /**
     * <p>The name of the role that grants VM Import/Export permission to export images
     * to your S3 bucket.</p>
     */
    inline ExportImageResponse& WithRoleName(const char* value) { SetRoleName(value); return *this;}


    /**
     * <p>The percent complete of the export image task.</p>
     */
    inline const Aws::String& GetProgress() const{ return m_progress; }

    /**
     * <p>The percent complete of the export image task.</p>
     */
    inline void SetProgress(const Aws::String& value) { m_progress = value; }

    /**
     * <p>The percent complete of the export image task.</p>
     */
    inline void SetProgress(Aws::String&& value) { m_progress = std::move(value); }

    /**
     * <p>The percent complete of the export image task.</p>
     */
    inline void SetProgress(const char* value) { m_progress.assign(value); }

    /**
     * <p>The percent complete of the export image task.</p>
     */
    inline ExportImageResponse& WithProgress(const Aws::String& value) { SetProgress(value); return *this;}

    /**
     * <p>The percent complete of the export image task.</p>
     */
    inline ExportImageResponse& WithProgress(Aws::String&& value) { SetProgress(std::move(value)); return *this;}

    /**
     * <p>The percent complete of the export image task.</p>
     */
    inline ExportImageResponse& WithProgress(const char* value) { SetProgress(value); return *this;}


    /**
     * <p>Information about the destination S3 bucket.</p>
     */
    inline const ExportTaskS3Location& GetS3ExportLocation() const{ return m_s3ExportLocation; }

    /**
     * <p>Information about the destination S3 bucket.</p>
     */
    inline void SetS3ExportLocation(const ExportTaskS3Location& value) { m_s3ExportLocation = value; }

    /**
     * <p>Information about the destination S3 bucket.</p>
     */
    inline void SetS3ExportLocation(ExportTaskS3Location&& value) { m_s3ExportLocation = std::move(value); }

    /**
     * <p>Information about the destination S3 bucket.</p>
     */
    inline ExportImageResponse& WithS3ExportLocation(const ExportTaskS3Location& value) { SetS3ExportLocation(value); return *this;}

    /**
     * <p>Information about the destination S3 bucket.</p>
     */
    inline ExportImageResponse& WithS3ExportLocation(ExportTaskS3Location&& value) { SetS3ExportLocation(std::move(value)); return *this;}


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
    inline void SetStatus(const Aws::String& value) { m_status = value; }

    /**
     * <p>The status of the export image task. The possible values are
     * <code>active</code>, <code>completed</code>, <code>deleting</code>, and
     * <code>deleted</code>.</p>
     */
    inline void SetStatus(Aws::String&& value) { m_status = std::move(value); }

    /**
     * <p>The status of the export image task. The possible values are
     * <code>active</code>, <code>completed</code>, <code>deleting</code>, and
     * <code>deleted</code>.</p>
     */
    inline void SetStatus(const char* value) { m_status.assign(value); }

    /**
     * <p>The status of the export image task. The possible values are
     * <code>active</code>, <code>completed</code>, <code>deleting</code>, and
     * <code>deleted</code>.</p>
     */
    inline ExportImageResponse& WithStatus(const Aws::String& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the export image task. The possible values are
     * <code>active</code>, <code>completed</code>, <code>deleting</code>, and
     * <code>deleted</code>.</p>
     */
    inline ExportImageResponse& WithStatus(Aws::String&& value) { SetStatus(std::move(value)); return *this;}

    /**
     * <p>The status of the export image task. The possible values are
     * <code>active</code>, <code>completed</code>, <code>deleting</code>, and
     * <code>deleted</code>.</p>
     */
    inline ExportImageResponse& WithStatus(const char* value) { SetStatus(value); return *this;}


    /**
     * <p>The status message for the export image task.</p>
     */
    inline const Aws::String& GetStatusMessage() const{ return m_statusMessage; }

    /**
     * <p>The status message for the export image task.</p>
     */
    inline void SetStatusMessage(const Aws::String& value) { m_statusMessage = value; }

    /**
     * <p>The status message for the export image task.</p>
     */
    inline void SetStatusMessage(Aws::String&& value) { m_statusMessage = std::move(value); }

    /**
     * <p>The status message for the export image task.</p>
     */
    inline void SetStatusMessage(const char* value) { m_statusMessage.assign(value); }

    /**
     * <p>The status message for the export image task.</p>
     */
    inline ExportImageResponse& WithStatusMessage(const Aws::String& value) { SetStatusMessage(value); return *this;}

    /**
     * <p>The status message for the export image task.</p>
     */
    inline ExportImageResponse& WithStatusMessage(Aws::String&& value) { SetStatusMessage(std::move(value)); return *this;}

    /**
     * <p>The status message for the export image task.</p>
     */
    inline ExportImageResponse& WithStatusMessage(const char* value) { SetStatusMessage(value); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline ExportImageResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline ExportImageResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::String m_description;

    DiskImageFormat m_diskImageFormat;

    Aws::String m_exportImageTaskId;

    Aws::String m_imageId;

    Aws::String m_roleName;

    Aws::String m_progress;

    ExportTaskS3Location m_s3ExportLocation;

    Aws::String m_status;

    Aws::String m_statusMessage;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
