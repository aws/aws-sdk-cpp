/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudformation/CloudFormationRequest.h>
#include <aws/cloudformation/CloudFormation_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace CloudFormation {
namespace Model {

/**
 * <p>The input for the <a>RemoveAlias</a> action.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/cloudformation-2010-05-15/RemoveAliasInput">AWS
 * API Reference</a></p>
 */
class RemoveAliasRequest : public CloudFormationRequest {
 public:
  AWS_CLOUDFORMATION_API RemoveAliasRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "RemoveAlias"; }

  AWS_CLOUDFORMATION_API Aws::String SerializePayload() const override;

 protected:
  AWS_CLOUDFORMATION_API void DumpBodyToUrl(Aws::Http::URI& uri) const override;

 public:
  ///@{
  /**
   * <p>The alias name to remove.</p>
   */
  inline const Aws::String& GetAliasName() const { return m_aliasName; }
  inline bool AliasNameHasBeenSet() const { return m_aliasNameHasBeenSet; }
  template <typename AliasNameT = Aws::String>
  void SetAliasName(AliasNameT&& value) {
    m_aliasNameHasBeenSet = true;
    m_aliasName = std::forward<AliasNameT>(value);
  }
  template <typename AliasNameT = Aws::String>
  RemoveAliasRequest& WithAliasName(AliasNameT&& value) {
    SetAliasName(std::forward<AliasNameT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_aliasName;
  bool m_aliasNameHasBeenSet = false;
};

}  // namespace Model
}  // namespace CloudFormation
}  // namespace Aws
