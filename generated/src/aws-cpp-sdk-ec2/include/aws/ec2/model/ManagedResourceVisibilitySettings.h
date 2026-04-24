/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/model/ManagedResourceDefaultVisibility.h>

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
 * <p>Describes the managed resource visibility settings for the
 * account.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/ManagedResourceVisibilitySettings">AWS
 * API Reference</a></p>
 */
class ManagedResourceVisibilitySettings {
 public:
  AWS_EC2_API ManagedResourceVisibilitySettings() = default;
  AWS_EC2_API ManagedResourceVisibilitySettings(const Aws::Utils::Xml::XmlNode& xmlNode);
  AWS_EC2_API ManagedResourceVisibilitySettings& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

  AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
  AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;

  ///@{
  /**
   * <p>The default visibility setting for managed resources. A value of
   * <code>hidden</code> indicates that managed resources are not included in
   * Describe operation responses by default. A value of <code>visible</code>
   * indicates that managed resources are included by default.</p>
   */
  inline ManagedResourceDefaultVisibility GetDefaultVisibility() const { return m_defaultVisibility; }
  inline bool DefaultVisibilityHasBeenSet() const { return m_defaultVisibilityHasBeenSet; }
  inline void SetDefaultVisibility(ManagedResourceDefaultVisibility value) {
    m_defaultVisibilityHasBeenSet = true;
    m_defaultVisibility = value;
  }
  inline ManagedResourceVisibilitySettings& WithDefaultVisibility(ManagedResourceDefaultVisibility value) {
    SetDefaultVisibility(value);
    return *this;
  }
  ///@}
 private:
  ManagedResourceDefaultVisibility m_defaultVisibility{ManagedResourceDefaultVisibility::NOT_SET};
  bool m_defaultVisibilityHasBeenSet = false;
};

}  // namespace Model
}  // namespace EC2
}  // namespace Aws
