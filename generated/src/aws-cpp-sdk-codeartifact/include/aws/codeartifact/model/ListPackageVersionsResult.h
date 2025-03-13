/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codeartifact/CodeArtifact_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/codeartifact/model/PackageFormat.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/codeartifact/model/PackageVersionSummary.h>
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
  class ListPackageVersionsResult
  {
  public:
    AWS_CODEARTIFACT_API ListPackageVersionsResult() = default;
    AWS_CODEARTIFACT_API ListPackageVersionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CODEARTIFACT_API ListPackageVersionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p> The default package version to display. This depends on the package format:
     * </p> <ul> <li> <p> For Maven and PyPI packages, it's the most recently published
     * package version. </p> </li> <li> <p> For npm packages, it's the version
     * referenced by the <code>latest</code> tag. If the <code>latest</code> tag is not
     * set, it's the most recently published package version. </p> </li> </ul>
     */
    inline const Aws::String& GetDefaultDisplayVersion() const { return m_defaultDisplayVersion; }
    template<typename DefaultDisplayVersionT = Aws::String>
    void SetDefaultDisplayVersion(DefaultDisplayVersionT&& value) { m_defaultDisplayVersionHasBeenSet = true; m_defaultDisplayVersion = std::forward<DefaultDisplayVersionT>(value); }
    template<typename DefaultDisplayVersionT = Aws::String>
    ListPackageVersionsResult& WithDefaultDisplayVersion(DefaultDisplayVersionT&& value) { SetDefaultDisplayVersion(std::forward<DefaultDisplayVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> A format of the package. </p>
     */
    inline PackageFormat GetFormat() const { return m_format; }
    inline void SetFormat(PackageFormat value) { m_formatHasBeenSet = true; m_format = value; }
    inline ListPackageVersionsResult& WithFormat(PackageFormat value) { SetFormat(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The namespace of the package that contains the requested package versions.
     * The package component that specifies its namespace depends on its type. For
     * example:</p> <ul> <li> <p> The namespace of a Maven package version is its
     * <code>groupId</code>. </p> </li> <li> <p> The namespace of an npm or Swift
     * package version is its <code>scope</code>. </p> </li> <li> <p>The namespace of a
     * generic package is its <code>namespace</code>.</p> </li> <li> <p> Python, NuGet,
     * Ruby, and Cargo package versions do not contain a corresponding component,
     * package versions of those formats do not have a namespace. </p> </li> </ul>
     */
    inline const Aws::String& GetNamespace() const { return m_namespace; }
    template<typename NamespaceT = Aws::String>
    void SetNamespace(NamespaceT&& value) { m_namespaceHasBeenSet = true; m_namespace = std::forward<NamespaceT>(value); }
    template<typename NamespaceT = Aws::String>
    ListPackageVersionsResult& WithNamespace(NamespaceT&& value) { SetNamespace(std::forward<NamespaceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The name of the package. </p>
     */
    inline const Aws::String& GetPackage() const { return m_package; }
    template<typename PackageT = Aws::String>
    void SetPackage(PackageT&& value) { m_packageHasBeenSet = true; m_package = std::forward<PackageT>(value); }
    template<typename PackageT = Aws::String>
    ListPackageVersionsResult& WithPackage(PackageT&& value) { SetPackage(std::forward<PackageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The returned list of <a
     * href="https://docs.aws.amazon.com/codeartifact/latest/APIReference/API_PackageVersionSummary.html">PackageVersionSummary</a>
     * objects. </p>
     */
    inline const Aws::Vector<PackageVersionSummary>& GetVersions() const { return m_versions; }
    template<typename VersionsT = Aws::Vector<PackageVersionSummary>>
    void SetVersions(VersionsT&& value) { m_versionsHasBeenSet = true; m_versions = std::forward<VersionsT>(value); }
    template<typename VersionsT = Aws::Vector<PackageVersionSummary>>
    ListPackageVersionsResult& WithVersions(VersionsT&& value) { SetVersions(std::forward<VersionsT>(value)); return *this;}
    template<typename VersionsT = PackageVersionSummary>
    ListPackageVersionsResult& AddVersions(VersionsT&& value) { m_versionsHasBeenSet = true; m_versions.emplace_back(std::forward<VersionsT>(value)); return *this; }
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
    ListPackageVersionsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListPackageVersionsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_defaultDisplayVersion;
    bool m_defaultDisplayVersionHasBeenSet = false;

    PackageFormat m_format{PackageFormat::NOT_SET};
    bool m_formatHasBeenSet = false;

    Aws::String m_namespace;
    bool m_namespaceHasBeenSet = false;

    Aws::String m_package;
    bool m_packageHasBeenSet = false;

    Aws::Vector<PackageVersionSummary> m_versions;
    bool m_versionsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeArtifact
} // namespace Aws
