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
    AWS_CODEARTIFACT_API PackageVersionDescription();
    AWS_CODEARTIFACT_API PackageVersionDescription(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEARTIFACT_API PackageVersionDescription& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEARTIFACT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The format of the package version. </p>
     */
    inline const PackageFormat& GetFormat() const{ return m_format; }
    inline bool FormatHasBeenSet() const { return m_formatHasBeenSet; }
    inline void SetFormat(const PackageFormat& value) { m_formatHasBeenSet = true; m_format = value; }
    inline void SetFormat(PackageFormat&& value) { m_formatHasBeenSet = true; m_format = std::move(value); }
    inline PackageVersionDescription& WithFormat(const PackageFormat& value) { SetFormat(value); return *this;}
    inline PackageVersionDescription& WithFormat(PackageFormat&& value) { SetFormat(std::move(value)); return *this;}
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
    inline const Aws::String& GetNamespace() const{ return m_namespace; }
    inline bool NamespaceHasBeenSet() const { return m_namespaceHasBeenSet; }
    inline void SetNamespace(const Aws::String& value) { m_namespaceHasBeenSet = true; m_namespace = value; }
    inline void SetNamespace(Aws::String&& value) { m_namespaceHasBeenSet = true; m_namespace = std::move(value); }
    inline void SetNamespace(const char* value) { m_namespaceHasBeenSet = true; m_namespace.assign(value); }
    inline PackageVersionDescription& WithNamespace(const Aws::String& value) { SetNamespace(value); return *this;}
    inline PackageVersionDescription& WithNamespace(Aws::String&& value) { SetNamespace(std::move(value)); return *this;}
    inline PackageVersionDescription& WithNamespace(const char* value) { SetNamespace(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The name of the requested package. </p>
     */
    inline const Aws::String& GetPackageName() const{ return m_packageName; }
    inline bool PackageNameHasBeenSet() const { return m_packageNameHasBeenSet; }
    inline void SetPackageName(const Aws::String& value) { m_packageNameHasBeenSet = true; m_packageName = value; }
    inline void SetPackageName(Aws::String&& value) { m_packageNameHasBeenSet = true; m_packageName = std::move(value); }
    inline void SetPackageName(const char* value) { m_packageNameHasBeenSet = true; m_packageName.assign(value); }
    inline PackageVersionDescription& WithPackageName(const Aws::String& value) { SetPackageName(value); return *this;}
    inline PackageVersionDescription& WithPackageName(Aws::String&& value) { SetPackageName(std::move(value)); return *this;}
    inline PackageVersionDescription& WithPackageName(const char* value) { SetPackageName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The name of the package that is displayed. The <code>displayName</code>
     * varies depending on the package version's format. For example, if an npm package
     * is named <code>ui</code>, is in the namespace <code>vue</code>, and has the
     * format <code>npm</code>, then the <code>displayName</code> is
     * <code>@vue/ui</code>. </p>
     */
    inline const Aws::String& GetDisplayName() const{ return m_displayName; }
    inline bool DisplayNameHasBeenSet() const { return m_displayNameHasBeenSet; }
    inline void SetDisplayName(const Aws::String& value) { m_displayNameHasBeenSet = true; m_displayName = value; }
    inline void SetDisplayName(Aws::String&& value) { m_displayNameHasBeenSet = true; m_displayName = std::move(value); }
    inline void SetDisplayName(const char* value) { m_displayNameHasBeenSet = true; m_displayName.assign(value); }
    inline PackageVersionDescription& WithDisplayName(const Aws::String& value) { SetDisplayName(value); return *this;}
    inline PackageVersionDescription& WithDisplayName(Aws::String&& value) { SetDisplayName(std::move(value)); return *this;}
    inline PackageVersionDescription& WithDisplayName(const char* value) { SetDisplayName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The version of the package. </p>
     */
    inline const Aws::String& GetVersion() const{ return m_version; }
    inline bool VersionHasBeenSet() const { return m_versionHasBeenSet; }
    inline void SetVersion(const Aws::String& value) { m_versionHasBeenSet = true; m_version = value; }
    inline void SetVersion(Aws::String&& value) { m_versionHasBeenSet = true; m_version = std::move(value); }
    inline void SetVersion(const char* value) { m_versionHasBeenSet = true; m_version.assign(value); }
    inline PackageVersionDescription& WithVersion(const Aws::String& value) { SetVersion(value); return *this;}
    inline PackageVersionDescription& WithVersion(Aws::String&& value) { SetVersion(std::move(value)); return *this;}
    inline PackageVersionDescription& WithVersion(const char* value) { SetVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> A summary of the package version. The summary is extracted from the package.
     * The information in and detail level of the summary depends on the package
     * version's format. </p>
     */
    inline const Aws::String& GetSummary() const{ return m_summary; }
    inline bool SummaryHasBeenSet() const { return m_summaryHasBeenSet; }
    inline void SetSummary(const Aws::String& value) { m_summaryHasBeenSet = true; m_summary = value; }
    inline void SetSummary(Aws::String&& value) { m_summaryHasBeenSet = true; m_summary = std::move(value); }
    inline void SetSummary(const char* value) { m_summaryHasBeenSet = true; m_summary.assign(value); }
    inline PackageVersionDescription& WithSummary(const Aws::String& value) { SetSummary(value); return *this;}
    inline PackageVersionDescription& WithSummary(Aws::String&& value) { SetSummary(std::move(value)); return *this;}
    inline PackageVersionDescription& WithSummary(const char* value) { SetSummary(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The homepage associated with the package. </p>
     */
    inline const Aws::String& GetHomePage() const{ return m_homePage; }
    inline bool HomePageHasBeenSet() const { return m_homePageHasBeenSet; }
    inline void SetHomePage(const Aws::String& value) { m_homePageHasBeenSet = true; m_homePage = value; }
    inline void SetHomePage(Aws::String&& value) { m_homePageHasBeenSet = true; m_homePage = std::move(value); }
    inline void SetHomePage(const char* value) { m_homePageHasBeenSet = true; m_homePage.assign(value); }
    inline PackageVersionDescription& WithHomePage(const Aws::String& value) { SetHomePage(value); return *this;}
    inline PackageVersionDescription& WithHomePage(Aws::String&& value) { SetHomePage(std::move(value)); return *this;}
    inline PackageVersionDescription& WithHomePage(const char* value) { SetHomePage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The repository for the source code in the package version, or the source
     * code used to build it. </p>
     */
    inline const Aws::String& GetSourceCodeRepository() const{ return m_sourceCodeRepository; }
    inline bool SourceCodeRepositoryHasBeenSet() const { return m_sourceCodeRepositoryHasBeenSet; }
    inline void SetSourceCodeRepository(const Aws::String& value) { m_sourceCodeRepositoryHasBeenSet = true; m_sourceCodeRepository = value; }
    inline void SetSourceCodeRepository(Aws::String&& value) { m_sourceCodeRepositoryHasBeenSet = true; m_sourceCodeRepository = std::move(value); }
    inline void SetSourceCodeRepository(const char* value) { m_sourceCodeRepositoryHasBeenSet = true; m_sourceCodeRepository.assign(value); }
    inline PackageVersionDescription& WithSourceCodeRepository(const Aws::String& value) { SetSourceCodeRepository(value); return *this;}
    inline PackageVersionDescription& WithSourceCodeRepository(Aws::String&& value) { SetSourceCodeRepository(std::move(value)); return *this;}
    inline PackageVersionDescription& WithSourceCodeRepository(const char* value) { SetSourceCodeRepository(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> A timestamp that contains the date and time the package version was
     * published. </p>
     */
    inline const Aws::Utils::DateTime& GetPublishedTime() const{ return m_publishedTime; }
    inline bool PublishedTimeHasBeenSet() const { return m_publishedTimeHasBeenSet; }
    inline void SetPublishedTime(const Aws::Utils::DateTime& value) { m_publishedTimeHasBeenSet = true; m_publishedTime = value; }
    inline void SetPublishedTime(Aws::Utils::DateTime&& value) { m_publishedTimeHasBeenSet = true; m_publishedTime = std::move(value); }
    inline PackageVersionDescription& WithPublishedTime(const Aws::Utils::DateTime& value) { SetPublishedTime(value); return *this;}
    inline PackageVersionDescription& WithPublishedTime(Aws::Utils::DateTime&& value) { SetPublishedTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Information about licenses associated with the package version. </p>
     */
    inline const Aws::Vector<LicenseInfo>& GetLicenses() const{ return m_licenses; }
    inline bool LicensesHasBeenSet() const { return m_licensesHasBeenSet; }
    inline void SetLicenses(const Aws::Vector<LicenseInfo>& value) { m_licensesHasBeenSet = true; m_licenses = value; }
    inline void SetLicenses(Aws::Vector<LicenseInfo>&& value) { m_licensesHasBeenSet = true; m_licenses = std::move(value); }
    inline PackageVersionDescription& WithLicenses(const Aws::Vector<LicenseInfo>& value) { SetLicenses(value); return *this;}
    inline PackageVersionDescription& WithLicenses(Aws::Vector<LicenseInfo>&& value) { SetLicenses(std::move(value)); return *this;}
    inline PackageVersionDescription& AddLicenses(const LicenseInfo& value) { m_licensesHasBeenSet = true; m_licenses.push_back(value); return *this; }
    inline PackageVersionDescription& AddLicenses(LicenseInfo&& value) { m_licensesHasBeenSet = true; m_licenses.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> The revision of the package version. </p>
     */
    inline const Aws::String& GetRevision() const{ return m_revision; }
    inline bool RevisionHasBeenSet() const { return m_revisionHasBeenSet; }
    inline void SetRevision(const Aws::String& value) { m_revisionHasBeenSet = true; m_revision = value; }
    inline void SetRevision(Aws::String&& value) { m_revisionHasBeenSet = true; m_revision = std::move(value); }
    inline void SetRevision(const char* value) { m_revisionHasBeenSet = true; m_revision.assign(value); }
    inline PackageVersionDescription& WithRevision(const Aws::String& value) { SetRevision(value); return *this;}
    inline PackageVersionDescription& WithRevision(Aws::String&& value) { SetRevision(std::move(value)); return *this;}
    inline PackageVersionDescription& WithRevision(const char* value) { SetRevision(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> A string that contains the status of the package version. </p>
     */
    inline const PackageVersionStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const PackageVersionStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(PackageVersionStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline PackageVersionDescription& WithStatus(const PackageVersionStatus& value) { SetStatus(value); return *this;}
    inline PackageVersionDescription& WithStatus(PackageVersionStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A <a
     * href="https://docs.aws.amazon.com/codeartifact/latest/APIReference/API_PackageVersionOrigin.html">PackageVersionOrigin</a>
     * object that contains information about how the package version was added to the
     * repository.</p>
     */
    inline const PackageVersionOrigin& GetOrigin() const{ return m_origin; }
    inline bool OriginHasBeenSet() const { return m_originHasBeenSet; }
    inline void SetOrigin(const PackageVersionOrigin& value) { m_originHasBeenSet = true; m_origin = value; }
    inline void SetOrigin(PackageVersionOrigin&& value) { m_originHasBeenSet = true; m_origin = std::move(value); }
    inline PackageVersionDescription& WithOrigin(const PackageVersionOrigin& value) { SetOrigin(value); return *this;}
    inline PackageVersionDescription& WithOrigin(PackageVersionOrigin&& value) { SetOrigin(std::move(value)); return *this;}
    ///@}
  private:

    PackageFormat m_format;
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

    Aws::Utils::DateTime m_publishedTime;
    bool m_publishedTimeHasBeenSet = false;

    Aws::Vector<LicenseInfo> m_licenses;
    bool m_licensesHasBeenSet = false;

    Aws::String m_revision;
    bool m_revisionHasBeenSet = false;

    PackageVersionStatus m_status;
    bool m_statusHasBeenSet = false;

    PackageVersionOrigin m_origin;
    bool m_originHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeArtifact
} // namespace Aws
