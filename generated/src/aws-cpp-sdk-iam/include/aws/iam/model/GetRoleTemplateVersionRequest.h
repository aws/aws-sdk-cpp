/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iam/IAMRequest.h>
#include <aws/iam/IAM_EXPORTS.h>

#include <utility>

namespace Aws {
namespace IAM {
namespace Model {

/**
 */
class GetRoleTemplateVersionRequest : public IAMRequest {
 public:
  AWS_IAM_API GetRoleTemplateVersionRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "GetRoleTemplateVersion"; }

  AWS_IAM_API Aws::String SerializePayload() const override;

 protected:
  AWS_IAM_API void DumpBodyToUrl(Aws::Http::URI& uri) const override;

 public:
  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the role template whose version you want to
   * retrieve.</p> <p>For more information about ARNs, see <a
   * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
   * Resource Names (ARNs)</a> in the <i>Amazon Web Services General
   * Reference</i>.</p>
   */
  inline const Aws::String& GetTemplateArn() const { return m_templateArn; }
  inline bool TemplateArnHasBeenSet() const { return m_templateArnHasBeenSet; }
  template <typename TemplateArnT = Aws::String>
  void SetTemplateArn(TemplateArnT&& value) {
    m_templateArnHasBeenSet = true;
    m_templateArn = std::forward<TemplateArnT>(value);
  }
  template <typename TemplateArnT = Aws::String>
  GetRoleTemplateVersionRequest& WithTemplateArn(TemplateArnT&& value) {
    SetTemplateArn(std::forward<TemplateArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The minor version of the role template to retrieve. If you do not specify a
   * minor version, the service returns the template's default minor version.</p>
   */
  inline int GetMinorVersion() const { return m_minorVersion; }
  inline bool MinorVersionHasBeenSet() const { return m_minorVersionHasBeenSet; }
  inline void SetMinorVersion(int value) {
    m_minorVersionHasBeenSet = true;
    m_minorVersion = value;
  }
  inline GetRoleTemplateVersionRequest& WithMinorVersion(int value) {
    SetMinorVersion(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_templateArn;

  int m_minorVersion{0};
  bool m_templateArnHasBeenSet = false;
  bool m_minorVersionHasBeenSet = false;
};

}  // namespace Model
}  // namespace IAM
}  // namespace Aws
