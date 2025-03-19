/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/devops-guru/DevOpsGuru_EXPORTS.h>
#include <aws/devops-guru/model/ListInsightsOngoingStatusFilter.h>
#include <aws/devops-guru/model/ListInsightsClosedStatusFilter.h>
#include <aws/devops-guru/model/ListInsightsAnyStatusFilter.h>
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
namespace DevOpsGuru
{
namespace Model
{

  /**
   * <p> A filter used by <code>ListInsights</code> to specify which insights to
   * return. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/devops-guru-2020-12-01/ListInsightsStatusFilter">AWS
   * API Reference</a></p>
   */
  class ListInsightsStatusFilter
  {
  public:
    AWS_DEVOPSGURU_API ListInsightsStatusFilter() = default;
    AWS_DEVOPSGURU_API ListInsightsStatusFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEVOPSGURU_API ListInsightsStatusFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEVOPSGURU_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> A <code>ListInsightsAnyStatusFilter</code> that specifies ongoing insights
     * that are either <code>REACTIVE</code> or <code>PROACTIVE</code>. </p>
     */
    inline const ListInsightsOngoingStatusFilter& GetOngoing() const { return m_ongoing; }
    inline bool OngoingHasBeenSet() const { return m_ongoingHasBeenSet; }
    template<typename OngoingT = ListInsightsOngoingStatusFilter>
    void SetOngoing(OngoingT&& value) { m_ongoingHasBeenSet = true; m_ongoing = std::forward<OngoingT>(value); }
    template<typename OngoingT = ListInsightsOngoingStatusFilter>
    ListInsightsStatusFilter& WithOngoing(OngoingT&& value) { SetOngoing(std::forward<OngoingT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> A <code>ListInsightsClosedStatusFilter</code> that specifies closed insights
     * that are either <code>REACTIVE</code> or <code>PROACTIVE</code>. </p>
     */
    inline const ListInsightsClosedStatusFilter& GetClosed() const { return m_closed; }
    inline bool ClosedHasBeenSet() const { return m_closedHasBeenSet; }
    template<typename ClosedT = ListInsightsClosedStatusFilter>
    void SetClosed(ClosedT&& value) { m_closedHasBeenSet = true; m_closed = std::forward<ClosedT>(value); }
    template<typename ClosedT = ListInsightsClosedStatusFilter>
    ListInsightsStatusFilter& WithClosed(ClosedT&& value) { SetClosed(std::forward<ClosedT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> A <code>ListInsightsAnyStatusFilter</code> that specifies insights of any
     * status that are either <code>REACTIVE</code> or <code>PROACTIVE</code>. </p>
     */
    inline const ListInsightsAnyStatusFilter& GetAny() const { return m_any; }
    inline bool AnyHasBeenSet() const { return m_anyHasBeenSet; }
    template<typename AnyT = ListInsightsAnyStatusFilter>
    void SetAny(AnyT&& value) { m_anyHasBeenSet = true; m_any = std::forward<AnyT>(value); }
    template<typename AnyT = ListInsightsAnyStatusFilter>
    ListInsightsStatusFilter& WithAny(AnyT&& value) { SetAny(std::forward<AnyT>(value)); return *this;}
    ///@}
  private:

    ListInsightsOngoingStatusFilter m_ongoing;
    bool m_ongoingHasBeenSet = false;

    ListInsightsClosedStatusFilter m_closed;
    bool m_closedHasBeenSet = false;

    ListInsightsAnyStatusFilter m_any;
    bool m_anyHasBeenSet = false;
  };

} // namespace Model
} // namespace DevOpsGuru
} // namespace Aws
