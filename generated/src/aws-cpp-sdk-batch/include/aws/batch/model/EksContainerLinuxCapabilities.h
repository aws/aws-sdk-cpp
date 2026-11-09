/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/batch/Batch_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace Batch {
namespace Model {

/**
 * <p>The Linux capabilities for the container. For more information, see <a
 * href="https://kubernetes.io/docs/tasks/configure-pod-container/security-context/#set-capabilities-for-a-container">Set
 * capabilities for a container</a> in the <i>Kubernetes
 * documentation</i>.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/batch-2016-08-10/EksContainerLinuxCapabilities">AWS
 * API Reference</a></p>
 */
class EksContainerLinuxCapabilities {
 public:
  AWS_BATCH_API EksContainerLinuxCapabilities() = default;
  AWS_BATCH_API EksContainerLinuxCapabilities(Aws::Utils::Json::JsonView jsonValue);
  AWS_BATCH_API EksContainerLinuxCapabilities& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BATCH_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The Linux capabilities to add to the default capability set for the
   * container. This parameter contains up to 64 values. Specify capability names
   * without the <code>CAP_</code> prefix.</p>
   */
  inline const Aws::Vector<Aws::String>& GetAdd() const { return m_add; }
  inline bool AddHasBeenSet() const { return m_addHasBeenSet; }
  template <typename AddT = Aws::Vector<Aws::String>>
  void SetAdd(AddT&& value) {
    m_addHasBeenSet = true;
    m_add = std::forward<AddT>(value);
  }
  template <typename AddT = Aws::Vector<Aws::String>>
  EksContainerLinuxCapabilities& WithAdd(AddT&& value) {
    SetAdd(std::forward<AddT>(value));
    return *this;
  }
  template <typename AddT = Aws::String>
  EksContainerLinuxCapabilities& AddAdd(AddT&& value) {
    m_addHasBeenSet = true;
    m_add.emplace_back(std::forward<AddT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Linux capabilities to remove from the default capability set for the
   * container. This parameter contains up to 64 values. Specify capability names
   * without the <code>CAP_</code> prefix.</p>
   */
  inline const Aws::Vector<Aws::String>& GetDrop() const { return m_drop; }
  inline bool DropHasBeenSet() const { return m_dropHasBeenSet; }
  template <typename DropT = Aws::Vector<Aws::String>>
  void SetDrop(DropT&& value) {
    m_dropHasBeenSet = true;
    m_drop = std::forward<DropT>(value);
  }
  template <typename DropT = Aws::Vector<Aws::String>>
  EksContainerLinuxCapabilities& WithDrop(DropT&& value) {
    SetDrop(std::forward<DropT>(value));
    return *this;
  }
  template <typename DropT = Aws::String>
  EksContainerLinuxCapabilities& AddDrop(DropT&& value) {
    m_dropHasBeenSet = true;
    m_drop.emplace_back(std::forward<DropT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<Aws::String> m_add;

  Aws::Vector<Aws::String> m_drop;
  bool m_addHasBeenSet = false;
  bool m_dropHasBeenSet = false;
};

}  // namespace Model
}  // namespace Batch
}  // namespace Aws
