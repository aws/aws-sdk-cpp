/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/devops-guru/DevOpsGuru_EXPORTS.h>
#include <aws/devops-guru/model/ListInsightsAnyStatusFilter.h>
#include <aws/devops-guru/model/ListInsightsClosedStatusFilter.h>
#include <aws/devops-guru/model/ListInsightsOngoingStatusFilter.h>
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

  class AWS_DEVOPSGURU_API ListInsightsStatusFilter
  {
  public:
    ListInsightsStatusFilter();
    ListInsightsStatusFilter(Aws::Utils::Json::JsonView jsonValue);
    ListInsightsStatusFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const ListInsightsAnyStatusFilter& GetAny() const{ return m_any; }

    
    inline bool AnyHasBeenSet() const { return m_anyHasBeenSet; }

    
    inline void SetAny(const ListInsightsAnyStatusFilter& value) { m_anyHasBeenSet = true; m_any = value; }

    
    inline void SetAny(ListInsightsAnyStatusFilter&& value) { m_anyHasBeenSet = true; m_any = std::move(value); }

    
    inline ListInsightsStatusFilter& WithAny(const ListInsightsAnyStatusFilter& value) { SetAny(value); return *this;}

    
    inline ListInsightsStatusFilter& WithAny(ListInsightsAnyStatusFilter&& value) { SetAny(std::move(value)); return *this;}


    
    inline const ListInsightsClosedStatusFilter& GetClosed() const{ return m_closed; }

    
    inline bool ClosedHasBeenSet() const { return m_closedHasBeenSet; }

    
    inline void SetClosed(const ListInsightsClosedStatusFilter& value) { m_closedHasBeenSet = true; m_closed = value; }

    
    inline void SetClosed(ListInsightsClosedStatusFilter&& value) { m_closedHasBeenSet = true; m_closed = std::move(value); }

    
    inline ListInsightsStatusFilter& WithClosed(const ListInsightsClosedStatusFilter& value) { SetClosed(value); return *this;}

    
    inline ListInsightsStatusFilter& WithClosed(ListInsightsClosedStatusFilter&& value) { SetClosed(std::move(value)); return *this;}


    
    inline const ListInsightsOngoingStatusFilter& GetOngoing() const{ return m_ongoing; }

    
    inline bool OngoingHasBeenSet() const { return m_ongoingHasBeenSet; }

    
    inline void SetOngoing(const ListInsightsOngoingStatusFilter& value) { m_ongoingHasBeenSet = true; m_ongoing = value; }

    
    inline void SetOngoing(ListInsightsOngoingStatusFilter&& value) { m_ongoingHasBeenSet = true; m_ongoing = std::move(value); }

    
    inline ListInsightsStatusFilter& WithOngoing(const ListInsightsOngoingStatusFilter& value) { SetOngoing(value); return *this;}

    
    inline ListInsightsStatusFilter& WithOngoing(ListInsightsOngoingStatusFilter&& value) { SetOngoing(std::move(value)); return *this;}

  private:

    ListInsightsAnyStatusFilter m_any;
    bool m_anyHasBeenSet;

    ListInsightsClosedStatusFilter m_closed;
    bool m_closedHasBeenSet;

    ListInsightsOngoingStatusFilter m_ongoing;
    bool m_ongoingHasBeenSet;
  };

} // namespace Model
} // namespace DevOpsGuru
} // namespace Aws
