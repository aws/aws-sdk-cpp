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
#include <aws/discovery/ApplicationDiscoveryService_EXPORTS.h>
#include <aws/discovery/ApplicationDiscoveryServiceRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace ApplicationDiscoveryService
{
namespace Model
{

  /**
   */
  class AWS_APPLICATIONDISCOVERYSERVICE_API DescribeConfigurationsRequest : public ApplicationDiscoveryServiceRequest
  {
  public:
    DescribeConfigurationsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeConfigurations"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>One or more configuration IDs.</p>
     */
    inline const Aws::Vector<Aws::String>& GetConfigurationIds() const{ return m_configurationIds; }

    /**
     * <p>One or more configuration IDs.</p>
     */
    inline bool ConfigurationIdsHasBeenSet() const { return m_configurationIdsHasBeenSet; }

    /**
     * <p>One or more configuration IDs.</p>
     */
    inline void SetConfigurationIds(const Aws::Vector<Aws::String>& value) { m_configurationIdsHasBeenSet = true; m_configurationIds = value; }

    /**
     * <p>One or more configuration IDs.</p>
     */
    inline void SetConfigurationIds(Aws::Vector<Aws::String>&& value) { m_configurationIdsHasBeenSet = true; m_configurationIds = std::move(value); }

    /**
     * <p>One or more configuration IDs.</p>
     */
    inline DescribeConfigurationsRequest& WithConfigurationIds(const Aws::Vector<Aws::String>& value) { SetConfigurationIds(value); return *this;}

    /**
     * <p>One or more configuration IDs.</p>
     */
    inline DescribeConfigurationsRequest& WithConfigurationIds(Aws::Vector<Aws::String>&& value) { SetConfigurationIds(std::move(value)); return *this;}

    /**
     * <p>One or more configuration IDs.</p>
     */
    inline DescribeConfigurationsRequest& AddConfigurationIds(const Aws::String& value) { m_configurationIdsHasBeenSet = true; m_configurationIds.push_back(value); return *this; }

    /**
     * <p>One or more configuration IDs.</p>
     */
    inline DescribeConfigurationsRequest& AddConfigurationIds(Aws::String&& value) { m_configurationIdsHasBeenSet = true; m_configurationIds.push_back(std::move(value)); return *this; }

    /**
     * <p>One or more configuration IDs.</p>
     */
    inline DescribeConfigurationsRequest& AddConfigurationIds(const char* value) { m_configurationIdsHasBeenSet = true; m_configurationIds.push_back(value); return *this; }

  private:

    Aws::Vector<Aws::String> m_configurationIds;
    bool m_configurationIdsHasBeenSet;
  };

} // namespace Model
} // namespace ApplicationDiscoveryService
} // namespace Aws
