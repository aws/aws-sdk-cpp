/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/compute-optimizer/ComputeOptimizer_EXPORTS.h>
#include <aws/compute-optimizer/ComputeOptimizerRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/compute-optimizer/model/LambdaFunctionRecommendationFilter.h>
#include <utility>

namespace Aws
{
namespace ComputeOptimizer
{
namespace Model
{

  /**
   */
  class GetLambdaFunctionRecommendationsRequest : public ComputeOptimizerRequest
  {
  public:
    AWS_COMPUTEOPTIMIZER_API GetLambdaFunctionRecommendationsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetLambdaFunctionRecommendations"; }

    AWS_COMPUTEOPTIMIZER_API Aws::String SerializePayload() const override;

    AWS_COMPUTEOPTIMIZER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The Amazon Resource Name (ARN) of the functions for which to return
     * recommendations.</p> <p>You can specify a qualified or unqualified ARN. If you
     * specify an unqualified ARN without a function version suffix, Compute Optimizer
     * will return recommendations for the latest (<code>$LATEST</code>) version of the
     * function. If you specify a qualified ARN with a version suffix, Compute
     * Optimizer will return recommendations for the specified function version. For
     * more information about using function versions, see <a
     * href="https://docs.aws.amazon.com/lambda/latest/dg/configuration-versions.html#versioning-versions-using">Using
     * versions</a> in the <i>Lambda Developer Guide</i>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetFunctionArns() const{ return m_functionArns; }

    /**
     * <p>The Amazon Resource Name (ARN) of the functions for which to return
     * recommendations.</p> <p>You can specify a qualified or unqualified ARN. If you
     * specify an unqualified ARN without a function version suffix, Compute Optimizer
     * will return recommendations for the latest (<code>$LATEST</code>) version of the
     * function. If you specify a qualified ARN with a version suffix, Compute
     * Optimizer will return recommendations for the specified function version. For
     * more information about using function versions, see <a
     * href="https://docs.aws.amazon.com/lambda/latest/dg/configuration-versions.html#versioning-versions-using">Using
     * versions</a> in the <i>Lambda Developer Guide</i>.</p>
     */
    inline bool FunctionArnsHasBeenSet() const { return m_functionArnsHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the functions for which to return
     * recommendations.</p> <p>You can specify a qualified or unqualified ARN. If you
     * specify an unqualified ARN without a function version suffix, Compute Optimizer
     * will return recommendations for the latest (<code>$LATEST</code>) version of the
     * function. If you specify a qualified ARN with a version suffix, Compute
     * Optimizer will return recommendations for the specified function version. For
     * more information about using function versions, see <a
     * href="https://docs.aws.amazon.com/lambda/latest/dg/configuration-versions.html#versioning-versions-using">Using
     * versions</a> in the <i>Lambda Developer Guide</i>.</p>
     */
    inline void SetFunctionArns(const Aws::Vector<Aws::String>& value) { m_functionArnsHasBeenSet = true; m_functionArns = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the functions for which to return
     * recommendations.</p> <p>You can specify a qualified or unqualified ARN. If you
     * specify an unqualified ARN without a function version suffix, Compute Optimizer
     * will return recommendations for the latest (<code>$LATEST</code>) version of the
     * function. If you specify a qualified ARN with a version suffix, Compute
     * Optimizer will return recommendations for the specified function version. For
     * more information about using function versions, see <a
     * href="https://docs.aws.amazon.com/lambda/latest/dg/configuration-versions.html#versioning-versions-using">Using
     * versions</a> in the <i>Lambda Developer Guide</i>.</p>
     */
    inline void SetFunctionArns(Aws::Vector<Aws::String>&& value) { m_functionArnsHasBeenSet = true; m_functionArns = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the functions for which to return
     * recommendations.</p> <p>You can specify a qualified or unqualified ARN. If you
     * specify an unqualified ARN without a function version suffix, Compute Optimizer
     * will return recommendations for the latest (<code>$LATEST</code>) version of the
     * function. If you specify a qualified ARN with a version suffix, Compute
     * Optimizer will return recommendations for the specified function version. For
     * more information about using function versions, see <a
     * href="https://docs.aws.amazon.com/lambda/latest/dg/configuration-versions.html#versioning-versions-using">Using
     * versions</a> in the <i>Lambda Developer Guide</i>.</p>
     */
    inline GetLambdaFunctionRecommendationsRequest& WithFunctionArns(const Aws::Vector<Aws::String>& value) { SetFunctionArns(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the functions for which to return
     * recommendations.</p> <p>You can specify a qualified or unqualified ARN. If you
     * specify an unqualified ARN without a function version suffix, Compute Optimizer
     * will return recommendations for the latest (<code>$LATEST</code>) version of the
     * function. If you specify a qualified ARN with a version suffix, Compute
     * Optimizer will return recommendations for the specified function version. For
     * more information about using function versions, see <a
     * href="https://docs.aws.amazon.com/lambda/latest/dg/configuration-versions.html#versioning-versions-using">Using
     * versions</a> in the <i>Lambda Developer Guide</i>.</p>
     */
    inline GetLambdaFunctionRecommendationsRequest& WithFunctionArns(Aws::Vector<Aws::String>&& value) { SetFunctionArns(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the functions for which to return
     * recommendations.</p> <p>You can specify a qualified or unqualified ARN. If you
     * specify an unqualified ARN without a function version suffix, Compute Optimizer
     * will return recommendations for the latest (<code>$LATEST</code>) version of the
     * function. If you specify a qualified ARN with a version suffix, Compute
     * Optimizer will return recommendations for the specified function version. For
     * more information about using function versions, see <a
     * href="https://docs.aws.amazon.com/lambda/latest/dg/configuration-versions.html#versioning-versions-using">Using
     * versions</a> in the <i>Lambda Developer Guide</i>.</p>
     */
    inline GetLambdaFunctionRecommendationsRequest& AddFunctionArns(const Aws::String& value) { m_functionArnsHasBeenSet = true; m_functionArns.push_back(value); return *this; }

    /**
     * <p>The Amazon Resource Name (ARN) of the functions for which to return
     * recommendations.</p> <p>You can specify a qualified or unqualified ARN. If you
     * specify an unqualified ARN without a function version suffix, Compute Optimizer
     * will return recommendations for the latest (<code>$LATEST</code>) version of the
     * function. If you specify a qualified ARN with a version suffix, Compute
     * Optimizer will return recommendations for the specified function version. For
     * more information about using function versions, see <a
     * href="https://docs.aws.amazon.com/lambda/latest/dg/configuration-versions.html#versioning-versions-using">Using
     * versions</a> in the <i>Lambda Developer Guide</i>.</p>
     */
    inline GetLambdaFunctionRecommendationsRequest& AddFunctionArns(Aws::String&& value) { m_functionArnsHasBeenSet = true; m_functionArns.push_back(std::move(value)); return *this; }

    /**
     * <p>The Amazon Resource Name (ARN) of the functions for which to return
     * recommendations.</p> <p>You can specify a qualified or unqualified ARN. If you
     * specify an unqualified ARN without a function version suffix, Compute Optimizer
     * will return recommendations for the latest (<code>$LATEST</code>) version of the
     * function. If you specify a qualified ARN with a version suffix, Compute
     * Optimizer will return recommendations for the specified function version. For
     * more information about using function versions, see <a
     * href="https://docs.aws.amazon.com/lambda/latest/dg/configuration-versions.html#versioning-versions-using">Using
     * versions</a> in the <i>Lambda Developer Guide</i>.</p>
     */
    inline GetLambdaFunctionRecommendationsRequest& AddFunctionArns(const char* value) { m_functionArnsHasBeenSet = true; m_functionArns.push_back(value); return *this; }


    /**
     * <p>The ID of the Amazon Web Services account for which to return function
     * recommendations.</p> <p>If your account is the management account of an
     * organization, use this parameter to specify the member account for which you
     * want to return function recommendations.</p> <p>Only one account ID can be
     * specified per request.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAccountIds() const{ return m_accountIds; }

    /**
     * <p>The ID of the Amazon Web Services account for which to return function
     * recommendations.</p> <p>If your account is the management account of an
     * organization, use this parameter to specify the member account for which you
     * want to return function recommendations.</p> <p>Only one account ID can be
     * specified per request.</p>
     */
    inline bool AccountIdsHasBeenSet() const { return m_accountIdsHasBeenSet; }

    /**
     * <p>The ID of the Amazon Web Services account for which to return function
     * recommendations.</p> <p>If your account is the management account of an
     * organization, use this parameter to specify the member account for which you
     * want to return function recommendations.</p> <p>Only one account ID can be
     * specified per request.</p>
     */
    inline void SetAccountIds(const Aws::Vector<Aws::String>& value) { m_accountIdsHasBeenSet = true; m_accountIds = value; }

    /**
     * <p>The ID of the Amazon Web Services account for which to return function
     * recommendations.</p> <p>If your account is the management account of an
     * organization, use this parameter to specify the member account for which you
     * want to return function recommendations.</p> <p>Only one account ID can be
     * specified per request.</p>
     */
    inline void SetAccountIds(Aws::Vector<Aws::String>&& value) { m_accountIdsHasBeenSet = true; m_accountIds = std::move(value); }

    /**
     * <p>The ID of the Amazon Web Services account for which to return function
     * recommendations.</p> <p>If your account is the management account of an
     * organization, use this parameter to specify the member account for which you
     * want to return function recommendations.</p> <p>Only one account ID can be
     * specified per request.</p>
     */
    inline GetLambdaFunctionRecommendationsRequest& WithAccountIds(const Aws::Vector<Aws::String>& value) { SetAccountIds(value); return *this;}

    /**
     * <p>The ID of the Amazon Web Services account for which to return function
     * recommendations.</p> <p>If your account is the management account of an
     * organization, use this parameter to specify the member account for which you
     * want to return function recommendations.</p> <p>Only one account ID can be
     * specified per request.</p>
     */
    inline GetLambdaFunctionRecommendationsRequest& WithAccountIds(Aws::Vector<Aws::String>&& value) { SetAccountIds(std::move(value)); return *this;}

    /**
     * <p>The ID of the Amazon Web Services account for which to return function
     * recommendations.</p> <p>If your account is the management account of an
     * organization, use this parameter to specify the member account for which you
     * want to return function recommendations.</p> <p>Only one account ID can be
     * specified per request.</p>
     */
    inline GetLambdaFunctionRecommendationsRequest& AddAccountIds(const Aws::String& value) { m_accountIdsHasBeenSet = true; m_accountIds.push_back(value); return *this; }

    /**
     * <p>The ID of the Amazon Web Services account for which to return function
     * recommendations.</p> <p>If your account is the management account of an
     * organization, use this parameter to specify the member account for which you
     * want to return function recommendations.</p> <p>Only one account ID can be
     * specified per request.</p>
     */
    inline GetLambdaFunctionRecommendationsRequest& AddAccountIds(Aws::String&& value) { m_accountIdsHasBeenSet = true; m_accountIds.push_back(std::move(value)); return *this; }

    /**
     * <p>The ID of the Amazon Web Services account for which to return function
     * recommendations.</p> <p>If your account is the management account of an
     * organization, use this parameter to specify the member account for which you
     * want to return function recommendations.</p> <p>Only one account ID can be
     * specified per request.</p>
     */
    inline GetLambdaFunctionRecommendationsRequest& AddAccountIds(const char* value) { m_accountIdsHasBeenSet = true; m_accountIds.push_back(value); return *this; }


    /**
     * <p>An array of objects to specify a filter that returns a more specific list of
     * function recommendations.</p>
     */
    inline const Aws::Vector<LambdaFunctionRecommendationFilter>& GetFilters() const{ return m_filters; }

    /**
     * <p>An array of objects to specify a filter that returns a more specific list of
     * function recommendations.</p>
     */
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }

    /**
     * <p>An array of objects to specify a filter that returns a more specific list of
     * function recommendations.</p>
     */
    inline void SetFilters(const Aws::Vector<LambdaFunctionRecommendationFilter>& value) { m_filtersHasBeenSet = true; m_filters = value; }

    /**
     * <p>An array of objects to specify a filter that returns a more specific list of
     * function recommendations.</p>
     */
    inline void SetFilters(Aws::Vector<LambdaFunctionRecommendationFilter>&& value) { m_filtersHasBeenSet = true; m_filters = std::move(value); }

    /**
     * <p>An array of objects to specify a filter that returns a more specific list of
     * function recommendations.</p>
     */
    inline GetLambdaFunctionRecommendationsRequest& WithFilters(const Aws::Vector<LambdaFunctionRecommendationFilter>& value) { SetFilters(value); return *this;}

    /**
     * <p>An array of objects to specify a filter that returns a more specific list of
     * function recommendations.</p>
     */
    inline GetLambdaFunctionRecommendationsRequest& WithFilters(Aws::Vector<LambdaFunctionRecommendationFilter>&& value) { SetFilters(std::move(value)); return *this;}

    /**
     * <p>An array of objects to specify a filter that returns a more specific list of
     * function recommendations.</p>
     */
    inline GetLambdaFunctionRecommendationsRequest& AddFilters(const LambdaFunctionRecommendationFilter& value) { m_filtersHasBeenSet = true; m_filters.push_back(value); return *this; }

    /**
     * <p>An array of objects to specify a filter that returns a more specific list of
     * function recommendations.</p>
     */
    inline GetLambdaFunctionRecommendationsRequest& AddFilters(LambdaFunctionRecommendationFilter&& value) { m_filtersHasBeenSet = true; m_filters.push_back(std::move(value)); return *this; }


    /**
     * <p>The token to advance to the next page of function recommendations.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token to advance to the next page of function recommendations.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>The token to advance to the next page of function recommendations.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The token to advance to the next page of function recommendations.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>The token to advance to the next page of function recommendations.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>The token to advance to the next page of function recommendations.</p>
     */
    inline GetLambdaFunctionRecommendationsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token to advance to the next page of function recommendations.</p>
     */
    inline GetLambdaFunctionRecommendationsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token to advance to the next page of function recommendations.</p>
     */
    inline GetLambdaFunctionRecommendationsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The maximum number of function recommendations to return with a single
     * request.</p> <p>To retrieve the remaining results, make another request with the
     * returned <code>nextToken</code> value.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of function recommendations to return with a single
     * request.</p> <p>To retrieve the remaining results, make another request with the
     * returned <code>nextToken</code> value.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of function recommendations to return with a single
     * request.</p> <p>To retrieve the remaining results, make another request with the
     * returned <code>nextToken</code> value.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of function recommendations to return with a single
     * request.</p> <p>To retrieve the remaining results, make another request with the
     * returned <code>nextToken</code> value.</p>
     */
    inline GetLambdaFunctionRecommendationsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}

  private:

    Aws::Vector<Aws::String> m_functionArns;
    bool m_functionArnsHasBeenSet = false;

    Aws::Vector<Aws::String> m_accountIds;
    bool m_accountIdsHasBeenSet = false;

    Aws::Vector<LambdaFunctionRecommendationFilter> m_filters;
    bool m_filtersHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;
  };

} // namespace Model
} // namespace ComputeOptimizer
} // namespace Aws
