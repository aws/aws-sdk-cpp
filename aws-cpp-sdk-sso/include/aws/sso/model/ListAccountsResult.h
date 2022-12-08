/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sso/SSO_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sso/model/AccountInfo.h>
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
namespace SSO
{
namespace Model
{
  class ListAccountsResult
  {
  public:
    AWS_SSO_API ListAccountsResult();
    AWS_SSO_API ListAccountsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SSO_API ListAccountsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The page token client that is used to retrieve the list of accounts.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The page token client that is used to retrieve the list of accounts.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The page token client that is used to retrieve the list of accounts.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The page token client that is used to retrieve the list of accounts.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The page token client that is used to retrieve the list of accounts.</p>
     */
    inline ListAccountsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The page token client that is used to retrieve the list of accounts.</p>
     */
    inline ListAccountsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The page token client that is used to retrieve the list of accounts.</p>
     */
    inline ListAccountsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>A paginated response with the list of account information and the next token
     * if more results are available.</p>
     */
    inline const Aws::Vector<AccountInfo>& GetAccountList() const{ return m_accountList; }

    /**
     * <p>A paginated response with the list of account information and the next token
     * if more results are available.</p>
     */
    inline void SetAccountList(const Aws::Vector<AccountInfo>& value) { m_accountList = value; }

    /**
     * <p>A paginated response with the list of account information and the next token
     * if more results are available.</p>
     */
    inline void SetAccountList(Aws::Vector<AccountInfo>&& value) { m_accountList = std::move(value); }

    /**
     * <p>A paginated response with the list of account information and the next token
     * if more results are available.</p>
     */
    inline ListAccountsResult& WithAccountList(const Aws::Vector<AccountInfo>& value) { SetAccountList(value); return *this;}

    /**
     * <p>A paginated response with the list of account information and the next token
     * if more results are available.</p>
     */
    inline ListAccountsResult& WithAccountList(Aws::Vector<AccountInfo>&& value) { SetAccountList(std::move(value)); return *this;}

    /**
     * <p>A paginated response with the list of account information and the next token
     * if more results are available.</p>
     */
    inline ListAccountsResult& AddAccountList(const AccountInfo& value) { m_accountList.push_back(value); return *this; }

    /**
     * <p>A paginated response with the list of account information and the next token
     * if more results are available.</p>
     */
    inline ListAccountsResult& AddAccountList(AccountInfo&& value) { m_accountList.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_nextToken;

    Aws::Vector<AccountInfo> m_accountList;
  };

} // namespace Model
} // namespace SSO
} // namespace Aws
