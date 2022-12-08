/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector2/Inspector2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/inspector2/model/LambdaFunctionSortBy.h>
#include <aws/inspector2/model/SortOrder.h>
#include <aws/inspector2/model/StringFilter.h>
#include <aws/inspector2/model/MapFilter.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace Inspector2
{
namespace Model
{

  /**
   * <p>The details that define a findings aggregation based on AWS Lambda
   * functions.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/inspector2-2020-06-08/LambdaFunctionAggregation">AWS
   * API Reference</a></p>
   */
  class LambdaFunctionAggregation
  {
  public:
    AWS_INSPECTOR2_API LambdaFunctionAggregation();
    AWS_INSPECTOR2_API LambdaFunctionAggregation(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR2_API LambdaFunctionAggregation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The AWS Lambda function names to include in the aggregation results.</p>
     */
    inline const Aws::Vector<StringFilter>& GetFunctionNames() const{ return m_functionNames; }

    /**
     * <p>The AWS Lambda function names to include in the aggregation results.</p>
     */
    inline bool FunctionNamesHasBeenSet() const { return m_functionNamesHasBeenSet; }

    /**
     * <p>The AWS Lambda function names to include in the aggregation results.</p>
     */
    inline void SetFunctionNames(const Aws::Vector<StringFilter>& value) { m_functionNamesHasBeenSet = true; m_functionNames = value; }

    /**
     * <p>The AWS Lambda function names to include in the aggregation results.</p>
     */
    inline void SetFunctionNames(Aws::Vector<StringFilter>&& value) { m_functionNamesHasBeenSet = true; m_functionNames = std::move(value); }

    /**
     * <p>The AWS Lambda function names to include in the aggregation results.</p>
     */
    inline LambdaFunctionAggregation& WithFunctionNames(const Aws::Vector<StringFilter>& value) { SetFunctionNames(value); return *this;}

    /**
     * <p>The AWS Lambda function names to include in the aggregation results.</p>
     */
    inline LambdaFunctionAggregation& WithFunctionNames(Aws::Vector<StringFilter>&& value) { SetFunctionNames(std::move(value)); return *this;}

    /**
     * <p>The AWS Lambda function names to include in the aggregation results.</p>
     */
    inline LambdaFunctionAggregation& AddFunctionNames(const StringFilter& value) { m_functionNamesHasBeenSet = true; m_functionNames.push_back(value); return *this; }

    /**
     * <p>The AWS Lambda function names to include in the aggregation results.</p>
     */
    inline LambdaFunctionAggregation& AddFunctionNames(StringFilter&& value) { m_functionNamesHasBeenSet = true; m_functionNames.push_back(std::move(value)); return *this; }


    /**
     * <p>The tags to include in the aggregation results.</p>
     */
    inline const Aws::Vector<MapFilter>& GetFunctionTags() const{ return m_functionTags; }

    /**
     * <p>The tags to include in the aggregation results.</p>
     */
    inline bool FunctionTagsHasBeenSet() const { return m_functionTagsHasBeenSet; }

    /**
     * <p>The tags to include in the aggregation results.</p>
     */
    inline void SetFunctionTags(const Aws::Vector<MapFilter>& value) { m_functionTagsHasBeenSet = true; m_functionTags = value; }

    /**
     * <p>The tags to include in the aggregation results.</p>
     */
    inline void SetFunctionTags(Aws::Vector<MapFilter>&& value) { m_functionTagsHasBeenSet = true; m_functionTags = std::move(value); }

    /**
     * <p>The tags to include in the aggregation results.</p>
     */
    inline LambdaFunctionAggregation& WithFunctionTags(const Aws::Vector<MapFilter>& value) { SetFunctionTags(value); return *this;}

    /**
     * <p>The tags to include in the aggregation results.</p>
     */
    inline LambdaFunctionAggregation& WithFunctionTags(Aws::Vector<MapFilter>&& value) { SetFunctionTags(std::move(value)); return *this;}

    /**
     * <p>The tags to include in the aggregation results.</p>
     */
    inline LambdaFunctionAggregation& AddFunctionTags(const MapFilter& value) { m_functionTagsHasBeenSet = true; m_functionTags.push_back(value); return *this; }

    /**
     * <p>The tags to include in the aggregation results.</p>
     */
    inline LambdaFunctionAggregation& AddFunctionTags(MapFilter&& value) { m_functionTagsHasBeenSet = true; m_functionTags.push_back(std::move(value)); return *this; }


    /**
     * <p>The resource IDs to include in the aggregation results.</p>
     */
    inline const Aws::Vector<StringFilter>& GetResourceIds() const{ return m_resourceIds; }

    /**
     * <p>The resource IDs to include in the aggregation results.</p>
     */
    inline bool ResourceIdsHasBeenSet() const { return m_resourceIdsHasBeenSet; }

    /**
     * <p>The resource IDs to include in the aggregation results.</p>
     */
    inline void SetResourceIds(const Aws::Vector<StringFilter>& value) { m_resourceIdsHasBeenSet = true; m_resourceIds = value; }

    /**
     * <p>The resource IDs to include in the aggregation results.</p>
     */
    inline void SetResourceIds(Aws::Vector<StringFilter>&& value) { m_resourceIdsHasBeenSet = true; m_resourceIds = std::move(value); }

    /**
     * <p>The resource IDs to include in the aggregation results.</p>
     */
    inline LambdaFunctionAggregation& WithResourceIds(const Aws::Vector<StringFilter>& value) { SetResourceIds(value); return *this;}

    /**
     * <p>The resource IDs to include in the aggregation results.</p>
     */
    inline LambdaFunctionAggregation& WithResourceIds(Aws::Vector<StringFilter>&& value) { SetResourceIds(std::move(value)); return *this;}

    /**
     * <p>The resource IDs to include in the aggregation results.</p>
     */
    inline LambdaFunctionAggregation& AddResourceIds(const StringFilter& value) { m_resourceIdsHasBeenSet = true; m_resourceIds.push_back(value); return *this; }

    /**
     * <p>The resource IDs to include in the aggregation results.</p>
     */
    inline LambdaFunctionAggregation& AddResourceIds(StringFilter&& value) { m_resourceIdsHasBeenSet = true; m_resourceIds.push_back(std::move(value)); return *this; }


    /**
     * <p>Returns findings aggregated by AWS Lambda function runtime environments.</p>
     */
    inline const Aws::Vector<StringFilter>& GetRuntimes() const{ return m_runtimes; }

    /**
     * <p>Returns findings aggregated by AWS Lambda function runtime environments.</p>
     */
    inline bool RuntimesHasBeenSet() const { return m_runtimesHasBeenSet; }

    /**
     * <p>Returns findings aggregated by AWS Lambda function runtime environments.</p>
     */
    inline void SetRuntimes(const Aws::Vector<StringFilter>& value) { m_runtimesHasBeenSet = true; m_runtimes = value; }

    /**
     * <p>Returns findings aggregated by AWS Lambda function runtime environments.</p>
     */
    inline void SetRuntimes(Aws::Vector<StringFilter>&& value) { m_runtimesHasBeenSet = true; m_runtimes = std::move(value); }

    /**
     * <p>Returns findings aggregated by AWS Lambda function runtime environments.</p>
     */
    inline LambdaFunctionAggregation& WithRuntimes(const Aws::Vector<StringFilter>& value) { SetRuntimes(value); return *this;}

    /**
     * <p>Returns findings aggregated by AWS Lambda function runtime environments.</p>
     */
    inline LambdaFunctionAggregation& WithRuntimes(Aws::Vector<StringFilter>&& value) { SetRuntimes(std::move(value)); return *this;}

    /**
     * <p>Returns findings aggregated by AWS Lambda function runtime environments.</p>
     */
    inline LambdaFunctionAggregation& AddRuntimes(const StringFilter& value) { m_runtimesHasBeenSet = true; m_runtimes.push_back(value); return *this; }

    /**
     * <p>Returns findings aggregated by AWS Lambda function runtime environments.</p>
     */
    inline LambdaFunctionAggregation& AddRuntimes(StringFilter&& value) { m_runtimesHasBeenSet = true; m_runtimes.push_back(std::move(value)); return *this; }


    /**
     * <p>The finding severity to use for sorting the results.</p>
     */
    inline const LambdaFunctionSortBy& GetSortBy() const{ return m_sortBy; }

    /**
     * <p>The finding severity to use for sorting the results.</p>
     */
    inline bool SortByHasBeenSet() const { return m_sortByHasBeenSet; }

    /**
     * <p>The finding severity to use for sorting the results.</p>
     */
    inline void SetSortBy(const LambdaFunctionSortBy& value) { m_sortByHasBeenSet = true; m_sortBy = value; }

    /**
     * <p>The finding severity to use for sorting the results.</p>
     */
    inline void SetSortBy(LambdaFunctionSortBy&& value) { m_sortByHasBeenSet = true; m_sortBy = std::move(value); }

    /**
     * <p>The finding severity to use for sorting the results.</p>
     */
    inline LambdaFunctionAggregation& WithSortBy(const LambdaFunctionSortBy& value) { SetSortBy(value); return *this;}

    /**
     * <p>The finding severity to use for sorting the results.</p>
     */
    inline LambdaFunctionAggregation& WithSortBy(LambdaFunctionSortBy&& value) { SetSortBy(std::move(value)); return *this;}


    /**
     * <p>The order to use for sorting the results.</p>
     */
    inline const SortOrder& GetSortOrder() const{ return m_sortOrder; }

    /**
     * <p>The order to use for sorting the results.</p>
     */
    inline bool SortOrderHasBeenSet() const { return m_sortOrderHasBeenSet; }

    /**
     * <p>The order to use for sorting the results.</p>
     */
    inline void SetSortOrder(const SortOrder& value) { m_sortOrderHasBeenSet = true; m_sortOrder = value; }

    /**
     * <p>The order to use for sorting the results.</p>
     */
    inline void SetSortOrder(SortOrder&& value) { m_sortOrderHasBeenSet = true; m_sortOrder = std::move(value); }

    /**
     * <p>The order to use for sorting the results.</p>
     */
    inline LambdaFunctionAggregation& WithSortOrder(const SortOrder& value) { SetSortOrder(value); return *this;}

    /**
     * <p>The order to use for sorting the results.</p>
     */
    inline LambdaFunctionAggregation& WithSortOrder(SortOrder&& value) { SetSortOrder(std::move(value)); return *this;}

  private:

    Aws::Vector<StringFilter> m_functionNames;
    bool m_functionNamesHasBeenSet = false;

    Aws::Vector<MapFilter> m_functionTags;
    bool m_functionTagsHasBeenSet = false;

    Aws::Vector<StringFilter> m_resourceIds;
    bool m_resourceIdsHasBeenSet = false;

    Aws::Vector<StringFilter> m_runtimes;
    bool m_runtimesHasBeenSet = false;

    LambdaFunctionSortBy m_sortBy;
    bool m_sortByHasBeenSet = false;

    SortOrder m_sortOrder;
    bool m_sortOrderHasBeenSet = false;
  };

} // namespace Model
} // namespace Inspector2
} // namespace Aws
