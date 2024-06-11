﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codeartifact/CodeArtifact_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/codeartifact/model/DomainSummary.h>
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
namespace CodeArtifact
{
namespace Model
{
  class ListDomainsResult
  {
  public:
    AWS_CODEARTIFACT_API ListDomainsResult();
    AWS_CODEARTIFACT_API ListDomainsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CODEARTIFACT_API ListDomainsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p> The returned list of <a
     * href="https://docs.aws.amazon.com/codeartifact/latest/APIReference/API_DomainSummary.html">DomainSummary</a>
     * objects. </p>
     */
    inline const Aws::Vector<DomainSummary>& GetDomains() const{ return m_domains; }
    inline void SetDomains(const Aws::Vector<DomainSummary>& value) { m_domains = value; }
    inline void SetDomains(Aws::Vector<DomainSummary>&& value) { m_domains = std::move(value); }
    inline ListDomainsResult& WithDomains(const Aws::Vector<DomainSummary>& value) { SetDomains(value); return *this;}
    inline ListDomainsResult& WithDomains(Aws::Vector<DomainSummary>&& value) { SetDomains(std::move(value)); return *this;}
    inline ListDomainsResult& AddDomains(const DomainSummary& value) { m_domains.push_back(value); return *this; }
    inline ListDomainsResult& AddDomains(DomainSummary&& value) { m_domains.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> The token for the next set of results. Use the value returned in the
     * previous response in the next request to retrieve the next set of results. </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListDomainsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListDomainsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListDomainsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListDomainsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListDomainsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListDomainsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<DomainSummary> m_domains;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CodeArtifact
} // namespace Aws
