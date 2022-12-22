/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/model/DashboardVersion.h>
#include <aws/core/utils/DateTime.h>
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
   * <p>Dashboard.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/Dashboard">AWS
   * API Reference</a></p>
   */
  class Dashboard
  {
  public:
    AWS_QUICKSIGHT_API Dashboard();
    AWS_QUICKSIGHT_API Dashboard(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Dashboard& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Dashboard ID.</p>
     */
    inline const Aws::String& GetDashboardId() const{ return m_dashboardId; }

    /**
     * <p>Dashboard ID.</p>
     */
    inline bool DashboardIdHasBeenSet() const { return m_dashboardIdHasBeenSet; }

    /**
     * <p>Dashboard ID.</p>
     */
    inline void SetDashboardId(const Aws::String& value) { m_dashboardIdHasBeenSet = true; m_dashboardId = value; }

    /**
     * <p>Dashboard ID.</p>
     */
    inline void SetDashboardId(Aws::String&& value) { m_dashboardIdHasBeenSet = true; m_dashboardId = std::move(value); }

    /**
     * <p>Dashboard ID.</p>
     */
    inline void SetDashboardId(const char* value) { m_dashboardIdHasBeenSet = true; m_dashboardId.assign(value); }

    /**
     * <p>Dashboard ID.</p>
     */
    inline Dashboard& WithDashboardId(const Aws::String& value) { SetDashboardId(value); return *this;}

    /**
     * <p>Dashboard ID.</p>
     */
    inline Dashboard& WithDashboardId(Aws::String&& value) { SetDashboardId(std::move(value)); return *this;}

    /**
     * <p>Dashboard ID.</p>
     */
    inline Dashboard& WithDashboardId(const char* value) { SetDashboardId(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the resource.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the resource.</p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the resource.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the resource.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the resource.</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the resource.</p>
     */
    inline Dashboard& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the resource.</p>
     */
    inline Dashboard& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the resource.</p>
     */
    inline Dashboard& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>A display name for the dashboard.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>A display name for the dashboard.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>A display name for the dashboard.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>A display name for the dashboard.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>A display name for the dashboard.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>A display name for the dashboard.</p>
     */
    inline Dashboard& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>A display name for the dashboard.</p>
     */
    inline Dashboard& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>A display name for the dashboard.</p>
     */
    inline Dashboard& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>Version.</p>
     */
    inline const DashboardVersion& GetVersion() const{ return m_version; }

    /**
     * <p>Version.</p>
     */
    inline bool VersionHasBeenSet() const { return m_versionHasBeenSet; }

    /**
     * <p>Version.</p>
     */
    inline void SetVersion(const DashboardVersion& value) { m_versionHasBeenSet = true; m_version = value; }

    /**
     * <p>Version.</p>
     */
    inline void SetVersion(DashboardVersion&& value) { m_versionHasBeenSet = true; m_version = std::move(value); }

    /**
     * <p>Version.</p>
     */
    inline Dashboard& WithVersion(const DashboardVersion& value) { SetVersion(value); return *this;}

    /**
     * <p>Version.</p>
     */
    inline Dashboard& WithVersion(DashboardVersion&& value) { SetVersion(std::move(value)); return *this;}


    /**
     * <p>The time that this dashboard was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTime() const{ return m_createdTime; }

    /**
     * <p>The time that this dashboard was created.</p>
     */
    inline bool CreatedTimeHasBeenSet() const { return m_createdTimeHasBeenSet; }

    /**
     * <p>The time that this dashboard was created.</p>
     */
    inline void SetCreatedTime(const Aws::Utils::DateTime& value) { m_createdTimeHasBeenSet = true; m_createdTime = value; }

    /**
     * <p>The time that this dashboard was created.</p>
     */
    inline void SetCreatedTime(Aws::Utils::DateTime&& value) { m_createdTimeHasBeenSet = true; m_createdTime = std::move(value); }

    /**
     * <p>The time that this dashboard was created.</p>
     */
    inline Dashboard& WithCreatedTime(const Aws::Utils::DateTime& value) { SetCreatedTime(value); return *this;}

    /**
     * <p>The time that this dashboard was created.</p>
     */
    inline Dashboard& WithCreatedTime(Aws::Utils::DateTime&& value) { SetCreatedTime(std::move(value)); return *this;}


    /**
     * <p>The last time that this dashboard was published.</p>
     */
    inline const Aws::Utils::DateTime& GetLastPublishedTime() const{ return m_lastPublishedTime; }

    /**
     * <p>The last time that this dashboard was published.</p>
     */
    inline bool LastPublishedTimeHasBeenSet() const { return m_lastPublishedTimeHasBeenSet; }

    /**
     * <p>The last time that this dashboard was published.</p>
     */
    inline void SetLastPublishedTime(const Aws::Utils::DateTime& value) { m_lastPublishedTimeHasBeenSet = true; m_lastPublishedTime = value; }

    /**
     * <p>The last time that this dashboard was published.</p>
     */
    inline void SetLastPublishedTime(Aws::Utils::DateTime&& value) { m_lastPublishedTimeHasBeenSet = true; m_lastPublishedTime = std::move(value); }

    /**
     * <p>The last time that this dashboard was published.</p>
     */
    inline Dashboard& WithLastPublishedTime(const Aws::Utils::DateTime& value) { SetLastPublishedTime(value); return *this;}

    /**
     * <p>The last time that this dashboard was published.</p>
     */
    inline Dashboard& WithLastPublishedTime(Aws::Utils::DateTime&& value) { SetLastPublishedTime(std::move(value)); return *this;}


    /**
     * <p>The last time that this dashboard was updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedTime() const{ return m_lastUpdatedTime; }

    /**
     * <p>The last time that this dashboard was updated.</p>
     */
    inline bool LastUpdatedTimeHasBeenSet() const { return m_lastUpdatedTimeHasBeenSet; }

    /**
     * <p>The last time that this dashboard was updated.</p>
     */
    inline void SetLastUpdatedTime(const Aws::Utils::DateTime& value) { m_lastUpdatedTimeHasBeenSet = true; m_lastUpdatedTime = value; }

    /**
     * <p>The last time that this dashboard was updated.</p>
     */
    inline void SetLastUpdatedTime(Aws::Utils::DateTime&& value) { m_lastUpdatedTimeHasBeenSet = true; m_lastUpdatedTime = std::move(value); }

    /**
     * <p>The last time that this dashboard was updated.</p>
     */
    inline Dashboard& WithLastUpdatedTime(const Aws::Utils::DateTime& value) { SetLastUpdatedTime(value); return *this;}

    /**
     * <p>The last time that this dashboard was updated.</p>
     */
    inline Dashboard& WithLastUpdatedTime(Aws::Utils::DateTime&& value) { SetLastUpdatedTime(std::move(value)); return *this;}

  private:

    Aws::String m_dashboardId;
    bool m_dashboardIdHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    DashboardVersion m_version;
    bool m_versionHasBeenSet = false;

    Aws::Utils::DateTime m_createdTime;
    bool m_createdTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastPublishedTime;
    bool m_lastPublishedTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdatedTime;
    bool m_lastUpdatedTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
