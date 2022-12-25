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
  class DescribeRemediationExceptionsRequest : public ConfigServiceRequest
  {
  public:
    AWS_CONFIGSERVICE_API DescribeRemediationExceptionsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeRemediationExceptions"; }

    AWS_CONFIGSERVICE_API Aws::String SerializePayload() const override;

    AWS_CONFIGSERVICE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the Config rule.</p>
     */
    inline const Aws::String& GetConfigRuleName() const{ return m_configRuleName; }

    /**
     * <p>The name of the Config rule.</p>
     */
    inline bool ConfigRuleNameHasBeenSet() const { return m_configRuleNameHasBeenSet; }

    /**
     * <p>The name of the Config rule.</p>
     */
    inline void SetConfigRuleName(const Aws::String& value) { m_configRuleNameHasBeenSet = true; m_configRuleName = value; }

    /**
     * <p>The name of the Config rule.</p>
     */
    inline void SetConfigRuleName(Aws::String&& value) { m_configRuleNameHasBeenSet = true; m_configRuleName = std::move(value); }

    /**
     * <p>The name of the Config rule.</p>
     */
    inline void SetConfigRuleName(const char* value) { m_configRuleNameHasBeenSet = true; m_configRuleName.assign(value); }

    /**
     * <p>The name of the Config rule.</p>
     */
    inline DescribeRemediationExceptionsRequest& WithConfigRuleName(const Aws::String& value) { SetConfigRuleName(value); return *this;}

    /**
     * <p>The name of the Config rule.</p>
     */
    inline DescribeRemediationExceptionsRequest& WithConfigRuleName(Aws::String&& value) { SetConfigRuleName(std::move(value)); return *this;}

    /**
     * <p>The name of the Config rule.</p>
     */
    inline DescribeRemediationExceptionsRequest& WithConfigRuleName(const char* value) { SetConfigRuleName(value); return *this;}


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
    inline DescribeRemediationExceptionsRequest& WithResourceKeys(const Aws::Vector<RemediationExceptionResourceKey>& value) { SetResourceKeys(value); return *this;}

    /**
     * <p>An exception list of resource exception keys to be processed with the current
     * request. Config adds exception for each resource key. For example, Config adds 3
     * exceptions for 3 resource keys. </p>
     */
    inline DescribeRemediationExceptionsRequest& WithResourceKeys(Aws::Vector<RemediationExceptionResourceKey>&& value) { SetResourceKeys(std::move(value)); return *this;}

    /**
     * <p>An exception list of resource exception keys to be processed with the current
     * request. Config adds exception for each resource key. For example, Config adds 3
     * exceptions for 3 resource keys. </p>
     */
    inline DescribeRemediationExceptionsRequest& AddResourceKeys(const RemediationExceptionResourceKey& value) { m_resourceKeysHasBeenSet = true; m_resourceKeys.push_back(value); return *this; }

    /**
     * <p>An exception list of resource exception keys to be processed with the current
     * request. Config adds exception for each resource key. For example, Config adds 3
     * exceptions for 3 resource keys. </p>
     */
    inline DescribeRemediationExceptionsRequest& AddResourceKeys(RemediationExceptionResourceKey&& value) { m_resourceKeysHasBeenSet = true; m_resourceKeys.push_back(std::move(value)); return *this; }


    /**
     * <p>The maximum number of RemediationExceptionResourceKey returned on each page.
     * The default is 25. If you specify 0, Config uses the default.</p>
     */
    inline int GetLimit() const{ return m_limit; }

    /**
     * <p>The maximum number of RemediationExceptionResourceKey returned on each page.
     * The default is 25. If you specify 0, Config uses the default.</p>
     */
    inline bool LimitHasBeenSet() const { return m_limitHasBeenSet; }

    /**
     * <p>The maximum number of RemediationExceptionResourceKey returned on each page.
     * The default is 25. If you specify 0, Config uses the default.</p>
     */
    inline void SetLimit(int value) { m_limitHasBeenSet = true; m_limit = value; }

    /**
     * <p>The maximum number of RemediationExceptionResourceKey returned on each page.
     * The default is 25. If you specify 0, Config uses the default.</p>
     */
    inline DescribeRemediationExceptionsRequest& WithLimit(int value) { SetLimit(value); return *this;}


    /**
     * <p>The <code>nextToken</code> string returned in a previous request that you use
     * to request the next page of results in a paginated response.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The <code>nextToken</code> string returned in a previous request that you use
     * to request the next page of results in a paginated response.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>The <code>nextToken</code> string returned in a previous request that you use
     * to request the next page of results in a paginated response.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The <code>nextToken</code> string returned in a previous request that you use
     * to request the next page of results in a paginated response.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>The <code>nextToken</code> string returned in a previous request that you use
     * to request the next page of results in a paginated response.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>The <code>nextToken</code> string returned in a previous request that you use
     * to request the next page of results in a paginated response.</p>
     */
    inline DescribeRemediationExceptionsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The <code>nextToken</code> string returned in a previous request that you use
     * to request the next page of results in a paginated response.</p>
     */
    inline DescribeRemediationExceptionsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The <code>nextToken</code> string returned in a previous request that you use
     * to request the next page of results in a paginated response.</p>
     */
    inline DescribeRemediationExceptionsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::String m_configRuleName;
    bool m_configRuleNameHasBeenSet = false;

    Aws::Vector<RemediationExceptionResourceKey> m_resourceKeys;
    bool m_resourceKeysHasBeenSet = false;

    int m_limit;
    bool m_limitHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws
