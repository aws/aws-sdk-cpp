/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/securityhub/SecurityHubRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace SecurityHub
{
namespace Model
{

  /**
   */
  class AWS_SECURITYHUB_API GetEnabledStandardsRequest : public SecurityHubRequest
  {
  public:
    GetEnabledStandardsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetEnabledStandards"; }

    Aws::String SerializePayload() const override;


    /**
     * <p>A list of the standards subscription ARNs for the standards to retrieve.</p>
     */
    inline const Aws::Vector<Aws::String>& GetStandardsSubscriptionArns() const{ return m_standardsSubscriptionArns; }

    /**
     * <p>A list of the standards subscription ARNs for the standards to retrieve.</p>
     */
    inline bool StandardsSubscriptionArnsHasBeenSet() const { return m_standardsSubscriptionArnsHasBeenSet; }

    /**
     * <p>A list of the standards subscription ARNs for the standards to retrieve.</p>
     */
    inline void SetStandardsSubscriptionArns(const Aws::Vector<Aws::String>& value) { m_standardsSubscriptionArnsHasBeenSet = true; m_standardsSubscriptionArns = value; }

    /**
     * <p>A list of the standards subscription ARNs for the standards to retrieve.</p>
     */
    inline void SetStandardsSubscriptionArns(Aws::Vector<Aws::String>&& value) { m_standardsSubscriptionArnsHasBeenSet = true; m_standardsSubscriptionArns = std::move(value); }

    /**
     * <p>A list of the standards subscription ARNs for the standards to retrieve.</p>
     */
    inline GetEnabledStandardsRequest& WithStandardsSubscriptionArns(const Aws::Vector<Aws::String>& value) { SetStandardsSubscriptionArns(value); return *this;}

    /**
     * <p>A list of the standards subscription ARNs for the standards to retrieve.</p>
     */
    inline GetEnabledStandardsRequest& WithStandardsSubscriptionArns(Aws::Vector<Aws::String>&& value) { SetStandardsSubscriptionArns(std::move(value)); return *this;}

    /**
     * <p>A list of the standards subscription ARNs for the standards to retrieve.</p>
     */
    inline GetEnabledStandardsRequest& AddStandardsSubscriptionArns(const Aws::String& value) { m_standardsSubscriptionArnsHasBeenSet = true; m_standardsSubscriptionArns.push_back(value); return *this; }

    /**
     * <p>A list of the standards subscription ARNs for the standards to retrieve.</p>
     */
    inline GetEnabledStandardsRequest& AddStandardsSubscriptionArns(Aws::String&& value) { m_standardsSubscriptionArnsHasBeenSet = true; m_standardsSubscriptionArns.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of the standards subscription ARNs for the standards to retrieve.</p>
     */
    inline GetEnabledStandardsRequest& AddStandardsSubscriptionArns(const char* value) { m_standardsSubscriptionArnsHasBeenSet = true; m_standardsSubscriptionArns.push_back(value); return *this; }


    /**
     * <p>Paginates results. On your first call to the <code>GetEnabledStandards</code>
     * operation, set the value of this parameter to <code>NULL</code>. For subsequent
     * calls to the operation, fill <code>nextToken</code> in the request with the
     * value of <code>nextToken</code> from the previous response to continue listing
     * data.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>Paginates results. On your first call to the <code>GetEnabledStandards</code>
     * operation, set the value of this parameter to <code>NULL</code>. For subsequent
     * calls to the operation, fill <code>nextToken</code> in the request with the
     * value of <code>nextToken</code> from the previous response to continue listing
     * data.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>Paginates results. On your first call to the <code>GetEnabledStandards</code>
     * operation, set the value of this parameter to <code>NULL</code>. For subsequent
     * calls to the operation, fill <code>nextToken</code> in the request with the
     * value of <code>nextToken</code> from the previous response to continue listing
     * data.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>Paginates results. On your first call to the <code>GetEnabledStandards</code>
     * operation, set the value of this parameter to <code>NULL</code>. For subsequent
     * calls to the operation, fill <code>nextToken</code> in the request with the
     * value of <code>nextToken</code> from the previous response to continue listing
     * data.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>Paginates results. On your first call to the <code>GetEnabledStandards</code>
     * operation, set the value of this parameter to <code>NULL</code>. For subsequent
     * calls to the operation, fill <code>nextToken</code> in the request with the
     * value of <code>nextToken</code> from the previous response to continue listing
     * data.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>Paginates results. On your first call to the <code>GetEnabledStandards</code>
     * operation, set the value of this parameter to <code>NULL</code>. For subsequent
     * calls to the operation, fill <code>nextToken</code> in the request with the
     * value of <code>nextToken</code> from the previous response to continue listing
     * data.</p>
     */
    inline GetEnabledStandardsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>Paginates results. On your first call to the <code>GetEnabledStandards</code>
     * operation, set the value of this parameter to <code>NULL</code>. For subsequent
     * calls to the operation, fill <code>nextToken</code> in the request with the
     * value of <code>nextToken</code> from the previous response to continue listing
     * data.</p>
     */
    inline GetEnabledStandardsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>Paginates results. On your first call to the <code>GetEnabledStandards</code>
     * operation, set the value of this parameter to <code>NULL</code>. For subsequent
     * calls to the operation, fill <code>nextToken</code> in the request with the
     * value of <code>nextToken</code> from the previous response to continue listing
     * data.</p>
     */
    inline GetEnabledStandardsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The maximum number of results to return in the response.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of results to return in the response.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of results to return in the response.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of results to return in the response.</p>
     */
    inline GetEnabledStandardsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}

  private:

    Aws::Vector<Aws::String> m_standardsSubscriptionArns;
    bool m_standardsSubscriptionArnsHasBeenSet;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet;

    int m_maxResults;
    bool m_maxResultsHasBeenSet;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
