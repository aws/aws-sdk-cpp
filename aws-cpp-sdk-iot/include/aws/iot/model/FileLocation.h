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
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/iot/model/Stream.h>
#include <aws/iot/model/S3Location.h>
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
namespace IoT
{
namespace Model
{

  /**
   * <p>The location of the OTA update.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/FileLocation">AWS
   * API Reference</a></p>
   */
  class AWS_IOT_API FileLocation
  {
  public:
    FileLocation();
    FileLocation(Aws::Utils::Json::JsonView jsonValue);
    FileLocation& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The stream that contains the OTA update.</p>
     */
    inline const Stream& GetStream() const{ return m_stream; }

    /**
     * <p>The stream that contains the OTA update.</p>
     */
    inline bool StreamHasBeenSet() const { return m_streamHasBeenSet; }

    /**
     * <p>The stream that contains the OTA update.</p>
     */
    inline void SetStream(const Stream& value) { m_streamHasBeenSet = true; m_stream = value; }

    /**
     * <p>The stream that contains the OTA update.</p>
     */
    inline void SetStream(Stream&& value) { m_streamHasBeenSet = true; m_stream = std::move(value); }

    /**
     * <p>The stream that contains the OTA update.</p>
     */
    inline FileLocation& WithStream(const Stream& value) { SetStream(value); return *this;}

    /**
     * <p>The stream that contains the OTA update.</p>
     */
    inline FileLocation& WithStream(Stream&& value) { SetStream(std::move(value)); return *this;}


    /**
     * <p>The location of the updated firmware in S3.</p>
     */
    inline const S3Location& GetS3Location() const{ return m_s3Location; }

    /**
     * <p>The location of the updated firmware in S3.</p>
     */
    inline bool S3LocationHasBeenSet() const { return m_s3LocationHasBeenSet; }

    /**
     * <p>The location of the updated firmware in S3.</p>
     */
    inline void SetS3Location(const S3Location& value) { m_s3LocationHasBeenSet = true; m_s3Location = value; }

    /**
     * <p>The location of the updated firmware in S3.</p>
     */
    inline void SetS3Location(S3Location&& value) { m_s3LocationHasBeenSet = true; m_s3Location = std::move(value); }

    /**
     * <p>The location of the updated firmware in S3.</p>
     */
    inline FileLocation& WithS3Location(const S3Location& value) { SetS3Location(value); return *this;}

    /**
     * <p>The location of the updated firmware in S3.</p>
     */
    inline FileLocation& WithS3Location(S3Location&& value) { SetS3Location(std::move(value)); return *this;}

  private:

    Stream m_stream;
    bool m_streamHasBeenSet;

    S3Location m_s3Location;
    bool m_s3LocationHasBeenSet;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
