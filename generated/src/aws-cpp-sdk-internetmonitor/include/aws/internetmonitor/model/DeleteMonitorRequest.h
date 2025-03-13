/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/internetmonitor/InternetMonitor_EXPORTS.h>
#include <aws/internetmonitor/InternetMonitorRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace InternetMonitor
{
namespace Model
{

  /**
   */
  class DeleteMonitorRequest : public InternetMonitorRequest
  {
  public:
    AWS_INTERNETMONITOR_API DeleteMonitorRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteMonitor"; }

    AWS_INTERNETMONITOR_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The name of the monitor to delete.</p>
     */
    inline const Aws::String& GetMonitorName() const { return m_monitorName; }
    inline bool MonitorNameHasBeenSet() const { return m_monitorNameHasBeenSet; }
    template<typename MonitorNameT = Aws::String>
    void SetMonitorName(MonitorNameT&& value) { m_monitorNameHasBeenSet = true; m_monitorName = std::forward<MonitorNameT>(value); }
    template<typename MonitorNameT = Aws::String>
    DeleteMonitorRequest& WithMonitorName(MonitorNameT&& value) { SetMonitorName(std::forward<MonitorNameT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_monitorName;
    bool m_monitorNameHasBeenSet = false;
  };

} // namespace Model
} // namespace InternetMonitor
} // namespace Aws
