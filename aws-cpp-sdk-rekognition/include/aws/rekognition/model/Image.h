/*
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
#include <aws/rekognition/Rekognition_EXPORTS.h>
#include <aws/core/utils/Array.h>
#include <aws/rekognition/model/S3Object.h>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace Rekognition
{
namespace Model
{

  /**
   * <p>Provides the source image either as bytes or an S3 object.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rekognition-2016-06-27/Image">AWS
   * API Reference</a></p>
   */
  class AWS_REKOGNITION_API Image
  {
  public:
    Image();
    Image(const Aws::Utils::Json::JsonValue& jsonValue);
    Image& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>Blob of image bytes up to 5 MBs.</p>
     */
    inline const Aws::Utils::ByteBuffer& GetBytes() const{ return m_bytes; }

    /**
     * <p>Blob of image bytes up to 5 MBs.</p>
     */
    inline void SetBytes(const Aws::Utils::ByteBuffer& value) { m_bytesHasBeenSet = true; m_bytes = value; }

    /**
     * <p>Blob of image bytes up to 5 MBs.</p>
     */
    inline void SetBytes(Aws::Utils::ByteBuffer&& value) { m_bytesHasBeenSet = true; m_bytes = value; }

    /**
     * <p>Blob of image bytes up to 5 MBs.</p>
     */
    inline Image& WithBytes(const Aws::Utils::ByteBuffer& value) { SetBytes(value); return *this;}

    /**
     * <p>Blob of image bytes up to 5 MBs.</p>
     */
    inline Image& WithBytes(Aws::Utils::ByteBuffer&& value) { SetBytes(value); return *this;}

    /**
     * <p>Identifies an S3 object as the image source.</p>
     */
    inline const S3Object& GetS3Object() const{ return m_s3Object; }

    /**
     * <p>Identifies an S3 object as the image source.</p>
     */
    inline void SetS3Object(const S3Object& value) { m_s3ObjectHasBeenSet = true; m_s3Object = value; }

    /**
     * <p>Identifies an S3 object as the image source.</p>
     */
    inline void SetS3Object(S3Object&& value) { m_s3ObjectHasBeenSet = true; m_s3Object = value; }

    /**
     * <p>Identifies an S3 object as the image source.</p>
     */
    inline Image& WithS3Object(const S3Object& value) { SetS3Object(value); return *this;}

    /**
     * <p>Identifies an S3 object as the image source.</p>
     */
    inline Image& WithS3Object(S3Object&& value) { SetS3Object(value); return *this;}

  private:
    Aws::Utils::ByteBuffer m_bytes;
    bool m_bytesHasBeenSet;
    S3Object m_s3Object;
    bool m_s3ObjectHasBeenSet;
  };

} // namespace Model
} // namespace Rekognition
} // namespace Aws
