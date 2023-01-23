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
    AWS_IMAGEBUILDER_API ListImagePipelinesResult();
    AWS_IMAGEBUILDER_API ListImagePipelinesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IMAGEBUILDER_API ListImagePipelinesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The request ID that uniquely identifies this request.</p>
     */
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    /**
     * <p>The request ID that uniquely identifies this request.</p>
     */
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    /**
     * <p>The request ID that uniquely identifies this request.</p>
     */
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    /**
     * <p>The request ID that uniquely identifies this request.</p>
     */
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    /**
     * <p>The request ID that uniquely identifies this request.</p>
     */
    inline ListImagePipelinesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    /**
     * <p>The request ID that uniquely identifies this request.</p>
     */
    inline ListImagePipelinesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    /**
     * <p>The request ID that uniquely identifies this request.</p>
     */
    inline ListImagePipelinesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}


    /**
     * <p>The list of image pipelines.</p>
     */
    inline const Aws::Vector<ImagePipeline>& GetImagePipelineList() const{ return m_imagePipelineList; }

    /**
     * <p>The list of image pipelines.</p>
     */
    inline void SetImagePipelineList(const Aws::Vector<ImagePipeline>& value) { m_imagePipelineList = value; }

    /**
     * <p>The list of image pipelines.</p>
     */
    inline void SetImagePipelineList(Aws::Vector<ImagePipeline>&& value) { m_imagePipelineList = std::move(value); }

    /**
     * <p>The list of image pipelines.</p>
     */
    inline ListImagePipelinesResult& WithImagePipelineList(const Aws::Vector<ImagePipeline>& value) { SetImagePipelineList(value); return *this;}

    /**
     * <p>The list of image pipelines.</p>
     */
    inline ListImagePipelinesResult& WithImagePipelineList(Aws::Vector<ImagePipeline>&& value) { SetImagePipelineList(std::move(value)); return *this;}

    /**
     * <p>The list of image pipelines.</p>
     */
    inline ListImagePipelinesResult& AddImagePipelineList(const ImagePipeline& value) { m_imagePipelineList.push_back(value); return *this; }

    /**
     * <p>The list of image pipelines.</p>
     */
    inline ListImagePipelinesResult& AddImagePipelineList(ImagePipeline&& value) { m_imagePipelineList.push_back(std::move(value)); return *this; }


    /**
     * <p>The next token used for paginated responses. When this is not empty, there
     * are additional elements that the service has not included in this request. Use
     * this token with the next request to retrieve additional objects.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The next token used for paginated responses. When this is not empty, there
     * are additional elements that the service has not included in this request. Use
     * this token with the next request to retrieve additional objects.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The next token used for paginated responses. When this is not empty, there
     * are additional elements that the service has not included in this request. Use
     * this token with the next request to retrieve additional objects.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The next token used for paginated responses. When this is not empty, there
     * are additional elements that the service has not included in this request. Use
     * this token with the next request to retrieve additional objects.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The next token used for paginated responses. When this is not empty, there
     * are additional elements that the service has not included in this request. Use
     * this token with the next request to retrieve additional objects.</p>
     */
    inline ListImagePipelinesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The next token used for paginated responses. When this is not empty, there
     * are additional elements that the service has not included in this request. Use
     * this token with the next request to retrieve additional objects.</p>
     */
    inline ListImagePipelinesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The next token used for paginated responses. When this is not empty, there
     * are additional elements that the service has not included in this request. Use
     * this token with the next request to retrieve additional objects.</p>
     */
    inline ListImagePipelinesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::String m_requestId;

    Aws::Vector<ImagePipeline> m_imagePipelineList;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace imagebuilder
} // namespace Aws
