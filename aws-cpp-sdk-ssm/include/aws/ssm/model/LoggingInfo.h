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
   * <p>Information about an Amazon S3 bucket to write instance-level logs to.</p>
   * <note> <p> <code>LoggingInfo</code> has been deprecated. To specify an S3 bucket
   * to contain logs, instead use the <code>OutputS3BucketName</code> and
   * <code>OutputS3KeyPrefix</code> options in the
   * <code>TaskInvocationParameters</code> structure. For information about how
   * Systems Manager handles these options for the supported maintenance window task
   * types, see <a>MaintenanceWindowTaskInvocationParameters</a>.</p>
   * </note><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/LoggingInfo">AWS API
   * Reference</a></p>
   */
  class AWS_SSM_API LoggingInfo
  {
  public:
    LoggingInfo();
    LoggingInfo(Aws::Utils::Json::JsonView jsonValue);
    LoggingInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of an Amazon S3 bucket where execution logs are stored .</p>
     */
    inline const Aws::String& GetS3BucketName() const{ return m_s3BucketName; }

    /**
     * <p>The name of an Amazon S3 bucket where execution logs are stored .</p>
     */
    inline bool S3BucketNameHasBeenSet() const { return m_s3BucketNameHasBeenSet; }

    /**
     * <p>The name of an Amazon S3 bucket where execution logs are stored .</p>
     */
    inline void SetS3BucketName(const Aws::String& value) { m_s3BucketNameHasBeenSet = true; m_s3BucketName = value; }

    /**
     * <p>The name of an Amazon S3 bucket where execution logs are stored .</p>
     */
    inline void SetS3BucketName(Aws::String&& value) { m_s3BucketNameHasBeenSet = true; m_s3BucketName = std::move(value); }

    /**
     * <p>The name of an Amazon S3 bucket where execution logs are stored .</p>
     */
    inline void SetS3BucketName(const char* value) { m_s3BucketNameHasBeenSet = true; m_s3BucketName.assign(value); }

    /**
     * <p>The name of an Amazon S3 bucket where execution logs are stored .</p>
     */
    inline LoggingInfo& WithS3BucketName(const Aws::String& value) { SetS3BucketName(value); return *this;}

    /**
     * <p>The name of an Amazon S3 bucket where execution logs are stored .</p>
     */
    inline LoggingInfo& WithS3BucketName(Aws::String&& value) { SetS3BucketName(std::move(value)); return *this;}

    /**
     * <p>The name of an Amazon S3 bucket where execution logs are stored .</p>
     */
    inline LoggingInfo& WithS3BucketName(const char* value) { SetS3BucketName(value); return *this;}


    /**
     * <p>(Optional) The Amazon S3 bucket subfolder. </p>
     */
    inline const Aws::String& GetS3KeyPrefix() const{ return m_s3KeyPrefix; }

    /**
     * <p>(Optional) The Amazon S3 bucket subfolder. </p>
     */
    inline bool S3KeyPrefixHasBeenSet() const { return m_s3KeyPrefixHasBeenSet; }

    /**
     * <p>(Optional) The Amazon S3 bucket subfolder. </p>
     */
    inline void SetS3KeyPrefix(const Aws::String& value) { m_s3KeyPrefixHasBeenSet = true; m_s3KeyPrefix = value; }

    /**
     * <p>(Optional) The Amazon S3 bucket subfolder. </p>
     */
    inline void SetS3KeyPrefix(Aws::String&& value) { m_s3KeyPrefixHasBeenSet = true; m_s3KeyPrefix = std::move(value); }

    /**
     * <p>(Optional) The Amazon S3 bucket subfolder. </p>
     */
    inline void SetS3KeyPrefix(const char* value) { m_s3KeyPrefixHasBeenSet = true; m_s3KeyPrefix.assign(value); }

    /**
     * <p>(Optional) The Amazon S3 bucket subfolder. </p>
     */
    inline LoggingInfo& WithS3KeyPrefix(const Aws::String& value) { SetS3KeyPrefix(value); return *this;}

    /**
     * <p>(Optional) The Amazon S3 bucket subfolder. </p>
     */
    inline LoggingInfo& WithS3KeyPrefix(Aws::String&& value) { SetS3KeyPrefix(std::move(value)); return *this;}

    /**
     * <p>(Optional) The Amazon S3 bucket subfolder. </p>
     */
    inline LoggingInfo& WithS3KeyPrefix(const char* value) { SetS3KeyPrefix(value); return *this;}


    /**
     * <p>The region where the Amazon S3 bucket is located.</p>
     */
    inline const Aws::String& GetS3Region() const{ return m_s3Region; }

    /**
     * <p>The region where the Amazon S3 bucket is located.</p>
     */
    inline bool S3RegionHasBeenSet() const { return m_s3RegionHasBeenSet; }

    /**
     * <p>The region where the Amazon S3 bucket is located.</p>
     */
    inline void SetS3Region(const Aws::String& value) { m_s3RegionHasBeenSet = true; m_s3Region = value; }

    /**
     * <p>The region where the Amazon S3 bucket is located.</p>
     */
    inline void SetS3Region(Aws::String&& value) { m_s3RegionHasBeenSet = true; m_s3Region = std::move(value); }

    /**
     * <p>The region where the Amazon S3 bucket is located.</p>
     */
    inline void SetS3Region(const char* value) { m_s3RegionHasBeenSet = true; m_s3Region.assign(value); }

    /**
     * <p>The region where the Amazon S3 bucket is located.</p>
     */
    inline LoggingInfo& WithS3Region(const Aws::String& value) { SetS3Region(value); return *this;}

    /**
     * <p>The region where the Amazon S3 bucket is located.</p>
     */
    inline LoggingInfo& WithS3Region(Aws::String&& value) { SetS3Region(std::move(value)); return *this;}

    /**
     * <p>The region where the Amazon S3 bucket is located.</p>
     */
    inline LoggingInfo& WithS3Region(const char* value) { SetS3Region(value); return *this;}

  private:

    Aws::String m_s3BucketName;
    bool m_s3BucketNameHasBeenSet;

    Aws::String m_s3KeyPrefix;
    bool m_s3KeyPrefixHasBeenSet;

    Aws::String m_s3Region;
    bool m_s3RegionHasBeenSet;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
