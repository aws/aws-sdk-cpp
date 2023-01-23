/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codeartifact/CodeArtifact_EXPORTS.h>
#include <aws/codeartifact/model/PackageFormat.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/codeartifact/model/AssetSummary.h>
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
  class ListPackageVersionAssetsResult
  {
  public:
    AWS_CODEARTIFACT_API ListPackageVersionAssetsResult();
    AWS_CODEARTIFACT_API ListPackageVersionAssetsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CODEARTIFACT_API ListPackageVersionAssetsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p> The format of the package that contains the requested package version
     * assets. </p>
     */
    inline const PackageFormat& GetFormat() const{ return m_format; }

    /**
     * <p> The format of the package that contains the requested package version
     * assets. </p>
     */
    inline void SetFormat(const PackageFormat& value) { m_format = value; }

    /**
     * <p> The format of the package that contains the requested package version
     * assets. </p>
     */
    inline void SetFormat(PackageFormat&& value) { m_format = std::move(value); }

    /**
     * <p> The format of the package that contains the requested package version
     * assets. </p>
     */
    inline ListPackageVersionAssetsResult& WithFormat(const PackageFormat& value) { SetFormat(value); return *this;}

    /**
     * <p> The format of the package that contains the requested package version
     * assets. </p>
     */
    inline ListPackageVersionAssetsResult& WithFormat(PackageFormat&& value) { SetFormat(std::move(value)); return *this;}


    /**
     * <p>The namespace of the package version that contains the requested package
     * version assets. The package version component that specifies its namespace
     * depends on its type. For example:</p> <ul> <li> <p> The namespace of a Maven
     * package version is its <code>groupId</code>. </p> </li> <li> <p> The namespace
     * of an npm package version is its <code>scope</code>. </p> </li> <li> <p> Python
     * and NuGet package versions do not contain a corresponding component, package
     * versions of those formats do not have a namespace. </p> </li> </ul>
     */
    inline const Aws::String& GetNamespace() const{ return m_namespace; }

    /**
     * <p>The namespace of the package version that contains the requested package
     * version assets. The package version component that specifies its namespace
     * depends on its type. For example:</p> <ul> <li> <p> The namespace of a Maven
     * package version is its <code>groupId</code>. </p> </li> <li> <p> The namespace
     * of an npm package version is its <code>scope</code>. </p> </li> <li> <p> Python
     * and NuGet package versions do not contain a corresponding component, package
     * versions of those formats do not have a namespace. </p> </li> </ul>
     */
    inline void SetNamespace(const Aws::String& value) { m_namespace = value; }

    /**
     * <p>The namespace of the package version that contains the requested package
     * version assets. The package version component that specifies its namespace
     * depends on its type. For example:</p> <ul> <li> <p> The namespace of a Maven
     * package version is its <code>groupId</code>. </p> </li> <li> <p> The namespace
     * of an npm package version is its <code>scope</code>. </p> </li> <li> <p> Python
     * and NuGet package versions do not contain a corresponding component, package
     * versions of those formats do not have a namespace. </p> </li> </ul>
     */
    inline void SetNamespace(Aws::String&& value) { m_namespace = std::move(value); }

    /**
     * <p>The namespace of the package version that contains the requested package
     * version assets. The package version component that specifies its namespace
     * depends on its type. For example:</p> <ul> <li> <p> The namespace of a Maven
     * package version is its <code>groupId</code>. </p> </li> <li> <p> The namespace
     * of an npm package version is its <code>scope</code>. </p> </li> <li> <p> Python
     * and NuGet package versions do not contain a corresponding component, package
     * versions of those formats do not have a namespace. </p> </li> </ul>
     */
    inline void SetNamespace(const char* value) { m_namespace.assign(value); }

    /**
     * <p>The namespace of the package version that contains the requested package
     * version assets. The package version component that specifies its namespace
     * depends on its type. For example:</p> <ul> <li> <p> The namespace of a Maven
     * package version is its <code>groupId</code>. </p> </li> <li> <p> The namespace
     * of an npm package version is its <code>scope</code>. </p> </li> <li> <p> Python
     * and NuGet package versions do not contain a corresponding component, package
     * versions of those formats do not have a namespace. </p> </li> </ul>
     */
    inline ListPackageVersionAssetsResult& WithNamespace(const Aws::String& value) { SetNamespace(value); return *this;}

    /**
     * <p>The namespace of the package version that contains the requested package
     * version assets. The package version component that specifies its namespace
     * depends on its type. For example:</p> <ul> <li> <p> The namespace of a Maven
     * package version is its <code>groupId</code>. </p> </li> <li> <p> The namespace
     * of an npm package version is its <code>scope</code>. </p> </li> <li> <p> Python
     * and NuGet package versions do not contain a corresponding component, package
     * versions of those formats do not have a namespace. </p> </li> </ul>
     */
    inline ListPackageVersionAssetsResult& WithNamespace(Aws::String&& value) { SetNamespace(std::move(value)); return *this;}

    /**
     * <p>The namespace of the package version that contains the requested package
     * version assets. The package version component that specifies its namespace
     * depends on its type. For example:</p> <ul> <li> <p> The namespace of a Maven
     * package version is its <code>groupId</code>. </p> </li> <li> <p> The namespace
     * of an npm package version is its <code>scope</code>. </p> </li> <li> <p> Python
     * and NuGet package versions do not contain a corresponding component, package
     * versions of those formats do not have a namespace. </p> </li> </ul>
     */
    inline ListPackageVersionAssetsResult& WithNamespace(const char* value) { SetNamespace(value); return *this;}


    /**
     * <p> The name of the package that contains the requested package version assets.
     * </p>
     */
    inline const Aws::String& GetPackage() const{ return m_package; }

    /**
     * <p> The name of the package that contains the requested package version assets.
     * </p>
     */
    inline void SetPackage(const Aws::String& value) { m_package = value; }

    /**
     * <p> The name of the package that contains the requested package version assets.
     * </p>
     */
    inline void SetPackage(Aws::String&& value) { m_package = std::move(value); }

    /**
     * <p> The name of the package that contains the requested package version assets.
     * </p>
     */
    inline void SetPackage(const char* value) { m_package.assign(value); }

    /**
     * <p> The name of the package that contains the requested package version assets.
     * </p>
     */
    inline ListPackageVersionAssetsResult& WithPackage(const Aws::String& value) { SetPackage(value); return *this;}

    /**
     * <p> The name of the package that contains the requested package version assets.
     * </p>
     */
    inline ListPackageVersionAssetsResult& WithPackage(Aws::String&& value) { SetPackage(std::move(value)); return *this;}

    /**
     * <p> The name of the package that contains the requested package version assets.
     * </p>
     */
    inline ListPackageVersionAssetsResult& WithPackage(const char* value) { SetPackage(value); return *this;}


    /**
     * <p> The version of the package associated with the requested assets. </p>
     */
    inline const Aws::String& GetVersion() const{ return m_version; }

    /**
     * <p> The version of the package associated with the requested assets. </p>
     */
    inline void SetVersion(const Aws::String& value) { m_version = value; }

    /**
     * <p> The version of the package associated with the requested assets. </p>
     */
    inline void SetVersion(Aws::String&& value) { m_version = std::move(value); }

    /**
     * <p> The version of the package associated with the requested assets. </p>
     */
    inline void SetVersion(const char* value) { m_version.assign(value); }

    /**
     * <p> The version of the package associated with the requested assets. </p>
     */
    inline ListPackageVersionAssetsResult& WithVersion(const Aws::String& value) { SetVersion(value); return *this;}

    /**
     * <p> The version of the package associated with the requested assets. </p>
     */
    inline ListPackageVersionAssetsResult& WithVersion(Aws::String&& value) { SetVersion(std::move(value)); return *this;}

    /**
     * <p> The version of the package associated with the requested assets. </p>
     */
    inline ListPackageVersionAssetsResult& WithVersion(const char* value) { SetVersion(value); return *this;}


    /**
     * <p> The current revision associated with the package version. </p>
     */
    inline const Aws::String& GetVersionRevision() const{ return m_versionRevision; }

    /**
     * <p> The current revision associated with the package version. </p>
     */
    inline void SetVersionRevision(const Aws::String& value) { m_versionRevision = value; }

    /**
     * <p> The current revision associated with the package version. </p>
     */
    inline void SetVersionRevision(Aws::String&& value) { m_versionRevision = std::move(value); }

    /**
     * <p> The current revision associated with the package version. </p>
     */
    inline void SetVersionRevision(const char* value) { m_versionRevision.assign(value); }

    /**
     * <p> The current revision associated with the package version. </p>
     */
    inline ListPackageVersionAssetsResult& WithVersionRevision(const Aws::String& value) { SetVersionRevision(value); return *this;}

    /**
     * <p> The current revision associated with the package version. </p>
     */
    inline ListPackageVersionAssetsResult& WithVersionRevision(Aws::String&& value) { SetVersionRevision(std::move(value)); return *this;}

    /**
     * <p> The current revision associated with the package version. </p>
     */
    inline ListPackageVersionAssetsResult& WithVersionRevision(const char* value) { SetVersionRevision(value); return *this;}


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
    inline ListPackageVersionAssetsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p> If there are additional results, this is the token for the next set of
     * results. </p>
     */
    inline ListPackageVersionAssetsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p> If there are additional results, this is the token for the next set of
     * results. </p>
     */
    inline ListPackageVersionAssetsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p> The returned list of <a
     * href="https://docs.aws.amazon.com/codeartifact/latest/APIReference/API_AssetSummary.html">AssetSummary</a>
     * objects. </p>
     */
    inline const Aws::Vector<AssetSummary>& GetAssets() const{ return m_assets; }

    /**
     * <p> The returned list of <a
     * href="https://docs.aws.amazon.com/codeartifact/latest/APIReference/API_AssetSummary.html">AssetSummary</a>
     * objects. </p>
     */
    inline void SetAssets(const Aws::Vector<AssetSummary>& value) { m_assets = value; }

    /**
     * <p> The returned list of <a
     * href="https://docs.aws.amazon.com/codeartifact/latest/APIReference/API_AssetSummary.html">AssetSummary</a>
     * objects. </p>
     */
    inline void SetAssets(Aws::Vector<AssetSummary>&& value) { m_assets = std::move(value); }

    /**
     * <p> The returned list of <a
     * href="https://docs.aws.amazon.com/codeartifact/latest/APIReference/API_AssetSummary.html">AssetSummary</a>
     * objects. </p>
     */
    inline ListPackageVersionAssetsResult& WithAssets(const Aws::Vector<AssetSummary>& value) { SetAssets(value); return *this;}

    /**
     * <p> The returned list of <a
     * href="https://docs.aws.amazon.com/codeartifact/latest/APIReference/API_AssetSummary.html">AssetSummary</a>
     * objects. </p>
     */
    inline ListPackageVersionAssetsResult& WithAssets(Aws::Vector<AssetSummary>&& value) { SetAssets(std::move(value)); return *this;}

    /**
     * <p> The returned list of <a
     * href="https://docs.aws.amazon.com/codeartifact/latest/APIReference/API_AssetSummary.html">AssetSummary</a>
     * objects. </p>
     */
    inline ListPackageVersionAssetsResult& AddAssets(const AssetSummary& value) { m_assets.push_back(value); return *this; }

    /**
     * <p> The returned list of <a
     * href="https://docs.aws.amazon.com/codeartifact/latest/APIReference/API_AssetSummary.html">AssetSummary</a>
     * objects. </p>
     */
    inline ListPackageVersionAssetsResult& AddAssets(AssetSummary&& value) { m_assets.push_back(std::move(value)); return *this; }

  private:

    PackageFormat m_format;

    Aws::String m_namespace;

    Aws::String m_package;

    Aws::String m_version;

    Aws::String m_versionRevision;

    Aws::String m_nextToken;

    Aws::Vector<AssetSummary> m_assets;
  };

} // namespace Model
} // namespace CodeArtifact
} // namespace Aws
