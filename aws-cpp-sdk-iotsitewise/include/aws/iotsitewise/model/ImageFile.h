/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class ImageFile
  {
  public:
    AWS_IOTSITEWISE_API ImageFile();
    AWS_IOTSITEWISE_API ImageFile(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTSITEWISE_API ImageFile& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTSITEWISE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The image file contents, represented as a base64-encoded string. The file
     * size must be less than 1 MB.</p>
     */
    inline const Aws::Utils::ByteBuffer& GetData() const{ return m_data; }

    /**
     * <p>The image file contents, represented as a base64-encoded string. The file
     * size must be less than 1 MB.</p>
     */
    inline bool DataHasBeenSet() const { return m_dataHasBeenSet; }

    /**
     * <p>The image file contents, represented as a base64-encoded string. The file
     * size must be less than 1 MB.</p>
     */
    inline void SetData(const Aws::Utils::ByteBuffer& value) { m_dataHasBeenSet = true; m_data = value; }

    /**
     * <p>The image file contents, represented as a base64-encoded string. The file
     * size must be less than 1 MB.</p>
     */
    inline void SetData(Aws::Utils::ByteBuffer&& value) { m_dataHasBeenSet = true; m_data = std::move(value); }

    /**
     * <p>The image file contents, represented as a base64-encoded string. The file
     * size must be less than 1 MB.</p>
     */
    inline ImageFile& WithData(const Aws::Utils::ByteBuffer& value) { SetData(value); return *this;}

    /**
     * <p>The image file contents, represented as a base64-encoded string. The file
     * size must be less than 1 MB.</p>
     */
    inline ImageFile& WithData(Aws::Utils::ByteBuffer&& value) { SetData(std::move(value)); return *this;}


    /**
     * <p>The file type of the image.</p>
     */
    inline const ImageFileType& GetType() const{ return m_type; }

    /**
     * <p>The file type of the image.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The file type of the image.</p>
     */
    inline void SetType(const ImageFileType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The file type of the image.</p>
     */
    inline void SetType(ImageFileType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The file type of the image.</p>
     */
    inline ImageFile& WithType(const ImageFileType& value) { SetType(value); return *this;}

    /**
     * <p>The file type of the image.</p>
     */
    inline ImageFile& WithType(ImageFileType&& value) { SetType(std::move(value)); return *this;}

  private:

    Aws::Utils::ByteBuffer m_data;
    bool m_dataHasBeenSet = false;

    ImageFileType m_type;
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
