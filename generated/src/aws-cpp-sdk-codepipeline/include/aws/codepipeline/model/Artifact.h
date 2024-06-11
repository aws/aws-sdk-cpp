/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codepipeline/CodePipeline_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/codepipeline/model/ArtifactLocation.h>
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
namespace CodePipeline
{
namespace Model
{

  /**
   * <p>Artifacts are the files that are worked on by actions in the pipeline. See
   * the action configuration for each action for details about artifact parameters.
   * For example, the S3 source action artifact is a file name (or file path), and
   * the files are generally provided as a ZIP file. Example artifact name:
   * SampleApp_Windows.zip</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codepipeline-2015-07-09/Artifact">AWS
   * API Reference</a></p>
   */
  class Artifact
  {
  public:
    AWS_CODEPIPELINE_API Artifact();
    AWS_CODEPIPELINE_API Artifact(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEPIPELINE_API Artifact& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEPIPELINE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The artifact's name.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline Artifact& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline Artifact& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline Artifact& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The artifact's revision ID. Depending on the type of object, this could be a
     * commit ID (GitHub) or a revision ID (Amazon S3).</p>
     */
    inline const Aws::String& GetRevision() const{ return m_revision; }
    inline bool RevisionHasBeenSet() const { return m_revisionHasBeenSet; }
    inline void SetRevision(const Aws::String& value) { m_revisionHasBeenSet = true; m_revision = value; }
    inline void SetRevision(Aws::String&& value) { m_revisionHasBeenSet = true; m_revision = std::move(value); }
    inline void SetRevision(const char* value) { m_revisionHasBeenSet = true; m_revision.assign(value); }
    inline Artifact& WithRevision(const Aws::String& value) { SetRevision(value); return *this;}
    inline Artifact& WithRevision(Aws::String&& value) { SetRevision(std::move(value)); return *this;}
    inline Artifact& WithRevision(const char* value) { SetRevision(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The location of an artifact.</p>
     */
    inline const ArtifactLocation& GetLocation() const{ return m_location; }
    inline bool LocationHasBeenSet() const { return m_locationHasBeenSet; }
    inline void SetLocation(const ArtifactLocation& value) { m_locationHasBeenSet = true; m_location = value; }
    inline void SetLocation(ArtifactLocation&& value) { m_locationHasBeenSet = true; m_location = std::move(value); }
    inline Artifact& WithLocation(const ArtifactLocation& value) { SetLocation(value); return *this;}
    inline Artifact& WithLocation(ArtifactLocation&& value) { SetLocation(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_revision;
    bool m_revisionHasBeenSet = false;

    ArtifactLocation m_location;
    bool m_locationHasBeenSet = false;
  };

} // namespace Model
} // namespace CodePipeline
} // namespace Aws
