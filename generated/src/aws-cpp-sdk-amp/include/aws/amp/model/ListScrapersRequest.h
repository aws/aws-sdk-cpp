/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/amp/PrometheusService_EXPORTS.h>
#include <aws/amp/PrometheusServiceRequest.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace PrometheusService
{
namespace Model
{

  /**
   * <p>Represents the input of a <code>ListScrapers</code> operation.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/amp-2020-08-01/ListScrapersRequest">AWS
   * API Reference</a></p>
   */
  class ListScrapersRequest : public PrometheusServiceRequest
  {
  public:
    AWS_PROMETHEUSSERVICE_API ListScrapersRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListScrapers"; }

    AWS_PROMETHEUSSERVICE_API Aws::String SerializePayload() const override;

    AWS_PROMETHEUSSERVICE_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p>(Optional) A list of key-value pairs to filter the list of scrapers returned.
     * Keys include <code>status</code>, <code>sourceArn</code>,
     * <code>destinationArn</code>, and <code>alias</code>.</p> <p>Filters on the same
     * key are <code>OR</code>'d together, and filters on different keys are
     * <code>AND</code>'d together. For example,
     * <code>status=ACTIVE&amp;status=CREATING&amp;alias=Test</code>, will return all
     * scrapers that have the alias Test, and are either in status ACTIVE or
     * CREATING.</p> <p>To find all active scrapers that are sending metrics to a
     * specific Amazon Managed Service for Prometheus workspace, you would use the ARN
     * of the workspace in a query:</p> <p>
     * <code>status=ACTIVE&amp;destinationArn=arn:aws:aps:us-east-1:123456789012:workspace/ws-example1-1234-abcd-56ef-123456789012</code>
     * </p> <p>If this is included, it filters the results to only the scrapers that
     * match the filter.</p>
     */
    inline const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& GetFilters() const{ return m_filters; }

    /**
     * <p>(Optional) A list of key-value pairs to filter the list of scrapers returned.
     * Keys include <code>status</code>, <code>sourceArn</code>,
     * <code>destinationArn</code>, and <code>alias</code>.</p> <p>Filters on the same
     * key are <code>OR</code>'d together, and filters on different keys are
     * <code>AND</code>'d together. For example,
     * <code>status=ACTIVE&amp;status=CREATING&amp;alias=Test</code>, will return all
     * scrapers that have the alias Test, and are either in status ACTIVE or
     * CREATING.</p> <p>To find all active scrapers that are sending metrics to a
     * specific Amazon Managed Service for Prometheus workspace, you would use the ARN
     * of the workspace in a query:</p> <p>
     * <code>status=ACTIVE&amp;destinationArn=arn:aws:aps:us-east-1:123456789012:workspace/ws-example1-1234-abcd-56ef-123456789012</code>
     * </p> <p>If this is included, it filters the results to only the scrapers that
     * match the filter.</p>
     */
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }

    /**
     * <p>(Optional) A list of key-value pairs to filter the list of scrapers returned.
     * Keys include <code>status</code>, <code>sourceArn</code>,
     * <code>destinationArn</code>, and <code>alias</code>.</p> <p>Filters on the same
     * key are <code>OR</code>'d together, and filters on different keys are
     * <code>AND</code>'d together. For example,
     * <code>status=ACTIVE&amp;status=CREATING&amp;alias=Test</code>, will return all
     * scrapers that have the alias Test, and are either in status ACTIVE or
     * CREATING.</p> <p>To find all active scrapers that are sending metrics to a
     * specific Amazon Managed Service for Prometheus workspace, you would use the ARN
     * of the workspace in a query:</p> <p>
     * <code>status=ACTIVE&amp;destinationArn=arn:aws:aps:us-east-1:123456789012:workspace/ws-example1-1234-abcd-56ef-123456789012</code>
     * </p> <p>If this is included, it filters the results to only the scrapers that
     * match the filter.</p>
     */
    inline void SetFilters(const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& value) { m_filtersHasBeenSet = true; m_filters = value; }

    /**
     * <p>(Optional) A list of key-value pairs to filter the list of scrapers returned.
     * Keys include <code>status</code>, <code>sourceArn</code>,
     * <code>destinationArn</code>, and <code>alias</code>.</p> <p>Filters on the same
     * key are <code>OR</code>'d together, and filters on different keys are
     * <code>AND</code>'d together. For example,
     * <code>status=ACTIVE&amp;status=CREATING&amp;alias=Test</code>, will return all
     * scrapers that have the alias Test, and are either in status ACTIVE or
     * CREATING.</p> <p>To find all active scrapers that are sending metrics to a
     * specific Amazon Managed Service for Prometheus workspace, you would use the ARN
     * of the workspace in a query:</p> <p>
     * <code>status=ACTIVE&amp;destinationArn=arn:aws:aps:us-east-1:123456789012:workspace/ws-example1-1234-abcd-56ef-123456789012</code>
     * </p> <p>If this is included, it filters the results to only the scrapers that
     * match the filter.</p>
     */
    inline void SetFilters(Aws::Map<Aws::String, Aws::Vector<Aws::String>>&& value) { m_filtersHasBeenSet = true; m_filters = std::move(value); }

    /**
     * <p>(Optional) A list of key-value pairs to filter the list of scrapers returned.
     * Keys include <code>status</code>, <code>sourceArn</code>,
     * <code>destinationArn</code>, and <code>alias</code>.</p> <p>Filters on the same
     * key are <code>OR</code>'d together, and filters on different keys are
     * <code>AND</code>'d together. For example,
     * <code>status=ACTIVE&amp;status=CREATING&amp;alias=Test</code>, will return all
     * scrapers that have the alias Test, and are either in status ACTIVE or
     * CREATING.</p> <p>To find all active scrapers that are sending metrics to a
     * specific Amazon Managed Service for Prometheus workspace, you would use the ARN
     * of the workspace in a query:</p> <p>
     * <code>status=ACTIVE&amp;destinationArn=arn:aws:aps:us-east-1:123456789012:workspace/ws-example1-1234-abcd-56ef-123456789012</code>
     * </p> <p>If this is included, it filters the results to only the scrapers that
     * match the filter.</p>
     */
    inline ListScrapersRequest& WithFilters(const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& value) { SetFilters(value); return *this;}

    /**
     * <p>(Optional) A list of key-value pairs to filter the list of scrapers returned.
     * Keys include <code>status</code>, <code>sourceArn</code>,
     * <code>destinationArn</code>, and <code>alias</code>.</p> <p>Filters on the same
     * key are <code>OR</code>'d together, and filters on different keys are
     * <code>AND</code>'d together. For example,
     * <code>status=ACTIVE&amp;status=CREATING&amp;alias=Test</code>, will return all
     * scrapers that have the alias Test, and are either in status ACTIVE or
     * CREATING.</p> <p>To find all active scrapers that are sending metrics to a
     * specific Amazon Managed Service for Prometheus workspace, you would use the ARN
     * of the workspace in a query:</p> <p>
     * <code>status=ACTIVE&amp;destinationArn=arn:aws:aps:us-east-1:123456789012:workspace/ws-example1-1234-abcd-56ef-123456789012</code>
     * </p> <p>If this is included, it filters the results to only the scrapers that
     * match the filter.</p>
     */
    inline ListScrapersRequest& WithFilters(Aws::Map<Aws::String, Aws::Vector<Aws::String>>&& value) { SetFilters(std::move(value)); return *this;}

    /**
     * <p>(Optional) A list of key-value pairs to filter the list of scrapers returned.
     * Keys include <code>status</code>, <code>sourceArn</code>,
     * <code>destinationArn</code>, and <code>alias</code>.</p> <p>Filters on the same
     * key are <code>OR</code>'d together, and filters on different keys are
     * <code>AND</code>'d together. For example,
     * <code>status=ACTIVE&amp;status=CREATING&amp;alias=Test</code>, will return all
     * scrapers that have the alias Test, and are either in status ACTIVE or
     * CREATING.</p> <p>To find all active scrapers that are sending metrics to a
     * specific Amazon Managed Service for Prometheus workspace, you would use the ARN
     * of the workspace in a query:</p> <p>
     * <code>status=ACTIVE&amp;destinationArn=arn:aws:aps:us-east-1:123456789012:workspace/ws-example1-1234-abcd-56ef-123456789012</code>
     * </p> <p>If this is included, it filters the results to only the scrapers that
     * match the filter.</p>
     */
    inline ListScrapersRequest& AddFilters(const Aws::String& key, const Aws::Vector<Aws::String>& value) { m_filtersHasBeenSet = true; m_filters.emplace(key, value); return *this; }

    /**
     * <p>(Optional) A list of key-value pairs to filter the list of scrapers returned.
     * Keys include <code>status</code>, <code>sourceArn</code>,
     * <code>destinationArn</code>, and <code>alias</code>.</p> <p>Filters on the same
     * key are <code>OR</code>'d together, and filters on different keys are
     * <code>AND</code>'d together. For example,
     * <code>status=ACTIVE&amp;status=CREATING&amp;alias=Test</code>, will return all
     * scrapers that have the alias Test, and are either in status ACTIVE or
     * CREATING.</p> <p>To find all active scrapers that are sending metrics to a
     * specific Amazon Managed Service for Prometheus workspace, you would use the ARN
     * of the workspace in a query:</p> <p>
     * <code>status=ACTIVE&amp;destinationArn=arn:aws:aps:us-east-1:123456789012:workspace/ws-example1-1234-abcd-56ef-123456789012</code>
     * </p> <p>If this is included, it filters the results to only the scrapers that
     * match the filter.</p>
     */
    inline ListScrapersRequest& AddFilters(Aws::String&& key, const Aws::Vector<Aws::String>& value) { m_filtersHasBeenSet = true; m_filters.emplace(std::move(key), value); return *this; }

    /**
     * <p>(Optional) A list of key-value pairs to filter the list of scrapers returned.
     * Keys include <code>status</code>, <code>sourceArn</code>,
     * <code>destinationArn</code>, and <code>alias</code>.</p> <p>Filters on the same
     * key are <code>OR</code>'d together, and filters on different keys are
     * <code>AND</code>'d together. For example,
     * <code>status=ACTIVE&amp;status=CREATING&amp;alias=Test</code>, will return all
     * scrapers that have the alias Test, and are either in status ACTIVE or
     * CREATING.</p> <p>To find all active scrapers that are sending metrics to a
     * specific Amazon Managed Service for Prometheus workspace, you would use the ARN
     * of the workspace in a query:</p> <p>
     * <code>status=ACTIVE&amp;destinationArn=arn:aws:aps:us-east-1:123456789012:workspace/ws-example1-1234-abcd-56ef-123456789012</code>
     * </p> <p>If this is included, it filters the results to only the scrapers that
     * match the filter.</p>
     */
    inline ListScrapersRequest& AddFilters(const Aws::String& key, Aws::Vector<Aws::String>&& value) { m_filtersHasBeenSet = true; m_filters.emplace(key, std::move(value)); return *this; }

    /**
     * <p>(Optional) A list of key-value pairs to filter the list of scrapers returned.
     * Keys include <code>status</code>, <code>sourceArn</code>,
     * <code>destinationArn</code>, and <code>alias</code>.</p> <p>Filters on the same
     * key are <code>OR</code>'d together, and filters on different keys are
     * <code>AND</code>'d together. For example,
     * <code>status=ACTIVE&amp;status=CREATING&amp;alias=Test</code>, will return all
     * scrapers that have the alias Test, and are either in status ACTIVE or
     * CREATING.</p> <p>To find all active scrapers that are sending metrics to a
     * specific Amazon Managed Service for Prometheus workspace, you would use the ARN
     * of the workspace in a query:</p> <p>
     * <code>status=ACTIVE&amp;destinationArn=arn:aws:aps:us-east-1:123456789012:workspace/ws-example1-1234-abcd-56ef-123456789012</code>
     * </p> <p>If this is included, it filters the results to only the scrapers that
     * match the filter.</p>
     */
    inline ListScrapersRequest& AddFilters(Aws::String&& key, Aws::Vector<Aws::String>&& value) { m_filtersHasBeenSet = true; m_filters.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>(Optional) A list of key-value pairs to filter the list of scrapers returned.
     * Keys include <code>status</code>, <code>sourceArn</code>,
     * <code>destinationArn</code>, and <code>alias</code>.</p> <p>Filters on the same
     * key are <code>OR</code>'d together, and filters on different keys are
     * <code>AND</code>'d together. For example,
     * <code>status=ACTIVE&amp;status=CREATING&amp;alias=Test</code>, will return all
     * scrapers that have the alias Test, and are either in status ACTIVE or
     * CREATING.</p> <p>To find all active scrapers that are sending metrics to a
     * specific Amazon Managed Service for Prometheus workspace, you would use the ARN
     * of the workspace in a query:</p> <p>
     * <code>status=ACTIVE&amp;destinationArn=arn:aws:aps:us-east-1:123456789012:workspace/ws-example1-1234-abcd-56ef-123456789012</code>
     * </p> <p>If this is included, it filters the results to only the scrapers that
     * match the filter.</p>
     */
    inline ListScrapersRequest& AddFilters(const char* key, Aws::Vector<Aws::String>&& value) { m_filtersHasBeenSet = true; m_filters.emplace(key, std::move(value)); return *this; }

    /**
     * <p>(Optional) A list of key-value pairs to filter the list of scrapers returned.
     * Keys include <code>status</code>, <code>sourceArn</code>,
     * <code>destinationArn</code>, and <code>alias</code>.</p> <p>Filters on the same
     * key are <code>OR</code>'d together, and filters on different keys are
     * <code>AND</code>'d together. For example,
     * <code>status=ACTIVE&amp;status=CREATING&amp;alias=Test</code>, will return all
     * scrapers that have the alias Test, and are either in status ACTIVE or
     * CREATING.</p> <p>To find all active scrapers that are sending metrics to a
     * specific Amazon Managed Service for Prometheus workspace, you would use the ARN
     * of the workspace in a query:</p> <p>
     * <code>status=ACTIVE&amp;destinationArn=arn:aws:aps:us-east-1:123456789012:workspace/ws-example1-1234-abcd-56ef-123456789012</code>
     * </p> <p>If this is included, it filters the results to only the scrapers that
     * match the filter.</p>
     */
    inline ListScrapersRequest& AddFilters(const char* key, const Aws::Vector<Aws::String>& value) { m_filtersHasBeenSet = true; m_filters.emplace(key, value); return *this; }


    /**
     * <p>Optional) The maximum number of scrapers to return in one
     * <code>ListScrapers</code> operation. The range is 1-1000.</p> <p>If you omit
     * this parameter, the default of 100 is used.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>Optional) The maximum number of scrapers to return in one
     * <code>ListScrapers</code> operation. The range is 1-1000.</p> <p>If you omit
     * this parameter, the default of 100 is used.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>Optional) The maximum number of scrapers to return in one
     * <code>ListScrapers</code> operation. The range is 1-1000.</p> <p>If you omit
     * this parameter, the default of 100 is used.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>Optional) The maximum number of scrapers to return in one
     * <code>ListScrapers</code> operation. The range is 1-1000.</p> <p>If you omit
     * this parameter, the default of 100 is used.</p>
     */
    inline ListScrapersRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>(Optional) The token for the next set of items to return. (You received this
     * token from a previous call.)</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>(Optional) The token for the next set of items to return. (You received this
     * token from a previous call.)</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>(Optional) The token for the next set of items to return. (You received this
     * token from a previous call.)</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>(Optional) The token for the next set of items to return. (You received this
     * token from a previous call.)</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>(Optional) The token for the next set of items to return. (You received this
     * token from a previous call.)</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>(Optional) The token for the next set of items to return. (You received this
     * token from a previous call.)</p>
     */
    inline ListScrapersRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>(Optional) The token for the next set of items to return. (You received this
     * token from a previous call.)</p>
     */
    inline ListScrapersRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>(Optional) The token for the next set of items to return. (You received this
     * token from a previous call.)</p>
     */
    inline ListScrapersRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Map<Aws::String, Aws::Vector<Aws::String>> m_filters;
    bool m_filtersHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace PrometheusService
} // namespace Aws
