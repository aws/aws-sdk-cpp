/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/config/ConfigService_EXPORTS.h>
#include <aws/config/ConfigServiceRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/config/model/RemediationConfiguration.h>
#include <utility>

namespace Aws
{
namespace ConfigService
{
namespace Model
{

  /**
   */
  class PutRemediationConfigurationsRequest : public ConfigServiceRequest
  {
  public:
    AWS_CONFIGSERVICE_API PutRemediationConfigurationsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutRemediationConfigurations"; }

    AWS_CONFIGSERVICE_API Aws::String SerializePayload() const override;

    AWS_CONFIGSERVICE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>A list of remediation configuration objects.</p>
     */
    inline const Aws::Vector<RemediationConfiguration>& GetRemediationConfigurations() const{ return m_remediationConfigurations; }

    /**
     * <p>A list of remediation configuration objects.</p>
     */
    inline bool RemediationConfigurationsHasBeenSet() const { return m_remediationConfigurationsHasBeenSet; }

    /**
     * <p>A list of remediation configuration objects.</p>
     */
    inline void SetRemediationConfigurations(const Aws::Vector<RemediationConfiguration>& value) { m_remediationConfigurationsHasBeenSet = true; m_remediationConfigurations = value; }

    /**
     * <p>A list of remediation configuration objects.</p>
     */
    inline void SetRemediationConfigurations(Aws::Vector<RemediationConfiguration>&& value) { m_remediationConfigurationsHasBeenSet = true; m_remediationConfigurations = std::move(value); }

    /**
     * <p>A list of remediation configuration objects.</p>
     */
    inline PutRemediationConfigurationsRequest& WithRemediationConfigurations(const Aws::Vector<RemediationConfiguration>& value) { SetRemediationConfigurations(value); return *this;}

    /**
     * <p>A list of remediation configuration objects.</p>
     */
    inline PutRemediationConfigurationsRequest& WithRemediationConfigurations(Aws::Vector<RemediationConfiguration>&& value) { SetRemediationConfigurations(std::move(value)); return *this;}

    /**
     * <p>A list of remediation configuration objects.</p>
     */
    inline PutRemediationConfigurationsRequest& AddRemediationConfigurations(const RemediationConfiguration& value) { m_remediationConfigurationsHasBeenSet = true; m_remediationConfigurations.push_back(value); return *this; }

    /**
     * <p>A list of remediation configuration objects.</p>
     */
    inline PutRemediationConfigurationsRequest& AddRemediationConfigurations(RemediationConfiguration&& value) { m_remediationConfigurationsHasBeenSet = true; m_remediationConfigurations.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<RemediationConfiguration> m_remediationConfigurations;
    bool m_remediationConfigurationsHasBeenSet = false;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws
