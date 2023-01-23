/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class DescribeConfigurationAggregatorSourcesStatusRequest : public ConfigServiceRequest
  {
  public:
    AWS_CONFIGSERVICE_API DescribeConfigurationAggregatorSourcesStatusRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeConfigurationAggregatorSourcesStatus"; }

    AWS_CONFIGSERVICE_API Aws::String SerializePayload() const override;

    AWS_CONFIGSERVICE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the configuration aggregator.</p>
     */
    inline const Aws::String& GetConfigurationAggregatorName() const{ return m_configurationAggregatorName; }

    /**
     * <p>The name of the configuration aggregator.</p>
     */
    inline bool ConfigurationAggregatorNameHasBeenSet() const { return m_configurationAggregatorNameHasBeenSet; }

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
    inline bool UpdateStatusHasBeenSet() const { return m_updateStatusHasBeenSet; }

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
    inline DescribeConfigurationAggregatorSourcesStatusRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The <code>nextToken</code> string returned on a previous page that you use to
     * get the next page of results in a paginated response.</p>
     */
    inline DescribeConfigurationAggregatorSourcesStatusRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The <code>nextToken</code> string returned on a previous page that you use to
     * get the next page of results in a paginated response.</p>
     */
    inline DescribeConfigurationAggregatorSourcesStatusRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The maximum number of AggregatorSourceStatus returned on each page. The
     * default is maximum. If you specify 0, Config uses the default.</p>
     */
    inline int GetLimit() const{ return m_limit; }

    /**
     * <p>The maximum number of AggregatorSourceStatus returned on each page. The
     * default is maximum. If you specify 0, Config uses the default.</p>
     */
    inline bool LimitHasBeenSet() const { return m_limitHasBeenSet; }

    /**
     * <p>The maximum number of AggregatorSourceStatus returned on each page. The
     * default is maximum. If you specify 0, Config uses the default.</p>
     */
    inline void SetLimit(int value) { m_limitHasBeenSet = true; m_limit = value; }

    /**
     * <p>The maximum number of AggregatorSourceStatus returned on each page. The
     * default is maximum. If you specify 0, Config uses the default.</p>
     */
    inline DescribeConfigurationAggregatorSourcesStatusRequest& WithLimit(int value) { SetLimit(value); return *this;}

  private:

    Aws::String m_configurationAggregatorName;
    bool m_configurationAggregatorNameHasBeenSet = false;

    Aws::Vector<AggregatedSourceStatusType> m_updateStatus;
    bool m_updateStatusHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_limit;
    bool m_limitHasBeenSet = false;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws
