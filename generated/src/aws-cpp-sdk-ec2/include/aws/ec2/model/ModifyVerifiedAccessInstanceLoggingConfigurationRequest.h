﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/EC2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/VerifiedAccessLogOptions.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace EC2
{
namespace Model
{

  /**
   */
  class ModifyVerifiedAccessInstanceLoggingConfigurationRequest : public EC2Request
  {
  public:
    AWS_EC2_API ModifyVerifiedAccessInstanceLoggingConfigurationRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ModifyVerifiedAccessInstanceLoggingConfiguration"; }

    AWS_EC2_API Aws::String SerializePayload() const override;

  protected:
    AWS_EC2_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>The ID of the Verified Access instance.</p>
     */
    inline const Aws::String& GetVerifiedAccessInstanceId() const { return m_verifiedAccessInstanceId; }
    inline bool VerifiedAccessInstanceIdHasBeenSet() const { return m_verifiedAccessInstanceIdHasBeenSet; }
    template<typename VerifiedAccessInstanceIdT = Aws::String>
    void SetVerifiedAccessInstanceId(VerifiedAccessInstanceIdT&& value) { m_verifiedAccessInstanceIdHasBeenSet = true; m_verifiedAccessInstanceId = std::forward<VerifiedAccessInstanceIdT>(value); }
    template<typename VerifiedAccessInstanceIdT = Aws::String>
    ModifyVerifiedAccessInstanceLoggingConfigurationRequest& WithVerifiedAccessInstanceId(VerifiedAccessInstanceIdT&& value) { SetVerifiedAccessInstanceId(std::forward<VerifiedAccessInstanceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration options for Verified Access instances.</p>
     */
    inline const VerifiedAccessLogOptions& GetAccessLogs() const { return m_accessLogs; }
    inline bool AccessLogsHasBeenSet() const { return m_accessLogsHasBeenSet; }
    template<typename AccessLogsT = VerifiedAccessLogOptions>
    void SetAccessLogs(AccessLogsT&& value) { m_accessLogsHasBeenSet = true; m_accessLogs = std::forward<AccessLogsT>(value); }
    template<typename AccessLogsT = VerifiedAccessLogOptions>
    ModifyVerifiedAccessInstanceLoggingConfigurationRequest& WithAccessLogs(AccessLogsT&& value) { SetAccessLogs(std::forward<AccessLogsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline bool GetDryRun() const { return m_dryRun; }
    inline bool DryRunHasBeenSet() const { return m_dryRunHasBeenSet; }
    inline void SetDryRun(bool value) { m_dryRunHasBeenSet = true; m_dryRun = value; }
    inline ModifyVerifiedAccessInstanceLoggingConfigurationRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique, case-sensitive token that you provide to ensure idempotency of your
     * modification request. For more information, see <a
     * href="https://docs.aws.amazon.com/ec2/latest/devguide/ec2-api-idempotency.html">Ensuring
     * idempotency</a>.</p>
     */
    inline const Aws::String& GetClientToken() const { return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    template<typename ClientTokenT = Aws::String>
    void SetClientToken(ClientTokenT&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::forward<ClientTokenT>(value); }
    template<typename ClientTokenT = Aws::String>
    ModifyVerifiedAccessInstanceLoggingConfigurationRequest& WithClientToken(ClientTokenT&& value) { SetClientToken(std::forward<ClientTokenT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_verifiedAccessInstanceId;
    bool m_verifiedAccessInstanceIdHasBeenSet = false;

    VerifiedAccessLogOptions m_accessLogs;
    bool m_accessLogsHasBeenSet = false;

    bool m_dryRun{false};
    bool m_dryRunHasBeenSet = false;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
