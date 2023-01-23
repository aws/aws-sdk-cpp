/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fms/FMS_EXPORTS.h>
#include <aws/fms/FMSRequest.h>
#include <aws/fms/model/ThirdPartyFirewall.h>
#include <utility>

namespace Aws
{
namespace FMS
{
namespace Model
{

  /**
   */
  class AssociateThirdPartyFirewallRequest : public FMSRequest
  {
  public:
    AWS_FMS_API AssociateThirdPartyFirewallRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "AssociateThirdPartyFirewall"; }

    AWS_FMS_API Aws::String SerializePayload() const override;

    AWS_FMS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the third-party firewall vendor.</p>
     */
    inline const ThirdPartyFirewall& GetThirdPartyFirewall() const{ return m_thirdPartyFirewall; }

    /**
     * <p>The name of the third-party firewall vendor.</p>
     */
    inline bool ThirdPartyFirewallHasBeenSet() const { return m_thirdPartyFirewallHasBeenSet; }

    /**
     * <p>The name of the third-party firewall vendor.</p>
     */
    inline void SetThirdPartyFirewall(const ThirdPartyFirewall& value) { m_thirdPartyFirewallHasBeenSet = true; m_thirdPartyFirewall = value; }

    /**
     * <p>The name of the third-party firewall vendor.</p>
     */
    inline void SetThirdPartyFirewall(ThirdPartyFirewall&& value) { m_thirdPartyFirewallHasBeenSet = true; m_thirdPartyFirewall = std::move(value); }

    /**
     * <p>The name of the third-party firewall vendor.</p>
     */
    inline AssociateThirdPartyFirewallRequest& WithThirdPartyFirewall(const ThirdPartyFirewall& value) { SetThirdPartyFirewall(value); return *this;}

    /**
     * <p>The name of the third-party firewall vendor.</p>
     */
    inline AssociateThirdPartyFirewallRequest& WithThirdPartyFirewall(ThirdPartyFirewall&& value) { SetThirdPartyFirewall(std::move(value)); return *this;}

  private:

    ThirdPartyFirewall m_thirdPartyFirewall;
    bool m_thirdPartyFirewallHasBeenSet = false;
  };

} // namespace Model
} // namespace FMS
} // namespace Aws
