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
   * <p>Information about the version (or revision) of a source artifact that
   * initiated a pipeline execution.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codepipeline-2015-07-09/SourceRevision">AWS
   * API Reference</a></p>
   */
  class AWS_CODEPIPELINE_API SourceRevision
  {
  public:
    SourceRevision();
    SourceRevision(Aws::Utils::Json::JsonView jsonValue);
    SourceRevision& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the action that processed the revision to the source
     * artifact.</p>
     */
    inline const Aws::String& GetActionName() const{ return m_actionName; }

    /**
     * <p>The name of the action that processed the revision to the source
     * artifact.</p>
     */
    inline bool ActionNameHasBeenSet() const { return m_actionNameHasBeenSet; }

    /**
     * <p>The name of the action that processed the revision to the source
     * artifact.</p>
     */
    inline void SetActionName(const Aws::String& value) { m_actionNameHasBeenSet = true; m_actionName = value; }

    /**
     * <p>The name of the action that processed the revision to the source
     * artifact.</p>
     */
    inline void SetActionName(Aws::String&& value) { m_actionNameHasBeenSet = true; m_actionName = std::move(value); }

    /**
     * <p>The name of the action that processed the revision to the source
     * artifact.</p>
     */
    inline void SetActionName(const char* value) { m_actionNameHasBeenSet = true; m_actionName.assign(value); }

    /**
     * <p>The name of the action that processed the revision to the source
     * artifact.</p>
     */
    inline SourceRevision& WithActionName(const Aws::String& value) { SetActionName(value); return *this;}

    /**
     * <p>The name of the action that processed the revision to the source
     * artifact.</p>
     */
    inline SourceRevision& WithActionName(Aws::String&& value) { SetActionName(std::move(value)); return *this;}

    /**
     * <p>The name of the action that processed the revision to the source
     * artifact.</p>
     */
    inline SourceRevision& WithActionName(const char* value) { SetActionName(value); return *this;}


    /**
     * <p>The system-generated unique ID that identifies the revision number of the
     * artifact.</p>
     */
    inline const Aws::String& GetRevisionId() const{ return m_revisionId; }

    /**
     * <p>The system-generated unique ID that identifies the revision number of the
     * artifact.</p>
     */
    inline bool RevisionIdHasBeenSet() const { return m_revisionIdHasBeenSet; }

    /**
     * <p>The system-generated unique ID that identifies the revision number of the
     * artifact.</p>
     */
    inline void SetRevisionId(const Aws::String& value) { m_revisionIdHasBeenSet = true; m_revisionId = value; }

    /**
     * <p>The system-generated unique ID that identifies the revision number of the
     * artifact.</p>
     */
    inline void SetRevisionId(Aws::String&& value) { m_revisionIdHasBeenSet = true; m_revisionId = std::move(value); }

    /**
     * <p>The system-generated unique ID that identifies the revision number of the
     * artifact.</p>
     */
    inline void SetRevisionId(const char* value) { m_revisionIdHasBeenSet = true; m_revisionId.assign(value); }

    /**
     * <p>The system-generated unique ID that identifies the revision number of the
     * artifact.</p>
     */
    inline SourceRevision& WithRevisionId(const Aws::String& value) { SetRevisionId(value); return *this;}

    /**
     * <p>The system-generated unique ID that identifies the revision number of the
     * artifact.</p>
     */
    inline SourceRevision& WithRevisionId(Aws::String&& value) { SetRevisionId(std::move(value)); return *this;}

    /**
     * <p>The system-generated unique ID that identifies the revision number of the
     * artifact.</p>
     */
    inline SourceRevision& WithRevisionId(const char* value) { SetRevisionId(value); return *this;}


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
    inline SourceRevision& WithRevisionSummary(const Aws::String& value) { SetRevisionSummary(value); return *this;}

    /**
     * <p>Summary information about the most recent revision of the artifact. For
     * GitHub and AWS CodeCommit repositories, the commit message. For Amazon S3
     * buckets or actions, the user-provided content of a
     * <code>codepipeline-artifact-revision-summary</code> key specified in the object
     * metadata.</p>
     */
    inline SourceRevision& WithRevisionSummary(Aws::String&& value) { SetRevisionSummary(std::move(value)); return *this;}

    /**
     * <p>Summary information about the most recent revision of the artifact. For
     * GitHub and AWS CodeCommit repositories, the commit message. For Amazon S3
     * buckets or actions, the user-provided content of a
     * <code>codepipeline-artifact-revision-summary</code> key specified in the object
     * metadata.</p>
     */
    inline SourceRevision& WithRevisionSummary(const char* value) { SetRevisionSummary(value); return *this;}


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
    inline SourceRevision& WithRevisionUrl(const Aws::String& value) { SetRevisionUrl(value); return *this;}

    /**
     * <p>The commit ID for the artifact revision. For artifacts stored in GitHub or
     * AWS CodeCommit repositories, the commit ID is linked to a commit details
     * page.</p>
     */
    inline SourceRevision& WithRevisionUrl(Aws::String&& value) { SetRevisionUrl(std::move(value)); return *this;}

    /**
     * <p>The commit ID for the artifact revision. For artifacts stored in GitHub or
     * AWS CodeCommit repositories, the commit ID is linked to a commit details
     * page.</p>
     */
    inline SourceRevision& WithRevisionUrl(const char* value) { SetRevisionUrl(value); return *this;}

  private:

    Aws::String m_actionName;
    bool m_actionNameHasBeenSet;

    Aws::String m_revisionId;
    bool m_revisionIdHasBeenSet;

    Aws::String m_revisionSummary;
    bool m_revisionSummaryHasBeenSet;

    Aws::String m_revisionUrl;
    bool m_revisionUrlHasBeenSet;
  };

} // namespace Model
} // namespace CodePipeline
} // namespace Aws
