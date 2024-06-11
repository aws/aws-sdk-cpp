/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/glue/model/TaskType.h>
#include <aws/glue/model/ImportLabelsTaskRunProperties.h>
#include <aws/glue/model/ExportLabelsTaskRunProperties.h>
#include <aws/glue/model/LabelingSetGenerationTaskRunProperties.h>
#include <aws/glue/model/FindMatchesTaskRunProperties.h>
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
namespace Glue
{
namespace Model
{

  /**
   * <p>The configuration properties for the task run.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/TaskRunProperties">AWS
   * API Reference</a></p>
   */
  class TaskRunProperties
  {
  public:
    AWS_GLUE_API TaskRunProperties();
    AWS_GLUE_API TaskRunProperties(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API TaskRunProperties& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The type of task run.</p>
     */
    inline const TaskType& GetTaskType() const{ return m_taskType; }
    inline bool TaskTypeHasBeenSet() const { return m_taskTypeHasBeenSet; }
    inline void SetTaskType(const TaskType& value) { m_taskTypeHasBeenSet = true; m_taskType = value; }
    inline void SetTaskType(TaskType&& value) { m_taskTypeHasBeenSet = true; m_taskType = std::move(value); }
    inline TaskRunProperties& WithTaskType(const TaskType& value) { SetTaskType(value); return *this;}
    inline TaskRunProperties& WithTaskType(TaskType&& value) { SetTaskType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration properties for an importing labels task run.</p>
     */
    inline const ImportLabelsTaskRunProperties& GetImportLabelsTaskRunProperties() const{ return m_importLabelsTaskRunProperties; }
    inline bool ImportLabelsTaskRunPropertiesHasBeenSet() const { return m_importLabelsTaskRunPropertiesHasBeenSet; }
    inline void SetImportLabelsTaskRunProperties(const ImportLabelsTaskRunProperties& value) { m_importLabelsTaskRunPropertiesHasBeenSet = true; m_importLabelsTaskRunProperties = value; }
    inline void SetImportLabelsTaskRunProperties(ImportLabelsTaskRunProperties&& value) { m_importLabelsTaskRunPropertiesHasBeenSet = true; m_importLabelsTaskRunProperties = std::move(value); }
    inline TaskRunProperties& WithImportLabelsTaskRunProperties(const ImportLabelsTaskRunProperties& value) { SetImportLabelsTaskRunProperties(value); return *this;}
    inline TaskRunProperties& WithImportLabelsTaskRunProperties(ImportLabelsTaskRunProperties&& value) { SetImportLabelsTaskRunProperties(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration properties for an exporting labels task run.</p>
     */
    inline const ExportLabelsTaskRunProperties& GetExportLabelsTaskRunProperties() const{ return m_exportLabelsTaskRunProperties; }
    inline bool ExportLabelsTaskRunPropertiesHasBeenSet() const { return m_exportLabelsTaskRunPropertiesHasBeenSet; }
    inline void SetExportLabelsTaskRunProperties(const ExportLabelsTaskRunProperties& value) { m_exportLabelsTaskRunPropertiesHasBeenSet = true; m_exportLabelsTaskRunProperties = value; }
    inline void SetExportLabelsTaskRunProperties(ExportLabelsTaskRunProperties&& value) { m_exportLabelsTaskRunPropertiesHasBeenSet = true; m_exportLabelsTaskRunProperties = std::move(value); }
    inline TaskRunProperties& WithExportLabelsTaskRunProperties(const ExportLabelsTaskRunProperties& value) { SetExportLabelsTaskRunProperties(value); return *this;}
    inline TaskRunProperties& WithExportLabelsTaskRunProperties(ExportLabelsTaskRunProperties&& value) { SetExportLabelsTaskRunProperties(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration properties for a labeling set generation task run.</p>
     */
    inline const LabelingSetGenerationTaskRunProperties& GetLabelingSetGenerationTaskRunProperties() const{ return m_labelingSetGenerationTaskRunProperties; }
    inline bool LabelingSetGenerationTaskRunPropertiesHasBeenSet() const { return m_labelingSetGenerationTaskRunPropertiesHasBeenSet; }
    inline void SetLabelingSetGenerationTaskRunProperties(const LabelingSetGenerationTaskRunProperties& value) { m_labelingSetGenerationTaskRunPropertiesHasBeenSet = true; m_labelingSetGenerationTaskRunProperties = value; }
    inline void SetLabelingSetGenerationTaskRunProperties(LabelingSetGenerationTaskRunProperties&& value) { m_labelingSetGenerationTaskRunPropertiesHasBeenSet = true; m_labelingSetGenerationTaskRunProperties = std::move(value); }
    inline TaskRunProperties& WithLabelingSetGenerationTaskRunProperties(const LabelingSetGenerationTaskRunProperties& value) { SetLabelingSetGenerationTaskRunProperties(value); return *this;}
    inline TaskRunProperties& WithLabelingSetGenerationTaskRunProperties(LabelingSetGenerationTaskRunProperties&& value) { SetLabelingSetGenerationTaskRunProperties(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration properties for a find matches task run.</p>
     */
    inline const FindMatchesTaskRunProperties& GetFindMatchesTaskRunProperties() const{ return m_findMatchesTaskRunProperties; }
    inline bool FindMatchesTaskRunPropertiesHasBeenSet() const { return m_findMatchesTaskRunPropertiesHasBeenSet; }
    inline void SetFindMatchesTaskRunProperties(const FindMatchesTaskRunProperties& value) { m_findMatchesTaskRunPropertiesHasBeenSet = true; m_findMatchesTaskRunProperties = value; }
    inline void SetFindMatchesTaskRunProperties(FindMatchesTaskRunProperties&& value) { m_findMatchesTaskRunPropertiesHasBeenSet = true; m_findMatchesTaskRunProperties = std::move(value); }
    inline TaskRunProperties& WithFindMatchesTaskRunProperties(const FindMatchesTaskRunProperties& value) { SetFindMatchesTaskRunProperties(value); return *this;}
    inline TaskRunProperties& WithFindMatchesTaskRunProperties(FindMatchesTaskRunProperties&& value) { SetFindMatchesTaskRunProperties(std::move(value)); return *this;}
    ///@}
  private:

    TaskType m_taskType;
    bool m_taskTypeHasBeenSet = false;

    ImportLabelsTaskRunProperties m_importLabelsTaskRunProperties;
    bool m_importLabelsTaskRunPropertiesHasBeenSet = false;

    ExportLabelsTaskRunProperties m_exportLabelsTaskRunProperties;
    bool m_exportLabelsTaskRunPropertiesHasBeenSet = false;

    LabelingSetGenerationTaskRunProperties m_labelingSetGenerationTaskRunProperties;
    bool m_labelingSetGenerationTaskRunPropertiesHasBeenSet = false;

    FindMatchesTaskRunProperties m_findMatchesTaskRunProperties;
    bool m_findMatchesTaskRunPropertiesHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
