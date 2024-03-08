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
    AWS_GUARDDUTY_API AnomalyUnusual();
    AWS_GUARDDUTY_API AnomalyUnusual(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API AnomalyUnusual& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The behavior of the anomalous activity that caused GuardDuty to generate the
     * finding.</p>
     */
    inline const Aws::Map<Aws::String, Aws::Map<Aws::String, AnomalyObject>>& GetBehavior() const{ return m_behavior; }

    /**
     * <p>The behavior of the anomalous activity that caused GuardDuty to generate the
     * finding.</p>
     */
    inline bool BehaviorHasBeenSet() const { return m_behaviorHasBeenSet; }

    /**
     * <p>The behavior of the anomalous activity that caused GuardDuty to generate the
     * finding.</p>
     */
    inline void SetBehavior(const Aws::Map<Aws::String, Aws::Map<Aws::String, AnomalyObject>>& value) { m_behaviorHasBeenSet = true; m_behavior = value; }

    /**
     * <p>The behavior of the anomalous activity that caused GuardDuty to generate the
     * finding.</p>
     */
    inline void SetBehavior(Aws::Map<Aws::String, Aws::Map<Aws::String, AnomalyObject>>&& value) { m_behaviorHasBeenSet = true; m_behavior = std::move(value); }

    /**
     * <p>The behavior of the anomalous activity that caused GuardDuty to generate the
     * finding.</p>
     */
    inline AnomalyUnusual& WithBehavior(const Aws::Map<Aws::String, Aws::Map<Aws::String, AnomalyObject>>& value) { SetBehavior(value); return *this;}

    /**
     * <p>The behavior of the anomalous activity that caused GuardDuty to generate the
     * finding.</p>
     */
    inline AnomalyUnusual& WithBehavior(Aws::Map<Aws::String, Aws::Map<Aws::String, AnomalyObject>>&& value) { SetBehavior(std::move(value)); return *this;}

    /**
     * <p>The behavior of the anomalous activity that caused GuardDuty to generate the
     * finding.</p>
     */
    inline AnomalyUnusual& AddBehavior(const Aws::String& key, const Aws::Map<Aws::String, AnomalyObject>& value) { m_behaviorHasBeenSet = true; m_behavior.emplace(key, value); return *this; }

    /**
     * <p>The behavior of the anomalous activity that caused GuardDuty to generate the
     * finding.</p>
     */
    inline AnomalyUnusual& AddBehavior(Aws::String&& key, const Aws::Map<Aws::String, AnomalyObject>& value) { m_behaviorHasBeenSet = true; m_behavior.emplace(std::move(key), value); return *this; }

    /**
     * <p>The behavior of the anomalous activity that caused GuardDuty to generate the
     * finding.</p>
     */
    inline AnomalyUnusual& AddBehavior(const Aws::String& key, Aws::Map<Aws::String, AnomalyObject>&& value) { m_behaviorHasBeenSet = true; m_behavior.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The behavior of the anomalous activity that caused GuardDuty to generate the
     * finding.</p>
     */
    inline AnomalyUnusual& AddBehavior(Aws::String&& key, Aws::Map<Aws::String, AnomalyObject>&& value) { m_behaviorHasBeenSet = true; m_behavior.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The behavior of the anomalous activity that caused GuardDuty to generate the
     * finding.</p>
     */
    inline AnomalyUnusual& AddBehavior(const char* key, Aws::Map<Aws::String, AnomalyObject>&& value) { m_behaviorHasBeenSet = true; m_behavior.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The behavior of the anomalous activity that caused GuardDuty to generate the
     * finding.</p>
     */
    inline AnomalyUnusual& AddBehavior(const char* key, const Aws::Map<Aws::String, AnomalyObject>& value) { m_behaviorHasBeenSet = true; m_behavior.emplace(key, value); return *this; }

  private:

    Aws::Map<Aws::String, Aws::Map<Aws::String, AnomalyObject>> m_behavior;
    bool m_behaviorHasBeenSet = false;
  };

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
