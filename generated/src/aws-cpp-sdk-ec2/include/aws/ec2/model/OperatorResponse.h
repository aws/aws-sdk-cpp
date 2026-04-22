/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/EC2_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Xml {
class XmlNode;
}  // namespace Xml
}  // namespace Utils
namespace EC2 {
namespace Model {

/**
 * <p>Describes whether the resource is managed by a service provider and, if so,
 * describes the service provider that manages it.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/OperatorResponse">AWS
 * API Reference</a></p>
 */
class OperatorResponse {
 public:
  AWS_EC2_API OperatorResponse() = default;
  AWS_EC2_API OperatorResponse(const Aws::Utils::Xml::XmlNode& xmlNode);
  AWS_EC2_API OperatorResponse& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

  AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
  AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;

  ///@{
  /**
   * <p>If <code>true</code>, the resource is managed by a service provider.</p>
   */
  inline bool GetManaged() const { return m_managed; }
  inline bool ManagedHasBeenSet() const { return m_managedHasBeenSet; }
  inline void SetManaged(bool value) {
    m_managedHasBeenSet = true;
    m_managed = value;
  }
  inline OperatorResponse& WithManaged(bool value) {
    SetManaged(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>If <code>managed</code> is <code>true</code>, then the principal is returned.
   * The principal is the service provider that manages the resource.</p>
   */
  inline const Aws::String& GetPrincipal() const { return m_principal; }
  inline bool PrincipalHasBeenSet() const { return m_principalHasBeenSet; }
  template <typename PrincipalT = Aws::String>
  void SetPrincipal(PrincipalT&& value) {
    m_principalHasBeenSet = true;
    m_principal = std::forward<PrincipalT>(value);
  }
  template <typename PrincipalT = Aws::String>
  OperatorResponse& WithPrincipal(PrincipalT&& value) {
    SetPrincipal(std::forward<PrincipalT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>If <code>true</code>, the resource is hidden by default based on the managed
   * resource visibility settings for the account.</p>
   */
  inline bool GetHiddenByDefault() const { return m_hiddenByDefault; }
  inline bool HiddenByDefaultHasBeenSet() const { return m_hiddenByDefaultHasBeenSet; }
  inline void SetHiddenByDefault(bool value) {
    m_hiddenByDefaultHasBeenSet = true;
    m_hiddenByDefault = value;
  }
  inline OperatorResponse& WithHiddenByDefault(bool value) {
    SetHiddenByDefault(value);
    return *this;
  }
  ///@}
 private:
  bool m_managed{false};

  Aws::String m_principal;

  bool m_hiddenByDefault{false};
  bool m_managedHasBeenSet = false;
  bool m_principalHasBeenSet = false;
  bool m_hiddenByDefaultHasBeenSet = false;
};

}  // namespace Model
}  // namespace EC2
}  // namespace Aws
