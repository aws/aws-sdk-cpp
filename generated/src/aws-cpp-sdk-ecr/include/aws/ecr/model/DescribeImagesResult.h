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
    AWS_ECR_API DescribeImagesResult() = default;
    AWS_ECR_API DescribeImagesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ECR_API DescribeImagesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of <a>ImageDetail</a> objects that contain data about the image.</p>
     */
    inline const Aws::Vector<ImageDetail>& GetImageDetails() const { return m_imageDetails; }
    template<typename ImageDetailsT = Aws::Vector<ImageDetail>>
    void SetImageDetails(ImageDetailsT&& value) { m_imageDetailsHasBeenSet = true; m_imageDetails = std::forward<ImageDetailsT>(value); }
    template<typename ImageDetailsT = Aws::Vector<ImageDetail>>
    DescribeImagesResult& WithImageDetails(ImageDetailsT&& value) { SetImageDetails(std::forward<ImageDetailsT>(value)); return *this;}
    template<typename ImageDetailsT = ImageDetail>
    DescribeImagesResult& AddImageDetails(ImageDetailsT&& value) { m_imageDetailsHasBeenSet = true; m_imageDetails.emplace_back(std::forward<ImageDetailsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The <code>nextToken</code> value to include in a future
     * <code>DescribeImages</code> request. When the results of a
     * <code>DescribeImages</code> request exceed <code>maxResults</code>, this value
     * can be used to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    DescribeImagesResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeImagesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<ImageDetail> m_imageDetails;
    bool m_imageDetailsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ECR
} // namespace Aws
