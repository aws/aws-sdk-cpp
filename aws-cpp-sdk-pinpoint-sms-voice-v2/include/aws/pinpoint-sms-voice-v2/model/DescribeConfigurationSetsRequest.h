/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint-sms-voice-v2/PinpointSMSVoiceV2_EXPORTS.h>
#include <aws/pinpoint-sms-voice-v2/PinpointSMSVoiceV2Request.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/pinpoint-sms-voice-v2/model/ConfigurationSetFilter.h>
#include <utility>

namespace Aws
{
namespace PinpointSMSVoiceV2
{
namespace Model
{

  /**
   */
  class DescribeConfigurationSetsRequest : public PinpointSMSVoiceV2Request
  {
  public:
    AWS_PINPOINTSMSVOICEV2_API DescribeConfigurationSetsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeConfigurationSets"; }

    AWS_PINPOINTSMSVOICEV2_API Aws::String SerializePayload() const override;

    AWS_PINPOINTSMSVOICEV2_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>An array of strings. Each element can be either a ConfigurationSetName or
     * ConfigurationSetArn.</p>
     */
    inline const Aws::Vector<Aws::String>& GetConfigurationSetNames() const{ return m_configurationSetNames; }

    /**
     * <p>An array of strings. Each element can be either a ConfigurationSetName or
     * ConfigurationSetArn.</p>
     */
    inline bool ConfigurationSetNamesHasBeenSet() const { return m_configurationSetNamesHasBeenSet; }

    /**
     * <p>An array of strings. Each element can be either a ConfigurationSetName or
     * ConfigurationSetArn.</p>
     */
    inline void SetConfigurationSetNames(const Aws::Vector<Aws::String>& value) { m_configurationSetNamesHasBeenSet = true; m_configurationSetNames = value; }

    /**
     * <p>An array of strings. Each element can be either a ConfigurationSetName or
     * ConfigurationSetArn.</p>
     */
    inline void SetConfigurationSetNames(Aws::Vector<Aws::String>&& value) { m_configurationSetNamesHasBeenSet = true; m_configurationSetNames = std::move(value); }

    /**
     * <p>An array of strings. Each element can be either a ConfigurationSetName or
     * ConfigurationSetArn.</p>
     */
    inline DescribeConfigurationSetsRequest& WithConfigurationSetNames(const Aws::Vector<Aws::String>& value) { SetConfigurationSetNames(value); return *this;}

    /**
     * <p>An array of strings. Each element can be either a ConfigurationSetName or
     * ConfigurationSetArn.</p>
     */
    inline DescribeConfigurationSetsRequest& WithConfigurationSetNames(Aws::Vector<Aws::String>&& value) { SetConfigurationSetNames(std::move(value)); return *this;}

    /**
     * <p>An array of strings. Each element can be either a ConfigurationSetName or
     * ConfigurationSetArn.</p>
     */
    inline DescribeConfigurationSetsRequest& AddConfigurationSetNames(const Aws::String& value) { m_configurationSetNamesHasBeenSet = true; m_configurationSetNames.push_back(value); return *this; }

    /**
     * <p>An array of strings. Each element can be either a ConfigurationSetName or
     * ConfigurationSetArn.</p>
     */
    inline DescribeConfigurationSetsRequest& AddConfigurationSetNames(Aws::String&& value) { m_configurationSetNamesHasBeenSet = true; m_configurationSetNames.push_back(std::move(value)); return *this; }

    /**
     * <p>An array of strings. Each element can be either a ConfigurationSetName or
     * ConfigurationSetArn.</p>
     */
    inline DescribeConfigurationSetsRequest& AddConfigurationSetNames(const char* value) { m_configurationSetNamesHasBeenSet = true; m_configurationSetNames.push_back(value); return *this; }


    /**
     * <p>An array of filters to apply to the results that are returned.</p>
     */
    inline const Aws::Vector<ConfigurationSetFilter>& GetFilters() const{ return m_filters; }

    /**
     * <p>An array of filters to apply to the results that are returned.</p>
     */
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }

    /**
     * <p>An array of filters to apply to the results that are returned.</p>
     */
    inline void SetFilters(const Aws::Vector<ConfigurationSetFilter>& value) { m_filtersHasBeenSet = true; m_filters = value; }

    /**
     * <p>An array of filters to apply to the results that are returned.</p>
     */
    inline void SetFilters(Aws::Vector<ConfigurationSetFilter>&& value) { m_filtersHasBeenSet = true; m_filters = std::move(value); }

    /**
     * <p>An array of filters to apply to the results that are returned.</p>
     */
    inline DescribeConfigurationSetsRequest& WithFilters(const Aws::Vector<ConfigurationSetFilter>& value) { SetFilters(value); return *this;}

    /**
     * <p>An array of filters to apply to the results that are returned.</p>
     */
    inline DescribeConfigurationSetsRequest& WithFilters(Aws::Vector<ConfigurationSetFilter>&& value) { SetFilters(std::move(value)); return *this;}

    /**
     * <p>An array of filters to apply to the results that are returned.</p>
     */
    inline DescribeConfigurationSetsRequest& AddFilters(const ConfigurationSetFilter& value) { m_filtersHasBeenSet = true; m_filters.push_back(value); return *this; }

    /**
     * <p>An array of filters to apply to the results that are returned.</p>
     */
    inline DescribeConfigurationSetsRequest& AddFilters(ConfigurationSetFilter&& value) { m_filtersHasBeenSet = true; m_filters.push_back(std::move(value)); return *this; }


    /**
     * <p>The token to be used for the next set of paginated results. You don't need to
     * supply a value for this field in the initial request.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token to be used for the next set of paginated results. You don't need to
     * supply a value for this field in the initial request.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>The token to be used for the next set of paginated results. You don't need to
     * supply a value for this field in the initial request.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The token to be used for the next set of paginated results. You don't need to
     * supply a value for this field in the initial request.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>The token to be used for the next set of paginated results. You don't need to
     * supply a value for this field in the initial request.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>The token to be used for the next set of paginated results. You don't need to
     * supply a value for this field in the initial request.</p>
     */
    inline DescribeConfigurationSetsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token to be used for the next set of paginated results. You don't need to
     * supply a value for this field in the initial request.</p>
     */
    inline DescribeConfigurationSetsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token to be used for the next set of paginated results. You don't need to
     * supply a value for this field in the initial request.</p>
     */
    inline DescribeConfigurationSetsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The maximum number of results to return per each request.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of results to return per each request.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of results to return per each request.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of results to return per each request.</p>
     */
    inline DescribeConfigurationSetsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}

  private:

    Aws::Vector<Aws::String> m_configurationSetNames;
    bool m_configurationSetNamesHasBeenSet = false;

    Aws::Vector<ConfigurationSetFilter> m_filters;
    bool m_filtersHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;
  };

} // namespace Model
} // namespace PinpointSMSVoiceV2
} // namespace Aws
