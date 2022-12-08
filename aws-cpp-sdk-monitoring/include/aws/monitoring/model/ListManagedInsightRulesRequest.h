/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/monitoring/CloudWatch_EXPORTS.h>
#include <aws/monitoring/CloudWatchRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace CloudWatch
{
namespace Model
{

  /**
   */
  class ListManagedInsightRulesRequest : public CloudWatchRequest
  {
  public:
    AWS_CLOUDWATCH_API ListManagedInsightRulesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListManagedInsightRules"; }

    AWS_CLOUDWATCH_API Aws::String SerializePayload() const override;

  protected:
    AWS_CLOUDWATCH_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p> The ARN of an Amazon Web Services resource that has managed Contributor
     * Insights rules. </p>
     */
    inline const Aws::String& GetResourceARN() const{ return m_resourceARN; }

    /**
     * <p> The ARN of an Amazon Web Services resource that has managed Contributor
     * Insights rules. </p>
     */
    inline bool ResourceARNHasBeenSet() const { return m_resourceARNHasBeenSet; }

    /**
     * <p> The ARN of an Amazon Web Services resource that has managed Contributor
     * Insights rules. </p>
     */
    inline void SetResourceARN(const Aws::String& value) { m_resourceARNHasBeenSet = true; m_resourceARN = value; }

    /**
     * <p> The ARN of an Amazon Web Services resource that has managed Contributor
     * Insights rules. </p>
     */
    inline void SetResourceARN(Aws::String&& value) { m_resourceARNHasBeenSet = true; m_resourceARN = std::move(value); }

    /**
     * <p> The ARN of an Amazon Web Services resource that has managed Contributor
     * Insights rules. </p>
     */
    inline void SetResourceARN(const char* value) { m_resourceARNHasBeenSet = true; m_resourceARN.assign(value); }

    /**
     * <p> The ARN of an Amazon Web Services resource that has managed Contributor
     * Insights rules. </p>
     */
    inline ListManagedInsightRulesRequest& WithResourceARN(const Aws::String& value) { SetResourceARN(value); return *this;}

    /**
     * <p> The ARN of an Amazon Web Services resource that has managed Contributor
     * Insights rules. </p>
     */
    inline ListManagedInsightRulesRequest& WithResourceARN(Aws::String&& value) { SetResourceARN(std::move(value)); return *this;}

    /**
     * <p> The ARN of an Amazon Web Services resource that has managed Contributor
     * Insights rules. </p>
     */
    inline ListManagedInsightRulesRequest& WithResourceARN(const char* value) { SetResourceARN(value); return *this;}


    /**
     * <p> Include this value to get the next set of rules if the value was returned by
     * the previous operation. </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p> Include this value to get the next set of rules if the value was returned by
     * the previous operation. </p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p> Include this value to get the next set of rules if the value was returned by
     * the previous operation. </p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p> Include this value to get the next set of rules if the value was returned by
     * the previous operation. </p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p> Include this value to get the next set of rules if the value was returned by
     * the previous operation. </p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p> Include this value to get the next set of rules if the value was returned by
     * the previous operation. </p>
     */
    inline ListManagedInsightRulesRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p> Include this value to get the next set of rules if the value was returned by
     * the previous operation. </p>
     */
    inline ListManagedInsightRulesRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p> Include this value to get the next set of rules if the value was returned by
     * the previous operation. </p>
     */
    inline ListManagedInsightRulesRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p> The maximum number of results to return in one operation. If you omit this
     * parameter, the default number is used. The default number is <code>100</code>.
     * </p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p> The maximum number of results to return in one operation. If you omit this
     * parameter, the default number is used. The default number is <code>100</code>.
     * </p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p> The maximum number of results to return in one operation. If you omit this
     * parameter, the default number is used. The default number is <code>100</code>.
     * </p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p> The maximum number of results to return in one operation. If you omit this
     * parameter, the default number is used. The default number is <code>100</code>.
     * </p>
     */
    inline ListManagedInsightRulesRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}

  private:

    Aws::String m_resourceARN;
    bool m_resourceARNHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatch
} // namespace Aws
