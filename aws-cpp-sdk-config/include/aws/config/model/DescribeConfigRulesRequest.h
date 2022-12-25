/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/config/ConfigService_EXPORTS.h>
#include <aws/config/ConfigServiceRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/config/model/DescribeConfigRulesFilters.h>
#include <utility>

namespace Aws
{
namespace ConfigService
{
namespace Model
{

  /**
   * <p/><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/DescribeConfigRulesRequest">AWS
   * API Reference</a></p>
   */
  class DescribeConfigRulesRequest : public ConfigServiceRequest
  {
  public:
    AWS_CONFIGSERVICE_API DescribeConfigRulesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeConfigRules"; }

    AWS_CONFIGSERVICE_API Aws::String SerializePayload() const override;

    AWS_CONFIGSERVICE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The names of the Config rules for which you want details. If you do not
     * specify any names, Config returns details for all your rules.</p>
     */
    inline const Aws::Vector<Aws::String>& GetConfigRuleNames() const{ return m_configRuleNames; }

    /**
     * <p>The names of the Config rules for which you want details. If you do not
     * specify any names, Config returns details for all your rules.</p>
     */
    inline bool ConfigRuleNamesHasBeenSet() const { return m_configRuleNamesHasBeenSet; }

    /**
     * <p>The names of the Config rules for which you want details. If you do not
     * specify any names, Config returns details for all your rules.</p>
     */
    inline void SetConfigRuleNames(const Aws::Vector<Aws::String>& value) { m_configRuleNamesHasBeenSet = true; m_configRuleNames = value; }

    /**
     * <p>The names of the Config rules for which you want details. If you do not
     * specify any names, Config returns details for all your rules.</p>
     */
    inline void SetConfigRuleNames(Aws::Vector<Aws::String>&& value) { m_configRuleNamesHasBeenSet = true; m_configRuleNames = std::move(value); }

    /**
     * <p>The names of the Config rules for which you want details. If you do not
     * specify any names, Config returns details for all your rules.</p>
     */
    inline DescribeConfigRulesRequest& WithConfigRuleNames(const Aws::Vector<Aws::String>& value) { SetConfigRuleNames(value); return *this;}

    /**
     * <p>The names of the Config rules for which you want details. If you do not
     * specify any names, Config returns details for all your rules.</p>
     */
    inline DescribeConfigRulesRequest& WithConfigRuleNames(Aws::Vector<Aws::String>&& value) { SetConfigRuleNames(std::move(value)); return *this;}

    /**
     * <p>The names of the Config rules for which you want details. If you do not
     * specify any names, Config returns details for all your rules.</p>
     */
    inline DescribeConfigRulesRequest& AddConfigRuleNames(const Aws::String& value) { m_configRuleNamesHasBeenSet = true; m_configRuleNames.push_back(value); return *this; }

    /**
     * <p>The names of the Config rules for which you want details. If you do not
     * specify any names, Config returns details for all your rules.</p>
     */
    inline DescribeConfigRulesRequest& AddConfigRuleNames(Aws::String&& value) { m_configRuleNamesHasBeenSet = true; m_configRuleNames.push_back(std::move(value)); return *this; }

    /**
     * <p>The names of the Config rules for which you want details. If you do not
     * specify any names, Config returns details for all your rules.</p>
     */
    inline DescribeConfigRulesRequest& AddConfigRuleNames(const char* value) { m_configRuleNamesHasBeenSet = true; m_configRuleNames.push_back(value); return *this; }


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
    inline DescribeConfigRulesRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The <code>nextToken</code> string returned on a previous page that you use to
     * get the next page of results in a paginated response.</p>
     */
    inline DescribeConfigRulesRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The <code>nextToken</code> string returned on a previous page that you use to
     * get the next page of results in a paginated response.</p>
     */
    inline DescribeConfigRulesRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>Returns a list of Detecive or Proactive Config rules. By default, this API
     * returns an unfiltered list.</p>
     */
    inline const DescribeConfigRulesFilters& GetFilters() const{ return m_filters; }

    /**
     * <p>Returns a list of Detecive or Proactive Config rules. By default, this API
     * returns an unfiltered list.</p>
     */
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }

    /**
     * <p>Returns a list of Detecive or Proactive Config rules. By default, this API
     * returns an unfiltered list.</p>
     */
    inline void SetFilters(const DescribeConfigRulesFilters& value) { m_filtersHasBeenSet = true; m_filters = value; }

    /**
     * <p>Returns a list of Detecive or Proactive Config rules. By default, this API
     * returns an unfiltered list.</p>
     */
    inline void SetFilters(DescribeConfigRulesFilters&& value) { m_filtersHasBeenSet = true; m_filters = std::move(value); }

    /**
     * <p>Returns a list of Detecive or Proactive Config rules. By default, this API
     * returns an unfiltered list.</p>
     */
    inline DescribeConfigRulesRequest& WithFilters(const DescribeConfigRulesFilters& value) { SetFilters(value); return *this;}

    /**
     * <p>Returns a list of Detecive or Proactive Config rules. By default, this API
     * returns an unfiltered list.</p>
     */
    inline DescribeConfigRulesRequest& WithFilters(DescribeConfigRulesFilters&& value) { SetFilters(std::move(value)); return *this;}

  private:

    Aws::Vector<Aws::String> m_configRuleNames;
    bool m_configRuleNamesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    DescribeConfigRulesFilters m_filters;
    bool m_filtersHasBeenSet = false;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws
