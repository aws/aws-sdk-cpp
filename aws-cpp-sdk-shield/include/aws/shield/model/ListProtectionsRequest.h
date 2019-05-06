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
#include <aws/shield/Shield_EXPORTS.h>
#include <aws/shield/ShieldRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Shield
{
namespace Model
{

  /**
   */
  class AWS_SHIELD_API ListProtectionsRequest : public ShieldRequest
  {
  public:
    ListProtectionsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListProtections"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The <code>ListProtectionsRequest.NextToken</code> value from a previous call
     * to <code>ListProtections</code>. Pass null if this is the first call.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The <code>ListProtectionsRequest.NextToken</code> value from a previous call
     * to <code>ListProtections</code>. Pass null if this is the first call.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>The <code>ListProtectionsRequest.NextToken</code> value from a previous call
     * to <code>ListProtections</code>. Pass null if this is the first call.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The <code>ListProtectionsRequest.NextToken</code> value from a previous call
     * to <code>ListProtections</code>. Pass null if this is the first call.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>The <code>ListProtectionsRequest.NextToken</code> value from a previous call
     * to <code>ListProtections</code>. Pass null if this is the first call.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>The <code>ListProtectionsRequest.NextToken</code> value from a previous call
     * to <code>ListProtections</code>. Pass null if this is the first call.</p>
     */
    inline ListProtectionsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The <code>ListProtectionsRequest.NextToken</code> value from a previous call
     * to <code>ListProtections</code>. Pass null if this is the first call.</p>
     */
    inline ListProtectionsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The <code>ListProtectionsRequest.NextToken</code> value from a previous call
     * to <code>ListProtections</code>. Pass null if this is the first call.</p>
     */
    inline ListProtectionsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The maximum number of <a>Protection</a> objects to be returned. If this is
     * left blank the first 20 results will be returned.</p> <p>This is a maximum
     * value; it is possible that AWS WAF will return the results in smaller batches.
     * That is, the number of <a>Protection</a> objects returned could be less than
     * <code>MaxResults</code>, even if there are still more <a>Protection</a> objects
     * yet to return. If there are more <a>Protection</a> objects to return, AWS WAF
     * will always also return a <code>NextToken</code>.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of <a>Protection</a> objects to be returned. If this is
     * left blank the first 20 results will be returned.</p> <p>This is a maximum
     * value; it is possible that AWS WAF will return the results in smaller batches.
     * That is, the number of <a>Protection</a> objects returned could be less than
     * <code>MaxResults</code>, even if there are still more <a>Protection</a> objects
     * yet to return. If there are more <a>Protection</a> objects to return, AWS WAF
     * will always also return a <code>NextToken</code>.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of <a>Protection</a> objects to be returned. If this is
     * left blank the first 20 results will be returned.</p> <p>This is a maximum
     * value; it is possible that AWS WAF will return the results in smaller batches.
     * That is, the number of <a>Protection</a> objects returned could be less than
     * <code>MaxResults</code>, even if there are still more <a>Protection</a> objects
     * yet to return. If there are more <a>Protection</a> objects to return, AWS WAF
     * will always also return a <code>NextToken</code>.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of <a>Protection</a> objects to be returned. If this is
     * left blank the first 20 results will be returned.</p> <p>This is a maximum
     * value; it is possible that AWS WAF will return the results in smaller batches.
     * That is, the number of <a>Protection</a> objects returned could be less than
     * <code>MaxResults</code>, even if there are still more <a>Protection</a> objects
     * yet to return. If there are more <a>Protection</a> objects to return, AWS WAF
     * will always also return a <code>NextToken</code>.</p>
     */
    inline ListProtectionsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}

  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet;

    int m_maxResults;
    bool m_maxResultsHasBeenSet;
  };

} // namespace Model
} // namespace Shield
} // namespace Aws
