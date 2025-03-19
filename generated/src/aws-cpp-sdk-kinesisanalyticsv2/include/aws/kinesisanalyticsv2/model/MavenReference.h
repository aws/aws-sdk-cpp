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
    AWS_KINESISANALYTICSV2_API MavenReference() = default;
    AWS_KINESISANALYTICSV2_API MavenReference(Aws::Utils::Json::JsonView jsonValue);
    AWS_KINESISANALYTICSV2_API MavenReference& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KINESISANALYTICSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The group ID of the Maven reference.</p>
     */
    inline const Aws::String& GetGroupId() const { return m_groupId; }
    inline bool GroupIdHasBeenSet() const { return m_groupIdHasBeenSet; }
    template<typename GroupIdT = Aws::String>
    void SetGroupId(GroupIdT&& value) { m_groupIdHasBeenSet = true; m_groupId = std::forward<GroupIdT>(value); }
    template<typename GroupIdT = Aws::String>
    MavenReference& WithGroupId(GroupIdT&& value) { SetGroupId(std::forward<GroupIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The artifact ID of the Maven reference.</p>
     */
    inline const Aws::String& GetArtifactId() const { return m_artifactId; }
    inline bool ArtifactIdHasBeenSet() const { return m_artifactIdHasBeenSet; }
    template<typename ArtifactIdT = Aws::String>
    void SetArtifactId(ArtifactIdT&& value) { m_artifactIdHasBeenSet = true; m_artifactId = std::forward<ArtifactIdT>(value); }
    template<typename ArtifactIdT = Aws::String>
    MavenReference& WithArtifactId(ArtifactIdT&& value) { SetArtifactId(std::forward<ArtifactIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the Maven reference.</p>
     */
    inline const Aws::String& GetVersion() const { return m_version; }
    inline bool VersionHasBeenSet() const { return m_versionHasBeenSet; }
    template<typename VersionT = Aws::String>
    void SetVersion(VersionT&& value) { m_versionHasBeenSet = true; m_version = std::forward<VersionT>(value); }
    template<typename VersionT = Aws::String>
    MavenReference& WithVersion(VersionT&& value) { SetVersion(std::forward<VersionT>(value)); return *this;}
    ///@}
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
