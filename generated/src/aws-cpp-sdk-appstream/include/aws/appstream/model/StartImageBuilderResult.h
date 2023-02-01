/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appstream/AppStream_EXPORTS.h>
#include <aws/appstream/model/ImageBuilder.h>
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
  class StartImageBuilderResult
  {
  public:
    AWS_APPSTREAM_API StartImageBuilderResult();
    AWS_APPSTREAM_API StartImageBuilderResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APPSTREAM_API StartImageBuilderResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Information about the image builder.</p>
     */
    inline const ImageBuilder& GetImageBuilder() const{ return m_imageBuilder; }

    /**
     * <p>Information about the image builder.</p>
     */
    inline void SetImageBuilder(const ImageBuilder& value) { m_imageBuilder = value; }

    /**
     * <p>Information about the image builder.</p>
     */
    inline void SetImageBuilder(ImageBuilder&& value) { m_imageBuilder = std::move(value); }

    /**
     * <p>Information about the image builder.</p>
     */
    inline StartImageBuilderResult& WithImageBuilder(const ImageBuilder& value) { SetImageBuilder(value); return *this;}

    /**
     * <p>Information about the image builder.</p>
     */
    inline StartImageBuilderResult& WithImageBuilder(ImageBuilder&& value) { SetImageBuilder(std::move(value)); return *this;}

  private:

    ImageBuilder m_imageBuilder;
  };

} // namespace Model
} // namespace AppStream
} // namespace Aws
