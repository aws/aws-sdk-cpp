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
   * <p>Provides information about the resource settings for a job that exports
   * endpoint definitions to a file. The file can be added directly to an Amazon
   * Simple Storage Service (Amazon S3) bucket by using the Amazon Pinpoint API or
   * downloaded directly to a computer by using the Amazon Pinpoint
   * console.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/ExportJobResource">AWS
   * API Reference</a></p>
   */
  class AWS_PINPOINT_API ExportJobResource
  {
  public:
    ExportJobResource();
    ExportJobResource(Aws::Utils::Json::JsonView jsonValue);
    ExportJobResource& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Resource Name (ARN) of the AWS Identity and Access Management
     * (IAM) role that authorized Amazon Pinpoint to access the Amazon S3 location
     * where the endpoint definitions were exported to.</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the AWS Identity and Access Management
     * (IAM) role that authorized Amazon Pinpoint to access the Amazon S3 location
     * where the endpoint definitions were exported to.</p>
     */
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the AWS Identity and Access Management
     * (IAM) role that authorized Amazon Pinpoint to access the Amazon S3 location
     * where the endpoint definitions were exported to.</p>
     */
    inline void SetRoleArn(const Aws::String& value) { m_roleArnHasBeenSet = true; m_roleArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the AWS Identity and Access Management
     * (IAM) role that authorized Amazon Pinpoint to access the Amazon S3 location
     * where the endpoint definitions were exported to.</p>
     */
    inline void SetRoleArn(Aws::String&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the AWS Identity and Access Management
     * (IAM) role that authorized Amazon Pinpoint to access the Amazon S3 location
     * where the endpoint definitions were exported to.</p>
     */
    inline void SetRoleArn(const char* value) { m_roleArnHasBeenSet = true; m_roleArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the AWS Identity and Access Management
     * (IAM) role that authorized Amazon Pinpoint to access the Amazon S3 location
     * where the endpoint definitions were exported to.</p>
     */
    inline ExportJobResource& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the AWS Identity and Access Management
     * (IAM) role that authorized Amazon Pinpoint to access the Amazon S3 location
     * where the endpoint definitions were exported to.</p>
     */
    inline ExportJobResource& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the AWS Identity and Access Management
     * (IAM) role that authorized Amazon Pinpoint to access the Amazon S3 location
     * where the endpoint definitions were exported to.</p>
     */
    inline ExportJobResource& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}


    /**
     * <p>The URL of the location in an Amazon Simple Storage Service (Amazon S3)
     * bucket where the endpoint definitions were exported to. This location is
     * typically a folder that contains multiple files. The URL should be in the
     * following format:
     * s3://<replaceable>bucket-name</replaceable>/<replaceable>folder-name</replaceable>/.</p>
     */
    inline const Aws::String& GetS3UrlPrefix() const{ return m_s3UrlPrefix; }

    /**
     * <p>The URL of the location in an Amazon Simple Storage Service (Amazon S3)
     * bucket where the endpoint definitions were exported to. This location is
     * typically a folder that contains multiple files. The URL should be in the
     * following format:
     * s3://<replaceable>bucket-name</replaceable>/<replaceable>folder-name</replaceable>/.</p>
     */
    inline bool S3UrlPrefixHasBeenSet() const { return m_s3UrlPrefixHasBeenSet; }

    /**
     * <p>The URL of the location in an Amazon Simple Storage Service (Amazon S3)
     * bucket where the endpoint definitions were exported to. This location is
     * typically a folder that contains multiple files. The URL should be in the
     * following format:
     * s3://<replaceable>bucket-name</replaceable>/<replaceable>folder-name</replaceable>/.</p>
     */
    inline void SetS3UrlPrefix(const Aws::String& value) { m_s3UrlPrefixHasBeenSet = true; m_s3UrlPrefix = value; }

    /**
     * <p>The URL of the location in an Amazon Simple Storage Service (Amazon S3)
     * bucket where the endpoint definitions were exported to. This location is
     * typically a folder that contains multiple files. The URL should be in the
     * following format:
     * s3://<replaceable>bucket-name</replaceable>/<replaceable>folder-name</replaceable>/.</p>
     */
    inline void SetS3UrlPrefix(Aws::String&& value) { m_s3UrlPrefixHasBeenSet = true; m_s3UrlPrefix = std::move(value); }

    /**
     * <p>The URL of the location in an Amazon Simple Storage Service (Amazon S3)
     * bucket where the endpoint definitions were exported to. This location is
     * typically a folder that contains multiple files. The URL should be in the
     * following format:
     * s3://<replaceable>bucket-name</replaceable>/<replaceable>folder-name</replaceable>/.</p>
     */
    inline void SetS3UrlPrefix(const char* value) { m_s3UrlPrefixHasBeenSet = true; m_s3UrlPrefix.assign(value); }

    /**
     * <p>The URL of the location in an Amazon Simple Storage Service (Amazon S3)
     * bucket where the endpoint definitions were exported to. This location is
     * typically a folder that contains multiple files. The URL should be in the
     * following format:
     * s3://<replaceable>bucket-name</replaceable>/<replaceable>folder-name</replaceable>/.</p>
     */
    inline ExportJobResource& WithS3UrlPrefix(const Aws::String& value) { SetS3UrlPrefix(value); return *this;}

    /**
     * <p>The URL of the location in an Amazon Simple Storage Service (Amazon S3)
     * bucket where the endpoint definitions were exported to. This location is
     * typically a folder that contains multiple files. The URL should be in the
     * following format:
     * s3://<replaceable>bucket-name</replaceable>/<replaceable>folder-name</replaceable>/.</p>
     */
    inline ExportJobResource& WithS3UrlPrefix(Aws::String&& value) { SetS3UrlPrefix(std::move(value)); return *this;}

    /**
     * <p>The URL of the location in an Amazon Simple Storage Service (Amazon S3)
     * bucket where the endpoint definitions were exported to. This location is
     * typically a folder that contains multiple files. The URL should be in the
     * following format:
     * s3://<replaceable>bucket-name</replaceable>/<replaceable>folder-name</replaceable>/.</p>
     */
    inline ExportJobResource& WithS3UrlPrefix(const char* value) { SetS3UrlPrefix(value); return *this;}


    /**
     * <p>The identifier for the segment that the endpoint definitions were exported
     * from. If this value isn't present, Amazon Pinpoint exported definitions for all
     * the endpoints that are associated with the application.</p>
     */
    inline const Aws::String& GetSegmentId() const{ return m_segmentId; }

    /**
     * <p>The identifier for the segment that the endpoint definitions were exported
     * from. If this value isn't present, Amazon Pinpoint exported definitions for all
     * the endpoints that are associated with the application.</p>
     */
    inline bool SegmentIdHasBeenSet() const { return m_segmentIdHasBeenSet; }

    /**
     * <p>The identifier for the segment that the endpoint definitions were exported
     * from. If this value isn't present, Amazon Pinpoint exported definitions for all
     * the endpoints that are associated with the application.</p>
     */
    inline void SetSegmentId(const Aws::String& value) { m_segmentIdHasBeenSet = true; m_segmentId = value; }

    /**
     * <p>The identifier for the segment that the endpoint definitions were exported
     * from. If this value isn't present, Amazon Pinpoint exported definitions for all
     * the endpoints that are associated with the application.</p>
     */
    inline void SetSegmentId(Aws::String&& value) { m_segmentIdHasBeenSet = true; m_segmentId = std::move(value); }

    /**
     * <p>The identifier for the segment that the endpoint definitions were exported
     * from. If this value isn't present, Amazon Pinpoint exported definitions for all
     * the endpoints that are associated with the application.</p>
     */
    inline void SetSegmentId(const char* value) { m_segmentIdHasBeenSet = true; m_segmentId.assign(value); }

    /**
     * <p>The identifier for the segment that the endpoint definitions were exported
     * from. If this value isn't present, Amazon Pinpoint exported definitions for all
     * the endpoints that are associated with the application.</p>
     */
    inline ExportJobResource& WithSegmentId(const Aws::String& value) { SetSegmentId(value); return *this;}

    /**
     * <p>The identifier for the segment that the endpoint definitions were exported
     * from. If this value isn't present, Amazon Pinpoint exported definitions for all
     * the endpoints that are associated with the application.</p>
     */
    inline ExportJobResource& WithSegmentId(Aws::String&& value) { SetSegmentId(std::move(value)); return *this;}

    /**
     * <p>The identifier for the segment that the endpoint definitions were exported
     * from. If this value isn't present, Amazon Pinpoint exported definitions for all
     * the endpoints that are associated with the application.</p>
     */
    inline ExportJobResource& WithSegmentId(const char* value) { SetSegmentId(value); return *this;}


    /**
     * <p>The version of the segment that the endpoint definitions were exported
     * from.</p>
     */
    inline int GetSegmentVersion() const{ return m_segmentVersion; }

    /**
     * <p>The version of the segment that the endpoint definitions were exported
     * from.</p>
     */
    inline bool SegmentVersionHasBeenSet() const { return m_segmentVersionHasBeenSet; }

    /**
     * <p>The version of the segment that the endpoint definitions were exported
     * from.</p>
     */
    inline void SetSegmentVersion(int value) { m_segmentVersionHasBeenSet = true; m_segmentVersion = value; }

    /**
     * <p>The version of the segment that the endpoint definitions were exported
     * from.</p>
     */
    inline ExportJobResource& WithSegmentVersion(int value) { SetSegmentVersion(value); return *this;}

  private:

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet;

    Aws::String m_s3UrlPrefix;
    bool m_s3UrlPrefixHasBeenSet;

    Aws::String m_segmentId;
    bool m_segmentIdHasBeenSet;

    int m_segmentVersion;
    bool m_segmentVersionHasBeenSet;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
