/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/connect/model/SearchableRoutingCriteriaStep.h>
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
   * <p>Routing criteria of the contact to match on.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/SearchableRoutingCriteria">AWS
   * API Reference</a></p>
   */
  class SearchableRoutingCriteria
  {
  public:
    AWS_CONNECT_API SearchableRoutingCriteria() = default;
    AWS_CONNECT_API SearchableRoutingCriteria(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API SearchableRoutingCriteria& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The list of Routing criteria steps of the contact routing.</p>
     */
    inline const Aws::Vector<SearchableRoutingCriteriaStep>& GetSteps() const { return m_steps; }
    inline bool StepsHasBeenSet() const { return m_stepsHasBeenSet; }
    template<typename StepsT = Aws::Vector<SearchableRoutingCriteriaStep>>
    void SetSteps(StepsT&& value) { m_stepsHasBeenSet = true; m_steps = std::forward<StepsT>(value); }
    template<typename StepsT = Aws::Vector<SearchableRoutingCriteriaStep>>
    SearchableRoutingCriteria& WithSteps(StepsT&& value) { SetSteps(std::forward<StepsT>(value)); return *this;}
    template<typename StepsT = SearchableRoutingCriteriaStep>
    SearchableRoutingCriteria& AddSteps(StepsT&& value) { m_stepsHasBeenSet = true; m_steps.emplace_back(std::forward<StepsT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<SearchableRoutingCriteriaStep> m_steps;
    bool m_stepsHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
