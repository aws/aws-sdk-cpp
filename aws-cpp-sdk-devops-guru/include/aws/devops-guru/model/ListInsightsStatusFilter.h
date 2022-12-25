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
    AWS_DEVOPSGURU_API ListInsightsStatusFilter();
    AWS_DEVOPSGURU_API ListInsightsStatusFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEVOPSGURU_API ListInsightsStatusFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEVOPSGURU_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> A <code>ListInsightsAnyStatusFilter</code> that specifies ongoing insights
     * that are either <code>REACTIVE</code> or <code>PROACTIVE</code>. </p>
     */
    inline const ListInsightsOngoingStatusFilter& GetOngoing() const{ return m_ongoing; }

    /**
     * <p> A <code>ListInsightsAnyStatusFilter</code> that specifies ongoing insights
     * that are either <code>REACTIVE</code> or <code>PROACTIVE</code>. </p>
     */
    inline bool OngoingHasBeenSet() const { return m_ongoingHasBeenSet; }

    /**
     * <p> A <code>ListInsightsAnyStatusFilter</code> that specifies ongoing insights
     * that are either <code>REACTIVE</code> or <code>PROACTIVE</code>. </p>
     */
    inline void SetOngoing(const ListInsightsOngoingStatusFilter& value) { m_ongoingHasBeenSet = true; m_ongoing = value; }

    /**
     * <p> A <code>ListInsightsAnyStatusFilter</code> that specifies ongoing insights
     * that are either <code>REACTIVE</code> or <code>PROACTIVE</code>. </p>
     */
    inline void SetOngoing(ListInsightsOngoingStatusFilter&& value) { m_ongoingHasBeenSet = true; m_ongoing = std::move(value); }

    /**
     * <p> A <code>ListInsightsAnyStatusFilter</code> that specifies ongoing insights
     * that are either <code>REACTIVE</code> or <code>PROACTIVE</code>. </p>
     */
    inline ListInsightsStatusFilter& WithOngoing(const ListInsightsOngoingStatusFilter& value) { SetOngoing(value); return *this;}

    /**
     * <p> A <code>ListInsightsAnyStatusFilter</code> that specifies ongoing insights
     * that are either <code>REACTIVE</code> or <code>PROACTIVE</code>. </p>
     */
    inline ListInsightsStatusFilter& WithOngoing(ListInsightsOngoingStatusFilter&& value) { SetOngoing(std::move(value)); return *this;}


    /**
     * <p> A <code>ListInsightsClosedStatusFilter</code> that specifies closed insights
     * that are either <code>REACTIVE</code> or <code>PROACTIVE</code>. </p>
     */
    inline const ListInsightsClosedStatusFilter& GetClosed() const{ return m_closed; }

    /**
     * <p> A <code>ListInsightsClosedStatusFilter</code> that specifies closed insights
     * that are either <code>REACTIVE</code> or <code>PROACTIVE</code>. </p>
     */
    inline bool ClosedHasBeenSet() const { return m_closedHasBeenSet; }

    /**
     * <p> A <code>ListInsightsClosedStatusFilter</code> that specifies closed insights
     * that are either <code>REACTIVE</code> or <code>PROACTIVE</code>. </p>
     */
    inline void SetClosed(const ListInsightsClosedStatusFilter& value) { m_closedHasBeenSet = true; m_closed = value; }

    /**
     * <p> A <code>ListInsightsClosedStatusFilter</code> that specifies closed insights
     * that are either <code>REACTIVE</code> or <code>PROACTIVE</code>. </p>
     */
    inline void SetClosed(ListInsightsClosedStatusFilter&& value) { m_closedHasBeenSet = true; m_closed = std::move(value); }

    /**
     * <p> A <code>ListInsightsClosedStatusFilter</code> that specifies closed insights
     * that are either <code>REACTIVE</code> or <code>PROACTIVE</code>. </p>
     */
    inline ListInsightsStatusFilter& WithClosed(const ListInsightsClosedStatusFilter& value) { SetClosed(value); return *this;}

    /**
     * <p> A <code>ListInsightsClosedStatusFilter</code> that specifies closed insights
     * that are either <code>REACTIVE</code> or <code>PROACTIVE</code>. </p>
     */
    inline ListInsightsStatusFilter& WithClosed(ListInsightsClosedStatusFilter&& value) { SetClosed(std::move(value)); return *this;}


    /**
     * <p> A <code>ListInsightsAnyStatusFilter</code> that specifies insights of any
     * status that are either <code>REACTIVE</code> or <code>PROACTIVE</code>. </p>
     */
    inline const ListInsightsAnyStatusFilter& GetAny() const{ return m_any; }

    /**
     * <p> A <code>ListInsightsAnyStatusFilter</code> that specifies insights of any
     * status that are either <code>REACTIVE</code> or <code>PROACTIVE</code>. </p>
     */
    inline bool AnyHasBeenSet() const { return m_anyHasBeenSet; }

    /**
     * <p> A <code>ListInsightsAnyStatusFilter</code> that specifies insights of any
     * status that are either <code>REACTIVE</code> or <code>PROACTIVE</code>. </p>
     */
    inline void SetAny(const ListInsightsAnyStatusFilter& value) { m_anyHasBeenSet = true; m_any = value; }

    /**
     * <p> A <code>ListInsightsAnyStatusFilter</code> that specifies insights of any
     * status that are either <code>REACTIVE</code> or <code>PROACTIVE</code>. </p>
     */
    inline void SetAny(ListInsightsAnyStatusFilter&& value) { m_anyHasBeenSet = true; m_any = std::move(value); }

    /**
     * <p> A <code>ListInsightsAnyStatusFilter</code> that specifies insights of any
     * status that are either <code>REACTIVE</code> or <code>PROACTIVE</code>. </p>
     */
    inline ListInsightsStatusFilter& WithAny(const ListInsightsAnyStatusFilter& value) { SetAny(value); return *this;}

    /**
     * <p> A <code>ListInsightsAnyStatusFilter</code> that specifies insights of any
     * status that are either <code>REACTIVE</code> or <code>PROACTIVE</code>. </p>
     */
    inline ListInsightsStatusFilter& WithAny(ListInsightsAnyStatusFilter&& value) { SetAny(std::move(value)); return *this;}

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
