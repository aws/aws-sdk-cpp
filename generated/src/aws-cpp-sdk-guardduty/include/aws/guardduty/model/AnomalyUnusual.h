/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/guardduty/GuardDuty_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/guardduty/model/AnomalyObject.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace GuardDuty
{
namespace Model
{

  /**
   * <p>Contains information about the behavior of the anomaly that is new to
   * GuardDuty.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/AnomalyUnusual">AWS
   * API Reference</a></p>
   */
  class AnomalyUnusual
  {
  public:
    AWS_GUARDDUTY_API AnomalyUnusual() = default;
    AWS_GUARDDUTY_API AnomalyUnusual(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API AnomalyUnusual& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The behavior of the anomalous activity that caused GuardDuty to generate the
     * finding.</p>
     */
    inline const Aws::Map<Aws::String, Aws::Map<Aws::String, AnomalyObject>>& GetBehavior() const { return m_behavior; }
    inline bool BehaviorHasBeenSet() const { return m_behaviorHasBeenSet; }
    template<typename BehaviorT = Aws::Map<Aws::String, Aws::Map<Aws::String, AnomalyObject>>>
    void SetBehavior(BehaviorT&& value) { m_behaviorHasBeenSet = true; m_behavior = std::forward<BehaviorT>(value); }
    template<typename BehaviorT = Aws::Map<Aws::String, Aws::Map<Aws::String, AnomalyObject>>>
    AnomalyUnusual& WithBehavior(BehaviorT&& value) { SetBehavior(std::forward<BehaviorT>(value)); return *this;}
    template<typename BehaviorKeyT = Aws::String, typename BehaviorValueT = Aws::Map<Aws::String, AnomalyObject>>
    AnomalyUnusual& AddBehavior(BehaviorKeyT&& key, BehaviorValueT&& value) {
      m_behaviorHasBeenSet = true; m_behavior.emplace(std::forward<BehaviorKeyT>(key), std::forward<BehaviorValueT>(value)); return *this;
    }
    ///@}
  private:

    Aws::Map<Aws::String, Aws::Map<Aws::String, AnomalyObject>> m_behavior;
    bool m_behaviorHasBeenSet = false;
  };

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
