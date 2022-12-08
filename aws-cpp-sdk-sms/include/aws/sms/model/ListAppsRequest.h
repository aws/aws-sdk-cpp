/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sms/SMS_EXPORTS.h>
#include <aws/sms/SMSRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace SMS
{
namespace Model
{

  /**
   */
  class ListAppsRequest : public SMSRequest
  {
  public:
    AWS_SMS_API ListAppsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListApps"; }

    AWS_SMS_API Aws::String SerializePayload() const override;

    AWS_SMS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The unique application IDs.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAppIds() const{ return m_appIds; }

    /**
     * <p>The unique application IDs.</p>
     */
    inline bool AppIdsHasBeenSet() const { return m_appIdsHasBeenSet; }

    /**
     * <p>The unique application IDs.</p>
     */
    inline void SetAppIds(const Aws::Vector<Aws::String>& value) { m_appIdsHasBeenSet = true; m_appIds = value; }

    /**
     * <p>The unique application IDs.</p>
     */
    inline void SetAppIds(Aws::Vector<Aws::String>&& value) { m_appIdsHasBeenSet = true; m_appIds = std::move(value); }

    /**
     * <p>The unique application IDs.</p>
     */
    inline ListAppsRequest& WithAppIds(const Aws::Vector<Aws::String>& value) { SetAppIds(value); return *this;}

    /**
     * <p>The unique application IDs.</p>
     */
    inline ListAppsRequest& WithAppIds(Aws::Vector<Aws::String>&& value) { SetAppIds(std::move(value)); return *this;}

    /**
     * <p>The unique application IDs.</p>
     */
    inline ListAppsRequest& AddAppIds(const Aws::String& value) { m_appIdsHasBeenSet = true; m_appIds.push_back(value); return *this; }

    /**
     * <p>The unique application IDs.</p>
     */
    inline ListAppsRequest& AddAppIds(Aws::String&& value) { m_appIdsHasBeenSet = true; m_appIds.push_back(std::move(value)); return *this; }

    /**
     * <p>The unique application IDs.</p>
     */
    inline ListAppsRequest& AddAppIds(const char* value) { m_appIdsHasBeenSet = true; m_appIds.push_back(value); return *this; }


    /**
     * <p>The token for the next set of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token for the next set of results.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>The token for the next set of results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The token for the next set of results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>The token for the next set of results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>The token for the next set of results.</p>
     */
    inline ListAppsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token for the next set of results.</p>
     */
    inline ListAppsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token for the next set of results.</p>
     */
    inline ListAppsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The maximum number of results to return in a single call. The default value
     * is 100. To retrieve the remaining results, make another call with the returned
     * <code>NextToken</code> value. </p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of results to return in a single call. The default value
     * is 100. To retrieve the remaining results, make another call with the returned
     * <code>NextToken</code> value. </p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of results to return in a single call. The default value
     * is 100. To retrieve the remaining results, make another call with the returned
     * <code>NextToken</code> value. </p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of results to return in a single call. The default value
     * is 100. To retrieve the remaining results, make another call with the returned
     * <code>NextToken</code> value. </p>
     */
    inline ListAppsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}

  private:

    Aws::Vector<Aws::String> m_appIds;
    bool m_appIdsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;
  };

} // namespace Model
} // namespace SMS
} // namespace Aws
