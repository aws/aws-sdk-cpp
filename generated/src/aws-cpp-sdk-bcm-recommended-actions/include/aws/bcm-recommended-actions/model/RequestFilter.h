/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bcm-recommended-actions/BCMRecommendedActions_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/bcm-recommended-actions/model/ActionFilter.h>
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
namespace BCMRecommendedActions
{
namespace Model
{

  /**
   * <p>Enables filtering of results based on specified action criteria. You can
   * define multiple action filters to refine results using combinations of feature
   * type, severity level, and recommendation type.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bcm-recommended-actions-2024-11-14/RequestFilter">AWS
   * API Reference</a></p>
   */
  class RequestFilter
  {
  public:
    AWS_BCMRECOMMENDEDACTIONS_API RequestFilter() = default;
    AWS_BCMRECOMMENDEDACTIONS_API RequestFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_BCMRECOMMENDEDACTIONS_API RequestFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BCMRECOMMENDEDACTIONS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A list of action filters that define criteria for filtering results. Each
     * filter specifies a key, match option, and corresponding values to filter on.</p>
     */
    inline const Aws::Vector<ActionFilter>& GetActions() const { return m_actions; }
    inline bool ActionsHasBeenSet() const { return m_actionsHasBeenSet; }
    template<typename ActionsT = Aws::Vector<ActionFilter>>
    void SetActions(ActionsT&& value) { m_actionsHasBeenSet = true; m_actions = std::forward<ActionsT>(value); }
    template<typename ActionsT = Aws::Vector<ActionFilter>>
    RequestFilter& WithActions(ActionsT&& value) { SetActions(std::forward<ActionsT>(value)); return *this;}
    template<typename ActionsT = ActionFilter>
    RequestFilter& AddActions(ActionsT&& value) { m_actionsHasBeenSet = true; m_actions.emplace_back(std::forward<ActionsT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<ActionFilter> m_actions;
    bool m_actionsHasBeenSet = false;
  };

} // namespace Model
} // namespace BCMRecommendedActions
} // namespace Aws
