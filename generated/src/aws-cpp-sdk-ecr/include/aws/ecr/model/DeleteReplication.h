/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ecr/ECR_EXPORTS.h>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace ECR {
namespace Model {

/**
 * <p>The delete replication configuration for a replication rule. When delete
 * replication is enabled, the service replicates image deletions and image tag
 * removals in the source registry to the replication destinations.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/ecr-2015-09-21/DeleteReplication">AWS
 * API Reference</a></p>
 */
class DeleteReplication {
 public:
  AWS_ECR_API DeleteReplication() = default;
  AWS_ECR_API DeleteReplication(Aws::Utils::Json::JsonView jsonValue);
  AWS_ECR_API DeleteReplication& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_ECR_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Specifies whether delete replication is enabled. If set to <code>true</code>,
   * the service replicates image deletions and image tag removals from the source
   * registry to each replication destination. If set to <code>false</code>, the
   * service does not replicate image deletions or image tag removals.</p>
   */
  inline bool GetEnabled() const { return m_enabled; }
  inline bool EnabledHasBeenSet() const { return m_enabledHasBeenSet; }
  inline void SetEnabled(bool value) {
    m_enabledHasBeenSet = true;
    m_enabled = value;
  }
  inline DeleteReplication& WithEnabled(bool value) {
    SetEnabled(value);
    return *this;
  }
  ///@}
 private:
  bool m_enabled{false};
  bool m_enabledHasBeenSet = false;
};

}  // namespace Model
}  // namespace ECR
}  // namespace Aws
