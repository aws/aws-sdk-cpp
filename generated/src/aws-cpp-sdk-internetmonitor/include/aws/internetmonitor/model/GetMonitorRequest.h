﻿/**
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
namespace Http
{
    class URI;
} //namespace Http
namespace InternetMonitor
{
namespace Model
{

  /**
   */
  class GetMonitorRequest : public InternetMonitorRequest
  {
  public:
    AWS_INTERNETMONITOR_API GetMonitorRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetMonitor"; }

    AWS_INTERNETMONITOR_API Aws::String SerializePayload() const override;

    AWS_INTERNETMONITOR_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p>The name of the monitor.</p>
     */
    inline const Aws::String& GetMonitorName() const{ return m_monitorName; }
    inline bool MonitorNameHasBeenSet() const { return m_monitorNameHasBeenSet; }
    inline void SetMonitorName(const Aws::String& value) { m_monitorNameHasBeenSet = true; m_monitorName = value; }
    inline void SetMonitorName(Aws::String&& value) { m_monitorNameHasBeenSet = true; m_monitorName = std::move(value); }
    inline void SetMonitorName(const char* value) { m_monitorNameHasBeenSet = true; m_monitorName.assign(value); }
    inline GetMonitorRequest& WithMonitorName(const Aws::String& value) { SetMonitorName(value); return *this;}
    inline GetMonitorRequest& WithMonitorName(Aws::String&& value) { SetMonitorName(std::move(value)); return *this;}
    inline GetMonitorRequest& WithMonitorName(const char* value) { SetMonitorName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The account ID for an account that you've set up cross-account sharing for in
     * Amazon CloudWatch Internet Monitor. You configure cross-account sharing by using
     * Amazon CloudWatch Observability Access Manager. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/cwim-cross-account.html">Internet
     * Monitor cross-account observability</a> in the Amazon CloudWatch Internet
     * Monitor User Guide.</p>
     */
    inline const Aws::String& GetLinkedAccountId() const{ return m_linkedAccountId; }
    inline bool LinkedAccountIdHasBeenSet() const { return m_linkedAccountIdHasBeenSet; }
    inline void SetLinkedAccountId(const Aws::String& value) { m_linkedAccountIdHasBeenSet = true; m_linkedAccountId = value; }
    inline void SetLinkedAccountId(Aws::String&& value) { m_linkedAccountIdHasBeenSet = true; m_linkedAccountId = std::move(value); }
    inline void SetLinkedAccountId(const char* value) { m_linkedAccountIdHasBeenSet = true; m_linkedAccountId.assign(value); }
    inline GetMonitorRequest& WithLinkedAccountId(const Aws::String& value) { SetLinkedAccountId(value); return *this;}
    inline GetMonitorRequest& WithLinkedAccountId(Aws::String&& value) { SetLinkedAccountId(std::move(value)); return *this;}
    inline GetMonitorRequest& WithLinkedAccountId(const char* value) { SetLinkedAccountId(value); return *this;}
    ///@}
  private:

    Aws::String m_monitorName;
    bool m_monitorNameHasBeenSet = false;

    Aws::String m_linkedAccountId;
    bool m_linkedAccountIdHasBeenSet = false;
  };

} // namespace Model
} // namespace InternetMonitor
} // namespace Aws
