﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/AnonymousUserDashboardEmbeddingConfiguration.h>
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
   * <p>The type of experience you want to embed. For anonymous users, you can embed
   * an Amazon QuickSight dashboard.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/AnonymousUserEmbeddingExperienceConfiguration">AWS
   * API Reference</a></p>
   */
  class AWS_QUICKSIGHT_API AnonymousUserEmbeddingExperienceConfiguration
  {
  public:
    AnonymousUserEmbeddingExperienceConfiguration();
    AnonymousUserEmbeddingExperienceConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AnonymousUserEmbeddingExperienceConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The type of embedding experience. In this case, an Amazon QuickSight
     * dashboard.</p>
     */
    inline const AnonymousUserDashboardEmbeddingConfiguration& GetDashboard() const{ return m_dashboard; }

    /**
     * <p>The type of embedding experience. In this case, an Amazon QuickSight
     * dashboard.</p>
     */
    inline bool DashboardHasBeenSet() const { return m_dashboardHasBeenSet; }

    /**
     * <p>The type of embedding experience. In this case, an Amazon QuickSight
     * dashboard.</p>
     */
    inline void SetDashboard(const AnonymousUserDashboardEmbeddingConfiguration& value) { m_dashboardHasBeenSet = true; m_dashboard = value; }

    /**
     * <p>The type of embedding experience. In this case, an Amazon QuickSight
     * dashboard.</p>
     */
    inline void SetDashboard(AnonymousUserDashboardEmbeddingConfiguration&& value) { m_dashboardHasBeenSet = true; m_dashboard = std::move(value); }

    /**
     * <p>The type of embedding experience. In this case, an Amazon QuickSight
     * dashboard.</p>
     */
    inline AnonymousUserEmbeddingExperienceConfiguration& WithDashboard(const AnonymousUserDashboardEmbeddingConfiguration& value) { SetDashboard(value); return *this;}

    /**
     * <p>The type of embedding experience. In this case, an Amazon QuickSight
     * dashboard.</p>
     */
    inline AnonymousUserEmbeddingExperienceConfiguration& WithDashboard(AnonymousUserDashboardEmbeddingConfiguration&& value) { SetDashboard(std::move(value)); return *this;}

  private:

    AnonymousUserDashboardEmbeddingConfiguration m_dashboard;
    bool m_dashboardHasBeenSet;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
