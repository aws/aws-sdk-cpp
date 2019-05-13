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
#include <aws/iotanalytics/IoTAnalytics_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iotanalytics/model/GlueConfiguration.h>
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
namespace IoTAnalytics
{
namespace Model
{

  /**
   * <p>Configuration information for delivery of data set contents to Amazon
   * S3.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotanalytics-2017-11-27/S3DestinationConfiguration">AWS
   * API Reference</a></p>
   */
  class AWS_IOTANALYTICS_API S3DestinationConfiguration
  {
  public:
    S3DestinationConfiguration();
    S3DestinationConfiguration(Aws::Utils::Json::JsonView jsonValue);
    S3DestinationConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the Amazon S3 bucket to which data set contents are
     * delivered.</p>
     */
    inline const Aws::String& GetBucket() const{ return m_bucket; }

    /**
     * <p>The name of the Amazon S3 bucket to which data set contents are
     * delivered.</p>
     */
    inline bool BucketHasBeenSet() const { return m_bucketHasBeenSet; }

    /**
     * <p>The name of the Amazon S3 bucket to which data set contents are
     * delivered.</p>
     */
    inline void SetBucket(const Aws::String& value) { m_bucketHasBeenSet = true; m_bucket = value; }

    /**
     * <p>The name of the Amazon S3 bucket to which data set contents are
     * delivered.</p>
     */
    inline void SetBucket(Aws::String&& value) { m_bucketHasBeenSet = true; m_bucket = std::move(value); }

    /**
     * <p>The name of the Amazon S3 bucket to which data set contents are
     * delivered.</p>
     */
    inline void SetBucket(const char* value) { m_bucketHasBeenSet = true; m_bucket.assign(value); }

    /**
     * <p>The name of the Amazon S3 bucket to which data set contents are
     * delivered.</p>
     */
    inline S3DestinationConfiguration& WithBucket(const Aws::String& value) { SetBucket(value); return *this;}

    /**
     * <p>The name of the Amazon S3 bucket to which data set contents are
     * delivered.</p>
     */
    inline S3DestinationConfiguration& WithBucket(Aws::String&& value) { SetBucket(std::move(value)); return *this;}

    /**
     * <p>The name of the Amazon S3 bucket to which data set contents are
     * delivered.</p>
     */
    inline S3DestinationConfiguration& WithBucket(const char* value) { SetBucket(value); return *this;}


    /**
     * <p>The key of the data set contents object. Each object in an Amazon S3 bucket
     * has a key that is its unique identifier within the bucket (each object in a
     * bucket has exactly one key).</p>
     */
    inline const Aws::String& GetKey() const{ return m_key; }

    /**
     * <p>The key of the data set contents object. Each object in an Amazon S3 bucket
     * has a key that is its unique identifier within the bucket (each object in a
     * bucket has exactly one key).</p>
     */
    inline bool KeyHasBeenSet() const { return m_keyHasBeenSet; }

    /**
     * <p>The key of the data set contents object. Each object in an Amazon S3 bucket
     * has a key that is its unique identifier within the bucket (each object in a
     * bucket has exactly one key).</p>
     */
    inline void SetKey(const Aws::String& value) { m_keyHasBeenSet = true; m_key = value; }

    /**
     * <p>The key of the data set contents object. Each object in an Amazon S3 bucket
     * has a key that is its unique identifier within the bucket (each object in a
     * bucket has exactly one key).</p>
     */
    inline void SetKey(Aws::String&& value) { m_keyHasBeenSet = true; m_key = std::move(value); }

    /**
     * <p>The key of the data set contents object. Each object in an Amazon S3 bucket
     * has a key that is its unique identifier within the bucket (each object in a
     * bucket has exactly one key).</p>
     */
    inline void SetKey(const char* value) { m_keyHasBeenSet = true; m_key.assign(value); }

    /**
     * <p>The key of the data set contents object. Each object in an Amazon S3 bucket
     * has a key that is its unique identifier within the bucket (each object in a
     * bucket has exactly one key).</p>
     */
    inline S3DestinationConfiguration& WithKey(const Aws::String& value) { SetKey(value); return *this;}

    /**
     * <p>The key of the data set contents object. Each object in an Amazon S3 bucket
     * has a key that is its unique identifier within the bucket (each object in a
     * bucket has exactly one key).</p>
     */
    inline S3DestinationConfiguration& WithKey(Aws::String&& value) { SetKey(std::move(value)); return *this;}

    /**
     * <p>The key of the data set contents object. Each object in an Amazon S3 bucket
     * has a key that is its unique identifier within the bucket (each object in a
     * bucket has exactly one key).</p>
     */
    inline S3DestinationConfiguration& WithKey(const char* value) { SetKey(value); return *this;}


    /**
     * <p>Configuration information for coordination with the AWS Glue ETL (extract,
     * transform and load) service.</p>
     */
    inline const GlueConfiguration& GetGlueConfiguration() const{ return m_glueConfiguration; }

    /**
     * <p>Configuration information for coordination with the AWS Glue ETL (extract,
     * transform and load) service.</p>
     */
    inline bool GlueConfigurationHasBeenSet() const { return m_glueConfigurationHasBeenSet; }

    /**
     * <p>Configuration information for coordination with the AWS Glue ETL (extract,
     * transform and load) service.</p>
     */
    inline void SetGlueConfiguration(const GlueConfiguration& value) { m_glueConfigurationHasBeenSet = true; m_glueConfiguration = value; }

    /**
     * <p>Configuration information for coordination with the AWS Glue ETL (extract,
     * transform and load) service.</p>
     */
    inline void SetGlueConfiguration(GlueConfiguration&& value) { m_glueConfigurationHasBeenSet = true; m_glueConfiguration = std::move(value); }

    /**
     * <p>Configuration information for coordination with the AWS Glue ETL (extract,
     * transform and load) service.</p>
     */
    inline S3DestinationConfiguration& WithGlueConfiguration(const GlueConfiguration& value) { SetGlueConfiguration(value); return *this;}

    /**
     * <p>Configuration information for coordination with the AWS Glue ETL (extract,
     * transform and load) service.</p>
     */
    inline S3DestinationConfiguration& WithGlueConfiguration(GlueConfiguration&& value) { SetGlueConfiguration(std::move(value)); return *this;}


    /**
     * <p>The ARN of the role which grants AWS IoT Analytics permission to interact
     * with your Amazon S3 and AWS Glue resources.</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }

    /**
     * <p>The ARN of the role which grants AWS IoT Analytics permission to interact
     * with your Amazon S3 and AWS Glue resources.</p>
     */
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }

    /**
     * <p>The ARN of the role which grants AWS IoT Analytics permission to interact
     * with your Amazon S3 and AWS Glue resources.</p>
     */
    inline void SetRoleArn(const Aws::String& value) { m_roleArnHasBeenSet = true; m_roleArn = value; }

    /**
     * <p>The ARN of the role which grants AWS IoT Analytics permission to interact
     * with your Amazon S3 and AWS Glue resources.</p>
     */
    inline void SetRoleArn(Aws::String&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::move(value); }

    /**
     * <p>The ARN of the role which grants AWS IoT Analytics permission to interact
     * with your Amazon S3 and AWS Glue resources.</p>
     */
    inline void SetRoleArn(const char* value) { m_roleArnHasBeenSet = true; m_roleArn.assign(value); }

    /**
     * <p>The ARN of the role which grants AWS IoT Analytics permission to interact
     * with your Amazon S3 and AWS Glue resources.</p>
     */
    inline S3DestinationConfiguration& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}

    /**
     * <p>The ARN of the role which grants AWS IoT Analytics permission to interact
     * with your Amazon S3 and AWS Glue resources.</p>
     */
    inline S3DestinationConfiguration& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the role which grants AWS IoT Analytics permission to interact
     * with your Amazon S3 and AWS Glue resources.</p>
     */
    inline S3DestinationConfiguration& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}

  private:

    Aws::String m_bucket;
    bool m_bucketHasBeenSet;

    Aws::String m_key;
    bool m_keyHasBeenSet;

    GlueConfiguration m_glueConfiguration;
    bool m_glueConfigurationHasBeenSet;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet;
  };

} // namespace Model
} // namespace IoTAnalytics
} // namespace Aws
