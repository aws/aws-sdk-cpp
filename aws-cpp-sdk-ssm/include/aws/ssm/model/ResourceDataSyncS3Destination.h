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
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ssm/model/ResourceDataSyncS3Format.h>
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
namespace SSM
{
namespace Model
{

  /**
   * <p>Information about the target Amazon S3 bucket for the Resource Data
   * Sync.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/ResourceDataSyncS3Destination">AWS
   * API Reference</a></p>
   */
  class AWS_SSM_API ResourceDataSyncS3Destination
  {
  public:
    ResourceDataSyncS3Destination();
    ResourceDataSyncS3Destination(Aws::Utils::Json::JsonView jsonValue);
    ResourceDataSyncS3Destination& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the Amazon S3 bucket where the aggregated data is stored.</p>
     */
    inline const Aws::String& GetBucketName() const{ return m_bucketName; }

    /**
     * <p>The name of the Amazon S3 bucket where the aggregated data is stored.</p>
     */
    inline bool BucketNameHasBeenSet() const { return m_bucketNameHasBeenSet; }

    /**
     * <p>The name of the Amazon S3 bucket where the aggregated data is stored.</p>
     */
    inline void SetBucketName(const Aws::String& value) { m_bucketNameHasBeenSet = true; m_bucketName = value; }

    /**
     * <p>The name of the Amazon S3 bucket where the aggregated data is stored.</p>
     */
    inline void SetBucketName(Aws::String&& value) { m_bucketNameHasBeenSet = true; m_bucketName = std::move(value); }

    /**
     * <p>The name of the Amazon S3 bucket where the aggregated data is stored.</p>
     */
    inline void SetBucketName(const char* value) { m_bucketNameHasBeenSet = true; m_bucketName.assign(value); }

    /**
     * <p>The name of the Amazon S3 bucket where the aggregated data is stored.</p>
     */
    inline ResourceDataSyncS3Destination& WithBucketName(const Aws::String& value) { SetBucketName(value); return *this;}

    /**
     * <p>The name of the Amazon S3 bucket where the aggregated data is stored.</p>
     */
    inline ResourceDataSyncS3Destination& WithBucketName(Aws::String&& value) { SetBucketName(std::move(value)); return *this;}

    /**
     * <p>The name of the Amazon S3 bucket where the aggregated data is stored.</p>
     */
    inline ResourceDataSyncS3Destination& WithBucketName(const char* value) { SetBucketName(value); return *this;}


    /**
     * <p>An Amazon S3 prefix for the bucket.</p>
     */
    inline const Aws::String& GetPrefix() const{ return m_prefix; }

    /**
     * <p>An Amazon S3 prefix for the bucket.</p>
     */
    inline bool PrefixHasBeenSet() const { return m_prefixHasBeenSet; }

    /**
     * <p>An Amazon S3 prefix for the bucket.</p>
     */
    inline void SetPrefix(const Aws::String& value) { m_prefixHasBeenSet = true; m_prefix = value; }

    /**
     * <p>An Amazon S3 prefix for the bucket.</p>
     */
    inline void SetPrefix(Aws::String&& value) { m_prefixHasBeenSet = true; m_prefix = std::move(value); }

    /**
     * <p>An Amazon S3 prefix for the bucket.</p>
     */
    inline void SetPrefix(const char* value) { m_prefixHasBeenSet = true; m_prefix.assign(value); }

    /**
     * <p>An Amazon S3 prefix for the bucket.</p>
     */
    inline ResourceDataSyncS3Destination& WithPrefix(const Aws::String& value) { SetPrefix(value); return *this;}

    /**
     * <p>An Amazon S3 prefix for the bucket.</p>
     */
    inline ResourceDataSyncS3Destination& WithPrefix(Aws::String&& value) { SetPrefix(std::move(value)); return *this;}

    /**
     * <p>An Amazon S3 prefix for the bucket.</p>
     */
    inline ResourceDataSyncS3Destination& WithPrefix(const char* value) { SetPrefix(value); return *this;}


    /**
     * <p>A supported sync format. The following format is currently supported:
     * JsonSerDe</p>
     */
    inline const ResourceDataSyncS3Format& GetSyncFormat() const{ return m_syncFormat; }

    /**
     * <p>A supported sync format. The following format is currently supported:
     * JsonSerDe</p>
     */
    inline bool SyncFormatHasBeenSet() const { return m_syncFormatHasBeenSet; }

    /**
     * <p>A supported sync format. The following format is currently supported:
     * JsonSerDe</p>
     */
    inline void SetSyncFormat(const ResourceDataSyncS3Format& value) { m_syncFormatHasBeenSet = true; m_syncFormat = value; }

    /**
     * <p>A supported sync format. The following format is currently supported:
     * JsonSerDe</p>
     */
    inline void SetSyncFormat(ResourceDataSyncS3Format&& value) { m_syncFormatHasBeenSet = true; m_syncFormat = std::move(value); }

    /**
     * <p>A supported sync format. The following format is currently supported:
     * JsonSerDe</p>
     */
    inline ResourceDataSyncS3Destination& WithSyncFormat(const ResourceDataSyncS3Format& value) { SetSyncFormat(value); return *this;}

    /**
     * <p>A supported sync format. The following format is currently supported:
     * JsonSerDe</p>
     */
    inline ResourceDataSyncS3Destination& WithSyncFormat(ResourceDataSyncS3Format&& value) { SetSyncFormat(std::move(value)); return *this;}


    /**
     * <p>The AWS Region with the Amazon S3 bucket targeted by the Resource Data
     * Sync.</p>
     */
    inline const Aws::String& GetRegion() const{ return m_region; }

    /**
     * <p>The AWS Region with the Amazon S3 bucket targeted by the Resource Data
     * Sync.</p>
     */
    inline bool RegionHasBeenSet() const { return m_regionHasBeenSet; }

    /**
     * <p>The AWS Region with the Amazon S3 bucket targeted by the Resource Data
     * Sync.</p>
     */
    inline void SetRegion(const Aws::String& value) { m_regionHasBeenSet = true; m_region = value; }

    /**
     * <p>The AWS Region with the Amazon S3 bucket targeted by the Resource Data
     * Sync.</p>
     */
    inline void SetRegion(Aws::String&& value) { m_regionHasBeenSet = true; m_region = std::move(value); }

    /**
     * <p>The AWS Region with the Amazon S3 bucket targeted by the Resource Data
     * Sync.</p>
     */
    inline void SetRegion(const char* value) { m_regionHasBeenSet = true; m_region.assign(value); }

    /**
     * <p>The AWS Region with the Amazon S3 bucket targeted by the Resource Data
     * Sync.</p>
     */
    inline ResourceDataSyncS3Destination& WithRegion(const Aws::String& value) { SetRegion(value); return *this;}

    /**
     * <p>The AWS Region with the Amazon S3 bucket targeted by the Resource Data
     * Sync.</p>
     */
    inline ResourceDataSyncS3Destination& WithRegion(Aws::String&& value) { SetRegion(std::move(value)); return *this;}

    /**
     * <p>The AWS Region with the Amazon S3 bucket targeted by the Resource Data
     * Sync.</p>
     */
    inline ResourceDataSyncS3Destination& WithRegion(const char* value) { SetRegion(value); return *this;}


    /**
     * <p>The ARN of an encryption key for a destination in Amazon S3. Must belong to
     * the same Region as the destination Amazon S3 bucket.</p>
     */
    inline const Aws::String& GetAWSKMSKeyARN() const{ return m_aWSKMSKeyARN; }

    /**
     * <p>The ARN of an encryption key for a destination in Amazon S3. Must belong to
     * the same Region as the destination Amazon S3 bucket.</p>
     */
    inline bool AWSKMSKeyARNHasBeenSet() const { return m_aWSKMSKeyARNHasBeenSet; }

    /**
     * <p>The ARN of an encryption key for a destination in Amazon S3. Must belong to
     * the same Region as the destination Amazon S3 bucket.</p>
     */
    inline void SetAWSKMSKeyARN(const Aws::String& value) { m_aWSKMSKeyARNHasBeenSet = true; m_aWSKMSKeyARN = value; }

    /**
     * <p>The ARN of an encryption key for a destination in Amazon S3. Must belong to
     * the same Region as the destination Amazon S3 bucket.</p>
     */
    inline void SetAWSKMSKeyARN(Aws::String&& value) { m_aWSKMSKeyARNHasBeenSet = true; m_aWSKMSKeyARN = std::move(value); }

    /**
     * <p>The ARN of an encryption key for a destination in Amazon S3. Must belong to
     * the same Region as the destination Amazon S3 bucket.</p>
     */
    inline void SetAWSKMSKeyARN(const char* value) { m_aWSKMSKeyARNHasBeenSet = true; m_aWSKMSKeyARN.assign(value); }

    /**
     * <p>The ARN of an encryption key for a destination in Amazon S3. Must belong to
     * the same Region as the destination Amazon S3 bucket.</p>
     */
    inline ResourceDataSyncS3Destination& WithAWSKMSKeyARN(const Aws::String& value) { SetAWSKMSKeyARN(value); return *this;}

    /**
     * <p>The ARN of an encryption key for a destination in Amazon S3. Must belong to
     * the same Region as the destination Amazon S3 bucket.</p>
     */
    inline ResourceDataSyncS3Destination& WithAWSKMSKeyARN(Aws::String&& value) { SetAWSKMSKeyARN(std::move(value)); return *this;}

    /**
     * <p>The ARN of an encryption key for a destination in Amazon S3. Must belong to
     * the same Region as the destination Amazon S3 bucket.</p>
     */
    inline ResourceDataSyncS3Destination& WithAWSKMSKeyARN(const char* value) { SetAWSKMSKeyARN(value); return *this;}

  private:

    Aws::String m_bucketName;
    bool m_bucketNameHasBeenSet;

    Aws::String m_prefix;
    bool m_prefixHasBeenSet;

    ResourceDataSyncS3Format m_syncFormat;
    bool m_syncFormatHasBeenSet;

    Aws::String m_region;
    bool m_regionHasBeenSet;

    Aws::String m_aWSKMSKeyARN;
    bool m_aWSKMSKeyARNHasBeenSet;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
