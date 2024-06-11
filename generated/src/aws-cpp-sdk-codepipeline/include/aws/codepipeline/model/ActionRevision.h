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
    AWS_CODEPIPELINE_API ActionRevision();
    AWS_CODEPIPELINE_API ActionRevision(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEPIPELINE_API ActionRevision& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEPIPELINE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The system-generated unique ID that identifies the revision number of the
     * action.</p>
     */
    inline const Aws::String& GetRevisionId() const{ return m_revisionId; }
    inline bool RevisionIdHasBeenSet() const { return m_revisionIdHasBeenSet; }
    inline void SetRevisionId(const Aws::String& value) { m_revisionIdHasBeenSet = true; m_revisionId = value; }
    inline void SetRevisionId(Aws::String&& value) { m_revisionIdHasBeenSet = true; m_revisionId = std::move(value); }
    inline void SetRevisionId(const char* value) { m_revisionIdHasBeenSet = true; m_revisionId.assign(value); }
    inline ActionRevision& WithRevisionId(const Aws::String& value) { SetRevisionId(value); return *this;}
    inline ActionRevision& WithRevisionId(Aws::String&& value) { SetRevisionId(std::move(value)); return *this;}
    inline ActionRevision& WithRevisionId(const char* value) { SetRevisionId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the change that set the state to this revision (for
     * example, a deployment ID or timestamp).</p>
     */
    inline const Aws::String& GetRevisionChangeId() const{ return m_revisionChangeId; }
    inline bool RevisionChangeIdHasBeenSet() const { return m_revisionChangeIdHasBeenSet; }
    inline void SetRevisionChangeId(const Aws::String& value) { m_revisionChangeIdHasBeenSet = true; m_revisionChangeId = value; }
    inline void SetRevisionChangeId(Aws::String&& value) { m_revisionChangeIdHasBeenSet = true; m_revisionChangeId = std::move(value); }
    inline void SetRevisionChangeId(const char* value) { m_revisionChangeIdHasBeenSet = true; m_revisionChangeId.assign(value); }
    inline ActionRevision& WithRevisionChangeId(const Aws::String& value) { SetRevisionChangeId(value); return *this;}
    inline ActionRevision& WithRevisionChangeId(Aws::String&& value) { SetRevisionChangeId(std::move(value)); return *this;}
    inline ActionRevision& WithRevisionChangeId(const char* value) { SetRevisionChangeId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time when the most recent version of the action was created, in
     * timestamp format.</p>
     */
    inline const Aws::Utils::DateTime& GetCreated() const{ return m_created; }
    inline bool CreatedHasBeenSet() const { return m_createdHasBeenSet; }
    inline void SetCreated(const Aws::Utils::DateTime& value) { m_createdHasBeenSet = true; m_created = value; }
    inline void SetCreated(Aws::Utils::DateTime&& value) { m_createdHasBeenSet = true; m_created = std::move(value); }
    inline ActionRevision& WithCreated(const Aws::Utils::DateTime& value) { SetCreated(value); return *this;}
    inline ActionRevision& WithCreated(Aws::Utils::DateTime&& value) { SetCreated(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_revisionId;
    bool m_revisionIdHasBeenSet = false;

    Aws::String m_revisionChangeId;
    bool m_revisionChangeIdHasBeenSet = false;

    Aws::Utils::DateTime m_created;
    bool m_createdHasBeenSet = false;
  };

} // namespace Model
} // namespace CodePipeline
} // namespace Aws
