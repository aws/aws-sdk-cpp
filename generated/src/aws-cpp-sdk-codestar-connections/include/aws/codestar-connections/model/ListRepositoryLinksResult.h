/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codestar-connections/CodeStarconnections_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/codestar-connections/model/RepositoryLinkInfo.h>
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
namespace CodeStarconnections
{
namespace Model
{
  class ListRepositoryLinksResult
  {
  public:
    AWS_CODESTARCONNECTIONS_API ListRepositoryLinksResult();
    AWS_CODESTARCONNECTIONS_API ListRepositoryLinksResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CODESTARCONNECTIONS_API ListRepositoryLinksResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Lists the repository links called by the list repository links operation.</p>
     */
    inline const Aws::Vector<RepositoryLinkInfo>& GetRepositoryLinks() const{ return m_repositoryLinks; }

    /**
     * <p>Lists the repository links called by the list repository links operation.</p>
     */
    inline void SetRepositoryLinks(const Aws::Vector<RepositoryLinkInfo>& value) { m_repositoryLinks = value; }

    /**
     * <p>Lists the repository links called by the list repository links operation.</p>
     */
    inline void SetRepositoryLinks(Aws::Vector<RepositoryLinkInfo>&& value) { m_repositoryLinks = std::move(value); }

    /**
     * <p>Lists the repository links called by the list repository links operation.</p>
     */
    inline ListRepositoryLinksResult& WithRepositoryLinks(const Aws::Vector<RepositoryLinkInfo>& value) { SetRepositoryLinks(value); return *this;}

    /**
     * <p>Lists the repository links called by the list repository links operation.</p>
     */
    inline ListRepositoryLinksResult& WithRepositoryLinks(Aws::Vector<RepositoryLinkInfo>&& value) { SetRepositoryLinks(std::move(value)); return *this;}

    /**
     * <p>Lists the repository links called by the list repository links operation.</p>
     */
    inline ListRepositoryLinksResult& AddRepositoryLinks(const RepositoryLinkInfo& value) { m_repositoryLinks.push_back(value); return *this; }

    /**
     * <p>Lists the repository links called by the list repository links operation.</p>
     */
    inline ListRepositoryLinksResult& AddRepositoryLinks(RepositoryLinkInfo&& value) { m_repositoryLinks.push_back(std::move(value)); return *this; }


    /**
     * <p>An enumeration token that allows the operation to batch the results of the
     * operation. </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>An enumeration token that allows the operation to batch the results of the
     * operation. </p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>An enumeration token that allows the operation to batch the results of the
     * operation. </p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>An enumeration token that allows the operation to batch the results of the
     * operation. </p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>An enumeration token that allows the operation to batch the results of the
     * operation. </p>
     */
    inline ListRepositoryLinksResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>An enumeration token that allows the operation to batch the results of the
     * operation. </p>
     */
    inline ListRepositoryLinksResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>An enumeration token that allows the operation to batch the results of the
     * operation. </p>
     */
    inline ListRepositoryLinksResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ListRepositoryLinksResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ListRepositoryLinksResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ListRepositoryLinksResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<RepositoryLinkInfo> m_repositoryLinks;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CodeStarconnections
} // namespace Aws
