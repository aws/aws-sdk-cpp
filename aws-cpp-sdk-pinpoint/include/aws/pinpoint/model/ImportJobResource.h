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
#include <aws/pinpoint/Pinpoint_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/pinpoint/model/Format.h>
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
namespace Pinpoint
{
namespace Model
{

  /**
   * Import job resource<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/ImportJobResource">AWS
   * API Reference</a></p>
   */
  class AWS_PINPOINT_API ImportJobResource
  {
  public:
    ImportJobResource();
    ImportJobResource(Aws::Utils::Json::JsonView jsonValue);
    ImportJobResource& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * Sets whether the endpoints create a segment when they are imported.
     */
    inline bool GetDefineSegment() const{ return m_defineSegment; }

    /**
     * Sets whether the endpoints create a segment when they are imported.
     */
    inline bool DefineSegmentHasBeenSet() const { return m_defineSegmentHasBeenSet; }

    /**
     * Sets whether the endpoints create a segment when they are imported.
     */
    inline void SetDefineSegment(bool value) { m_defineSegmentHasBeenSet = true; m_defineSegment = value; }

    /**
     * Sets whether the endpoints create a segment when they are imported.
     */
    inline ImportJobResource& WithDefineSegment(bool value) { SetDefineSegment(value); return *this;}


    /**
     * (Deprecated) Your AWS account ID, which you assigned to the ExternalID key in an
     * IAM trust policy. Used by Amazon Pinpoint to assume an IAM role. This
     * requirement is removed, and external IDs are not recommended for IAM roles
     * assumed by Amazon Pinpoint.
     */
    inline const Aws::String& GetExternalId() const{ return m_externalId; }

    /**
     * (Deprecated) Your AWS account ID, which you assigned to the ExternalID key in an
     * IAM trust policy. Used by Amazon Pinpoint to assume an IAM role. This
     * requirement is removed, and external IDs are not recommended for IAM roles
     * assumed by Amazon Pinpoint.
     */
    inline bool ExternalIdHasBeenSet() const { return m_externalIdHasBeenSet; }

    /**
     * (Deprecated) Your AWS account ID, which you assigned to the ExternalID key in an
     * IAM trust policy. Used by Amazon Pinpoint to assume an IAM role. This
     * requirement is removed, and external IDs are not recommended for IAM roles
     * assumed by Amazon Pinpoint.
     */
    inline void SetExternalId(const Aws::String& value) { m_externalIdHasBeenSet = true; m_externalId = value; }

    /**
     * (Deprecated) Your AWS account ID, which you assigned to the ExternalID key in an
     * IAM trust policy. Used by Amazon Pinpoint to assume an IAM role. This
     * requirement is removed, and external IDs are not recommended for IAM roles
     * assumed by Amazon Pinpoint.
     */
    inline void SetExternalId(Aws::String&& value) { m_externalIdHasBeenSet = true; m_externalId = std::move(value); }

    /**
     * (Deprecated) Your AWS account ID, which you assigned to the ExternalID key in an
     * IAM trust policy. Used by Amazon Pinpoint to assume an IAM role. This
     * requirement is removed, and external IDs are not recommended for IAM roles
     * assumed by Amazon Pinpoint.
     */
    inline void SetExternalId(const char* value) { m_externalIdHasBeenSet = true; m_externalId.assign(value); }

    /**
     * (Deprecated) Your AWS account ID, which you assigned to the ExternalID key in an
     * IAM trust policy. Used by Amazon Pinpoint to assume an IAM role. This
     * requirement is removed, and external IDs are not recommended for IAM roles
     * assumed by Amazon Pinpoint.
     */
    inline ImportJobResource& WithExternalId(const Aws::String& value) { SetExternalId(value); return *this;}

    /**
     * (Deprecated) Your AWS account ID, which you assigned to the ExternalID key in an
     * IAM trust policy. Used by Amazon Pinpoint to assume an IAM role. This
     * requirement is removed, and external IDs are not recommended for IAM roles
     * assumed by Amazon Pinpoint.
     */
    inline ImportJobResource& WithExternalId(Aws::String&& value) { SetExternalId(std::move(value)); return *this;}

    /**
     * (Deprecated) Your AWS account ID, which you assigned to the ExternalID key in an
     * IAM trust policy. Used by Amazon Pinpoint to assume an IAM role. This
     * requirement is removed, and external IDs are not recommended for IAM roles
     * assumed by Amazon Pinpoint.
     */
    inline ImportJobResource& WithExternalId(const char* value) { SetExternalId(value); return *this;}


    /**
     * The format of the files that contain the endpoint definitions.
Valid values:
     * CSV, JSON
     */
    inline const Format& GetFormat() const{ return m_format; }

    /**
     * The format of the files that contain the endpoint definitions.
Valid values:
     * CSV, JSON
     */
    inline bool FormatHasBeenSet() const { return m_formatHasBeenSet; }

    /**
     * The format of the files that contain the endpoint definitions.
Valid values:
     * CSV, JSON
     */
    inline void SetFormat(const Format& value) { m_formatHasBeenSet = true; m_format = value; }

    /**
     * The format of the files that contain the endpoint definitions.
Valid values:
     * CSV, JSON
     */
    inline void SetFormat(Format&& value) { m_formatHasBeenSet = true; m_format = std::move(value); }

    /**
     * The format of the files that contain the endpoint definitions.
Valid values:
     * CSV, JSON
     */
    inline ImportJobResource& WithFormat(const Format& value) { SetFormat(value); return *this;}

    /**
     * The format of the files that contain the endpoint definitions.
Valid values:
     * CSV, JSON
     */
    inline ImportJobResource& WithFormat(Format&& value) { SetFormat(std::move(value)); return *this;}


    /**
     * Sets whether the endpoints are registered with Amazon Pinpoint when they are
     * imported.
     */
    inline bool GetRegisterEndpoints() const{ return m_registerEndpoints; }

    /**
     * Sets whether the endpoints are registered with Amazon Pinpoint when they are
     * imported.
     */
    inline bool RegisterEndpointsHasBeenSet() const { return m_registerEndpointsHasBeenSet; }

    /**
     * Sets whether the endpoints are registered with Amazon Pinpoint when they are
     * imported.
     */
    inline void SetRegisterEndpoints(bool value) { m_registerEndpointsHasBeenSet = true; m_registerEndpoints = value; }

    /**
     * Sets whether the endpoints are registered with Amazon Pinpoint when they are
     * imported.
     */
    inline ImportJobResource& WithRegisterEndpoints(bool value) { SetRegisterEndpoints(value); return *this;}


    /**
     * The Amazon Resource Name (ARN) of an IAM role that grants Amazon Pinpoint access
     * to the Amazon S3 location that contains the endpoints to import.
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }

    /**
     * The Amazon Resource Name (ARN) of an IAM role that grants Amazon Pinpoint access
     * to the Amazon S3 location that contains the endpoints to import.
     */
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }

    /**
     * The Amazon Resource Name (ARN) of an IAM role that grants Amazon Pinpoint access
     * to the Amazon S3 location that contains the endpoints to import.
     */
    inline void SetRoleArn(const Aws::String& value) { m_roleArnHasBeenSet = true; m_roleArn = value; }

    /**
     * The Amazon Resource Name (ARN) of an IAM role that grants Amazon Pinpoint access
     * to the Amazon S3 location that contains the endpoints to import.
     */
    inline void SetRoleArn(Aws::String&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::move(value); }

    /**
     * The Amazon Resource Name (ARN) of an IAM role that grants Amazon Pinpoint access
     * to the Amazon S3 location that contains the endpoints to import.
     */
    inline void SetRoleArn(const char* value) { m_roleArnHasBeenSet = true; m_roleArn.assign(value); }

    /**
     * The Amazon Resource Name (ARN) of an IAM role that grants Amazon Pinpoint access
     * to the Amazon S3 location that contains the endpoints to import.
     */
    inline ImportJobResource& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}

    /**
     * The Amazon Resource Name (ARN) of an IAM role that grants Amazon Pinpoint access
     * to the Amazon S3 location that contains the endpoints to import.
     */
    inline ImportJobResource& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}

    /**
     * The Amazon Resource Name (ARN) of an IAM role that grants Amazon Pinpoint access
     * to the Amazon S3 location that contains the endpoints to import.
     */
    inline ImportJobResource& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}


    /**
     * The URL of the S3 bucket that contains the segment information to import. The
     * location can be a folder or a single file. The URL should use the following
     * format: s3://bucket-name/folder-name/file-name

Amazon Pinpoint imports
     * endpoints from this location and any subfolders it contains.
     */
    inline const Aws::String& GetS3Url() const{ return m_s3Url; }

    /**
     * The URL of the S3 bucket that contains the segment information to import. The
     * location can be a folder or a single file. The URL should use the following
     * format: s3://bucket-name/folder-name/file-name

Amazon Pinpoint imports
     * endpoints from this location and any subfolders it contains.
     */
    inline bool S3UrlHasBeenSet() const { return m_s3UrlHasBeenSet; }

    /**
     * The URL of the S3 bucket that contains the segment information to import. The
     * location can be a folder or a single file. The URL should use the following
     * format: s3://bucket-name/folder-name/file-name

Amazon Pinpoint imports
     * endpoints from this location and any subfolders it contains.
     */
    inline void SetS3Url(const Aws::String& value) { m_s3UrlHasBeenSet = true; m_s3Url = value; }

    /**
     * The URL of the S3 bucket that contains the segment information to import. The
     * location can be a folder or a single file. The URL should use the following
     * format: s3://bucket-name/folder-name/file-name

Amazon Pinpoint imports
     * endpoints from this location and any subfolders it contains.
     */
    inline void SetS3Url(Aws::String&& value) { m_s3UrlHasBeenSet = true; m_s3Url = std::move(value); }

    /**
     * The URL of the S3 bucket that contains the segment information to import. The
     * location can be a folder or a single file. The URL should use the following
     * format: s3://bucket-name/folder-name/file-name

Amazon Pinpoint imports
     * endpoints from this location and any subfolders it contains.
     */
    inline void SetS3Url(const char* value) { m_s3UrlHasBeenSet = true; m_s3Url.assign(value); }

    /**
     * The URL of the S3 bucket that contains the segment information to import. The
     * location can be a folder or a single file. The URL should use the following
     * format: s3://bucket-name/folder-name/file-name

Amazon Pinpoint imports
     * endpoints from this location and any subfolders it contains.
     */
    inline ImportJobResource& WithS3Url(const Aws::String& value) { SetS3Url(value); return *this;}

    /**
     * The URL of the S3 bucket that contains the segment information to import. The
     * location can be a folder or a single file. The URL should use the following
     * format: s3://bucket-name/folder-name/file-name

Amazon Pinpoint imports
     * endpoints from this location and any subfolders it contains.
     */
    inline ImportJobResource& WithS3Url(Aws::String&& value) { SetS3Url(std::move(value)); return *this;}

    /**
     * The URL of the S3 bucket that contains the segment information to import. The
     * location can be a folder or a single file. The URL should use the following
     * format: s3://bucket-name/folder-name/file-name

Amazon Pinpoint imports
     * endpoints from this location and any subfolders it contains.
     */
    inline ImportJobResource& WithS3Url(const char* value) { SetS3Url(value); return *this;}


    /**
     * The ID of the segment to update if the import job is meant to update an existing
     * segment.
     */
    inline const Aws::String& GetSegmentId() const{ return m_segmentId; }

    /**
     * The ID of the segment to update if the import job is meant to update an existing
     * segment.
     */
    inline bool SegmentIdHasBeenSet() const { return m_segmentIdHasBeenSet; }

    /**
     * The ID of the segment to update if the import job is meant to update an existing
     * segment.
     */
    inline void SetSegmentId(const Aws::String& value) { m_segmentIdHasBeenSet = true; m_segmentId = value; }

    /**
     * The ID of the segment to update if the import job is meant to update an existing
     * segment.
     */
    inline void SetSegmentId(Aws::String&& value) { m_segmentIdHasBeenSet = true; m_segmentId = std::move(value); }

    /**
     * The ID of the segment to update if the import job is meant to update an existing
     * segment.
     */
    inline void SetSegmentId(const char* value) { m_segmentIdHasBeenSet = true; m_segmentId.assign(value); }

    /**
     * The ID of the segment to update if the import job is meant to update an existing
     * segment.
     */
    inline ImportJobResource& WithSegmentId(const Aws::String& value) { SetSegmentId(value); return *this;}

    /**
     * The ID of the segment to update if the import job is meant to update an existing
     * segment.
     */
    inline ImportJobResource& WithSegmentId(Aws::String&& value) { SetSegmentId(std::move(value)); return *this;}

    /**
     * The ID of the segment to update if the import job is meant to update an existing
     * segment.
     */
    inline ImportJobResource& WithSegmentId(const char* value) { SetSegmentId(value); return *this;}


    /**
     * A custom name for the segment created by the import job. Use if DefineSegment is
     * true.
     */
    inline const Aws::String& GetSegmentName() const{ return m_segmentName; }

    /**
     * A custom name for the segment created by the import job. Use if DefineSegment is
     * true.
     */
    inline bool SegmentNameHasBeenSet() const { return m_segmentNameHasBeenSet; }

    /**
     * A custom name for the segment created by the import job. Use if DefineSegment is
     * true.
     */
    inline void SetSegmentName(const Aws::String& value) { m_segmentNameHasBeenSet = true; m_segmentName = value; }

    /**
     * A custom name for the segment created by the import job. Use if DefineSegment is
     * true.
     */
    inline void SetSegmentName(Aws::String&& value) { m_segmentNameHasBeenSet = true; m_segmentName = std::move(value); }

    /**
     * A custom name for the segment created by the import job. Use if DefineSegment is
     * true.
     */
    inline void SetSegmentName(const char* value) { m_segmentNameHasBeenSet = true; m_segmentName.assign(value); }

    /**
     * A custom name for the segment created by the import job. Use if DefineSegment is
     * true.
     */
    inline ImportJobResource& WithSegmentName(const Aws::String& value) { SetSegmentName(value); return *this;}

    /**
     * A custom name for the segment created by the import job. Use if DefineSegment is
     * true.
     */
    inline ImportJobResource& WithSegmentName(Aws::String&& value) { SetSegmentName(std::move(value)); return *this;}

    /**
     * A custom name for the segment created by the import job. Use if DefineSegment is
     * true.
     */
    inline ImportJobResource& WithSegmentName(const char* value) { SetSegmentName(value); return *this;}

  private:

    bool m_defineSegment;
    bool m_defineSegmentHasBeenSet;

    Aws::String m_externalId;
    bool m_externalIdHasBeenSet;

    Format m_format;
    bool m_formatHasBeenSet;

    bool m_registerEndpoints;
    bool m_registerEndpointsHasBeenSet;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet;

    Aws::String m_s3Url;
    bool m_s3UrlHasBeenSet;

    Aws::String m_segmentId;
    bool m_segmentIdHasBeenSet;

    Aws::String m_segmentName;
    bool m_segmentNameHasBeenSet;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
