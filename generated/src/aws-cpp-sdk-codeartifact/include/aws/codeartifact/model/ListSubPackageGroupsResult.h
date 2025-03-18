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
    AWS_CODEARTIFACT_API ListSubPackageGroupsResult() = default;
    AWS_CODEARTIFACT_API ListSubPackageGroupsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CODEARTIFACT_API ListSubPackageGroupsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p> A list of sub package groups for the requested package group. </p>
     */
    inline const Aws::Vector<PackageGroupSummary>& GetPackageGroups() const { return m_packageGroups; }
    template<typename PackageGroupsT = Aws::Vector<PackageGroupSummary>>
    void SetPackageGroups(PackageGroupsT&& value) { m_packageGroupsHasBeenSet = true; m_packageGroups = std::forward<PackageGroupsT>(value); }
    template<typename PackageGroupsT = Aws::Vector<PackageGroupSummary>>
    ListSubPackageGroupsResult& WithPackageGroups(PackageGroupsT&& value) { SetPackageGroups(std::forward<PackageGroupsT>(value)); return *this;}
    template<typename PackageGroupsT = PackageGroupSummary>
    ListSubPackageGroupsResult& AddPackageGroups(PackageGroupsT&& value) { m_packageGroupsHasBeenSet = true; m_packageGroups.emplace_back(std::forward<PackageGroupsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> If there are additional results, this is the token for the next set of
     * results. </p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListSubPackageGroupsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListSubPackageGroupsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<PackageGroupSummary> m_packageGroups;
    bool m_packageGroupsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeArtifact
} // namespace Aws
