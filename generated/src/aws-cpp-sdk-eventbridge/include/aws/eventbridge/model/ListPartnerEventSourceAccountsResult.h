/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/eventbridge/EventBridge_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/eventbridge/model/PartnerEventSourceAccount.h>
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
namespace EventBridge
{
namespace Model
{
  class ListPartnerEventSourceAccountsResult
  {
  public:
    AWS_EVENTBRIDGE_API ListPartnerEventSourceAccountsResult();
    AWS_EVENTBRIDGE_API ListPartnerEventSourceAccountsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_EVENTBRIDGE_API ListPartnerEventSourceAccountsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The list of partner event sources returned by the operation.</p>
     */
    inline const Aws::Vector<PartnerEventSourceAccount>& GetPartnerEventSourceAccounts() const{ return m_partnerEventSourceAccounts; }

    /**
     * <p>The list of partner event sources returned by the operation.</p>
     */
    inline void SetPartnerEventSourceAccounts(const Aws::Vector<PartnerEventSourceAccount>& value) { m_partnerEventSourceAccounts = value; }

    /**
     * <p>The list of partner event sources returned by the operation.</p>
     */
    inline void SetPartnerEventSourceAccounts(Aws::Vector<PartnerEventSourceAccount>&& value) { m_partnerEventSourceAccounts = std::move(value); }

    /**
     * <p>The list of partner event sources returned by the operation.</p>
     */
    inline ListPartnerEventSourceAccountsResult& WithPartnerEventSourceAccounts(const Aws::Vector<PartnerEventSourceAccount>& value) { SetPartnerEventSourceAccounts(value); return *this;}

    /**
     * <p>The list of partner event sources returned by the operation.</p>
     */
    inline ListPartnerEventSourceAccountsResult& WithPartnerEventSourceAccounts(Aws::Vector<PartnerEventSourceAccount>&& value) { SetPartnerEventSourceAccounts(std::move(value)); return *this;}

    /**
     * <p>The list of partner event sources returned by the operation.</p>
     */
    inline ListPartnerEventSourceAccountsResult& AddPartnerEventSourceAccounts(const PartnerEventSourceAccount& value) { m_partnerEventSourceAccounts.push_back(value); return *this; }

    /**
     * <p>The list of partner event sources returned by the operation.</p>
     */
    inline ListPartnerEventSourceAccountsResult& AddPartnerEventSourceAccounts(PartnerEventSourceAccount&& value) { m_partnerEventSourceAccounts.push_back(std::move(value)); return *this; }


    /**
     * <p>A token you can use in a subsequent operation to retrieve the next set of
     * results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>A token you can use in a subsequent operation to retrieve the next set of
     * results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>A token you can use in a subsequent operation to retrieve the next set of
     * results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>A token you can use in a subsequent operation to retrieve the next set of
     * results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>A token you can use in a subsequent operation to retrieve the next set of
     * results.</p>
     */
    inline ListPartnerEventSourceAccountsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>A token you can use in a subsequent operation to retrieve the next set of
     * results.</p>
     */
    inline ListPartnerEventSourceAccountsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>A token you can use in a subsequent operation to retrieve the next set of
     * results.</p>
     */
    inline ListPartnerEventSourceAccountsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<PartnerEventSourceAccount> m_partnerEventSourceAccounts;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace EventBridge
} // namespace Aws
