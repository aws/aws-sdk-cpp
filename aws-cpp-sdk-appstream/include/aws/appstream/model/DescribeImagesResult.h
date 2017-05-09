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
#include <aws/core/utils/memory/stl/AWSVector.h>
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
  class AWS_APPSTREAM_API DescribeImagesResult
  {
  public:
    DescribeImagesResult();
    DescribeImagesResult(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeImagesResult& operator=(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

    /**
     * <p>The list of images.</p>
     */
    inline const Aws::Vector<Image>& GetImages() const{ return m_images; }

    /**
     * <p>The list of images.</p>
     */
    inline void SetImages(const Aws::Vector<Image>& value) { m_images = value; }

    /**
     * <p>The list of images.</p>
     */
    inline void SetImages(Aws::Vector<Image>&& value) { m_images = std::move(value); }

    /**
     * <p>The list of images.</p>
     */
    inline DescribeImagesResult& WithImages(const Aws::Vector<Image>& value) { SetImages(value); return *this;}

    /**
     * <p>The list of images.</p>
     */
    inline DescribeImagesResult& WithImages(Aws::Vector<Image>&& value) { SetImages(std::move(value)); return *this;}

    /**
     * <p>The list of images.</p>
     */
    inline DescribeImagesResult& AddImages(const Image& value) { m_images.push_back(value); return *this; }

    /**
     * <p>The list of images.</p>
     */
    inline DescribeImagesResult& AddImages(Image&& value) { m_images.push_back(std::move(value)); return *this; }

  private:
    Aws::Vector<Image> m_images;
  };

} // namespace Model
} // namespace AppStream
} // namespace Aws
