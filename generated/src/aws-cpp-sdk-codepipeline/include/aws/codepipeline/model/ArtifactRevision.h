/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class ArtifactRevision
  {
  public:
    AWS_CODEPIPELINE_API ArtifactRevision() = default;
    AWS_CODEPIPELINE_API ArtifactRevision(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEPIPELINE_API ArtifactRevision& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEPIPELINE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of an artifact. This name might be system-generated, such as
     * "MyApp", or defined by the user when an action is created.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    ArtifactRevision& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The revision ID of the artifact.</p>
     */
    inline const Aws::String& GetRevisionId() const { return m_revisionId; }
    inline bool RevisionIdHasBeenSet() const { return m_revisionIdHasBeenSet; }
    template<typename RevisionIdT = Aws::String>
    void SetRevisionId(RevisionIdT&& value) { m_revisionIdHasBeenSet = true; m_revisionId = std::forward<RevisionIdT>(value); }
    template<typename RevisionIdT = Aws::String>
    ArtifactRevision& WithRevisionId(RevisionIdT&& value) { SetRevisionId(std::forward<RevisionIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An additional identifier for a revision, such as a commit date or, for
     * artifacts stored in Amazon S3 buckets, the ETag value.</p>
     */
    inline const Aws::String& GetRevisionChangeIdentifier() const { return m_revisionChangeIdentifier; }
    inline bool RevisionChangeIdentifierHasBeenSet() const { return m_revisionChangeIdentifierHasBeenSet; }
    template<typename RevisionChangeIdentifierT = Aws::String>
    void SetRevisionChangeIdentifier(RevisionChangeIdentifierT&& value) { m_revisionChangeIdentifierHasBeenSet = true; m_revisionChangeIdentifier = std::forward<RevisionChangeIdentifierT>(value); }
    template<typename RevisionChangeIdentifierT = Aws::String>
    ArtifactRevision& WithRevisionChangeIdentifier(RevisionChangeIdentifierT&& value) { SetRevisionChangeIdentifier(std::forward<RevisionChangeIdentifierT>(value)); return *this;}
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
    ArtifactRevision& WithRevisionSummary(RevisionSummaryT&& value) { SetRevisionSummary(std::forward<RevisionSummaryT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time when the most recent revision of the artifact was created,
     * in timestamp format.</p>
     */
    inline const Aws::Utils::DateTime& GetCreated() const { return m_created; }
    inline bool CreatedHasBeenSet() const { return m_createdHasBeenSet; }
    template<typename CreatedT = Aws::Utils::DateTime>
    void SetCreated(CreatedT&& value) { m_createdHasBeenSet = true; m_created = std::forward<CreatedT>(value); }
    template<typename CreatedT = Aws::Utils::DateTime>
    ArtifactRevision& WithCreated(CreatedT&& value) { SetCreated(std::forward<CreatedT>(value)); return *this;}
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
    ArtifactRevision& WithRevisionUrl(RevisionUrlT&& value) { SetRevisionUrl(std::forward<RevisionUrlT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_revisionId;
    bool m_revisionIdHasBeenSet = false;

    Aws::String m_revisionChangeIdentifier;
    bool m_revisionChangeIdentifierHasBeenSet = false;

    Aws::String m_revisionSummary;
    bool m_revisionSummaryHasBeenSet = false;

    Aws::Utils::DateTime m_created{};
    bool m_createdHasBeenSet = false;

    Aws::String m_revisionUrl;
    bool m_revisionUrlHasBeenSet = false;
  };

} // namespace Model
} // namespace CodePipeline
} // namespace Aws
