﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codeartifact/CodeArtifact_EXPORTS.h>
#include <aws/codeartifact/model/PackageFormat.h>
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
  class GetPackageVersionReadmeResult
  {
  public:
    AWS_CODEARTIFACT_API GetPackageVersionReadmeResult();
    AWS_CODEARTIFACT_API GetPackageVersionReadmeResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CODEARTIFACT_API GetPackageVersionReadmeResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p> The format of the package with the requested readme file. </p>
     */
    inline const PackageFormat& GetFormat() const{ return m_format; }
    inline void SetFormat(const PackageFormat& value) { m_format = value; }
    inline void SetFormat(PackageFormat&& value) { m_format = std::move(value); }
    inline GetPackageVersionReadmeResult& WithFormat(const PackageFormat& value) { SetFormat(value); return *this;}
    inline GetPackageVersionReadmeResult& WithFormat(PackageFormat&& value) { SetFormat(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The namespace of the package version with the requested readme file. The
     * package component that specifies its namespace depends on its type. For
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
    inline GetPackageVersionReadmeResult& WithNamespace(const Aws::String& value) { SetNamespace(value); return *this;}
    inline GetPackageVersionReadmeResult& WithNamespace(Aws::String&& value) { SetNamespace(std::move(value)); return *this;}
    inline GetPackageVersionReadmeResult& WithNamespace(const char* value) { SetNamespace(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The name of the package that contains the returned readme file. </p>
     */
    inline const Aws::String& GetPackage() const{ return m_package; }
    inline void SetPackage(const Aws::String& value) { m_package = value; }
    inline void SetPackage(Aws::String&& value) { m_package = std::move(value); }
    inline void SetPackage(const char* value) { m_package.assign(value); }
    inline GetPackageVersionReadmeResult& WithPackage(const Aws::String& value) { SetPackage(value); return *this;}
    inline GetPackageVersionReadmeResult& WithPackage(Aws::String&& value) { SetPackage(std::move(value)); return *this;}
    inline GetPackageVersionReadmeResult& WithPackage(const char* value) { SetPackage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The version of the package with the requested readme file. </p>
     */
    inline const Aws::String& GetVersion() const{ return m_version; }
    inline void SetVersion(const Aws::String& value) { m_version = value; }
    inline void SetVersion(Aws::String&& value) { m_version = std::move(value); }
    inline void SetVersion(const char* value) { m_version.assign(value); }
    inline GetPackageVersionReadmeResult& WithVersion(const Aws::String& value) { SetVersion(value); return *this;}
    inline GetPackageVersionReadmeResult& WithVersion(Aws::String&& value) { SetVersion(std::move(value)); return *this;}
    inline GetPackageVersionReadmeResult& WithVersion(const char* value) { SetVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The current revision associated with the package version. </p>
     */
    inline const Aws::String& GetVersionRevision() const{ return m_versionRevision; }
    inline void SetVersionRevision(const Aws::String& value) { m_versionRevision = value; }
    inline void SetVersionRevision(Aws::String&& value) { m_versionRevision = std::move(value); }
    inline void SetVersionRevision(const char* value) { m_versionRevision.assign(value); }
    inline GetPackageVersionReadmeResult& WithVersionRevision(const Aws::String& value) { SetVersionRevision(value); return *this;}
    inline GetPackageVersionReadmeResult& WithVersionRevision(Aws::String&& value) { SetVersionRevision(std::move(value)); return *this;}
    inline GetPackageVersionReadmeResult& WithVersionRevision(const char* value) { SetVersionRevision(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The text of the returned readme file. </p>
     */
    inline const Aws::String& GetReadme() const{ return m_readme; }
    inline void SetReadme(const Aws::String& value) { m_readme = value; }
    inline void SetReadme(Aws::String&& value) { m_readme = std::move(value); }
    inline void SetReadme(const char* value) { m_readme.assign(value); }
    inline GetPackageVersionReadmeResult& WithReadme(const Aws::String& value) { SetReadme(value); return *this;}
    inline GetPackageVersionReadmeResult& WithReadme(Aws::String&& value) { SetReadme(std::move(value)); return *this;}
    inline GetPackageVersionReadmeResult& WithReadme(const char* value) { SetReadme(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetPackageVersionReadmeResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetPackageVersionReadmeResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetPackageVersionReadmeResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    PackageFormat m_format;

    Aws::String m_namespace;

    Aws::String m_package;

    Aws::String m_version;

    Aws::String m_versionRevision;

    Aws::String m_readme;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CodeArtifact
} // namespace Aws
