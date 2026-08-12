/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iam/IAM_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Xml {
class XmlNode;
}  // namespace Xml
}  // namespace Utils
namespace IAM {
namespace Model {

/**
 * <p>Contains information about the role template that a role was created
 * from.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/SourceRoleTemplate">AWS
 * API Reference</a></p>
 */
class SourceRoleTemplate {
 public:
  AWS_IAM_API SourceRoleTemplate() = default;
  AWS_IAM_API SourceRoleTemplate(const Aws::Utils::Xml::XmlNode& xmlNode);
  AWS_IAM_API SourceRoleTemplate& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

  AWS_IAM_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
  AWS_IAM_API void OutputToStream(Aws::OStream& oStream, const char* location) const;

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the role template that the role was created
   * from.</p>
   */
  inline const Aws::String& GetTemplateArn() const { return m_templateArn; }
  inline bool TemplateArnHasBeenSet() const { return m_templateArnHasBeenSet; }
  template <typename TemplateArnT = Aws::String>
  void SetTemplateArn(TemplateArnT&& value) {
    m_templateArnHasBeenSet = true;
    m_templateArn = std::forward<TemplateArnT>(value);
  }
  template <typename TemplateArnT = Aws::String>
  SourceRoleTemplate& WithTemplateArn(TemplateArnT&& value) {
    SetTemplateArn(std::forward<TemplateArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The minor version of the role template that was used to create the role.</p>
   */
  inline int GetTemplateMinorVersion() const { return m_templateMinorVersion; }
  inline bool TemplateMinorVersionHasBeenSet() const { return m_templateMinorVersionHasBeenSet; }
  inline void SetTemplateMinorVersion(int value) {
    m_templateMinorVersionHasBeenSet = true;
    m_templateMinorVersion = value;
  }
  inline SourceRoleTemplate& WithTemplateMinorVersion(int value) {
    SetTemplateMinorVersion(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_templateArn;

  int m_templateMinorVersion{0};
  bool m_templateArnHasBeenSet = false;
  bool m_templateMinorVersionHasBeenSet = false;
};

}  // namespace Model
}  // namespace IAM
}  // namespace Aws
