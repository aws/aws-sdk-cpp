/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ecs/ECS_EXPORTS.h>
#include <aws/ecs/model/AttestationPolicyStatus.h>
#include <aws/ecs/model/IsolationMode.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace ECS {
namespace Model {

/**
 * <p>A summary of the trusted execution configuration for a task. This is a
 * read-only view of the isolation configuration that was set on the task
 * definition. Use it to see a task's isolation configuration in the response to
 * <code>DescribeTasks</code>, <code>RunTask</code>, or <code>StopTask</code>
 * without calling <code>DescribeTaskDefinition</code>. This summary never includes
 * the attestation policy itself.</p>  <p>Trusted execution is supported only
 * for Amazon ECS Managed Instances.</p> <p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/ecs-2014-11-13/TrustedExecutionSummary">AWS
 * API Reference</a></p>
 */
class TrustedExecutionSummary {
 public:
  AWS_ECS_API TrustedExecutionSummary() = default;
  AWS_ECS_API TrustedExecutionSummary(Aws::Utils::Json::JsonView jsonValue);
  AWS_ECS_API TrustedExecutionSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_ECS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The isolation mode that the task runs in. This value mirrors the
   * <code>isolationMode</code> that was set in the task definition's
   * <code>TrustedExecutionConfiguration</code>.</p> <ul> <li> <p>
   * <code>SHARED</code>: The task shares the underlying Amazon EC2 instance with
   * other tasks. This is the default isolation mode.</p> </li> <li> <p>
   * <code>ISOLATED_SANDBOX</code>: The task runs in its own <a
   * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/amazon-ec2-nitro-sandboxes.html">Nitro
   * Sandbox</a>, which is a lightweight virtual machine that is isolated by the
   * Amazon Web Services Nitro System. Each task's sandbox is isolated from every
   * other task's sandbox on the same Amazon EC2 instance, so one task can't access
   * another task's memory or storage. For more information, see <a
   * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/isolated-confidential-tasks.html">Isolated
   * and confidential tasks</a> in <i>Amazon Elastic Container Service Developer
   * Guide</i>.</p> </li> <li> <p> <code>CONFIDENTIAL_SANDBOX</code>: The task runs
   * in its own <a
   * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/amazon-ec2-nitro-sandboxes.html">Nitro
   * Sandbox</a>, which is a lightweight virtual machine that is isolated by the
   * Amazon Web Services Nitro System, with cryptographic attestation. The host can't
   * access the sandbox's memory or storage, and only the approved workload can
   * decrypt data that you encrypt with your Key Management Service key. For more
   * information, see <a
   * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/isolated-confidential-tasks.html">Isolated
   * and confidential tasks</a> in <i>Amazon Elastic Container Service Developer
   * Guide</i>.</p> </li> </ul>
   */
  inline IsolationMode GetIsolationMode() const { return m_isolationMode; }
  inline bool IsolationModeHasBeenSet() const { return m_isolationModeHasBeenSet; }
  inline void SetIsolationMode(IsolationMode value) {
    m_isolationModeHasBeenSet = true;
    m_isolationMode = value;
  }
  inline TrustedExecutionSummary& WithIsolationMode(IsolationMode value) {
    SetIsolationMode(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The status of the attestation policy for the task. This value is present only
   * for tasks that use the <code>CONFIDENTIAL_SANDBOX</code> isolation mode.</p>
   */
  inline AttestationPolicyStatus GetAttestationPolicyStatus() const { return m_attestationPolicyStatus; }
  inline bool AttestationPolicyStatusHasBeenSet() const { return m_attestationPolicyStatusHasBeenSet; }
  inline void SetAttestationPolicyStatus(AttestationPolicyStatus value) {
    m_attestationPolicyStatusHasBeenSet = true;
    m_attestationPolicyStatus = value;
  }
  inline TrustedExecutionSummary& WithAttestationPolicyStatus(AttestationPolicyStatus value) {
    SetAttestationPolicyStatus(value);
    return *this;
  }
  ///@}
 private:
  IsolationMode m_isolationMode{IsolationMode::NOT_SET};

  AttestationPolicyStatus m_attestationPolicyStatus{AttestationPolicyStatus::NOT_SET};
  bool m_isolationModeHasBeenSet = false;
  bool m_attestationPolicyStatusHasBeenSet = false;
};

}  // namespace Model
}  // namespace ECS
}  // namespace Aws
