/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codeartifact/CodeArtifact_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/codeartifact/model/PackageVersionStatus.h>
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
   * href="https://docs.aws.amazon.com/codeartifact/latest/APIReference/API_ListPackageVersions.html">
   * <code>ListPackageVersions</code> </a> operation returns a list of
   * <code>PackageVersionSummary</code> objects. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codeartifact-2018-09-22/PackageVersionSummary">AWS
   * API Reference</a></p>
   */
  class AWS_CODEARTIFACT_API PackageVersionSummary
  {
  public:
    PackageVersionSummary();
    PackageVersionSummary(Aws::Utils::Json::JsonView jsonValue);
    PackageVersionSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> Information about a package version. </p>
     */
    inline const Aws::String& GetVersion() const{ return m_version; }

    /**
     * <p> Information about a package version. </p>
     */
    inline bool VersionHasBeenSet() const { return m_versionHasBeenSet; }

    /**
     * <p> Information about a package version. </p>
     */
    inline void SetVersion(const Aws::String& value) { m_versionHasBeenSet = true; m_version = value; }

    /**
     * <p> Information about a package version. </p>
     */
    inline void SetVersion(Aws::String&& value) { m_versionHasBeenSet = true; m_version = std::move(value); }

    /**
     * <p> Information about a package version. </p>
     */
    inline void SetVersion(const char* value) { m_versionHasBeenSet = true; m_version.assign(value); }

    /**
     * <p> Information about a package version. </p>
     */
    inline PackageVersionSummary& WithVersion(const Aws::String& value) { SetVersion(value); return *this;}

    /**
     * <p> Information about a package version. </p>
     */
    inline PackageVersionSummary& WithVersion(Aws::String&& value) { SetVersion(std::move(value)); return *this;}

    /**
     * <p> Information about a package version. </p>
     */
    inline PackageVersionSummary& WithVersion(const char* value) { SetVersion(value); return *this;}


    /**
     * <p> The revision associated with a package version. </p>
     */
    inline const Aws::String& GetRevision() const{ return m_revision; }

    /**
     * <p> The revision associated with a package version. </p>
     */
    inline bool RevisionHasBeenSet() const { return m_revisionHasBeenSet; }

    /**
     * <p> The revision associated with a package version. </p>
     */
    inline void SetRevision(const Aws::String& value) { m_revisionHasBeenSet = true; m_revision = value; }

    /**
     * <p> The revision associated with a package version. </p>
     */
    inline void SetRevision(Aws::String&& value) { m_revisionHasBeenSet = true; m_revision = std::move(value); }

    /**
     * <p> The revision associated with a package version. </p>
     */
    inline void SetRevision(const char* value) { m_revisionHasBeenSet = true; m_revision.assign(value); }

    /**
     * <p> The revision associated with a package version. </p>
     */
    inline PackageVersionSummary& WithRevision(const Aws::String& value) { SetRevision(value); return *this;}

    /**
     * <p> The revision associated with a package version. </p>
     */
    inline PackageVersionSummary& WithRevision(Aws::String&& value) { SetRevision(std::move(value)); return *this;}

    /**
     * <p> The revision associated with a package version. </p>
     */
    inline PackageVersionSummary& WithRevision(const char* value) { SetRevision(value); return *this;}


    /**
     * <p> A string that contains the status of the package version. It can be one of
     * the following: </p> <ul> <li> <p> <code>Published</code> </p> </li> <li> <p>
     * <code>Unfinished</code> </p> </li> <li> <p> <code>Unlisted</code> </p> </li>
     * <li> <p> <code>Archived</code> </p> </li> <li> <p> <code>Disposed</code> </p>
     * </li> </ul>
     */
    inline const PackageVersionStatus& GetStatus() const{ return m_status; }

    /**
     * <p> A string that contains the status of the package version. It can be one of
     * the following: </p> <ul> <li> <p> <code>Published</code> </p> </li> <li> <p>
     * <code>Unfinished</code> </p> </li> <li> <p> <code>Unlisted</code> </p> </li>
     * <li> <p> <code>Archived</code> </p> </li> <li> <p> <code>Disposed</code> </p>
     * </li> </ul>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p> A string that contains the status of the package version. It can be one of
     * the following: </p> <ul> <li> <p> <code>Published</code> </p> </li> <li> <p>
     * <code>Unfinished</code> </p> </li> <li> <p> <code>Unlisted</code> </p> </li>
     * <li> <p> <code>Archived</code> </p> </li> <li> <p> <code>Disposed</code> </p>
     * </li> </ul>
     */
    inline void SetStatus(const PackageVersionStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p> A string that contains the status of the package version. It can be one of
     * the following: </p> <ul> <li> <p> <code>Published</code> </p> </li> <li> <p>
     * <code>Unfinished</code> </p> </li> <li> <p> <code>Unlisted</code> </p> </li>
     * <li> <p> <code>Archived</code> </p> </li> <li> <p> <code>Disposed</code> </p>
     * </li> </ul>
     */
    inline void SetStatus(PackageVersionStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p> A string that contains the status of the package version. It can be one of
     * the following: </p> <ul> <li> <p> <code>Published</code> </p> </li> <li> <p>
     * <code>Unfinished</code> </p> </li> <li> <p> <code>Unlisted</code> </p> </li>
     * <li> <p> <code>Archived</code> </p> </li> <li> <p> <code>Disposed</code> </p>
     * </li> </ul>
     */
    inline PackageVersionSummary& WithStatus(const PackageVersionStatus& value) { SetStatus(value); return *this;}

    /**
     * <p> A string that contains the status of the package version. It can be one of
     * the following: </p> <ul> <li> <p> <code>Published</code> </p> </li> <li> <p>
     * <code>Unfinished</code> </p> </li> <li> <p> <code>Unlisted</code> </p> </li>
     * <li> <p> <code>Archived</code> </p> </li> <li> <p> <code>Disposed</code> </p>
     * </li> </ul>
     */
    inline PackageVersionSummary& WithStatus(PackageVersionStatus&& value) { SetStatus(std::move(value)); return *this;}

  private:

    Aws::String m_version;
    bool m_versionHasBeenSet;

    Aws::String m_revision;
    bool m_revisionHasBeenSet;

    PackageVersionStatus m_status;
    bool m_statusHasBeenSet;
  };

} // namespace Model
} // namespace CodeArtifact
} // namespace Aws
