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
   * <p>Represents information about the version (or revision) of an
   * action.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codepipeline-2015-07-09/ActionRevision">AWS
   * API Reference</a></p>
   */
  class ActionRevision
  {
  public:
    AWS_CODEPIPELINE_API ActionRevision() = default;
    AWS_CODEPIPELINE_API ActionRevision(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEPIPELINE_API ActionRevision& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEPIPELINE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The system-generated unique ID that identifies the revision number of the
     * action.</p>
     */
    inline const Aws::String& GetRevisionId() const { return m_revisionId; }
    inline bool RevisionIdHasBeenSet() const { return m_revisionIdHasBeenSet; }
    template<typename RevisionIdT = Aws::String>
    void SetRevisionId(RevisionIdT&& value) { m_revisionIdHasBeenSet = true; m_revisionId = std::forward<RevisionIdT>(value); }
    template<typename RevisionIdT = Aws::String>
    ActionRevision& WithRevisionId(RevisionIdT&& value) { SetRevisionId(std::forward<RevisionIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the change that set the state to this revision (for
     * example, a deployment ID or timestamp).</p>
     */
    inline const Aws::String& GetRevisionChangeId() const { return m_revisionChangeId; }
    inline bool RevisionChangeIdHasBeenSet() const { return m_revisionChangeIdHasBeenSet; }
    template<typename RevisionChangeIdT = Aws::String>
    void SetRevisionChangeId(RevisionChangeIdT&& value) { m_revisionChangeIdHasBeenSet = true; m_revisionChangeId = std::forward<RevisionChangeIdT>(value); }
    template<typename RevisionChangeIdT = Aws::String>
    ActionRevision& WithRevisionChangeId(RevisionChangeIdT&& value) { SetRevisionChangeId(std::forward<RevisionChangeIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time when the most recent version of the action was created, in
     * timestamp format.</p>
     */
    inline const Aws::Utils::DateTime& GetCreated() const { return m_created; }
    inline bool CreatedHasBeenSet() const { return m_createdHasBeenSet; }
    template<typename CreatedT = Aws::Utils::DateTime>
    void SetCreated(CreatedT&& value) { m_createdHasBeenSet = true; m_created = std::forward<CreatedT>(value); }
    template<typename CreatedT = Aws::Utils::DateTime>
    ActionRevision& WithCreated(CreatedT&& value) { SetCreated(std::forward<CreatedT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_revisionId;
    bool m_revisionIdHasBeenSet = false;

    Aws::String m_revisionChangeId;
    bool m_revisionChangeIdHasBeenSet = false;

    Aws::Utils::DateTime m_created{};
    bool m_createdHasBeenSet = false;
  };

} // namespace Model
} // namespace CodePipeline
} // namespace Aws
