﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/config/ConfigService_EXPORTS.h>
#include <aws/config/ConfigServiceRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace ConfigService
{
namespace Model
{

  /**
   */
  class SelectAggregateResourceConfigRequest : public ConfigServiceRequest
  {
  public:
    AWS_CONFIGSERVICE_API SelectAggregateResourceConfigRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "SelectAggregateResourceConfig"; }

    AWS_CONFIGSERVICE_API Aws::String SerializePayload() const override;

    AWS_CONFIGSERVICE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The SQL query SELECT command. </p>
     */
    inline const Aws::String& GetExpression() const{ return m_expression; }
    inline bool ExpressionHasBeenSet() const { return m_expressionHasBeenSet; }
    inline void SetExpression(const Aws::String& value) { m_expressionHasBeenSet = true; m_expression = value; }
    inline void SetExpression(Aws::String&& value) { m_expressionHasBeenSet = true; m_expression = std::move(value); }
    inline void SetExpression(const char* value) { m_expressionHasBeenSet = true; m_expression.assign(value); }
    inline SelectAggregateResourceConfigRequest& WithExpression(const Aws::String& value) { SetExpression(value); return *this;}
    inline SelectAggregateResourceConfigRequest& WithExpression(Aws::String&& value) { SetExpression(std::move(value)); return *this;}
    inline SelectAggregateResourceConfigRequest& WithExpression(const char* value) { SetExpression(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the configuration aggregator.</p>
     */
    inline const Aws::String& GetConfigurationAggregatorName() const{ return m_configurationAggregatorName; }
    inline bool ConfigurationAggregatorNameHasBeenSet() const { return m_configurationAggregatorNameHasBeenSet; }
    inline void SetConfigurationAggregatorName(const Aws::String& value) { m_configurationAggregatorNameHasBeenSet = true; m_configurationAggregatorName = value; }
    inline void SetConfigurationAggregatorName(Aws::String&& value) { m_configurationAggregatorNameHasBeenSet = true; m_configurationAggregatorName = std::move(value); }
    inline void SetConfigurationAggregatorName(const char* value) { m_configurationAggregatorNameHasBeenSet = true; m_configurationAggregatorName.assign(value); }
    inline SelectAggregateResourceConfigRequest& WithConfigurationAggregatorName(const Aws::String& value) { SetConfigurationAggregatorName(value); return *this;}
    inline SelectAggregateResourceConfigRequest& WithConfigurationAggregatorName(Aws::String&& value) { SetConfigurationAggregatorName(std::move(value)); return *this;}
    inline SelectAggregateResourceConfigRequest& WithConfigurationAggregatorName(const char* value) { SetConfigurationAggregatorName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of query results returned on each page. </p>
     */
    inline int GetLimit() const{ return m_limit; }
    inline bool LimitHasBeenSet() const { return m_limitHasBeenSet; }
    inline void SetLimit(int value) { m_limitHasBeenSet = true; m_limit = value; }
    inline SelectAggregateResourceConfigRequest& WithLimit(int value) { SetLimit(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of query results returned on each page. Config also allows
     * the Limit request parameter.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline SelectAggregateResourceConfigRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The nextToken string returned in a previous request that you use to request
     * the next page of results in a paginated response. </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }
    inline SelectAggregateResourceConfigRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline SelectAggregateResourceConfigRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline SelectAggregateResourceConfigRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}
  private:

    Aws::String m_expression;
    bool m_expressionHasBeenSet = false;

    Aws::String m_configurationAggregatorName;
    bool m_configurationAggregatorNameHasBeenSet = false;

    int m_limit;
    bool m_limitHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws
