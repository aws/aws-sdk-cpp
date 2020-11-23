/**
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
  class AWS_CODEARTIFACT_API GetPackageVersionReadmeResult
  {
  public:
    GetPackageVersionReadmeResult();
    GetPackageVersionReadmeResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetPackageVersionReadmeResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p> The format of the package with the requested readme file. Valid format types
     * are: </p> <ul> <li> <p> <code>npm</code> </p> </li> <li> <p> <code>pypi</code>
     * </p> </li> <li> <p> <code>maven</code> </p> </li> <li> <p> <code>nuget</code>
     * </p> </li> </ul>
     */
    inline const PackageFormat& GetFormat() const{ return m_format; }

    /**
     * <p> The format of the package with the requested readme file. Valid format types
     * are: </p> <ul> <li> <p> <code>npm</code> </p> </li> <li> <p> <code>pypi</code>
     * </p> </li> <li> <p> <code>maven</code> </p> </li> <li> <p> <code>nuget</code>
     * </p> </li> </ul>
     */
    inline void SetFormat(const PackageFormat& value) { m_format = value; }

    /**
     * <p> The format of the package with the requested readme file. Valid format types
     * are: </p> <ul> <li> <p> <code>npm</code> </p> </li> <li> <p> <code>pypi</code>
     * </p> </li> <li> <p> <code>maven</code> </p> </li> <li> <p> <code>nuget</code>
     * </p> </li> </ul>
     */
    inline void SetFormat(PackageFormat&& value) { m_format = std::move(value); }

    /**
     * <p> The format of the package with the requested readme file. Valid format types
     * are: </p> <ul> <li> <p> <code>npm</code> </p> </li> <li> <p> <code>pypi</code>
     * </p> </li> <li> <p> <code>maven</code> </p> </li> <li> <p> <code>nuget</code>
     * </p> </li> </ul>
     */
    inline GetPackageVersionReadmeResult& WithFormat(const PackageFormat& value) { SetFormat(value); return *this;}

    /**
     * <p> The format of the package with the requested readme file. Valid format types
     * are: </p> <ul> <li> <p> <code>npm</code> </p> </li> <li> <p> <code>pypi</code>
     * </p> </li> <li> <p> <code>maven</code> </p> </li> <li> <p> <code>nuget</code>
     * </p> </li> </ul>
     */
    inline GetPackageVersionReadmeResult& WithFormat(PackageFormat&& value) { SetFormat(std::move(value)); return *this;}


    /**
     * <p> The namespace of the package. The package component that specifies its
     * namespace depends on its type. For example: </p> <ul> <li> <p> The namespace of
     * a Maven package is its <code>groupId</code>. </p> </li> <li> <p> The namespace
     * of an npm package is its <code>scope</code>. </p> </li> <li> <p> A Python
     * package does not contain a corresponding component, so Python packages do not
     * have a namespace. </p> </li> <li> <p> A NuGet package does not contain a
     * corresponding component, so NuGet packages do not have a namespace. </p> </li>
     * </ul>
     */
    inline const Aws::String& GetNamespace() const{ return m_namespace; }

    /**
     * <p> The namespace of the package. The package component that specifies its
     * namespace depends on its type. For example: </p> <ul> <li> <p> The namespace of
     * a Maven package is its <code>groupId</code>. </p> </li> <li> <p> The namespace
     * of an npm package is its <code>scope</code>. </p> </li> <li> <p> A Python
     * package does not contain a corresponding component, so Python packages do not
     * have a namespace. </p> </li> <li> <p> A NuGet package does not contain a
     * corresponding component, so NuGet packages do not have a namespace. </p> </li>
     * </ul>
     */
    inline void SetNamespace(const Aws::String& value) { m_namespace = value; }

    /**
     * <p> The namespace of the package. The package component that specifies its
     * namespace depends on its type. For example: </p> <ul> <li> <p> The namespace of
     * a Maven package is its <code>groupId</code>. </p> </li> <li> <p> The namespace
     * of an npm package is its <code>scope</code>. </p> </li> <li> <p> A Python
     * package does not contain a corresponding component, so Python packages do not
     * have a namespace. </p> </li> <li> <p> A NuGet package does not contain a
     * corresponding component, so NuGet packages do not have a namespace. </p> </li>
     * </ul>
     */
    inline void SetNamespace(Aws::String&& value) { m_namespace = std::move(value); }

    /**
     * <p> The namespace of the package. The package component that specifies its
     * namespace depends on its type. For example: </p> <ul> <li> <p> The namespace of
     * a Maven package is its <code>groupId</code>. </p> </li> <li> <p> The namespace
     * of an npm package is its <code>scope</code>. </p> </li> <li> <p> A Python
     * package does not contain a corresponding component, so Python packages do not
     * have a namespace. </p> </li> <li> <p> A NuGet package does not contain a
     * corresponding component, so NuGet packages do not have a namespace. </p> </li>
     * </ul>
     */
    inline void SetNamespace(const char* value) { m_namespace.assign(value); }

    /**
     * <p> The namespace of the package. The package component that specifies its
     * namespace depends on its type. For example: </p> <ul> <li> <p> The namespace of
     * a Maven package is its <code>groupId</code>. </p> </li> <li> <p> The namespace
     * of an npm package is its <code>scope</code>. </p> </li> <li> <p> A Python
     * package does not contain a corresponding component, so Python packages do not
     * have a namespace. </p> </li> <li> <p> A NuGet package does not contain a
     * corresponding component, so NuGet packages do not have a namespace. </p> </li>
     * </ul>
     */
    inline GetPackageVersionReadmeResult& WithNamespace(const Aws::String& value) { SetNamespace(value); return *this;}

    /**
     * <p> The namespace of the package. The package component that specifies its
     * namespace depends on its type. For example: </p> <ul> <li> <p> The namespace of
     * a Maven package is its <code>groupId</code>. </p> </li> <li> <p> The namespace
     * of an npm package is its <code>scope</code>. </p> </li> <li> <p> A Python
     * package does not contain a corresponding component, so Python packages do not
     * have a namespace. </p> </li> <li> <p> A NuGet package does not contain a
     * corresponding component, so NuGet packages do not have a namespace. </p> </li>
     * </ul>
     */
    inline GetPackageVersionReadmeResult& WithNamespace(Aws::String&& value) { SetNamespace(std::move(value)); return *this;}

    /**
     * <p> The namespace of the package. The package component that specifies its
     * namespace depends on its type. For example: </p> <ul> <li> <p> The namespace of
     * a Maven package is its <code>groupId</code>. </p> </li> <li> <p> The namespace
     * of an npm package is its <code>scope</code>. </p> </li> <li> <p> A Python
     * package does not contain a corresponding component, so Python packages do not
     * have a namespace. </p> </li> <li> <p> A NuGet package does not contain a
     * corresponding component, so NuGet packages do not have a namespace. </p> </li>
     * </ul>
     */
    inline GetPackageVersionReadmeResult& WithNamespace(const char* value) { SetNamespace(value); return *this;}


    /**
     * <p> The name of the package that contains the returned readme file. </p>
     */
    inline const Aws::String& GetPackage() const{ return m_package; }

    /**
     * <p> The name of the package that contains the returned readme file. </p>
     */
    inline void SetPackage(const Aws::String& value) { m_package = value; }

    /**
     * <p> The name of the package that contains the returned readme file. </p>
     */
    inline void SetPackage(Aws::String&& value) { m_package = std::move(value); }

    /**
     * <p> The name of the package that contains the returned readme file. </p>
     */
    inline void SetPackage(const char* value) { m_package.assign(value); }

    /**
     * <p> The name of the package that contains the returned readme file. </p>
     */
    inline GetPackageVersionReadmeResult& WithPackage(const Aws::String& value) { SetPackage(value); return *this;}

    /**
     * <p> The name of the package that contains the returned readme file. </p>
     */
    inline GetPackageVersionReadmeResult& WithPackage(Aws::String&& value) { SetPackage(std::move(value)); return *this;}

    /**
     * <p> The name of the package that contains the returned readme file. </p>
     */
    inline GetPackageVersionReadmeResult& WithPackage(const char* value) { SetPackage(value); return *this;}


    /**
     * <p> The version of the package with the requested readme file. </p>
     */
    inline const Aws::String& GetVersion() const{ return m_version; }

    /**
     * <p> The version of the package with the requested readme file. </p>
     */
    inline void SetVersion(const Aws::String& value) { m_version = value; }

    /**
     * <p> The version of the package with the requested readme file. </p>
     */
    inline void SetVersion(Aws::String&& value) { m_version = std::move(value); }

    /**
     * <p> The version of the package with the requested readme file. </p>
     */
    inline void SetVersion(const char* value) { m_version.assign(value); }

    /**
     * <p> The version of the package with the requested readme file. </p>
     */
    inline GetPackageVersionReadmeResult& WithVersion(const Aws::String& value) { SetVersion(value); return *this;}

    /**
     * <p> The version of the package with the requested readme file. </p>
     */
    inline GetPackageVersionReadmeResult& WithVersion(Aws::String&& value) { SetVersion(std::move(value)); return *this;}

    /**
     * <p> The version of the package with the requested readme file. </p>
     */
    inline GetPackageVersionReadmeResult& WithVersion(const char* value) { SetVersion(value); return *this;}


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
    inline GetPackageVersionReadmeResult& WithVersionRevision(const Aws::String& value) { SetVersionRevision(value); return *this;}

    /**
     * <p> The current revision associated with the package version. </p>
     */
    inline GetPackageVersionReadmeResult& WithVersionRevision(Aws::String&& value) { SetVersionRevision(std::move(value)); return *this;}

    /**
     * <p> The current revision associated with the package version. </p>
     */
    inline GetPackageVersionReadmeResult& WithVersionRevision(const char* value) { SetVersionRevision(value); return *this;}


    /**
     * <p> The text of the returned readme file. </p>
     */
    inline const Aws::String& GetReadme() const{ return m_readme; }

    /**
     * <p> The text of the returned readme file. </p>
     */
    inline void SetReadme(const Aws::String& value) { m_readme = value; }

    /**
     * <p> The text of the returned readme file. </p>
     */
    inline void SetReadme(Aws::String&& value) { m_readme = std::move(value); }

    /**
     * <p> The text of the returned readme file. </p>
     */
    inline void SetReadme(const char* value) { m_readme.assign(value); }

    /**
     * <p> The text of the returned readme file. </p>
     */
    inline GetPackageVersionReadmeResult& WithReadme(const Aws::String& value) { SetReadme(value); return *this;}

    /**
     * <p> The text of the returned readme file. </p>
     */
    inline GetPackageVersionReadmeResult& WithReadme(Aws::String&& value) { SetReadme(std::move(value)); return *this;}

    /**
     * <p> The text of the returned readme file. </p>
     */
    inline GetPackageVersionReadmeResult& WithReadme(const char* value) { SetReadme(value); return *this;}

  private:

    PackageFormat m_format;

    Aws::String m_namespace;

    Aws::String m_package;

    Aws::String m_version;

    Aws::String m_versionRevision;

    Aws::String m_readme;
  };

} // namespace Model
} // namespace CodeArtifact
} // namespace Aws
