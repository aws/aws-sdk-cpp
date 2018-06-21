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
     * <p>A list of the Amazon Macie member accounts returned by the action. The
     * current master account is also included in this list. </p>
     */
    inline const Aws::Vector<MemberAccount>& GetMemberAccounts() const{ return m_memberAccounts; }

    /**
     * <p>A list of the Amazon Macie member accounts returned by the action. The
     * current master account is also included in this list. </p>
     */
    inline void SetMemberAccounts(const Aws::Vector<MemberAccount>& value) { m_memberAccounts = value; }

    /**
     * <p>A list of the Amazon Macie member accounts returned by the action. The
     * current master account is also included in this list. </p>
     */
    inline void SetMemberAccounts(Aws::Vector<MemberAccount>&& value) { m_memberAccounts = std::move(value); }

    /**
     * <p>A list of the Amazon Macie member accounts returned by the action. The
     * current master account is also included in this list. </p>
     */
    inline ListMemberAccountsResult& WithMemberAccounts(const Aws::Vector<MemberAccount>& value) { SetMemberAccounts(value); return *this;}

    /**
     * <p>A list of the Amazon Macie member accounts returned by the action. The
     * current master account is also included in this list. </p>
     */
    inline ListMemberAccountsResult& WithMemberAccounts(Aws::Vector<MemberAccount>&& value) { SetMemberAccounts(std::move(value)); return *this;}

    /**
     * <p>A list of the Amazon Macie member accounts returned by the action. The
     * current master account is also included in this list. </p>
     */
    inline ListMemberAccountsResult& AddMemberAccounts(const MemberAccount& value) { m_memberAccounts.push_back(value); return *this; }

    /**
     * <p>A list of the Amazon Macie member accounts returned by the action. The
     * current master account is also included in this list. </p>
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
