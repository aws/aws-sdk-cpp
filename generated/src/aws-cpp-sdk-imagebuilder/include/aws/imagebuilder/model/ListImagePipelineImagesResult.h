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
    AWS_IMAGEBUILDER_API ListImagePipelineImagesResult();
    AWS_IMAGEBUILDER_API ListImagePipelineImagesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IMAGEBUILDER_API ListImagePipelineImagesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The request ID that uniquely identifies this request.</p>
     */
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListImagePipelineImagesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListImagePipelineImagesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListImagePipelineImagesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of images built by this pipeline.</p>
     */
    inline const Aws::Vector<ImageSummary>& GetImageSummaryList() const{ return m_imageSummaryList; }
    inline void SetImageSummaryList(const Aws::Vector<ImageSummary>& value) { m_imageSummaryList = value; }
    inline void SetImageSummaryList(Aws::Vector<ImageSummary>&& value) { m_imageSummaryList = std::move(value); }
    inline ListImagePipelineImagesResult& WithImageSummaryList(const Aws::Vector<ImageSummary>& value) { SetImageSummaryList(value); return *this;}
    inline ListImagePipelineImagesResult& WithImageSummaryList(Aws::Vector<ImageSummary>&& value) { SetImageSummaryList(std::move(value)); return *this;}
    inline ListImagePipelineImagesResult& AddImageSummaryList(const ImageSummary& value) { m_imageSummaryList.push_back(value); return *this; }
    inline ListImagePipelineImagesResult& AddImageSummaryList(ImageSummary&& value) { m_imageSummaryList.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The next token used for paginated responses. When this field isn't empty,
     * there are additional elements that the service hasn't included in this request.
     * Use this token with the next request to retrieve additional objects.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListImagePipelineImagesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListImagePipelineImagesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListImagePipelineImagesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}
  private:

    Aws::String m_requestId;

    Aws::Vector<ImageSummary> m_imageSummaryList;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace imagebuilder
} // namespace Aws
