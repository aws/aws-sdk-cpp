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
    AWS_CODEPIPELINE_API CurrentRevision();
    AWS_CODEPIPELINE_API CurrentRevision(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEPIPELINE_API CurrentRevision& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEPIPELINE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The revision ID of the current version of an artifact.</p>
     */
    inline const Aws::String& GetRevision() const{ return m_revision; }
    inline bool RevisionHasBeenSet() const { return m_revisionHasBeenSet; }
    inline void SetRevision(const Aws::String& value) { m_revisionHasBeenSet = true; m_revision = value; }
    inline void SetRevision(Aws::String&& value) { m_revisionHasBeenSet = true; m_revision = std::move(value); }
    inline void SetRevision(const char* value) { m_revisionHasBeenSet = true; m_revision.assign(value); }
    inline CurrentRevision& WithRevision(const Aws::String& value) { SetRevision(value); return *this;}
    inline CurrentRevision& WithRevision(Aws::String&& value) { SetRevision(std::move(value)); return *this;}
    inline CurrentRevision& WithRevision(const char* value) { SetRevision(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The change identifier for the current revision.</p>
     */
    inline const Aws::String& GetChangeIdentifier() const{ return m_changeIdentifier; }
    inline bool ChangeIdentifierHasBeenSet() const { return m_changeIdentifierHasBeenSet; }
    inline void SetChangeIdentifier(const Aws::String& value) { m_changeIdentifierHasBeenSet = true; m_changeIdentifier = value; }
    inline void SetChangeIdentifier(Aws::String&& value) { m_changeIdentifierHasBeenSet = true; m_changeIdentifier = std::move(value); }
    inline void SetChangeIdentifier(const char* value) { m_changeIdentifierHasBeenSet = true; m_changeIdentifier.assign(value); }
    inline CurrentRevision& WithChangeIdentifier(const Aws::String& value) { SetChangeIdentifier(value); return *this;}
    inline CurrentRevision& WithChangeIdentifier(Aws::String&& value) { SetChangeIdentifier(std::move(value)); return *this;}
    inline CurrentRevision& WithChangeIdentifier(const char* value) { SetChangeIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time when the most recent revision of the artifact was created,
     * in timestamp format.</p>
     */
    inline const Aws::Utils::DateTime& GetCreated() const{ return m_created; }
    inline bool CreatedHasBeenSet() const { return m_createdHasBeenSet; }
    inline void SetCreated(const Aws::Utils::DateTime& value) { m_createdHasBeenSet = true; m_created = value; }
    inline void SetCreated(Aws::Utils::DateTime&& value) { m_createdHasBeenSet = true; m_created = std::move(value); }
    inline CurrentRevision& WithCreated(const Aws::Utils::DateTime& value) { SetCreated(value); return *this;}
    inline CurrentRevision& WithCreated(Aws::Utils::DateTime&& value) { SetCreated(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The summary of the most recent revision of the artifact.</p>
     */
    inline const Aws::String& GetRevisionSummary() const{ return m_revisionSummary; }
    inline bool RevisionSummaryHasBeenSet() const { return m_revisionSummaryHasBeenSet; }
    inline void SetRevisionSummary(const Aws::String& value) { m_revisionSummaryHasBeenSet = true; m_revisionSummary = value; }
    inline void SetRevisionSummary(Aws::String&& value) { m_revisionSummaryHasBeenSet = true; m_revisionSummary = std::move(value); }
    inline void SetRevisionSummary(const char* value) { m_revisionSummaryHasBeenSet = true; m_revisionSummary.assign(value); }
    inline CurrentRevision& WithRevisionSummary(const Aws::String& value) { SetRevisionSummary(value); return *this;}
    inline CurrentRevision& WithRevisionSummary(Aws::String&& value) { SetRevisionSummary(std::move(value)); return *this;}
    inline CurrentRevision& WithRevisionSummary(const char* value) { SetRevisionSummary(value); return *this;}
    ///@}
  private:

    Aws::String m_revision;
    bool m_revisionHasBeenSet = false;

    Aws::String m_changeIdentifier;
    bool m_changeIdentifierHasBeenSet = false;

    Aws::Utils::DateTime m_created;
    bool m_createdHasBeenSet = false;

    Aws::String m_revisionSummary;
    bool m_revisionSummaryHasBeenSet = false;
  };

} // namespace Model
} // namespace CodePipeline
} // namespace Aws
