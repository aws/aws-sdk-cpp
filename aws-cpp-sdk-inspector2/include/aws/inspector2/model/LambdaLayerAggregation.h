/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector2/Inspector2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/inspector2/model/LambdaLayerSortBy.h>
#include <aws/inspector2/model/SortOrder.h>
#include <aws/inspector2/model/StringFilter.h>
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
   * <p>The details that define a findings aggregation based on an AWS Lambda
   * function's layers.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/inspector2-2020-06-08/LambdaLayerAggregation">AWS
   * API Reference</a></p>
   */
  class LambdaLayerAggregation
  {
  public:
    AWS_INSPECTOR2_API LambdaLayerAggregation();
    AWS_INSPECTOR2_API LambdaLayerAggregation(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR2_API LambdaLayerAggregation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The names of the AWS Lambda functions associated with the layers.</p>
     */
    inline const Aws::Vector<StringFilter>& GetFunctionNames() const{ return m_functionNames; }

    /**
     * <p>The names of the AWS Lambda functions associated with the layers.</p>
     */
    inline bool FunctionNamesHasBeenSet() const { return m_functionNamesHasBeenSet; }

    /**
     * <p>The names of the AWS Lambda functions associated with the layers.</p>
     */
    inline void SetFunctionNames(const Aws::Vector<StringFilter>& value) { m_functionNamesHasBeenSet = true; m_functionNames = value; }

    /**
     * <p>The names of the AWS Lambda functions associated with the layers.</p>
     */
    inline void SetFunctionNames(Aws::Vector<StringFilter>&& value) { m_functionNamesHasBeenSet = true; m_functionNames = std::move(value); }

    /**
     * <p>The names of the AWS Lambda functions associated with the layers.</p>
     */
    inline LambdaLayerAggregation& WithFunctionNames(const Aws::Vector<StringFilter>& value) { SetFunctionNames(value); return *this;}

    /**
     * <p>The names of the AWS Lambda functions associated with the layers.</p>
     */
    inline LambdaLayerAggregation& WithFunctionNames(Aws::Vector<StringFilter>&& value) { SetFunctionNames(std::move(value)); return *this;}

    /**
     * <p>The names of the AWS Lambda functions associated with the layers.</p>
     */
    inline LambdaLayerAggregation& AddFunctionNames(const StringFilter& value) { m_functionNamesHasBeenSet = true; m_functionNames.push_back(value); return *this; }

    /**
     * <p>The names of the AWS Lambda functions associated with the layers.</p>
     */
    inline LambdaLayerAggregation& AddFunctionNames(StringFilter&& value) { m_functionNamesHasBeenSet = true; m_functionNames.push_back(std::move(value)); return *this; }


    /**
     * <p>The Amazon Resource Name (ARN) of the AWS Lambda function layer. </p>
     */
    inline const Aws::Vector<StringFilter>& GetLayerArns() const{ return m_layerArns; }

    /**
     * <p>The Amazon Resource Name (ARN) of the AWS Lambda function layer. </p>
     */
    inline bool LayerArnsHasBeenSet() const { return m_layerArnsHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the AWS Lambda function layer. </p>
     */
    inline void SetLayerArns(const Aws::Vector<StringFilter>& value) { m_layerArnsHasBeenSet = true; m_layerArns = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the AWS Lambda function layer. </p>
     */
    inline void SetLayerArns(Aws::Vector<StringFilter>&& value) { m_layerArnsHasBeenSet = true; m_layerArns = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the AWS Lambda function layer. </p>
     */
    inline LambdaLayerAggregation& WithLayerArns(const Aws::Vector<StringFilter>& value) { SetLayerArns(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the AWS Lambda function layer. </p>
     */
    inline LambdaLayerAggregation& WithLayerArns(Aws::Vector<StringFilter>&& value) { SetLayerArns(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the AWS Lambda function layer. </p>
     */
    inline LambdaLayerAggregation& AddLayerArns(const StringFilter& value) { m_layerArnsHasBeenSet = true; m_layerArns.push_back(value); return *this; }

    /**
     * <p>The Amazon Resource Name (ARN) of the AWS Lambda function layer. </p>
     */
    inline LambdaLayerAggregation& AddLayerArns(StringFilter&& value) { m_layerArnsHasBeenSet = true; m_layerArns.push_back(std::move(value)); return *this; }


    /**
     * <p>The resource IDs for the AWS Lambda function layers.</p>
     */
    inline const Aws::Vector<StringFilter>& GetResourceIds() const{ return m_resourceIds; }

    /**
     * <p>The resource IDs for the AWS Lambda function layers.</p>
     */
    inline bool ResourceIdsHasBeenSet() const { return m_resourceIdsHasBeenSet; }

    /**
     * <p>The resource IDs for the AWS Lambda function layers.</p>
     */
    inline void SetResourceIds(const Aws::Vector<StringFilter>& value) { m_resourceIdsHasBeenSet = true; m_resourceIds = value; }

    /**
     * <p>The resource IDs for the AWS Lambda function layers.</p>
     */
    inline void SetResourceIds(Aws::Vector<StringFilter>&& value) { m_resourceIdsHasBeenSet = true; m_resourceIds = std::move(value); }

    /**
     * <p>The resource IDs for the AWS Lambda function layers.</p>
     */
    inline LambdaLayerAggregation& WithResourceIds(const Aws::Vector<StringFilter>& value) { SetResourceIds(value); return *this;}

    /**
     * <p>The resource IDs for the AWS Lambda function layers.</p>
     */
    inline LambdaLayerAggregation& WithResourceIds(Aws::Vector<StringFilter>&& value) { SetResourceIds(std::move(value)); return *this;}

    /**
     * <p>The resource IDs for the AWS Lambda function layers.</p>
     */
    inline LambdaLayerAggregation& AddResourceIds(const StringFilter& value) { m_resourceIdsHasBeenSet = true; m_resourceIds.push_back(value); return *this; }

    /**
     * <p>The resource IDs for the AWS Lambda function layers.</p>
     */
    inline LambdaLayerAggregation& AddResourceIds(StringFilter&& value) { m_resourceIdsHasBeenSet = true; m_resourceIds.push_back(std::move(value)); return *this; }


    /**
     * <p>The finding severity to use for sorting the results.</p>
     */
    inline const LambdaLayerSortBy& GetSortBy() const{ return m_sortBy; }

    /**
     * <p>The finding severity to use for sorting the results.</p>
     */
    inline bool SortByHasBeenSet() const { return m_sortByHasBeenSet; }

    /**
     * <p>The finding severity to use for sorting the results.</p>
     */
    inline void SetSortBy(const LambdaLayerSortBy& value) { m_sortByHasBeenSet = true; m_sortBy = value; }

    /**
     * <p>The finding severity to use for sorting the results.</p>
     */
    inline void SetSortBy(LambdaLayerSortBy&& value) { m_sortByHasBeenSet = true; m_sortBy = std::move(value); }

    /**
     * <p>The finding severity to use for sorting the results.</p>
     */
    inline LambdaLayerAggregation& WithSortBy(const LambdaLayerSortBy& value) { SetSortBy(value); return *this;}

    /**
     * <p>The finding severity to use for sorting the results.</p>
     */
    inline LambdaLayerAggregation& WithSortBy(LambdaLayerSortBy&& value) { SetSortBy(std::move(value)); return *this;}


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
    inline LambdaLayerAggregation& WithSortOrder(const SortOrder& value) { SetSortOrder(value); return *this;}

    /**
     * <p>The order to use for sorting the results.</p>
     */
    inline LambdaLayerAggregation& WithSortOrder(SortOrder&& value) { SetSortOrder(std::move(value)); return *this;}

  private:

    Aws::Vector<StringFilter> m_functionNames;
    bool m_functionNamesHasBeenSet = false;

    Aws::Vector<StringFilter> m_layerArns;
    bool m_layerArnsHasBeenSet = false;

    Aws::Vector<StringFilter> m_resourceIds;
    bool m_resourceIdsHasBeenSet = false;

    LambdaLayerSortBy m_sortBy;
    bool m_sortByHasBeenSet = false;

    SortOrder m_sortOrder;
    bool m_sortOrderHasBeenSet = false;
  };

} // namespace Model
} // namespace Inspector2
} // namespace Aws
