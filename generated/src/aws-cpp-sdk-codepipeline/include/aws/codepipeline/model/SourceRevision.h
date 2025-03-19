/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class SourceRevision
  {
  public:
    AWS_CODEPIPELINE_API SourceRevision() = default;
    AWS_CODEPIPELINE_API SourceRevision(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEPIPELINE_API SourceRevision& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEPIPELINE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the action that processed the revision to the source
     * artifact.</p>
     */
    inline const Aws::String& GetActionName() const { return m_actionName; }
    inline bool ActionNameHasBeenSet() const { return m_actionNameHasBeenSet; }
    template<typename ActionNameT = Aws::String>
    void SetActionName(ActionNameT&& value) { m_actionNameHasBeenSet = true; m_actionName = std::forward<ActionNameT>(value); }
    template<typename ActionNameT = Aws::String>
    SourceRevision& WithActionName(ActionNameT&& value) { SetActionName(std::forward<ActionNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The system-generated unique ID that identifies the revision number of the
     * artifact.</p>
     */
    inline const Aws::String& GetRevisionId() const { return m_revisionId; }
    inline bool RevisionIdHasBeenSet() const { return m_revisionIdHasBeenSet; }
    template<typename RevisionIdT = Aws::String>
    void SetRevisionId(RevisionIdT&& value) { m_revisionIdHasBeenSet = true; m_revisionId = std::forward<RevisionIdT>(value); }
    template<typename RevisionIdT = Aws::String>
    SourceRevision& WithRevisionId(RevisionIdT&& value) { SetRevisionId(std::forward<RevisionIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Summary information about the most recent revision of the artifact. For
     * GitHub and CodeCommit repositories, the commit message. For Amazon S3 buckets or
     * actions, the user-provided content of a
     * <code>codepipeline-artifact-revision-summary</code> key specified in the object
     * metadata.</p>
     */
    inline const Aws::String& GetRevisionSummary() const { return m_revisionSummary; }
    inline bool RevisionSummaryHasBeenSet() const { return m_revisionSummaryHasBeenSet; }
    template<typename RevisionSummaryT = Aws::String>
    void SetRevisionSummary(RevisionSummaryT&& value) { m_revisionSummaryHasBeenSet = true; m_revisionSummary = std::forward<RevisionSummaryT>(value); }
    template<typename RevisionSummaryT = Aws::String>
    SourceRevision& WithRevisionSummary(RevisionSummaryT&& value) { SetRevisionSummary(std::forward<RevisionSummaryT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The commit ID for the artifact revision. For artifacts stored in GitHub or
     * CodeCommit repositories, the commit ID is linked to a commit details page.</p>
     */
    inline const Aws::String& GetRevisionUrl() const { return m_revisionUrl; }
    inline bool RevisionUrlHasBeenSet() const { return m_revisionUrlHasBeenSet; }
    template<typename RevisionUrlT = Aws::String>
    void SetRevisionUrl(RevisionUrlT&& value) { m_revisionUrlHasBeenSet = true; m_revisionUrl = std::forward<RevisionUrlT>(value); }
    template<typename RevisionUrlT = Aws::String>
    SourceRevision& WithRevisionUrl(RevisionUrlT&& value) { SetRevisionUrl(std::forward<RevisionUrlT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_actionName;
    bool m_actionNameHasBeenSet = false;

    Aws::String m_revisionId;
    bool m_revisionIdHasBeenSet = false;

    Aws::String m_revisionSummary;
    bool m_revisionSummaryHasBeenSet = false;

    Aws::String m_revisionUrl;
    bool m_revisionUrlHasBeenSet = false;
  };

} // namespace Model
} // namespace CodePipeline
} // namespace Aws
