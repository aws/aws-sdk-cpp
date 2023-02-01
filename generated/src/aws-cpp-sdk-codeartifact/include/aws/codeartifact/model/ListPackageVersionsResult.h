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
    AWS_CODEARTIFACT_API ListPackageVersionsResult();
    AWS_CODEARTIFACT_API ListPackageVersionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CODEARTIFACT_API ListPackageVersionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p> The default package version to display. This depends on the package format:
     * </p> <ul> <li> <p> For Maven and PyPI packages, it's the most recently published
     * package version. </p> </li> <li> <p> For npm packages, it's the version
     * referenced by the <code>latest</code> tag. If the <code>latest</code> tag is not
     * set, it's the most recently published package version. </p> </li> </ul>
     */
    inline const Aws::String& GetDefaultDisplayVersion() const{ return m_defaultDisplayVersion; }

    /**
     * <p> The default package version to display. This depends on the package format:
     * </p> <ul> <li> <p> For Maven and PyPI packages, it's the most recently published
     * package version. </p> </li> <li> <p> For npm packages, it's the version
     * referenced by the <code>latest</code> tag. If the <code>latest</code> tag is not
     * set, it's the most recently published package version. </p> </li> </ul>
     */
    inline void SetDefaultDisplayVersion(const Aws::String& value) { m_defaultDisplayVersion = value; }

    /**
     * <p> The default package version to display. This depends on the package format:
     * </p> <ul> <li> <p> For Maven and PyPI packages, it's the most recently published
     * package version. </p> </li> <li> <p> For npm packages, it's the version
     * referenced by the <code>latest</code> tag. If the <code>latest</code> tag is not
     * set, it's the most recently published package version. </p> </li> </ul>
     */
    inline void SetDefaultDisplayVersion(Aws::String&& value) { m_defaultDisplayVersion = std::move(value); }

    /**
     * <p> The default package version to display. This depends on the package format:
     * </p> <ul> <li> <p> For Maven and PyPI packages, it's the most recently published
     * package version. </p> </li> <li> <p> For npm packages, it's the version
     * referenced by the <code>latest</code> tag. If the <code>latest</code> tag is not
     * set, it's the most recently published package version. </p> </li> </ul>
     */
    inline void SetDefaultDisplayVersion(const char* value) { m_defaultDisplayVersion.assign(value); }

    /**
     * <p> The default package version to display. This depends on the package format:
     * </p> <ul> <li> <p> For Maven and PyPI packages, it's the most recently published
     * package version. </p> </li> <li> <p> For npm packages, it's the version
     * referenced by the <code>latest</code> tag. If the <code>latest</code> tag is not
     * set, it's the most recently published package version. </p> </li> </ul>
     */
    inline ListPackageVersionsResult& WithDefaultDisplayVersion(const Aws::String& value) { SetDefaultDisplayVersion(value); return *this;}

    /**
     * <p> The default package version to display. This depends on the package format:
     * </p> <ul> <li> <p> For Maven and PyPI packages, it's the most recently published
     * package version. </p> </li> <li> <p> For npm packages, it's the version
     * referenced by the <code>latest</code> tag. If the <code>latest</code> tag is not
     * set, it's the most recently published package version. </p> </li> </ul>
     */
    inline ListPackageVersionsResult& WithDefaultDisplayVersion(Aws::String&& value) { SetDefaultDisplayVersion(std::move(value)); return *this;}

    /**
     * <p> The default package version to display. This depends on the package format:
     * </p> <ul> <li> <p> For Maven and PyPI packages, it's the most recently published
     * package version. </p> </li> <li> <p> For npm packages, it's the version
     * referenced by the <code>latest</code> tag. If the <code>latest</code> tag is not
     * set, it's the most recently published package version. </p> </li> </ul>
     */
    inline ListPackageVersionsResult& WithDefaultDisplayVersion(const char* value) { SetDefaultDisplayVersion(value); return *this;}


    /**
     * <p> A format of the package. </p>
     */
    inline const PackageFormat& GetFormat() const{ return m_format; }

    /**
     * <p> A format of the package. </p>
     */
    inline void SetFormat(const PackageFormat& value) { m_format = value; }

    /**
     * <p> A format of the package. </p>
     */
    inline void SetFormat(PackageFormat&& value) { m_format = std::move(value); }

    /**
     * <p> A format of the package. </p>
     */
    inline ListPackageVersionsResult& WithFormat(const PackageFormat& value) { SetFormat(value); return *this;}

    /**
     * <p> A format of the package. </p>
     */
    inline ListPackageVersionsResult& WithFormat(PackageFormat&& value) { SetFormat(std::move(value)); return *this;}


    /**
     * <p>The namespace of the package that contains the requested package versions.
     * The package component that specifies its namespace depends on its type. For
     * example:</p> <ul> <li> <p> The namespace of a Maven package is its
     * <code>groupId</code>. </p> </li> <li> <p> The namespace of an npm package is its
     * <code>scope</code>. </p> </li> <li> <p> Python and NuGet packages do not contain
     * a corresponding component, packages of those formats do not have a namespace.
     * </p> </li> </ul>
     */
    inline const Aws::String& GetNamespace() const{ return m_namespace; }

    /**
     * <p>The namespace of the package that contains the requested package versions.
     * The package component that specifies its namespace depends on its type. For
     * example:</p> <ul> <li> <p> The namespace of a Maven package is its
     * <code>groupId</code>. </p> </li> <li> <p> The namespace of an npm package is its
     * <code>scope</code>. </p> </li> <li> <p> Python and NuGet packages do not contain
     * a corresponding component, packages of those formats do not have a namespace.
     * </p> </li> </ul>
     */
    inline void SetNamespace(const Aws::String& value) { m_namespace = value; }

    /**
     * <p>The namespace of the package that contains the requested package versions.
     * The package component that specifies its namespace depends on its type. For
     * example:</p> <ul> <li> <p> The namespace of a Maven package is its
     * <code>groupId</code>. </p> </li> <li> <p> The namespace of an npm package is its
     * <code>scope</code>. </p> </li> <li> <p> Python and NuGet packages do not contain
     * a corresponding component, packages of those formats do not have a namespace.
     * </p> </li> </ul>
     */
    inline void SetNamespace(Aws::String&& value) { m_namespace = std::move(value); }

    /**
     * <p>The namespace of the package that contains the requested package versions.
     * The package component that specifies its namespace depends on its type. For
     * example:</p> <ul> <li> <p> The namespace of a Maven package is its
     * <code>groupId</code>. </p> </li> <li> <p> The namespace of an npm package is its
     * <code>scope</code>. </p> </li> <li> <p> Python and NuGet packages do not contain
     * a corresponding component, packages of those formats do not have a namespace.
     * </p> </li> </ul>
     */
    inline void SetNamespace(const char* value) { m_namespace.assign(value); }

    /**
     * <p>The namespace of the package that contains the requested package versions.
     * The package component that specifies its namespace depends on its type. For
     * example:</p> <ul> <li> <p> The namespace of a Maven package is its
     * <code>groupId</code>. </p> </li> <li> <p> The namespace of an npm package is its
     * <code>scope</code>. </p> </li> <li> <p> Python and NuGet packages do not contain
     * a corresponding component, packages of those formats do not have a namespace.
     * </p> </li> </ul>
     */
    inline ListPackageVersionsResult& WithNamespace(const Aws::String& value) { SetNamespace(value); return *this;}

    /**
     * <p>The namespace of the package that contains the requested package versions.
     * The package component that specifies its namespace depends on its type. For
     * example:</p> <ul> <li> <p> The namespace of a Maven package is its
     * <code>groupId</code>. </p> </li> <li> <p> The namespace of an npm package is its
     * <code>scope</code>. </p> </li> <li> <p> Python and NuGet packages do not contain
     * a corresponding component, packages of those formats do not have a namespace.
     * </p> </li> </ul>
     */
    inline ListPackageVersionsResult& WithNamespace(Aws::String&& value) { SetNamespace(std::move(value)); return *this;}

    /**
     * <p>The namespace of the package that contains the requested package versions.
     * The package component that specifies its namespace depends on its type. For
     * example:</p> <ul> <li> <p> The namespace of a Maven package is its
     * <code>groupId</code>. </p> </li> <li> <p> The namespace of an npm package is its
     * <code>scope</code>. </p> </li> <li> <p> Python and NuGet packages do not contain
     * a corresponding component, packages of those formats do not have a namespace.
     * </p> </li> </ul>
     */
    inline ListPackageVersionsResult& WithNamespace(const char* value) { SetNamespace(value); return *this;}


    /**
     * <p> The name of the package. </p>
     */
    inline const Aws::String& GetPackage() const{ return m_package; }

    /**
     * <p> The name of the package. </p>
     */
    inline void SetPackage(const Aws::String& value) { m_package = value; }

    /**
     * <p> The name of the package. </p>
     */
    inline void SetPackage(Aws::String&& value) { m_package = std::move(value); }

    /**
     * <p> The name of the package. </p>
     */
    inline void SetPackage(const char* value) { m_package.assign(value); }

    /**
     * <p> The name of the package. </p>
     */
    inline ListPackageVersionsResult& WithPackage(const Aws::String& value) { SetPackage(value); return *this;}

    /**
     * <p> The name of the package. </p>
     */
    inline ListPackageVersionsResult& WithPackage(Aws::String&& value) { SetPackage(std::move(value)); return *this;}

    /**
     * <p> The name of the package. </p>
     */
    inline ListPackageVersionsResult& WithPackage(const char* value) { SetPackage(value); return *this;}


    /**
     * <p> The returned list of <a
     * href="https://docs.aws.amazon.com/codeartifact/latest/APIReference/API_PackageVersionSummary.html">PackageVersionSummary</a>
     * objects. </p>
     */
    inline const Aws::Vector<PackageVersionSummary>& GetVersions() const{ return m_versions; }

    /**
     * <p> The returned list of <a
     * href="https://docs.aws.amazon.com/codeartifact/latest/APIReference/API_PackageVersionSummary.html">PackageVersionSummary</a>
     * objects. </p>
     */
    inline void SetVersions(const Aws::Vector<PackageVersionSummary>& value) { m_versions = value; }

    /**
     * <p> The returned list of <a
     * href="https://docs.aws.amazon.com/codeartifact/latest/APIReference/API_PackageVersionSummary.html">PackageVersionSummary</a>
     * objects. </p>
     */
    inline void SetVersions(Aws::Vector<PackageVersionSummary>&& value) { m_versions = std::move(value); }

    /**
     * <p> The returned list of <a
     * href="https://docs.aws.amazon.com/codeartifact/latest/APIReference/API_PackageVersionSummary.html">PackageVersionSummary</a>
     * objects. </p>
     */
    inline ListPackageVersionsResult& WithVersions(const Aws::Vector<PackageVersionSummary>& value) { SetVersions(value); return *this;}

    /**
     * <p> The returned list of <a
     * href="https://docs.aws.amazon.com/codeartifact/latest/APIReference/API_PackageVersionSummary.html">PackageVersionSummary</a>
     * objects. </p>
     */
    inline ListPackageVersionsResult& WithVersions(Aws::Vector<PackageVersionSummary>&& value) { SetVersions(std::move(value)); return *this;}

    /**
     * <p> The returned list of <a
     * href="https://docs.aws.amazon.com/codeartifact/latest/APIReference/API_PackageVersionSummary.html">PackageVersionSummary</a>
     * objects. </p>
     */
    inline ListPackageVersionsResult& AddVersions(const PackageVersionSummary& value) { m_versions.push_back(value); return *this; }

    /**
     * <p> The returned list of <a
     * href="https://docs.aws.amazon.com/codeartifact/latest/APIReference/API_PackageVersionSummary.html">PackageVersionSummary</a>
     * objects. </p>
     */
    inline ListPackageVersionsResult& AddVersions(PackageVersionSummary&& value) { m_versions.push_back(std::move(value)); return *this; }


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
    inline ListPackageVersionsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p> If there are additional results, this is the token for the next set of
     * results. </p>
     */
    inline ListPackageVersionsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p> If there are additional results, this is the token for the next set of
     * results. </p>
     */
    inline ListPackageVersionsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::String m_defaultDisplayVersion;

    PackageFormat m_format;

    Aws::String m_namespace;

    Aws::String m_package;

    Aws::Vector<PackageVersionSummary> m_versions;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace CodeArtifact
} // namespace Aws
