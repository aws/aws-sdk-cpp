/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/iot/IoTRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace IoT
{
namespace Model
{

  /**
   */
  class ListSecurityProfilesRequest : public IoTRequest
  {
  public:
    AWS_IOT_API ListSecurityProfilesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListSecurityProfiles"; }

    AWS_IOT_API Aws::String SerializePayload() const override;

    AWS_IOT_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p>The token for the next set of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token for the next set of results.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>The token for the next set of results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The token for the next set of results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>The token for the next set of results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>The token for the next set of results.</p>
     */
    inline ListSecurityProfilesRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token for the next set of results.</p>
     */
    inline ListSecurityProfilesRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token for the next set of results.</p>
     */
    inline ListSecurityProfilesRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The maximum number of results to return at one time.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of results to return at one time.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of results to return at one time.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of results to return at one time.</p>
     */
    inline ListSecurityProfilesRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>A filter to limit results to the security profiles that use the defined
     * dimension. Cannot be used with <code>metricName</code> </p>
     */
    inline const Aws::String& GetDimensionName() const{ return m_dimensionName; }

    /**
     * <p>A filter to limit results to the security profiles that use the defined
     * dimension. Cannot be used with <code>metricName</code> </p>
     */
    inline bool DimensionNameHasBeenSet() const { return m_dimensionNameHasBeenSet; }

    /**
     * <p>A filter to limit results to the security profiles that use the defined
     * dimension. Cannot be used with <code>metricName</code> </p>
     */
    inline void SetDimensionName(const Aws::String& value) { m_dimensionNameHasBeenSet = true; m_dimensionName = value; }

    /**
     * <p>A filter to limit results to the security profiles that use the defined
     * dimension. Cannot be used with <code>metricName</code> </p>
     */
    inline void SetDimensionName(Aws::String&& value) { m_dimensionNameHasBeenSet = true; m_dimensionName = std::move(value); }

    /**
     * <p>A filter to limit results to the security profiles that use the defined
     * dimension. Cannot be used with <code>metricName</code> </p>
     */
    inline void SetDimensionName(const char* value) { m_dimensionNameHasBeenSet = true; m_dimensionName.assign(value); }

    /**
     * <p>A filter to limit results to the security profiles that use the defined
     * dimension. Cannot be used with <code>metricName</code> </p>
     */
    inline ListSecurityProfilesRequest& WithDimensionName(const Aws::String& value) { SetDimensionName(value); return *this;}

    /**
     * <p>A filter to limit results to the security profiles that use the defined
     * dimension. Cannot be used with <code>metricName</code> </p>
     */
    inline ListSecurityProfilesRequest& WithDimensionName(Aws::String&& value) { SetDimensionName(std::move(value)); return *this;}

    /**
     * <p>A filter to limit results to the security profiles that use the defined
     * dimension. Cannot be used with <code>metricName</code> </p>
     */
    inline ListSecurityProfilesRequest& WithDimensionName(const char* value) { SetDimensionName(value); return *this;}


    /**
     * <p> The name of the custom metric. Cannot be used with
     * <code>dimensionName</code>. </p>
     */
    inline const Aws::String& GetMetricName() const{ return m_metricName; }

    /**
     * <p> The name of the custom metric. Cannot be used with
     * <code>dimensionName</code>. </p>
     */
    inline bool MetricNameHasBeenSet() const { return m_metricNameHasBeenSet; }

    /**
     * <p> The name of the custom metric. Cannot be used with
     * <code>dimensionName</code>. </p>
     */
    inline void SetMetricName(const Aws::String& value) { m_metricNameHasBeenSet = true; m_metricName = value; }

    /**
     * <p> The name of the custom metric. Cannot be used with
     * <code>dimensionName</code>. </p>
     */
    inline void SetMetricName(Aws::String&& value) { m_metricNameHasBeenSet = true; m_metricName = std::move(value); }

    /**
     * <p> The name of the custom metric. Cannot be used with
     * <code>dimensionName</code>. </p>
     */
    inline void SetMetricName(const char* value) { m_metricNameHasBeenSet = true; m_metricName.assign(value); }

    /**
     * <p> The name of the custom metric. Cannot be used with
     * <code>dimensionName</code>. </p>
     */
    inline ListSecurityProfilesRequest& WithMetricName(const Aws::String& value) { SetMetricName(value); return *this;}

    /**
     * <p> The name of the custom metric. Cannot be used with
     * <code>dimensionName</code>. </p>
     */
    inline ListSecurityProfilesRequest& WithMetricName(Aws::String&& value) { SetMetricName(std::move(value)); return *this;}

    /**
     * <p> The name of the custom metric. Cannot be used with
     * <code>dimensionName</code>. </p>
     */
    inline ListSecurityProfilesRequest& WithMetricName(const char* value) { SetMetricName(value); return *this;}

  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_dimensionName;
    bool m_dimensionNameHasBeenSet = false;

    Aws::String m_metricName;
    bool m_metricNameHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
