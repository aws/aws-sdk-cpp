/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kinesisanalyticsv2/KinesisAnalyticsV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace KinesisAnalyticsV2
{
namespace Model
{

  /**
   * <p>The information required to specify a Maven reference. You can use Maven
   * references to specify dependency JAR files.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalyticsv2-2018-05-23/MavenReference">AWS
   * API Reference</a></p>
   */
  class MavenReference
  {
  public:
    AWS_KINESISANALYTICSV2_API MavenReference();
    AWS_KINESISANALYTICSV2_API MavenReference(Aws::Utils::Json::JsonView jsonValue);
    AWS_KINESISANALYTICSV2_API MavenReference& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KINESISANALYTICSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The group ID of the Maven reference.</p>
     */
    inline const Aws::String& GetGroupId() const{ return m_groupId; }

    /**
     * <p>The group ID of the Maven reference.</p>
     */
    inline bool GroupIdHasBeenSet() const { return m_groupIdHasBeenSet; }

    /**
     * <p>The group ID of the Maven reference.</p>
     */
    inline void SetGroupId(const Aws::String& value) { m_groupIdHasBeenSet = true; m_groupId = value; }

    /**
     * <p>The group ID of the Maven reference.</p>
     */
    inline void SetGroupId(Aws::String&& value) { m_groupIdHasBeenSet = true; m_groupId = std::move(value); }

    /**
     * <p>The group ID of the Maven reference.</p>
     */
    inline void SetGroupId(const char* value) { m_groupIdHasBeenSet = true; m_groupId.assign(value); }

    /**
     * <p>The group ID of the Maven reference.</p>
     */
    inline MavenReference& WithGroupId(const Aws::String& value) { SetGroupId(value); return *this;}

    /**
     * <p>The group ID of the Maven reference.</p>
     */
    inline MavenReference& WithGroupId(Aws::String&& value) { SetGroupId(std::move(value)); return *this;}

    /**
     * <p>The group ID of the Maven reference.</p>
     */
    inline MavenReference& WithGroupId(const char* value) { SetGroupId(value); return *this;}


    /**
     * <p>The artifact ID of the Maven reference.</p>
     */
    inline const Aws::String& GetArtifactId() const{ return m_artifactId; }

    /**
     * <p>The artifact ID of the Maven reference.</p>
     */
    inline bool ArtifactIdHasBeenSet() const { return m_artifactIdHasBeenSet; }

    /**
     * <p>The artifact ID of the Maven reference.</p>
     */
    inline void SetArtifactId(const Aws::String& value) { m_artifactIdHasBeenSet = true; m_artifactId = value; }

    /**
     * <p>The artifact ID of the Maven reference.</p>
     */
    inline void SetArtifactId(Aws::String&& value) { m_artifactIdHasBeenSet = true; m_artifactId = std::move(value); }

    /**
     * <p>The artifact ID of the Maven reference.</p>
     */
    inline void SetArtifactId(const char* value) { m_artifactIdHasBeenSet = true; m_artifactId.assign(value); }

    /**
     * <p>The artifact ID of the Maven reference.</p>
     */
    inline MavenReference& WithArtifactId(const Aws::String& value) { SetArtifactId(value); return *this;}

    /**
     * <p>The artifact ID of the Maven reference.</p>
     */
    inline MavenReference& WithArtifactId(Aws::String&& value) { SetArtifactId(std::move(value)); return *this;}

    /**
     * <p>The artifact ID of the Maven reference.</p>
     */
    inline MavenReference& WithArtifactId(const char* value) { SetArtifactId(value); return *this;}


    /**
     * <p>The version of the Maven reference.</p>
     */
    inline const Aws::String& GetVersion() const{ return m_version; }

    /**
     * <p>The version of the Maven reference.</p>
     */
    inline bool VersionHasBeenSet() const { return m_versionHasBeenSet; }

    /**
     * <p>The version of the Maven reference.</p>
     */
    inline void SetVersion(const Aws::String& value) { m_versionHasBeenSet = true; m_version = value; }

    /**
     * <p>The version of the Maven reference.</p>
     */
    inline void SetVersion(Aws::String&& value) { m_versionHasBeenSet = true; m_version = std::move(value); }

    /**
     * <p>The version of the Maven reference.</p>
     */
    inline void SetVersion(const char* value) { m_versionHasBeenSet = true; m_version.assign(value); }

    /**
     * <p>The version of the Maven reference.</p>
     */
    inline MavenReference& WithVersion(const Aws::String& value) { SetVersion(value); return *this;}

    /**
     * <p>The version of the Maven reference.</p>
     */
    inline MavenReference& WithVersion(Aws::String&& value) { SetVersion(std::move(value)); return *this;}

    /**
     * <p>The version of the Maven reference.</p>
     */
    inline MavenReference& WithVersion(const char* value) { SetVersion(value); return *this;}

  private:

    Aws::String m_groupId;
    bool m_groupIdHasBeenSet = false;

    Aws::String m_artifactId;
    bool m_artifactIdHasBeenSet = false;

    Aws::String m_version;
    bool m_versionHasBeenSet = false;
  };

} // namespace Model
} // namespace KinesisAnalyticsV2
} // namespace Aws
