/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot-managed-integrations/IoTManagedIntegrations_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iot-managed-integrations/model/ProactiveRefreshTokenRenewal.h>
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
namespace IoTManagedIntegrations
{
namespace Model
{

  /**
   * <p>Structure containing updated OAuth configuration settings.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iot-managed-integrations-2025-03-03/OAuthUpdate">AWS
   * API Reference</a></p>
   */
  class OAuthUpdate
  {
  public:
    AWS_IOTMANAGEDINTEGRATIONS_API OAuthUpdate() = default;
    AWS_IOTMANAGEDINTEGRATIONS_API OAuthUpdate(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTMANAGEDINTEGRATIONS_API OAuthUpdate& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTMANAGEDINTEGRATIONS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The updated URL where users are redirected after completing the OAuth
     * authorization process.</p>
     */
    inline const Aws::String& GetOAuthCompleteRedirectUrl() const { return m_oAuthCompleteRedirectUrl; }
    inline bool OAuthCompleteRedirectUrlHasBeenSet() const { return m_oAuthCompleteRedirectUrlHasBeenSet; }
    template<typename OAuthCompleteRedirectUrlT = Aws::String>
    void SetOAuthCompleteRedirectUrl(OAuthCompleteRedirectUrlT&& value) { m_oAuthCompleteRedirectUrlHasBeenSet = true; m_oAuthCompleteRedirectUrl = std::forward<OAuthCompleteRedirectUrlT>(value); }
    template<typename OAuthCompleteRedirectUrlT = Aws::String>
    OAuthUpdate& WithOAuthCompleteRedirectUrl(OAuthCompleteRedirectUrlT&& value) { SetOAuthCompleteRedirectUrl(std::forward<OAuthCompleteRedirectUrlT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Updated configuration for proactively refreshing OAuth tokens before they
     * expire.</p>
     */
    inline const ProactiveRefreshTokenRenewal& GetProactiveRefreshTokenRenewal() const { return m_proactiveRefreshTokenRenewal; }
    inline bool ProactiveRefreshTokenRenewalHasBeenSet() const { return m_proactiveRefreshTokenRenewalHasBeenSet; }
    template<typename ProactiveRefreshTokenRenewalT = ProactiveRefreshTokenRenewal>
    void SetProactiveRefreshTokenRenewal(ProactiveRefreshTokenRenewalT&& value) { m_proactiveRefreshTokenRenewalHasBeenSet = true; m_proactiveRefreshTokenRenewal = std::forward<ProactiveRefreshTokenRenewalT>(value); }
    template<typename ProactiveRefreshTokenRenewalT = ProactiveRefreshTokenRenewal>
    OAuthUpdate& WithProactiveRefreshTokenRenewal(ProactiveRefreshTokenRenewalT&& value) { SetProactiveRefreshTokenRenewal(std::forward<ProactiveRefreshTokenRenewalT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_oAuthCompleteRedirectUrl;
    bool m_oAuthCompleteRedirectUrlHasBeenSet = false;

    ProactiveRefreshTokenRenewal m_proactiveRefreshTokenRenewal;
    bool m_proactiveRefreshTokenRenewalHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTManagedIntegrations
} // namespace Aws
