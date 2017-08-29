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
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ecr/model/ImageDetail.h>
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
  class AWS_ECR_API DescribeImagesResult
  {
  public:
    DescribeImagesResult();
    DescribeImagesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeImagesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
     * <code>DescribeImages</code> request exceed <code>maxResults</code>, this value
     * can be used to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The <code>nextToken</code> value to include in a future
     * <code>DescribeImages</code> request. When the results of a
     * <code>DescribeImages</code> request exceed <code>maxResults</code>, this value
     * can be used to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The <code>nextToken</code> value to include in a future
     * <code>DescribeImages</code> request. When the results of a
     * <code>DescribeImages</code> request exceed <code>maxResults</code>, this value
     * can be used to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The <code>nextToken</code> value to include in a future
     * <code>DescribeImages</code> request. When the results of a
     * <code>DescribeImages</code> request exceed <code>maxResults</code>, this value
     * can be used to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The <code>nextToken</code> value to include in a future
     * <code>DescribeImages</code> request. When the results of a
     * <code>DescribeImages</code> request exceed <code>maxResults</code>, this value
     * can be used to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline DescribeImagesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The <code>nextToken</code> value to include in a future
     * <code>DescribeImages</code> request. When the results of a
     * <code>DescribeImages</code> request exceed <code>maxResults</code>, this value
     * can be used to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline DescribeImagesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The <code>nextToken</code> value to include in a future
     * <code>DescribeImages</code> request. When the results of a
     * <code>DescribeImages</code> request exceed <code>maxResults</code>, this value
     * can be used to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline DescribeImagesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<ImageDetail> m_imageDetails;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace ECR
} // namespace Aws
