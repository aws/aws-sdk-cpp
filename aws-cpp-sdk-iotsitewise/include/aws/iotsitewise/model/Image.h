/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotsitewise/IoTSiteWise_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iotsitewise/model/ImageFile.h>
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
   * <p>Contains an image that is one of the following:</p> <ul> <li> <p>An image
   * file. Choose this option to upload a new image.</p> </li> <li> <p>The ID of an
   * existing image. Choose this option to keep an existing image.</p> </li>
   * </ul><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/Image">AWS
   * API Reference</a></p>
   */
  class Image
  {
  public:
    AWS_IOTSITEWISE_API Image();
    AWS_IOTSITEWISE_API Image(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTSITEWISE_API Image& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTSITEWISE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ID of an existing image. Specify this parameter to keep an existing
     * image.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The ID of an existing image. Specify this parameter to keep an existing
     * image.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>The ID of an existing image. Specify this parameter to keep an existing
     * image.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The ID of an existing image. Specify this parameter to keep an existing
     * image.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>The ID of an existing image. Specify this parameter to keep an existing
     * image.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The ID of an existing image. Specify this parameter to keep an existing
     * image.</p>
     */
    inline Image& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The ID of an existing image. Specify this parameter to keep an existing
     * image.</p>
     */
    inline Image& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The ID of an existing image. Specify this parameter to keep an existing
     * image.</p>
     */
    inline Image& WithId(const char* value) { SetId(value); return *this;}


    
    inline const ImageFile& GetFile() const{ return m_file; }

    
    inline bool FileHasBeenSet() const { return m_fileHasBeenSet; }

    
    inline void SetFile(const ImageFile& value) { m_fileHasBeenSet = true; m_file = value; }

    
    inline void SetFile(ImageFile&& value) { m_fileHasBeenSet = true; m_file = std::move(value); }

    
    inline Image& WithFile(const ImageFile& value) { SetFile(value); return *this;}

    
    inline Image& WithFile(ImageFile&& value) { SetFile(std::move(value)); return *this;}

  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    ImageFile m_file;
    bool m_fileHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
