/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codeartifact/CodeArtifact_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
  class ListAllowedRepositoriesForGroupResult
  {
  public:
    AWS_CODEARTIFACT_API ListAllowedRepositoriesForGroupResult();
    AWS_CODEARTIFACT_API ListAllowedRepositoriesForGroupResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CODEARTIFACT_API ListAllowedRepositoriesForGroupResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The list of allowed repositories for the package group and origin
     * configuration restriction type.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAllowedRepositories() const{ return m_allowedRepositories; }

    /**
     * <p>The list of allowed repositories for the package group and origin
     * configuration restriction type.</p>
     */
    inline void SetAllowedRepositories(const Aws::Vector<Aws::String>& value) { m_allowedRepositories = value; }

    /**
     * <p>The list of allowed repositories for the package group and origin
     * configuration restriction type.</p>
     */
    inline void SetAllowedRepositories(Aws::Vector<Aws::String>&& value) { m_allowedRepositories = std::move(value); }

    /**
     * <p>The list of allowed repositories for the package group and origin
     * configuration restriction type.</p>
     */
    inline ListAllowedRepositoriesForGroupResult& WithAllowedRepositories(const Aws::Vector<Aws::String>& value) { SetAllowedRepositories(value); return *this;}

    /**
     * <p>The list of allowed repositories for the package group and origin
     * configuration restriction type.</p>
     */
    inline ListAllowedRepositoriesForGroupResult& WithAllowedRepositories(Aws::Vector<Aws::String>&& value) { SetAllowedRepositories(std::move(value)); return *this;}

    /**
     * <p>The list of allowed repositories for the package group and origin
     * configuration restriction type.</p>
     */
    inline ListAllowedRepositoriesForGroupResult& AddAllowedRepositories(const Aws::String& value) { m_allowedRepositories.push_back(value); return *this; }

    /**
     * <p>The list of allowed repositories for the package group and origin
     * configuration restriction type.</p>
     */
    inline ListAllowedRepositoriesForGroupResult& AddAllowedRepositories(Aws::String&& value) { m_allowedRepositories.push_back(std::move(value)); return *this; }

    /**
     * <p>The list of allowed repositories for the package group and origin
     * configuration restriction type.</p>
     */
    inline ListAllowedRepositoriesForGroupResult& AddAllowedRepositories(const char* value) { m_allowedRepositories.push_back(value); return *this; }


    /**
     * <p> The token for the next set of results. Use the value returned in the
     * previous response in the next request to retrieve the next set of results. </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p> The token for the next set of results. Use the value returned in the
     * previous response in the next request to retrieve the next set of results. </p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p> The token for the next set of results. Use the value returned in the
     * previous response in the next request to retrieve the next set of results. </p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p> The token for the next set of results. Use the value returned in the
     * previous response in the next request to retrieve the next set of results. </p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p> The token for the next set of results. Use the value returned in the
     * previous response in the next request to retrieve the next set of results. </p>
     */
    inline ListAllowedRepositoriesForGroupResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p> The token for the next set of results. Use the value returned in the
     * previous response in the next request to retrieve the next set of results. </p>
     */
    inline ListAllowedRepositoriesForGroupResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p> The token for the next set of results. Use the value returned in the
     * previous response in the next request to retrieve the next set of results. </p>
     */
    inline ListAllowedRepositoriesForGroupResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ListAllowedRepositoriesForGroupResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ListAllowedRepositoriesForGroupResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ListAllowedRepositoriesForGroupResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<Aws::String> m_allowedRepositories;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CodeArtifact
} // namespace Aws
