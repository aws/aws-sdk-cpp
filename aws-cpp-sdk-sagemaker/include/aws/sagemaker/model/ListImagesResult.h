/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/Image.h>
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
namespace SageMaker
{
namespace Model
{
  class ListImagesResult
  {
  public:
    AWS_SAGEMAKER_API ListImagesResult();
    AWS_SAGEMAKER_API ListImagesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SAGEMAKER_API ListImagesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list of images and their properties.</p>
     */
    inline const Aws::Vector<Image>& GetImages() const{ return m_images; }

    /**
     * <p>A list of images and their properties.</p>
     */
    inline void SetImages(const Aws::Vector<Image>& value) { m_images = value; }

    /**
     * <p>A list of images and their properties.</p>
     */
    inline void SetImages(Aws::Vector<Image>&& value) { m_images = std::move(value); }

    /**
     * <p>A list of images and their properties.</p>
     */
    inline ListImagesResult& WithImages(const Aws::Vector<Image>& value) { SetImages(value); return *this;}

    /**
     * <p>A list of images and their properties.</p>
     */
    inline ListImagesResult& WithImages(Aws::Vector<Image>&& value) { SetImages(std::move(value)); return *this;}

    /**
     * <p>A list of images and their properties.</p>
     */
    inline ListImagesResult& AddImages(const Image& value) { m_images.push_back(value); return *this; }

    /**
     * <p>A list of images and their properties.</p>
     */
    inline ListImagesResult& AddImages(Image&& value) { m_images.push_back(std::move(value)); return *this; }


    /**
     * <p>A token for getting the next set of images, if there are any.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>A token for getting the next set of images, if there are any.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>A token for getting the next set of images, if there are any.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>A token for getting the next set of images, if there are any.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>A token for getting the next set of images, if there are any.</p>
     */
    inline ListImagesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>A token for getting the next set of images, if there are any.</p>
     */
    inline ListImagesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>A token for getting the next set of images, if there are any.</p>
     */
    inline ListImagesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<Image> m_images;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
