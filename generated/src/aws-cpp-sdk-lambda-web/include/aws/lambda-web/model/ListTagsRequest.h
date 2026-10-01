/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lambda-web/LambdaWebRequest.h>
#include <aws/lambda-web/LambdaWeb_EXPORTS.h>

#include <utility>

namespace Aws {
namespace LambdaWeb {
namespace Model {

/**
 * <p>The request to list tags for a resource.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-web-2025-03-07/ListTagsRequest">AWS
 * API Reference</a></p>
 */
class ListTagsRequest : public LambdaWebRequest {
 public:
  AWS_LAMBDAWEB_API ListTagsRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "ListTags"; }

  AWS_LAMBDAWEB_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the web function.</p>
   */
  inline const Aws::String& GetResource() const { return m_resource; }
  inline bool ResourceHasBeenSet() const { return m_resourceHasBeenSet; }
  template <typename ResourceT = Aws::String>
  void SetResource(ResourceT&& value) {
    m_resourceHasBeenSet = true;
    m_resource = std::forward<ResourceT>(value);
  }
  template <typename ResourceT = Aws::String>
  ListTagsRequest& WithResource(ResourceT&& value) {
    SetResource(std::forward<ResourceT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_resource;
  bool m_resourceHasBeenSet = false;
};

}  // namespace Model
}  // namespace LambdaWeb
}  // namespace Aws
