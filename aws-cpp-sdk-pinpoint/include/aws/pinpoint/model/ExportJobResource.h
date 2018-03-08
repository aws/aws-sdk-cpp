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
} // namespace Json
} // namespace Utils
namespace Pinpoint
{
namespace Model
{

  class AWS_PINPOINT_API ExportJobResource
  {
  public:
    ExportJobResource();
    ExportJobResource(const Aws::Utils::Json::JsonValue& jsonValue);
    ExportJobResource& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * The Amazon Resource Name (ARN) of an IAM role that grants Amazon Pinpoint access
     * to the Amazon S3 location that endpoints will be exported to.
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }

    /**
     * The Amazon Resource Name (ARN) of an IAM role that grants Amazon Pinpoint access
     * to the Amazon S3 location that endpoints will be exported to.
     */
    inline void SetRoleArn(const Aws::String& value) { m_roleArnHasBeenSet = true; m_roleArn = value; }

    /**
     * The Amazon Resource Name (ARN) of an IAM role that grants Amazon Pinpoint access
     * to the Amazon S3 location that endpoints will be exported to.
     */
    inline void SetRoleArn(Aws::String&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::move(value); }

    /**
     * The Amazon Resource Name (ARN) of an IAM role that grants Amazon Pinpoint access
     * to the Amazon S3 location that endpoints will be exported to.
     */
    inline void SetRoleArn(const char* value) { m_roleArnHasBeenSet = true; m_roleArn.assign(value); }

    /**
     * The Amazon Resource Name (ARN) of an IAM role that grants Amazon Pinpoint access
     * to the Amazon S3 location that endpoints will be exported to.
     */
    inline ExportJobResource& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}

    /**
     * The Amazon Resource Name (ARN) of an IAM role that grants Amazon Pinpoint access
     * to the Amazon S3 location that endpoints will be exported to.
     */
    inline ExportJobResource& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}

    /**
     * The Amazon Resource Name (ARN) of an IAM role that grants Amazon Pinpoint access
     * to the Amazon S3 location that endpoints will be exported to.
     */
    inline ExportJobResource& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}


    /**
     * A URL that points to the location within an Amazon S3 bucket that will receive
     * the export. The location is typically a folder with multiple files.
The URL
     * should follow this format: s3://bucket-name/folder-name/

Amazon Pinpoint will
     * export endpoints to this location.
     */
    inline const Aws::String& GetS3UrlPrefix() const{ return m_s3UrlPrefix; }

    /**
     * A URL that points to the location within an Amazon S3 bucket that will receive
     * the export. The location is typically a folder with multiple files.
The URL
     * should follow this format: s3://bucket-name/folder-name/

Amazon Pinpoint will
     * export endpoints to this location.
     */
    inline void SetS3UrlPrefix(const Aws::String& value) { m_s3UrlPrefixHasBeenSet = true; m_s3UrlPrefix = value; }

    /**
     * A URL that points to the location within an Amazon S3 bucket that will receive
     * the export. The location is typically a folder with multiple files.
The URL
     * should follow this format: s3://bucket-name/folder-name/

Amazon Pinpoint will
     * export endpoints to this location.
     */
    inline void SetS3UrlPrefix(Aws::String&& value) { m_s3UrlPrefixHasBeenSet = true; m_s3UrlPrefix = std::move(value); }

    /**
     * A URL that points to the location within an Amazon S3 bucket that will receive
     * the export. The location is typically a folder with multiple files.
The URL
     * should follow this format: s3://bucket-name/folder-name/

Amazon Pinpoint will
     * export endpoints to this location.
     */
    inline void SetS3UrlPrefix(const char* value) { m_s3UrlPrefixHasBeenSet = true; m_s3UrlPrefix.assign(value); }

    /**
     * A URL that points to the location within an Amazon S3 bucket that will receive
     * the export. The location is typically a folder with multiple files.
The URL
     * should follow this format: s3://bucket-name/folder-name/

Amazon Pinpoint will
     * export endpoints to this location.
     */
    inline ExportJobResource& WithS3UrlPrefix(const Aws::String& value) { SetS3UrlPrefix(value); return *this;}

    /**
     * A URL that points to the location within an Amazon S3 bucket that will receive
     * the export. The location is typically a folder with multiple files.
The URL
     * should follow this format: s3://bucket-name/folder-name/

Amazon Pinpoint will
     * export endpoints to this location.
     */
    inline ExportJobResource& WithS3UrlPrefix(Aws::String&& value) { SetS3UrlPrefix(std::move(value)); return *this;}

    /**
     * A URL that points to the location within an Amazon S3 bucket that will receive
     * the export. The location is typically a folder with multiple files.
The URL
     * should follow this format: s3://bucket-name/folder-name/

Amazon Pinpoint will
     * export endpoints to this location.
     */
    inline ExportJobResource& WithS3UrlPrefix(const char* value) { SetS3UrlPrefix(value); return *this;}


    /**
     * The ID of the segment to export endpoints from. If not present, all endpoints
     * are exported.
     */
    inline const Aws::String& GetSegmentId() const{ return m_segmentId; }

    /**
     * The ID of the segment to export endpoints from. If not present, all endpoints
     * are exported.
     */
    inline void SetSegmentId(const Aws::String& value) { m_segmentIdHasBeenSet = true; m_segmentId = value; }

    /**
     * The ID of the segment to export endpoints from. If not present, all endpoints
     * are exported.
     */
    inline void SetSegmentId(Aws::String&& value) { m_segmentIdHasBeenSet = true; m_segmentId = std::move(value); }

    /**
     * The ID of the segment to export endpoints from. If not present, all endpoints
     * are exported.
     */
    inline void SetSegmentId(const char* value) { m_segmentIdHasBeenSet = true; m_segmentId.assign(value); }

    /**
     * The ID of the segment to export endpoints from. If not present, all endpoints
     * are exported.
     */
    inline ExportJobResource& WithSegmentId(const Aws::String& value) { SetSegmentId(value); return *this;}

    /**
     * The ID of the segment to export endpoints from. If not present, all endpoints
     * are exported.
     */
    inline ExportJobResource& WithSegmentId(Aws::String&& value) { SetSegmentId(std::move(value)); return *this;}

    /**
     * The ID of the segment to export endpoints from. If not present, all endpoints
     * are exported.
     */
    inline ExportJobResource& WithSegmentId(const char* value) { SetSegmentId(value); return *this;}

  private:

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet;

    Aws::String m_s3UrlPrefix;
    bool m_s3UrlPrefixHasBeenSet;

    Aws::String m_segmentId;
    bool m_segmentIdHasBeenSet;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
