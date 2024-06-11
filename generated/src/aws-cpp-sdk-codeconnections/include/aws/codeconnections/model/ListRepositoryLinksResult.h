﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codeconnections/CodeConnections_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/codeconnections/model/RepositoryLinkInfo.h>
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
namespace CodeConnections
{
namespace Model
{
  class ListRepositoryLinksResult
  {
  public:
    AWS_CODECONNECTIONS_API ListRepositoryLinksResult();
    AWS_CODECONNECTIONS_API ListRepositoryLinksResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CODECONNECTIONS_API ListRepositoryLinksResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Lists the repository links called by the list repository links operation.</p>
     */
    inline const Aws::Vector<RepositoryLinkInfo>& GetRepositoryLinks() const{ return m_repositoryLinks; }
    inline void SetRepositoryLinks(const Aws::Vector<RepositoryLinkInfo>& value) { m_repositoryLinks = value; }
    inline void SetRepositoryLinks(Aws::Vector<RepositoryLinkInfo>&& value) { m_repositoryLinks = std::move(value); }
    inline ListRepositoryLinksResult& WithRepositoryLinks(const Aws::Vector<RepositoryLinkInfo>& value) { SetRepositoryLinks(value); return *this;}
    inline ListRepositoryLinksResult& WithRepositoryLinks(Aws::Vector<RepositoryLinkInfo>&& value) { SetRepositoryLinks(std::move(value)); return *this;}
    inline ListRepositoryLinksResult& AddRepositoryLinks(const RepositoryLinkInfo& value) { m_repositoryLinks.push_back(value); return *this; }
    inline ListRepositoryLinksResult& AddRepositoryLinks(RepositoryLinkInfo&& value) { m_repositoryLinks.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>An enumeration token that allows the operation to batch the results of the
     * operation. </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListRepositoryLinksResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListRepositoryLinksResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListRepositoryLinksResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListRepositoryLinksResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListRepositoryLinksResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListRepositoryLinksResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<RepositoryLinkInfo> m_repositoryLinks;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CodeConnections
} // namespace Aws
