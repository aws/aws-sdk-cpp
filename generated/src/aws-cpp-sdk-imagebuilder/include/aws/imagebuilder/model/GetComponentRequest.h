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
class GetComponentRequest : public ImagebuilderRequest {
 public:
  AWS_IMAGEBUILDER_API GetComponentRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "GetComponent"; }

  AWS_IMAGEBUILDER_API Aws::String SerializePayload() const override;

  AWS_IMAGEBUILDER_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the component that you want to get. You can
   * specify a build version ARN, or a component version ARN. The version can use the
   * <code>x</code> wildcard in trailing positions, for example <code>1.0.x</code> or
   * <code>1.x.x</code>. Version ARNs resolve to the latest available matching
   * component build version.</p>
   */
  inline const Aws::String& GetComponentBuildVersionArn() const { return m_componentBuildVersionArn; }
  inline bool ComponentBuildVersionArnHasBeenSet() const { return m_componentBuildVersionArnHasBeenSet; }
  template <typename ComponentBuildVersionArnT = Aws::String>
  void SetComponentBuildVersionArn(ComponentBuildVersionArnT&& value) {
    m_componentBuildVersionArnHasBeenSet = true;
    m_componentBuildVersionArn = std::forward<ComponentBuildVersionArnT>(value);
  }
  template <typename ComponentBuildVersionArnT = Aws::String>
  GetComponentRequest& WithComponentBuildVersionArn(ComponentBuildVersionArnT&& value) {
    SetComponentBuildVersionArn(std::forward<ComponentBuildVersionArnT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_componentBuildVersionArn;
  bool m_componentBuildVersionArnHasBeenSet = false;
};

}  // namespace Model
}  // namespace imagebuilder
}  // namespace Aws
