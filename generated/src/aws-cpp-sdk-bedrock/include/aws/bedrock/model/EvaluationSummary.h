﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock/Bedrock_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/bedrock/model/EvaluationJobStatus.h>
#include <aws/core/utils/DateTime.h>
#include <aws/bedrock/model/EvaluationJobType.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/bedrock/model/EvaluationTaskType.h>
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
   * <p>A summary of the model evaluation job.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-2023-04-20/EvaluationSummary">AWS
   * API Reference</a></p>
   */
  class EvaluationSummary
  {
  public:
    AWS_BEDROCK_API EvaluationSummary();
    AWS_BEDROCK_API EvaluationSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCK_API EvaluationSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCK_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the model evaluation job.</p>
     */
    inline const Aws::String& GetJobArn() const{ return m_jobArn; }
    inline bool JobArnHasBeenSet() const { return m_jobArnHasBeenSet; }
    inline void SetJobArn(const Aws::String& value) { m_jobArnHasBeenSet = true; m_jobArn = value; }
    inline void SetJobArn(Aws::String&& value) { m_jobArnHasBeenSet = true; m_jobArn = std::move(value); }
    inline void SetJobArn(const char* value) { m_jobArnHasBeenSet = true; m_jobArn.assign(value); }
    inline EvaluationSummary& WithJobArn(const Aws::String& value) { SetJobArn(value); return *this;}
    inline EvaluationSummary& WithJobArn(Aws::String&& value) { SetJobArn(std::move(value)); return *this;}
    inline EvaluationSummary& WithJobArn(const char* value) { SetJobArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the model evaluation job.</p>
     */
    inline const Aws::String& GetJobName() const{ return m_jobName; }
    inline bool JobNameHasBeenSet() const { return m_jobNameHasBeenSet; }
    inline void SetJobName(const Aws::String& value) { m_jobNameHasBeenSet = true; m_jobName = value; }
    inline void SetJobName(Aws::String&& value) { m_jobNameHasBeenSet = true; m_jobName = std::move(value); }
    inline void SetJobName(const char* value) { m_jobNameHasBeenSet = true; m_jobName.assign(value); }
    inline EvaluationSummary& WithJobName(const Aws::String& value) { SetJobName(value); return *this;}
    inline EvaluationSummary& WithJobName(Aws::String&& value) { SetJobName(std::move(value)); return *this;}
    inline EvaluationSummary& WithJobName(const char* value) { SetJobName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current status of the model evaluation job. </p>
     */
    inline const EvaluationJobStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const EvaluationJobStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(EvaluationJobStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline EvaluationSummary& WithStatus(const EvaluationJobStatus& value) { SetStatus(value); return *this;}
    inline EvaluationSummary& WithStatus(EvaluationJobStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>When the model evaluation job was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::move(value); }
    inline EvaluationSummary& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}
    inline EvaluationSummary& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type, either human or automatic, of model evaluation job.</p>
     */
    inline const EvaluationJobType& GetJobType() const{ return m_jobType; }
    inline bool JobTypeHasBeenSet() const { return m_jobTypeHasBeenSet; }
    inline void SetJobType(const EvaluationJobType& value) { m_jobTypeHasBeenSet = true; m_jobType = value; }
    inline void SetJobType(EvaluationJobType&& value) { m_jobTypeHasBeenSet = true; m_jobType = std::move(value); }
    inline EvaluationSummary& WithJobType(const EvaluationJobType& value) { SetJobType(value); return *this;}
    inline EvaluationSummary& WithJobType(EvaluationJobType&& value) { SetJobType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>What task type was used in the model evaluation job.</p>
     */
    inline const Aws::Vector<EvaluationTaskType>& GetEvaluationTaskTypes() const{ return m_evaluationTaskTypes; }
    inline bool EvaluationTaskTypesHasBeenSet() const { return m_evaluationTaskTypesHasBeenSet; }
    inline void SetEvaluationTaskTypes(const Aws::Vector<EvaluationTaskType>& value) { m_evaluationTaskTypesHasBeenSet = true; m_evaluationTaskTypes = value; }
    inline void SetEvaluationTaskTypes(Aws::Vector<EvaluationTaskType>&& value) { m_evaluationTaskTypesHasBeenSet = true; m_evaluationTaskTypes = std::move(value); }
    inline EvaluationSummary& WithEvaluationTaskTypes(const Aws::Vector<EvaluationTaskType>& value) { SetEvaluationTaskTypes(value); return *this;}
    inline EvaluationSummary& WithEvaluationTaskTypes(Aws::Vector<EvaluationTaskType>&& value) { SetEvaluationTaskTypes(std::move(value)); return *this;}
    inline EvaluationSummary& AddEvaluationTaskTypes(const EvaluationTaskType& value) { m_evaluationTaskTypesHasBeenSet = true; m_evaluationTaskTypes.push_back(value); return *this; }
    inline EvaluationSummary& AddEvaluationTaskTypes(EvaluationTaskType&& value) { m_evaluationTaskTypesHasBeenSet = true; m_evaluationTaskTypes.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Names (ARNs) of the model(s) used in the model evaluation
     * job.</p>
     */
    inline const Aws::Vector<Aws::String>& GetModelIdentifiers() const{ return m_modelIdentifiers; }
    inline bool ModelIdentifiersHasBeenSet() const { return m_modelIdentifiersHasBeenSet; }
    inline void SetModelIdentifiers(const Aws::Vector<Aws::String>& value) { m_modelIdentifiersHasBeenSet = true; m_modelIdentifiers = value; }
    inline void SetModelIdentifiers(Aws::Vector<Aws::String>&& value) { m_modelIdentifiersHasBeenSet = true; m_modelIdentifiers = std::move(value); }
    inline EvaluationSummary& WithModelIdentifiers(const Aws::Vector<Aws::String>& value) { SetModelIdentifiers(value); return *this;}
    inline EvaluationSummary& WithModelIdentifiers(Aws::Vector<Aws::String>&& value) { SetModelIdentifiers(std::move(value)); return *this;}
    inline EvaluationSummary& AddModelIdentifiers(const Aws::String& value) { m_modelIdentifiersHasBeenSet = true; m_modelIdentifiers.push_back(value); return *this; }
    inline EvaluationSummary& AddModelIdentifiers(Aws::String&& value) { m_modelIdentifiersHasBeenSet = true; m_modelIdentifiers.push_back(std::move(value)); return *this; }
    inline EvaluationSummary& AddModelIdentifiers(const char* value) { m_modelIdentifiersHasBeenSet = true; m_modelIdentifiers.push_back(value); return *this; }
    ///@}
  private:

    Aws::String m_jobArn;
    bool m_jobArnHasBeenSet = false;

    Aws::String m_jobName;
    bool m_jobNameHasBeenSet = false;

    EvaluationJobStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime;
    bool m_creationTimeHasBeenSet = false;

    EvaluationJobType m_jobType;
    bool m_jobTypeHasBeenSet = false;

    Aws::Vector<EvaluationTaskType> m_evaluationTaskTypes;
    bool m_evaluationTaskTypesHasBeenSet = false;

    Aws::Vector<Aws::String> m_modelIdentifiers;
    bool m_modelIdentifiersHasBeenSet = false;
  };

} // namespace Model
} // namespace Bedrock
} // namespace Aws
