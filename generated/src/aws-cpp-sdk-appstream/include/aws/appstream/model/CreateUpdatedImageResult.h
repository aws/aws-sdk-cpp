/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appstream/AppStream_EXPORTS.h>
#include <aws/appstream/model/Image.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace AppStream
{
namespace Model
{
  class CreateUpdatedImageResult
  {
  public:
    AWS_APPSTREAM_API CreateUpdatedImageResult();
    AWS_APPSTREAM_API CreateUpdatedImageResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APPSTREAM_API CreateUpdatedImageResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    
    inline const Image& GetImage() const{ return m_image; }

    
    inline void SetImage(const Image& value) { m_image = value; }

    
    inline void SetImage(Image&& value) { m_image = std::move(value); }

    
    inline CreateUpdatedImageResult& WithImage(const Image& value) { SetImage(value); return *this;}

    
    inline CreateUpdatedImageResult& WithImage(Image&& value) { SetImage(std::move(value)); return *this;}


    /**
     * <p>Indicates whether a new image can be created.</p>
     */
    inline bool GetCanUpdateImage() const{ return m_canUpdateImage; }

    /**
     * <p>Indicates whether a new image can be created.</p>
     */
    inline void SetCanUpdateImage(bool value) { m_canUpdateImage = value; }

    /**
     * <p>Indicates whether a new image can be created.</p>
     */
    inline CreateUpdatedImageResult& WithCanUpdateImage(bool value) { SetCanUpdateImage(value); return *this;}

  private:

    Image m_image;

    bool m_canUpdateImage;
  };

} // namespace Model
} // namespace AppStream
} // namespace Aws
