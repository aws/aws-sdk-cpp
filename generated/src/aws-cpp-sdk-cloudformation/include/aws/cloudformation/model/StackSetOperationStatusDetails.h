/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudformation/CloudFormation_EXPORTS.h>
#include <aws/cloudformation/model/Stages.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>

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
 * <p>Detailed information about the StackSet operation.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/cloudformation-2010-05-15/StackSetOperationStatusDetails">AWS
 * API Reference</a></p>
 */
class StackSetOperationStatusDetails {
 public:
  AWS_CLOUDFORMATION_API StackSetOperationStatusDetails() = default;
  AWS_CLOUDFORMATION_API StackSetOperationStatusDetails(const Aws::Utils::Xml::XmlNode& xmlNode);
  AWS_CLOUDFORMATION_API StackSetOperationStatusDetails& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

  AWS_CLOUDFORMATION_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
  AWS_CLOUDFORMATION_API void OutputToStream(Aws::OStream& oStream, const char* location) const;

  ///@{
  /**
   * <p>The detailed progress information for the individual stages of the StackSet
   * operation: the role provisioning stage and the stack instances deployment
   * stage.</p>
   */
  inline const Stages& GetStages() const { return m_stages; }
  inline bool StagesHasBeenSet() const { return m_stagesHasBeenSet; }
  template <typename StagesT = Stages>
  void SetStages(StagesT&& value) {
    m_stagesHasBeenSet = true;
    m_stages = std::forward<StagesT>(value);
  }
  template <typename StagesT = Stages>
  StackSetOperationStatusDetails& WithStages(StagesT&& value) {
    SetStages(std::forward<StagesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The total number of accounts targeted by this StackSet operation.
   * Self-managed operations and service-managed operations that do not provision
   * roles also report this value when it is known. CloudFormation populates this
   * value after it resolves the target accounts. Until then, this field is not
   * present.</p>
   */
  inline int GetTotalAccountsCount() const { return m_totalAccountsCount; }
  inline bool TotalAccountsCountHasBeenSet() const { return m_totalAccountsCountHasBeenSet; }
  inline void SetTotalAccountsCount(int value) {
    m_totalAccountsCountHasBeenSet = true;
    m_totalAccountsCount = value;
  }
  inline StackSetOperationStatusDetails& WithTotalAccountsCount(int value) {
    SetTotalAccountsCount(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The total number of stack instances targeted by this StackSet operation.
   * CloudFormation populates this value after it resolves the target stack
   * instances. Until then, this field is not present.</p>
   */
  inline int GetTotalStackInstancesCount() const { return m_totalStackInstancesCount; }
  inline bool TotalStackInstancesCountHasBeenSet() const { return m_totalStackInstancesCountHasBeenSet; }
  inline void SetTotalStackInstancesCount(int value) {
    m_totalStackInstancesCountHasBeenSet = true;
    m_totalStackInstancesCount = value;
  }
  inline StackSetOperationStatusDetails& WithTotalStackInstancesCount(int value) {
    SetTotalStackInstancesCount(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of stack instances for which the StackSet operation failed.</p>
   */
  inline int GetFailedStackInstancesCount() const { return m_failedStackInstancesCount; }
  inline bool FailedStackInstancesCountHasBeenSet() const { return m_failedStackInstancesCountHasBeenSet; }
  inline void SetFailedStackInstancesCount(int value) {
    m_failedStackInstancesCountHasBeenSet = true;
    m_failedStackInstancesCount = value;
  }
  inline StackSetOperationStatusDetails& WithFailedStackInstancesCount(int value) {
    SetFailedStackInstancesCount(value);
    return *this;
  }
  ///@}
 private:
  Stages m_stages;

  int m_totalAccountsCount{0};

  int m_totalStackInstancesCount{0};

  int m_failedStackInstancesCount{0};
  bool m_stagesHasBeenSet = false;
  bool m_totalAccountsCountHasBeenSet = false;
  bool m_totalStackInstancesCountHasBeenSet = false;
  bool m_failedStackInstancesCountHasBeenSet = false;
};

}  // namespace Model
}  // namespace CloudFormation
}  // namespace Aws
