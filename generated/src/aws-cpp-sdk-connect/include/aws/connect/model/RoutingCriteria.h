/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/DateTime.h>
#include <aws/connect/model/Step.h>
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
namespace Connect
{
namespace Model
{

  /**
   * <p>Latest routing criteria on the contact.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/RoutingCriteria">AWS
   * API Reference</a></p>
   */
  class RoutingCriteria
  {
  public:
    AWS_CONNECT_API RoutingCriteria() = default;
    AWS_CONNECT_API RoutingCriteria(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API RoutingCriteria& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>List of routing steps. When Amazon Connect does not find an available agent
     * meeting the requirements in a step for a given step duration, the routing
     * criteria will move on to the next step sequentially until a join is completed
     * with an agent. When all steps are exhausted, the contact will be offered to any
     * agent in the queue.</p>
     */
    inline const Aws::Vector<Step>& GetSteps() const { return m_steps; }
    inline bool StepsHasBeenSet() const { return m_stepsHasBeenSet; }
    template<typename StepsT = Aws::Vector<Step>>
    void SetSteps(StepsT&& value) { m_stepsHasBeenSet = true; m_steps = std::forward<StepsT>(value); }
    template<typename StepsT = Aws::Vector<Step>>
    RoutingCriteria& WithSteps(StepsT&& value) { SetSteps(std::forward<StepsT>(value)); return *this;}
    template<typename StepsT = Step>
    RoutingCriteria& AddSteps(StepsT&& value) { m_stepsHasBeenSet = true; m_steps.emplace_back(std::forward<StepsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The timestamp indicating when the routing criteria is set to active. A
     * routing criteria is activated when contact is transferred to a queue.
     * ActivationTimestamp will be set on routing criteria for contacts in agent queue
     * even though Routing criteria is never activated for contacts in agent queue.</p>
     */
    inline const Aws::Utils::DateTime& GetActivationTimestamp() const { return m_activationTimestamp; }
    inline bool ActivationTimestampHasBeenSet() const { return m_activationTimestampHasBeenSet; }
    template<typename ActivationTimestampT = Aws::Utils::DateTime>
    void SetActivationTimestamp(ActivationTimestampT&& value) { m_activationTimestampHasBeenSet = true; m_activationTimestamp = std::forward<ActivationTimestampT>(value); }
    template<typename ActivationTimestampT = Aws::Utils::DateTime>
    RoutingCriteria& WithActivationTimestamp(ActivationTimestampT&& value) { SetActivationTimestamp(std::forward<ActivationTimestampT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the index of the routing criteria.</p>
     */
    inline int GetIndex() const { return m_index; }
    inline bool IndexHasBeenSet() const { return m_indexHasBeenSet; }
    inline void SetIndex(int value) { m_indexHasBeenSet = true; m_index = value; }
    inline RoutingCriteria& WithIndex(int value) { SetIndex(value); return *this;}
    ///@}
  private:

    Aws::Vector<Step> m_steps;
    bool m_stepsHasBeenSet = false;

    Aws::Utils::DateTime m_activationTimestamp{};
    bool m_activationTimestampHasBeenSet = false;

    int m_index{0};
    bool m_indexHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
