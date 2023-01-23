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
    AWS_MACIE2_API PutFindingsPublicationConfigurationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutFindingsPublicationConfiguration"; }

    AWS_MACIE2_API Aws::String SerializePayload() const override;


    /**
     * <p>A unique, case-sensitive token that you provide to ensure the idempotency of
     * the request.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }

    /**
     * <p>A unique, case-sensitive token that you provide to ensure the idempotency of
     * the request.</p>
     */
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }

    /**
     * <p>A unique, case-sensitive token that you provide to ensure the idempotency of
     * the request.</p>
     */
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }

    /**
     * <p>A unique, case-sensitive token that you provide to ensure the idempotency of
     * the request.</p>
     */
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }

    /**
     * <p>A unique, case-sensitive token that you provide to ensure the idempotency of
     * the request.</p>
     */
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }

    /**
     * <p>A unique, case-sensitive token that you provide to ensure the idempotency of
     * the request.</p>
     */
    inline PutFindingsPublicationConfigurationRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}

    /**
     * <p>A unique, case-sensitive token that you provide to ensure the idempotency of
     * the request.</p>
     */
    inline PutFindingsPublicationConfigurationRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}

    /**
     * <p>A unique, case-sensitive token that you provide to ensure the idempotency of
     * the request.</p>
     */
    inline PutFindingsPublicationConfigurationRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}


    /**
     * <p>The configuration settings that determine which findings to publish to
     * Security Hub.</p>
     */
    inline const SecurityHubConfiguration& GetSecurityHubConfiguration() const{ return m_securityHubConfiguration; }

    /**
     * <p>The configuration settings that determine which findings to publish to
     * Security Hub.</p>
     */
    inline bool SecurityHubConfigurationHasBeenSet() const { return m_securityHubConfigurationHasBeenSet; }

    /**
     * <p>The configuration settings that determine which findings to publish to
     * Security Hub.</p>
     */
    inline void SetSecurityHubConfiguration(const SecurityHubConfiguration& value) { m_securityHubConfigurationHasBeenSet = true; m_securityHubConfiguration = value; }

    /**
     * <p>The configuration settings that determine which findings to publish to
     * Security Hub.</p>
     */
    inline void SetSecurityHubConfiguration(SecurityHubConfiguration&& value) { m_securityHubConfigurationHasBeenSet = true; m_securityHubConfiguration = std::move(value); }

    /**
     * <p>The configuration settings that determine which findings to publish to
     * Security Hub.</p>
     */
    inline PutFindingsPublicationConfigurationRequest& WithSecurityHubConfiguration(const SecurityHubConfiguration& value) { SetSecurityHubConfiguration(value); return *this;}

    /**
     * <p>The configuration settings that determine which findings to publish to
     * Security Hub.</p>
     */
    inline PutFindingsPublicationConfigurationRequest& WithSecurityHubConfiguration(SecurityHubConfiguration&& value) { SetSecurityHubConfiguration(std::move(value)); return *this;}

  private:

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

    SecurityHubConfiguration m_securityHubConfiguration;
    bool m_securityHubConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace Macie2
} // namespace Aws
