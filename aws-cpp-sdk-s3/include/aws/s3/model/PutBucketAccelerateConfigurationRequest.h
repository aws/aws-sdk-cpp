﻿/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/s3/S3_EXPORTS.h>
#include <aws/s3/S3Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/s3/model/AccelerateConfiguration.h>

namespace Aws
{
namespace S3
{
namespace Model
{

  /**
   */
  class AWS_S3_API PutBucketAccelerateConfigurationRequest : public S3Request
  {
  public:
    PutBucketAccelerateConfigurationRequest();
    Aws::String SerializePayload() const override;

    /**
     * Name of the bucket for which the accelerate configuration is set.
     */
    inline const Aws::String& GetBucket() const{ return m_bucket; }

    /**
     * Name of the bucket for which the accelerate configuration is set.
     */
    inline void SetBucket(const Aws::String& value) { m_bucketHasBeenSet = true; m_bucket = value; }

    /**
     * Name of the bucket for which the accelerate configuration is set.
     */
    inline void SetBucket(Aws::String&& value) { m_bucketHasBeenSet = true; m_bucket = value; }

    /**
     * Name of the bucket for which the accelerate configuration is set.
     */
    inline void SetBucket(const char* value) { m_bucketHasBeenSet = true; m_bucket.assign(value); }

    /**
     * Name of the bucket for which the accelerate configuration is set.
     */
    inline PutBucketAccelerateConfigurationRequest& WithBucket(const Aws::String& value) { SetBucket(value); return *this;}

    /**
     * Name of the bucket for which the accelerate configuration is set.
     */
    inline PutBucketAccelerateConfigurationRequest& WithBucket(Aws::String&& value) { SetBucket(value); return *this;}

    /**
     * Name of the bucket for which the accelerate configuration is set.
     */
    inline PutBucketAccelerateConfigurationRequest& WithBucket(const char* value) { SetBucket(value); return *this;}

    /**
     * Specifies the Accelerate Configuration you want to set for the bucket.
     */
    inline const AccelerateConfiguration& GetAccelerateConfiguration() const{ return m_accelerateConfiguration; }

    /**
     * Specifies the Accelerate Configuration you want to set for the bucket.
     */
    inline void SetAccelerateConfiguration(const AccelerateConfiguration& value) { m_accelerateConfigurationHasBeenSet = true; m_accelerateConfiguration = value; }

    /**
     * Specifies the Accelerate Configuration you want to set for the bucket.
     */
    inline void SetAccelerateConfiguration(AccelerateConfiguration&& value) { m_accelerateConfigurationHasBeenSet = true; m_accelerateConfiguration = value; }

    /**
     * Specifies the Accelerate Configuration you want to set for the bucket.
     */
    inline PutBucketAccelerateConfigurationRequest& WithAccelerateConfiguration(const AccelerateConfiguration& value) { SetAccelerateConfiguration(value); return *this;}

    /**
     * Specifies the Accelerate Configuration you want to set for the bucket.
     */
    inline PutBucketAccelerateConfigurationRequest& WithAccelerateConfiguration(AccelerateConfiguration&& value) { SetAccelerateConfiguration(value); return *this;}

  private:
    Aws::String m_bucket;
    bool m_bucketHasBeenSet;
    AccelerateConfiguration m_accelerateConfiguration;
    bool m_accelerateConfigurationHasBeenSet;
  };

} // namespace Model
} // namespace S3
} // namespace Aws
