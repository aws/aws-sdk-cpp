/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iam/IAMRequest.h>
#include <aws/iam/IAM_EXPORTS.h>
#include <aws/iam/model/ReplacementValueEntry.h>

#include <utility>

namespace Aws {
namespace IAM {
namespace Model {

/**
 */
class AcquireRoleRequest : public IAMRequest {
 public:
  AWS_IAM_API AcquireRoleRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "AcquireRole"; }

  AWS_IAM_API Aws::String SerializePayload() const override;

 protected:
  AWS_IAM_API void DumpBodyToUrl(Aws::Http::URI& uri) const override;

 public:
  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the role template to create the role
   * from.</p> <p>For more information about ARNs, see <a
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
  AcquireRoleRequest& WithTemplateArn(TemplateArnT&& value) {
    SetTemplateArn(std::forward<TemplateArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The minor version of the role template to use. If you do not specify a minor
   * version, the service uses the template's default minor version.</p>
   */
  inline int GetTemplateMinorVersion() const { return m_templateMinorVersion; }
  inline bool TemplateMinorVersionHasBeenSet() const { return m_templateMinorVersionHasBeenSet; }
  inline void SetTemplateMinorVersion(int value) {
    m_templateMinorVersionHasBeenSet = true;
    m_templateMinorVersion = value;
  }
  inline AcquireRoleRequest& WithTemplateMinorVersion(int value) {
    SetTemplateMinorVersion(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A map of values to substitute for the parameters that are defined in the role
   * template version. Each key is a parameter name from the template, and each value
   * is a structure that contains the replacement values for that parameter.</p>
   */
  inline const Aws::Map<Aws::String, ReplacementValueEntry>& GetReplacementValues() const { return m_replacementValues; }
  inline bool ReplacementValuesHasBeenSet() const { return m_replacementValuesHasBeenSet; }
  template <typename ReplacementValuesT = Aws::Map<Aws::String, ReplacementValueEntry>>
  void SetReplacementValues(ReplacementValuesT&& value) {
    m_replacementValuesHasBeenSet = true;
    m_replacementValues = std::forward<ReplacementValuesT>(value);
  }
  template <typename ReplacementValuesT = Aws::Map<Aws::String, ReplacementValueEntry>>
  AcquireRoleRequest& WithReplacementValues(ReplacementValuesT&& value) {
    SetReplacementValues(std::forward<ReplacementValuesT>(value));
    return *this;
  }
  template <typename ReplacementValuesKeyT = Aws::String, typename ReplacementValuesValueT = ReplacementValueEntry>
  AcquireRoleRequest& AddReplacementValues(ReplacementValuesKeyT&& key, ReplacementValuesValueT&& value) {
    m_replacementValuesHasBeenSet = true;
    m_replacementValues.emplace(std::forward<ReplacementValuesKeyT>(key), std::forward<ReplacementValuesValueT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_templateArn;

  int m_templateMinorVersion{0};

  Aws::Map<Aws::String, ReplacementValueEntry> m_replacementValues;
  bool m_templateArnHasBeenSet = false;
  bool m_templateMinorVersionHasBeenSet = false;
  bool m_replacementValuesHasBeenSet = false;
};

}  // namespace Model
}  // namespace IAM
}  // namespace Aws
