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
#include <aws/personalize/Personalize_EXPORTS.h>
#include <aws/personalize/PersonalizeRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Personalize
{
namespace Model
{

  /**
   */
  class AWS_PERSONALIZE_API ListCampaignsRequest : public PersonalizeRequest
  {
  public:
    ListCampaignsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListCampaigns"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The Amazon Resource Name (ARN) of the solution to list the campaigns for.
     * When a solution is not specified, all the campaigns associated with the account
     * are listed.</p>
     */
    inline const Aws::String& GetSolutionArn() const{ return m_solutionArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the solution to list the campaigns for.
     * When a solution is not specified, all the campaigns associated with the account
     * are listed.</p>
     */
    inline bool SolutionArnHasBeenSet() const { return m_solutionArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the solution to list the campaigns for.
     * When a solution is not specified, all the campaigns associated with the account
     * are listed.</p>
     */
    inline void SetSolutionArn(const Aws::String& value) { m_solutionArnHasBeenSet = true; m_solutionArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the solution to list the campaigns for.
     * When a solution is not specified, all the campaigns associated with the account
     * are listed.</p>
     */
    inline void SetSolutionArn(Aws::String&& value) { m_solutionArnHasBeenSet = true; m_solutionArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the solution to list the campaigns for.
     * When a solution is not specified, all the campaigns associated with the account
     * are listed.</p>
     */
    inline void SetSolutionArn(const char* value) { m_solutionArnHasBeenSet = true; m_solutionArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the solution to list the campaigns for.
     * When a solution is not specified, all the campaigns associated with the account
     * are listed.</p>
     */
    inline ListCampaignsRequest& WithSolutionArn(const Aws::String& value) { SetSolutionArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the solution to list the campaigns for.
     * When a solution is not specified, all the campaigns associated with the account
     * are listed.</p>
     */
    inline ListCampaignsRequest& WithSolutionArn(Aws::String&& value) { SetSolutionArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the solution to list the campaigns for.
     * When a solution is not specified, all the campaigns associated with the account
     * are listed.</p>
     */
    inline ListCampaignsRequest& WithSolutionArn(const char* value) { SetSolutionArn(value); return *this;}


    /**
     * <p>A token returned from the previous call to <code>ListCampaigns</code> for
     * getting the next set of campaigns (if they exist).</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>A token returned from the previous call to <code>ListCampaigns</code> for
     * getting the next set of campaigns (if they exist).</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>A token returned from the previous call to <code>ListCampaigns</code> for
     * getting the next set of campaigns (if they exist).</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>A token returned from the previous call to <code>ListCampaigns</code> for
     * getting the next set of campaigns (if they exist).</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>A token returned from the previous call to <code>ListCampaigns</code> for
     * getting the next set of campaigns (if they exist).</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>A token returned from the previous call to <code>ListCampaigns</code> for
     * getting the next set of campaigns (if they exist).</p>
     */
    inline ListCampaignsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>A token returned from the previous call to <code>ListCampaigns</code> for
     * getting the next set of campaigns (if they exist).</p>
     */
    inline ListCampaignsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>A token returned from the previous call to <code>ListCampaigns</code> for
     * getting the next set of campaigns (if they exist).</p>
     */
    inline ListCampaignsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The maximum number of campaigns to return.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of campaigns to return.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of campaigns to return.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of campaigns to return.</p>
     */
    inline ListCampaignsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}

  private:

    Aws::String m_solutionArn;
    bool m_solutionArnHasBeenSet;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet;

    int m_maxResults;
    bool m_maxResultsHasBeenSet;
  };

} // namespace Model
} // namespace Personalize
} // namespace Aws
