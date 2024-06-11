/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ecr/ECR_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
  class BatchGetImageResult
  {
  public:
    AWS_ECR_API BatchGetImageResult();
    AWS_ECR_API BatchGetImageResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ECR_API BatchGetImageResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of image objects corresponding to the image references in the
     * request.</p>
     */
    inline const Aws::Vector<Image>& GetImages() const{ return m_images; }
    inline void SetImages(const Aws::Vector<Image>& value) { m_images = value; }
    inline void SetImages(Aws::Vector<Image>&& value) { m_images = std::move(value); }
    inline BatchGetImageResult& WithImages(const Aws::Vector<Image>& value) { SetImages(value); return *this;}
    inline BatchGetImageResult& WithImages(Aws::Vector<Image>&& value) { SetImages(std::move(value)); return *this;}
    inline BatchGetImageResult& AddImages(const Image& value) { m_images.push_back(value); return *this; }
    inline BatchGetImageResult& AddImages(Image&& value) { m_images.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Any failures associated with the call.</p>
     */
    inline const Aws::Vector<ImageFailure>& GetFailures() const{ return m_failures; }
    inline void SetFailures(const Aws::Vector<ImageFailure>& value) { m_failures = value; }
    inline void SetFailures(Aws::Vector<ImageFailure>&& value) { m_failures = std::move(value); }
    inline BatchGetImageResult& WithFailures(const Aws::Vector<ImageFailure>& value) { SetFailures(value); return *this;}
    inline BatchGetImageResult& WithFailures(Aws::Vector<ImageFailure>&& value) { SetFailures(std::move(value)); return *this;}
    inline BatchGetImageResult& AddFailures(const ImageFailure& value) { m_failures.push_back(value); return *this; }
    inline BatchGetImageResult& AddFailures(ImageFailure&& value) { m_failures.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline BatchGetImageResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline BatchGetImageResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline BatchGetImageResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<Image> m_images;

    Aws::Vector<ImageFailure> m_failures;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ECR
} // namespace Aws
