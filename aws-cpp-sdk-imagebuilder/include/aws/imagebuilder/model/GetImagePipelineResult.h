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
#include <aws/imagebuilder/Imagebuilder_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
  class AWS_IMAGEBUILDER_API GetImagePipelineResult
  {
  public:
    GetImagePipelineResult();
    GetImagePipelineResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetImagePipelineResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p> The request ID that uniquely identifies this request. </p>
     */
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    /**
     * <p> The request ID that uniquely identifies this request. </p>
     */
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    /**
     * <p> The request ID that uniquely identifies this request. </p>
     */
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    /**
     * <p> The request ID that uniquely identifies this request. </p>
     */
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    /**
     * <p> The request ID that uniquely identifies this request. </p>
     */
    inline GetImagePipelineResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    /**
     * <p> The request ID that uniquely identifies this request. </p>
     */
    inline GetImagePipelineResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    /**
     * <p> The request ID that uniquely identifies this request. </p>
     */
    inline GetImagePipelineResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}


    /**
     * <p> The image pipeline object. </p>
     */
    inline const ImagePipeline& GetImagePipeline() const{ return m_imagePipeline; }

    /**
     * <p> The image pipeline object. </p>
     */
    inline void SetImagePipeline(const ImagePipeline& value) { m_imagePipeline = value; }

    /**
     * <p> The image pipeline object. </p>
     */
    inline void SetImagePipeline(ImagePipeline&& value) { m_imagePipeline = std::move(value); }

    /**
     * <p> The image pipeline object. </p>
     */
    inline GetImagePipelineResult& WithImagePipeline(const ImagePipeline& value) { SetImagePipeline(value); return *this;}

    /**
     * <p> The image pipeline object. </p>
     */
    inline GetImagePipelineResult& WithImagePipeline(ImagePipeline&& value) { SetImagePipeline(std::move(value)); return *this;}

  private:

    Aws::String m_requestId;

    ImagePipeline m_imagePipeline;
  };

} // namespace Model
} // namespace imagebuilder
} // namespace Aws
