/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codestar-connections/CodeStarconnections_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/codestar-connections/model/RepositorySyncDefinition.h>
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
  class ListRepositorySyncDefinitionsResult
  {
  public:
    AWS_CODESTARCONNECTIONS_API ListRepositorySyncDefinitionsResult();
    AWS_CODESTARCONNECTIONS_API ListRepositorySyncDefinitionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CODESTARCONNECTIONS_API ListRepositorySyncDefinitionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The list of repository sync definitions returned by the request. A
     * <code>RepositorySyncDefinition</code> is a mapping from a repository branch to
     * all the Amazon Web Services resources that are being synced from that
     * branch.</p>
     */
    inline const Aws::Vector<RepositorySyncDefinition>& GetRepositorySyncDefinitions() const{ return m_repositorySyncDefinitions; }

    /**
     * <p>The list of repository sync definitions returned by the request. A
     * <code>RepositorySyncDefinition</code> is a mapping from a repository branch to
     * all the Amazon Web Services resources that are being synced from that
     * branch.</p>
     */
    inline void SetRepositorySyncDefinitions(const Aws::Vector<RepositorySyncDefinition>& value) { m_repositorySyncDefinitions = value; }

    /**
     * <p>The list of repository sync definitions returned by the request. A
     * <code>RepositorySyncDefinition</code> is a mapping from a repository branch to
     * all the Amazon Web Services resources that are being synced from that
     * branch.</p>
     */
    inline void SetRepositorySyncDefinitions(Aws::Vector<RepositorySyncDefinition>&& value) { m_repositorySyncDefinitions = std::move(value); }

    /**
     * <p>The list of repository sync definitions returned by the request. A
     * <code>RepositorySyncDefinition</code> is a mapping from a repository branch to
     * all the Amazon Web Services resources that are being synced from that
     * branch.</p>
     */
    inline ListRepositorySyncDefinitionsResult& WithRepositorySyncDefinitions(const Aws::Vector<RepositorySyncDefinition>& value) { SetRepositorySyncDefinitions(value); return *this;}

    /**
     * <p>The list of repository sync definitions returned by the request. A
     * <code>RepositorySyncDefinition</code> is a mapping from a repository branch to
     * all the Amazon Web Services resources that are being synced from that
     * branch.</p>
     */
    inline ListRepositorySyncDefinitionsResult& WithRepositorySyncDefinitions(Aws::Vector<RepositorySyncDefinition>&& value) { SetRepositorySyncDefinitions(std::move(value)); return *this;}

    /**
     * <p>The list of repository sync definitions returned by the request. A
     * <code>RepositorySyncDefinition</code> is a mapping from a repository branch to
     * all the Amazon Web Services resources that are being synced from that
     * branch.</p>
     */
    inline ListRepositorySyncDefinitionsResult& AddRepositorySyncDefinitions(const RepositorySyncDefinition& value) { m_repositorySyncDefinitions.push_back(value); return *this; }

    /**
     * <p>The list of repository sync definitions returned by the request. A
     * <code>RepositorySyncDefinition</code> is a mapping from a repository branch to
     * all the Amazon Web Services resources that are being synced from that
     * branch.</p>
     */
    inline ListRepositorySyncDefinitionsResult& AddRepositorySyncDefinitions(RepositorySyncDefinition&& value) { m_repositorySyncDefinitions.push_back(std::move(value)); return *this; }


    /**
     * <p>An enumeration token that, when provided in a request, returns the next batch
     * of the results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>An enumeration token that, when provided in a request, returns the next batch
     * of the results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>An enumeration token that, when provided in a request, returns the next batch
     * of the results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>An enumeration token that, when provided in a request, returns the next batch
     * of the results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>An enumeration token that, when provided in a request, returns the next batch
     * of the results.</p>
     */
    inline ListRepositorySyncDefinitionsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>An enumeration token that, when provided in a request, returns the next batch
     * of the results.</p>
     */
    inline ListRepositorySyncDefinitionsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>An enumeration token that, when provided in a request, returns the next batch
     * of the results.</p>
     */
    inline ListRepositorySyncDefinitionsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ListRepositorySyncDefinitionsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ListRepositorySyncDefinitionsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ListRepositorySyncDefinitionsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<RepositorySyncDefinition> m_repositorySyncDefinitions;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CodeStarconnections
} // namespace Aws
