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
    AWS_CONFIGSERVICE_API DescribeRemediationExceptionsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeRemediationExceptions"; }

    AWS_CONFIGSERVICE_API Aws::String SerializePayload() const override;

    AWS_CONFIGSERVICE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name of the Config rule.</p>
     */
    inline const Aws::String& GetConfigRuleName() const { return m_configRuleName; }
    inline bool ConfigRuleNameHasBeenSet() const { return m_configRuleNameHasBeenSet; }
    template<typename ConfigRuleNameT = Aws::String>
    void SetConfigRuleName(ConfigRuleNameT&& value) { m_configRuleNameHasBeenSet = true; m_configRuleName = std::forward<ConfigRuleNameT>(value); }
    template<typename ConfigRuleNameT = Aws::String>
    DescribeRemediationExceptionsRequest& WithConfigRuleName(ConfigRuleNameT&& value) { SetConfigRuleName(std::forward<ConfigRuleNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An exception list of resource exception keys to be processed with the current
     * request. Config adds exception for each resource key. For example, Config adds 3
     * exceptions for 3 resource keys. </p>
     */
    inline const Aws::Vector<RemediationExceptionResourceKey>& GetResourceKeys() const { return m_resourceKeys; }
    inline bool ResourceKeysHasBeenSet() const { return m_resourceKeysHasBeenSet; }
    template<typename ResourceKeysT = Aws::Vector<RemediationExceptionResourceKey>>
    void SetResourceKeys(ResourceKeysT&& value) { m_resourceKeysHasBeenSet = true; m_resourceKeys = std::forward<ResourceKeysT>(value); }
    template<typename ResourceKeysT = Aws::Vector<RemediationExceptionResourceKey>>
    DescribeRemediationExceptionsRequest& WithResourceKeys(ResourceKeysT&& value) { SetResourceKeys(std::forward<ResourceKeysT>(value)); return *this;}
    template<typename ResourceKeysT = RemediationExceptionResourceKey>
    DescribeRemediationExceptionsRequest& AddResourceKeys(ResourceKeysT&& value) { m_resourceKeysHasBeenSet = true; m_resourceKeys.emplace_back(std::forward<ResourceKeysT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The maximum number of RemediationExceptionResourceKey returned on each page.
     * The default is 25. If you specify 0, Config uses the default.</p>
     */
    inline int GetLimit() const { return m_limit; }
    inline bool LimitHasBeenSet() const { return m_limitHasBeenSet; }
    inline void SetLimit(int value) { m_limitHasBeenSet = true; m_limit = value; }
    inline DescribeRemediationExceptionsRequest& WithLimit(int value) { SetLimit(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The <code>nextToken</code> string returned in a previous request that you use
     * to request the next page of results in a paginated response.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    DescribeRemediationExceptionsRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_configRuleName;
    bool m_configRuleNameHasBeenSet = false;

    Aws::Vector<RemediationExceptionResourceKey> m_resourceKeys;
    bool m_resourceKeysHasBeenSet = false;

    int m_limit{0};
    bool m_limitHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws
