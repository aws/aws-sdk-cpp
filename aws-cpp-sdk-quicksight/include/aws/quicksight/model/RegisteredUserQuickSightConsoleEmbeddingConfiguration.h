/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>Information about the Amazon QuickSight console that you want to
   * embed.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/RegisteredUserQuickSightConsoleEmbeddingConfiguration">AWS
   * API Reference</a></p>
   */
  class RegisteredUserQuickSightConsoleEmbeddingConfiguration
  {
  public:
    AWS_QUICKSIGHT_API RegisteredUserQuickSightConsoleEmbeddingConfiguration();
    AWS_QUICKSIGHT_API RegisteredUserQuickSightConsoleEmbeddingConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API RegisteredUserQuickSightConsoleEmbeddingConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The initial URL path for the Amazon QuickSight console.
     * <code>InitialPath</code> is required.</p> <p>The entry point URL is constrained
     * to the following paths:</p> <ul> <li> <p> <code>/start</code> </p> </li> <li>
     * <p> <code>/start/analyses</code> </p> </li> <li> <p>
     * <code>/start/dashboards</code> </p> </li> <li> <p> <code>/start/favorites</code>
     * </p> </li> <li> <p> <code>/dashboards/DashboardId</code>. <i>DashboardId</i> is
     * the actual ID key from the Amazon QuickSight console URL of the dashboard.</p>
     * </li> <li> <p> <code>/analyses/AnalysisId</code>. <i>AnalysisId</i> is the
     * actual ID key from the Amazon QuickSight console URL of the analysis.</p> </li>
     * </ul>
     */
    inline const Aws::String& GetInitialPath() const{ return m_initialPath; }

    /**
     * <p>The initial URL path for the Amazon QuickSight console.
     * <code>InitialPath</code> is required.</p> <p>The entry point URL is constrained
     * to the following paths:</p> <ul> <li> <p> <code>/start</code> </p> </li> <li>
     * <p> <code>/start/analyses</code> </p> </li> <li> <p>
     * <code>/start/dashboards</code> </p> </li> <li> <p> <code>/start/favorites</code>
     * </p> </li> <li> <p> <code>/dashboards/DashboardId</code>. <i>DashboardId</i> is
     * the actual ID key from the Amazon QuickSight console URL of the dashboard.</p>
     * </li> <li> <p> <code>/analyses/AnalysisId</code>. <i>AnalysisId</i> is the
     * actual ID key from the Amazon QuickSight console URL of the analysis.</p> </li>
     * </ul>
     */
    inline bool InitialPathHasBeenSet() const { return m_initialPathHasBeenSet; }

    /**
     * <p>The initial URL path for the Amazon QuickSight console.
     * <code>InitialPath</code> is required.</p> <p>The entry point URL is constrained
     * to the following paths:</p> <ul> <li> <p> <code>/start</code> </p> </li> <li>
     * <p> <code>/start/analyses</code> </p> </li> <li> <p>
     * <code>/start/dashboards</code> </p> </li> <li> <p> <code>/start/favorites</code>
     * </p> </li> <li> <p> <code>/dashboards/DashboardId</code>. <i>DashboardId</i> is
     * the actual ID key from the Amazon QuickSight console URL of the dashboard.</p>
     * </li> <li> <p> <code>/analyses/AnalysisId</code>. <i>AnalysisId</i> is the
     * actual ID key from the Amazon QuickSight console URL of the analysis.</p> </li>
     * </ul>
     */
    inline void SetInitialPath(const Aws::String& value) { m_initialPathHasBeenSet = true; m_initialPath = value; }

    /**
     * <p>The initial URL path for the Amazon QuickSight console.
     * <code>InitialPath</code> is required.</p> <p>The entry point URL is constrained
     * to the following paths:</p> <ul> <li> <p> <code>/start</code> </p> </li> <li>
     * <p> <code>/start/analyses</code> </p> </li> <li> <p>
     * <code>/start/dashboards</code> </p> </li> <li> <p> <code>/start/favorites</code>
     * </p> </li> <li> <p> <code>/dashboards/DashboardId</code>. <i>DashboardId</i> is
     * the actual ID key from the Amazon QuickSight console URL of the dashboard.</p>
     * </li> <li> <p> <code>/analyses/AnalysisId</code>. <i>AnalysisId</i> is the
     * actual ID key from the Amazon QuickSight console URL of the analysis.</p> </li>
     * </ul>
     */
    inline void SetInitialPath(Aws::String&& value) { m_initialPathHasBeenSet = true; m_initialPath = std::move(value); }

    /**
     * <p>The initial URL path for the Amazon QuickSight console.
     * <code>InitialPath</code> is required.</p> <p>The entry point URL is constrained
     * to the following paths:</p> <ul> <li> <p> <code>/start</code> </p> </li> <li>
     * <p> <code>/start/analyses</code> </p> </li> <li> <p>
     * <code>/start/dashboards</code> </p> </li> <li> <p> <code>/start/favorites</code>
     * </p> </li> <li> <p> <code>/dashboards/DashboardId</code>. <i>DashboardId</i> is
     * the actual ID key from the Amazon QuickSight console URL of the dashboard.</p>
     * </li> <li> <p> <code>/analyses/AnalysisId</code>. <i>AnalysisId</i> is the
     * actual ID key from the Amazon QuickSight console URL of the analysis.</p> </li>
     * </ul>
     */
    inline void SetInitialPath(const char* value) { m_initialPathHasBeenSet = true; m_initialPath.assign(value); }

    /**
     * <p>The initial URL path for the Amazon QuickSight console.
     * <code>InitialPath</code> is required.</p> <p>The entry point URL is constrained
     * to the following paths:</p> <ul> <li> <p> <code>/start</code> </p> </li> <li>
     * <p> <code>/start/analyses</code> </p> </li> <li> <p>
     * <code>/start/dashboards</code> </p> </li> <li> <p> <code>/start/favorites</code>
     * </p> </li> <li> <p> <code>/dashboards/DashboardId</code>. <i>DashboardId</i> is
     * the actual ID key from the Amazon QuickSight console URL of the dashboard.</p>
     * </li> <li> <p> <code>/analyses/AnalysisId</code>. <i>AnalysisId</i> is the
     * actual ID key from the Amazon QuickSight console URL of the analysis.</p> </li>
     * </ul>
     */
    inline RegisteredUserQuickSightConsoleEmbeddingConfiguration& WithInitialPath(const Aws::String& value) { SetInitialPath(value); return *this;}

    /**
     * <p>The initial URL path for the Amazon QuickSight console.
     * <code>InitialPath</code> is required.</p> <p>The entry point URL is constrained
     * to the following paths:</p> <ul> <li> <p> <code>/start</code> </p> </li> <li>
     * <p> <code>/start/analyses</code> </p> </li> <li> <p>
     * <code>/start/dashboards</code> </p> </li> <li> <p> <code>/start/favorites</code>
     * </p> </li> <li> <p> <code>/dashboards/DashboardId</code>. <i>DashboardId</i> is
     * the actual ID key from the Amazon QuickSight console URL of the dashboard.</p>
     * </li> <li> <p> <code>/analyses/AnalysisId</code>. <i>AnalysisId</i> is the
     * actual ID key from the Amazon QuickSight console URL of the analysis.</p> </li>
     * </ul>
     */
    inline RegisteredUserQuickSightConsoleEmbeddingConfiguration& WithInitialPath(Aws::String&& value) { SetInitialPath(std::move(value)); return *this;}

    /**
     * <p>The initial URL path for the Amazon QuickSight console.
     * <code>InitialPath</code> is required.</p> <p>The entry point URL is constrained
     * to the following paths:</p> <ul> <li> <p> <code>/start</code> </p> </li> <li>
     * <p> <code>/start/analyses</code> </p> </li> <li> <p>
     * <code>/start/dashboards</code> </p> </li> <li> <p> <code>/start/favorites</code>
     * </p> </li> <li> <p> <code>/dashboards/DashboardId</code>. <i>DashboardId</i> is
     * the actual ID key from the Amazon QuickSight console URL of the dashboard.</p>
     * </li> <li> <p> <code>/analyses/AnalysisId</code>. <i>AnalysisId</i> is the
     * actual ID key from the Amazon QuickSight console URL of the analysis.</p> </li>
     * </ul>
     */
    inline RegisteredUserQuickSightConsoleEmbeddingConfiguration& WithInitialPath(const char* value) { SetInitialPath(value); return *this;}

  private:

    Aws::String m_initialPath;
    bool m_initialPathHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
