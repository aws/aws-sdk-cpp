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
  class AWS_CONFIGSERVICE_API DescribeRemediationExecutionStatusRequest : public ConfigServiceRequest
  {
  public:
    DescribeRemediationExecutionStatusRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeRemediationExecutionStatus"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>A list of AWS Config rule names.</p>
     */
    inline const Aws::String& GetConfigRuleName() const{ return m_configRuleName; }

    /**
     * <p>A list of AWS Config rule names.</p>
     */
    inline bool ConfigRuleNameHasBeenSet() const { return m_configRuleNameHasBeenSet; }

    /**
     * <p>A list of AWS Config rule names.</p>
     */
    inline void SetConfigRuleName(const Aws::String& value) { m_configRuleNameHasBeenSet = true; m_configRuleName = value; }

    /**
     * <p>A list of AWS Config rule names.</p>
     */
    inline void SetConfigRuleName(Aws::String&& value) { m_configRuleNameHasBeenSet = true; m_configRuleName = std::move(value); }

    /**
     * <p>A list of AWS Config rule names.</p>
     */
    inline void SetConfigRuleName(const char* value) { m_configRuleNameHasBeenSet = true; m_configRuleName.assign(value); }

    /**
     * <p>A list of AWS Config rule names.</p>
     */
    inline DescribeRemediationExecutionStatusRequest& WithConfigRuleName(const Aws::String& value) { SetConfigRuleName(value); return *this;}

    /**
     * <p>A list of AWS Config rule names.</p>
     */
    inline DescribeRemediationExecutionStatusRequest& WithConfigRuleName(Aws::String&& value) { SetConfigRuleName(std::move(value)); return *this;}

    /**
     * <p>A list of AWS Config rule names.</p>
     */
    inline DescribeRemediationExecutionStatusRequest& WithConfigRuleName(const char* value) { SetConfigRuleName(value); return *this;}


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
    inline DescribeRemediationExecutionStatusRequest& WithResourceKeys(const Aws::Vector<ResourceKey>& value) { SetResourceKeys(value); return *this;}

    /**
     * <p>A list of resource keys to be processed with the current request. Each
     * element in the list consists of the resource type and resource ID. </p>
     */
    inline DescribeRemediationExecutionStatusRequest& WithResourceKeys(Aws::Vector<ResourceKey>&& value) { SetResourceKeys(std::move(value)); return *this;}

    /**
     * <p>A list of resource keys to be processed with the current request. Each
     * element in the list consists of the resource type and resource ID. </p>
     */
    inline DescribeRemediationExecutionStatusRequest& AddResourceKeys(const ResourceKey& value) { m_resourceKeysHasBeenSet = true; m_resourceKeys.push_back(value); return *this; }

    /**
     * <p>A list of resource keys to be processed with the current request. Each
     * element in the list consists of the resource type and resource ID. </p>
     */
    inline DescribeRemediationExecutionStatusRequest& AddResourceKeys(ResourceKey&& value) { m_resourceKeysHasBeenSet = true; m_resourceKeys.push_back(std::move(value)); return *this; }


    /**
     * <p>The maximum number of RemediationExecutionStatuses returned on each page. The
     * default is maximum. If you specify 0, AWS Config uses the default. </p>
     */
    inline int GetLimit() const{ return m_limit; }

    /**
     * <p>The maximum number of RemediationExecutionStatuses returned on each page. The
     * default is maximum. If you specify 0, AWS Config uses the default. </p>
     */
    inline bool LimitHasBeenSet() const { return m_limitHasBeenSet; }

    /**
     * <p>The maximum number of RemediationExecutionStatuses returned on each page. The
     * default is maximum. If you specify 0, AWS Config uses the default. </p>
     */
    inline void SetLimit(int value) { m_limitHasBeenSet = true; m_limit = value; }

    /**
     * <p>The maximum number of RemediationExecutionStatuses returned on each page. The
     * default is maximum. If you specify 0, AWS Config uses the default. </p>
     */
    inline DescribeRemediationExecutionStatusRequest& WithLimit(int value) { SetLimit(value); return *this;}


    /**
     * <p>The <code>nextToken</code> string returned on a previous page that you use to
     * get the next page of results in a paginated response.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The <code>nextToken</code> string returned on a previous page that you use to
     * get the next page of results in a paginated response.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>The <code>nextToken</code> string returned on a previous page that you use to
     * get the next page of results in a paginated response.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The <code>nextToken</code> string returned on a previous page that you use to
     * get the next page of results in a paginated response.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>The <code>nextToken</code> string returned on a previous page that you use to
     * get the next page of results in a paginated response.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>The <code>nextToken</code> string returned on a previous page that you use to
     * get the next page of results in a paginated response.</p>
     */
    inline DescribeRemediationExecutionStatusRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The <code>nextToken</code> string returned on a previous page that you use to
     * get the next page of results in a paginated response.</p>
     */
    inline DescribeRemediationExecutionStatusRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The <code>nextToken</code> string returned on a previous page that you use to
     * get the next page of results in a paginated response.</p>
     */
    inline DescribeRemediationExecutionStatusRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::String m_configRuleName;
    bool m_configRuleNameHasBeenSet;

    Aws::Vector<ResourceKey> m_resourceKeys;
    bool m_resourceKeysHasBeenSet;

    int m_limit;
    bool m_limitHasBeenSet;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws
