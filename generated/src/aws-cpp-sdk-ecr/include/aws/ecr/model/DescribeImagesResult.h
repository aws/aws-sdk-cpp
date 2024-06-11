/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class DescribeImagesResult
  {
  public:
    AWS_ECR_API DescribeImagesResult();
    AWS_ECR_API DescribeImagesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ECR_API DescribeImagesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of <a>ImageDetail</a> objects that contain data about the image.</p>
     */
    inline const Aws::Vector<ImageDetail>& GetImageDetails() const{ return m_imageDetails; }
    inline void SetImageDetails(const Aws::Vector<ImageDetail>& value) { m_imageDetails = value; }
    inline void SetImageDetails(Aws::Vector<ImageDetail>&& value) { m_imageDetails = std::move(value); }
    inline DescribeImagesResult& WithImageDetails(const Aws::Vector<ImageDetail>& value) { SetImageDetails(value); return *this;}
    inline DescribeImagesResult& WithImageDetails(Aws::Vector<ImageDetail>&& value) { SetImageDetails(std::move(value)); return *this;}
    inline DescribeImagesResult& AddImageDetails(const ImageDetail& value) { m_imageDetails.push_back(value); return *this; }
    inline DescribeImagesResult& AddImageDetails(ImageDetail&& value) { m_imageDetails.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The <code>nextToken</code> value to include in a future
     * <code>DescribeImages</code> request. When the results of a
     * <code>DescribeImages</code> request exceed <code>maxResults</code>, this value
     * can be used to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline DescribeImagesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline DescribeImagesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline DescribeImagesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DescribeImagesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DescribeImagesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DescribeImagesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<ImageDetail> m_imageDetails;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ECR
} // namespace Aws
