/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/deadline/Deadline_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
   * <p>The details of a step entity.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/deadline-2023-10-12/StepDetailsEntity">AWS
   * API Reference</a></p>
   */
  class StepDetailsEntity
  {
  public:
    AWS_DEADLINE_API StepDetailsEntity();
    AWS_DEADLINE_API StepDetailsEntity(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEADLINE_API StepDetailsEntity& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEADLINE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The dependencies for a step.</p>
     */
    inline const Aws::Vector<Aws::String>& GetDependencies() const{ return m_dependencies; }

    /**
     * <p>The dependencies for a step.</p>
     */
    inline bool DependenciesHasBeenSet() const { return m_dependenciesHasBeenSet; }

    /**
     * <p>The dependencies for a step.</p>
     */
    inline void SetDependencies(const Aws::Vector<Aws::String>& value) { m_dependenciesHasBeenSet = true; m_dependencies = value; }

    /**
     * <p>The dependencies for a step.</p>
     */
    inline void SetDependencies(Aws::Vector<Aws::String>&& value) { m_dependenciesHasBeenSet = true; m_dependencies = std::move(value); }

    /**
     * <p>The dependencies for a step.</p>
     */
    inline StepDetailsEntity& WithDependencies(const Aws::Vector<Aws::String>& value) { SetDependencies(value); return *this;}

    /**
     * <p>The dependencies for a step.</p>
     */
    inline StepDetailsEntity& WithDependencies(Aws::Vector<Aws::String>&& value) { SetDependencies(std::move(value)); return *this;}

    /**
     * <p>The dependencies for a step.</p>
     */
    inline StepDetailsEntity& AddDependencies(const Aws::String& value) { m_dependenciesHasBeenSet = true; m_dependencies.push_back(value); return *this; }

    /**
     * <p>The dependencies for a step.</p>
     */
    inline StepDetailsEntity& AddDependencies(Aws::String&& value) { m_dependenciesHasBeenSet = true; m_dependencies.push_back(std::move(value)); return *this; }

    /**
     * <p>The dependencies for a step.</p>
     */
    inline StepDetailsEntity& AddDependencies(const char* value) { m_dependenciesHasBeenSet = true; m_dependencies.push_back(value); return *this; }


    /**
     * <p>The job ID.</p>
     */
    inline const Aws::String& GetJobId() const{ return m_jobId; }

    /**
     * <p>The job ID.</p>
     */
    inline bool JobIdHasBeenSet() const { return m_jobIdHasBeenSet; }

    /**
     * <p>The job ID.</p>
     */
    inline void SetJobId(const Aws::String& value) { m_jobIdHasBeenSet = true; m_jobId = value; }

    /**
     * <p>The job ID.</p>
     */
    inline void SetJobId(Aws::String&& value) { m_jobIdHasBeenSet = true; m_jobId = std::move(value); }

    /**
     * <p>The job ID.</p>
     */
    inline void SetJobId(const char* value) { m_jobIdHasBeenSet = true; m_jobId.assign(value); }

    /**
     * <p>The job ID.</p>
     */
    inline StepDetailsEntity& WithJobId(const Aws::String& value) { SetJobId(value); return *this;}

    /**
     * <p>The job ID.</p>
     */
    inline StepDetailsEntity& WithJobId(Aws::String&& value) { SetJobId(std::move(value)); return *this;}

    /**
     * <p>The job ID.</p>
     */
    inline StepDetailsEntity& WithJobId(const char* value) { SetJobId(value); return *this;}


    /**
     * <p>The schema version for a step template.</p>
     */
    inline const Aws::String& GetSchemaVersion() const{ return m_schemaVersion; }

    /**
     * <p>The schema version for a step template.</p>
     */
    inline bool SchemaVersionHasBeenSet() const { return m_schemaVersionHasBeenSet; }

    /**
     * <p>The schema version for a step template.</p>
     */
    inline void SetSchemaVersion(const Aws::String& value) { m_schemaVersionHasBeenSet = true; m_schemaVersion = value; }

    /**
     * <p>The schema version for a step template.</p>
     */
    inline void SetSchemaVersion(Aws::String&& value) { m_schemaVersionHasBeenSet = true; m_schemaVersion = std::move(value); }

    /**
     * <p>The schema version for a step template.</p>
     */
    inline void SetSchemaVersion(const char* value) { m_schemaVersionHasBeenSet = true; m_schemaVersion.assign(value); }

    /**
     * <p>The schema version for a step template.</p>
     */
    inline StepDetailsEntity& WithSchemaVersion(const Aws::String& value) { SetSchemaVersion(value); return *this;}

    /**
     * <p>The schema version for a step template.</p>
     */
    inline StepDetailsEntity& WithSchemaVersion(Aws::String&& value) { SetSchemaVersion(std::move(value)); return *this;}

    /**
     * <p>The schema version for a step template.</p>
     */
    inline StepDetailsEntity& WithSchemaVersion(const char* value) { SetSchemaVersion(value); return *this;}


    /**
     * <p>The step ID.</p>
     */
    inline const Aws::String& GetStepId() const{ return m_stepId; }

    /**
     * <p>The step ID.</p>
     */
    inline bool StepIdHasBeenSet() const { return m_stepIdHasBeenSet; }

    /**
     * <p>The step ID.</p>
     */
    inline void SetStepId(const Aws::String& value) { m_stepIdHasBeenSet = true; m_stepId = value; }

    /**
     * <p>The step ID.</p>
     */
    inline void SetStepId(Aws::String&& value) { m_stepIdHasBeenSet = true; m_stepId = std::move(value); }

    /**
     * <p>The step ID.</p>
     */
    inline void SetStepId(const char* value) { m_stepIdHasBeenSet = true; m_stepId.assign(value); }

    /**
     * <p>The step ID.</p>
     */
    inline StepDetailsEntity& WithStepId(const Aws::String& value) { SetStepId(value); return *this;}

    /**
     * <p>The step ID.</p>
     */
    inline StepDetailsEntity& WithStepId(Aws::String&& value) { SetStepId(std::move(value)); return *this;}

    /**
     * <p>The step ID.</p>
     */
    inline StepDetailsEntity& WithStepId(const char* value) { SetStepId(value); return *this;}


    /**
     * <p>The template for a step.</p>
     */
    inline Aws::Utils::DocumentView GetTemplate() const{ return m_template; }

    /**
     * <p>The template for a step.</p>
     */
    inline bool TemplateHasBeenSet() const { return m_templateHasBeenSet; }

    /**
     * <p>The template for a step.</p>
     */
    inline void SetTemplate(const Aws::Utils::Document& value) { m_templateHasBeenSet = true; m_template = value; }

    /**
     * <p>The template for a step.</p>
     */
    inline void SetTemplate(Aws::Utils::Document&& value) { m_templateHasBeenSet = true; m_template = std::move(value); }

    /**
     * <p>The template for a step.</p>
     */
    inline StepDetailsEntity& WithTemplate(const Aws::Utils::Document& value) { SetTemplate(value); return *this;}

    /**
     * <p>The template for a step.</p>
     */
    inline StepDetailsEntity& WithTemplate(Aws::Utils::Document&& value) { SetTemplate(std::move(value)); return *this;}

  private:

    Aws::Vector<Aws::String> m_dependencies;
    bool m_dependenciesHasBeenSet = false;

    Aws::String m_jobId;
    bool m_jobIdHasBeenSet = false;

    Aws::String m_schemaVersion;
    bool m_schemaVersionHasBeenSet = false;

    Aws::String m_stepId;
    bool m_stepIdHasBeenSet = false;

    Aws::Utils::Document m_template;
    bool m_templateHasBeenSet = false;
  };

} // namespace Model
} // namespace deadline
} // namespace Aws
