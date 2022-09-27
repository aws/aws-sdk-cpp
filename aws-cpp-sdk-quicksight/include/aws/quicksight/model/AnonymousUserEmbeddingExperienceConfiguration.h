/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/AnonymousUserDashboardEmbeddingConfiguration.h>
#include <aws/quicksight/model/AnonymousUserDashboardVisualEmbeddingConfiguration.h>
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
   * Amazon QuickSight dashboards.</p><p><h3>See Also:</h3>   <a
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
     * <p>The type of embedding experience. In this case, Amazon QuickSight
     * dashboards.</p>
     */
    inline const AnonymousUserDashboardEmbeddingConfiguration& GetDashboard() const{ return m_dashboard; }

    /**
     * <p>The type of embedding experience. In this case, Amazon QuickSight
     * dashboards.</p>
     */
    inline bool DashboardHasBeenSet() const { return m_dashboardHasBeenSet; }

    /**
     * <p>The type of embedding experience. In this case, Amazon QuickSight
     * dashboards.</p>
     */
    inline void SetDashboard(const AnonymousUserDashboardEmbeddingConfiguration& value) { m_dashboardHasBeenSet = true; m_dashboard = value; }

    /**
     * <p>The type of embedding experience. In this case, Amazon QuickSight
     * dashboards.</p>
     */
    inline void SetDashboard(AnonymousUserDashboardEmbeddingConfiguration&& value) { m_dashboardHasBeenSet = true; m_dashboard = std::move(value); }

    /**
     * <p>The type of embedding experience. In this case, Amazon QuickSight
     * dashboards.</p>
     */
    inline AnonymousUserEmbeddingExperienceConfiguration& WithDashboard(const AnonymousUserDashboardEmbeddingConfiguration& value) { SetDashboard(value); return *this;}

    /**
     * <p>The type of embedding experience. In this case, Amazon QuickSight
     * dashboards.</p>
     */
    inline AnonymousUserEmbeddingExperienceConfiguration& WithDashboard(AnonymousUserDashboardEmbeddingConfiguration&& value) { SetDashboard(std::move(value)); return *this;}


    /**
     * <p>The type of embedding experience. In this case, Amazon QuickSight
     * visuals.</p>
     */
    inline const AnonymousUserDashboardVisualEmbeddingConfiguration& GetDashboardVisual() const{ return m_dashboardVisual; }

    /**
     * <p>The type of embedding experience. In this case, Amazon QuickSight
     * visuals.</p>
     */
    inline bool DashboardVisualHasBeenSet() const { return m_dashboardVisualHasBeenSet; }

    /**
     * <p>The type of embedding experience. In this case, Amazon QuickSight
     * visuals.</p>
     */
    inline void SetDashboardVisual(const AnonymousUserDashboardVisualEmbeddingConfiguration& value) { m_dashboardVisualHasBeenSet = true; m_dashboardVisual = value; }

    /**
     * <p>The type of embedding experience. In this case, Amazon QuickSight
     * visuals.</p>
     */
    inline void SetDashboardVisual(AnonymousUserDashboardVisualEmbeddingConfiguration&& value) { m_dashboardVisualHasBeenSet = true; m_dashboardVisual = std::move(value); }

    /**
     * <p>The type of embedding experience. In this case, Amazon QuickSight
     * visuals.</p>
     */
    inline AnonymousUserEmbeddingExperienceConfiguration& WithDashboardVisual(const AnonymousUserDashboardVisualEmbeddingConfiguration& value) { SetDashboardVisual(value); return *this;}

    /**
     * <p>The type of embedding experience. In this case, Amazon QuickSight
     * visuals.</p>
     */
    inline AnonymousUserEmbeddingExperienceConfiguration& WithDashboardVisual(AnonymousUserDashboardVisualEmbeddingConfiguration&& value) { SetDashboardVisual(std::move(value)); return *this;}

  private:

    AnonymousUserDashboardEmbeddingConfiguration m_dashboard;
    bool m_dashboardHasBeenSet = false;

    AnonymousUserDashboardVisualEmbeddingConfiguration m_dashboardVisual;
    bool m_dashboardVisualHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
