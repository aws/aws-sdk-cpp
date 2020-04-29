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
#include <aws/iotsitewise/IoTSiteWise_EXPORTS.h>
#include <aws/core/utils/Array.h>
#include <aws/iotsitewise/model/ImageFileType.h>
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
namespace IoTSiteWise
{
namespace Model
{

  /**
   * <p>Contains an image file.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/ImageFile">AWS
   * API Reference</a></p>
   */
  class AWS_IOTSITEWISE_API ImageFile
  {
  public:
    ImageFile();
    ImageFile(Aws::Utils::Json::JsonView jsonValue);
    ImageFile& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The image file contents, represented as a base64-encoded string. The file
     * size must be less than 1 MB.</p>
     */
    inline const Aws::Utils::ByteBuffer& GetEncodedString() const{ return m_encodedString; }

    /**
     * <p>The image file contents, represented as a base64-encoded string. The file
     * size must be less than 1 MB.</p>
     */
    inline bool EncodedStringHasBeenSet() const { return m_encodedStringHasBeenSet; }

    /**
     * <p>The image file contents, represented as a base64-encoded string. The file
     * size must be less than 1 MB.</p>
     */
    inline void SetEncodedString(const Aws::Utils::ByteBuffer& value) { m_encodedStringHasBeenSet = true; m_encodedString = value; }

    /**
     * <p>The image file contents, represented as a base64-encoded string. The file
     * size must be less than 1 MB.</p>
     */
    inline void SetEncodedString(Aws::Utils::ByteBuffer&& value) { m_encodedStringHasBeenSet = true; m_encodedString = std::move(value); }

    /**
     * <p>The image file contents, represented as a base64-encoded string. The file
     * size must be less than 1 MB.</p>
     */
    inline ImageFile& WithEncodedString(const Aws::Utils::ByteBuffer& value) { SetEncodedString(value); return *this;}

    /**
     * <p>The image file contents, represented as a base64-encoded string. The file
     * size must be less than 1 MB.</p>
     */
    inline ImageFile& WithEncodedString(Aws::Utils::ByteBuffer&& value) { SetEncodedString(std::move(value)); return *this;}


    /**
     * <p>The file type of the image.</p>
     */
    inline const ImageFileType& GetFileType() const{ return m_fileType; }

    /**
     * <p>The file type of the image.</p>
     */
    inline bool FileTypeHasBeenSet() const { return m_fileTypeHasBeenSet; }

    /**
     * <p>The file type of the image.</p>
     */
    inline void SetFileType(const ImageFileType& value) { m_fileTypeHasBeenSet = true; m_fileType = value; }

    /**
     * <p>The file type of the image.</p>
     */
    inline void SetFileType(ImageFileType&& value) { m_fileTypeHasBeenSet = true; m_fileType = std::move(value); }

    /**
     * <p>The file type of the image.</p>
     */
    inline ImageFile& WithFileType(const ImageFileType& value) { SetFileType(value); return *this;}

    /**
     * <p>The file type of the image.</p>
     */
    inline ImageFile& WithFileType(ImageFileType&& value) { SetFileType(std::move(value)); return *this;}

  private:

    Aws::Utils::ByteBuffer m_encodedString;
    bool m_encodedStringHasBeenSet;

    ImageFileType m_fileType;
    bool m_fileTypeHasBeenSet;
  };

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
