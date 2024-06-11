/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ecr/ECR_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ecr/model/ImageIdentifier.h>
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
  class BatchDeleteImageResult
  {
  public:
    AWS_ECR_API BatchDeleteImageResult();
    AWS_ECR_API BatchDeleteImageResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ECR_API BatchDeleteImageResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The image IDs of the deleted images.</p>
     */
    inline const Aws::Vector<ImageIdentifier>& GetImageIds() const{ return m_imageIds; }
    inline void SetImageIds(const Aws::Vector<ImageIdentifier>& value) { m_imageIds = value; }
    inline void SetImageIds(Aws::Vector<ImageIdentifier>&& value) { m_imageIds = std::move(value); }
    inline BatchDeleteImageResult& WithImageIds(const Aws::Vector<ImageIdentifier>& value) { SetImageIds(value); return *this;}
    inline BatchDeleteImageResult& WithImageIds(Aws::Vector<ImageIdentifier>&& value) { SetImageIds(std::move(value)); return *this;}
    inline BatchDeleteImageResult& AddImageIds(const ImageIdentifier& value) { m_imageIds.push_back(value); return *this; }
    inline BatchDeleteImageResult& AddImageIds(ImageIdentifier&& value) { m_imageIds.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Any failures associated with the call.</p>
     */
    inline const Aws::Vector<ImageFailure>& GetFailures() const{ return m_failures; }
    inline void SetFailures(const Aws::Vector<ImageFailure>& value) { m_failures = value; }
    inline void SetFailures(Aws::Vector<ImageFailure>&& value) { m_failures = std::move(value); }
    inline BatchDeleteImageResult& WithFailures(const Aws::Vector<ImageFailure>& value) { SetFailures(value); return *this;}
    inline BatchDeleteImageResult& WithFailures(Aws::Vector<ImageFailure>&& value) { SetFailures(std::move(value)); return *this;}
    inline BatchDeleteImageResult& AddFailures(const ImageFailure& value) { m_failures.push_back(value); return *this; }
    inline BatchDeleteImageResult& AddFailures(ImageFailure&& value) { m_failures.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline BatchDeleteImageResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline BatchDeleteImageResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline BatchDeleteImageResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<ImageIdentifier> m_imageIds;

    Aws::Vector<ImageFailure> m_failures;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ECR
} // namespace Aws
