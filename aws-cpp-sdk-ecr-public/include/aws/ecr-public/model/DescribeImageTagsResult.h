/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ecr-public/ECRPublic_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ecr-public/model/ImageTagDetail.h>
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
  class DescribeImageTagsResult
  {
  public:
    AWS_ECRPUBLIC_API DescribeImageTagsResult();
    AWS_ECRPUBLIC_API DescribeImageTagsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ECRPUBLIC_API DescribeImageTagsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The image tag details for the images in the requested repository.</p>
     */
    inline const Aws::Vector<ImageTagDetail>& GetImageTagDetails() const{ return m_imageTagDetails; }

    /**
     * <p>The image tag details for the images in the requested repository.</p>
     */
    inline void SetImageTagDetails(const Aws::Vector<ImageTagDetail>& value) { m_imageTagDetails = value; }

    /**
     * <p>The image tag details for the images in the requested repository.</p>
     */
    inline void SetImageTagDetails(Aws::Vector<ImageTagDetail>&& value) { m_imageTagDetails = std::move(value); }

    /**
     * <p>The image tag details for the images in the requested repository.</p>
     */
    inline DescribeImageTagsResult& WithImageTagDetails(const Aws::Vector<ImageTagDetail>& value) { SetImageTagDetails(value); return *this;}

    /**
     * <p>The image tag details for the images in the requested repository.</p>
     */
    inline DescribeImageTagsResult& WithImageTagDetails(Aws::Vector<ImageTagDetail>&& value) { SetImageTagDetails(std::move(value)); return *this;}

    /**
     * <p>The image tag details for the images in the requested repository.</p>
     */
    inline DescribeImageTagsResult& AddImageTagDetails(const ImageTagDetail& value) { m_imageTagDetails.push_back(value); return *this; }

    /**
     * <p>The image tag details for the images in the requested repository.</p>
     */
    inline DescribeImageTagsResult& AddImageTagDetails(ImageTagDetail&& value) { m_imageTagDetails.push_back(std::move(value)); return *this; }


    /**
     * <p>The <code>nextToken</code> value to include in a future
     * <code>DescribeImageTags</code> request. When the results of a
     * <code>DescribeImageTags</code> request exceed <code>maxResults</code>, this
     * value can be used to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The <code>nextToken</code> value to include in a future
     * <code>DescribeImageTags</code> request. When the results of a
     * <code>DescribeImageTags</code> request exceed <code>maxResults</code>, this
     * value can be used to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The <code>nextToken</code> value to include in a future
     * <code>DescribeImageTags</code> request. When the results of a
     * <code>DescribeImageTags</code> request exceed <code>maxResults</code>, this
     * value can be used to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The <code>nextToken</code> value to include in a future
     * <code>DescribeImageTags</code> request. When the results of a
     * <code>DescribeImageTags</code> request exceed <code>maxResults</code>, this
     * value can be used to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The <code>nextToken</code> value to include in a future
     * <code>DescribeImageTags</code> request. When the results of a
     * <code>DescribeImageTags</code> request exceed <code>maxResults</code>, this
     * value can be used to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline DescribeImageTagsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The <code>nextToken</code> value to include in a future
     * <code>DescribeImageTags</code> request. When the results of a
     * <code>DescribeImageTags</code> request exceed <code>maxResults</code>, this
     * value can be used to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline DescribeImageTagsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The <code>nextToken</code> value to include in a future
     * <code>DescribeImageTags</code> request. When the results of a
     * <code>DescribeImageTags</code> request exceed <code>maxResults</code>, this
     * value can be used to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline DescribeImageTagsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<ImageTagDetail> m_imageTagDetails;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace ECRPublic
} // namespace Aws
