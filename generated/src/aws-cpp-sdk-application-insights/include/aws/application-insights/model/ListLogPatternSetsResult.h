/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/application-insights/ApplicationInsights_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace ApplicationInsights
{
namespace Model
{
  class ListLogPatternSetsResult
  {
  public:
    AWS_APPLICATIONINSIGHTS_API ListLogPatternSetsResult();
    AWS_APPLICATIONINSIGHTS_API ListLogPatternSetsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APPLICATIONINSIGHTS_API ListLogPatternSetsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The name of the resource group.</p>
     */
    inline const Aws::String& GetResourceGroupName() const{ return m_resourceGroupName; }
    inline void SetResourceGroupName(const Aws::String& value) { m_resourceGroupName = value; }
    inline void SetResourceGroupName(Aws::String&& value) { m_resourceGroupName = std::move(value); }
    inline void SetResourceGroupName(const char* value) { m_resourceGroupName.assign(value); }
    inline ListLogPatternSetsResult& WithResourceGroupName(const Aws::String& value) { SetResourceGroupName(value); return *this;}
    inline ListLogPatternSetsResult& WithResourceGroupName(Aws::String&& value) { SetResourceGroupName(std::move(value)); return *this;}
    inline ListLogPatternSetsResult& WithResourceGroupName(const char* value) { SetResourceGroupName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services account ID for the resource group owner.</p>
     */
    inline const Aws::String& GetAccountId() const{ return m_accountId; }
    inline void SetAccountId(const Aws::String& value) { m_accountId = value; }
    inline void SetAccountId(Aws::String&& value) { m_accountId = std::move(value); }
    inline void SetAccountId(const char* value) { m_accountId.assign(value); }
    inline ListLogPatternSetsResult& WithAccountId(const Aws::String& value) { SetAccountId(value); return *this;}
    inline ListLogPatternSetsResult& WithAccountId(Aws::String&& value) { SetAccountId(std::move(value)); return *this;}
    inline ListLogPatternSetsResult& WithAccountId(const char* value) { SetAccountId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of log pattern sets.</p>
     */
    inline const Aws::Vector<Aws::String>& GetLogPatternSets() const{ return m_logPatternSets; }
    inline void SetLogPatternSets(const Aws::Vector<Aws::String>& value) { m_logPatternSets = value; }
    inline void SetLogPatternSets(Aws::Vector<Aws::String>&& value) { m_logPatternSets = std::move(value); }
    inline ListLogPatternSetsResult& WithLogPatternSets(const Aws::Vector<Aws::String>& value) { SetLogPatternSets(value); return *this;}
    inline ListLogPatternSetsResult& WithLogPatternSets(Aws::Vector<Aws::String>&& value) { SetLogPatternSets(std::move(value)); return *this;}
    inline ListLogPatternSetsResult& AddLogPatternSets(const Aws::String& value) { m_logPatternSets.push_back(value); return *this; }
    inline ListLogPatternSetsResult& AddLogPatternSets(Aws::String&& value) { m_logPatternSets.push_back(std::move(value)); return *this; }
    inline ListLogPatternSetsResult& AddLogPatternSets(const char* value) { m_logPatternSets.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token used to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return. </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListLogPatternSetsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListLogPatternSetsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListLogPatternSetsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListLogPatternSetsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListLogPatternSetsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListLogPatternSetsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_resourceGroupName;

    Aws::String m_accountId;

    Aws::Vector<Aws::String> m_logPatternSets;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ApplicationInsights
} // namespace Aws
