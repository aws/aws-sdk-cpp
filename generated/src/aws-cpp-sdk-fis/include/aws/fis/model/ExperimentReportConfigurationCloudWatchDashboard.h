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
   * <p>Specifies the CloudWatch dashboard to include in the experiment report. The
   * dashboard widgets will be captured as snapshot graphs within the
   * report.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/fis-2020-12-01/ExperimentReportConfigurationCloudWatchDashboard">AWS
   * API Reference</a></p>
   */
  class ExperimentReportConfigurationCloudWatchDashboard
  {
  public:
    AWS_FIS_API ExperimentReportConfigurationCloudWatchDashboard() = default;
    AWS_FIS_API ExperimentReportConfigurationCloudWatchDashboard(Aws::Utils::Json::JsonView jsonValue);
    AWS_FIS_API ExperimentReportConfigurationCloudWatchDashboard& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FIS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the CloudWatch dashboard to include in the
     * experiment report.</p>
     */
    inline const Aws::String& GetDashboardIdentifier() const { return m_dashboardIdentifier; }
    inline bool DashboardIdentifierHasBeenSet() const { return m_dashboardIdentifierHasBeenSet; }
    template<typename DashboardIdentifierT = Aws::String>
    void SetDashboardIdentifier(DashboardIdentifierT&& value) { m_dashboardIdentifierHasBeenSet = true; m_dashboardIdentifier = std::forward<DashboardIdentifierT>(value); }
    template<typename DashboardIdentifierT = Aws::String>
    ExperimentReportConfigurationCloudWatchDashboard& WithDashboardIdentifier(DashboardIdentifierT&& value) { SetDashboardIdentifier(std::forward<DashboardIdentifierT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_dashboardIdentifier;
    bool m_dashboardIdentifierHasBeenSet = false;
  };

} // namespace Model
} // namespace FIS
} // namespace Aws
