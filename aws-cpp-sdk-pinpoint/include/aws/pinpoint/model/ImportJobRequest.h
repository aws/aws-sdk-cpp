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
   * <p>Specifies the settings for a job that imports endpoint definitions from an
   * Amazon Simple Storage Service (Amazon S3) bucket.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/ImportJobRequest">AWS
   * API Reference</a></p>
   */
  class AWS_PINPOINT_API ImportJobRequest
  {
  public:
    ImportJobRequest();
    ImportJobRequest(Aws::Utils::Json::JsonView jsonValue);
    ImportJobRequest& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Specifies whether to create a segment that contains the endpoints, when the
     * endpoint definitions are imported.</p>
     */
    inline bool GetDefineSegment() const{ return m_defineSegment; }

    /**
     * <p>Specifies whether to create a segment that contains the endpoints, when the
     * endpoint definitions are imported.</p>
     */
    inline bool DefineSegmentHasBeenSet() const { return m_defineSegmentHasBeenSet; }

    /**
     * <p>Specifies whether to create a segment that contains the endpoints, when the
     * endpoint definitions are imported.</p>
     */
    inline void SetDefineSegment(bool value) { m_defineSegmentHasBeenSet = true; m_defineSegment = value; }

    /**
     * <p>Specifies whether to create a segment that contains the endpoints, when the
     * endpoint definitions are imported.</p>
     */
    inline ImportJobRequest& WithDefineSegment(bool value) { SetDefineSegment(value); return *this;}


    /**
     * <p>(Deprecated) Your AWS account ID, which you assigned to an external ID key in
     * an IAM trust policy. Amazon Pinpoint previously used this value to assume an IAM
     * role when importing endpoint definitions, but we removed this requirement. We
     * don't recommend use of external IDs for IAM roles that are assumed by Amazon
     * Pinpoint.</p>
     */
    inline const Aws::String& GetExternalId() const{ return m_externalId; }

    /**
     * <p>(Deprecated) Your AWS account ID, which you assigned to an external ID key in
     * an IAM trust policy. Amazon Pinpoint previously used this value to assume an IAM
     * role when importing endpoint definitions, but we removed this requirement. We
     * don't recommend use of external IDs for IAM roles that are assumed by Amazon
     * Pinpoint.</p>
     */
    inline bool ExternalIdHasBeenSet() const { return m_externalIdHasBeenSet; }

    /**
     * <p>(Deprecated) Your AWS account ID, which you assigned to an external ID key in
     * an IAM trust policy. Amazon Pinpoint previously used this value to assume an IAM
     * role when importing endpoint definitions, but we removed this requirement. We
     * don't recommend use of external IDs for IAM roles that are assumed by Amazon
     * Pinpoint.</p>
     */
    inline void SetExternalId(const Aws::String& value) { m_externalIdHasBeenSet = true; m_externalId = value; }

    /**
     * <p>(Deprecated) Your AWS account ID, which you assigned to an external ID key in
     * an IAM trust policy. Amazon Pinpoint previously used this value to assume an IAM
     * role when importing endpoint definitions, but we removed this requirement. We
     * don't recommend use of external IDs for IAM roles that are assumed by Amazon
     * Pinpoint.</p>
     */
    inline void SetExternalId(Aws::String&& value) { m_externalIdHasBeenSet = true; m_externalId = std::move(value); }

    /**
     * <p>(Deprecated) Your AWS account ID, which you assigned to an external ID key in
     * an IAM trust policy. Amazon Pinpoint previously used this value to assume an IAM
     * role when importing endpoint definitions, but we removed this requirement. We
     * don't recommend use of external IDs for IAM roles that are assumed by Amazon
     * Pinpoint.</p>
     */
    inline void SetExternalId(const char* value) { m_externalIdHasBeenSet = true; m_externalId.assign(value); }

    /**
     * <p>(Deprecated) Your AWS account ID, which you assigned to an external ID key in
     * an IAM trust policy. Amazon Pinpoint previously used this value to assume an IAM
     * role when importing endpoint definitions, but we removed this requirement. We
     * don't recommend use of external IDs for IAM roles that are assumed by Amazon
     * Pinpoint.</p>
     */
    inline ImportJobRequest& WithExternalId(const Aws::String& value) { SetExternalId(value); return *this;}

    /**
     * <p>(Deprecated) Your AWS account ID, which you assigned to an external ID key in
     * an IAM trust policy. Amazon Pinpoint previously used this value to assume an IAM
     * role when importing endpoint definitions, but we removed this requirement. We
     * don't recommend use of external IDs for IAM roles that are assumed by Amazon
     * Pinpoint.</p>
     */
    inline ImportJobRequest& WithExternalId(Aws::String&& value) { SetExternalId(std::move(value)); return *this;}

    /**
     * <p>(Deprecated) Your AWS account ID, which you assigned to an external ID key in
     * an IAM trust policy. Amazon Pinpoint previously used this value to assume an IAM
     * role when importing endpoint definitions, but we removed this requirement. We
     * don't recommend use of external IDs for IAM roles that are assumed by Amazon
     * Pinpoint.</p>
     */
    inline ImportJobRequest& WithExternalId(const char* value) { SetExternalId(value); return *this;}


    /**
     * <p>The format of the files that contain the endpoint definitions to import.
     * Valid values are: CSV, for comma-separated values format; and, JSON, for
     * newline-delimited JSON format. If the Amazon S3 location stores multiple files
     * that use different formats, Amazon Pinpoint imports data only from the files
     * that use the specified format.</p>
     */
    inline const Format& GetFormat() const{ return m_format; }

    /**
     * <p>The format of the files that contain the endpoint definitions to import.
     * Valid values are: CSV, for comma-separated values format; and, JSON, for
     * newline-delimited JSON format. If the Amazon S3 location stores multiple files
     * that use different formats, Amazon Pinpoint imports data only from the files
     * that use the specified format.</p>
     */
    inline bool FormatHasBeenSet() const { return m_formatHasBeenSet; }

    /**
     * <p>The format of the files that contain the endpoint definitions to import.
     * Valid values are: CSV, for comma-separated values format; and, JSON, for
     * newline-delimited JSON format. If the Amazon S3 location stores multiple files
     * that use different formats, Amazon Pinpoint imports data only from the files
     * that use the specified format.</p>
     */
    inline void SetFormat(const Format& value) { m_formatHasBeenSet = true; m_format = value; }

    /**
     * <p>The format of the files that contain the endpoint definitions to import.
     * Valid values are: CSV, for comma-separated values format; and, JSON, for
     * newline-delimited JSON format. If the Amazon S3 location stores multiple files
     * that use different formats, Amazon Pinpoint imports data only from the files
     * that use the specified format.</p>
     */
    inline void SetFormat(Format&& value) { m_formatHasBeenSet = true; m_format = std::move(value); }

    /**
     * <p>The format of the files that contain the endpoint definitions to import.
     * Valid values are: CSV, for comma-separated values format; and, JSON, for
     * newline-delimited JSON format. If the Amazon S3 location stores multiple files
     * that use different formats, Amazon Pinpoint imports data only from the files
     * that use the specified format.</p>
     */
    inline ImportJobRequest& WithFormat(const Format& value) { SetFormat(value); return *this;}

    /**
     * <p>The format of the files that contain the endpoint definitions to import.
     * Valid values are: CSV, for comma-separated values format; and, JSON, for
     * newline-delimited JSON format. If the Amazon S3 location stores multiple files
     * that use different formats, Amazon Pinpoint imports data only from the files
     * that use the specified format.</p>
     */
    inline ImportJobRequest& WithFormat(Format&& value) { SetFormat(std::move(value)); return *this;}


    /**
     * <p>Specifies whether to register the endpoints with Amazon Pinpoint, when the
     * endpoint definitions are imported.</p>
     */
    inline bool GetRegisterEndpoints() const{ return m_registerEndpoints; }

    /**
     * <p>Specifies whether to register the endpoints with Amazon Pinpoint, when the
     * endpoint definitions are imported.</p>
     */
    inline bool RegisterEndpointsHasBeenSet() const { return m_registerEndpointsHasBeenSet; }

    /**
     * <p>Specifies whether to register the endpoints with Amazon Pinpoint, when the
     * endpoint definitions are imported.</p>
     */
    inline void SetRegisterEndpoints(bool value) { m_registerEndpointsHasBeenSet = true; m_registerEndpoints = value; }

    /**
     * <p>Specifies whether to register the endpoints with Amazon Pinpoint, when the
     * endpoint definitions are imported.</p>
     */
    inline ImportJobRequest& WithRegisterEndpoints(bool value) { SetRegisterEndpoints(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the AWS Identity and Access Management
     * (IAM) role that authorizes Amazon Pinpoint to access the Amazon S3 location to
     * import endpoint definitions from.</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the AWS Identity and Access Management
     * (IAM) role that authorizes Amazon Pinpoint to access the Amazon S3 location to
     * import endpoint definitions from.</p>
     */
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the AWS Identity and Access Management
     * (IAM) role that authorizes Amazon Pinpoint to access the Amazon S3 location to
     * import endpoint definitions from.</p>
     */
    inline void SetRoleArn(const Aws::String& value) { m_roleArnHasBeenSet = true; m_roleArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the AWS Identity and Access Management
     * (IAM) role that authorizes Amazon Pinpoint to access the Amazon S3 location to
     * import endpoint definitions from.</p>
     */
    inline void SetRoleArn(Aws::String&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the AWS Identity and Access Management
     * (IAM) role that authorizes Amazon Pinpoint to access the Amazon S3 location to
     * import endpoint definitions from.</p>
     */
    inline void SetRoleArn(const char* value) { m_roleArnHasBeenSet = true; m_roleArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the AWS Identity and Access Management
     * (IAM) role that authorizes Amazon Pinpoint to access the Amazon S3 location to
     * import endpoint definitions from.</p>
     */
    inline ImportJobRequest& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the AWS Identity and Access Management
     * (IAM) role that authorizes Amazon Pinpoint to access the Amazon S3 location to
     * import endpoint definitions from.</p>
     */
    inline ImportJobRequest& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the AWS Identity and Access Management
     * (IAM) role that authorizes Amazon Pinpoint to access the Amazon S3 location to
     * import endpoint definitions from.</p>
     */
    inline ImportJobRequest& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}


    /**
     * <p>The URL of the Amazon Simple Storage Service (Amazon S3) bucket that contains
     * the endpoint definitions to import. This location can be a folder or a single
     * file. If the location is a folder, Amazon Pinpoint imports endpoint definitions
     * from the files in this location, including any subfolders that the folder
     * contains.</p> <p>The URL should be in the following format:
     * s3://<replaceable>bucket-name</replaceable>/<replaceable>folder-name</replaceable>/<replaceable>file-name</replaceable>.
     * The location can end with the key for an individual object or a prefix that
     * qualifies multiple objects.</p>
     */
    inline const Aws::String& GetS3Url() const{ return m_s3Url; }

    /**
     * <p>The URL of the Amazon Simple Storage Service (Amazon S3) bucket that contains
     * the endpoint definitions to import. This location can be a folder or a single
     * file. If the location is a folder, Amazon Pinpoint imports endpoint definitions
     * from the files in this location, including any subfolders that the folder
     * contains.</p> <p>The URL should be in the following format:
     * s3://<replaceable>bucket-name</replaceable>/<replaceable>folder-name</replaceable>/<replaceable>file-name</replaceable>.
     * The location can end with the key for an individual object or a prefix that
     * qualifies multiple objects.</p>
     */
    inline bool S3UrlHasBeenSet() const { return m_s3UrlHasBeenSet; }

    /**
     * <p>The URL of the Amazon Simple Storage Service (Amazon S3) bucket that contains
     * the endpoint definitions to import. This location can be a folder or a single
     * file. If the location is a folder, Amazon Pinpoint imports endpoint definitions
     * from the files in this location, including any subfolders that the folder
     * contains.</p> <p>The URL should be in the following format:
     * s3://<replaceable>bucket-name</replaceable>/<replaceable>folder-name</replaceable>/<replaceable>file-name</replaceable>.
     * The location can end with the key for an individual object or a prefix that
     * qualifies multiple objects.</p>
     */
    inline void SetS3Url(const Aws::String& value) { m_s3UrlHasBeenSet = true; m_s3Url = value; }

    /**
     * <p>The URL of the Amazon Simple Storage Service (Amazon S3) bucket that contains
     * the endpoint definitions to import. This location can be a folder or a single
     * file. If the location is a folder, Amazon Pinpoint imports endpoint definitions
     * from the files in this location, including any subfolders that the folder
     * contains.</p> <p>The URL should be in the following format:
     * s3://<replaceable>bucket-name</replaceable>/<replaceable>folder-name</replaceable>/<replaceable>file-name</replaceable>.
     * The location can end with the key for an individual object or a prefix that
     * qualifies multiple objects.</p>
     */
    inline void SetS3Url(Aws::String&& value) { m_s3UrlHasBeenSet = true; m_s3Url = std::move(value); }

    /**
     * <p>The URL of the Amazon Simple Storage Service (Amazon S3) bucket that contains
     * the endpoint definitions to import. This location can be a folder or a single
     * file. If the location is a folder, Amazon Pinpoint imports endpoint definitions
     * from the files in this location, including any subfolders that the folder
     * contains.</p> <p>The URL should be in the following format:
     * s3://<replaceable>bucket-name</replaceable>/<replaceable>folder-name</replaceable>/<replaceable>file-name</replaceable>.
     * The location can end with the key for an individual object or a prefix that
     * qualifies multiple objects.</p>
     */
    inline void SetS3Url(const char* value) { m_s3UrlHasBeenSet = true; m_s3Url.assign(value); }

    /**
     * <p>The URL of the Amazon Simple Storage Service (Amazon S3) bucket that contains
     * the endpoint definitions to import. This location can be a folder or a single
     * file. If the location is a folder, Amazon Pinpoint imports endpoint definitions
     * from the files in this location, including any subfolders that the folder
     * contains.</p> <p>The URL should be in the following format:
     * s3://<replaceable>bucket-name</replaceable>/<replaceable>folder-name</replaceable>/<replaceable>file-name</replaceable>.
     * The location can end with the key for an individual object or a prefix that
     * qualifies multiple objects.</p>
     */
    inline ImportJobRequest& WithS3Url(const Aws::String& value) { SetS3Url(value); return *this;}

    /**
     * <p>The URL of the Amazon Simple Storage Service (Amazon S3) bucket that contains
     * the endpoint definitions to import. This location can be a folder or a single
     * file. If the location is a folder, Amazon Pinpoint imports endpoint definitions
     * from the files in this location, including any subfolders that the folder
     * contains.</p> <p>The URL should be in the following format:
     * s3://<replaceable>bucket-name</replaceable>/<replaceable>folder-name</replaceable>/<replaceable>file-name</replaceable>.
     * The location can end with the key for an individual object or a prefix that
     * qualifies multiple objects.</p>
     */
    inline ImportJobRequest& WithS3Url(Aws::String&& value) { SetS3Url(std::move(value)); return *this;}

    /**
     * <p>The URL of the Amazon Simple Storage Service (Amazon S3) bucket that contains
     * the endpoint definitions to import. This location can be a folder or a single
     * file. If the location is a folder, Amazon Pinpoint imports endpoint definitions
     * from the files in this location, including any subfolders that the folder
     * contains.</p> <p>The URL should be in the following format:
     * s3://<replaceable>bucket-name</replaceable>/<replaceable>folder-name</replaceable>/<replaceable>file-name</replaceable>.
     * The location can end with the key for an individual object or a prefix that
     * qualifies multiple objects.</p>
     */
    inline ImportJobRequest& WithS3Url(const char* value) { SetS3Url(value); return *this;}


    /**
     * <p>The identifier for the segment to update or add the imported endpoint
     * definitions to, if the import job is meant to update an existing segment.</p>
     */
    inline const Aws::String& GetSegmentId() const{ return m_segmentId; }

    /**
     * <p>The identifier for the segment to update or add the imported endpoint
     * definitions to, if the import job is meant to update an existing segment.</p>
     */
    inline bool SegmentIdHasBeenSet() const { return m_segmentIdHasBeenSet; }

    /**
     * <p>The identifier for the segment to update or add the imported endpoint
     * definitions to, if the import job is meant to update an existing segment.</p>
     */
    inline void SetSegmentId(const Aws::String& value) { m_segmentIdHasBeenSet = true; m_segmentId = value; }

    /**
     * <p>The identifier for the segment to update or add the imported endpoint
     * definitions to, if the import job is meant to update an existing segment.</p>
     */
    inline void SetSegmentId(Aws::String&& value) { m_segmentIdHasBeenSet = true; m_segmentId = std::move(value); }

    /**
     * <p>The identifier for the segment to update or add the imported endpoint
     * definitions to, if the import job is meant to update an existing segment.</p>
     */
    inline void SetSegmentId(const char* value) { m_segmentIdHasBeenSet = true; m_segmentId.assign(value); }

    /**
     * <p>The identifier for the segment to update or add the imported endpoint
     * definitions to, if the import job is meant to update an existing segment.</p>
     */
    inline ImportJobRequest& WithSegmentId(const Aws::String& value) { SetSegmentId(value); return *this;}

    /**
     * <p>The identifier for the segment to update or add the imported endpoint
     * definitions to, if the import job is meant to update an existing segment.</p>
     */
    inline ImportJobRequest& WithSegmentId(Aws::String&& value) { SetSegmentId(std::move(value)); return *this;}

    /**
     * <p>The identifier for the segment to update or add the imported endpoint
     * definitions to, if the import job is meant to update an existing segment.</p>
     */
    inline ImportJobRequest& WithSegmentId(const char* value) { SetSegmentId(value); return *this;}


    /**
     * <p>The custom name for the segment that's created by the import job, if the
     * value of the DefineSegment property is true.</p>
     */
    inline const Aws::String& GetSegmentName() const{ return m_segmentName; }

    /**
     * <p>The custom name for the segment that's created by the import job, if the
     * value of the DefineSegment property is true.</p>
     */
    inline bool SegmentNameHasBeenSet() const { return m_segmentNameHasBeenSet; }

    /**
     * <p>The custom name for the segment that's created by the import job, if the
     * value of the DefineSegment property is true.</p>
     */
    inline void SetSegmentName(const Aws::String& value) { m_segmentNameHasBeenSet = true; m_segmentName = value; }

    /**
     * <p>The custom name for the segment that's created by the import job, if the
     * value of the DefineSegment property is true.</p>
     */
    inline void SetSegmentName(Aws::String&& value) { m_segmentNameHasBeenSet = true; m_segmentName = std::move(value); }

    /**
     * <p>The custom name for the segment that's created by the import job, if the
     * value of the DefineSegment property is true.</p>
     */
    inline void SetSegmentName(const char* value) { m_segmentNameHasBeenSet = true; m_segmentName.assign(value); }

    /**
     * <p>The custom name for the segment that's created by the import job, if the
     * value of the DefineSegment property is true.</p>
     */
    inline ImportJobRequest& WithSegmentName(const Aws::String& value) { SetSegmentName(value); return *this;}

    /**
     * <p>The custom name for the segment that's created by the import job, if the
     * value of the DefineSegment property is true.</p>
     */
    inline ImportJobRequest& WithSegmentName(Aws::String&& value) { SetSegmentName(std::move(value)); return *this;}

    /**
     * <p>The custom name for the segment that's created by the import job, if the
     * value of the DefineSegment property is true.</p>
     */
    inline ImportJobRequest& WithSegmentName(const char* value) { SetSegmentName(value); return *this;}

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
