/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ecr-public/ECRPublic_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ecr-public/model/ImageDetail.h>
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
  class DescribeImagesResult
  {
  public:
    AWS_ECRPUBLIC_API DescribeImagesResult();
    AWS_ECRPUBLIC_API DescribeImagesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ECRPUBLIC_API DescribeImagesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list of <a>ImageDetail</a> objects that contain data about the image.</p>
     */
    inline const Aws::Vector<ImageDetail>& GetImageDetails() const{ return m_imageDetails; }

    /**
     * <p>A list of <a>ImageDetail</a> objects that contain data about the image.</p>
     */
    inline void SetImageDetails(const Aws::Vector<ImageDetail>& value) { m_imageDetails = value; }

    /**
     * <p>A list of <a>ImageDetail</a> objects that contain data about the image.</p>
     */
    inline void SetImageDetails(Aws::Vector<ImageDetail>&& value) { m_imageDetails = std::move(value); }

    /**
     * <p>A list of <a>ImageDetail</a> objects that contain data about the image.</p>
     */
    inline DescribeImagesResult& WithImageDetails(const Aws::Vector<ImageDetail>& value) { SetImageDetails(value); return *this;}

    /**
     * <p>A list of <a>ImageDetail</a> objects that contain data about the image.</p>
     */
    inline DescribeImagesResult& WithImageDetails(Aws::Vector<ImageDetail>&& value) { SetImageDetails(std::move(value)); return *this;}

    /**
     * <p>A list of <a>ImageDetail</a> objects that contain data about the image.</p>
     */
    inline DescribeImagesResult& AddImageDetails(const ImageDetail& value) { m_imageDetails.push_back(value); return *this; }

    /**
     * <p>A list of <a>ImageDetail</a> objects that contain data about the image.</p>
     */
    inline DescribeImagesResult& AddImageDetails(ImageDetail&& value) { m_imageDetails.push_back(std::move(value)); return *this; }


    /**
     * <p>The <code>nextToken</code> value to include in a future
     * <code>DescribeImages</code> request. When the results of a
     * <code>DescribeImages</code> request exceed <code>maxResults</code>, you can use
     * this value to retrieve the next page of results. If there are no more results to
     * return, this value is <code>null</code>.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The <code>nextToken</code> value to include in a future
     * <code>DescribeImages</code> request. When the results of a
     * <code>DescribeImages</code> request exceed <code>maxResults</code>, you can use
     * this value to retrieve the next page of results. If there are no more results to
     * return, this value is <code>null</code>.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The <code>nextToken</code> value to include in a future
     * <code>DescribeImages</code> request. When the results of a
     * <code>DescribeImages</code> request exceed <code>maxResults</code>, you can use
     * this value to retrieve the next page of results. If there are no more results to
     * return, this value is <code>null</code>.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The <code>nextToken</code> value to include in a future
     * <code>DescribeImages</code> request. When the results of a
     * <code>DescribeImages</code> request exceed <code>maxResults</code>, you can use
     * this value to retrieve the next page of results. If there are no more results to
     * return, this value is <code>null</code>.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The <code>nextToken</code> value to include in a future
     * <code>DescribeImages</code> request. When the results of a
     * <code>DescribeImages</code> request exceed <code>maxResults</code>, you can use
     * this value to retrieve the next page of results. If there are no more results to
     * return, this value is <code>null</code>.</p>
     */
    inline DescribeImagesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The <code>nextToken</code> value to include in a future
     * <code>DescribeImages</code> request. When the results of a
     * <code>DescribeImages</code> request exceed <code>maxResults</code>, you can use
     * this value to retrieve the next page of results. If there are no more results to
     * return, this value is <code>null</code>.</p>
     */
    inline DescribeImagesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The <code>nextToken</code> value to include in a future
     * <code>DescribeImages</code> request. When the results of a
     * <code>DescribeImages</code> request exceed <code>maxResults</code>, you can use
     * this value to retrieve the next page of results. If there are no more results to
     * return, this value is <code>null</code>.</p>
     */
    inline DescribeImagesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline DescribeImagesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline DescribeImagesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline DescribeImagesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<ImageDetail> m_imageDetails;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ECRPublic
} // namespace Aws
