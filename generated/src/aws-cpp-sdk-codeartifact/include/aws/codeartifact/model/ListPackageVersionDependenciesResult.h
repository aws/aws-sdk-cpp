/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codeartifact/CodeArtifact_EXPORTS.h>
#include <aws/codeartifact/model/PackageFormat.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/codeartifact/model/PackageDependency.h>
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
  class ListPackageVersionDependenciesResult
  {
  public:
    AWS_CODEARTIFACT_API ListPackageVersionDependenciesResult() = default;
    AWS_CODEARTIFACT_API ListPackageVersionDependenciesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CODEARTIFACT_API ListPackageVersionDependenciesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p> A format that specifies the type of the package that contains the returned
     * dependencies. </p>
     */
    inline PackageFormat GetFormat() const { return m_format; }
    inline void SetFormat(PackageFormat value) { m_formatHasBeenSet = true; m_format = value; }
    inline ListPackageVersionDependenciesResult& WithFormat(PackageFormat value) { SetFormat(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The namespace of the package version that contains the returned dependencies.
     * The package component that specifies its namespace depends on its type. For
     * example:</p>  <p>The namespace is required when listing dependencies from
     * package versions of the following formats:</p> <ul> <li> <p>Maven</p> </li>
     * </ul>  <ul> <li> <p> The namespace of a Maven package version is its
     * <code>groupId</code>. </p> </li> <li> <p> The namespace of an npm package
     * version is its <code>scope</code>. </p> </li> <li> <p> Python and NuGet package
     * versions do not contain a corresponding component, package versions of those
     * formats do not have a namespace. </p> </li> </ul>
     */
    inline const Aws::String& GetNamespace() const { return m_namespace; }
    template<typename NamespaceT = Aws::String>
    void SetNamespace(NamespaceT&& value) { m_namespaceHasBeenSet = true; m_namespace = std::forward<NamespaceT>(value); }
    template<typename NamespaceT = Aws::String>
    ListPackageVersionDependenciesResult& WithNamespace(NamespaceT&& value) { SetNamespace(std::forward<NamespaceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The name of the package that contains the returned package versions
     * dependencies. </p>
     */
    inline const Aws::String& GetPackage() const { return m_package; }
    template<typename PackageT = Aws::String>
    void SetPackage(PackageT&& value) { m_packageHasBeenSet = true; m_package = std::forward<PackageT>(value); }
    template<typename PackageT = Aws::String>
    ListPackageVersionDependenciesResult& WithPackage(PackageT&& value) { SetPackage(std::forward<PackageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The version of the package that is specified in the request. </p>
     */
    inline const Aws::String& GetVersion() const { return m_version; }
    template<typename VersionT = Aws::String>
    void SetVersion(VersionT&& value) { m_versionHasBeenSet = true; m_version = std::forward<VersionT>(value); }
    template<typename VersionT = Aws::String>
    ListPackageVersionDependenciesResult& WithVersion(VersionT&& value) { SetVersion(std::forward<VersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The current revision associated with the package version. </p>
     */
    inline const Aws::String& GetVersionRevision() const { return m_versionRevision; }
    template<typename VersionRevisionT = Aws::String>
    void SetVersionRevision(VersionRevisionT&& value) { m_versionRevisionHasBeenSet = true; m_versionRevision = std::forward<VersionRevisionT>(value); }
    template<typename VersionRevisionT = Aws::String>
    ListPackageVersionDependenciesResult& WithVersionRevision(VersionRevisionT&& value) { SetVersionRevision(std::forward<VersionRevisionT>(value)); return *this;}
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
    ListPackageVersionDependenciesResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The returned list of <a
     * href="https://docs.aws.amazon.com/codeartifact/latest/APIReference/API_PackageDependency.html">PackageDependency</a>
     * objects. </p>
     */
    inline const Aws::Vector<PackageDependency>& GetDependencies() const { return m_dependencies; }
    template<typename DependenciesT = Aws::Vector<PackageDependency>>
    void SetDependencies(DependenciesT&& value) { m_dependenciesHasBeenSet = true; m_dependencies = std::forward<DependenciesT>(value); }
    template<typename DependenciesT = Aws::Vector<PackageDependency>>
    ListPackageVersionDependenciesResult& WithDependencies(DependenciesT&& value) { SetDependencies(std::forward<DependenciesT>(value)); return *this;}
    template<typename DependenciesT = PackageDependency>
    ListPackageVersionDependenciesResult& AddDependencies(DependenciesT&& value) { m_dependenciesHasBeenSet = true; m_dependencies.emplace_back(std::forward<DependenciesT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListPackageVersionDependenciesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    PackageFormat m_format{PackageFormat::NOT_SET};
    bool m_formatHasBeenSet = false;

    Aws::String m_namespace;
    bool m_namespaceHasBeenSet = false;

    Aws::String m_package;
    bool m_packageHasBeenSet = false;

    Aws::String m_version;
    bool m_versionHasBeenSet = false;

    Aws::String m_versionRevision;
    bool m_versionRevisionHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Vector<PackageDependency> m_dependencies;
    bool m_dependenciesHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeArtifact
} // namespace Aws
