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
  class AWS_IOT_API StreamFile
  {
  public:
    StreamFile();
    StreamFile(Aws::Utils::Json::JsonView jsonValue);
    StreamFile& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


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
    bool m_fileIdHasBeenSet;

    S3Location m_s3Location;
    bool m_s3LocationHasBeenSet;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
