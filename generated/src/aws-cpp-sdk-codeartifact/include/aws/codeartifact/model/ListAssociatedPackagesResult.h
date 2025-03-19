/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codeartifact/CodeArtifact_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/codeartifact/model/AssociatedPackage.h>
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
  class ListAssociatedPackagesResult
  {
  public:
    AWS_CODEARTIFACT_API ListAssociatedPackagesResult() = default;
    AWS_CODEARTIFACT_API ListAssociatedPackagesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CODEARTIFACT_API ListAssociatedPackagesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p> The list of packages associated with the requested package group. </p>
     */
    inline const Aws::Vector<AssociatedPackage>& GetPackages() const { return m_packages; }
    template<typename PackagesT = Aws::Vector<AssociatedPackage>>
    void SetPackages(PackagesT&& value) { m_packagesHasBeenSet = true; m_packages = std::forward<PackagesT>(value); }
    template<typename PackagesT = Aws::Vector<AssociatedPackage>>
    ListAssociatedPackagesResult& WithPackages(PackagesT&& value) { SetPackages(std::forward<PackagesT>(value)); return *this;}
    template<typename PackagesT = AssociatedPackage>
    ListAssociatedPackagesResult& AddPackages(PackagesT&& value) { m_packagesHasBeenSet = true; m_packages.emplace_back(std::forward<PackagesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> The token for the next set of results. Use the value returned in the
     * previous response in the next request to retrieve the next set of results. </p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListAssociatedPackagesResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListAssociatedPackagesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<AssociatedPackage> m_packages;
    bool m_packagesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeArtifact
} // namespace Aws
