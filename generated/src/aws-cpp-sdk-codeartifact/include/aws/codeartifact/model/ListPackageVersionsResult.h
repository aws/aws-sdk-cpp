﻿/**
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


    ///@{
    /**
     * <p> The default package version to display. This depends on the package format:
     * </p> <ul> <li> <p> For Maven and PyPI packages, it's the most recently published
     * package version. </p> </li> <li> <p> For npm packages, it's the version
     * referenced by the <code>latest</code> tag. If the <code>latest</code> tag is not
     * set, it's the most recently published package version. </p> </li> </ul>
     */
    inline const Aws::String& GetDefaultDisplayVersion() const{ return m_defaultDisplayVersion; }
    inline void SetDefaultDisplayVersion(const Aws::String& value) { m_defaultDisplayVersion = value; }
    inline void SetDefaultDisplayVersion(Aws::String&& value) { m_defaultDisplayVersion = std::move(value); }
    inline void SetDefaultDisplayVersion(const char* value) { m_defaultDisplayVersion.assign(value); }
    inline ListPackageVersionsResult& WithDefaultDisplayVersion(const Aws::String& value) { SetDefaultDisplayVersion(value); return *this;}
    inline ListPackageVersionsResult& WithDefaultDisplayVersion(Aws::String&& value) { SetDefaultDisplayVersion(std::move(value)); return *this;}
    inline ListPackageVersionsResult& WithDefaultDisplayVersion(const char* value) { SetDefaultDisplayVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> A format of the package. </p>
     */
    inline const PackageFormat& GetFormat() const{ return m_format; }
    inline void SetFormat(const PackageFormat& value) { m_format = value; }
    inline void SetFormat(PackageFormat&& value) { m_format = std::move(value); }
    inline ListPackageVersionsResult& WithFormat(const PackageFormat& value) { SetFormat(value); return *this;}
    inline ListPackageVersionsResult& WithFormat(PackageFormat&& value) { SetFormat(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The namespace of the package that contains the requested package versions.
     * The package component that specifies its namespace depends on its type. For
     * example:</p> <ul> <li> <p> The namespace of a Maven package version is its
     * <code>groupId</code>. </p> </li> <li> <p> The namespace of an npm or Swift
     * package version is its <code>scope</code>. </p> </li> <li> <p>The namespace of a
     * generic package is its <code>namespace</code>.</p> </li> <li> <p> Python, NuGet,
     * and Ruby package versions do not contain a corresponding component, package
     * versions of those formats do not have a namespace. </p> </li> </ul>
     */
    inline const Aws::String& GetNamespace() const{ return m_namespace; }
    inline void SetNamespace(const Aws::String& value) { m_namespace = value; }
    inline void SetNamespace(Aws::String&& value) { m_namespace = std::move(value); }
    inline void SetNamespace(const char* value) { m_namespace.assign(value); }
    inline ListPackageVersionsResult& WithNamespace(const Aws::String& value) { SetNamespace(value); return *this;}
    inline ListPackageVersionsResult& WithNamespace(Aws::String&& value) { SetNamespace(std::move(value)); return *this;}
    inline ListPackageVersionsResult& WithNamespace(const char* value) { SetNamespace(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The name of the package. </p>
     */
    inline const Aws::String& GetPackage() const{ return m_package; }
    inline void SetPackage(const Aws::String& value) { m_package = value; }
    inline void SetPackage(Aws::String&& value) { m_package = std::move(value); }
    inline void SetPackage(const char* value) { m_package.assign(value); }
    inline ListPackageVersionsResult& WithPackage(const Aws::String& value) { SetPackage(value); return *this;}
    inline ListPackageVersionsResult& WithPackage(Aws::String&& value) { SetPackage(std::move(value)); return *this;}
    inline ListPackageVersionsResult& WithPackage(const char* value) { SetPackage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The returned list of <a
     * href="https://docs.aws.amazon.com/codeartifact/latest/APIReference/API_PackageVersionSummary.html">PackageVersionSummary</a>
     * objects. </p>
     */
    inline const Aws::Vector<PackageVersionSummary>& GetVersions() const{ return m_versions; }
    inline void SetVersions(const Aws::Vector<PackageVersionSummary>& value) { m_versions = value; }
    inline void SetVersions(Aws::Vector<PackageVersionSummary>&& value) { m_versions = std::move(value); }
    inline ListPackageVersionsResult& WithVersions(const Aws::Vector<PackageVersionSummary>& value) { SetVersions(value); return *this;}
    inline ListPackageVersionsResult& WithVersions(Aws::Vector<PackageVersionSummary>&& value) { SetVersions(std::move(value)); return *this;}
    inline ListPackageVersionsResult& AddVersions(const PackageVersionSummary& value) { m_versions.push_back(value); return *this; }
    inline ListPackageVersionsResult& AddVersions(PackageVersionSummary&& value) { m_versions.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> If there are additional results, this is the token for the next set of
     * results. </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListPackageVersionsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListPackageVersionsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListPackageVersionsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListPackageVersionsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListPackageVersionsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListPackageVersionsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_defaultDisplayVersion;

    PackageFormat m_format;

    Aws::String m_namespace;

    Aws::String m_package;

    Aws::Vector<PackageVersionSummary> m_versions;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CodeArtifact
} // namespace Aws
