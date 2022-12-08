/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/config/ConfigService_EXPORTS.h>
#include <aws/config/ConfigServiceRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/config/model/RemediationExceptionResourceKey.h>
#include <utility>

namespace Aws
{
namespace ConfigService
{
namespace Model
{

  /**
   */
  class DeleteRemediationExceptionsRequest : public ConfigServiceRequest
  {
  public:
    AWS_CONFIGSERVICE_API DeleteRemediationExceptionsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteRemediationExceptions"; }

    AWS_CONFIGSERVICE_API Aws::String SerializePayload() const override;

    AWS_CONFIGSERVICE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the Config rule for which you want to delete remediation
     * exception configuration.</p>
     */
    inline const Aws::String& GetConfigRuleName() const{ return m_configRuleName; }

    /**
     * <p>The name of the Config rule for which you want to delete remediation
     * exception configuration.</p>
     */
    inline bool ConfigRuleNameHasBeenSet() const { return m_configRuleNameHasBeenSet; }

    /**
     * <p>The name of the Config rule for which you want to delete remediation
     * exception configuration.</p>
     */
    inline void SetConfigRuleName(const Aws::String& value) { m_configRuleNameHasBeenSet = true; m_configRuleName = value; }

    /**
     * <p>The name of the Config rule for which you want to delete remediation
     * exception configuration.</p>
     */
    inline void SetConfigRuleName(Aws::String&& value) { m_configRuleNameHasBeenSet = true; m_configRuleName = std::move(value); }

    /**
     * <p>The name of the Config rule for which you want to delete remediation
     * exception configuration.</p>
     */
    inline void SetConfigRuleName(const char* value) { m_configRuleNameHasBeenSet = true; m_configRuleName.assign(value); }

    /**
     * <p>The name of the Config rule for which you want to delete remediation
     * exception configuration.</p>
     */
    inline DeleteRemediationExceptionsRequest& WithConfigRuleName(const Aws::String& value) { SetConfigRuleName(value); return *this;}

    /**
     * <p>The name of the Config rule for which you want to delete remediation
     * exception configuration.</p>
     */
    inline DeleteRemediationExceptionsRequest& WithConfigRuleName(Aws::String&& value) { SetConfigRuleName(std::move(value)); return *this;}

    /**
     * <p>The name of the Config rule for which you want to delete remediation
     * exception configuration.</p>
     */
    inline DeleteRemediationExceptionsRequest& WithConfigRuleName(const char* value) { SetConfigRuleName(value); return *this;}


    /**
     * <p>An exception list of resource exception keys to be processed with the current
     * request. Config adds exception for each resource key. For example, Config adds 3
     * exceptions for 3 resource keys. </p>
     */
    inline const Aws::Vector<RemediationExceptionResourceKey>& GetResourceKeys() const{ return m_resourceKeys; }

    /**
     * <p>An exception list of resource exception keys to be processed with the current
     * request. Config adds exception for each resource key. For example, Config adds 3
     * exceptions for 3 resource keys. </p>
     */
    inline bool ResourceKeysHasBeenSet() const { return m_resourceKeysHasBeenSet; }

    /**
     * <p>An exception list of resource exception keys to be processed with the current
     * request. Config adds exception for each resource key. For example, Config adds 3
     * exceptions for 3 resource keys. </p>
     */
    inline void SetResourceKeys(const Aws::Vector<RemediationExceptionResourceKey>& value) { m_resourceKeysHasBeenSet = true; m_resourceKeys = value; }

    /**
     * <p>An exception list of resource exception keys to be processed with the current
     * request. Config adds exception for each resource key. For example, Config adds 3
     * exceptions for 3 resource keys. </p>
     */
    inline void SetResourceKeys(Aws::Vector<RemediationExceptionResourceKey>&& value) { m_resourceKeysHasBeenSet = true; m_resourceKeys = std::move(value); }

    /**
     * <p>An exception list of resource exception keys to be processed with the current
     * request. Config adds exception for each resource key. For example, Config adds 3
     * exceptions for 3 resource keys. </p>
     */
    inline DeleteRemediationExceptionsRequest& WithResourceKeys(const Aws::Vector<RemediationExceptionResourceKey>& value) { SetResourceKeys(value); return *this;}

    /**
     * <p>An exception list of resource exception keys to be processed with the current
     * request. Config adds exception for each resource key. For example, Config adds 3
     * exceptions for 3 resource keys. </p>
     */
    inline DeleteRemediationExceptionsRequest& WithResourceKeys(Aws::Vector<RemediationExceptionResourceKey>&& value) { SetResourceKeys(std::move(value)); return *this;}

    /**
     * <p>An exception list of resource exception keys to be processed with the current
     * request. Config adds exception for each resource key. For example, Config adds 3
     * exceptions for 3 resource keys. </p>
     */
    inline DeleteRemediationExceptionsRequest& AddResourceKeys(const RemediationExceptionResourceKey& value) { m_resourceKeysHasBeenSet = true; m_resourceKeys.push_back(value); return *this; }

    /**
     * <p>An exception list of resource exception keys to be processed with the current
     * request. Config adds exception for each resource key. For example, Config adds 3
     * exceptions for 3 resource keys. </p>
     */
    inline DeleteRemediationExceptionsRequest& AddResourceKeys(RemediationExceptionResourceKey&& value) { m_resourceKeysHasBeenSet = true; m_resourceKeys.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_configRuleName;
    bool m_configRuleNameHasBeenSet = false;

    Aws::Vector<RemediationExceptionResourceKey> m_resourceKeys;
    bool m_resourceKeysHasBeenSet = false;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws
