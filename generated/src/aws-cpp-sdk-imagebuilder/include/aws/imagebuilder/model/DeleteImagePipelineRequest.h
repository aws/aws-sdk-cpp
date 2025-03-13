/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/imagebuilder/Imagebuilder_EXPORTS.h>
#include <aws/imagebuilder/ImagebuilderRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace imagebuilder
{
namespace Model
{

  /**
   */
  class DeleteImagePipelineRequest : public ImagebuilderRequest
  {
  public:
    AWS_IMAGEBUILDER_API DeleteImagePipelineRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteImagePipeline"; }

    AWS_IMAGEBUILDER_API Aws::String SerializePayload() const override;

    AWS_IMAGEBUILDER_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the image pipeline to delete.</p>
     */
    inline const Aws::String& GetImagePipelineArn() const { return m_imagePipelineArn; }
    inline bool ImagePipelineArnHasBeenSet() const { return m_imagePipelineArnHasBeenSet; }
    template<typename ImagePipelineArnT = Aws::String>
    void SetImagePipelineArn(ImagePipelineArnT&& value) { m_imagePipelineArnHasBeenSet = true; m_imagePipelineArn = std::forward<ImagePipelineArnT>(value); }
    template<typename ImagePipelineArnT = Aws::String>
    DeleteImagePipelineRequest& WithImagePipelineArn(ImagePipelineArnT&& value) { SetImagePipelineArn(std::forward<ImagePipelineArnT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_imagePipelineArn;
    bool m_imagePipelineArnHasBeenSet = false;
  };

} // namespace Model
} // namespace imagebuilder
} // namespace Aws
