/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codeartifact/CodeArtifact_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/codeartifact/model/PackageVersionStatus.h>
#include <aws/codeartifact/model/PackageVersionOrigin.h>
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
   * <p> Details about a package version, including its status, version, and
   * revision. The <a
   * href="https://docs.aws.amazon.com/codeartifact/latest/APIReference/API_ListPackageVersions.html">ListPackageVersions</a>
   * operation returns a list of <code>PackageVersionSummary</code> objects.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codeartifact-2018-09-22/PackageVersionSummary">AWS
   * API Reference</a></p>
   */
  class PackageVersionSummary
  {
  public:
    AWS_CODEARTIFACT_API PackageVersionSummary();
    AWS_CODEARTIFACT_API PackageVersionSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEARTIFACT_API PackageVersionSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEARTIFACT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> Information about a package version. </p>
     */
    inline const Aws::String& GetVersion() const{ return m_version; }
    inline bool VersionHasBeenSet() const { return m_versionHasBeenSet; }
    inline void SetVersion(const Aws::String& value) { m_versionHasBeenSet = true; m_version = value; }
    inline void SetVersion(Aws::String&& value) { m_versionHasBeenSet = true; m_version = std::move(value); }
    inline void SetVersion(const char* value) { m_versionHasBeenSet = true; m_version.assign(value); }
    inline PackageVersionSummary& WithVersion(const Aws::String& value) { SetVersion(value); return *this;}
    inline PackageVersionSummary& WithVersion(Aws::String&& value) { SetVersion(std::move(value)); return *this;}
    inline PackageVersionSummary& WithVersion(const char* value) { SetVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The revision associated with a package version. </p>
     */
    inline const Aws::String& GetRevision() const{ return m_revision; }
    inline bool RevisionHasBeenSet() const { return m_revisionHasBeenSet; }
    inline void SetRevision(const Aws::String& value) { m_revisionHasBeenSet = true; m_revision = value; }
    inline void SetRevision(Aws::String&& value) { m_revisionHasBeenSet = true; m_revision = std::move(value); }
    inline void SetRevision(const char* value) { m_revisionHasBeenSet = true; m_revision.assign(value); }
    inline PackageVersionSummary& WithRevision(const Aws::String& value) { SetRevision(value); return *this;}
    inline PackageVersionSummary& WithRevision(Aws::String&& value) { SetRevision(std::move(value)); return *this;}
    inline PackageVersionSummary& WithRevision(const char* value) { SetRevision(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> A string that contains the status of the package version. It can be one of
     * the following: </p>
     */
    inline const PackageVersionStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const PackageVersionStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(PackageVersionStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline PackageVersionSummary& WithStatus(const PackageVersionStatus& value) { SetStatus(value); return *this;}
    inline PackageVersionSummary& WithStatus(PackageVersionStatus&& value) { SetStatus(std::move(value)); return *this;}
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
    inline PackageVersionSummary& WithOrigin(const PackageVersionOrigin& value) { SetOrigin(value); return *this;}
    inline PackageVersionSummary& WithOrigin(PackageVersionOrigin&& value) { SetOrigin(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_version;
    bool m_versionHasBeenSet = false;

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
