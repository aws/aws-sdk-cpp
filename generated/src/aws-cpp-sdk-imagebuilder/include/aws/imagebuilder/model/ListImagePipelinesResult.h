/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/imagebuilder/Imagebuilder_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/imagebuilder/model/ImagePipeline.h>
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
  class ListImagePipelinesResult
  {
  public:
    AWS_IMAGEBUILDER_API ListImagePipelinesResult() = default;
    AWS_IMAGEBUILDER_API ListImagePipelinesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IMAGEBUILDER_API ListImagePipelinesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The request ID that uniquely identifies this request.</p>
     */
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListImagePipelinesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of image pipelines.</p>
     */
    inline const Aws::Vector<ImagePipeline>& GetImagePipelineList() const { return m_imagePipelineList; }
    template<typename ImagePipelineListT = Aws::Vector<ImagePipeline>>
    void SetImagePipelineList(ImagePipelineListT&& value) { m_imagePipelineListHasBeenSet = true; m_imagePipelineList = std::forward<ImagePipelineListT>(value); }
    template<typename ImagePipelineListT = Aws::Vector<ImagePipeline>>
    ListImagePipelinesResult& WithImagePipelineList(ImagePipelineListT&& value) { SetImagePipelineList(std::forward<ImagePipelineListT>(value)); return *this;}
    template<typename ImagePipelineListT = ImagePipeline>
    ListImagePipelinesResult& AddImagePipelineList(ImagePipelineListT&& value) { m_imagePipelineListHasBeenSet = true; m_imagePipelineList.emplace_back(std::forward<ImagePipelineListT>(value)); return *this; }
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
    ListImagePipelinesResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;

    Aws::Vector<ImagePipeline> m_imagePipelineList;
    bool m_imagePipelineListHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace imagebuilder
} // namespace Aws
