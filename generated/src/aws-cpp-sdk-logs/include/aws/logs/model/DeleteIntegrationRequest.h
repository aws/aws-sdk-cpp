/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/logs/CloudWatchLogs_EXPORTS.h>
#include <aws/logs/CloudWatchLogsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace CloudWatchLogs
{
namespace Model
{

  /**
   */
  class DeleteIntegrationRequest : public CloudWatchLogsRequest
  {
  public:
    AWS_CLOUDWATCHLOGS_API DeleteIntegrationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteIntegration"; }

    AWS_CLOUDWATCHLOGS_API Aws::String SerializePayload() const override;

    AWS_CLOUDWATCHLOGS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name of the integration to delete. To find the name of your integration,
     * use <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatchLogs/latest/APIReference/API_ListIntegrations.html">ListIntegrations</a>.</p>
     */
    inline const Aws::String& GetIntegrationName() const{ return m_integrationName; }
    inline bool IntegrationNameHasBeenSet() const { return m_integrationNameHasBeenSet; }
    inline void SetIntegrationName(const Aws::String& value) { m_integrationNameHasBeenSet = true; m_integrationName = value; }
    inline void SetIntegrationName(Aws::String&& value) { m_integrationNameHasBeenSet = true; m_integrationName = std::move(value); }
    inline void SetIntegrationName(const char* value) { m_integrationNameHasBeenSet = true; m_integrationName.assign(value); }
    inline DeleteIntegrationRequest& WithIntegrationName(const Aws::String& value) { SetIntegrationName(value); return *this;}
    inline DeleteIntegrationRequest& WithIntegrationName(Aws::String&& value) { SetIntegrationName(std::move(value)); return *this;}
    inline DeleteIntegrationRequest& WithIntegrationName(const char* value) { SetIntegrationName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specify <code>true</code> to force the deletion of the integration even if
     * vended logs dashboards currently exist.</p> <p>The default is
     * <code>false</code>.</p>
     */
    inline bool GetForce() const{ return m_force; }
    inline bool ForceHasBeenSet() const { return m_forceHasBeenSet; }
    inline void SetForce(bool value) { m_forceHasBeenSet = true; m_force = value; }
    inline DeleteIntegrationRequest& WithForce(bool value) { SetForce(value); return *this;}
    ///@}
  private:

    Aws::String m_integrationName;
    bool m_integrationNameHasBeenSet = false;

    bool m_force;
    bool m_forceHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatchLogs
} // namespace Aws
