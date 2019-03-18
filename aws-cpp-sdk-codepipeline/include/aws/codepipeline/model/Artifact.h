/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
   * <p>Represents information about an artifact that will be worked upon by actions
   * in the pipeline.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codepipeline-2015-07-09/Artifact">AWS
   * API Reference</a></p>
   */
  class AWS_CODEPIPELINE_API Artifact
  {
  public:
    Artifact();
    Artifact(Aws::Utils::Json::JsonView jsonValue);
    Artifact& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The artifact's name.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The artifact's name.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The artifact's name.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The artifact's name.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The artifact's name.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The artifact's name.</p>
     */
    inline Artifact& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The artifact's name.</p>
     */
    inline Artifact& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The artifact's name.</p>
     */
    inline Artifact& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The artifact's revision ID. Depending on the type of object, this could be a
     * commit ID (GitHub) or a revision ID (Amazon S3).</p>
     */
    inline const Aws::String& GetRevision() const{ return m_revision; }

    /**
     * <p>The artifact's revision ID. Depending on the type of object, this could be a
     * commit ID (GitHub) or a revision ID (Amazon S3).</p>
     */
    inline bool RevisionHasBeenSet() const { return m_revisionHasBeenSet; }

    /**
     * <p>The artifact's revision ID. Depending on the type of object, this could be a
     * commit ID (GitHub) or a revision ID (Amazon S3).</p>
     */
    inline void SetRevision(const Aws::String& value) { m_revisionHasBeenSet = true; m_revision = value; }

    /**
     * <p>The artifact's revision ID. Depending on the type of object, this could be a
     * commit ID (GitHub) or a revision ID (Amazon S3).</p>
     */
    inline void SetRevision(Aws::String&& value) { m_revisionHasBeenSet = true; m_revision = std::move(value); }

    /**
     * <p>The artifact's revision ID. Depending on the type of object, this could be a
     * commit ID (GitHub) or a revision ID (Amazon S3).</p>
     */
    inline void SetRevision(const char* value) { m_revisionHasBeenSet = true; m_revision.assign(value); }

    /**
     * <p>The artifact's revision ID. Depending on the type of object, this could be a
     * commit ID (GitHub) or a revision ID (Amazon S3).</p>
     */
    inline Artifact& WithRevision(const Aws::String& value) { SetRevision(value); return *this;}

    /**
     * <p>The artifact's revision ID. Depending on the type of object, this could be a
     * commit ID (GitHub) or a revision ID (Amazon S3).</p>
     */
    inline Artifact& WithRevision(Aws::String&& value) { SetRevision(std::move(value)); return *this;}

    /**
     * <p>The artifact's revision ID. Depending on the type of object, this could be a
     * commit ID (GitHub) or a revision ID (Amazon S3).</p>
     */
    inline Artifact& WithRevision(const char* value) { SetRevision(value); return *this;}


    /**
     * <p>The location of an artifact.</p>
     */
    inline const ArtifactLocation& GetLocation() const{ return m_location; }

    /**
     * <p>The location of an artifact.</p>
     */
    inline bool LocationHasBeenSet() const { return m_locationHasBeenSet; }

    /**
     * <p>The location of an artifact.</p>
     */
    inline void SetLocation(const ArtifactLocation& value) { m_locationHasBeenSet = true; m_location = value; }

    /**
     * <p>The location of an artifact.</p>
     */
    inline void SetLocation(ArtifactLocation&& value) { m_locationHasBeenSet = true; m_location = std::move(value); }

    /**
     * <p>The location of an artifact.</p>
     */
    inline Artifact& WithLocation(const ArtifactLocation& value) { SetLocation(value); return *this;}

    /**
     * <p>The location of an artifact.</p>
     */
    inline Artifact& WithLocation(ArtifactLocation&& value) { SetLocation(std::move(value)); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet;

    Aws::String m_revision;
    bool m_revisionHasBeenSet;

    ArtifactLocation m_location;
    bool m_locationHasBeenSet;
  };

} // namespace Model
} // namespace CodePipeline
} // namespace Aws
