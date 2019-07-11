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
#include <aws/eventbridge/EventBridge_EXPORTS.h>
#include <aws/eventbridge/EventBridgeRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace EventBridge
{
namespace Model
{

  /**
   */
  class AWS_EVENTBRIDGE_API ListPartnerEventSourcesRequest : public EventBridgeRequest
  {
  public:
    ListPartnerEventSourcesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListPartnerEventSources"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>If you specify this, the results are limited to only those partner event
     * sources that start with the string you specify.</p>
     */
    inline const Aws::String& GetNamePrefix() const{ return m_namePrefix; }

    /**
     * <p>If you specify this, the results are limited to only those partner event
     * sources that start with the string you specify.</p>
     */
    inline bool NamePrefixHasBeenSet() const { return m_namePrefixHasBeenSet; }

    /**
     * <p>If you specify this, the results are limited to only those partner event
     * sources that start with the string you specify.</p>
     */
    inline void SetNamePrefix(const Aws::String& value) { m_namePrefixHasBeenSet = true; m_namePrefix = value; }

    /**
     * <p>If you specify this, the results are limited to only those partner event
     * sources that start with the string you specify.</p>
     */
    inline void SetNamePrefix(Aws::String&& value) { m_namePrefixHasBeenSet = true; m_namePrefix = std::move(value); }

    /**
     * <p>If you specify this, the results are limited to only those partner event
     * sources that start with the string you specify.</p>
     */
    inline void SetNamePrefix(const char* value) { m_namePrefixHasBeenSet = true; m_namePrefix.assign(value); }

    /**
     * <p>If you specify this, the results are limited to only those partner event
     * sources that start with the string you specify.</p>
     */
    inline ListPartnerEventSourcesRequest& WithNamePrefix(const Aws::String& value) { SetNamePrefix(value); return *this;}

    /**
     * <p>If you specify this, the results are limited to only those partner event
     * sources that start with the string you specify.</p>
     */
    inline ListPartnerEventSourcesRequest& WithNamePrefix(Aws::String&& value) { SetNamePrefix(std::move(value)); return *this;}

    /**
     * <p>If you specify this, the results are limited to only those partner event
     * sources that start with the string you specify.</p>
     */
    inline ListPartnerEventSourcesRequest& WithNamePrefix(const char* value) { SetNamePrefix(value); return *this;}


    /**
     * <p>The token returned by a previous call to this operation. Specifying this
     * retrieves the next set of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token returned by a previous call to this operation. Specifying this
     * retrieves the next set of results.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>The token returned by a previous call to this operation. Specifying this
     * retrieves the next set of results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The token returned by a previous call to this operation. Specifying this
     * retrieves the next set of results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>The token returned by a previous call to this operation. Specifying this
     * retrieves the next set of results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>The token returned by a previous call to this operation. Specifying this
     * retrieves the next set of results.</p>
     */
    inline ListPartnerEventSourcesRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token returned by a previous call to this operation. Specifying this
     * retrieves the next set of results.</p>
     */
    inline ListPartnerEventSourcesRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token returned by a previous call to this operation. Specifying this
     * retrieves the next set of results.</p>
     */
    inline ListPartnerEventSourcesRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>pecifying this limits the number of results returned by this operation. The
     * operation also returns a <code>NextToken</code> that you can use in a subsequent
     * operation to retrieve the next set of results.</p>
     */
    inline int GetLimit() const{ return m_limit; }

    /**
     * <p>pecifying this limits the number of results returned by this operation. The
     * operation also returns a <code>NextToken</code> that you can use in a subsequent
     * operation to retrieve the next set of results.</p>
     */
    inline bool LimitHasBeenSet() const { return m_limitHasBeenSet; }

    /**
     * <p>pecifying this limits the number of results returned by this operation. The
     * operation also returns a <code>NextToken</code> that you can use in a subsequent
     * operation to retrieve the next set of results.</p>
     */
    inline void SetLimit(int value) { m_limitHasBeenSet = true; m_limit = value; }

    /**
     * <p>pecifying this limits the number of results returned by this operation. The
     * operation also returns a <code>NextToken</code> that you can use in a subsequent
     * operation to retrieve the next set of results.</p>
     */
    inline ListPartnerEventSourcesRequest& WithLimit(int value) { SetLimit(value); return *this;}

  private:

    Aws::String m_namePrefix;
    bool m_namePrefixHasBeenSet;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet;

    int m_limit;
    bool m_limitHasBeenSet;
  };

} // namespace Model
} // namespace EventBridge
} // namespace Aws
