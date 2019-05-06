/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
  class AWS_CONFIGSERVICE_API PutRemediationConfigurationsRequest : public ConfigServiceRequest
  {
  public:
    PutRemediationConfigurationsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutRemediationConfigurations"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


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
    bool m_remediationConfigurationsHasBeenSet;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws
