/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/continuum/Continuum_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace Continuum {
namespace Model {

/**
 * <p>One Collector associated with an Environment.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/continuum-2022-07-26/AssociatedCollector">AWS
 * API Reference</a></p>
 */
class AssociatedCollector {
 public:
  AWS_CONTINUUM_API AssociatedCollector() = default;
  AWS_CONTINUUM_API AssociatedCollector(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONTINUUM_API AssociatedCollector& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONTINUUM_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The unique identifier of the associated Collector.</p>
   */
  inline const Aws::String& GetCollectorId() const { return m_collectorId; }
  inline bool CollectorIdHasBeenSet() const { return m_collectorIdHasBeenSet; }
  template <typename CollectorIdT = Aws::String>
  void SetCollectorId(CollectorIdT&& value) {
    m_collectorIdHasBeenSet = true;
    m_collectorId = std::forward<CollectorIdT>(value);
  }
  template <typename CollectorIdT = Aws::String>
  AssociatedCollector& WithCollectorId(CollectorIdT&& value) {
    SetCollectorId(std::forward<CollectorIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ARN of the associated Collector. The account and Region encoded in this
   * ARN identify cross-account and cross-Region associations.</p>
   */
  inline const Aws::String& GetCollectorArn() const { return m_collectorArn; }
  inline bool CollectorArnHasBeenSet() const { return m_collectorArnHasBeenSet; }
  template <typename CollectorArnT = Aws::String>
  void SetCollectorArn(CollectorArnT&& value) {
    m_collectorArnHasBeenSet = true;
    m_collectorArn = std::forward<CollectorArnT>(value);
  }
  template <typename CollectorArnT = Aws::String>
  AssociatedCollector& WithCollectorArn(CollectorArnT&& value) {
    SetCollectorArn(std::forward<CollectorArnT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_collectorId;

  Aws::String m_collectorArn;
  bool m_collectorIdHasBeenSet = false;
  bool m_collectorArnHasBeenSet = false;
};

}  // namespace Model
}  // namespace Continuum
}  // namespace Aws
