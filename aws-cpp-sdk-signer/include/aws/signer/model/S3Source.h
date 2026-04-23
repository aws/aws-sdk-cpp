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
#include <aws/signer/Signer_EXPORTS.h>
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
namespace signer
{
namespace Model
{

  /**
   * <p>Information about the S3 bucket where you saved your unsigned
   * code.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/signer-2017-08-25/S3Source">AWS API
   * Reference</a></p>
   */
  class AWS_SIGNER_API S3Source
  {
  public:
    S3Source();
    S3Source(Aws::Utils::Json::JsonView jsonValue);
    S3Source& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Name of the S3 bucket.</p>
     */
    inline const Aws::String& GetBucketName() const{ return m_bucketName; }

    /**
     * <p>Name of the S3 bucket.</p>
     */
    inline bool BucketNameHasBeenSet() const { return m_bucketNameHasBeenSet; }

    /**
     * <p>Name of the S3 bucket.</p>
     */
    inline void SetBucketName(const Aws::String& value) { m_bucketNameHasBeenSet = true; m_bucketName = value; }

    /**
     * <p>Name of the S3 bucket.</p>
     */
    inline void SetBucketName(Aws::String&& value) { m_bucketNameHasBeenSet = true; m_bucketName = std::move(value); }

    /**
     * <p>Name of the S3 bucket.</p>
     */
    inline void SetBucketName(const char* value) { m_bucketNameHasBeenSet = true; m_bucketName.assign(value); }

    /**
     * <p>Name of the S3 bucket.</p>
     */
    inline S3Source& WithBucketName(const Aws::String& value) { SetBucketName(value); return *this;}

    /**
     * <p>Name of the S3 bucket.</p>
     */
    inline S3Source& WithBucketName(Aws::String&& value) { SetBucketName(std::move(value)); return *this;}

    /**
     * <p>Name of the S3 bucket.</p>
     */
    inline S3Source& WithBucketName(const char* value) { SetBucketName(value); return *this;}


    /**
     * <p>Key name of the bucket object that contains your unsigned code.</p>
     */
    inline const Aws::String& GetKey() const{ return m_key; }

    /**
     * <p>Key name of the bucket object that contains your unsigned code.</p>
     */
    inline bool KeyHasBeenSet() const { return m_keyHasBeenSet; }

    /**
     * <p>Key name of the bucket object that contains your unsigned code.</p>
     */
    inline void SetKey(const Aws::String& value) { m_keyHasBeenSet = true; m_key = value; }

    /**
     * <p>Key name of the bucket object that contains your unsigned code.</p>
     */
    inline void SetKey(Aws::String&& value) { m_keyHasBeenSet = true; m_key = std::move(value); }

    /**
     * <p>Key name of the bucket object that contains your unsigned code.</p>
     */
    inline void SetKey(const char* value) { m_keyHasBeenSet = true; m_key.assign(value); }

    /**
     * <p>Key name of the bucket object that contains your unsigned code.</p>
     */
    inline S3Source& WithKey(const Aws::String& value) { SetKey(value); return *this;}

    /**
     * <p>Key name of the bucket object that contains your unsigned code.</p>
     */
    inline S3Source& WithKey(Aws::String&& value) { SetKey(std::move(value)); return *this;}

    /**
     * <p>Key name of the bucket object that contains your unsigned code.</p>
     */
    inline S3Source& WithKey(const char* value) { SetKey(value); return *this;}


    /**
     * <p>Version of your source image in your version enabled S3 bucket.</p>
     */
    inline const Aws::String& GetVersion() const{ return m_version; }

    /**
     * <p>Version of your source image in your version enabled S3 bucket.</p>
     */
    inline bool VersionHasBeenSet() const { return m_versionHasBeenSet; }

    /**
     * <p>Version of your source image in your version enabled S3 bucket.</p>
     */
    inline void SetVersion(const Aws::String& value) { m_versionHasBeenSet = true; m_version = value; }

    /**
     * <p>Version of your source image in your version enabled S3 bucket.</p>
     */
    inline void SetVersion(Aws::String&& value) { m_versionHasBeenSet = true; m_version = std::move(value); }

    /**
     * <p>Version of your source image in your version enabled S3 bucket.</p>
     */
    inline void SetVersion(const char* value) { m_versionHasBeenSet = true; m_version.assign(value); }

    /**
     * <p>Version of your source image in your version enabled S3 bucket.</p>
     */
    inline S3Source& WithVersion(const Aws::String& value) { SetVersion(value); return *this;}

    /**
     * <p>Version of your source image in your version enabled S3 bucket.</p>
     */
    inline S3Source& WithVersion(Aws::String&& value) { SetVersion(std::move(value)); return *this;}

    /**
     * <p>Version of your source image in your version enabled S3 bucket.</p>
     */
    inline S3Source& WithVersion(const char* value) { SetVersion(value); return *this;}

  private:

    Aws::String m_bucketName;
    bool m_bucketNameHasBeenSet;

    Aws::String m_key;
    bool m_keyHasBeenSet;

    Aws::String m_version;
    bool m_versionHasBeenSet;
  };

} // namespace Model
} // namespace signer
} // namespace Aws
