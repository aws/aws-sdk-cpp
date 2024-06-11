/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class StartRemediationExecutionRequest : public ConfigServiceRequest
  {
  public:
    AWS_CONFIGSERVICE_API StartRemediationExecutionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StartRemediationExecution"; }

    AWS_CONFIGSERVICE_API Aws::String SerializePayload() const override;

    AWS_CONFIGSERVICE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The list of names of Config rules that you want to run remediation execution
     * for.</p>
     */
    inline const Aws::String& GetConfigRuleName() const{ return m_configRuleName; }
    inline bool ConfigRuleNameHasBeenSet() const { return m_configRuleNameHasBeenSet; }
    inline void SetConfigRuleName(const Aws::String& value) { m_configRuleNameHasBeenSet = true; m_configRuleName = value; }
    inline void SetConfigRuleName(Aws::String&& value) { m_configRuleNameHasBeenSet = true; m_configRuleName = std::move(value); }
    inline void SetConfigRuleName(const char* value) { m_configRuleNameHasBeenSet = true; m_configRuleName.assign(value); }
    inline StartRemediationExecutionRequest& WithConfigRuleName(const Aws::String& value) { SetConfigRuleName(value); return *this;}
    inline StartRemediationExecutionRequest& WithConfigRuleName(Aws::String&& value) { SetConfigRuleName(std::move(value)); return *this;}
    inline StartRemediationExecutionRequest& WithConfigRuleName(const char* value) { SetConfigRuleName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of resource keys to be processed with the current request. Each
     * element in the list consists of the resource type and resource ID. </p>
     */
    inline const Aws::Vector<ResourceKey>& GetResourceKeys() const{ return m_resourceKeys; }
    inline bool ResourceKeysHasBeenSet() const { return m_resourceKeysHasBeenSet; }
    inline void SetResourceKeys(const Aws::Vector<ResourceKey>& value) { m_resourceKeysHasBeenSet = true; m_resourceKeys = value; }
    inline void SetResourceKeys(Aws::Vector<ResourceKey>&& value) { m_resourceKeysHasBeenSet = true; m_resourceKeys = std::move(value); }
    inline StartRemediationExecutionRequest& WithResourceKeys(const Aws::Vector<ResourceKey>& value) { SetResourceKeys(value); return *this;}
    inline StartRemediationExecutionRequest& WithResourceKeys(Aws::Vector<ResourceKey>&& value) { SetResourceKeys(std::move(value)); return *this;}
    inline StartRemediationExecutionRequest& AddResourceKeys(const ResourceKey& value) { m_resourceKeysHasBeenSet = true; m_resourceKeys.push_back(value); return *this; }
    inline StartRemediationExecutionRequest& AddResourceKeys(ResourceKey&& value) { m_resourceKeysHasBeenSet = true; m_resourceKeys.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::String m_configRuleName;
    bool m_configRuleNameHasBeenSet = false;

    Aws::Vector<ResourceKey> m_resourceKeys;
    bool m_resourceKeysHasBeenSet = false;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws
