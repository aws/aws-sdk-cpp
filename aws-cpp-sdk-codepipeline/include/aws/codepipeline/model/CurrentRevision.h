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
   * <p>Represents information about a current revision.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codepipeline-2015-07-09/CurrentRevision">AWS
   * API Reference</a></p>
   */
  class AWS_CODEPIPELINE_API CurrentRevision
  {
  public:
    CurrentRevision();
    CurrentRevision(Aws::Utils::Json::JsonView jsonValue);
    CurrentRevision& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The revision ID of the current version of an artifact.</p>
     */
    inline const Aws::String& GetRevision() const{ return m_revision; }

    /**
     * <p>The revision ID of the current version of an artifact.</p>
     */
    inline bool RevisionHasBeenSet() const { return m_revisionHasBeenSet; }

    /**
     * <p>The revision ID of the current version of an artifact.</p>
     */
    inline void SetRevision(const Aws::String& value) { m_revisionHasBeenSet = true; m_revision = value; }

    /**
     * <p>The revision ID of the current version of an artifact.</p>
     */
    inline void SetRevision(Aws::String&& value) { m_revisionHasBeenSet = true; m_revision = std::move(value); }

    /**
     * <p>The revision ID of the current version of an artifact.</p>
     */
    inline void SetRevision(const char* value) { m_revisionHasBeenSet = true; m_revision.assign(value); }

    /**
     * <p>The revision ID of the current version of an artifact.</p>
     */
    inline CurrentRevision& WithRevision(const Aws::String& value) { SetRevision(value); return *this;}

    /**
     * <p>The revision ID of the current version of an artifact.</p>
     */
    inline CurrentRevision& WithRevision(Aws::String&& value) { SetRevision(std::move(value)); return *this;}

    /**
     * <p>The revision ID of the current version of an artifact.</p>
     */
    inline CurrentRevision& WithRevision(const char* value) { SetRevision(value); return *this;}


    /**
     * <p>The change identifier for the current revision.</p>
     */
    inline const Aws::String& GetChangeIdentifier() const{ return m_changeIdentifier; }

    /**
     * <p>The change identifier for the current revision.</p>
     */
    inline bool ChangeIdentifierHasBeenSet() const { return m_changeIdentifierHasBeenSet; }

    /**
     * <p>The change identifier for the current revision.</p>
     */
    inline void SetChangeIdentifier(const Aws::String& value) { m_changeIdentifierHasBeenSet = true; m_changeIdentifier = value; }

    /**
     * <p>The change identifier for the current revision.</p>
     */
    inline void SetChangeIdentifier(Aws::String&& value) { m_changeIdentifierHasBeenSet = true; m_changeIdentifier = std::move(value); }

    /**
     * <p>The change identifier for the current revision.</p>
     */
    inline void SetChangeIdentifier(const char* value) { m_changeIdentifierHasBeenSet = true; m_changeIdentifier.assign(value); }

    /**
     * <p>The change identifier for the current revision.</p>
     */
    inline CurrentRevision& WithChangeIdentifier(const Aws::String& value) { SetChangeIdentifier(value); return *this;}

    /**
     * <p>The change identifier for the current revision.</p>
     */
    inline CurrentRevision& WithChangeIdentifier(Aws::String&& value) { SetChangeIdentifier(std::move(value)); return *this;}

    /**
     * <p>The change identifier for the current revision.</p>
     */
    inline CurrentRevision& WithChangeIdentifier(const char* value) { SetChangeIdentifier(value); return *this;}


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
    inline CurrentRevision& WithCreated(const Aws::Utils::DateTime& value) { SetCreated(value); return *this;}

    /**
     * <p>The date and time when the most recent revision of the artifact was created,
     * in timestamp format.</p>
     */
    inline CurrentRevision& WithCreated(Aws::Utils::DateTime&& value) { SetCreated(std::move(value)); return *this;}


    /**
     * <p>The summary of the most recent revision of the artifact.</p>
     */
    inline const Aws::String& GetRevisionSummary() const{ return m_revisionSummary; }

    /**
     * <p>The summary of the most recent revision of the artifact.</p>
     */
    inline bool RevisionSummaryHasBeenSet() const { return m_revisionSummaryHasBeenSet; }

    /**
     * <p>The summary of the most recent revision of the artifact.</p>
     */
    inline void SetRevisionSummary(const Aws::String& value) { m_revisionSummaryHasBeenSet = true; m_revisionSummary = value; }

    /**
     * <p>The summary of the most recent revision of the artifact.</p>
     */
    inline void SetRevisionSummary(Aws::String&& value) { m_revisionSummaryHasBeenSet = true; m_revisionSummary = std::move(value); }

    /**
     * <p>The summary of the most recent revision of the artifact.</p>
     */
    inline void SetRevisionSummary(const char* value) { m_revisionSummaryHasBeenSet = true; m_revisionSummary.assign(value); }

    /**
     * <p>The summary of the most recent revision of the artifact.</p>
     */
    inline CurrentRevision& WithRevisionSummary(const Aws::String& value) { SetRevisionSummary(value); return *this;}

    /**
     * <p>The summary of the most recent revision of the artifact.</p>
     */
    inline CurrentRevision& WithRevisionSummary(Aws::String&& value) { SetRevisionSummary(std::move(value)); return *this;}

    /**
     * <p>The summary of the most recent revision of the artifact.</p>
     */
    inline CurrentRevision& WithRevisionSummary(const char* value) { SetRevisionSummary(value); return *this;}

  private:

    Aws::String m_revision;
    bool m_revisionHasBeenSet;

    Aws::String m_changeIdentifier;
    bool m_changeIdentifierHasBeenSet;

    Aws::Utils::DateTime m_created;
    bool m_createdHasBeenSet;

    Aws::String m_revisionSummary;
    bool m_revisionSummaryHasBeenSet;
  };

} // namespace Model
} // namespace CodePipeline
} // namespace Aws
