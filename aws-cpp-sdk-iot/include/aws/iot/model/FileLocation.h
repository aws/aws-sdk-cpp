/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class FileLocation
  {
  public:
    AWS_IOT_API FileLocation();
    AWS_IOT_API FileLocation(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API FileLocation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API Aws::Utils::Json::JsonValue Jsonize() const;


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
    bool m_streamHasBeenSet = false;

    S3Location m_s3Location;
    bool m_s3LocationHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
