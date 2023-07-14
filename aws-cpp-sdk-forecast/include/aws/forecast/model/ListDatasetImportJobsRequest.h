﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/forecast/ForecastService_EXPORTS.h>
#include <aws/forecast/ForecastServiceRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/forecast/model/Filter.h>
#include <utility>

namespace Aws
{
namespace ForecastService
{
namespace Model
{

  /**
   */
  class AWS_FORECASTSERVICE_API ListDatasetImportJobsRequest : public ForecastServiceRequest
  {
  public:
    ListDatasetImportJobsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListDatasetImportJobs"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>If the result of the previous request was truncated, the response includes a
     * <code>NextToken</code>. To retrieve the next set of results, use the token in
     * the next request. Tokens expire after 24 hours.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>If the result of the previous request was truncated, the response includes a
     * <code>NextToken</code>. To retrieve the next set of results, use the token in
     * the next request. Tokens expire after 24 hours.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>If the result of the previous request was truncated, the response includes a
     * <code>NextToken</code>. To retrieve the next set of results, use the token in
     * the next request. Tokens expire after 24 hours.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>If the result of the previous request was truncated, the response includes a
     * <code>NextToken</code>. To retrieve the next set of results, use the token in
     * the next request. Tokens expire after 24 hours.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>If the result of the previous request was truncated, the response includes a
     * <code>NextToken</code>. To retrieve the next set of results, use the token in
     * the next request. Tokens expire after 24 hours.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>If the result of the previous request was truncated, the response includes a
     * <code>NextToken</code>. To retrieve the next set of results, use the token in
     * the next request. Tokens expire after 24 hours.</p>
     */
    inline ListDatasetImportJobsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If the result of the previous request was truncated, the response includes a
     * <code>NextToken</code>. To retrieve the next set of results, use the token in
     * the next request. Tokens expire after 24 hours.</p>
     */
    inline ListDatasetImportJobsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If the result of the previous request was truncated, the response includes a
     * <code>NextToken</code>. To retrieve the next set of results, use the token in
     * the next request. Tokens expire after 24 hours.</p>
     */
    inline ListDatasetImportJobsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The number of items to return in the response.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The number of items to return in the response.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The number of items to return in the response.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The number of items to return in the response.</p>
     */
    inline ListDatasetImportJobsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>An array of filters. For each filter, you provide a condition and a match
     * statement. The condition is either <code>IS</code> or <code>IS_NOT</code>, which
     * specifies whether to include or exclude the datasets that match the statement
     * from the list, respectively. The match statement consists of a key and a
     * value.</p> <p> <b>Filter properties</b> </p> <ul> <li> <p>
     * <code>Condition</code> - The condition to apply. Valid values are
     * <code>IS</code> and <code>IS_NOT</code>. To include the datasets that match the
     * statement, specify <code>IS</code>. To exclude matching datasets, specify
     * <code>IS_NOT</code>.</p> </li> <li> <p> <code>Key</code> - The name of the
     * parameter to filter on. Valid values are <code>DatasetArn</code> and
     * <code>Status</code>.</p> </li> <li> <p> <code>Value</code> - The value to
     * match.</p> </li> </ul> <p>For example, to list all dataset import jobs whose
     * status is ACTIVE, you specify the following filter:</p> <p> <code>"Filters": [ {
     * "Condition": "IS", "Key": "Status", "Value": "ACTIVE" } ]</code> </p>
     */
    inline const Aws::Vector<Filter>& GetFilters() const{ return m_filters; }

    /**
     * <p>An array of filters. For each filter, you provide a condition and a match
     * statement. The condition is either <code>IS</code> or <code>IS_NOT</code>, which
     * specifies whether to include or exclude the datasets that match the statement
     * from the list, respectively. The match statement consists of a key and a
     * value.</p> <p> <b>Filter properties</b> </p> <ul> <li> <p>
     * <code>Condition</code> - The condition to apply. Valid values are
     * <code>IS</code> and <code>IS_NOT</code>. To include the datasets that match the
     * statement, specify <code>IS</code>. To exclude matching datasets, specify
     * <code>IS_NOT</code>.</p> </li> <li> <p> <code>Key</code> - The name of the
     * parameter to filter on. Valid values are <code>DatasetArn</code> and
     * <code>Status</code>.</p> </li> <li> <p> <code>Value</code> - The value to
     * match.</p> </li> </ul> <p>For example, to list all dataset import jobs whose
     * status is ACTIVE, you specify the following filter:</p> <p> <code>"Filters": [ {
     * "Condition": "IS", "Key": "Status", "Value": "ACTIVE" } ]</code> </p>
     */
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }

    /**
     * <p>An array of filters. For each filter, you provide a condition and a match
     * statement. The condition is either <code>IS</code> or <code>IS_NOT</code>, which
     * specifies whether to include or exclude the datasets that match the statement
     * from the list, respectively. The match statement consists of a key and a
     * value.</p> <p> <b>Filter properties</b> </p> <ul> <li> <p>
     * <code>Condition</code> - The condition to apply. Valid values are
     * <code>IS</code> and <code>IS_NOT</code>. To include the datasets that match the
     * statement, specify <code>IS</code>. To exclude matching datasets, specify
     * <code>IS_NOT</code>.</p> </li> <li> <p> <code>Key</code> - The name of the
     * parameter to filter on. Valid values are <code>DatasetArn</code> and
     * <code>Status</code>.</p> </li> <li> <p> <code>Value</code> - The value to
     * match.</p> </li> </ul> <p>For example, to list all dataset import jobs whose
     * status is ACTIVE, you specify the following filter:</p> <p> <code>"Filters": [ {
     * "Condition": "IS", "Key": "Status", "Value": "ACTIVE" } ]</code> </p>
     */
    inline void SetFilters(const Aws::Vector<Filter>& value) { m_filtersHasBeenSet = true; m_filters = value; }

    /**
     * <p>An array of filters. For each filter, you provide a condition and a match
     * statement. The condition is either <code>IS</code> or <code>IS_NOT</code>, which
     * specifies whether to include or exclude the datasets that match the statement
     * from the list, respectively. The match statement consists of a key and a
     * value.</p> <p> <b>Filter properties</b> </p> <ul> <li> <p>
     * <code>Condition</code> - The condition to apply. Valid values are
     * <code>IS</code> and <code>IS_NOT</code>. To include the datasets that match the
     * statement, specify <code>IS</code>. To exclude matching datasets, specify
     * <code>IS_NOT</code>.</p> </li> <li> <p> <code>Key</code> - The name of the
     * parameter to filter on. Valid values are <code>DatasetArn</code> and
     * <code>Status</code>.</p> </li> <li> <p> <code>Value</code> - The value to
     * match.</p> </li> </ul> <p>For example, to list all dataset import jobs whose
     * status is ACTIVE, you specify the following filter:</p> <p> <code>"Filters": [ {
     * "Condition": "IS", "Key": "Status", "Value": "ACTIVE" } ]</code> </p>
     */
    inline void SetFilters(Aws::Vector<Filter>&& value) { m_filtersHasBeenSet = true; m_filters = std::move(value); }

    /**
     * <p>An array of filters. For each filter, you provide a condition and a match
     * statement. The condition is either <code>IS</code> or <code>IS_NOT</code>, which
     * specifies whether to include or exclude the datasets that match the statement
     * from the list, respectively. The match statement consists of a key and a
     * value.</p> <p> <b>Filter properties</b> </p> <ul> <li> <p>
     * <code>Condition</code> - The condition to apply. Valid values are
     * <code>IS</code> and <code>IS_NOT</code>. To include the datasets that match the
     * statement, specify <code>IS</code>. To exclude matching datasets, specify
     * <code>IS_NOT</code>.</p> </li> <li> <p> <code>Key</code> - The name of the
     * parameter to filter on. Valid values are <code>DatasetArn</code> and
     * <code>Status</code>.</p> </li> <li> <p> <code>Value</code> - The value to
     * match.</p> </li> </ul> <p>For example, to list all dataset import jobs whose
     * status is ACTIVE, you specify the following filter:</p> <p> <code>"Filters": [ {
     * "Condition": "IS", "Key": "Status", "Value": "ACTIVE" } ]</code> </p>
     */
    inline ListDatasetImportJobsRequest& WithFilters(const Aws::Vector<Filter>& value) { SetFilters(value); return *this;}

    /**
     * <p>An array of filters. For each filter, you provide a condition and a match
     * statement. The condition is either <code>IS</code> or <code>IS_NOT</code>, which
     * specifies whether to include or exclude the datasets that match the statement
     * from the list, respectively. The match statement consists of a key and a
     * value.</p> <p> <b>Filter properties</b> </p> <ul> <li> <p>
     * <code>Condition</code> - The condition to apply. Valid values are
     * <code>IS</code> and <code>IS_NOT</code>. To include the datasets that match the
     * statement, specify <code>IS</code>. To exclude matching datasets, specify
     * <code>IS_NOT</code>.</p> </li> <li> <p> <code>Key</code> - The name of the
     * parameter to filter on. Valid values are <code>DatasetArn</code> and
     * <code>Status</code>.</p> </li> <li> <p> <code>Value</code> - The value to
     * match.</p> </li> </ul> <p>For example, to list all dataset import jobs whose
     * status is ACTIVE, you specify the following filter:</p> <p> <code>"Filters": [ {
     * "Condition": "IS", "Key": "Status", "Value": "ACTIVE" } ]</code> </p>
     */
    inline ListDatasetImportJobsRequest& WithFilters(Aws::Vector<Filter>&& value) { SetFilters(std::move(value)); return *this;}

    /**
     * <p>An array of filters. For each filter, you provide a condition and a match
     * statement. The condition is either <code>IS</code> or <code>IS_NOT</code>, which
     * specifies whether to include or exclude the datasets that match the statement
     * from the list, respectively. The match statement consists of a key and a
     * value.</p> <p> <b>Filter properties</b> </p> <ul> <li> <p>
     * <code>Condition</code> - The condition to apply. Valid values are
     * <code>IS</code> and <code>IS_NOT</code>. To include the datasets that match the
     * statement, specify <code>IS</code>. To exclude matching datasets, specify
     * <code>IS_NOT</code>.</p> </li> <li> <p> <code>Key</code> - The name of the
     * parameter to filter on. Valid values are <code>DatasetArn</code> and
     * <code>Status</code>.</p> </li> <li> <p> <code>Value</code> - The value to
     * match.</p> </li> </ul> <p>For example, to list all dataset import jobs whose
     * status is ACTIVE, you specify the following filter:</p> <p> <code>"Filters": [ {
     * "Condition": "IS", "Key": "Status", "Value": "ACTIVE" } ]</code> </p>
     */
    inline ListDatasetImportJobsRequest& AddFilters(const Filter& value) { m_filtersHasBeenSet = true; m_filters.push_back(value); return *this; }

    /**
     * <p>An array of filters. For each filter, you provide a condition and a match
     * statement. The condition is either <code>IS</code> or <code>IS_NOT</code>, which
     * specifies whether to include or exclude the datasets that match the statement
     * from the list, respectively. The match statement consists of a key and a
     * value.</p> <p> <b>Filter properties</b> </p> <ul> <li> <p>
     * <code>Condition</code> - The condition to apply. Valid values are
     * <code>IS</code> and <code>IS_NOT</code>. To include the datasets that match the
     * statement, specify <code>IS</code>. To exclude matching datasets, specify
     * <code>IS_NOT</code>.</p> </li> <li> <p> <code>Key</code> - The name of the
     * parameter to filter on. Valid values are <code>DatasetArn</code> and
     * <code>Status</code>.</p> </li> <li> <p> <code>Value</code> - The value to
     * match.</p> </li> </ul> <p>For example, to list all dataset import jobs whose
     * status is ACTIVE, you specify the following filter:</p> <p> <code>"Filters": [ {
     * "Condition": "IS", "Key": "Status", "Value": "ACTIVE" } ]</code> </p>
     */
    inline ListDatasetImportJobsRequest& AddFilters(Filter&& value) { m_filtersHasBeenSet = true; m_filters.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet;

    int m_maxResults;
    bool m_maxResultsHasBeenSet;

    Aws::Vector<Filter> m_filters;
    bool m_filtersHasBeenSet;
  };

} // namespace Model
} // namespace ForecastService
} // namespace Aws
