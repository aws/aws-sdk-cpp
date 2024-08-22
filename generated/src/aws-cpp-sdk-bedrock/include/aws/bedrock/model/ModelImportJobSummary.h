/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock/Bedrock_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/bedrock/model/ModelImportJobStatus.h>
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
namespace Bedrock
{
namespace Model
{

  /**
   * <p>Information about the import job.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-2023-04-20/ModelImportJobSummary">AWS
   * API Reference</a></p>
   */
  class ModelImportJobSummary
  {
  public:
    AWS_BEDROCK_API ModelImportJobSummary();
    AWS_BEDROCK_API ModelImportJobSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCK_API ModelImportJobSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCK_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the import job.</p>
     */
    inline const Aws::String& GetJobArn() const{ return m_jobArn; }
    inline bool JobArnHasBeenSet() const { return m_jobArnHasBeenSet; }
    inline void SetJobArn(const Aws::String& value) { m_jobArnHasBeenSet = true; m_jobArn = value; }
    inline void SetJobArn(Aws::String&& value) { m_jobArnHasBeenSet = true; m_jobArn = std::move(value); }
    inline void SetJobArn(const char* value) { m_jobArnHasBeenSet = true; m_jobArn.assign(value); }
    inline ModelImportJobSummary& WithJobArn(const Aws::String& value) { SetJobArn(value); return *this;}
    inline ModelImportJobSummary& WithJobArn(Aws::String&& value) { SetJobArn(std::move(value)); return *this;}
    inline ModelImportJobSummary& WithJobArn(const char* value) { SetJobArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the import job.</p>
     */
    inline const Aws::String& GetJobName() const{ return m_jobName; }
    inline bool JobNameHasBeenSet() const { return m_jobNameHasBeenSet; }
    inline void SetJobName(const Aws::String& value) { m_jobNameHasBeenSet = true; m_jobName = value; }
    inline void SetJobName(Aws::String&& value) { m_jobNameHasBeenSet = true; m_jobName = std::move(value); }
    inline void SetJobName(const char* value) { m_jobNameHasBeenSet = true; m_jobName.assign(value); }
    inline ModelImportJobSummary& WithJobName(const Aws::String& value) { SetJobName(value); return *this;}
    inline ModelImportJobSummary& WithJobName(Aws::String&& value) { SetJobName(std::move(value)); return *this;}
    inline ModelImportJobSummary& WithJobName(const char* value) { SetJobName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the imported job. </p>
     */
    inline const ModelImportJobStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const ModelImportJobStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(ModelImportJobStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline ModelImportJobSummary& WithStatus(const ModelImportJobStatus& value) { SetStatus(value); return *this;}
    inline ModelImportJobSummary& WithStatus(ModelImportJobStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time when the import job was last modified.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTime() const{ return m_lastModifiedTime; }
    inline bool LastModifiedTimeHasBeenSet() const { return m_lastModifiedTimeHasBeenSet; }
    inline void SetLastModifiedTime(const Aws::Utils::DateTime& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = value; }
    inline void SetLastModifiedTime(Aws::Utils::DateTime&& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = std::move(value); }
    inline ModelImportJobSummary& WithLastModifiedTime(const Aws::Utils::DateTime& value) { SetLastModifiedTime(value); return *this;}
    inline ModelImportJobSummary& WithLastModifiedTime(Aws::Utils::DateTime&& value) { SetLastModifiedTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time import job was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::move(value); }
    inline ModelImportJobSummary& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}
    inline ModelImportJobSummary& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time when import job ended.</p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const{ return m_endTime; }
    inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }
    inline void SetEndTime(const Aws::Utils::DateTime& value) { m_endTimeHasBeenSet = true; m_endTime = value; }
    inline void SetEndTime(Aws::Utils::DateTime&& value) { m_endTimeHasBeenSet = true; m_endTime = std::move(value); }
    inline ModelImportJobSummary& WithEndTime(const Aws::Utils::DateTime& value) { SetEndTime(value); return *this;}
    inline ModelImportJobSummary& WithEndTime(Aws::Utils::DateTime&& value) { SetEndTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon resource Name (ARN) of the imported model.</p>
     */
    inline const Aws::String& GetImportedModelArn() const{ return m_importedModelArn; }
    inline bool ImportedModelArnHasBeenSet() const { return m_importedModelArnHasBeenSet; }
    inline void SetImportedModelArn(const Aws::String& value) { m_importedModelArnHasBeenSet = true; m_importedModelArn = value; }
    inline void SetImportedModelArn(Aws::String&& value) { m_importedModelArnHasBeenSet = true; m_importedModelArn = std::move(value); }
    inline void SetImportedModelArn(const char* value) { m_importedModelArnHasBeenSet = true; m_importedModelArn.assign(value); }
    inline ModelImportJobSummary& WithImportedModelArn(const Aws::String& value) { SetImportedModelArn(value); return *this;}
    inline ModelImportJobSummary& WithImportedModelArn(Aws::String&& value) { SetImportedModelArn(std::move(value)); return *this;}
    inline ModelImportJobSummary& WithImportedModelArn(const char* value) { SetImportedModelArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the imported model.</p>
     */
    inline const Aws::String& GetImportedModelName() const{ return m_importedModelName; }
    inline bool ImportedModelNameHasBeenSet() const { return m_importedModelNameHasBeenSet; }
    inline void SetImportedModelName(const Aws::String& value) { m_importedModelNameHasBeenSet = true; m_importedModelName = value; }
    inline void SetImportedModelName(Aws::String&& value) { m_importedModelNameHasBeenSet = true; m_importedModelName = std::move(value); }
    inline void SetImportedModelName(const char* value) { m_importedModelNameHasBeenSet = true; m_importedModelName.assign(value); }
    inline ModelImportJobSummary& WithImportedModelName(const Aws::String& value) { SetImportedModelName(value); return *this;}
    inline ModelImportJobSummary& WithImportedModelName(Aws::String&& value) { SetImportedModelName(std::move(value)); return *this;}
    inline ModelImportJobSummary& WithImportedModelName(const char* value) { SetImportedModelName(value); return *this;}
    ///@}
  private:

    Aws::String m_jobArn;
    bool m_jobArnHasBeenSet = false;

    Aws::String m_jobName;
    bool m_jobNameHasBeenSet = false;

    ModelImportJobStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::Utils::DateTime m_lastModifiedTime;
    bool m_lastModifiedTimeHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime;
    bool m_creationTimeHasBeenSet = false;

    Aws::Utils::DateTime m_endTime;
    bool m_endTimeHasBeenSet = false;

    Aws::String m_importedModelArn;
    bool m_importedModelArnHasBeenSet = false;

    Aws::String m_importedModelName;
    bool m_importedModelNameHasBeenSet = false;
  };

} // namespace Model
} // namespace Bedrock
} // namespace Aws
