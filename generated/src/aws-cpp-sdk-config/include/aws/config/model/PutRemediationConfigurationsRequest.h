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
    AWS_CONFIGSERVICE_API PutRemediationConfigurationsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutRemediationConfigurations"; }

    AWS_CONFIGSERVICE_API Aws::String SerializePayload() const override;

    AWS_CONFIGSERVICE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>A list of remediation configuration objects.</p>
     */
    inline const Aws::Vector<RemediationConfiguration>& GetRemediationConfigurations() const { return m_remediationConfigurations; }
    inline bool RemediationConfigurationsHasBeenSet() const { return m_remediationConfigurationsHasBeenSet; }
    template<typename RemediationConfigurationsT = Aws::Vector<RemediationConfiguration>>
    void SetRemediationConfigurations(RemediationConfigurationsT&& value) { m_remediationConfigurationsHasBeenSet = true; m_remediationConfigurations = std::forward<RemediationConfigurationsT>(value); }
    template<typename RemediationConfigurationsT = Aws::Vector<RemediationConfiguration>>
    PutRemediationConfigurationsRequest& WithRemediationConfigurations(RemediationConfigurationsT&& value) { SetRemediationConfigurations(std::forward<RemediationConfigurationsT>(value)); return *this;}
    template<typename RemediationConfigurationsT = RemediationConfiguration>
    PutRemediationConfigurationsRequest& AddRemediationConfigurations(RemediationConfigurationsT&& value) { m_remediationConfigurationsHasBeenSet = true; m_remediationConfigurations.emplace_back(std::forward<RemediationConfigurationsT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<RemediationConfiguration> m_remediationConfigurations;
    bool m_remediationConfigurationsHasBeenSet = false;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws
