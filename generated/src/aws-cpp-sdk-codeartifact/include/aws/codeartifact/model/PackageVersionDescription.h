/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codeartifact/CodeArtifact_EXPORTS.h>
#include <aws/codeartifact/model/PackageFormat.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/codeartifact/model/PackageVersionStatus.h>
#include <aws/codeartifact/model/PackageVersionOrigin.h>
#include <aws/codeartifact/model/LicenseInfo.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace CodeArtifact
{
namespace Model
{

  /**
   * <p> Details about a package version. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codeartifact-2018-09-22/PackageVersionDescription">AWS
   * API Reference</a></p>
   */
  class PackageVersionDescription
  {
  public:
    AWS_CODEARTIFACT_API PackageVersionDescription() = default;
    AWS_CODEARTIFACT_API PackageVersionDescription(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEARTIFACT_API PackageVersionDescription& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEARTIFACT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The format of the package version. </p>
     */
    inline PackageFormat GetFormat() const { return m_format; }
    inline bool FormatHasBeenSet() const { return m_formatHasBeenSet; }
    inline void SetFormat(PackageFormat value) { m_formatHasBeenSet = true; m_format = value; }
    inline PackageVersionDescription& WithFormat(PackageFormat value) { SetFormat(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The namespace of the package version. The package component that specifies
     * its namespace depends on its type. For example:</p> <ul> <li> <p> The namespace
     * of a Maven package version is its <code>groupId</code>. </p> </li> <li> <p> The
     * namespace of an npm or Swift package version is its <code>scope</code>. </p>
     * </li> <li> <p>The namespace of a generic package is its
     * <code>namespace</code>.</p> </li> <li> <p> Python, NuGet, Ruby, and Cargo
     * package versions do not contain a corresponding component, package versions of
     * those formats do not have a namespace. </p> </li> </ul>
     */
    inline const Aws::String& GetNamespace() const { return m_namespace; }
    inline bool NamespaceHasBeenSet() const { return m_namespaceHasBeenSet; }
    template<typename NamespaceT = Aws::String>
    void SetNamespace(NamespaceT&& value) { m_namespaceHasBeenSet = true; m_namespace = std::forward<NamespaceT>(value); }
    template<typename NamespaceT = Aws::String>
    PackageVersionDescription& WithNamespace(NamespaceT&& value) { SetNamespace(std::forward<NamespaceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The name of the requested package. </p>
     */
    inline const Aws::String& GetPackageName() const { return m_packageName; }
    inline bool PackageNameHasBeenSet() const { return m_packageNameHasBeenSet; }
    template<typename PackageNameT = Aws::String>
    void SetPackageName(PackageNameT&& value) { m_packageNameHasBeenSet = true; m_packageName = std::forward<PackageNameT>(value); }
    template<typename PackageNameT = Aws::String>
    PackageVersionDescription& WithPackageName(PackageNameT&& value) { SetPackageName(std::forward<PackageNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The name of the package that is displayed. The <code>displayName</code>
     * varies depending on the package version's format. For example, if an npm package
     * is named <code>ui</code>, is in the namespace <code>vue</code>, and has the
     * format <code>npm</code>, then the <code>displayName</code> is
     * <code>@vue/ui</code>. </p>
     */
    inline const Aws::String& GetDisplayName() const { return m_displayName; }
    inline bool DisplayNameHasBeenSet() const { return m_displayNameHasBeenSet; }
    template<typename DisplayNameT = Aws::String>
    void SetDisplayName(DisplayNameT&& value) { m_displayNameHasBeenSet = true; m_displayName = std::forward<DisplayNameT>(value); }
    template<typename DisplayNameT = Aws::String>
    PackageVersionDescription& WithDisplayName(DisplayNameT&& value) { SetDisplayName(std::forward<DisplayNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The version of the package. </p>
     */
    inline const Aws::String& GetVersion() const { return m_version; }
    inline bool VersionHasBeenSet() const { return m_versionHasBeenSet; }
    template<typename VersionT = Aws::String>
    void SetVersion(VersionT&& value) { m_versionHasBeenSet = true; m_version = std::forward<VersionT>(value); }
    template<typename VersionT = Aws::String>
    PackageVersionDescription& WithVersion(VersionT&& value) { SetVersion(std::forward<VersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> A summary of the package version. The summary is extracted from the package.
     * The information in and detail level of the summary depends on the package
     * version's format. </p>
     */
    inline const Aws::String& GetSummary() const { return m_summary; }
    inline bool SummaryHasBeenSet() const { return m_summaryHasBeenSet; }
    template<typename SummaryT = Aws::String>
    void SetSummary(SummaryT&& value) { m_summaryHasBeenSet = true; m_summary = std::forward<SummaryT>(value); }
    template<typename SummaryT = Aws::String>
    PackageVersionDescription& WithSummary(SummaryT&& value) { SetSummary(std::forward<SummaryT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The homepage associated with the package. </p>
     */
    inline const Aws::String& GetHomePage() const { return m_homePage; }
    inline bool HomePageHasBeenSet() const { return m_homePageHasBeenSet; }
    template<typename HomePageT = Aws::String>
    void SetHomePage(HomePageT&& value) { m_homePageHasBeenSet = true; m_homePage = std::forward<HomePageT>(value); }
    template<typename HomePageT = Aws::String>
    PackageVersionDescription& WithHomePage(HomePageT&& value) { SetHomePage(std::forward<HomePageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The repository for the source code in the package version, or the source
     * code used to build it. </p>
     */
    inline const Aws::String& GetSourceCodeRepository() const { return m_sourceCodeRepository; }
    inline bool SourceCodeRepositoryHasBeenSet() const { return m_sourceCodeRepositoryHasBeenSet; }
    template<typename SourceCodeRepositoryT = Aws::String>
    void SetSourceCodeRepository(SourceCodeRepositoryT&& value) { m_sourceCodeRepositoryHasBeenSet = true; m_sourceCodeRepository = std::forward<SourceCodeRepositoryT>(value); }
    template<typename SourceCodeRepositoryT = Aws::String>
    PackageVersionDescription& WithSourceCodeRepository(SourceCodeRepositoryT&& value) { SetSourceCodeRepository(std::forward<SourceCodeRepositoryT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> A timestamp that contains the date and time the package version was
     * published. </p>
     */
    inline const Aws::Utils::DateTime& GetPublishedTime() const { return m_publishedTime; }
    inline bool PublishedTimeHasBeenSet() const { return m_publishedTimeHasBeenSet; }
    template<typename PublishedTimeT = Aws::Utils::DateTime>
    void SetPublishedTime(PublishedTimeT&& value) { m_publishedTimeHasBeenSet = true; m_publishedTime = std::forward<PublishedTimeT>(value); }
    template<typename PublishedTimeT = Aws::Utils::DateTime>
    PackageVersionDescription& WithPublishedTime(PublishedTimeT&& value) { SetPublishedTime(std::forward<PublishedTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Information about licenses associated with the package version. </p>
     */
    inline const Aws::Vector<LicenseInfo>& GetLicenses() const { return m_licenses; }
    inline bool LicensesHasBeenSet() const { return m_licensesHasBeenSet; }
    template<typename LicensesT = Aws::Vector<LicenseInfo>>
    void SetLicenses(LicensesT&& value) { m_licensesHasBeenSet = true; m_licenses = std::forward<LicensesT>(value); }
    template<typename LicensesT = Aws::Vector<LicenseInfo>>
    PackageVersionDescription& WithLicenses(LicensesT&& value) { SetLicenses(std::forward<LicensesT>(value)); return *this;}
    template<typename LicensesT = LicenseInfo>
    PackageVersionDescription& AddLicenses(LicensesT&& value) { m_licensesHasBeenSet = true; m_licenses.emplace_back(std::forward<LicensesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> The revision of the package version. </p>
     */
    inline const Aws::String& GetRevision() const { return m_revision; }
    inline bool RevisionHasBeenSet() const { return m_revisionHasBeenSet; }
    template<typename RevisionT = Aws::String>
    void SetRevision(RevisionT&& value) { m_revisionHasBeenSet = true; m_revision = std::forward<RevisionT>(value); }
    template<typename RevisionT = Aws::String>
    PackageVersionDescription& WithRevision(RevisionT&& value) { SetRevision(std::forward<RevisionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> A string that contains the status of the package version. </p>
     */
    inline PackageVersionStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(PackageVersionStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline PackageVersionDescription& WithStatus(PackageVersionStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A <a
     * href="https://docs.aws.amazon.com/codeartifact/latest/APIReference/API_PackageVersionOrigin.html">PackageVersionOrigin</a>
     * object that contains information about how the package version was added to the
     * repository.</p>
     */
    inline const PackageVersionOrigin& GetOrigin() const { return m_origin; }
    inline bool OriginHasBeenSet() const { return m_originHasBeenSet; }
    template<typename OriginT = PackageVersionOrigin>
    void SetOrigin(OriginT&& value) { m_originHasBeenSet = true; m_origin = std::forward<OriginT>(value); }
    template<typename OriginT = PackageVersionOrigin>
    PackageVersionDescription& WithOrigin(OriginT&& value) { SetOrigin(std::forward<OriginT>(value)); return *this;}
    ///@}
  private:

    PackageFormat m_format{PackageFormat::NOT_SET};
    bool m_formatHasBeenSet = false;

    Aws::String m_namespace;
    bool m_namespaceHasBeenSet = false;

    Aws::String m_packageName;
    bool m_packageNameHasBeenSet = false;

    Aws::String m_displayName;
    bool m_displayNameHasBeenSet = false;

    Aws::String m_version;
    bool m_versionHasBeenSet = false;

    Aws::String m_summary;
    bool m_summaryHasBeenSet = false;

    Aws::String m_homePage;
    bool m_homePageHasBeenSet = false;

    Aws::String m_sourceCodeRepository;
    bool m_sourceCodeRepositoryHasBeenSet = false;

    Aws::Utils::DateTime m_publishedTime{};
    bool m_publishedTimeHasBeenSet = false;

    Aws::Vector<LicenseInfo> m_licenses;
    bool m_licensesHasBeenSet = false;

    Aws::String m_revision;
    bool m_revisionHasBeenSet = false;

    PackageVersionStatus m_status{PackageVersionStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    PackageVersionOrigin m_origin;
    bool m_originHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeArtifact
} // namespace Aws
