/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/macie2/Macie2_EXPORTS.h>
#include <aws/macie2/Macie2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/macie2/model/SecurityHubConfiguration.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace Macie2
{
namespace Model
{

  /**
   */
  class PutFindingsPublicationConfigurationRequest : public Macie2Request
  {
  public:
    AWS_MACIE2_API PutFindingsPublicationConfigurationRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutFindingsPublicationConfiguration"; }

    AWS_MACIE2_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>A unique, case-sensitive token that you provide to ensure the idempotency of
     * the request.</p>
     */
    inline const Aws::String& GetClientToken() const { return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    template<typename ClientTokenT = Aws::String>
    void SetClientToken(ClientTokenT&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::forward<ClientTokenT>(value); }
    template<typename ClientTokenT = Aws::String>
    PutFindingsPublicationConfigurationRequest& WithClientToken(ClientTokenT&& value) { SetClientToken(std::forward<ClientTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration settings that determine which findings to publish to
     * Security Hub.</p>
     */
    inline const SecurityHubConfiguration& GetSecurityHubConfiguration() const { return m_securityHubConfiguration; }
    inline bool SecurityHubConfigurationHasBeenSet() const { return m_securityHubConfigurationHasBeenSet; }
    template<typename SecurityHubConfigurationT = SecurityHubConfiguration>
    void SetSecurityHubConfiguration(SecurityHubConfigurationT&& value) { m_securityHubConfigurationHasBeenSet = true; m_securityHubConfiguration = std::forward<SecurityHubConfigurationT>(value); }
    template<typename SecurityHubConfigurationT = SecurityHubConfiguration>
    PutFindingsPublicationConfigurationRequest& WithSecurityHubConfiguration(SecurityHubConfigurationT&& value) { SetSecurityHubConfiguration(std::forward<SecurityHubConfigurationT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};
    bool m_clientTokenHasBeenSet = true;

    SecurityHubConfiguration m_securityHubConfiguration;
    bool m_securityHubConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace Macie2
} // namespace Aws
