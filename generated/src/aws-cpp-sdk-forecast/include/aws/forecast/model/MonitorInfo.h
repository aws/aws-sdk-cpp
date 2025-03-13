/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/forecast/ForecastService_EXPORTS.h>
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
namespace ForecastService
{
namespace Model
{

  /**
   * <p>Provides information about the monitor resource.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/forecast-2018-06-26/MonitorInfo">AWS
   * API Reference</a></p>
   */
  class MonitorInfo
  {
  public:
    AWS_FORECASTSERVICE_API MonitorInfo() = default;
    AWS_FORECASTSERVICE_API MonitorInfo(Aws::Utils::Json::JsonView jsonValue);
    AWS_FORECASTSERVICE_API MonitorInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FORECASTSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the monitor resource.</p>
     */
    inline const Aws::String& GetMonitorArn() const { return m_monitorArn; }
    inline bool MonitorArnHasBeenSet() const { return m_monitorArnHasBeenSet; }
    template<typename MonitorArnT = Aws::String>
    void SetMonitorArn(MonitorArnT&& value) { m_monitorArnHasBeenSet = true; m_monitorArn = std::forward<MonitorArnT>(value); }
    template<typename MonitorArnT = Aws::String>
    MonitorInfo& WithMonitorArn(MonitorArnT&& value) { SetMonitorArn(std::forward<MonitorArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the monitor. States include:</p> <ul> <li> <p>
     * <code>ACTIVE</code> </p> </li> <li> <p> <code>ACTIVE_STOPPING</code>,
     * <code>ACTIVE_STOPPED</code> </p> </li> <li> <p> <code>UPDATE_IN_PROGRESS</code>
     * </p> </li> <li> <p> <code>CREATE_PENDING</code>,
     * <code>CREATE_IN_PROGRESS</code>, <code>CREATE_FAILED</code> </p> </li> <li> <p>
     * <code>DELETE_PENDING</code>, <code>DELETE_IN_PROGRESS</code>,
     * <code>DELETE_FAILED</code> </p> </li> </ul>
     */
    inline const Aws::String& GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    template<typename StatusT = Aws::String>
    void SetStatus(StatusT&& value) { m_statusHasBeenSet = true; m_status = std::forward<StatusT>(value); }
    template<typename StatusT = Aws::String>
    MonitorInfo& WithStatus(StatusT&& value) { SetStatus(std::forward<StatusT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_monitorArn;
    bool m_monitorArnHasBeenSet = false;

    Aws::String m_status;
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace ForecastService
} // namespace Aws
