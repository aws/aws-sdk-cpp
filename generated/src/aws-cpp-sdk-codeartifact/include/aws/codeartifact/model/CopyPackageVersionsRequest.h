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
    AWS_CODEARTIFACT_API CopyPackageVersionsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CopyPackageVersions"; }

    AWS_CODEARTIFACT_API Aws::String SerializePayload() const override;

    AWS_CODEARTIFACT_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p> The name of the domain that contains the source and destination
     * repositories. </p>
     */
    inline const Aws::String& GetDomain() const { return m_domain; }
    inline bool DomainHasBeenSet() const { return m_domainHasBeenSet; }
    template<typename DomainT = Aws::String>
    void SetDomain(DomainT&& value) { m_domainHasBeenSet = true; m_domain = std::forward<DomainT>(value); }
    template<typename DomainT = Aws::String>
    CopyPackageVersionsRequest& WithDomain(DomainT&& value) { SetDomain(std::forward<DomainT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The 12-digit account number of the Amazon Web Services account that owns the
     * domain. It does not include dashes or spaces. </p>
     */
    inline const Aws::String& GetDomainOwner() const { return m_domainOwner; }
    inline bool DomainOwnerHasBeenSet() const { return m_domainOwnerHasBeenSet; }
    template<typename DomainOwnerT = Aws::String>
    void SetDomainOwner(DomainOwnerT&& value) { m_domainOwnerHasBeenSet = true; m_domainOwner = std::forward<DomainOwnerT>(value); }
    template<typename DomainOwnerT = Aws::String>
    CopyPackageVersionsRequest& WithDomainOwner(DomainOwnerT&& value) { SetDomainOwner(std::forward<DomainOwnerT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The name of the repository that contains the package versions to be copied.
     * </p>
     */
    inline const Aws::String& GetSourceRepository() const { return m_sourceRepository; }
    inline bool SourceRepositoryHasBeenSet() const { return m_sourceRepositoryHasBeenSet; }
    template<typename SourceRepositoryT = Aws::String>
    void SetSourceRepository(SourceRepositoryT&& value) { m_sourceRepositoryHasBeenSet = true; m_sourceRepository = std::forward<SourceRepositoryT>(value); }
    template<typename SourceRepositoryT = Aws::String>
    CopyPackageVersionsRequest& WithSourceRepository(SourceRepositoryT&& value) { SetSourceRepository(std::forward<SourceRepositoryT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The name of the repository into which package versions are copied. </p>
     */
    inline const Aws::String& GetDestinationRepository() const { return m_destinationRepository; }
    inline bool DestinationRepositoryHasBeenSet() const { return m_destinationRepositoryHasBeenSet; }
    template<typename DestinationRepositoryT = Aws::String>
    void SetDestinationRepository(DestinationRepositoryT&& value) { m_destinationRepositoryHasBeenSet = true; m_destinationRepository = std::forward<DestinationRepositoryT>(value); }
    template<typename DestinationRepositoryT = Aws::String>
    CopyPackageVersionsRequest& WithDestinationRepository(DestinationRepositoryT&& value) { SetDestinationRepository(std::forward<DestinationRepositoryT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The format of the package versions to be copied. </p>
     */
    inline PackageFormat GetFormat() const { return m_format; }
    inline bool FormatHasBeenSet() const { return m_formatHasBeenSet; }
    inline void SetFormat(PackageFormat value) { m_formatHasBeenSet = true; m_format = value; }
    inline CopyPackageVersionsRequest& WithFormat(PackageFormat value) { SetFormat(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The namespace of the package versions to be copied. The package component
     * that specifies its namespace depends on its type. For example:</p>  <p>The
     * namespace is required when copying package versions of the following
     * formats:</p> <ul> <li> <p>Maven</p> </li> <li> <p>Swift</p> </li> <li>
     * <p>generic</p> </li> </ul>  <ul> <li> <p> The namespace of a Maven
     * package version is its <code>groupId</code>. </p> </li> <li> <p> The namespace
     * of an npm or Swift package version is its <code>scope</code>. </p> </li> <li>
     * <p>The namespace of a generic package is its <code>namespace</code>.</p> </li>
     * <li> <p> Python, NuGet, Ruby, and Cargo package versions do not contain a
     * corresponding component, package versions of those formats do not have a
     * namespace. </p> </li> </ul>
     */
    inline const Aws::String& GetNamespace() const { return m_namespace; }
    inline bool NamespaceHasBeenSet() const { return m_namespaceHasBeenSet; }
    template<typename NamespaceT = Aws::String>
    void SetNamespace(NamespaceT&& value) { m_namespaceHasBeenSet = true; m_namespace = std::forward<NamespaceT>(value); }
    template<typename NamespaceT = Aws::String>
    CopyPackageVersionsRequest& WithNamespace(NamespaceT&& value) { SetNamespace(std::forward<NamespaceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The name of the package that contains the versions to be copied. </p>
     */
    inline const Aws::String& GetPackage() const { return m_package; }
    inline bool PackageHasBeenSet() const { return m_packageHasBeenSet; }
    template<typename PackageT = Aws::String>
    void SetPackage(PackageT&& value) { m_packageHasBeenSet = true; m_package = std::forward<PackageT>(value); }
    template<typename PackageT = Aws::String>
    CopyPackageVersionsRequest& WithPackage(PackageT&& value) { SetPackage(std::forward<PackageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The versions of the package to be copied. </p>  <p> You must specify
     * <code>versions</code> or <code>versionRevisions</code>. You cannot specify both.
     * </p> 
     */
    inline const Aws::Vector<Aws::String>& GetVersions() const { return m_versions; }
    inline bool VersionsHasBeenSet() const { return m_versionsHasBeenSet; }
    template<typename VersionsT = Aws::Vector<Aws::String>>
    void SetVersions(VersionsT&& value) { m_versionsHasBeenSet = true; m_versions = std::forward<VersionsT>(value); }
    template<typename VersionsT = Aws::Vector<Aws::String>>
    CopyPackageVersionsRequest& WithVersions(VersionsT&& value) { SetVersions(std::forward<VersionsT>(value)); return *this;}
    template<typename VersionsT = Aws::String>
    CopyPackageVersionsRequest& AddVersions(VersionsT&& value) { m_versionsHasBeenSet = true; m_versions.emplace_back(std::forward<VersionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> A list of key-value pairs. The keys are package versions and the values are
     * package version revisions. A <code>CopyPackageVersion</code> operation succeeds
     * if the specified versions in the source repository match the specified package
     * version revision. </p>  <p> You must specify <code>versions</code> or
     * <code>versionRevisions</code>. You cannot specify both. </p> 
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetVersionRevisions() const { return m_versionRevisions; }
    inline bool VersionRevisionsHasBeenSet() const { return m_versionRevisionsHasBeenSet; }
    template<typename VersionRevisionsT = Aws::Map<Aws::String, Aws::String>>
    void SetVersionRevisions(VersionRevisionsT&& value) { m_versionRevisionsHasBeenSet = true; m_versionRevisions = std::forward<VersionRevisionsT>(value); }
    template<typename VersionRevisionsT = Aws::Map<Aws::String, Aws::String>>
    CopyPackageVersionsRequest& WithVersionRevisions(VersionRevisionsT&& value) { SetVersionRevisions(std::forward<VersionRevisionsT>(value)); return *this;}
    template<typename VersionRevisionsKeyT = Aws::String, typename VersionRevisionsValueT = Aws::String>
    CopyPackageVersionsRequest& AddVersionRevisions(VersionRevisionsKeyT&& key, VersionRevisionsValueT&& value) {
      m_versionRevisionsHasBeenSet = true; m_versionRevisions.emplace(std::forward<VersionRevisionsKeyT>(key), std::forward<VersionRevisionsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p> Set to true to overwrite a package version that already exists in the
     * destination repository. If set to false and the package version already exists
     * in the destination repository, the package version is returned in the
     * <code>failedVersions</code> field of the response with an
     * <code>ALREADY_EXISTS</code> error code. </p>
     */
    inline bool GetAllowOverwrite() const { return m_allowOverwrite; }
    inline bool AllowOverwriteHasBeenSet() const { return m_allowOverwriteHasBeenSet; }
    inline void SetAllowOverwrite(bool value) { m_allowOverwriteHasBeenSet = true; m_allowOverwrite = value; }
    inline CopyPackageVersionsRequest& WithAllowOverwrite(bool value) { SetAllowOverwrite(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> Set to true to copy packages from repositories that are upstream from the
     * source repository to the destination repository. The default setting is false.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/codeartifact/latest/ug/repos-upstream.html">Working
     * with upstream repositories</a>. </p>
     */
    inline bool GetIncludeFromUpstream() const { return m_includeFromUpstream; }
    inline bool IncludeFromUpstreamHasBeenSet() const { return m_includeFromUpstreamHasBeenSet; }
    inline void SetIncludeFromUpstream(bool value) { m_includeFromUpstreamHasBeenSet = true; m_includeFromUpstream = value; }
    inline CopyPackageVersionsRequest& WithIncludeFromUpstream(bool value) { SetIncludeFromUpstream(value); return *this;}
    ///@}
  private:

    Aws::String m_domain;
    bool m_domainHasBeenSet = false;

    Aws::String m_domainOwner;
    bool m_domainOwnerHasBeenSet = false;

    Aws::String m_sourceRepository;
    bool m_sourceRepositoryHasBeenSet = false;

    Aws::String m_destinationRepository;
    bool m_destinationRepositoryHasBeenSet = false;

    PackageFormat m_format{PackageFormat::NOT_SET};
    bool m_formatHasBeenSet = false;

    Aws::String m_namespace;
    bool m_namespaceHasBeenSet = false;

    Aws::String m_package;
    bool m_packageHasBeenSet = false;

    Aws::Vector<Aws::String> m_versions;
    bool m_versionsHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_versionRevisions;
    bool m_versionRevisionsHasBeenSet = false;

    bool m_allowOverwrite{false};
    bool m_allowOverwriteHasBeenSet = false;

    bool m_includeFromUpstream{false};
    bool m_includeFromUpstreamHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeArtifact
} // namespace Aws
