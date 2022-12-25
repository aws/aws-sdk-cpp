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
   * <p> Contains the revision and status of a package version. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codeartifact-2018-09-22/SuccessfulPackageVersionInfo">AWS
   * API Reference</a></p>
   */
  class SuccessfulPackageVersionInfo
  {
  public:
    AWS_CODEARTIFACT_API SuccessfulPackageVersionInfo();
    AWS_CODEARTIFACT_API SuccessfulPackageVersionInfo(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEARTIFACT_API SuccessfulPackageVersionInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEARTIFACT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> The revision of a package version. </p>
     */
    inline const Aws::String& GetRevision() const{ return m_revision; }

    /**
     * <p> The revision of a package version. </p>
     */
    inline bool RevisionHasBeenSet() const { return m_revisionHasBeenSet; }

    /**
     * <p> The revision of a package version. </p>
     */
    inline void SetRevision(const Aws::String& value) { m_revisionHasBeenSet = true; m_revision = value; }

    /**
     * <p> The revision of a package version. </p>
     */
    inline void SetRevision(Aws::String&& value) { m_revisionHasBeenSet = true; m_revision = std::move(value); }

    /**
     * <p> The revision of a package version. </p>
     */
    inline void SetRevision(const char* value) { m_revisionHasBeenSet = true; m_revision.assign(value); }

    /**
     * <p> The revision of a package version. </p>
     */
    inline SuccessfulPackageVersionInfo& WithRevision(const Aws::String& value) { SetRevision(value); return *this;}

    /**
     * <p> The revision of a package version. </p>
     */
    inline SuccessfulPackageVersionInfo& WithRevision(Aws::String&& value) { SetRevision(std::move(value)); return *this;}

    /**
     * <p> The revision of a package version. </p>
     */
    inline SuccessfulPackageVersionInfo& WithRevision(const char* value) { SetRevision(value); return *this;}


    /**
     * <p> The status of a package version. </p>
     */
    inline const PackageVersionStatus& GetStatus() const{ return m_status; }

    /**
     * <p> The status of a package version. </p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p> The status of a package version. </p>
     */
    inline void SetStatus(const PackageVersionStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p> The status of a package version. </p>
     */
    inline void SetStatus(PackageVersionStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p> The status of a package version. </p>
     */
    inline SuccessfulPackageVersionInfo& WithStatus(const PackageVersionStatus& value) { SetStatus(value); return *this;}

    /**
     * <p> The status of a package version. </p>
     */
    inline SuccessfulPackageVersionInfo& WithStatus(PackageVersionStatus&& value) { SetStatus(std::move(value)); return *this;}

  private:

    Aws::String m_revision;
    bool m_revisionHasBeenSet = false;

    PackageVersionStatus m_status;
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeArtifact
} // namespace Aws
