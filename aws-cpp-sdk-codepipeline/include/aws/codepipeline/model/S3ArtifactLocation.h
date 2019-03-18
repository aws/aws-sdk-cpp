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
#include <aws/codepipeline/CodePipeline_EXPORTS.h>
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
namespace CodePipeline
{
namespace Model
{

  /**
   * <p>The location of the Amazon S3 bucket that contains a revision.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codepipeline-2015-07-09/S3ArtifactLocation">AWS
   * API Reference</a></p>
   */
  class AWS_CODEPIPELINE_API S3ArtifactLocation
  {
  public:
    S3ArtifactLocation();
    S3ArtifactLocation(Aws::Utils::Json::JsonView jsonValue);
    S3ArtifactLocation& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the Amazon S3 bucket.</p>
     */
    inline const Aws::String& GetBucketName() const{ return m_bucketName; }

    /**
     * <p>The name of the Amazon S3 bucket.</p>
     */
    inline bool BucketNameHasBeenSet() const { return m_bucketNameHasBeenSet; }

    /**
     * <p>The name of the Amazon S3 bucket.</p>
     */
    inline void SetBucketName(const Aws::String& value) { m_bucketNameHasBeenSet = true; m_bucketName = value; }

    /**
     * <p>The name of the Amazon S3 bucket.</p>
     */
    inline void SetBucketName(Aws::String&& value) { m_bucketNameHasBeenSet = true; m_bucketName = std::move(value); }

    /**
     * <p>The name of the Amazon S3 bucket.</p>
     */
    inline void SetBucketName(const char* value) { m_bucketNameHasBeenSet = true; m_bucketName.assign(value); }

    /**
     * <p>The name of the Amazon S3 bucket.</p>
     */
    inline S3ArtifactLocation& WithBucketName(const Aws::String& value) { SetBucketName(value); return *this;}

    /**
     * <p>The name of the Amazon S3 bucket.</p>
     */
    inline S3ArtifactLocation& WithBucketName(Aws::String&& value) { SetBucketName(std::move(value)); return *this;}

    /**
     * <p>The name of the Amazon S3 bucket.</p>
     */
    inline S3ArtifactLocation& WithBucketName(const char* value) { SetBucketName(value); return *this;}


    /**
     * <p>The key of the object in the Amazon S3 bucket, which uniquely identifies the
     * object in the bucket.</p>
     */
    inline const Aws::String& GetObjectKey() const{ return m_objectKey; }

    /**
     * <p>The key of the object in the Amazon S3 bucket, which uniquely identifies the
     * object in the bucket.</p>
     */
    inline bool ObjectKeyHasBeenSet() const { return m_objectKeyHasBeenSet; }

    /**
     * <p>The key of the object in the Amazon S3 bucket, which uniquely identifies the
     * object in the bucket.</p>
     */
    inline void SetObjectKey(const Aws::String& value) { m_objectKeyHasBeenSet = true; m_objectKey = value; }

    /**
     * <p>The key of the object in the Amazon S3 bucket, which uniquely identifies the
     * object in the bucket.</p>
     */
    inline void SetObjectKey(Aws::String&& value) { m_objectKeyHasBeenSet = true; m_objectKey = std::move(value); }

    /**
     * <p>The key of the object in the Amazon S3 bucket, which uniquely identifies the
     * object in the bucket.</p>
     */
    inline void SetObjectKey(const char* value) { m_objectKeyHasBeenSet = true; m_objectKey.assign(value); }

    /**
     * <p>The key of the object in the Amazon S3 bucket, which uniquely identifies the
     * object in the bucket.</p>
     */
    inline S3ArtifactLocation& WithObjectKey(const Aws::String& value) { SetObjectKey(value); return *this;}

    /**
     * <p>The key of the object in the Amazon S3 bucket, which uniquely identifies the
     * object in the bucket.</p>
     */
    inline S3ArtifactLocation& WithObjectKey(Aws::String&& value) { SetObjectKey(std::move(value)); return *this;}

    /**
     * <p>The key of the object in the Amazon S3 bucket, which uniquely identifies the
     * object in the bucket.</p>
     */
    inline S3ArtifactLocation& WithObjectKey(const char* value) { SetObjectKey(value); return *this;}

  private:

    Aws::String m_bucketName;
    bool m_bucketNameHasBeenSet;

    Aws::String m_objectKey;
    bool m_objectKeyHasBeenSet;
  };

} // namespace Model
} // namespace CodePipeline
} // namespace Aws
