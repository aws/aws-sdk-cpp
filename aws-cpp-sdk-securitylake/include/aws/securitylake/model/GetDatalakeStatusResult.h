/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securitylake/SecurityLake_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/securitylake/model/AccountSources.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace SecurityLake
{
namespace Model
{
  class GetDatalakeStatusResult
  {
  public:
    AWS_SECURITYLAKE_API GetDatalakeStatusResult();
    AWS_SECURITYLAKE_API GetDatalakeStatusResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SECURITYLAKE_API GetDatalakeStatusResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The list of enabled accounts and enabled sources.</p>
     */
    inline const Aws::Vector<AccountSources>& GetAccountSourcesList() const{ return m_accountSourcesList; }

    /**
     * <p>The list of enabled accounts and enabled sources.</p>
     */
    inline void SetAccountSourcesList(const Aws::Vector<AccountSources>& value) { m_accountSourcesList = value; }

    /**
     * <p>The list of enabled accounts and enabled sources.</p>
     */
    inline void SetAccountSourcesList(Aws::Vector<AccountSources>&& value) { m_accountSourcesList = std::move(value); }

    /**
     * <p>The list of enabled accounts and enabled sources.</p>
     */
    inline GetDatalakeStatusResult& WithAccountSourcesList(const Aws::Vector<AccountSources>& value) { SetAccountSourcesList(value); return *this;}

    /**
     * <p>The list of enabled accounts and enabled sources.</p>
     */
    inline GetDatalakeStatusResult& WithAccountSourcesList(Aws::Vector<AccountSources>&& value) { SetAccountSourcesList(std::move(value)); return *this;}

    /**
     * <p>The list of enabled accounts and enabled sources.</p>
     */
    inline GetDatalakeStatusResult& AddAccountSourcesList(const AccountSources& value) { m_accountSourcesList.push_back(value); return *this; }

    /**
     * <p>The list of enabled accounts and enabled sources.</p>
     */
    inline GetDatalakeStatusResult& AddAccountSourcesList(AccountSources&& value) { m_accountSourcesList.push_back(std::move(value)); return *this; }


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
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>If nextToken is returned, there are more results available. The value of
     * nextToken is a unique pagination token for each page. Make the call again using
     * the returned token to retrieve the next page. Keep all other arguments
     * unchanged. Each pagination token expires after 24 hours. Using an expired
     * pagination token will return an HTTP 400 InvalidToken error.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>If nextToken is returned, there are more results available. The value of
     * nextToken is a unique pagination token for each page. Make the call again using
     * the returned token to retrieve the next page. Keep all other arguments
     * unchanged. Each pagination token expires after 24 hours. Using an expired
     * pagination token will return an HTTP 400 InvalidToken error.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>If nextToken is returned, there are more results available. The value of
     * nextToken is a unique pagination token for each page. Make the call again using
     * the returned token to retrieve the next page. Keep all other arguments
     * unchanged. Each pagination token expires after 24 hours. Using an expired
     * pagination token will return an HTTP 400 InvalidToken error.</p>
     */
    inline GetDatalakeStatusResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If nextToken is returned, there are more results available. The value of
     * nextToken is a unique pagination token for each page. Make the call again using
     * the returned token to retrieve the next page. Keep all other arguments
     * unchanged. Each pagination token expires after 24 hours. Using an expired
     * pagination token will return an HTTP 400 InvalidToken error.</p>
     */
    inline GetDatalakeStatusResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If nextToken is returned, there are more results available. The value of
     * nextToken is a unique pagination token for each page. Make the call again using
     * the returned token to retrieve the next page. Keep all other arguments
     * unchanged. Each pagination token expires after 24 hours. Using an expired
     * pagination token will return an HTTP 400 InvalidToken error.</p>
     */
    inline GetDatalakeStatusResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<AccountSources> m_accountSourcesList;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace SecurityLake
} // namespace Aws
