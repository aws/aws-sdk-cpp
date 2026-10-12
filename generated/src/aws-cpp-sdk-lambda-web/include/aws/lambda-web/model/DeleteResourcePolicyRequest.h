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
namespace Http {
class URI;
}  // namespace Http
namespace LambdaWeb {
namespace Model {

/**
 * <p>The request to delete a resource-based policy.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-web-2025-03-07/DeleteResourcePolicyRequest">AWS
 * API Reference</a></p>
 */
class DeleteResourcePolicyRequest : public LambdaWebRequest {
 public:
  AWS_LAMBDAWEB_API DeleteResourcePolicyRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "DeleteResourcePolicy"; }

  AWS_LAMBDAWEB_API Aws::String SerializePayload() const override;

  AWS_LAMBDAWEB_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the web function.</p>
   */
  inline const Aws::String& GetResourceArn() const { return m_resourceArn; }
  inline bool ResourceArnHasBeenSet() const { return m_resourceArnHasBeenSet; }
  template <typename ResourceArnT = Aws::String>
  void SetResourceArn(ResourceArnT&& value) {
    m_resourceArnHasBeenSet = true;
    m_resourceArn = std::forward<ResourceArnT>(value);
  }
  template <typename ResourceArnT = Aws::String>
  DeleteResourcePolicyRequest& WithResourceArn(ResourceArnT&& value) {
    SetResourceArn(std::forward<ResourceArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The revision ID of the policy. Use this to prevent deleting a policy that has
   * been updated since you last retrieved it. If you don't specify a value, the
   * policy is deleted regardless of its current revision.</p>
   */
  inline const Aws::String& GetRevisionId() const { return m_revisionId; }
  inline bool RevisionIdHasBeenSet() const { return m_revisionIdHasBeenSet; }
  template <typename RevisionIdT = Aws::String>
  void SetRevisionId(RevisionIdT&& value) {
    m_revisionIdHasBeenSet = true;
    m_revisionId = std::forward<RevisionIdT>(value);
  }
  template <typename RevisionIdT = Aws::String>
  DeleteResourcePolicyRequest& WithRevisionId(RevisionIdT&& value) {
    SetRevisionId(std::forward<RevisionIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_resourceArn;

  Aws::String m_revisionId;
  bool m_resourceArnHasBeenSet = false;
  bool m_revisionIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace LambdaWeb
}  // namespace Aws
