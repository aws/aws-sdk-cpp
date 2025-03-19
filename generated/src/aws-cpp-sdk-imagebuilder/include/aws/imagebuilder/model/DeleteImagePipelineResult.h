/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/imagebuilder/Imagebuilder_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
  class DeleteImagePipelineResult
  {
  public:
    AWS_IMAGEBUILDER_API DeleteImagePipelineResult() = default;
    AWS_IMAGEBUILDER_API DeleteImagePipelineResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IMAGEBUILDER_API DeleteImagePipelineResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The request ID that uniquely identifies this request.</p>
     */
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DeleteImagePipelineResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the image pipeline that was deleted.</p>
     */
    inline const Aws::String& GetImagePipelineArn() const { return m_imagePipelineArn; }
    template<typename ImagePipelineArnT = Aws::String>
    void SetImagePipelineArn(ImagePipelineArnT&& value) { m_imagePipelineArnHasBeenSet = true; m_imagePipelineArn = std::forward<ImagePipelineArnT>(value); }
    template<typename ImagePipelineArnT = Aws::String>
    DeleteImagePipelineResult& WithImagePipelineArn(ImagePipelineArnT&& value) { SetImagePipelineArn(std::forward<ImagePipelineArnT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;

    Aws::String m_imagePipelineArn;
    bool m_imagePipelineArnHasBeenSet = false;
  };

} // namespace Model
} // namespace imagebuilder
} // namespace Aws
