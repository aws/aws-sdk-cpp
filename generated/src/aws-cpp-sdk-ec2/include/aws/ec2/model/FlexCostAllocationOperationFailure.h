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
 * <p>Describes a policy, association, or network resource that a Networking
 * Flexible Cost Allocation operation failed to process.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/FlexCostAllocationOperationFailure">AWS
 * API Reference</a></p>
 */
class FlexCostAllocationOperationFailure {
 public:
  AWS_EC2_API FlexCostAllocationOperationFailure() = default;
  AWS_EC2_API FlexCostAllocationOperationFailure(const Aws::Utils::Xml::XmlNode& xmlNode);
  AWS_EC2_API FlexCostAllocationOperationFailure& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

  AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
  AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;

  ///@{
  /**
   * <p>The ID of the resource that could not be processed.</p>
   */
  inline const Aws::String& GetResourceId() const { return m_resourceId; }
  inline bool ResourceIdHasBeenSet() const { return m_resourceIdHasBeenSet; }
  template <typename ResourceIdT = Aws::String>
  void SetResourceId(ResourceIdT&& value) {
    m_resourceIdHasBeenSet = true;
    m_resourceId = std::forward<ResourceIdT>(value);
  }
  template <typename ResourceIdT = Aws::String>
  FlexCostAllocationOperationFailure& WithResourceId(ResourceIdT&& value) {
    SetResourceId(std::forward<ResourceIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The code that identifies the type of failure. Possible values are:</p> <ul>
   * <li> <p> <code>ResourceNotFound</code> -
   * (<code>DeleteNetworkingFlexCostAllocationPolicies</code>) The policy doesn't
   * exist or isn't owned by your account.</p> </li> <li> <p>
   * <code>InvalidResourceState</code> -
   * (<code>DeleteNetworkingFlexCostAllocationPolicies</code>) The policy has active
   * associations.</p> </li> <li> <p> <code>InvalidResource</code> -
   * (<code>AssociateNetworkingFlexCostAllocationPolicy</code>) The resource ID is
   * malformed, the resource type doesn't match the policy, or the scope is an
   * account other than yours.
   * (<code>DisassociateNetworkingFlexCostAllocationPolicy</code>) The association
   * doesn't exist or was already removed.</p> </li> <li> <p>
   * <code>ResourceAlreadyAssociated</code> -
   * (<code>AssociateNetworkingFlexCostAllocationPolicy</code>) The resource already
   * has an active association.</p> </li> <li> <p> <code>InternalError</code> - An
   * internal error occurred. Retry the request.</p> </li> </ul>
   */
  inline const Aws::String& GetFailureCode() const { return m_failureCode; }
  inline bool FailureCodeHasBeenSet() const { return m_failureCodeHasBeenSet; }
  template <typename FailureCodeT = Aws::String>
  void SetFailureCode(FailureCodeT&& value) {
    m_failureCodeHasBeenSet = true;
    m_failureCode = std::forward<FailureCodeT>(value);
  }
  template <typename FailureCodeT = Aws::String>
  FlexCostAllocationOperationFailure& WithFailureCode(FailureCodeT&& value) {
    SetFailureCode(std::forward<FailureCodeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The reason for the failure.</p>
   */
  inline const Aws::String& GetFailureReason() const { return m_failureReason; }
  inline bool FailureReasonHasBeenSet() const { return m_failureReasonHasBeenSet; }
  template <typename FailureReasonT = Aws::String>
  void SetFailureReason(FailureReasonT&& value) {
    m_failureReasonHasBeenSet = true;
    m_failureReason = std::forward<FailureReasonT>(value);
  }
  template <typename FailureReasonT = Aws::String>
  FlexCostAllocationOperationFailure& WithFailureReason(FailureReasonT&& value) {
    SetFailureReason(std::forward<FailureReasonT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_resourceId;

  Aws::String m_failureCode;

  Aws::String m_failureReason;
  bool m_resourceIdHasBeenSet = false;
  bool m_failureCodeHasBeenSet = false;
  bool m_failureReasonHasBeenSet = false;
};

}  // namespace Model
}  // namespace EC2
}  // namespace Aws
