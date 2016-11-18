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
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace EC2
{
namespace Model
{

  /**
   * <p>Describes the S3 bucket for the disk image.</p>
   */
  class AWS_EC2_API UserBucket
  {
  public:
    UserBucket();
    UserBucket(const Aws::Utils::Xml::XmlNode& xmlNode);
    UserBucket& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;

    /**
     * <p>The name of the S3 bucket where the disk image is located.</p>
     */
    inline const Aws::String& GetS3Bucket() const{ return m_s3Bucket; }

    /**
     * <p>The name of the S3 bucket where the disk image is located.</p>
     */
    inline void SetS3Bucket(const Aws::String& value) { m_s3BucketHasBeenSet = true; m_s3Bucket = value; }

    /**
     * <p>The name of the S3 bucket where the disk image is located.</p>
     */
    inline void SetS3Bucket(Aws::String&& value) { m_s3BucketHasBeenSet = true; m_s3Bucket = value; }

    /**
     * <p>The name of the S3 bucket where the disk image is located.</p>
     */
    inline void SetS3Bucket(const char* value) { m_s3BucketHasBeenSet = true; m_s3Bucket.assign(value); }

    /**
     * <p>The name of the S3 bucket where the disk image is located.</p>
     */
    inline UserBucket& WithS3Bucket(const Aws::String& value) { SetS3Bucket(value); return *this;}

    /**
     * <p>The name of the S3 bucket where the disk image is located.</p>
     */
    inline UserBucket& WithS3Bucket(Aws::String&& value) { SetS3Bucket(value); return *this;}

    /**
     * <p>The name of the S3 bucket where the disk image is located.</p>
     */
    inline UserBucket& WithS3Bucket(const char* value) { SetS3Bucket(value); return *this;}

    /**
     * <p>The file name of the disk image.</p>
     */
    inline const Aws::String& GetS3Key() const{ return m_s3Key; }

    /**
     * <p>The file name of the disk image.</p>
     */
    inline void SetS3Key(const Aws::String& value) { m_s3KeyHasBeenSet = true; m_s3Key = value; }

    /**
     * <p>The file name of the disk image.</p>
     */
    inline void SetS3Key(Aws::String&& value) { m_s3KeyHasBeenSet = true; m_s3Key = value; }

    /**
     * <p>The file name of the disk image.</p>
     */
    inline void SetS3Key(const char* value) { m_s3KeyHasBeenSet = true; m_s3Key.assign(value); }

    /**
     * <p>The file name of the disk image.</p>
     */
    inline UserBucket& WithS3Key(const Aws::String& value) { SetS3Key(value); return *this;}

    /**
     * <p>The file name of the disk image.</p>
     */
    inline UserBucket& WithS3Key(Aws::String&& value) { SetS3Key(value); return *this;}

    /**
     * <p>The file name of the disk image.</p>
     */
    inline UserBucket& WithS3Key(const char* value) { SetS3Key(value); return *this;}

  private:
    Aws::String m_s3Bucket;
    bool m_s3BucketHasBeenSet;
    Aws::String m_s3Key;
    bool m_s3KeyHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
