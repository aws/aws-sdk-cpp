﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/compute-optimizer/ComputeOptimizer_EXPORTS.h>
#include <aws/compute-optimizer/ComputeOptimizerRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/compute-optimizer/model/LicenseRecommendationFilter.h>
#include <utility>

namespace Aws
{
namespace ComputeOptimizer
{
namespace Model
{

  /**
   */
  class GetLicenseRecommendationsRequest : public ComputeOptimizerRequest
  {
  public:
    AWS_COMPUTEOPTIMIZER_API GetLicenseRecommendationsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetLicenseRecommendations"; }

    AWS_COMPUTEOPTIMIZER_API Aws::String SerializePayload() const override;

    AWS_COMPUTEOPTIMIZER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p> The ARN that identifies the Amazon EC2 instance. </p> <p> The following is
     * the format of the ARN: </p> <p>
     * <code>arn:aws:ec2:region:aws_account_id:instance/instance-id</code> </p>
     */
    inline const Aws::Vector<Aws::String>& GetResourceArns() const{ return m_resourceArns; }

    /**
     * <p> The ARN that identifies the Amazon EC2 instance. </p> <p> The following is
     * the format of the ARN: </p> <p>
     * <code>arn:aws:ec2:region:aws_account_id:instance/instance-id</code> </p>
     */
    inline bool ResourceArnsHasBeenSet() const { return m_resourceArnsHasBeenSet; }

    /**
     * <p> The ARN that identifies the Amazon EC2 instance. </p> <p> The following is
     * the format of the ARN: </p> <p>
     * <code>arn:aws:ec2:region:aws_account_id:instance/instance-id</code> </p>
     */
    inline void SetResourceArns(const Aws::Vector<Aws::String>& value) { m_resourceArnsHasBeenSet = true; m_resourceArns = value; }

    /**
     * <p> The ARN that identifies the Amazon EC2 instance. </p> <p> The following is
     * the format of the ARN: </p> <p>
     * <code>arn:aws:ec2:region:aws_account_id:instance/instance-id</code> </p>
     */
    inline void SetResourceArns(Aws::Vector<Aws::String>&& value) { m_resourceArnsHasBeenSet = true; m_resourceArns = std::move(value); }

    /**
     * <p> The ARN that identifies the Amazon EC2 instance. </p> <p> The following is
     * the format of the ARN: </p> <p>
     * <code>arn:aws:ec2:region:aws_account_id:instance/instance-id</code> </p>
     */
    inline GetLicenseRecommendationsRequest& WithResourceArns(const Aws::Vector<Aws::String>& value) { SetResourceArns(value); return *this;}

    /**
     * <p> The ARN that identifies the Amazon EC2 instance. </p> <p> The following is
     * the format of the ARN: </p> <p>
     * <code>arn:aws:ec2:region:aws_account_id:instance/instance-id</code> </p>
     */
    inline GetLicenseRecommendationsRequest& WithResourceArns(Aws::Vector<Aws::String>&& value) { SetResourceArns(std::move(value)); return *this;}

    /**
     * <p> The ARN that identifies the Amazon EC2 instance. </p> <p> The following is
     * the format of the ARN: </p> <p>
     * <code>arn:aws:ec2:region:aws_account_id:instance/instance-id</code> </p>
     */
    inline GetLicenseRecommendationsRequest& AddResourceArns(const Aws::String& value) { m_resourceArnsHasBeenSet = true; m_resourceArns.push_back(value); return *this; }

    /**
     * <p> The ARN that identifies the Amazon EC2 instance. </p> <p> The following is
     * the format of the ARN: </p> <p>
     * <code>arn:aws:ec2:region:aws_account_id:instance/instance-id</code> </p>
     */
    inline GetLicenseRecommendationsRequest& AddResourceArns(Aws::String&& value) { m_resourceArnsHasBeenSet = true; m_resourceArns.push_back(std::move(value)); return *this; }

    /**
     * <p> The ARN that identifies the Amazon EC2 instance. </p> <p> The following is
     * the format of the ARN: </p> <p>
     * <code>arn:aws:ec2:region:aws_account_id:instance/instance-id</code> </p>
     */
    inline GetLicenseRecommendationsRequest& AddResourceArns(const char* value) { m_resourceArnsHasBeenSet = true; m_resourceArns.push_back(value); return *this; }


    /**
     * <p> The token to advance to the next page of license recommendations. </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p> The token to advance to the next page of license recommendations. </p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p> The token to advance to the next page of license recommendations. </p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p> The token to advance to the next page of license recommendations. </p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p> The token to advance to the next page of license recommendations. </p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p> The token to advance to the next page of license recommendations. </p>
     */
    inline GetLicenseRecommendationsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p> The token to advance to the next page of license recommendations. </p>
     */
    inline GetLicenseRecommendationsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p> The token to advance to the next page of license recommendations. </p>
     */
    inline GetLicenseRecommendationsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p> The maximum number of license recommendations to return with a single
     * request. </p> <p> To retrieve the remaining results, make another request with
     * the returned <code>nextToken</code> value. </p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p> The maximum number of license recommendations to return with a single
     * request. </p> <p> To retrieve the remaining results, make another request with
     * the returned <code>nextToken</code> value. </p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p> The maximum number of license recommendations to return with a single
     * request. </p> <p> To retrieve the remaining results, make another request with
     * the returned <code>nextToken</code> value. </p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p> The maximum number of license recommendations to return with a single
     * request. </p> <p> To retrieve the remaining results, make another request with
     * the returned <code>nextToken</code> value. </p>
     */
    inline GetLicenseRecommendationsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p> An array of objects to specify a filter that returns a more specific list of
     * license recommendations. </p>
     */
    inline const Aws::Vector<LicenseRecommendationFilter>& GetFilters() const{ return m_filters; }

    /**
     * <p> An array of objects to specify a filter that returns a more specific list of
     * license recommendations. </p>
     */
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }

    /**
     * <p> An array of objects to specify a filter that returns a more specific list of
     * license recommendations. </p>
     */
    inline void SetFilters(const Aws::Vector<LicenseRecommendationFilter>& value) { m_filtersHasBeenSet = true; m_filters = value; }

    /**
     * <p> An array of objects to specify a filter that returns a more specific list of
     * license recommendations. </p>
     */
    inline void SetFilters(Aws::Vector<LicenseRecommendationFilter>&& value) { m_filtersHasBeenSet = true; m_filters = std::move(value); }

    /**
     * <p> An array of objects to specify a filter that returns a more specific list of
     * license recommendations. </p>
     */
    inline GetLicenseRecommendationsRequest& WithFilters(const Aws::Vector<LicenseRecommendationFilter>& value) { SetFilters(value); return *this;}

    /**
     * <p> An array of objects to specify a filter that returns a more specific list of
     * license recommendations. </p>
     */
    inline GetLicenseRecommendationsRequest& WithFilters(Aws::Vector<LicenseRecommendationFilter>&& value) { SetFilters(std::move(value)); return *this;}

    /**
     * <p> An array of objects to specify a filter that returns a more specific list of
     * license recommendations. </p>
     */
    inline GetLicenseRecommendationsRequest& AddFilters(const LicenseRecommendationFilter& value) { m_filtersHasBeenSet = true; m_filters.push_back(value); return *this; }

    /**
     * <p> An array of objects to specify a filter that returns a more specific list of
     * license recommendations. </p>
     */
    inline GetLicenseRecommendationsRequest& AddFilters(LicenseRecommendationFilter&& value) { m_filtersHasBeenSet = true; m_filters.push_back(std::move(value)); return *this; }


    /**
     * <p>The ID of the Amazon Web Services account for which to return license
     * recommendations.</p> <p>If your account is the management account of an
     * organization, use this parameter to specify the member account for which you
     * want to return license recommendations.</p> <p>Only one account ID can be
     * specified per request.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAccountIds() const{ return m_accountIds; }

    /**
     * <p>The ID of the Amazon Web Services account for which to return license
     * recommendations.</p> <p>If your account is the management account of an
     * organization, use this parameter to specify the member account for which you
     * want to return license recommendations.</p> <p>Only one account ID can be
     * specified per request.</p>
     */
    inline bool AccountIdsHasBeenSet() const { return m_accountIdsHasBeenSet; }

    /**
     * <p>The ID of the Amazon Web Services account for which to return license
     * recommendations.</p> <p>If your account is the management account of an
     * organization, use this parameter to specify the member account for which you
     * want to return license recommendations.</p> <p>Only one account ID can be
     * specified per request.</p>
     */
    inline void SetAccountIds(const Aws::Vector<Aws::String>& value) { m_accountIdsHasBeenSet = true; m_accountIds = value; }

    /**
     * <p>The ID of the Amazon Web Services account for which to return license
     * recommendations.</p> <p>If your account is the management account of an
     * organization, use this parameter to specify the member account for which you
     * want to return license recommendations.</p> <p>Only one account ID can be
     * specified per request.</p>
     */
    inline void SetAccountIds(Aws::Vector<Aws::String>&& value) { m_accountIdsHasBeenSet = true; m_accountIds = std::move(value); }

    /**
     * <p>The ID of the Amazon Web Services account for which to return license
     * recommendations.</p> <p>If your account is the management account of an
     * organization, use this parameter to specify the member account for which you
     * want to return license recommendations.</p> <p>Only one account ID can be
     * specified per request.</p>
     */
    inline GetLicenseRecommendationsRequest& WithAccountIds(const Aws::Vector<Aws::String>& value) { SetAccountIds(value); return *this;}

    /**
     * <p>The ID of the Amazon Web Services account for which to return license
     * recommendations.</p> <p>If your account is the management account of an
     * organization, use this parameter to specify the member account for which you
     * want to return license recommendations.</p> <p>Only one account ID can be
     * specified per request.</p>
     */
    inline GetLicenseRecommendationsRequest& WithAccountIds(Aws::Vector<Aws::String>&& value) { SetAccountIds(std::move(value)); return *this;}

    /**
     * <p>The ID of the Amazon Web Services account for which to return license
     * recommendations.</p> <p>If your account is the management account of an
     * organization, use this parameter to specify the member account for which you
     * want to return license recommendations.</p> <p>Only one account ID can be
     * specified per request.</p>
     */
    inline GetLicenseRecommendationsRequest& AddAccountIds(const Aws::String& value) { m_accountIdsHasBeenSet = true; m_accountIds.push_back(value); return *this; }

    /**
     * <p>The ID of the Amazon Web Services account for which to return license
     * recommendations.</p> <p>If your account is the management account of an
     * organization, use this parameter to specify the member account for which you
     * want to return license recommendations.</p> <p>Only one account ID can be
     * specified per request.</p>
     */
    inline GetLicenseRecommendationsRequest& AddAccountIds(Aws::String&& value) { m_accountIdsHasBeenSet = true; m_accountIds.push_back(std::move(value)); return *this; }

    /**
     * <p>The ID of the Amazon Web Services account for which to return license
     * recommendations.</p> <p>If your account is the management account of an
     * organization, use this parameter to specify the member account for which you
     * want to return license recommendations.</p> <p>Only one account ID can be
     * specified per request.</p>
     */
    inline GetLicenseRecommendationsRequest& AddAccountIds(const char* value) { m_accountIdsHasBeenSet = true; m_accountIds.push_back(value); return *this; }

  private:

    Aws::Vector<Aws::String> m_resourceArns;
    bool m_resourceArnsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::Vector<LicenseRecommendationFilter> m_filters;
    bool m_filtersHasBeenSet = false;

    Aws::Vector<Aws::String> m_accountIds;
    bool m_accountIdsHasBeenSet = false;
  };

} // namespace Model
} // namespace ComputeOptimizer
} // namespace Aws
