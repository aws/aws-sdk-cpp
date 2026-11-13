/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ecs/ECS_EXPORTS.h>
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
 * <p>The trusted execution configuration for a task. This configuration controls
 * the isolation mode and attestation policy. You set this configuration when you
 * register a task definition.</p>  <p>Trusted execution is supported only
 * for Amazon ECS Managed Instances.</p> <p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/ecs-2014-11-13/TrustedExecutionConfiguration">AWS
 * API Reference</a></p>
 */
class TrustedExecutionConfiguration {
 public:
  AWS_ECS_API TrustedExecutionConfiguration() = default;
  AWS_ECS_API TrustedExecutionConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_ECS_API TrustedExecutionConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_ECS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The isolation mode for tasks that use this task definition. The isolation
   * mode determines how a task is isolated from other tasks on the same Amazon EC2
   * instance.</p> <ul> <li> <p> <code>SHARED</code>: The task shares the underlying
   * Amazon EC2 instance with other tasks. This is the default isolation mode.</p>
   * </li> <li> <p> <code>ISOLATED_SANDBOX</code>: The task runs in its own <a
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
  inline TrustedExecutionConfiguration& WithIsolationMode(IsolationMode value) {
    SetIsolationMode(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The base64-encoded attestation policy envelope for the task. The policy
   * specifies which containers are allowed to run and the runtime configuration that
   * is cryptographically attested. This parameter is required when
   * <code>isolationMode</code> is <code>CONFIDENTIAL_SANDBOX</code>.</p>
   */
  inline const Aws::String& GetAttestationPolicy() const { return m_attestationPolicy; }
  inline bool AttestationPolicyHasBeenSet() const { return m_attestationPolicyHasBeenSet; }
  template <typename AttestationPolicyT = Aws::String>
  void SetAttestationPolicy(AttestationPolicyT&& value) {
    m_attestationPolicyHasBeenSet = true;
    m_attestationPolicy = std::forward<AttestationPolicyT>(value);
  }
  template <typename AttestationPolicyT = Aws::String>
  TrustedExecutionConfiguration& WithAttestationPolicy(AttestationPolicyT&& value) {
    SetAttestationPolicy(std::forward<AttestationPolicyT>(value));
    return *this;
  }
  ///@}
 private:
  IsolationMode m_isolationMode{IsolationMode::NOT_SET};

  Aws::String m_attestationPolicy;
  bool m_isolationModeHasBeenSet = false;
  bool m_attestationPolicyHasBeenSet = false;
};

}  // namespace Model
}  // namespace ECS
}  // namespace Aws
