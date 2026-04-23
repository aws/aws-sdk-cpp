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
#include <aws/rekognition/Rekognition_EXPORTS.h>
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
namespace Rekognition
{
namespace Model
{

  /**
   * <p>Provides the S3 bucket name and object name.</p> <p>The region for the S3
   * bucket containing the S3 object must match the region you use for Amazon
   * Rekognition operations.</p> <p>For Amazon Rekognition to process an S3 object,
   * the user must have permission to access the S3 object. For more information, see
   * Resource-Based Policies in the Amazon Rekognition Developer Guide.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rekognition-2016-06-27/S3Object">AWS
   * API Reference</a></p>
   */
  class AWS_REKOGNITION_API S3Object
  {
  public:
    S3Object();
    S3Object(Aws::Utils::Json::JsonView jsonValue);
    S3Object& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Name of the S3 bucket.</p>
     */
    inline const Aws::String& GetBucket() const{ return m_bucket; }

    /**
     * <p>Name of the S3 bucket.</p>
     */
    inline bool BucketHasBeenSet() const { return m_bucketHasBeenSet; }

    /**
     * <p>Name of the S3 bucket.</p>
     */
    inline void SetBucket(const Aws::String& value) { m_bucketHasBeenSet = true; m_bucket = value; }

    /**
     * <p>Name of the S3 bucket.</p>
     */
    inline void SetBucket(Aws::String&& value) { m_bucketHasBeenSet = true; m_bucket = std::move(value); }

    /**
     * <p>Name of the S3 bucket.</p>
     */
    inline void SetBucket(const char* value) { m_bucketHasBeenSet = true; m_bucket.assign(value); }

    /**
     * <p>Name of the S3 bucket.</p>
     */
    inline S3Object& WithBucket(const Aws::String& value) { SetBucket(value); return *this;}

    /**
     * <p>Name of the S3 bucket.</p>
     */
    inline S3Object& WithBucket(Aws::String&& value) { SetBucket(std::move(value)); return *this;}

    /**
     * <p>Name of the S3 bucket.</p>
     */
    inline S3Object& WithBucket(const char* value) { SetBucket(value); return *this;}


    /**
     * <p>S3 object key name.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>S3 object key name.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>S3 object key name.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>S3 object key name.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>S3 object key name.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>S3 object key name.</p>
     */
    inline S3Object& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>S3 object key name.</p>
     */
    inline S3Object& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>S3 object key name.</p>
     */
    inline S3Object& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>If the bucket is versioning enabled, you can specify the object version. </p>
     */
    inline const Aws::String& GetVersion() const{ return m_version; }

    /**
     * <p>If the bucket is versioning enabled, you can specify the object version. </p>
     */
    inline bool VersionHasBeenSet() const { return m_versionHasBeenSet; }

    /**
     * <p>If the bucket is versioning enabled, you can specify the object version. </p>
     */
    inline void SetVersion(const Aws::String& value) { m_versionHasBeenSet = true; m_version = value; }

    /**
     * <p>If the bucket is versioning enabled, you can specify the object version. </p>
     */
    inline void SetVersion(Aws::String&& value) { m_versionHasBeenSet = true; m_version = std::move(value); }

    /**
     * <p>If the bucket is versioning enabled, you can specify the object version. </p>
     */
    inline void SetVersion(const char* value) { m_versionHasBeenSet = true; m_version.assign(value); }

    /**
     * <p>If the bucket is versioning enabled, you can specify the object version. </p>
     */
    inline S3Object& WithVersion(const Aws::String& value) { SetVersion(value); return *this;}

    /**
     * <p>If the bucket is versioning enabled, you can specify the object version. </p>
     */
    inline S3Object& WithVersion(Aws::String&& value) { SetVersion(std::move(value)); return *this;}

    /**
     * <p>If the bucket is versioning enabled, you can specify the object version. </p>
     */
    inline S3Object& WithVersion(const char* value) { SetVersion(value); return *this;}

  private:

    Aws::String m_bucket;
    bool m_bucketHasBeenSet;

    Aws::String m_name;
    bool m_nameHasBeenSet;

    Aws::String m_version;
    bool m_versionHasBeenSet;
  };

} // namespace Model
} // namespace Rekognition
} // namespace Aws
