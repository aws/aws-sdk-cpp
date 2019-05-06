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
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/config/model/ResourceKey.h>
#include <utility>

namespace Aws
{
namespace ConfigService
{
namespace Model
{

  /**
   */
  class AWS_CONFIGSERVICE_API StartRemediationExecutionRequest : public ConfigServiceRequest
  {
  public:
    StartRemediationExecutionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StartRemediationExecution"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The list of names of AWS Config rules that you want to run remediation
     * execution for.</p>
     */
    inline const Aws::String& GetConfigRuleName() const{ return m_configRuleName; }

    /**
     * <p>The list of names of AWS Config rules that you want to run remediation
     * execution for.</p>
     */
    inline bool ConfigRuleNameHasBeenSet() const { return m_configRuleNameHasBeenSet; }

    /**
     * <p>The list of names of AWS Config rules that you want to run remediation
     * execution for.</p>
     */
    inline void SetConfigRuleName(const Aws::String& value) { m_configRuleNameHasBeenSet = true; m_configRuleName = value; }

    /**
     * <p>The list of names of AWS Config rules that you want to run remediation
     * execution for.</p>
     */
    inline void SetConfigRuleName(Aws::String&& value) { m_configRuleNameHasBeenSet = true; m_configRuleName = std::move(value); }

    /**
     * <p>The list of names of AWS Config rules that you want to run remediation
     * execution for.</p>
     */
    inline void SetConfigRuleName(const char* value) { m_configRuleNameHasBeenSet = true; m_configRuleName.assign(value); }

    /**
     * <p>The list of names of AWS Config rules that you want to run remediation
     * execution for.</p>
     */
    inline StartRemediationExecutionRequest& WithConfigRuleName(const Aws::String& value) { SetConfigRuleName(value); return *this;}

    /**
     * <p>The list of names of AWS Config rules that you want to run remediation
     * execution for.</p>
     */
    inline StartRemediationExecutionRequest& WithConfigRuleName(Aws::String&& value) { SetConfigRuleName(std::move(value)); return *this;}

    /**
     * <p>The list of names of AWS Config rules that you want to run remediation
     * execution for.</p>
     */
    inline StartRemediationExecutionRequest& WithConfigRuleName(const char* value) { SetConfigRuleName(value); return *this;}


    /**
     * <p>A list of resource keys to be processed with the current request. Each
     * element in the list consists of the resource type and resource ID. </p>
     */
    inline const Aws::Vector<ResourceKey>& GetResourceKeys() const{ return m_resourceKeys; }

    /**
     * <p>A list of resource keys to be processed with the current request. Each
     * element in the list consists of the resource type and resource ID. </p>
     */
    inline bool ResourceKeysHasBeenSet() const { return m_resourceKeysHasBeenSet; }

    /**
     * <p>A list of resource keys to be processed with the current request. Each
     * element in the list consists of the resource type and resource ID. </p>
     */
    inline void SetResourceKeys(const Aws::Vector<ResourceKey>& value) { m_resourceKeysHasBeenSet = true; m_resourceKeys = value; }

    /**
     * <p>A list of resource keys to be processed with the current request. Each
     * element in the list consists of the resource type and resource ID. </p>
     */
    inline void SetResourceKeys(Aws::Vector<ResourceKey>&& value) { m_resourceKeysHasBeenSet = true; m_resourceKeys = std::move(value); }

    /**
     * <p>A list of resource keys to be processed with the current request. Each
     * element in the list consists of the resource type and resource ID. </p>
     */
    inline StartRemediationExecutionRequest& WithResourceKeys(const Aws::Vector<ResourceKey>& value) { SetResourceKeys(value); return *this;}

    /**
     * <p>A list of resource keys to be processed with the current request. Each
     * element in the list consists of the resource type and resource ID. </p>
     */
    inline StartRemediationExecutionRequest& WithResourceKeys(Aws::Vector<ResourceKey>&& value) { SetResourceKeys(std::move(value)); return *this;}

    /**
     * <p>A list of resource keys to be processed with the current request. Each
     * element in the list consists of the resource type and resource ID. </p>
     */
    inline StartRemediationExecutionRequest& AddResourceKeys(const ResourceKey& value) { m_resourceKeysHasBeenSet = true; m_resourceKeys.push_back(value); return *this; }

    /**
     * <p>A list of resource keys to be processed with the current request. Each
     * element in the list consists of the resource type and resource ID. </p>
     */
    inline StartRemediationExecutionRequest& AddResourceKeys(ResourceKey&& value) { m_resourceKeysHasBeenSet = true; m_resourceKeys.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_configRuleName;
    bool m_configRuleNameHasBeenSet;

    Aws::Vector<ResourceKey> m_resourceKeys;
    bool m_resourceKeysHasBeenSet;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws
