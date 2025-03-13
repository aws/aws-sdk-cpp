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
   * <p>Represents information about a current revision.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codepipeline-2015-07-09/CurrentRevision">AWS
   * API Reference</a></p>
   */
  class CurrentRevision
  {
  public:
    AWS_CODEPIPELINE_API CurrentRevision() = default;
    AWS_CODEPIPELINE_API CurrentRevision(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEPIPELINE_API CurrentRevision& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEPIPELINE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The revision ID of the current version of an artifact.</p>
     */
    inline const Aws::String& GetRevision() const { return m_revision; }
    inline bool RevisionHasBeenSet() const { return m_revisionHasBeenSet; }
    template<typename RevisionT = Aws::String>
    void SetRevision(RevisionT&& value) { m_revisionHasBeenSet = true; m_revision = std::forward<RevisionT>(value); }
    template<typename RevisionT = Aws::String>
    CurrentRevision& WithRevision(RevisionT&& value) { SetRevision(std::forward<RevisionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The change identifier for the current revision.</p>
     */
    inline const Aws::String& GetChangeIdentifier() const { return m_changeIdentifier; }
    inline bool ChangeIdentifierHasBeenSet() const { return m_changeIdentifierHasBeenSet; }
    template<typename ChangeIdentifierT = Aws::String>
    void SetChangeIdentifier(ChangeIdentifierT&& value) { m_changeIdentifierHasBeenSet = true; m_changeIdentifier = std::forward<ChangeIdentifierT>(value); }
    template<typename ChangeIdentifierT = Aws::String>
    CurrentRevision& WithChangeIdentifier(ChangeIdentifierT&& value) { SetChangeIdentifier(std::forward<ChangeIdentifierT>(value)); return *this;}
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
    CurrentRevision& WithCreated(CreatedT&& value) { SetCreated(std::forward<CreatedT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The summary of the most recent revision of the artifact.</p>
     */
    inline const Aws::String& GetRevisionSummary() const { return m_revisionSummary; }
    inline bool RevisionSummaryHasBeenSet() const { return m_revisionSummaryHasBeenSet; }
    template<typename RevisionSummaryT = Aws::String>
    void SetRevisionSummary(RevisionSummaryT&& value) { m_revisionSummaryHasBeenSet = true; m_revisionSummary = std::forward<RevisionSummaryT>(value); }
    template<typename RevisionSummaryT = Aws::String>
    CurrentRevision& WithRevisionSummary(RevisionSummaryT&& value) { SetRevisionSummary(std::forward<RevisionSummaryT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_revision;
    bool m_revisionHasBeenSet = false;

    Aws::String m_changeIdentifier;
    bool m_changeIdentifierHasBeenSet = false;

    Aws::Utils::DateTime m_created{};
    bool m_createdHasBeenSet = false;

    Aws::String m_revisionSummary;
    bool m_revisionSummaryHasBeenSet = false;
  };

} // namespace Model
} // namespace CodePipeline
} // namespace Aws
