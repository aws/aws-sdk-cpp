/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fis/FIS_EXPORTS.h>
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
namespace FIS
{
namespace Model
{

  /**
   * <p>Specifies the CloudWatch dashboard for the experiment report.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/fis-2020-12-01/ReportConfigurationCloudWatchDashboardInput">AWS
   * API Reference</a></p>
   */
  class ReportConfigurationCloudWatchDashboardInput
  {
  public:
    AWS_FIS_API ReportConfigurationCloudWatchDashboardInput();
    AWS_FIS_API ReportConfigurationCloudWatchDashboardInput(Aws::Utils::Json::JsonView jsonValue);
    AWS_FIS_API ReportConfigurationCloudWatchDashboardInput& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FIS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the CloudWatch dashboard to include in the
     * experiment report.</p>
     */
    inline const Aws::String& GetDashboardIdentifier() const{ return m_dashboardIdentifier; }
    inline bool DashboardIdentifierHasBeenSet() const { return m_dashboardIdentifierHasBeenSet; }
    inline void SetDashboardIdentifier(const Aws::String& value) { m_dashboardIdentifierHasBeenSet = true; m_dashboardIdentifier = value; }
    inline void SetDashboardIdentifier(Aws::String&& value) { m_dashboardIdentifierHasBeenSet = true; m_dashboardIdentifier = std::move(value); }
    inline void SetDashboardIdentifier(const char* value) { m_dashboardIdentifierHasBeenSet = true; m_dashboardIdentifier.assign(value); }
    inline ReportConfigurationCloudWatchDashboardInput& WithDashboardIdentifier(const Aws::String& value) { SetDashboardIdentifier(value); return *this;}
    inline ReportConfigurationCloudWatchDashboardInput& WithDashboardIdentifier(Aws::String&& value) { SetDashboardIdentifier(std::move(value)); return *this;}
    inline ReportConfigurationCloudWatchDashboardInput& WithDashboardIdentifier(const char* value) { SetDashboardIdentifier(value); return *this;}
    ///@}
  private:

    Aws::String m_dashboardIdentifier;
    bool m_dashboardIdentifierHasBeenSet = false;
  };

} // namespace Model
} // namespace FIS
} // namespace Aws
