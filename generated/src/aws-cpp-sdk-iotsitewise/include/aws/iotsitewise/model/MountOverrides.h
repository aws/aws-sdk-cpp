/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/iotsitewise/IoTSiteWise_EXPORTS.h>
#include <aws/iotsitewise/model/Mount.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace IoTSiteWise {
namespace Model {

/**
 * <p>Runtime mount overrides applied to a single pipeline execution. Overrides are
 * transient — they do not modify the stored task configuration.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/MountOverrides">AWS
 * API Reference</a></p>
 */
class MountOverrides {
 public:
  AWS_IOTSITEWISE_API MountOverrides() = default;
  AWS_IOTSITEWISE_API MountOverrides(Aws::Utils::Json::JsonView jsonValue);
  AWS_IOTSITEWISE_API MountOverrides& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_IOTSITEWISE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The mount overrides for each compute node, keyed by compute node name.</p>
   */
  inline const Aws::Map<Aws::String, Aws::Vector<Mount>>& GetComputeNodes() const { return m_computeNodes; }
  inline bool ComputeNodesHasBeenSet() const { return m_computeNodesHasBeenSet; }
  template <typename ComputeNodesT = Aws::Map<Aws::String, Aws::Vector<Mount>>>
  void SetComputeNodes(ComputeNodesT&& value) {
    m_computeNodesHasBeenSet = true;
    m_computeNodes = std::forward<ComputeNodesT>(value);
  }
  template <typename ComputeNodesT = Aws::Map<Aws::String, Aws::Vector<Mount>>>
  MountOverrides& WithComputeNodes(ComputeNodesT&& value) {
    SetComputeNodes(std::forward<ComputeNodesT>(value));
    return *this;
  }
  template <typename ComputeNodesKeyT = Aws::String, typename ComputeNodesValueT = Aws::Vector<Mount>>
  MountOverrides& AddComputeNodes(ComputeNodesKeyT&& key, ComputeNodesValueT&& value) {
    m_computeNodesHasBeenSet = true;
    m_computeNodes.emplace(std::forward<ComputeNodesKeyT>(key), std::forward<ComputeNodesValueT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Map<Aws::String, Aws::Vector<Mount>> m_computeNodes;
  bool m_computeNodesHasBeenSet = false;
};

}  // namespace Model
}  // namespace IoTSiteWise
}  // namespace Aws
