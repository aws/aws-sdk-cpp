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
#include <aws/core/utils/memory/stl/AWSMap.h>
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
   * Segment import definition.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/SegmentImportResource">AWS
   * API Reference</a></p>
   */
  class AWS_PINPOINT_API SegmentImportResource
  {
  public:
    SegmentImportResource();
    SegmentImportResource(Aws::Utils::Json::JsonView jsonValue);
    SegmentImportResource& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * The number of channel types in the imported segment.
     */
    inline const Aws::Map<Aws::String, int>& GetChannelCounts() const{ return m_channelCounts; }

    /**
     * The number of channel types in the imported segment.
     */
    inline bool ChannelCountsHasBeenSet() const { return m_channelCountsHasBeenSet; }

    /**
     * The number of channel types in the imported segment.
     */
    inline void SetChannelCounts(const Aws::Map<Aws::String, int>& value) { m_channelCountsHasBeenSet = true; m_channelCounts = value; }

    /**
     * The number of channel types in the imported segment.
     */
    inline void SetChannelCounts(Aws::Map<Aws::String, int>&& value) { m_channelCountsHasBeenSet = true; m_channelCounts = std::move(value); }

    /**
     * The number of channel types in the imported segment.
     */
    inline SegmentImportResource& WithChannelCounts(const Aws::Map<Aws::String, int>& value) { SetChannelCounts(value); return *this;}

    /**
     * The number of channel types in the imported segment.
     */
    inline SegmentImportResource& WithChannelCounts(Aws::Map<Aws::String, int>&& value) { SetChannelCounts(std::move(value)); return *this;}

    /**
     * The number of channel types in the imported segment.
     */
    inline SegmentImportResource& AddChannelCounts(const Aws::String& key, int value) { m_channelCountsHasBeenSet = true; m_channelCounts.emplace(key, value); return *this; }

    /**
     * The number of channel types in the imported segment.
     */
    inline SegmentImportResource& AddChannelCounts(Aws::String&& key, int value) { m_channelCountsHasBeenSet = true; m_channelCounts.emplace(std::move(key), value); return *this; }

    /**
     * The number of channel types in the imported segment.
     */
    inline SegmentImportResource& AddChannelCounts(const char* key, int value) { m_channelCountsHasBeenSet = true; m_channelCounts.emplace(key, value); return *this; }


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
    inline SegmentImportResource& WithExternalId(const Aws::String& value) { SetExternalId(value); return *this;}

    /**
     * (Deprecated) Your AWS account ID, which you assigned to the ExternalID key in an
     * IAM trust policy. Used by Amazon Pinpoint to assume an IAM role. This
     * requirement is removed, and external IDs are not recommended for IAM roles
     * assumed by Amazon Pinpoint.
     */
    inline SegmentImportResource& WithExternalId(Aws::String&& value) { SetExternalId(std::move(value)); return *this;}

    /**
     * (Deprecated) Your AWS account ID, which you assigned to the ExternalID key in an
     * IAM trust policy. Used by Amazon Pinpoint to assume an IAM role. This
     * requirement is removed, and external IDs are not recommended for IAM roles
     * assumed by Amazon Pinpoint.
     */
    inline SegmentImportResource& WithExternalId(const char* value) { SetExternalId(value); return *this;}


    /**
     * The format of the endpoint files that were imported to create this
     * segment.
Valid values: CSV, JSON
     */
    inline const Format& GetFormat() const{ return m_format; }

    /**
     * The format of the endpoint files that were imported to create this
     * segment.
Valid values: CSV, JSON
     */
    inline bool FormatHasBeenSet() const { return m_formatHasBeenSet; }

    /**
     * The format of the endpoint files that were imported to create this
     * segment.
Valid values: CSV, JSON
     */
    inline void SetFormat(const Format& value) { m_formatHasBeenSet = true; m_format = value; }

    /**
     * The format of the endpoint files that were imported to create this
     * segment.
Valid values: CSV, JSON
     */
    inline void SetFormat(Format&& value) { m_formatHasBeenSet = true; m_format = std::move(value); }

    /**
     * The format of the endpoint files that were imported to create this
     * segment.
Valid values: CSV, JSON
     */
    inline SegmentImportResource& WithFormat(const Format& value) { SetFormat(value); return *this;}

    /**
     * The format of the endpoint files that were imported to create this
     * segment.
Valid values: CSV, JSON
     */
    inline SegmentImportResource& WithFormat(Format&& value) { SetFormat(std::move(value)); return *this;}


    /**
     * The Amazon Resource Name (ARN) of an IAM role that grants Amazon Pinpoint access
     * to the endpoints in Amazon S3.
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }

    /**
     * The Amazon Resource Name (ARN) of an IAM role that grants Amazon Pinpoint access
     * to the endpoints in Amazon S3.
     */
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }

    /**
     * The Amazon Resource Name (ARN) of an IAM role that grants Amazon Pinpoint access
     * to the endpoints in Amazon S3.
     */
    inline void SetRoleArn(const Aws::String& value) { m_roleArnHasBeenSet = true; m_roleArn = value; }

    /**
     * The Amazon Resource Name (ARN) of an IAM role that grants Amazon Pinpoint access
     * to the endpoints in Amazon S3.
     */
    inline void SetRoleArn(Aws::String&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::move(value); }

    /**
     * The Amazon Resource Name (ARN) of an IAM role that grants Amazon Pinpoint access
     * to the endpoints in Amazon S3.
     */
    inline void SetRoleArn(const char* value) { m_roleArnHasBeenSet = true; m_roleArn.assign(value); }

    /**
     * The Amazon Resource Name (ARN) of an IAM role that grants Amazon Pinpoint access
     * to the endpoints in Amazon S3.
     */
    inline SegmentImportResource& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}

    /**
     * The Amazon Resource Name (ARN) of an IAM role that grants Amazon Pinpoint access
     * to the endpoints in Amazon S3.
     */
    inline SegmentImportResource& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}

    /**
     * The Amazon Resource Name (ARN) of an IAM role that grants Amazon Pinpoint access
     * to the endpoints in Amazon S3.
     */
    inline SegmentImportResource& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}


    /**
     * The URL of the S3 bucket that the segment was imported from.
     */
    inline const Aws::String& GetS3Url() const{ return m_s3Url; }

    /**
     * The URL of the S3 bucket that the segment was imported from.
     */
    inline bool S3UrlHasBeenSet() const { return m_s3UrlHasBeenSet; }

    /**
     * The URL of the S3 bucket that the segment was imported from.
     */
    inline void SetS3Url(const Aws::String& value) { m_s3UrlHasBeenSet = true; m_s3Url = value; }

    /**
     * The URL of the S3 bucket that the segment was imported from.
     */
    inline void SetS3Url(Aws::String&& value) { m_s3UrlHasBeenSet = true; m_s3Url = std::move(value); }

    /**
     * The URL of the S3 bucket that the segment was imported from.
     */
    inline void SetS3Url(const char* value) { m_s3UrlHasBeenSet = true; m_s3Url.assign(value); }

    /**
     * The URL of the S3 bucket that the segment was imported from.
     */
    inline SegmentImportResource& WithS3Url(const Aws::String& value) { SetS3Url(value); return *this;}

    /**
     * The URL of the S3 bucket that the segment was imported from.
     */
    inline SegmentImportResource& WithS3Url(Aws::String&& value) { SetS3Url(std::move(value)); return *this;}

    /**
     * The URL of the S3 bucket that the segment was imported from.
     */
    inline SegmentImportResource& WithS3Url(const char* value) { SetS3Url(value); return *this;}


    /**
     * The number of endpoints that were successfully imported to create this segment.
     */
    inline int GetSize() const{ return m_size; }

    /**
     * The number of endpoints that were successfully imported to create this segment.
     */
    inline bool SizeHasBeenSet() const { return m_sizeHasBeenSet; }

    /**
     * The number of endpoints that were successfully imported to create this segment.
     */
    inline void SetSize(int value) { m_sizeHasBeenSet = true; m_size = value; }

    /**
     * The number of endpoints that were successfully imported to create this segment.
     */
    inline SegmentImportResource& WithSize(int value) { SetSize(value); return *this;}

  private:

    Aws::Map<Aws::String, int> m_channelCounts;
    bool m_channelCountsHasBeenSet;

    Aws::String m_externalId;
    bool m_externalIdHasBeenSet;

    Format m_format;
    bool m_formatHasBeenSet;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet;

    Aws::String m_s3Url;
    bool m_s3UrlHasBeenSet;

    int m_size;
    bool m_sizeHasBeenSet;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
