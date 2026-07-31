/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
 * <p>Represents one level of an Organizations hierarchy—the organization root, an
 * organizational unit (OU), or an account—together with the service control
 * policies (SCPs) that apply at that level. Each element in the list represents
 * one level of the hierarchy, ordered from the organization root down to the
 * account.</p> <p>For more information about SCPs, see <a
 * href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_manage_policies_scps.html">Service
 * control policies (SCPs)</a> in the <i>Organizations User
 * Guide</i>.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/OrderedOrganizationPolicyType">AWS
 * API Reference</a></p>
 */
class OrderedOrganizationPolicyType {
 public:
  AWS_IAM_API OrderedOrganizationPolicyType() = default;
  AWS_IAM_API OrderedOrganizationPolicyType(const Aws::Utils::Xml::XmlNode& xmlNode);
  AWS_IAM_API OrderedOrganizationPolicyType& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

  AWS_IAM_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
  AWS_IAM_API void OutputToStream(Aws::OStream& oStream, const char* location) const;

  ///@{
  /**
   * <p>A list of SCP documents that apply at this level of the Organizations
   * hierarchy. Each document is specified as a string containing the complete, valid
   * JSON text of an SCP.</p>
   */
  inline const Aws::Vector<Aws::String>& GetServiceControlPolicyInputList() const { return m_serviceControlPolicyInputList; }
  inline bool ServiceControlPolicyInputListHasBeenSet() const { return m_serviceControlPolicyInputListHasBeenSet; }
  template <typename ServiceControlPolicyInputListT = Aws::Vector<Aws::String>>
  void SetServiceControlPolicyInputList(ServiceControlPolicyInputListT&& value) {
    m_serviceControlPolicyInputListHasBeenSet = true;
    m_serviceControlPolicyInputList = std::forward<ServiceControlPolicyInputListT>(value);
  }
  template <typename ServiceControlPolicyInputListT = Aws::Vector<Aws::String>>
  OrderedOrganizationPolicyType& WithServiceControlPolicyInputList(ServiceControlPolicyInputListT&& value) {
    SetServiceControlPolicyInputList(std::forward<ServiceControlPolicyInputListT>(value));
    return *this;
  }
  template <typename ServiceControlPolicyInputListT = Aws::String>
  OrderedOrganizationPolicyType& AddServiceControlPolicyInputList(ServiceControlPolicyInputListT&& value) {
    m_serviceControlPolicyInputListHasBeenSet = true;
    m_serviceControlPolicyInputList.emplace_back(std::forward<ServiceControlPolicyInputListT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<Aws::String> m_serviceControlPolicyInputList;
  bool m_serviceControlPolicyInputListHasBeenSet = false;
};

}  // namespace Model
}  // namespace IAM
}  // namespace Aws
