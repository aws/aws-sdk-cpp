/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securitylake/SecurityLake_EXPORTS.h>
#include <aws/securitylake/SecurityLakeRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace SecurityLake
{
namespace Model
{

  /**
   */
  class GetDatalakeStatusRequest : public SecurityLakeRequest
  {
  public:
    AWS_SECURITYLAKE_API GetDatalakeStatusRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetDatalakeStatus"; }

    AWS_SECURITYLAKE_API Aws::String SerializePayload() const override;


    /**
     * <p>The account IDs for which a static snapshot of the current Region, including
     * enabled accounts and log sources is retrieved.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAccountSet() const{ return m_accountSet; }

    /**
     * <p>The account IDs for which a static snapshot of the current Region, including
     * enabled accounts and log sources is retrieved.</p>
     */
    inline bool AccountSetHasBeenSet() const { return m_accountSetHasBeenSet; }

    /**
     * <p>The account IDs for which a static snapshot of the current Region, including
     * enabled accounts and log sources is retrieved.</p>
     */
    inline void SetAccountSet(const Aws::Vector<Aws::String>& value) { m_accountSetHasBeenSet = true; m_accountSet = value; }

    /**
     * <p>The account IDs for which a static snapshot of the current Region, including
     * enabled accounts and log sources is retrieved.</p>
     */
    inline void SetAccountSet(Aws::Vector<Aws::String>&& value) { m_accountSetHasBeenSet = true; m_accountSet = std::move(value); }

    /**
     * <p>The account IDs for which a static snapshot of the current Region, including
     * enabled accounts and log sources is retrieved.</p>
     */
    inline GetDatalakeStatusRequest& WithAccountSet(const Aws::Vector<Aws::String>& value) { SetAccountSet(value); return *this;}

    /**
     * <p>The account IDs for which a static snapshot of the current Region, including
     * enabled accounts and log sources is retrieved.</p>
     */
    inline GetDatalakeStatusRequest& WithAccountSet(Aws::Vector<Aws::String>&& value) { SetAccountSet(std::move(value)); return *this;}

    /**
     * <p>The account IDs for which a static snapshot of the current Region, including
     * enabled accounts and log sources is retrieved.</p>
     */
    inline GetDatalakeStatusRequest& AddAccountSet(const Aws::String& value) { m_accountSetHasBeenSet = true; m_accountSet.push_back(value); return *this; }

    /**
     * <p>The account IDs for which a static snapshot of the current Region, including
     * enabled accounts and log sources is retrieved.</p>
     */
    inline GetDatalakeStatusRequest& AddAccountSet(Aws::String&& value) { m_accountSetHasBeenSet = true; m_accountSet.push_back(std::move(value)); return *this; }

    /**
     * <p>The account IDs for which a static snapshot of the current Region, including
     * enabled accounts and log sources is retrieved.</p>
     */
    inline GetDatalakeStatusRequest& AddAccountSet(const char* value) { m_accountSetHasBeenSet = true; m_accountSet.push_back(value); return *this; }


    /**
     * <p>The maximum limit of accounts for which the static snapshot of the current
     * Region including enabled accounts and log sources is retrieved.</p>
     */
    inline int GetMaxAccountResults() const{ return m_maxAccountResults; }

    /**
     * <p>The maximum limit of accounts for which the static snapshot of the current
     * Region including enabled accounts and log sources is retrieved.</p>
     */
    inline bool MaxAccountResultsHasBeenSet() const { return m_maxAccountResultsHasBeenSet; }

    /**
     * <p>The maximum limit of accounts for which the static snapshot of the current
     * Region including enabled accounts and log sources is retrieved.</p>
     */
    inline void SetMaxAccountResults(int value) { m_maxAccountResultsHasBeenSet = true; m_maxAccountResults = value; }

    /**
     * <p>The maximum limit of accounts for which the static snapshot of the current
     * Region including enabled accounts and log sources is retrieved.</p>
     */
    inline GetDatalakeStatusRequest& WithMaxAccountResults(int value) { SetMaxAccountResults(value); return *this;}


    /**
     * <p>If nextToken is returned, there are more results available. The value of
     * nextToken is a unique pagination token for each page. Make the call again using
     * the returned token to retrieve the next page. Keep all other arguments
     * unchanged. Each pagination token expires after 24 hours. Using an expired
     * pagination token will return an HTTP 400 InvalidToken error.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>If nextToken is returned, there are more results available. The value of
     * nextToken is a unique pagination token for each page. Make the call again using
     * the returned token to retrieve the next page. Keep all other arguments
     * unchanged. Each pagination token expires after 24 hours. Using an expired
     * pagination token will return an HTTP 400 InvalidToken error.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>If nextToken is returned, there are more results available. The value of
     * nextToken is a unique pagination token for each page. Make the call again using
     * the returned token to retrieve the next page. Keep all other arguments
     * unchanged. Each pagination token expires after 24 hours. Using an expired
     * pagination token will return an HTTP 400 InvalidToken error.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>If nextToken is returned, there are more results available. The value of
     * nextToken is a unique pagination token for each page. Make the call again using
     * the returned token to retrieve the next page. Keep all other arguments
     * unchanged. Each pagination token expires after 24 hours. Using an expired
     * pagination token will return an HTTP 400 InvalidToken error.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>If nextToken is returned, there are more results available. The value of
     * nextToken is a unique pagination token for each page. Make the call again using
     * the returned token to retrieve the next page. Keep all other arguments
     * unchanged. Each pagination token expires after 24 hours. Using an expired
     * pagination token will return an HTTP 400 InvalidToken error.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>If nextToken is returned, there are more results available. The value of
     * nextToken is a unique pagination token for each page. Make the call again using
     * the returned token to retrieve the next page. Keep all other arguments
     * unchanged. Each pagination token expires after 24 hours. Using an expired
     * pagination token will return an HTTP 400 InvalidToken error.</p>
     */
    inline GetDatalakeStatusRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If nextToken is returned, there are more results available. The value of
     * nextToken is a unique pagination token for each page. Make the call again using
     * the returned token to retrieve the next page. Keep all other arguments
     * unchanged. Each pagination token expires after 24 hours. Using an expired
     * pagination token will return an HTTP 400 InvalidToken error.</p>
     */
    inline GetDatalakeStatusRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If nextToken is returned, there are more results available. The value of
     * nextToken is a unique pagination token for each page. Make the call again using
     * the returned token to retrieve the next page. Keep all other arguments
     * unchanged. Each pagination token expires after 24 hours. Using an expired
     * pagination token will return an HTTP 400 InvalidToken error.</p>
     */
    inline GetDatalakeStatusRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<Aws::String> m_accountSet;
    bool m_accountSetHasBeenSet = false;

    int m_maxAccountResults;
    bool m_maxAccountResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityLake
} // namespace Aws
