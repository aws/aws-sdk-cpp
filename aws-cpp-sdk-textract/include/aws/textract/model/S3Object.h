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
#include <aws/textract/Textract_EXPORTS.h>
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
namespace Textract
{
namespace Model
{

  /**
   * <p>The S3 bucket name and file name that identifies the document.</p> <p>The AWS
   * Region for the S3 bucket that contains the document must match the Region that
   * you use for Amazon Textract operations.</p> <p>For Amazon Textract to process a
   * file in an S3 bucket, the user must have permission to access the S3 bucket and
   * file. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/textract-2018-06-27/S3Object">AWS
   * API Reference</a></p>
   */
  class AWS_TEXTRACT_API S3Object
  {
  public:
    S3Object();
    S3Object(Aws::Utils::Json::JsonView jsonValue);
    S3Object& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the S3 bucket.</p>
     */
    inline const Aws::String& GetBucket() const{ return m_bucket; }

    /**
     * <p>The name of the S3 bucket.</p>
     */
    inline bool BucketHasBeenSet() const { return m_bucketHasBeenSet; }

    /**
     * <p>The name of the S3 bucket.</p>
     */
    inline void SetBucket(const Aws::String& value) { m_bucketHasBeenSet = true; m_bucket = value; }

    /**
     * <p>The name of the S3 bucket.</p>
     */
    inline void SetBucket(Aws::String&& value) { m_bucketHasBeenSet = true; m_bucket = std::move(value); }

    /**
     * <p>The name of the S3 bucket.</p>
     */
    inline void SetBucket(const char* value) { m_bucketHasBeenSet = true; m_bucket.assign(value); }

    /**
     * <p>The name of the S3 bucket.</p>
     */
    inline S3Object& WithBucket(const Aws::String& value) { SetBucket(value); return *this;}

    /**
     * <p>The name of the S3 bucket.</p>
     */
    inline S3Object& WithBucket(Aws::String&& value) { SetBucket(std::move(value)); return *this;}

    /**
     * <p>The name of the S3 bucket.</p>
     */
    inline S3Object& WithBucket(const char* value) { SetBucket(value); return *this;}


    /**
     * <p>The file name of the input document. It must be an image file (.JPG or .PNG
     * format). Asynchronous operations also support PDF files.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The file name of the input document. It must be an image file (.JPG or .PNG
     * format). Asynchronous operations also support PDF files.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The file name of the input document. It must be an image file (.JPG or .PNG
     * format). Asynchronous operations also support PDF files.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The file name of the input document. It must be an image file (.JPG or .PNG
     * format). Asynchronous operations also support PDF files.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The file name of the input document. It must be an image file (.JPG or .PNG
     * format). Asynchronous operations also support PDF files.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The file name of the input document. It must be an image file (.JPG or .PNG
     * format). Asynchronous operations also support PDF files.</p>
     */
    inline S3Object& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The file name of the input document. It must be an image file (.JPG or .PNG
     * format). Asynchronous operations also support PDF files.</p>
     */
    inline S3Object& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The file name of the input document. It must be an image file (.JPG or .PNG
     * format). Asynchronous operations also support PDF files.</p>
     */
    inline S3Object& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>If the bucket has versioning enabled, you can specify the object version.
     * </p>
     */
    inline const Aws::String& GetVersion() const{ return m_version; }

    /**
     * <p>If the bucket has versioning enabled, you can specify the object version.
     * </p>
     */
    inline bool VersionHasBeenSet() const { return m_versionHasBeenSet; }

    /**
     * <p>If the bucket has versioning enabled, you can specify the object version.
     * </p>
     */
    inline void SetVersion(const Aws::String& value) { m_versionHasBeenSet = true; m_version = value; }

    /**
     * <p>If the bucket has versioning enabled, you can specify the object version.
     * </p>
     */
    inline void SetVersion(Aws::String&& value) { m_versionHasBeenSet = true; m_version = std::move(value); }

    /**
     * <p>If the bucket has versioning enabled, you can specify the object version.
     * </p>
     */
    inline void SetVersion(const char* value) { m_versionHasBeenSet = true; m_version.assign(value); }

    /**
     * <p>If the bucket has versioning enabled, you can specify the object version.
     * </p>
     */
    inline S3Object& WithVersion(const Aws::String& value) { SetVersion(value); return *this;}

    /**
     * <p>If the bucket has versioning enabled, you can specify the object version.
     * </p>
     */
    inline S3Object& WithVersion(Aws::String&& value) { SetVersion(std::move(value)); return *this;}

    /**
     * <p>If the bucket has versioning enabled, you can specify the object version.
     * </p>
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
} // namespace Textract
} // namespace Aws
