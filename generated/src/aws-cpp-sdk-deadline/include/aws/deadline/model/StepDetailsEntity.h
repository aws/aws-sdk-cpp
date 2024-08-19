/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/deadline/Deadline_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/Document.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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


    ///@{
    /**
     * <p>The job ID.</p>
     */
    inline const Aws::String& GetJobId() const{ return m_jobId; }
    inline bool JobIdHasBeenSet() const { return m_jobIdHasBeenSet; }
    inline void SetJobId(const Aws::String& value) { m_jobIdHasBeenSet = true; m_jobId = value; }
    inline void SetJobId(Aws::String&& value) { m_jobIdHasBeenSet = true; m_jobId = std::move(value); }
    inline void SetJobId(const char* value) { m_jobIdHasBeenSet = true; m_jobId.assign(value); }
    inline StepDetailsEntity& WithJobId(const Aws::String& value) { SetJobId(value); return *this;}
    inline StepDetailsEntity& WithJobId(Aws::String&& value) { SetJobId(std::move(value)); return *this;}
    inline StepDetailsEntity& WithJobId(const char* value) { SetJobId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The step ID.</p>
     */
    inline const Aws::String& GetStepId() const{ return m_stepId; }
    inline bool StepIdHasBeenSet() const { return m_stepIdHasBeenSet; }
    inline void SetStepId(const Aws::String& value) { m_stepIdHasBeenSet = true; m_stepId = value; }
    inline void SetStepId(Aws::String&& value) { m_stepIdHasBeenSet = true; m_stepId = std::move(value); }
    inline void SetStepId(const char* value) { m_stepIdHasBeenSet = true; m_stepId.assign(value); }
    inline StepDetailsEntity& WithStepId(const Aws::String& value) { SetStepId(value); return *this;}
    inline StepDetailsEntity& WithStepId(Aws::String&& value) { SetStepId(std::move(value)); return *this;}
    inline StepDetailsEntity& WithStepId(const char* value) { SetStepId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The schema version for a step template.</p>
     */
    inline const Aws::String& GetSchemaVersion() const{ return m_schemaVersion; }
    inline bool SchemaVersionHasBeenSet() const { return m_schemaVersionHasBeenSet; }
    inline void SetSchemaVersion(const Aws::String& value) { m_schemaVersionHasBeenSet = true; m_schemaVersion = value; }
    inline void SetSchemaVersion(Aws::String&& value) { m_schemaVersionHasBeenSet = true; m_schemaVersion = std::move(value); }
    inline void SetSchemaVersion(const char* value) { m_schemaVersionHasBeenSet = true; m_schemaVersion.assign(value); }
    inline StepDetailsEntity& WithSchemaVersion(const Aws::String& value) { SetSchemaVersion(value); return *this;}
    inline StepDetailsEntity& WithSchemaVersion(Aws::String&& value) { SetSchemaVersion(std::move(value)); return *this;}
    inline StepDetailsEntity& WithSchemaVersion(const char* value) { SetSchemaVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The template for a step.</p>
     */
    inline Aws::Utils::DocumentView GetTemplate() const{ return m_template; }
    inline bool TemplateHasBeenSet() const { return m_templateHasBeenSet; }
    inline void SetTemplate(const Aws::Utils::Document& value) { m_templateHasBeenSet = true; m_template = value; }
    inline void SetTemplate(Aws::Utils::Document&& value) { m_templateHasBeenSet = true; m_template = std::move(value); }
    inline StepDetailsEntity& WithTemplate(const Aws::Utils::Document& value) { SetTemplate(value); return *this;}
    inline StepDetailsEntity& WithTemplate(Aws::Utils::Document&& value) { SetTemplate(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The dependencies for a step.</p>
     */
    inline const Aws::Vector<Aws::String>& GetDependencies() const{ return m_dependencies; }
    inline bool DependenciesHasBeenSet() const { return m_dependenciesHasBeenSet; }
    inline void SetDependencies(const Aws::Vector<Aws::String>& value) { m_dependenciesHasBeenSet = true; m_dependencies = value; }
    inline void SetDependencies(Aws::Vector<Aws::String>&& value) { m_dependenciesHasBeenSet = true; m_dependencies = std::move(value); }
    inline StepDetailsEntity& WithDependencies(const Aws::Vector<Aws::String>& value) { SetDependencies(value); return *this;}
    inline StepDetailsEntity& WithDependencies(Aws::Vector<Aws::String>&& value) { SetDependencies(std::move(value)); return *this;}
    inline StepDetailsEntity& AddDependencies(const Aws::String& value) { m_dependenciesHasBeenSet = true; m_dependencies.push_back(value); return *this; }
    inline StepDetailsEntity& AddDependencies(Aws::String&& value) { m_dependenciesHasBeenSet = true; m_dependencies.push_back(std::move(value)); return *this; }
    inline StepDetailsEntity& AddDependencies(const char* value) { m_dependenciesHasBeenSet = true; m_dependencies.push_back(value); return *this; }
    ///@}
  private:

    Aws::String m_jobId;
    bool m_jobIdHasBeenSet = false;

    Aws::String m_stepId;
    bool m_stepIdHasBeenSet = false;

    Aws::String m_schemaVersion;
    bool m_schemaVersionHasBeenSet = false;

    Aws::Utils::Document m_template;
    bool m_templateHasBeenSet = false;

    Aws::Vector<Aws::String> m_dependencies;
    bool m_dependenciesHasBeenSet = false;
  };

} // namespace Model
} // namespace deadline
} // namespace Aws
