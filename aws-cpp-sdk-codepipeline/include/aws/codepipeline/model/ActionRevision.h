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
   * <p>Represents information about the version (or revision) of an
   * action.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codepipeline-2015-07-09/ActionRevision">AWS
   * API Reference</a></p>
   */
  class AWS_CODEPIPELINE_API ActionRevision
  {
  public:
    ActionRevision();
    ActionRevision(Aws::Utils::Json::JsonView jsonValue);
    ActionRevision& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The system-generated unique ID that identifies the revision number of the
     * action.</p>
     */
    inline const Aws::String& GetRevisionId() const{ return m_revisionId; }

    /**
     * <p>The system-generated unique ID that identifies the revision number of the
     * action.</p>
     */
    inline bool RevisionIdHasBeenSet() const { return m_revisionIdHasBeenSet; }

    /**
     * <p>The system-generated unique ID that identifies the revision number of the
     * action.</p>
     */
    inline void SetRevisionId(const Aws::String& value) { m_revisionIdHasBeenSet = true; m_revisionId = value; }

    /**
     * <p>The system-generated unique ID that identifies the revision number of the
     * action.</p>
     */
    inline void SetRevisionId(Aws::String&& value) { m_revisionIdHasBeenSet = true; m_revisionId = std::move(value); }

    /**
     * <p>The system-generated unique ID that identifies the revision number of the
     * action.</p>
     */
    inline void SetRevisionId(const char* value) { m_revisionIdHasBeenSet = true; m_revisionId.assign(value); }

    /**
     * <p>The system-generated unique ID that identifies the revision number of the
     * action.</p>
     */
    inline ActionRevision& WithRevisionId(const Aws::String& value) { SetRevisionId(value); return *this;}

    /**
     * <p>The system-generated unique ID that identifies the revision number of the
     * action.</p>
     */
    inline ActionRevision& WithRevisionId(Aws::String&& value) { SetRevisionId(std::move(value)); return *this;}

    /**
     * <p>The system-generated unique ID that identifies the revision number of the
     * action.</p>
     */
    inline ActionRevision& WithRevisionId(const char* value) { SetRevisionId(value); return *this;}


    /**
     * <p>The unique identifier of the change that set the state to this revision, for
     * example a deployment ID or timestamp.</p>
     */
    inline const Aws::String& GetRevisionChangeId() const{ return m_revisionChangeId; }

    /**
     * <p>The unique identifier of the change that set the state to this revision, for
     * example a deployment ID or timestamp.</p>
     */
    inline bool RevisionChangeIdHasBeenSet() const { return m_revisionChangeIdHasBeenSet; }

    /**
     * <p>The unique identifier of the change that set the state to this revision, for
     * example a deployment ID or timestamp.</p>
     */
    inline void SetRevisionChangeId(const Aws::String& value) { m_revisionChangeIdHasBeenSet = true; m_revisionChangeId = value; }

    /**
     * <p>The unique identifier of the change that set the state to this revision, for
     * example a deployment ID or timestamp.</p>
     */
    inline void SetRevisionChangeId(Aws::String&& value) { m_revisionChangeIdHasBeenSet = true; m_revisionChangeId = std::move(value); }

    /**
     * <p>The unique identifier of the change that set the state to this revision, for
     * example a deployment ID or timestamp.</p>
     */
    inline void SetRevisionChangeId(const char* value) { m_revisionChangeIdHasBeenSet = true; m_revisionChangeId.assign(value); }

    /**
     * <p>The unique identifier of the change that set the state to this revision, for
     * example a deployment ID or timestamp.</p>
     */
    inline ActionRevision& WithRevisionChangeId(const Aws::String& value) { SetRevisionChangeId(value); return *this;}

    /**
     * <p>The unique identifier of the change that set the state to this revision, for
     * example a deployment ID or timestamp.</p>
     */
    inline ActionRevision& WithRevisionChangeId(Aws::String&& value) { SetRevisionChangeId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier of the change that set the state to this revision, for
     * example a deployment ID or timestamp.</p>
     */
    inline ActionRevision& WithRevisionChangeId(const char* value) { SetRevisionChangeId(value); return *this;}


    /**
     * <p>The date and time when the most recent version of the action was created, in
     * timestamp format.</p>
     */
    inline const Aws::Utils::DateTime& GetCreated() const{ return m_created; }

    /**
     * <p>The date and time when the most recent version of the action was created, in
     * timestamp format.</p>
     */
    inline bool CreatedHasBeenSet() const { return m_createdHasBeenSet; }

    /**
     * <p>The date and time when the most recent version of the action was created, in
     * timestamp format.</p>
     */
    inline void SetCreated(const Aws::Utils::DateTime& value) { m_createdHasBeenSet = true; m_created = value; }

    /**
     * <p>The date and time when the most recent version of the action was created, in
     * timestamp format.</p>
     */
    inline void SetCreated(Aws::Utils::DateTime&& value) { m_createdHasBeenSet = true; m_created = std::move(value); }

    /**
     * <p>The date and time when the most recent version of the action was created, in
     * timestamp format.</p>
     */
    inline ActionRevision& WithCreated(const Aws::Utils::DateTime& value) { SetCreated(value); return *this;}

    /**
     * <p>The date and time when the most recent version of the action was created, in
     * timestamp format.</p>
     */
    inline ActionRevision& WithCreated(Aws::Utils::DateTime&& value) { SetCreated(std::move(value)); return *this;}

  private:

    Aws::String m_revisionId;
    bool m_revisionIdHasBeenSet;

    Aws::String m_revisionChangeId;
    bool m_revisionChangeIdHasBeenSet;

    Aws::Utils::DateTime m_created;
    bool m_createdHasBeenSet;
  };

} // namespace Model
} // namespace CodePipeline
} // namespace Aws
