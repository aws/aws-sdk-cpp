/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codeartifact/CodeArtifact_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/codeartifact/model/PackageGroupSummary.h>
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
  class ListSubPackageGroupsResult
  {
  public:
    AWS_CODEARTIFACT_API ListSubPackageGroupsResult();
    AWS_CODEARTIFACT_API ListSubPackageGroupsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CODEARTIFACT_API ListSubPackageGroupsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p> A list of sub package groups for the requested package group. </p>
     */
    inline const Aws::Vector<PackageGroupSummary>& GetPackageGroups() const{ return m_packageGroups; }

    /**
     * <p> A list of sub package groups for the requested package group. </p>
     */
    inline void SetPackageGroups(const Aws::Vector<PackageGroupSummary>& value) { m_packageGroups = value; }

    /**
     * <p> A list of sub package groups for the requested package group. </p>
     */
    inline void SetPackageGroups(Aws::Vector<PackageGroupSummary>&& value) { m_packageGroups = std::move(value); }

    /**
     * <p> A list of sub package groups for the requested package group. </p>
     */
    inline ListSubPackageGroupsResult& WithPackageGroups(const Aws::Vector<PackageGroupSummary>& value) { SetPackageGroups(value); return *this;}

    /**
     * <p> A list of sub package groups for the requested package group. </p>
     */
    inline ListSubPackageGroupsResult& WithPackageGroups(Aws::Vector<PackageGroupSummary>&& value) { SetPackageGroups(std::move(value)); return *this;}

    /**
     * <p> A list of sub package groups for the requested package group. </p>
     */
    inline ListSubPackageGroupsResult& AddPackageGroups(const PackageGroupSummary& value) { m_packageGroups.push_back(value); return *this; }

    /**
     * <p> A list of sub package groups for the requested package group. </p>
     */
    inline ListSubPackageGroupsResult& AddPackageGroups(PackageGroupSummary&& value) { m_packageGroups.push_back(std::move(value)); return *this; }


    /**
     * <p> If there are additional results, this is the token for the next set of
     * results. </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p> If there are additional results, this is the token for the next set of
     * results. </p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p> If there are additional results, this is the token for the next set of
     * results. </p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p> If there are additional results, this is the token for the next set of
     * results. </p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p> If there are additional results, this is the token for the next set of
     * results. </p>
     */
    inline ListSubPackageGroupsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p> If there are additional results, this is the token for the next set of
     * results. </p>
     */
    inline ListSubPackageGroupsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p> If there are additional results, this is the token for the next set of
     * results. </p>
     */
    inline ListSubPackageGroupsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ListSubPackageGroupsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ListSubPackageGroupsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ListSubPackageGroupsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<PackageGroupSummary> m_packageGroups;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CodeArtifact
} // namespace Aws
