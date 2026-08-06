/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/autoscaling/AutoScaling_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Xml {
class XmlNode;
}  // namespace Xml
}  // namespace Utils
namespace AutoScaling {
namespace Model {

/**
 * <p>Describes the entity that manages an Auto Scaling group.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/Operator">AWS
 * API Reference</a></p>
 */
class Operator {
 public:
  AWS_AUTOSCALING_API Operator() = default;
  AWS_AUTOSCALING_API Operator(const Aws::Utils::Xml::XmlNode& xmlNode);
  AWS_AUTOSCALING_API Operator& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

  AWS_AUTOSCALING_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
  AWS_AUTOSCALING_API void OutputToStream(Aws::OStream& oStream, const char* location) const;

  ///@{
  /**
   * <p>The service principal that is authorized to manage the Auto Scaling group.
   * When an operator is specified, only the designated operator service principal
   * can make mutating changes to the Auto Scaling group.</p>
   */
  inline const Aws::String& GetPrincipal() const { return m_principal; }
  inline bool PrincipalHasBeenSet() const { return m_principalHasBeenSet; }
  template <typename PrincipalT = Aws::String>
  void SetPrincipal(PrincipalT&& value) {
    m_principalHasBeenSet = true;
    m_principal = std::forward<PrincipalT>(value);
  }
  template <typename PrincipalT = Aws::String>
  Operator& WithPrincipal(PrincipalT&& value) {
    SetPrincipal(std::forward<PrincipalT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_principal;
  bool m_principalHasBeenSet = false;
};

}  // namespace Model
}  // namespace AutoScaling
}  // namespace Aws
