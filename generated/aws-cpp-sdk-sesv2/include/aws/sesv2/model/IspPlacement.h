﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sesv2/SESV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sesv2/model/PlacementStatistics.h>
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
namespace SESV2
{
namespace Model
{

  /**
   * <p>An object that describes how email sent during the predictive inbox placement
   * test was handled by a certain email provider.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/IspPlacement">AWS
   * API Reference</a></p>
   */
  class AWS_SESV2_API IspPlacement
  {
  public:
    IspPlacement();
    IspPlacement(Aws::Utils::Json::JsonView jsonValue);
    IspPlacement& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the email provider that the inbox placement data applies to.</p>
     */
    inline const Aws::String& GetIspName() const{ return m_ispName; }

    /**
     * <p>The name of the email provider that the inbox placement data applies to.</p>
     */
    inline bool IspNameHasBeenSet() const { return m_ispNameHasBeenSet; }

    /**
     * <p>The name of the email provider that the inbox placement data applies to.</p>
     */
    inline void SetIspName(const Aws::String& value) { m_ispNameHasBeenSet = true; m_ispName = value; }

    /**
     * <p>The name of the email provider that the inbox placement data applies to.</p>
     */
    inline void SetIspName(Aws::String&& value) { m_ispNameHasBeenSet = true; m_ispName = std::move(value); }

    /**
     * <p>The name of the email provider that the inbox placement data applies to.</p>
     */
    inline void SetIspName(const char* value) { m_ispNameHasBeenSet = true; m_ispName.assign(value); }

    /**
     * <p>The name of the email provider that the inbox placement data applies to.</p>
     */
    inline IspPlacement& WithIspName(const Aws::String& value) { SetIspName(value); return *this;}

    /**
     * <p>The name of the email provider that the inbox placement data applies to.</p>
     */
    inline IspPlacement& WithIspName(Aws::String&& value) { SetIspName(std::move(value)); return *this;}

    /**
     * <p>The name of the email provider that the inbox placement data applies to.</p>
     */
    inline IspPlacement& WithIspName(const char* value) { SetIspName(value); return *this;}


    /**
     * <p>An object that contains inbox placement metrics for a specific email
     * provider.</p>
     */
    inline const PlacementStatistics& GetPlacementStatistics() const{ return m_placementStatistics; }

    /**
     * <p>An object that contains inbox placement metrics for a specific email
     * provider.</p>
     */
    inline bool PlacementStatisticsHasBeenSet() const { return m_placementStatisticsHasBeenSet; }

    /**
     * <p>An object that contains inbox placement metrics for a specific email
     * provider.</p>
     */
    inline void SetPlacementStatistics(const PlacementStatistics& value) { m_placementStatisticsHasBeenSet = true; m_placementStatistics = value; }

    /**
     * <p>An object that contains inbox placement metrics for a specific email
     * provider.</p>
     */
    inline void SetPlacementStatistics(PlacementStatistics&& value) { m_placementStatisticsHasBeenSet = true; m_placementStatistics = std::move(value); }

    /**
     * <p>An object that contains inbox placement metrics for a specific email
     * provider.</p>
     */
    inline IspPlacement& WithPlacementStatistics(const PlacementStatistics& value) { SetPlacementStatistics(value); return *this;}

    /**
     * <p>An object that contains inbox placement metrics for a specific email
     * provider.</p>
     */
    inline IspPlacement& WithPlacementStatistics(PlacementStatistics&& value) { SetPlacementStatistics(std::move(value)); return *this;}

  private:

    Aws::String m_ispName;
    bool m_ispNameHasBeenSet;

    PlacementStatistics m_placementStatistics;
    bool m_placementStatisticsHasBeenSet;
  };

} // namespace Model
} // namespace SESV2
} // namespace Aws
