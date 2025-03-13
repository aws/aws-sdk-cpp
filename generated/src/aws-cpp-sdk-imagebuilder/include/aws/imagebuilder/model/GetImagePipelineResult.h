/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class GetImagePipelineResult
  {
  public:
    AWS_IMAGEBUILDER_API GetImagePipelineResult() = default;
    AWS_IMAGEBUILDER_API GetImagePipelineResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IMAGEBUILDER_API GetImagePipelineResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The request ID that uniquely identifies this request.</p>
     */
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetImagePipelineResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The image pipeline object.</p>
     */
    inline const ImagePipeline& GetImagePipeline() const { return m_imagePipeline; }
    template<typename ImagePipelineT = ImagePipeline>
    void SetImagePipeline(ImagePipelineT&& value) { m_imagePipelineHasBeenSet = true; m_imagePipeline = std::forward<ImagePipelineT>(value); }
    template<typename ImagePipelineT = ImagePipeline>
    GetImagePipelineResult& WithImagePipeline(ImagePipelineT&& value) { SetImagePipeline(std::forward<ImagePipelineT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;

    ImagePipeline m_imagePipeline;
    bool m_imagePipelineHasBeenSet = false;
  };

} // namespace Model
} // namespace imagebuilder
} // namespace Aws
