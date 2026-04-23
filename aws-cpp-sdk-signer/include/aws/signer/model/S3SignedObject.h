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
   * <p>The S3 bucket name and key where AWS Signer saved your signed code
   * image.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/signer-2017-08-25/S3SignedObject">AWS
   * API Reference</a></p>
   */
  class AWS_SIGNER_API S3SignedObject
  {
  public:
    S3SignedObject();
    S3SignedObject(Aws::Utils::Json::JsonView jsonValue);
    S3SignedObject& operator=(Aws::Utils::Json::JsonView jsonValue);
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
    inline S3SignedObject& WithBucketName(const Aws::String& value) { SetBucketName(value); return *this;}

    /**
     * <p>Name of the S3 bucket.</p>
     */
    inline S3SignedObject& WithBucketName(Aws::String&& value) { SetBucketName(std::move(value)); return *this;}

    /**
     * <p>Name of the S3 bucket.</p>
     */
    inline S3SignedObject& WithBucketName(const char* value) { SetBucketName(value); return *this;}


    /**
     * <p>Key name that uniquely identifies a signed code image in your bucket.</p>
     */
    inline const Aws::String& GetKey() const{ return m_key; }

    /**
     * <p>Key name that uniquely identifies a signed code image in your bucket.</p>
     */
    inline bool KeyHasBeenSet() const { return m_keyHasBeenSet; }

    /**
     * <p>Key name that uniquely identifies a signed code image in your bucket.</p>
     */
    inline void SetKey(const Aws::String& value) { m_keyHasBeenSet = true; m_key = value; }

    /**
     * <p>Key name that uniquely identifies a signed code image in your bucket.</p>
     */
    inline void SetKey(Aws::String&& value) { m_keyHasBeenSet = true; m_key = std::move(value); }

    /**
     * <p>Key name that uniquely identifies a signed code image in your bucket.</p>
     */
    inline void SetKey(const char* value) { m_keyHasBeenSet = true; m_key.assign(value); }

    /**
     * <p>Key name that uniquely identifies a signed code image in your bucket.</p>
     */
    inline S3SignedObject& WithKey(const Aws::String& value) { SetKey(value); return *this;}

    /**
     * <p>Key name that uniquely identifies a signed code image in your bucket.</p>
     */
    inline S3SignedObject& WithKey(Aws::String&& value) { SetKey(std::move(value)); return *this;}

    /**
     * <p>Key name that uniquely identifies a signed code image in your bucket.</p>
     */
    inline S3SignedObject& WithKey(const char* value) { SetKey(value); return *this;}

  private:

    Aws::String m_bucketName;
    bool m_bucketNameHasBeenSet;

    Aws::String m_key;
    bool m_keyHasBeenSet;
  };

} // namespace Model
} // namespace signer
} // namespace Aws
