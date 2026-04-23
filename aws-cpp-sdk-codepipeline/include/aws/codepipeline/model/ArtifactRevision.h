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
#include <aws/core/utils/DateTime.h>
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
   * <p>Represents revision details of an artifact. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codepipeline-2015-07-09/ArtifactRevision">AWS
   * API Reference</a></p>
   */
  class AWS_CODEPIPELINE_API ArtifactRevision
  {
  public:
    ArtifactRevision();
    ArtifactRevision(Aws::Utils::Json::JsonView jsonValue);
    ArtifactRevision& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of an artifact. This name might be system-generated, such as
     * "MyApp", or might be defined by the user when an action is created.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of an artifact. This name might be system-generated, such as
     * "MyApp", or might be defined by the user when an action is created.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of an artifact. This name might be system-generated, such as
     * "MyApp", or might be defined by the user when an action is created.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of an artifact. This name might be system-generated, such as
     * "MyApp", or might be defined by the user when an action is created.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of an artifact. This name might be system-generated, such as
     * "MyApp", or might be defined by the user when an action is created.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of an artifact. This name might be system-generated, such as
     * "MyApp", or might be defined by the user when an action is created.</p>
     */
    inline ArtifactRevision& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of an artifact. This name might be system-generated, such as
     * "MyApp", or might be defined by the user when an action is created.</p>
     */
    inline ArtifactRevision& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of an artifact. This name might be system-generated, such as
     * "MyApp", or might be defined by the user when an action is created.</p>
     */
    inline ArtifactRevision& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The revision ID of the artifact.</p>
     */
    inline const Aws::String& GetRevisionId() const{ return m_revisionId; }

    /**
     * <p>The revision ID of the artifact.</p>
     */
    inline bool RevisionIdHasBeenSet() const { return m_revisionIdHasBeenSet; }

    /**
     * <p>The revision ID of the artifact.</p>
     */
    inline void SetRevisionId(const Aws::String& value) { m_revisionIdHasBeenSet = true; m_revisionId = value; }

    /**
     * <p>The revision ID of the artifact.</p>
     */
    inline void SetRevisionId(Aws::String&& value) { m_revisionIdHasBeenSet = true; m_revisionId = std::move(value); }

    /**
     * <p>The revision ID of the artifact.</p>
     */
    inline void SetRevisionId(const char* value) { m_revisionIdHasBeenSet = true; m_revisionId.assign(value); }

    /**
     * <p>The revision ID of the artifact.</p>
     */
    inline ArtifactRevision& WithRevisionId(const Aws::String& value) { SetRevisionId(value); return *this;}

    /**
     * <p>The revision ID of the artifact.</p>
     */
    inline ArtifactRevision& WithRevisionId(Aws::String&& value) { SetRevisionId(std::move(value)); return *this;}

    /**
     * <p>The revision ID of the artifact.</p>
     */
    inline ArtifactRevision& WithRevisionId(const char* value) { SetRevisionId(value); return *this;}


    /**
     * <p>An additional identifier for a revision, such as a commit date or, for
     * artifacts stored in Amazon S3 buckets, the ETag value.</p>
     */
    inline const Aws::String& GetRevisionChangeIdentifier() const{ return m_revisionChangeIdentifier; }

    /**
     * <p>An additional identifier for a revision, such as a commit date or, for
     * artifacts stored in Amazon S3 buckets, the ETag value.</p>
     */
    inline bool RevisionChangeIdentifierHasBeenSet() const { return m_revisionChangeIdentifierHasBeenSet; }

    /**
     * <p>An additional identifier for a revision, such as a commit date or, for
     * artifacts stored in Amazon S3 buckets, the ETag value.</p>
     */
    inline void SetRevisionChangeIdentifier(const Aws::String& value) { m_revisionChangeIdentifierHasBeenSet = true; m_revisionChangeIdentifier = value; }

    /**
     * <p>An additional identifier for a revision, such as a commit date or, for
     * artifacts stored in Amazon S3 buckets, the ETag value.</p>
     */
    inline void SetRevisionChangeIdentifier(Aws::String&& value) { m_revisionChangeIdentifierHasBeenSet = true; m_revisionChangeIdentifier = std::move(value); }

    /**
     * <p>An additional identifier for a revision, such as a commit date or, for
     * artifacts stored in Amazon S3 buckets, the ETag value.</p>
     */
    inline void SetRevisionChangeIdentifier(const char* value) { m_revisionChangeIdentifierHasBeenSet = true; m_revisionChangeIdentifier.assign(value); }

    /**
     * <p>An additional identifier for a revision, such as a commit date or, for
     * artifacts stored in Amazon S3 buckets, the ETag value.</p>
     */
    inline ArtifactRevision& WithRevisionChangeIdentifier(const Aws::String& value) { SetRevisionChangeIdentifier(value); return *this;}

    /**
     * <p>An additional identifier for a revision, such as a commit date or, for
     * artifacts stored in Amazon S3 buckets, the ETag value.</p>
     */
    inline ArtifactRevision& WithRevisionChangeIdentifier(Aws::String&& value) { SetRevisionChangeIdentifier(std::move(value)); return *this;}

    /**
     * <p>An additional identifier for a revision, such as a commit date or, for
     * artifacts stored in Amazon S3 buckets, the ETag value.</p>
     */
    inline ArtifactRevision& WithRevisionChangeIdentifier(const char* value) { SetRevisionChangeIdentifier(value); return *this;}


    /**
     * <p>Summary information about the most recent revision of the artifact. For
     * GitHub and AWS CodeCommit repositories, the commit message. For Amazon S3
     * buckets or actions, the user-provided content of a
     * <code>codepipeline-artifact-revision-summary</code> key specified in the object
     * metadata.</p>
     */
    inline const Aws::String& GetRevisionSummary() const{ return m_revisionSummary; }

    /**
     * <p>Summary information about the most recent revision of the artifact. For
     * GitHub and AWS CodeCommit repositories, the commit message. For Amazon S3
     * buckets or actions, the user-provided content of a
     * <code>codepipeline-artifact-revision-summary</code> key specified in the object
     * metadata.</p>
     */
    inline bool RevisionSummaryHasBeenSet() const { return m_revisionSummaryHasBeenSet; }

    /**
     * <p>Summary information about the most recent revision of the artifact. For
     * GitHub and AWS CodeCommit repositories, the commit message. For Amazon S3
     * buckets or actions, the user-provided content of a
     * <code>codepipeline-artifact-revision-summary</code> key specified in the object
     * metadata.</p>
     */
    inline void SetRevisionSummary(const Aws::String& value) { m_revisionSummaryHasBeenSet = true; m_revisionSummary = value; }

    /**
     * <p>Summary information about the most recent revision of the artifact. For
     * GitHub and AWS CodeCommit repositories, the commit message. For Amazon S3
     * buckets or actions, the user-provided content of a
     * <code>codepipeline-artifact-revision-summary</code> key specified in the object
     * metadata.</p>
     */
    inline void SetRevisionSummary(Aws::String&& value) { m_revisionSummaryHasBeenSet = true; m_revisionSummary = std::move(value); }

    /**
     * <p>Summary information about the most recent revision of the artifact. For
     * GitHub and AWS CodeCommit repositories, the commit message. For Amazon S3
     * buckets or actions, the user-provided content of a
     * <code>codepipeline-artifact-revision-summary</code> key specified in the object
     * metadata.</p>
     */
    inline void SetRevisionSummary(const char* value) { m_revisionSummaryHasBeenSet = true; m_revisionSummary.assign(value); }

    /**
     * <p>Summary information about the most recent revision of the artifact. For
     * GitHub and AWS CodeCommit repositories, the commit message. For Amazon S3
     * buckets or actions, the user-provided content of a
     * <code>codepipeline-artifact-revision-summary</code> key specified in the object
     * metadata.</p>
     */
    inline ArtifactRevision& WithRevisionSummary(const Aws::String& value) { SetRevisionSummary(value); return *this;}

    /**
     * <p>Summary information about the most recent revision of the artifact. For
     * GitHub and AWS CodeCommit repositories, the commit message. For Amazon S3
     * buckets or actions, the user-provided content of a
     * <code>codepipeline-artifact-revision-summary</code> key specified in the object
     * metadata.</p>
     */
    inline ArtifactRevision& WithRevisionSummary(Aws::String&& value) { SetRevisionSummary(std::move(value)); return *this;}

    /**
     * <p>Summary information about the most recent revision of the artifact. For
     * GitHub and AWS CodeCommit repositories, the commit message. For Amazon S3
     * buckets or actions, the user-provided content of a
     * <code>codepipeline-artifact-revision-summary</code> key specified in the object
     * metadata.</p>
     */
    inline ArtifactRevision& WithRevisionSummary(const char* value) { SetRevisionSummary(value); return *this;}


    /**
     * <p>The date and time when the most recent revision of the artifact was created,
     * in timestamp format.</p>
     */
    inline const Aws::Utils::DateTime& GetCreated() const{ return m_created; }

    /**
     * <p>The date and time when the most recent revision of the artifact was created,
     * in timestamp format.</p>
     */
    inline bool CreatedHasBeenSet() const { return m_createdHasBeenSet; }

    /**
     * <p>The date and time when the most recent revision of the artifact was created,
     * in timestamp format.</p>
     */
    inline void SetCreated(const Aws::Utils::DateTime& value) { m_createdHasBeenSet = true; m_created = value; }

    /**
     * <p>The date and time when the most recent revision of the artifact was created,
     * in timestamp format.</p>
     */
    inline void SetCreated(Aws::Utils::DateTime&& value) { m_createdHasBeenSet = true; m_created = std::move(value); }

    /**
     * <p>The date and time when the most recent revision of the artifact was created,
     * in timestamp format.</p>
     */
    inline ArtifactRevision& WithCreated(const Aws::Utils::DateTime& value) { SetCreated(value); return *this;}

    /**
     * <p>The date and time when the most recent revision of the artifact was created,
     * in timestamp format.</p>
     */
    inline ArtifactRevision& WithCreated(Aws::Utils::DateTime&& value) { SetCreated(std::move(value)); return *this;}


    /**
     * <p>The commit ID for the artifact revision. For artifacts stored in GitHub or
     * AWS CodeCommit repositories, the commit ID is linked to a commit details
     * page.</p>
     */
    inline const Aws::String& GetRevisionUrl() const{ return m_revisionUrl; }

    /**
     * <p>The commit ID for the artifact revision. For artifacts stored in GitHub or
     * AWS CodeCommit repositories, the commit ID is linked to a commit details
     * page.</p>
     */
    inline bool RevisionUrlHasBeenSet() const { return m_revisionUrlHasBeenSet; }

    /**
     * <p>The commit ID for the artifact revision. For artifacts stored in GitHub or
     * AWS CodeCommit repositories, the commit ID is linked to a commit details
     * page.</p>
     */
    inline void SetRevisionUrl(const Aws::String& value) { m_revisionUrlHasBeenSet = true; m_revisionUrl = value; }

    /**
     * <p>The commit ID for the artifact revision. For artifacts stored in GitHub or
     * AWS CodeCommit repositories, the commit ID is linked to a commit details
     * page.</p>
     */
    inline void SetRevisionUrl(Aws::String&& value) { m_revisionUrlHasBeenSet = true; m_revisionUrl = std::move(value); }

    /**
     * <p>The commit ID for the artifact revision. For artifacts stored in GitHub or
     * AWS CodeCommit repositories, the commit ID is linked to a commit details
     * page.</p>
     */
    inline void SetRevisionUrl(const char* value) { m_revisionUrlHasBeenSet = true; m_revisionUrl.assign(value); }

    /**
     * <p>The commit ID for the artifact revision. For artifacts stored in GitHub or
     * AWS CodeCommit repositories, the commit ID is linked to a commit details
     * page.</p>
     */
    inline ArtifactRevision& WithRevisionUrl(const Aws::String& value) { SetRevisionUrl(value); return *this;}

    /**
     * <p>The commit ID for the artifact revision. For artifacts stored in GitHub or
     * AWS CodeCommit repositories, the commit ID is linked to a commit details
     * page.</p>
     */
    inline ArtifactRevision& WithRevisionUrl(Aws::String&& value) { SetRevisionUrl(std::move(value)); return *this;}

    /**
     * <p>The commit ID for the artifact revision. For artifacts stored in GitHub or
     * AWS CodeCommit repositories, the commit ID is linked to a commit details
     * page.</p>
     */
    inline ArtifactRevision& WithRevisionUrl(const char* value) { SetRevisionUrl(value); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet;

    Aws::String m_revisionId;
    bool m_revisionIdHasBeenSet;

    Aws::String m_revisionChangeIdentifier;
    bool m_revisionChangeIdentifierHasBeenSet;

    Aws::String m_revisionSummary;
    bool m_revisionSummaryHasBeenSet;

    Aws::Utils::DateTime m_created;
    bool m_createdHasBeenSet;

    Aws::String m_revisionUrl;
    bool m_revisionUrlHasBeenSet;
  };

} // namespace Model
} // namespace CodePipeline
} // namespace Aws
