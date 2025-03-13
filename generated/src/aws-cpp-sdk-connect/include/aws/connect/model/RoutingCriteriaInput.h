/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/connect/model/RoutingCriteriaInputStep.h>
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
   * <p>An object to define the RoutingCriteria.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/RoutingCriteriaInput">AWS
   * API Reference</a></p>
   */
  class RoutingCriteriaInput
  {
  public:
    AWS_CONNECT_API RoutingCriteriaInput() = default;
    AWS_CONNECT_API RoutingCriteriaInput(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API RoutingCriteriaInput& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>When Amazon Connect does not find an available agent meeting the requirements
     * in a step for&#x2028; a given step duration, the routing criteria will move on
     * to the next step sequentially until a&#x2028; join is completed with an agent.
     * When all steps are exhausted, the contact will be offered to any agent in the
     * queue.</p>
     */
    inline const Aws::Vector<RoutingCriteriaInputStep>& GetSteps() const { return m_steps; }
    inline bool StepsHasBeenSet() const { return m_stepsHasBeenSet; }
    template<typename StepsT = Aws::Vector<RoutingCriteriaInputStep>>
    void SetSteps(StepsT&& value) { m_stepsHasBeenSet = true; m_steps = std::forward<StepsT>(value); }
    template<typename StepsT = Aws::Vector<RoutingCriteriaInputStep>>
    RoutingCriteriaInput& WithSteps(StepsT&& value) { SetSteps(std::forward<StepsT>(value)); return *this;}
    template<typename StepsT = RoutingCriteriaInputStep>
    RoutingCriteriaInput& AddSteps(StepsT&& value) { m_stepsHasBeenSet = true; m_steps.emplace_back(std::forward<StepsT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<RoutingCriteriaInputStep> m_steps;
    bool m_stepsHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
