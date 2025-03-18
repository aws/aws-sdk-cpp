/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/imagebuilder/Imagebuilder_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/imagebuilder/model/ImageSummary.h>
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
namespace imagebuilder
{
namespace Model
{
  class ListImagePipelineImagesResult
  {
  public:
    AWS_IMAGEBUILDER_API ListImagePipelineImagesResult() = default;
    AWS_IMAGEBUILDER_API ListImagePipelineImagesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IMAGEBUILDER_API ListImagePipelineImagesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The request ID that uniquely identifies this request.</p>
     */
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListImagePipelineImagesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of images built by this pipeline.</p>
     */
    inline const Aws::Vector<ImageSummary>& GetImageSummaryList() const { return m_imageSummaryList; }
    template<typename ImageSummaryListT = Aws::Vector<ImageSummary>>
    void SetImageSummaryList(ImageSummaryListT&& value) { m_imageSummaryListHasBeenSet = true; m_imageSummaryList = std::forward<ImageSummaryListT>(value); }
    template<typename ImageSummaryListT = Aws::Vector<ImageSummary>>
    ListImagePipelineImagesResult& WithImageSummaryList(ImageSummaryListT&& value) { SetImageSummaryList(std::forward<ImageSummaryListT>(value)); return *this;}
    template<typename ImageSummaryListT = ImageSummary>
    ListImagePipelineImagesResult& AddImageSummaryList(ImageSummaryListT&& value) { m_imageSummaryListHasBeenSet = true; m_imageSummaryList.emplace_back(std::forward<ImageSummaryListT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The next token used for paginated responses. When this field isn't empty,
     * there are additional elements that the service hasn't included in this request.
     * Use this token with the next request to retrieve additional objects.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListImagePipelineImagesResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;

    Aws::Vector<ImageSummary> m_imageSummaryList;
    bool m_imageSummaryListHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace imagebuilder
} // namespace Aws
