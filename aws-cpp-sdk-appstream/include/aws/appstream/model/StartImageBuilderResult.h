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
  class AWS_APPSTREAM_API StartImageBuilderResult
  {
  public:
    StartImageBuilderResult();
    StartImageBuilderResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    StartImageBuilderResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
