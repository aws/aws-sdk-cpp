/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
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
   * <p>Represents a file to stream.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/StreamFile">AWS API
   * Reference</a></p>
   */
  class StreamFile
  {
  public:
    AWS_IOT_API StreamFile();
    AWS_IOT_API StreamFile(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API StreamFile& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The file ID.</p>
     */
    inline int GetFileId() const{ return m_fileId; }

    /**
     * <p>The file ID.</p>
     */
    inline bool FileIdHasBeenSet() const { return m_fileIdHasBeenSet; }

    /**
     * <p>The file ID.</p>
     */
    inline void SetFileId(int value) { m_fileIdHasBeenSet = true; m_fileId = value; }

    /**
     * <p>The file ID.</p>
     */
    inline StreamFile& WithFileId(int value) { SetFileId(value); return *this;}


    /**
     * <p>The location of the file in S3.</p>
     */
    inline const S3Location& GetS3Location() const{ return m_s3Location; }

    /**
     * <p>The location of the file in S3.</p>
     */
    inline bool S3LocationHasBeenSet() const { return m_s3LocationHasBeenSet; }

    /**
     * <p>The location of the file in S3.</p>
     */
    inline void SetS3Location(const S3Location& value) { m_s3LocationHasBeenSet = true; m_s3Location = value; }

    /**
     * <p>The location of the file in S3.</p>
     */
    inline void SetS3Location(S3Location&& value) { m_s3LocationHasBeenSet = true; m_s3Location = std::move(value); }

    /**
     * <p>The location of the file in S3.</p>
     */
    inline StreamFile& WithS3Location(const S3Location& value) { SetS3Location(value); return *this;}

    /**
     * <p>The location of the file in S3.</p>
     */
    inline StreamFile& WithS3Location(S3Location&& value) { SetS3Location(std::move(value)); return *this;}

  private:

    int m_fileId;
    bool m_fileIdHasBeenSet = false;

    S3Location m_s3Location;
    bool m_s3LocationHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
