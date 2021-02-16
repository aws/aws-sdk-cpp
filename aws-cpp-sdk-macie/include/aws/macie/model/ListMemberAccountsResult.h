﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/macie/Macie_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/macie/model/MemberAccount.h>
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
namespace Macie
{
namespace Model
{
  class AWS_MACIE_API ListMemberAccountsResult
  {
  public:
    ListMemberAccountsResult();
    ListMemberAccountsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ListMemberAccountsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list of the Amazon Macie Classic member accounts returned by the action.
     * The current Macie Classic administrator account is also included in this list.
     * </p>
     */
    inline const Aws::Vector<MemberAccount>& GetMemberAccounts() const{ return m_memberAccounts; }

    /**
     * <p>A list of the Amazon Macie Classic member accounts returned by the action.
     * The current Macie Classic administrator account is also included in this list.
     * </p>
     */
    inline void SetMemberAccounts(const Aws::Vector<MemberAccount>& value) { m_memberAccounts = value; }

    /**
     * <p>A list of the Amazon Macie Classic member accounts returned by the action.
     * The current Macie Classic administrator account is also included in this list.
     * </p>
     */
    inline void SetMemberAccounts(Aws::Vector<MemberAccount>&& value) { m_memberAccounts = std::move(value); }

    /**
     * <p>A list of the Amazon Macie Classic member accounts returned by the action.
     * The current Macie Classic administrator account is also included in this list.
     * </p>
     */
    inline ListMemberAccountsResult& WithMemberAccounts(const Aws::Vector<MemberAccount>& value) { SetMemberAccounts(value); return *this;}

    /**
     * <p>A list of the Amazon Macie Classic member accounts returned by the action.
     * The current Macie Classic administrator account is also included in this list.
     * </p>
     */
    inline ListMemberAccountsResult& WithMemberAccounts(Aws::Vector<MemberAccount>&& value) { SetMemberAccounts(std::move(value)); return *this;}

    /**
     * <p>A list of the Amazon Macie Classic member accounts returned by the action.
     * The current Macie Classic administrator account is also included in this list.
     * </p>
     */
    inline ListMemberAccountsResult& AddMemberAccounts(const MemberAccount& value) { m_memberAccounts.push_back(value); return *this; }

    /**
     * <p>A list of the Amazon Macie Classic member accounts returned by the action.
     * The current Macie Classic administrator account is also included in this list.
     * </p>
     */
    inline ListMemberAccountsResult& AddMemberAccounts(MemberAccount&& value) { m_memberAccounts.push_back(std::move(value)); return *this; }


    /**
     * <p>When a response is generated, if there is more data to be listed, this
     * parameter is present in the response and contains the value to use for the
     * nextToken parameter in a subsequent pagination request. If there is no more data
     * to be listed, this parameter is set to null. </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>When a response is generated, if there is more data to be listed, this
     * parameter is present in the response and contains the value to use for the
     * nextToken parameter in a subsequent pagination request. If there is no more data
     * to be listed, this parameter is set to null. </p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>When a response is generated, if there is more data to be listed, this
     * parameter is present in the response and contains the value to use for the
     * nextToken parameter in a subsequent pagination request. If there is no more data
     * to be listed, this parameter is set to null. </p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>When a response is generated, if there is more data to be listed, this
     * parameter is present in the response and contains the value to use for the
     * nextToken parameter in a subsequent pagination request. If there is no more data
     * to be listed, this parameter is set to null. </p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>When a response is generated, if there is more data to be listed, this
     * parameter is present in the response and contains the value to use for the
     * nextToken parameter in a subsequent pagination request. If there is no more data
     * to be listed, this parameter is set to null. </p>
     */
    inline ListMemberAccountsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>When a response is generated, if there is more data to be listed, this
     * parameter is present in the response and contains the value to use for the
     * nextToken parameter in a subsequent pagination request. If there is no more data
     * to be listed, this parameter is set to null. </p>
     */
    inline ListMemberAccountsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>When a response is generated, if there is more data to be listed, this
     * parameter is present in the response and contains the value to use for the
     * nextToken parameter in a subsequent pagination request. If there is no more data
     * to be listed, this parameter is set to null. </p>
     */
    inline ListMemberAccountsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<MemberAccount> m_memberAccounts;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace Macie
} // namespace Aws
