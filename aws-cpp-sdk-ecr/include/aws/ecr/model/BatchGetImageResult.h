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
#include <aws/ecr/ECR_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ecr/model/Image.h>
#include <aws/ecr/model/ImageFailure.h>
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
namespace ECR
{
namespace Model
{
  class AWS_ECR_API BatchGetImageResult
  {
  public:
    BatchGetImageResult();
    BatchGetImageResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    BatchGetImageResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list of image objects corresponding to the image references in the
     * request.</p>
     */
    inline const Aws::Vector<Image>& GetImages() const{ return m_images; }

    /**
     * <p>A list of image objects corresponding to the image references in the
     * request.</p>
     */
    inline void SetImages(const Aws::Vector<Image>& value) { m_images = value; }

    /**
     * <p>A list of image objects corresponding to the image references in the
     * request.</p>
     */
    inline void SetImages(Aws::Vector<Image>&& value) { m_images = std::move(value); }

    /**
     * <p>A list of image objects corresponding to the image references in the
     * request.</p>
     */
    inline BatchGetImageResult& WithImages(const Aws::Vector<Image>& value) { SetImages(value); return *this;}

    /**
     * <p>A list of image objects corresponding to the image references in the
     * request.</p>
     */
    inline BatchGetImageResult& WithImages(Aws::Vector<Image>&& value) { SetImages(std::move(value)); return *this;}

    /**
     * <p>A list of image objects corresponding to the image references in the
     * request.</p>
     */
    inline BatchGetImageResult& AddImages(const Image& value) { m_images.push_back(value); return *this; }

    /**
     * <p>A list of image objects corresponding to the image references in the
     * request.</p>
     */
    inline BatchGetImageResult& AddImages(Image&& value) { m_images.push_back(std::move(value)); return *this; }


    /**
     * <p>Any failures associated with the call.</p>
     */
    inline const Aws::Vector<ImageFailure>& GetFailures() const{ return m_failures; }

    /**
     * <p>Any failures associated with the call.</p>
     */
    inline void SetFailures(const Aws::Vector<ImageFailure>& value) { m_failures = value; }

    /**
     * <p>Any failures associated with the call.</p>
     */
    inline void SetFailures(Aws::Vector<ImageFailure>&& value) { m_failures = std::move(value); }

    /**
     * <p>Any failures associated with the call.</p>
     */
    inline BatchGetImageResult& WithFailures(const Aws::Vector<ImageFailure>& value) { SetFailures(value); return *this;}

    /**
     * <p>Any failures associated with the call.</p>
     */
    inline BatchGetImageResult& WithFailures(Aws::Vector<ImageFailure>&& value) { SetFailures(std::move(value)); return *this;}

    /**
     * <p>Any failures associated with the call.</p>
     */
    inline BatchGetImageResult& AddFailures(const ImageFailure& value) { m_failures.push_back(value); return *this; }

    /**
     * <p>Any failures associated with the call.</p>
     */
    inline BatchGetImageResult& AddFailures(ImageFailure&& value) { m_failures.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<Image> m_images;

    Aws::Vector<ImageFailure> m_failures;
  };

} // namespace Model
} // namespace ECR
} // namespace Aws
