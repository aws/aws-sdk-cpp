﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/DashboardBehavior.h>
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
namespace QuickSight
{
namespace Model
{

  /**
   * <p>Ad hoc (one-time) filtering option.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/AdHocFilteringOption">AWS
   * API Reference</a></p>
   */
  class AWS_QUICKSIGHT_API AdHocFilteringOption
  {
  public:
    AdHocFilteringOption();
    AdHocFilteringOption(Aws::Utils::Json::JsonView jsonValue);
    AdHocFilteringOption& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Availability status.</p>
     */
    inline const DashboardBehavior& GetAvailabilityStatus() const{ return m_availabilityStatus; }

    /**
     * <p>Availability status.</p>
     */
    inline bool AvailabilityStatusHasBeenSet() const { return m_availabilityStatusHasBeenSet; }

    /**
     * <p>Availability status.</p>
     */
    inline void SetAvailabilityStatus(const DashboardBehavior& value) { m_availabilityStatusHasBeenSet = true; m_availabilityStatus = value; }

    /**
     * <p>Availability status.</p>
     */
    inline void SetAvailabilityStatus(DashboardBehavior&& value) { m_availabilityStatusHasBeenSet = true; m_availabilityStatus = std::move(value); }

    /**
     * <p>Availability status.</p>
     */
    inline AdHocFilteringOption& WithAvailabilityStatus(const DashboardBehavior& value) { SetAvailabilityStatus(value); return *this;}

    /**
     * <p>Availability status.</p>
     */
    inline AdHocFilteringOption& WithAvailabilityStatus(DashboardBehavior&& value) { SetAvailabilityStatus(std::move(value)); return *this;}

  private:

    DashboardBehavior m_availabilityStatus;
    bool m_availabilityStatusHasBeenSet;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
