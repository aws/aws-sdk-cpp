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
#include <aws/greengrass/Greengrass_EXPORTS.h>
#include <aws/greengrass/GreengrassRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace Greengrass
{
namespace Model
{

  /**
   */
  class AWS_GREENGRASS_API ListSubscriptionDefinitionVersionsRequest : public GreengrassRequest
  {
  public:
    ListSubscriptionDefinitionVersionsRequest();
    
    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListSubscriptionDefinitionVersions"; }

    Aws::String SerializePayload() const override;

    void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * Specifies the maximum number of list results to be returned in this page
     */
    inline const Aws::String& GetMaxResults() const{ return m_maxResults; }

    /**
     * Specifies the maximum number of list results to be returned in this page
     */
    inline void SetMaxResults(const Aws::String& value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * Specifies the maximum number of list results to be returned in this page
     */
    inline void SetMaxResults(Aws::String&& value) { m_maxResultsHasBeenSet = true; m_maxResults = std::move(value); }

    /**
     * Specifies the maximum number of list results to be returned in this page
     */
    inline void SetMaxResults(const char* value) { m_maxResultsHasBeenSet = true; m_maxResults.assign(value); }

    /**
     * Specifies the maximum number of list results to be returned in this page
     */
    inline ListSubscriptionDefinitionVersionsRequest& WithMaxResults(const Aws::String& value) { SetMaxResults(value); return *this;}

    /**
     * Specifies the maximum number of list results to be returned in this page
     */
    inline ListSubscriptionDefinitionVersionsRequest& WithMaxResults(Aws::String&& value) { SetMaxResults(std::move(value)); return *this;}

    /**
     * Specifies the maximum number of list results to be returned in this page
     */
    inline ListSubscriptionDefinitionVersionsRequest& WithMaxResults(const char* value) { SetMaxResults(value); return *this;}


    /**
     * Specifies the pagination token used when iterating through a paginated request
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * Specifies the pagination token used when iterating through a paginated request
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * Specifies the pagination token used when iterating through a paginated request
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * Specifies the pagination token used when iterating through a paginated request
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * Specifies the pagination token used when iterating through a paginated request
     */
    inline ListSubscriptionDefinitionVersionsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * Specifies the pagination token used when iterating through a paginated request
     */
    inline ListSubscriptionDefinitionVersionsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * Specifies the pagination token used when iterating through a paginated request
     */
    inline ListSubscriptionDefinitionVersionsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * subscription definition Id
     */
    inline const Aws::String& GetSubscriptionDefinitionId() const{ return m_subscriptionDefinitionId; }

    /**
     * subscription definition Id
     */
    inline void SetSubscriptionDefinitionId(const Aws::String& value) { m_subscriptionDefinitionIdHasBeenSet = true; m_subscriptionDefinitionId = value; }

    /**
     * subscription definition Id
     */
    inline void SetSubscriptionDefinitionId(Aws::String&& value) { m_subscriptionDefinitionIdHasBeenSet = true; m_subscriptionDefinitionId = std::move(value); }

    /**
     * subscription definition Id
     */
    inline void SetSubscriptionDefinitionId(const char* value) { m_subscriptionDefinitionIdHasBeenSet = true; m_subscriptionDefinitionId.assign(value); }

    /**
     * subscription definition Id
     */
    inline ListSubscriptionDefinitionVersionsRequest& WithSubscriptionDefinitionId(const Aws::String& value) { SetSubscriptionDefinitionId(value); return *this;}

    /**
     * subscription definition Id
     */
    inline ListSubscriptionDefinitionVersionsRequest& WithSubscriptionDefinitionId(Aws::String&& value) { SetSubscriptionDefinitionId(std::move(value)); return *this;}

    /**
     * subscription definition Id
     */
    inline ListSubscriptionDefinitionVersionsRequest& WithSubscriptionDefinitionId(const char* value) { SetSubscriptionDefinitionId(value); return *this;}

  private:

    Aws::String m_maxResults;
    bool m_maxResultsHasBeenSet;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet;

    Aws::String m_subscriptionDefinitionId;
    bool m_subscriptionDefinitionIdHasBeenSet;
  };

} // namespace Model
} // namespace Greengrass
} // namespace Aws
