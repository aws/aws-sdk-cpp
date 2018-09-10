﻿/*
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
#include <aws/config/model/AggregatedSourceStatusType.h>
#include <utility>

namespace Aws
{
namespace ConfigService
{
namespace Model
{

  /**
   */
  class AWS_CONFIGSERVICE_API DescribeConfigurationAggregatorSourcesStatusRequest : public ConfigServiceRequest
  {
  public:
    DescribeConfigurationAggregatorSourcesStatusRequest();
    
    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeConfigurationAggregatorSourcesStatus"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the configuration aggregator.</p>
     */
    inline const Aws::String& GetConfigurationAggregatorName() const{ return m_configurationAggregatorName; }

    /**
     * <p>The name of the configuration aggregator.</p>
     */
    inline void SetConfigurationAggregatorName(const Aws::String& value) { m_configurationAggregatorNameHasBeenSet = true; m_configurationAggregatorName = value; }

    /**
     * <p>The name of the configuration aggregator.</p>
     */
    inline void SetConfigurationAggregatorName(Aws::String&& value) { m_configurationAggregatorNameHasBeenSet = true; m_configurationAggregatorName = std::move(value); }

    /**
     * <p>The name of the configuration aggregator.</p>
     */
    inline void SetConfigurationAggregatorName(const char* value) { m_configurationAggregatorNameHasBeenSet = true; m_configurationAggregatorName.assign(value); }

    /**
     * <p>The name of the configuration aggregator.</p>
     */
    inline DescribeConfigurationAggregatorSourcesStatusRequest& WithConfigurationAggregatorName(const Aws::String& value) { SetConfigurationAggregatorName(value); return *this;}

    /**
     * <p>The name of the configuration aggregator.</p>
     */
    inline DescribeConfigurationAggregatorSourcesStatusRequest& WithConfigurationAggregatorName(Aws::String&& value) { SetConfigurationAggregatorName(std::move(value)); return *this;}

    /**
     * <p>The name of the configuration aggregator.</p>
     */
    inline DescribeConfigurationAggregatorSourcesStatusRequest& WithConfigurationAggregatorName(const char* value) { SetConfigurationAggregatorName(value); return *this;}


    /**
     * <p>Filters the status type.</p> <ul> <li> <p>Valid value FAILED indicates errors
     * while moving data.</p> </li> <li> <p>Valid value SUCCEEDED indicates the data
     * was successfully moved.</p> </li> <li> <p>Valid value OUTDATED indicates the
     * data is not the most recent.</p> </li> </ul>
     */
    inline const Aws::Vector<AggregatedSourceStatusType>& GetUpdateStatus() const{ return m_updateStatus; }

    /**
     * <p>Filters the status type.</p> <ul> <li> <p>Valid value FAILED indicates errors
     * while moving data.</p> </li> <li> <p>Valid value SUCCEEDED indicates the data
     * was successfully moved.</p> </li> <li> <p>Valid value OUTDATED indicates the
     * data is not the most recent.</p> </li> </ul>
     */
    inline void SetUpdateStatus(const Aws::Vector<AggregatedSourceStatusType>& value) { m_updateStatusHasBeenSet = true; m_updateStatus = value; }

    /**
     * <p>Filters the status type.</p> <ul> <li> <p>Valid value FAILED indicates errors
     * while moving data.</p> </li> <li> <p>Valid value SUCCEEDED indicates the data
     * was successfully moved.</p> </li> <li> <p>Valid value OUTDATED indicates the
     * data is not the most recent.</p> </li> </ul>
     */
    inline void SetUpdateStatus(Aws::Vector<AggregatedSourceStatusType>&& value) { m_updateStatusHasBeenSet = true; m_updateStatus = std::move(value); }

    /**
     * <p>Filters the status type.</p> <ul> <li> <p>Valid value FAILED indicates errors
     * while moving data.</p> </li> <li> <p>Valid value SUCCEEDED indicates the data
     * was successfully moved.</p> </li> <li> <p>Valid value OUTDATED indicates the
     * data is not the most recent.</p> </li> </ul>
     */
    inline DescribeConfigurationAggregatorSourcesStatusRequest& WithUpdateStatus(const Aws::Vector<AggregatedSourceStatusType>& value) { SetUpdateStatus(value); return *this;}

    /**
     * <p>Filters the status type.</p> <ul> <li> <p>Valid value FAILED indicates errors
     * while moving data.</p> </li> <li> <p>Valid value SUCCEEDED indicates the data
     * was successfully moved.</p> </li> <li> <p>Valid value OUTDATED indicates the
     * data is not the most recent.</p> </li> </ul>
     */
    inline DescribeConfigurationAggregatorSourcesStatusRequest& WithUpdateStatus(Aws::Vector<AggregatedSourceStatusType>&& value) { SetUpdateStatus(std::move(value)); return *this;}

    /**
     * <p>Filters the status type.</p> <ul> <li> <p>Valid value FAILED indicates errors
     * while moving data.</p> </li> <li> <p>Valid value SUCCEEDED indicates the data
     * was successfully moved.</p> </li> <li> <p>Valid value OUTDATED indicates the
     * data is not the most recent.</p> </li> </ul>
     */
    inline DescribeConfigurationAggregatorSourcesStatusRequest& AddUpdateStatus(const AggregatedSourceStatusType& value) { m_updateStatusHasBeenSet = true; m_updateStatus.push_back(value); return *this; }

    /**
     * <p>Filters the status type.</p> <ul> <li> <p>Valid value FAILED indicates errors
     * while moving data.</p> </li> <li> <p>Valid value SUCCEEDED indicates the data
     * was successfully moved.</p> </li> <li> <p>Valid value OUTDATED indicates the
     * data is not the most recent.</p> </li> </ul>
     */
    inline DescribeConfigurationAggregatorSourcesStatusRequest& AddUpdateStatus(AggregatedSourceStatusType&& value) { m_updateStatusHasBeenSet = true; m_updateStatus.push_back(std::move(value)); return *this; }


    /**
     * <p>The nextToken string returned on a previous page that you use to get the next
     * page of results in a paginated response.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The nextToken string returned on a previous page that you use to get the next
     * page of results in a paginated response.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The nextToken string returned on a previous page that you use to get the next
     * page of results in a paginated response.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>The nextToken string returned on a previous page that you use to get the next
     * page of results in a paginated response.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>The nextToken string returned on a previous page that you use to get the next
     * page of results in a paginated response.</p>
     */
    inline DescribeConfigurationAggregatorSourcesStatusRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The nextToken string returned on a previous page that you use to get the next
     * page of results in a paginated response.</p>
     */
    inline DescribeConfigurationAggregatorSourcesStatusRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The nextToken string returned on a previous page that you use to get the next
     * page of results in a paginated response.</p>
     */
    inline DescribeConfigurationAggregatorSourcesStatusRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The maximum number of AggregatorSourceStatus returned on each page. The
     * default is maximum. If you specify 0, AWS Config uses the default.</p>
     */
    inline int GetLimit() const{ return m_limit; }

    /**
     * <p>The maximum number of AggregatorSourceStatus returned on each page. The
     * default is maximum. If you specify 0, AWS Config uses the default.</p>
     */
    inline void SetLimit(int value) { m_limitHasBeenSet = true; m_limit = value; }

    /**
     * <p>The maximum number of AggregatorSourceStatus returned on each page. The
     * default is maximum. If you specify 0, AWS Config uses the default.</p>
     */
    inline DescribeConfigurationAggregatorSourcesStatusRequest& WithLimit(int value) { SetLimit(value); return *this;}

  private:

    Aws::String m_configurationAggregatorName;
    bool m_configurationAggregatorNameHasBeenSet;

    Aws::Vector<AggregatedSourceStatusType> m_updateStatus;
    bool m_updateStatusHasBeenSet;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet;

    int m_limit;
    bool m_limitHasBeenSet;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws
