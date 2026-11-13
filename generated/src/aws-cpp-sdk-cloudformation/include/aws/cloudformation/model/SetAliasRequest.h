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
 * <p>The input for the <a>SetAlias</a> action.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/cloudformation-2010-05-15/SetAliasInput">AWS
 * API Reference</a></p>
 */
class SetAliasRequest : public CloudFormationRequest {
 public:
  AWS_CLOUDFORMATION_API SetAliasRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "SetAlias"; }

  AWS_CLOUDFORMATION_API Aws::String SerializePayload() const override;

 protected:
  AWS_CLOUDFORMATION_API void DumpBodyToUrl(Aws::Http::URI& uri) const override;

 public:
  ///@{
  /**
   * <p>The name or unique stack ID of the stack to assign an alias to.</p>
   */
  inline const Aws::String& GetStackName() const { return m_stackName; }
  inline bool StackNameHasBeenSet() const { return m_stackNameHasBeenSet; }
  template <typename StackNameT = Aws::String>
  void SetStackName(StackNameT&& value) {
    m_stackNameHasBeenSet = true;
    m_stackName = std::forward<StackNameT>(value);
  }
  template <typename StackNameT = Aws::String>
  SetAliasRequest& WithStackName(StackNameT&& value) {
    SetStackName(std::forward<StackNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The alias to assign to the stack. The alias can then be used in place of the
   * stack name in any API call that accepts <code>StackName</code>.</p> <p>The name
   * must be unique within the same account and Region. It cannot match an existing
   * stack name or another active alias.</p>  <p>An alias name can contain only
   * alphanumeric characters (case-sensitive) and hyphens. It must start with an
   * alphabetic character and can't be longer than 128 characters.</p>
   */
  inline const Aws::String& GetAliasName() const { return m_aliasName; }
  inline bool AliasNameHasBeenSet() const { return m_aliasNameHasBeenSet; }
  template <typename AliasNameT = Aws::String>
  void SetAliasName(AliasNameT&& value) {
    m_aliasNameHasBeenSet = true;
    m_aliasName = std::forward<AliasNameT>(value);
  }
  template <typename AliasNameT = Aws::String>
  SetAliasRequest& WithAliasName(AliasNameT&& value) {
    SetAliasName(std::forward<AliasNameT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_stackName;

  Aws::String m_aliasName;
  bool m_stackNameHasBeenSet = false;
  bool m_aliasNameHasBeenSet = false;
};

}  // namespace Model
}  // namespace CloudFormation
}  // namespace Aws
