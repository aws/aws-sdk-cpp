/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codeartifact/CodeArtifact_EXPORTS.h>
#include <aws/codeartifact/CodeArtifactRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/codeartifact/model/PackageFormat.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace CodeArtifact
{
namespace Model
{

  /**
   */
  class CopyPackageVersionsRequest : public CodeArtifactRequest
  {
  public:
    AWS_CODEARTIFACT_API CopyPackageVersionsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CopyPackageVersions"; }

    AWS_CODEARTIFACT_API Aws::String SerializePayload() const override;

    AWS_CODEARTIFACT_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p> The name of the domain that contains the source and destination
     * repositories. </p>
     */
    inline const Aws::String& GetDomain() const{ return m_domain; }

    /**
     * <p> The name of the domain that contains the source and destination
     * repositories. </p>
     */
    inline bool DomainHasBeenSet() const { return m_domainHasBeenSet; }

    /**
     * <p> The name of the domain that contains the source and destination
     * repositories. </p>
     */
    inline void SetDomain(const Aws::String& value) { m_domainHasBeenSet = true; m_domain = value; }

    /**
     * <p> The name of the domain that contains the source and destination
     * repositories. </p>
     */
    inline void SetDomain(Aws::String&& value) { m_domainHasBeenSet = true; m_domain = std::move(value); }

    /**
     * <p> The name of the domain that contains the source and destination
     * repositories. </p>
     */
    inline void SetDomain(const char* value) { m_domainHasBeenSet = true; m_domain.assign(value); }

    /**
     * <p> The name of the domain that contains the source and destination
     * repositories. </p>
     */
    inline CopyPackageVersionsRequest& WithDomain(const Aws::String& value) { SetDomain(value); return *this;}

    /**
     * <p> The name of the domain that contains the source and destination
     * repositories. </p>
     */
    inline CopyPackageVersionsRequest& WithDomain(Aws::String&& value) { SetDomain(std::move(value)); return *this;}

    /**
     * <p> The name of the domain that contains the source and destination
     * repositories. </p>
     */
    inline CopyPackageVersionsRequest& WithDomain(const char* value) { SetDomain(value); return *this;}


    /**
     * <p> The 12-digit account number of the Amazon Web Services account that owns the
     * domain. It does not include dashes or spaces. </p>
     */
    inline const Aws::String& GetDomainOwner() const{ return m_domainOwner; }

    /**
     * <p> The 12-digit account number of the Amazon Web Services account that owns the
     * domain. It does not include dashes or spaces. </p>
     */
    inline bool DomainOwnerHasBeenSet() const { return m_domainOwnerHasBeenSet; }

    /**
     * <p> The 12-digit account number of the Amazon Web Services account that owns the
     * domain. It does not include dashes or spaces. </p>
     */
    inline void SetDomainOwner(const Aws::String& value) { m_domainOwnerHasBeenSet = true; m_domainOwner = value; }

    /**
     * <p> The 12-digit account number of the Amazon Web Services account that owns the
     * domain. It does not include dashes or spaces. </p>
     */
    inline void SetDomainOwner(Aws::String&& value) { m_domainOwnerHasBeenSet = true; m_domainOwner = std::move(value); }

    /**
     * <p> The 12-digit account number of the Amazon Web Services account that owns the
     * domain. It does not include dashes or spaces. </p>
     */
    inline void SetDomainOwner(const char* value) { m_domainOwnerHasBeenSet = true; m_domainOwner.assign(value); }

    /**
     * <p> The 12-digit account number of the Amazon Web Services account that owns the
     * domain. It does not include dashes or spaces. </p>
     */
    inline CopyPackageVersionsRequest& WithDomainOwner(const Aws::String& value) { SetDomainOwner(value); return *this;}

    /**
     * <p> The 12-digit account number of the Amazon Web Services account that owns the
     * domain. It does not include dashes or spaces. </p>
     */
    inline CopyPackageVersionsRequest& WithDomainOwner(Aws::String&& value) { SetDomainOwner(std::move(value)); return *this;}

    /**
     * <p> The 12-digit account number of the Amazon Web Services account that owns the
     * domain. It does not include dashes or spaces. </p>
     */
    inline CopyPackageVersionsRequest& WithDomainOwner(const char* value) { SetDomainOwner(value); return *this;}


    /**
     * <p> The name of the repository that contains the package versions to be copied.
     * </p>
     */
    inline const Aws::String& GetSourceRepository() const{ return m_sourceRepository; }

    /**
     * <p> The name of the repository that contains the package versions to be copied.
     * </p>
     */
    inline bool SourceRepositoryHasBeenSet() const { return m_sourceRepositoryHasBeenSet; }

    /**
     * <p> The name of the repository that contains the package versions to be copied.
     * </p>
     */
    inline void SetSourceRepository(const Aws::String& value) { m_sourceRepositoryHasBeenSet = true; m_sourceRepository = value; }

    /**
     * <p> The name of the repository that contains the package versions to be copied.
     * </p>
     */
    inline void SetSourceRepository(Aws::String&& value) { m_sourceRepositoryHasBeenSet = true; m_sourceRepository = std::move(value); }

    /**
     * <p> The name of the repository that contains the package versions to be copied.
     * </p>
     */
    inline void SetSourceRepository(const char* value) { m_sourceRepositoryHasBeenSet = true; m_sourceRepository.assign(value); }

    /**
     * <p> The name of the repository that contains the package versions to be copied.
     * </p>
     */
    inline CopyPackageVersionsRequest& WithSourceRepository(const Aws::String& value) { SetSourceRepository(value); return *this;}

    /**
     * <p> The name of the repository that contains the package versions to be copied.
     * </p>
     */
    inline CopyPackageVersionsRequest& WithSourceRepository(Aws::String&& value) { SetSourceRepository(std::move(value)); return *this;}

    /**
     * <p> The name of the repository that contains the package versions to be copied.
     * </p>
     */
    inline CopyPackageVersionsRequest& WithSourceRepository(const char* value) { SetSourceRepository(value); return *this;}


    /**
     * <p> The name of the repository into which package versions are copied. </p>
     */
    inline const Aws::String& GetDestinationRepository() const{ return m_destinationRepository; }

    /**
     * <p> The name of the repository into which package versions are copied. </p>
     */
    inline bool DestinationRepositoryHasBeenSet() const { return m_destinationRepositoryHasBeenSet; }

    /**
     * <p> The name of the repository into which package versions are copied. </p>
     */
    inline void SetDestinationRepository(const Aws::String& value) { m_destinationRepositoryHasBeenSet = true; m_destinationRepository = value; }

    /**
     * <p> The name of the repository into which package versions are copied. </p>
     */
    inline void SetDestinationRepository(Aws::String&& value) { m_destinationRepositoryHasBeenSet = true; m_destinationRepository = std::move(value); }

    /**
     * <p> The name of the repository into which package versions are copied. </p>
     */
    inline void SetDestinationRepository(const char* value) { m_destinationRepositoryHasBeenSet = true; m_destinationRepository.assign(value); }

    /**
     * <p> The name of the repository into which package versions are copied. </p>
     */
    inline CopyPackageVersionsRequest& WithDestinationRepository(const Aws::String& value) { SetDestinationRepository(value); return *this;}

    /**
     * <p> The name of the repository into which package versions are copied. </p>
     */
    inline CopyPackageVersionsRequest& WithDestinationRepository(Aws::String&& value) { SetDestinationRepository(std::move(value)); return *this;}

    /**
     * <p> The name of the repository into which package versions are copied. </p>
     */
    inline CopyPackageVersionsRequest& WithDestinationRepository(const char* value) { SetDestinationRepository(value); return *this;}


    /**
     * <p> The format of the package versions to be copied. </p>
     */
    inline const PackageFormat& GetFormat() const{ return m_format; }

    /**
     * <p> The format of the package versions to be copied. </p>
     */
    inline bool FormatHasBeenSet() const { return m_formatHasBeenSet; }

    /**
     * <p> The format of the package versions to be copied. </p>
     */
    inline void SetFormat(const PackageFormat& value) { m_formatHasBeenSet = true; m_format = value; }

    /**
     * <p> The format of the package versions to be copied. </p>
     */
    inline void SetFormat(PackageFormat&& value) { m_formatHasBeenSet = true; m_format = std::move(value); }

    /**
     * <p> The format of the package versions to be copied. </p>
     */
    inline CopyPackageVersionsRequest& WithFormat(const PackageFormat& value) { SetFormat(value); return *this;}

    /**
     * <p> The format of the package versions to be copied. </p>
     */
    inline CopyPackageVersionsRequest& WithFormat(PackageFormat&& value) { SetFormat(std::move(value)); return *this;}


    /**
     * <p>The namespace of the package versions to be copied. The package version
     * component that specifies its namespace depends on its type. For example:</p>
     * <ul> <li> <p> The namespace of a Maven package version is its
     * <code>groupId</code>. The namespace is required when copying Maven package
     * versions. </p> </li> <li> <p> The namespace of an npm package version is its
     * <code>scope</code>. </p> </li> <li> <p> Python and NuGet package versions do not
     * contain a corresponding component, package versions of those formats do not have
     * a namespace. </p> </li> </ul>
     */
    inline const Aws::String& GetNamespace() const{ return m_namespace; }

    /**
     * <p>The namespace of the package versions to be copied. The package version
     * component that specifies its namespace depends on its type. For example:</p>
     * <ul> <li> <p> The namespace of a Maven package version is its
     * <code>groupId</code>. The namespace is required when copying Maven package
     * versions. </p> </li> <li> <p> The namespace of an npm package version is its
     * <code>scope</code>. </p> </li> <li> <p> Python and NuGet package versions do not
     * contain a corresponding component, package versions of those formats do not have
     * a namespace. </p> </li> </ul>
     */
    inline bool NamespaceHasBeenSet() const { return m_namespaceHasBeenSet; }

    /**
     * <p>The namespace of the package versions to be copied. The package version
     * component that specifies its namespace depends on its type. For example:</p>
     * <ul> <li> <p> The namespace of a Maven package version is its
     * <code>groupId</code>. The namespace is required when copying Maven package
     * versions. </p> </li> <li> <p> The namespace of an npm package version is its
     * <code>scope</code>. </p> </li> <li> <p> Python and NuGet package versions do not
     * contain a corresponding component, package versions of those formats do not have
     * a namespace. </p> </li> </ul>
     */
    inline void SetNamespace(const Aws::String& value) { m_namespaceHasBeenSet = true; m_namespace = value; }

    /**
     * <p>The namespace of the package versions to be copied. The package version
     * component that specifies its namespace depends on its type. For example:</p>
     * <ul> <li> <p> The namespace of a Maven package version is its
     * <code>groupId</code>. The namespace is required when copying Maven package
     * versions. </p> </li> <li> <p> The namespace of an npm package version is its
     * <code>scope</code>. </p> </li> <li> <p> Python and NuGet package versions do not
     * contain a corresponding component, package versions of those formats do not have
     * a namespace. </p> </li> </ul>
     */
    inline void SetNamespace(Aws::String&& value) { m_namespaceHasBeenSet = true; m_namespace = std::move(value); }

    /**
     * <p>The namespace of the package versions to be copied. The package version
     * component that specifies its namespace depends on its type. For example:</p>
     * <ul> <li> <p> The namespace of a Maven package version is its
     * <code>groupId</code>. The namespace is required when copying Maven package
     * versions. </p> </li> <li> <p> The namespace of an npm package version is its
     * <code>scope</code>. </p> </li> <li> <p> Python and NuGet package versions do not
     * contain a corresponding component, package versions of those formats do not have
     * a namespace. </p> </li> </ul>
     */
    inline void SetNamespace(const char* value) { m_namespaceHasBeenSet = true; m_namespace.assign(value); }

    /**
     * <p>The namespace of the package versions to be copied. The package version
     * component that specifies its namespace depends on its type. For example:</p>
     * <ul> <li> <p> The namespace of a Maven package version is its
     * <code>groupId</code>. The namespace is required when copying Maven package
     * versions. </p> </li> <li> <p> The namespace of an npm package version is its
     * <code>scope</code>. </p> </li> <li> <p> Python and NuGet package versions do not
     * contain a corresponding component, package versions of those formats do not have
     * a namespace. </p> </li> </ul>
     */
    inline CopyPackageVersionsRequest& WithNamespace(const Aws::String& value) { SetNamespace(value); return *this;}

    /**
     * <p>The namespace of the package versions to be copied. The package version
     * component that specifies its namespace depends on its type. For example:</p>
     * <ul> <li> <p> The namespace of a Maven package version is its
     * <code>groupId</code>. The namespace is required when copying Maven package
     * versions. </p> </li> <li> <p> The namespace of an npm package version is its
     * <code>scope</code>. </p> </li> <li> <p> Python and NuGet package versions do not
     * contain a corresponding component, package versions of those formats do not have
     * a namespace. </p> </li> </ul>
     */
    inline CopyPackageVersionsRequest& WithNamespace(Aws::String&& value) { SetNamespace(std::move(value)); return *this;}

    /**
     * <p>The namespace of the package versions to be copied. The package version
     * component that specifies its namespace depends on its type. For example:</p>
     * <ul> <li> <p> The namespace of a Maven package version is its
     * <code>groupId</code>. The namespace is required when copying Maven package
     * versions. </p> </li> <li> <p> The namespace of an npm package version is its
     * <code>scope</code>. </p> </li> <li> <p> Python and NuGet package versions do not
     * contain a corresponding component, package versions of those formats do not have
     * a namespace. </p> </li> </ul>
     */
    inline CopyPackageVersionsRequest& WithNamespace(const char* value) { SetNamespace(value); return *this;}


    /**
     * <p> The name of the package that contains the versions to be copied. </p>
     */
    inline const Aws::String& GetPackage() const{ return m_package; }

    /**
     * <p> The name of the package that contains the versions to be copied. </p>
     */
    inline bool PackageHasBeenSet() const { return m_packageHasBeenSet; }

    /**
     * <p> The name of the package that contains the versions to be copied. </p>
     */
    inline void SetPackage(const Aws::String& value) { m_packageHasBeenSet = true; m_package = value; }

    /**
     * <p> The name of the package that contains the versions to be copied. </p>
     */
    inline void SetPackage(Aws::String&& value) { m_packageHasBeenSet = true; m_package = std::move(value); }

    /**
     * <p> The name of the package that contains the versions to be copied. </p>
     */
    inline void SetPackage(const char* value) { m_packageHasBeenSet = true; m_package.assign(value); }

    /**
     * <p> The name of the package that contains the versions to be copied. </p>
     */
    inline CopyPackageVersionsRequest& WithPackage(const Aws::String& value) { SetPackage(value); return *this;}

    /**
     * <p> The name of the package that contains the versions to be copied. </p>
     */
    inline CopyPackageVersionsRequest& WithPackage(Aws::String&& value) { SetPackage(std::move(value)); return *this;}

    /**
     * <p> The name of the package that contains the versions to be copied. </p>
     */
    inline CopyPackageVersionsRequest& WithPackage(const char* value) { SetPackage(value); return *this;}


    /**
     * <p> The versions of the package to be copied. </p>  <p> You must specify
     * <code>versions</code> or <code>versionRevisions</code>. You cannot specify both.
     * </p> 
     */
    inline const Aws::Vector<Aws::String>& GetVersions() const{ return m_versions; }

    /**
     * <p> The versions of the package to be copied. </p>  <p> You must specify
     * <code>versions</code> or <code>versionRevisions</code>. You cannot specify both.
     * </p> 
     */
    inline bool VersionsHasBeenSet() const { return m_versionsHasBeenSet; }

    /**
     * <p> The versions of the package to be copied. </p>  <p> You must specify
     * <code>versions</code> or <code>versionRevisions</code>. You cannot specify both.
     * </p> 
     */
    inline void SetVersions(const Aws::Vector<Aws::String>& value) { m_versionsHasBeenSet = true; m_versions = value; }

    /**
     * <p> The versions of the package to be copied. </p>  <p> You must specify
     * <code>versions</code> or <code>versionRevisions</code>. You cannot specify both.
     * </p> 
     */
    inline void SetVersions(Aws::Vector<Aws::String>&& value) { m_versionsHasBeenSet = true; m_versions = std::move(value); }

    /**
     * <p> The versions of the package to be copied. </p>  <p> You must specify
     * <code>versions</code> or <code>versionRevisions</code>. You cannot specify both.
     * </p> 
     */
    inline CopyPackageVersionsRequest& WithVersions(const Aws::Vector<Aws::String>& value) { SetVersions(value); return *this;}

    /**
     * <p> The versions of the package to be copied. </p>  <p> You must specify
     * <code>versions</code> or <code>versionRevisions</code>. You cannot specify both.
     * </p> 
     */
    inline CopyPackageVersionsRequest& WithVersions(Aws::Vector<Aws::String>&& value) { SetVersions(std::move(value)); return *this;}

    /**
     * <p> The versions of the package to be copied. </p>  <p> You must specify
     * <code>versions</code> or <code>versionRevisions</code>. You cannot specify both.
     * </p> 
     */
    inline CopyPackageVersionsRequest& AddVersions(const Aws::String& value) { m_versionsHasBeenSet = true; m_versions.push_back(value); return *this; }

    /**
     * <p> The versions of the package to be copied. </p>  <p> You must specify
     * <code>versions</code> or <code>versionRevisions</code>. You cannot specify both.
     * </p> 
     */
    inline CopyPackageVersionsRequest& AddVersions(Aws::String&& value) { m_versionsHasBeenSet = true; m_versions.push_back(std::move(value)); return *this; }

    /**
     * <p> The versions of the package to be copied. </p>  <p> You must specify
     * <code>versions</code> or <code>versionRevisions</code>. You cannot specify both.
     * </p> 
     */
    inline CopyPackageVersionsRequest& AddVersions(const char* value) { m_versionsHasBeenSet = true; m_versions.push_back(value); return *this; }


    /**
     * <p> A list of key-value pairs. The keys are package versions and the values are
     * package version revisions. A <code>CopyPackageVersion</code> operation succeeds
     * if the specified versions in the source repository match the specified package
     * version revision. </p>  <p> You must specify <code>versions</code> or
     * <code>versionRevisions</code>. You cannot specify both. </p> 
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetVersionRevisions() const{ return m_versionRevisions; }

    /**
     * <p> A list of key-value pairs. The keys are package versions and the values are
     * package version revisions. A <code>CopyPackageVersion</code> operation succeeds
     * if the specified versions in the source repository match the specified package
     * version revision. </p>  <p> You must specify <code>versions</code> or
     * <code>versionRevisions</code>. You cannot specify both. </p> 
     */
    inline bool VersionRevisionsHasBeenSet() const { return m_versionRevisionsHasBeenSet; }

    /**
     * <p> A list of key-value pairs. The keys are package versions and the values are
     * package version revisions. A <code>CopyPackageVersion</code> operation succeeds
     * if the specified versions in the source repository match the specified package
     * version revision. </p>  <p> You must specify <code>versions</code> or
     * <code>versionRevisions</code>. You cannot specify both. </p> 
     */
    inline void SetVersionRevisions(const Aws::Map<Aws::String, Aws::String>& value) { m_versionRevisionsHasBeenSet = true; m_versionRevisions = value; }

    /**
     * <p> A list of key-value pairs. The keys are package versions and the values are
     * package version revisions. A <code>CopyPackageVersion</code> operation succeeds
     * if the specified versions in the source repository match the specified package
     * version revision. </p>  <p> You must specify <code>versions</code> or
     * <code>versionRevisions</code>. You cannot specify both. </p> 
     */
    inline void SetVersionRevisions(Aws::Map<Aws::String, Aws::String>&& value) { m_versionRevisionsHasBeenSet = true; m_versionRevisions = std::move(value); }

    /**
     * <p> A list of key-value pairs. The keys are package versions and the values are
     * package version revisions. A <code>CopyPackageVersion</code> operation succeeds
     * if the specified versions in the source repository match the specified package
     * version revision. </p>  <p> You must specify <code>versions</code> or
     * <code>versionRevisions</code>. You cannot specify both. </p> 
     */
    inline CopyPackageVersionsRequest& WithVersionRevisions(const Aws::Map<Aws::String, Aws::String>& value) { SetVersionRevisions(value); return *this;}

    /**
     * <p> A list of key-value pairs. The keys are package versions and the values are
     * package version revisions. A <code>CopyPackageVersion</code> operation succeeds
     * if the specified versions in the source repository match the specified package
     * version revision. </p>  <p> You must specify <code>versions</code> or
     * <code>versionRevisions</code>. You cannot specify both. </p> 
     */
    inline CopyPackageVersionsRequest& WithVersionRevisions(Aws::Map<Aws::String, Aws::String>&& value) { SetVersionRevisions(std::move(value)); return *this;}

    /**
     * <p> A list of key-value pairs. The keys are package versions and the values are
     * package version revisions. A <code>CopyPackageVersion</code> operation succeeds
     * if the specified versions in the source repository match the specified package
     * version revision. </p>  <p> You must specify <code>versions</code> or
     * <code>versionRevisions</code>. You cannot specify both. </p> 
     */
    inline CopyPackageVersionsRequest& AddVersionRevisions(const Aws::String& key, const Aws::String& value) { m_versionRevisionsHasBeenSet = true; m_versionRevisions.emplace(key, value); return *this; }

    /**
     * <p> A list of key-value pairs. The keys are package versions and the values are
     * package version revisions. A <code>CopyPackageVersion</code> operation succeeds
     * if the specified versions in the source repository match the specified package
     * version revision. </p>  <p> You must specify <code>versions</code> or
     * <code>versionRevisions</code>. You cannot specify both. </p> 
     */
    inline CopyPackageVersionsRequest& AddVersionRevisions(Aws::String&& key, const Aws::String& value) { m_versionRevisionsHasBeenSet = true; m_versionRevisions.emplace(std::move(key), value); return *this; }

    /**
     * <p> A list of key-value pairs. The keys are package versions and the values are
     * package version revisions. A <code>CopyPackageVersion</code> operation succeeds
     * if the specified versions in the source repository match the specified package
     * version revision. </p>  <p> You must specify <code>versions</code> or
     * <code>versionRevisions</code>. You cannot specify both. </p> 
     */
    inline CopyPackageVersionsRequest& AddVersionRevisions(const Aws::String& key, Aws::String&& value) { m_versionRevisionsHasBeenSet = true; m_versionRevisions.emplace(key, std::move(value)); return *this; }

    /**
     * <p> A list of key-value pairs. The keys are package versions and the values are
     * package version revisions. A <code>CopyPackageVersion</code> operation succeeds
     * if the specified versions in the source repository match the specified package
     * version revision. </p>  <p> You must specify <code>versions</code> or
     * <code>versionRevisions</code>. You cannot specify both. </p> 
     */
    inline CopyPackageVersionsRequest& AddVersionRevisions(Aws::String&& key, Aws::String&& value) { m_versionRevisionsHasBeenSet = true; m_versionRevisions.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p> A list of key-value pairs. The keys are package versions and the values are
     * package version revisions. A <code>CopyPackageVersion</code> operation succeeds
     * if the specified versions in the source repository match the specified package
     * version revision. </p>  <p> You must specify <code>versions</code> or
     * <code>versionRevisions</code>. You cannot specify both. </p> 
     */
    inline CopyPackageVersionsRequest& AddVersionRevisions(const char* key, Aws::String&& value) { m_versionRevisionsHasBeenSet = true; m_versionRevisions.emplace(key, std::move(value)); return *this; }

    /**
     * <p> A list of key-value pairs. The keys are package versions and the values are
     * package version revisions. A <code>CopyPackageVersion</code> operation succeeds
     * if the specified versions in the source repository match the specified package
     * version revision. </p>  <p> You must specify <code>versions</code> or
     * <code>versionRevisions</code>. You cannot specify both. </p> 
     */
    inline CopyPackageVersionsRequest& AddVersionRevisions(Aws::String&& key, const char* value) { m_versionRevisionsHasBeenSet = true; m_versionRevisions.emplace(std::move(key), value); return *this; }

    /**
     * <p> A list of key-value pairs. The keys are package versions and the values are
     * package version revisions. A <code>CopyPackageVersion</code> operation succeeds
     * if the specified versions in the source repository match the specified package
     * version revision. </p>  <p> You must specify <code>versions</code> or
     * <code>versionRevisions</code>. You cannot specify both. </p> 
     */
    inline CopyPackageVersionsRequest& AddVersionRevisions(const char* key, const char* value) { m_versionRevisionsHasBeenSet = true; m_versionRevisions.emplace(key, value); return *this; }


    /**
     * <p> Set to true to overwrite a package version that already exists in the
     * destination repository. If set to false and the package version already exists
     * in the destination repository, the package version is returned in the
     * <code>failedVersions</code> field of the response with an
     * <code>ALREADY_EXISTS</code> error code. </p>
     */
    inline bool GetAllowOverwrite() const{ return m_allowOverwrite; }

    /**
     * <p> Set to true to overwrite a package version that already exists in the
     * destination repository. If set to false and the package version already exists
     * in the destination repository, the package version is returned in the
     * <code>failedVersions</code> field of the response with an
     * <code>ALREADY_EXISTS</code> error code. </p>
     */
    inline bool AllowOverwriteHasBeenSet() const { return m_allowOverwriteHasBeenSet; }

    /**
     * <p> Set to true to overwrite a package version that already exists in the
     * destination repository. If set to false and the package version already exists
     * in the destination repository, the package version is returned in the
     * <code>failedVersions</code> field of the response with an
     * <code>ALREADY_EXISTS</code> error code. </p>
     */
    inline void SetAllowOverwrite(bool value) { m_allowOverwriteHasBeenSet = true; m_allowOverwrite = value; }

    /**
     * <p> Set to true to overwrite a package version that already exists in the
     * destination repository. If set to false and the package version already exists
     * in the destination repository, the package version is returned in the
     * <code>failedVersions</code> field of the response with an
     * <code>ALREADY_EXISTS</code> error code. </p>
     */
    inline CopyPackageVersionsRequest& WithAllowOverwrite(bool value) { SetAllowOverwrite(value); return *this;}


    /**
     * <p> Set to true to copy packages from repositories that are upstream from the
     * source repository to the destination repository. The default setting is false.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/codeartifact/latest/ug/repos-upstream.html">Working
     * with upstream repositories</a>. </p>
     */
    inline bool GetIncludeFromUpstream() const{ return m_includeFromUpstream; }

    /**
     * <p> Set to true to copy packages from repositories that are upstream from the
     * source repository to the destination repository. The default setting is false.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/codeartifact/latest/ug/repos-upstream.html">Working
     * with upstream repositories</a>. </p>
     */
    inline bool IncludeFromUpstreamHasBeenSet() const { return m_includeFromUpstreamHasBeenSet; }

    /**
     * <p> Set to true to copy packages from repositories that are upstream from the
     * source repository to the destination repository. The default setting is false.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/codeartifact/latest/ug/repos-upstream.html">Working
     * with upstream repositories</a>. </p>
     */
    inline void SetIncludeFromUpstream(bool value) { m_includeFromUpstreamHasBeenSet = true; m_includeFromUpstream = value; }

    /**
     * <p> Set to true to copy packages from repositories that are upstream from the
     * source repository to the destination repository. The default setting is false.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/codeartifact/latest/ug/repos-upstream.html">Working
     * with upstream repositories</a>. </p>
     */
    inline CopyPackageVersionsRequest& WithIncludeFromUpstream(bool value) { SetIncludeFromUpstream(value); return *this;}

  private:

    Aws::String m_domain;
    bool m_domainHasBeenSet = false;

    Aws::String m_domainOwner;
    bool m_domainOwnerHasBeenSet = false;

    Aws::String m_sourceRepository;
    bool m_sourceRepositoryHasBeenSet = false;

    Aws::String m_destinationRepository;
    bool m_destinationRepositoryHasBeenSet = false;

    PackageFormat m_format;
    bool m_formatHasBeenSet = false;

    Aws::String m_namespace;
    bool m_namespaceHasBeenSet = false;

    Aws::String m_package;
    bool m_packageHasBeenSet = false;

    Aws::Vector<Aws::String> m_versions;
    bool m_versionsHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_versionRevisions;
    bool m_versionRevisionsHasBeenSet = false;

    bool m_allowOverwrite;
    bool m_allowOverwriteHasBeenSet = false;

    bool m_includeFromUpstream;
    bool m_includeFromUpstreamHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeArtifact
} // namespace Aws
