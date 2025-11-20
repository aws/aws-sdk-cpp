/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudformation/CloudFormation_EXPORTS.h>
#include <aws/cloudformation/model/DriftIgnoredReason.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Xml {
class XmlNode;
}  // namespace Xml
}  // namespace Utils
namespace CloudFormation {
namespace Model {

/**
 * <p>The <code>ResourceDriftIgnoredAttribute</code> data type.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/cloudformation-2010-05-15/ResourceDriftIgnoredAttribute">AWS
 * API Reference</a></p>
 */
class ResourceDriftIgnoredAttribute {
 public:
  AWS_CLOUDFORMATION_API ResourceDriftIgnoredAttribute() = default;
  AWS_CLOUDFORMATION_API ResourceDriftIgnoredAttribute(const Aws::Utils::Xml::XmlNode& xmlNode);
  AWS_CLOUDFORMATION_API ResourceDriftIgnoredAttribute& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

  AWS_CLOUDFORMATION_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
  AWS_CLOUDFORMATION_API void OutputToStream(Aws::OStream& oStream, const char* location) const;

  ///@{
  /**
   * <p>Path of the resource attribute for which drift was ignored.</p>
   */
  inline const Aws::String& GetPath() const { return m_path; }
  inline bool PathHasBeenSet() const { return m_pathHasBeenSet; }
  template <typename PathT = Aws::String>
  void SetPath(PathT&& value) {
    m_pathHasBeenSet = true;
    m_path = std::forward<PathT>(value);
  }
  template <typename PathT = Aws::String>
  ResourceDriftIgnoredAttribute& WithPath(PathT&& value) {
    SetPath(std::forward<PathT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Reason why drift was ignored for the attribute, can have 2 possible
   * values:</p> <ul> <li> <p> <code>WRITE_ONLY_PROPERTY</code> - Property is not
   * included in read response for the resource’s live state.</p> </li> <li> <p>
   * <code>MANAGED_BY_AWS</code> - Property is managed by an Amazon Web Services
   * service and is expected to be dynamically modified.</p> </li> </ul>
   */
  inline DriftIgnoredReason GetReason() const { return m_reason; }
  inline bool ReasonHasBeenSet() const { return m_reasonHasBeenSet; }
  inline void SetReason(DriftIgnoredReason value) {
    m_reasonHasBeenSet = true;
    m_reason = value;
  }
  inline ResourceDriftIgnoredAttribute& WithReason(DriftIgnoredReason value) {
    SetReason(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_path;
  bool m_pathHasBeenSet = false;

  DriftIgnoredReason m_reason{DriftIgnoredReason::NOT_SET};
  bool m_reasonHasBeenSet = false;
};

}  // namespace Model
}  // namespace CloudFormation
}  // namespace Aws
