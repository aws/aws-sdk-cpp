/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/macie2/Macie2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/macie2/model/AutomatedDiscoveryAccount.h>
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
namespace Macie2
{
namespace Model
{
  class ListAutomatedDiscoveryAccountsResult
  {
  public:
    AWS_MACIE2_API ListAutomatedDiscoveryAccountsResult();
    AWS_MACIE2_API ListAutomatedDiscoveryAccountsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MACIE2_API ListAutomatedDiscoveryAccountsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An array of objects, one for each account specified in the request. Each
     * object specifies the Amazon Web Services account ID for an account and the
     * current status of automated sensitive data discovery for that account.</p>
     */
    inline const Aws::Vector<AutomatedDiscoveryAccount>& GetItems() const{ return m_items; }
    inline void SetItems(const Aws::Vector<AutomatedDiscoveryAccount>& value) { m_items = value; }
    inline void SetItems(Aws::Vector<AutomatedDiscoveryAccount>&& value) { m_items = std::move(value); }
    inline ListAutomatedDiscoveryAccountsResult& WithItems(const Aws::Vector<AutomatedDiscoveryAccount>& value) { SetItems(value); return *this;}
    inline ListAutomatedDiscoveryAccountsResult& WithItems(Aws::Vector<AutomatedDiscoveryAccount>&& value) { SetItems(std::move(value)); return *this;}
    inline ListAutomatedDiscoveryAccountsResult& AddItems(const AutomatedDiscoveryAccount& value) { m_items.push_back(value); return *this; }
    inline ListAutomatedDiscoveryAccountsResult& AddItems(AutomatedDiscoveryAccount&& value) { m_items.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The string to use in a subsequent request to get the next page of results in
     * a paginated response. This value is null if there are no additional pages.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListAutomatedDiscoveryAccountsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListAutomatedDiscoveryAccountsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListAutomatedDiscoveryAccountsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListAutomatedDiscoveryAccountsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListAutomatedDiscoveryAccountsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListAutomatedDiscoveryAccountsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<AutomatedDiscoveryAccount> m_items;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Macie2
} // namespace Aws
