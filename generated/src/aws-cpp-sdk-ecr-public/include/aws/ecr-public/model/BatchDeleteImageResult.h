/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ecr-public/ECRPublic_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ecr-public/model/ImageIdentifier.h>
#include <aws/ecr-public/model/ImageFailure.h>
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
namespace ECRPublic
{
namespace Model
{
  class BatchDeleteImageResult
  {
  public:
    AWS_ECRPUBLIC_API BatchDeleteImageResult();
    AWS_ECRPUBLIC_API BatchDeleteImageResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ECRPUBLIC_API BatchDeleteImageResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The image IDs of the deleted images.</p>
     */
    inline const Aws::Vector<ImageIdentifier>& GetImageIds() const{ return m_imageIds; }

    /**
     * <p>The image IDs of the deleted images.</p>
     */
    inline void SetImageIds(const Aws::Vector<ImageIdentifier>& value) { m_imageIds = value; }

    /**
     * <p>The image IDs of the deleted images.</p>
     */
    inline void SetImageIds(Aws::Vector<ImageIdentifier>&& value) { m_imageIds = std::move(value); }

    /**
     * <p>The image IDs of the deleted images.</p>
     */
    inline BatchDeleteImageResult& WithImageIds(const Aws::Vector<ImageIdentifier>& value) { SetImageIds(value); return *this;}

    /**
     * <p>The image IDs of the deleted images.</p>
     */
    inline BatchDeleteImageResult& WithImageIds(Aws::Vector<ImageIdentifier>&& value) { SetImageIds(std::move(value)); return *this;}

    /**
     * <p>The image IDs of the deleted images.</p>
     */
    inline BatchDeleteImageResult& AddImageIds(const ImageIdentifier& value) { m_imageIds.push_back(value); return *this; }

    /**
     * <p>The image IDs of the deleted images.</p>
     */
    inline BatchDeleteImageResult& AddImageIds(ImageIdentifier&& value) { m_imageIds.push_back(std::move(value)); return *this; }


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
    inline BatchDeleteImageResult& WithFailures(const Aws::Vector<ImageFailure>& value) { SetFailures(value); return *this;}

    /**
     * <p>Any failures associated with the call.</p>
     */
    inline BatchDeleteImageResult& WithFailures(Aws::Vector<ImageFailure>&& value) { SetFailures(std::move(value)); return *this;}

    /**
     * <p>Any failures associated with the call.</p>
     */
    inline BatchDeleteImageResult& AddFailures(const ImageFailure& value) { m_failures.push_back(value); return *this; }

    /**
     * <p>Any failures associated with the call.</p>
     */
    inline BatchDeleteImageResult& AddFailures(ImageFailure&& value) { m_failures.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<ImageIdentifier> m_imageIds;

    Aws::Vector<ImageFailure> m_failures;
  };

} // namespace Model
} // namespace ECRPublic
} // namespace Aws
