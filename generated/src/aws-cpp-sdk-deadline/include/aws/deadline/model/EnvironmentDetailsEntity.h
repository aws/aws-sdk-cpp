/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/deadline/Deadline_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/Document.h>
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
namespace deadline
{
namespace Model
{

  /**
   * <p>The details of a specified environment.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/deadline-2023-10-12/EnvironmentDetailsEntity">AWS
   * API Reference</a></p>
   */
  class EnvironmentDetailsEntity
  {
  public:
    AWS_DEADLINE_API EnvironmentDetailsEntity();
    AWS_DEADLINE_API EnvironmentDetailsEntity(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEADLINE_API EnvironmentDetailsEntity& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEADLINE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The job ID.</p>
     */
    inline const Aws::String& GetJobId() const{ return m_jobId; }
    inline bool JobIdHasBeenSet() const { return m_jobIdHasBeenSet; }
    inline void SetJobId(const Aws::String& value) { m_jobIdHasBeenSet = true; m_jobId = value; }
    inline void SetJobId(Aws::String&& value) { m_jobIdHasBeenSet = true; m_jobId = std::move(value); }
    inline void SetJobId(const char* value) { m_jobIdHasBeenSet = true; m_jobId.assign(value); }
    inline EnvironmentDetailsEntity& WithJobId(const Aws::String& value) { SetJobId(value); return *this;}
    inline EnvironmentDetailsEntity& WithJobId(Aws::String&& value) { SetJobId(std::move(value)); return *this;}
    inline EnvironmentDetailsEntity& WithJobId(const char* value) { SetJobId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The environment ID.</p>
     */
    inline const Aws::String& GetEnvironmentId() const{ return m_environmentId; }
    inline bool EnvironmentIdHasBeenSet() const { return m_environmentIdHasBeenSet; }
    inline void SetEnvironmentId(const Aws::String& value) { m_environmentIdHasBeenSet = true; m_environmentId = value; }
    inline void SetEnvironmentId(Aws::String&& value) { m_environmentIdHasBeenSet = true; m_environmentId = std::move(value); }
    inline void SetEnvironmentId(const char* value) { m_environmentIdHasBeenSet = true; m_environmentId.assign(value); }
    inline EnvironmentDetailsEntity& WithEnvironmentId(const Aws::String& value) { SetEnvironmentId(value); return *this;}
    inline EnvironmentDetailsEntity& WithEnvironmentId(Aws::String&& value) { SetEnvironmentId(std::move(value)); return *this;}
    inline EnvironmentDetailsEntity& WithEnvironmentId(const char* value) { SetEnvironmentId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The schema version in the environment.</p>
     */
    inline const Aws::String& GetSchemaVersion() const{ return m_schemaVersion; }
    inline bool SchemaVersionHasBeenSet() const { return m_schemaVersionHasBeenSet; }
    inline void SetSchemaVersion(const Aws::String& value) { m_schemaVersionHasBeenSet = true; m_schemaVersion = value; }
    inline void SetSchemaVersion(Aws::String&& value) { m_schemaVersionHasBeenSet = true; m_schemaVersion = std::move(value); }
    inline void SetSchemaVersion(const char* value) { m_schemaVersionHasBeenSet = true; m_schemaVersion.assign(value); }
    inline EnvironmentDetailsEntity& WithSchemaVersion(const Aws::String& value) { SetSchemaVersion(value); return *this;}
    inline EnvironmentDetailsEntity& WithSchemaVersion(Aws::String&& value) { SetSchemaVersion(std::move(value)); return *this;}
    inline EnvironmentDetailsEntity& WithSchemaVersion(const char* value) { SetSchemaVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The template used for the environment.</p>
     */
    inline Aws::Utils::DocumentView GetTemplate() const{ return m_template; }
    inline bool TemplateHasBeenSet() const { return m_templateHasBeenSet; }
    inline void SetTemplate(const Aws::Utils::Document& value) { m_templateHasBeenSet = true; m_template = value; }
    inline void SetTemplate(Aws::Utils::Document&& value) { m_templateHasBeenSet = true; m_template = std::move(value); }
    inline EnvironmentDetailsEntity& WithTemplate(const Aws::Utils::Document& value) { SetTemplate(value); return *this;}
    inline EnvironmentDetailsEntity& WithTemplate(Aws::Utils::Document&& value) { SetTemplate(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_jobId;
    bool m_jobIdHasBeenSet = false;

    Aws::String m_environmentId;
    bool m_environmentIdHasBeenSet = false;

    Aws::String m_schemaVersion;
    bool m_schemaVersionHasBeenSet = false;

    Aws::Utils::Document m_template;
    bool m_templateHasBeenSet = false;
  };

} // namespace Model
} // namespace deadline
} // namespace Aws
