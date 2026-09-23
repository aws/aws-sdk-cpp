/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/imagebuilder/ImagebuilderRequest.h>
#include <aws/imagebuilder/Imagebuilder_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Http {
class URI;
}  // namespace Http
namespace imagebuilder {
namespace Model {

/**
 */
class GetImageRequest : public ImagebuilderRequest {
 public:
  AWS_IMAGEBUILDER_API GetImageRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "GetImage"; }

  AWS_IMAGEBUILDER_API Aws::String SerializePayload() const override;

  AWS_IMAGEBUILDER_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the image that you want to get. You can
   * specify a full build version ARN, or a version ARN with or without wildcards
   * (<code>x.x.x</code>, <code>1.x.x</code>, or <code>1.0.x</code>). A version or
   * wildcard ARN resolves to the latest matching build version that has reached
   * <code>AVAILABLE</code> status. Builds that were later deprecated, disabled, or
   * deleted don't resolve. To get an image in any other state, such as a failed or
   * in-progress build, specify the full build version ARN.</p>
   */
  inline const Aws::String& GetImageBuildVersionArn() const { return m_imageBuildVersionArn; }
  inline bool ImageBuildVersionArnHasBeenSet() const { return m_imageBuildVersionArnHasBeenSet; }
  template <typename ImageBuildVersionArnT = Aws::String>
  void SetImageBuildVersionArn(ImageBuildVersionArnT&& value) {
    m_imageBuildVersionArnHasBeenSet = true;
    m_imageBuildVersionArn = std::forward<ImageBuildVersionArnT>(value);
  }
  template <typename ImageBuildVersionArnT = Aws::String>
  GetImageRequest& WithImageBuildVersionArn(ImageBuildVersionArnT&& value) {
    SetImageBuildVersionArn(std::forward<ImageBuildVersionArnT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_imageBuildVersionArn;
  bool m_imageBuildVersionArnHasBeenSet = false;
};

}  // namespace Model
}  // namespace imagebuilder
}  // namespace Aws
