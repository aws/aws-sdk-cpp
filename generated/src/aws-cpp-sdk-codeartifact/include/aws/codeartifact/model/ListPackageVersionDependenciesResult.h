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
    AWS_CODEARTIFACT_API ListPackageVersionDependenciesResult();
    AWS_CODEARTIFACT_API ListPackageVersionDependenciesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CODEARTIFACT_API ListPackageVersionDependenciesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p> A format that specifies the type of the package that contains the returned
     * dependencies. </p>
     */
    inline const PackageFormat& GetFormat() const{ return m_format; }
    inline void SetFormat(const PackageFormat& value) { m_format = value; }
    inline void SetFormat(PackageFormat&& value) { m_format = std::move(value); }
    inline ListPackageVersionDependenciesResult& WithFormat(const PackageFormat& value) { SetFormat(value); return *this;}
    inline ListPackageVersionDependenciesResult& WithFormat(PackageFormat&& value) { SetFormat(std::move(value)); return *this;}
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
    inline const Aws::String& GetNamespace() const{ return m_namespace; }
    inline void SetNamespace(const Aws::String& value) { m_namespace = value; }
    inline void SetNamespace(Aws::String&& value) { m_namespace = std::move(value); }
    inline void SetNamespace(const char* value) { m_namespace.assign(value); }
    inline ListPackageVersionDependenciesResult& WithNamespace(const Aws::String& value) { SetNamespace(value); return *this;}
    inline ListPackageVersionDependenciesResult& WithNamespace(Aws::String&& value) { SetNamespace(std::move(value)); return *this;}
    inline ListPackageVersionDependenciesResult& WithNamespace(const char* value) { SetNamespace(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The name of the package that contains the returned package versions
     * dependencies. </p>
     */
    inline const Aws::String& GetPackage() const{ return m_package; }
    inline void SetPackage(const Aws::String& value) { m_package = value; }
    inline void SetPackage(Aws::String&& value) { m_package = std::move(value); }
    inline void SetPackage(const char* value) { m_package.assign(value); }
    inline ListPackageVersionDependenciesResult& WithPackage(const Aws::String& value) { SetPackage(value); return *this;}
    inline ListPackageVersionDependenciesResult& WithPackage(Aws::String&& value) { SetPackage(std::move(value)); return *this;}
    inline ListPackageVersionDependenciesResult& WithPackage(const char* value) { SetPackage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The version of the package that is specified in the request. </p>
     */
    inline const Aws::String& GetVersion() const{ return m_version; }
    inline void SetVersion(const Aws::String& value) { m_version = value; }
    inline void SetVersion(Aws::String&& value) { m_version = std::move(value); }
    inline void SetVersion(const char* value) { m_version.assign(value); }
    inline ListPackageVersionDependenciesResult& WithVersion(const Aws::String& value) { SetVersion(value); return *this;}
    inline ListPackageVersionDependenciesResult& WithVersion(Aws::String&& value) { SetVersion(std::move(value)); return *this;}
    inline ListPackageVersionDependenciesResult& WithVersion(const char* value) { SetVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The current revision associated with the package version. </p>
     */
    inline const Aws::String& GetVersionRevision() const{ return m_versionRevision; }
    inline void SetVersionRevision(const Aws::String& value) { m_versionRevision = value; }
    inline void SetVersionRevision(Aws::String&& value) { m_versionRevision = std::move(value); }
    inline void SetVersionRevision(const char* value) { m_versionRevision.assign(value); }
    inline ListPackageVersionDependenciesResult& WithVersionRevision(const Aws::String& value) { SetVersionRevision(value); return *this;}
    inline ListPackageVersionDependenciesResult& WithVersionRevision(Aws::String&& value) { SetVersionRevision(std::move(value)); return *this;}
    inline ListPackageVersionDependenciesResult& WithVersionRevision(const char* value) { SetVersionRevision(value); return *this;}
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
    inline ListPackageVersionDependenciesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListPackageVersionDependenciesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListPackageVersionDependenciesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The returned list of <a
     * href="https://docs.aws.amazon.com/codeartifact/latest/APIReference/API_PackageDependency.html">PackageDependency</a>
     * objects. </p>
     */
    inline const Aws::Vector<PackageDependency>& GetDependencies() const{ return m_dependencies; }
    inline void SetDependencies(const Aws::Vector<PackageDependency>& value) { m_dependencies = value; }
    inline void SetDependencies(Aws::Vector<PackageDependency>&& value) { m_dependencies = std::move(value); }
    inline ListPackageVersionDependenciesResult& WithDependencies(const Aws::Vector<PackageDependency>& value) { SetDependencies(value); return *this;}
    inline ListPackageVersionDependenciesResult& WithDependencies(Aws::Vector<PackageDependency>&& value) { SetDependencies(std::move(value)); return *this;}
    inline ListPackageVersionDependenciesResult& AddDependencies(const PackageDependency& value) { m_dependencies.push_back(value); return *this; }
    inline ListPackageVersionDependenciesResult& AddDependencies(PackageDependency&& value) { m_dependencies.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListPackageVersionDependenciesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListPackageVersionDependenciesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListPackageVersionDependenciesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    PackageFormat m_format;

    Aws::String m_namespace;

    Aws::String m_package;

    Aws::String m_version;

    Aws::String m_versionRevision;

    Aws::String m_nextToken;

    Aws::Vector<PackageDependency> m_dependencies;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CodeArtifact
} // namespace Aws
