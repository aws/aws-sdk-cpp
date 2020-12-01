/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/PipelineExecutionStatus.h>
#include <aws/core/utils/DateTime.h>
#include <aws/sagemaker/model/UserContext.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sagemaker/model/Parameter.h>
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
namespace SageMaker
{
namespace Model
{

  /**
   * <p>An execution of a pipeline.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/PipelineExecution">AWS
   * API Reference</a></p>
   */
  class AWS_SAGEMAKER_API PipelineExecution
  {
  public:
    PipelineExecution();
    PipelineExecution(Aws::Utils::Json::JsonView jsonValue);
    PipelineExecution& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Resource Name (ARN) of the pipeline that was executed.</p>
     */
    inline const Aws::String& GetPipelineArn() const{ return m_pipelineArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the pipeline that was executed.</p>
     */
    inline bool PipelineArnHasBeenSet() const { return m_pipelineArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the pipeline that was executed.</p>
     */
    inline void SetPipelineArn(const Aws::String& value) { m_pipelineArnHasBeenSet = true; m_pipelineArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the pipeline that was executed.</p>
     */
    inline void SetPipelineArn(Aws::String&& value) { m_pipelineArnHasBeenSet = true; m_pipelineArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the pipeline that was executed.</p>
     */
    inline void SetPipelineArn(const char* value) { m_pipelineArnHasBeenSet = true; m_pipelineArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the pipeline that was executed.</p>
     */
    inline PipelineExecution& WithPipelineArn(const Aws::String& value) { SetPipelineArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the pipeline that was executed.</p>
     */
    inline PipelineExecution& WithPipelineArn(Aws::String&& value) { SetPipelineArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the pipeline that was executed.</p>
     */
    inline PipelineExecution& WithPipelineArn(const char* value) { SetPipelineArn(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the pipeline execution.</p>
     */
    inline const Aws::String& GetPipelineExecutionArn() const{ return m_pipelineExecutionArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the pipeline execution.</p>
     */
    inline bool PipelineExecutionArnHasBeenSet() const { return m_pipelineExecutionArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the pipeline execution.</p>
     */
    inline void SetPipelineExecutionArn(const Aws::String& value) { m_pipelineExecutionArnHasBeenSet = true; m_pipelineExecutionArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the pipeline execution.</p>
     */
    inline void SetPipelineExecutionArn(Aws::String&& value) { m_pipelineExecutionArnHasBeenSet = true; m_pipelineExecutionArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the pipeline execution.</p>
     */
    inline void SetPipelineExecutionArn(const char* value) { m_pipelineExecutionArnHasBeenSet = true; m_pipelineExecutionArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the pipeline execution.</p>
     */
    inline PipelineExecution& WithPipelineExecutionArn(const Aws::String& value) { SetPipelineExecutionArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the pipeline execution.</p>
     */
    inline PipelineExecution& WithPipelineExecutionArn(Aws::String&& value) { SetPipelineExecutionArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the pipeline execution.</p>
     */
    inline PipelineExecution& WithPipelineExecutionArn(const char* value) { SetPipelineExecutionArn(value); return *this;}


    /**
     * <p>The display name of the pipeline execution.</p>
     */
    inline const Aws::String& GetPipelineExecutionDisplayName() const{ return m_pipelineExecutionDisplayName; }

    /**
     * <p>The display name of the pipeline execution.</p>
     */
    inline bool PipelineExecutionDisplayNameHasBeenSet() const { return m_pipelineExecutionDisplayNameHasBeenSet; }

    /**
     * <p>The display name of the pipeline execution.</p>
     */
    inline void SetPipelineExecutionDisplayName(const Aws::String& value) { m_pipelineExecutionDisplayNameHasBeenSet = true; m_pipelineExecutionDisplayName = value; }

    /**
     * <p>The display name of the pipeline execution.</p>
     */
    inline void SetPipelineExecutionDisplayName(Aws::String&& value) { m_pipelineExecutionDisplayNameHasBeenSet = true; m_pipelineExecutionDisplayName = std::move(value); }

    /**
     * <p>The display name of the pipeline execution.</p>
     */
    inline void SetPipelineExecutionDisplayName(const char* value) { m_pipelineExecutionDisplayNameHasBeenSet = true; m_pipelineExecutionDisplayName.assign(value); }

    /**
     * <p>The display name of the pipeline execution.</p>
     */
    inline PipelineExecution& WithPipelineExecutionDisplayName(const Aws::String& value) { SetPipelineExecutionDisplayName(value); return *this;}

    /**
     * <p>The display name of the pipeline execution.</p>
     */
    inline PipelineExecution& WithPipelineExecutionDisplayName(Aws::String&& value) { SetPipelineExecutionDisplayName(std::move(value)); return *this;}

    /**
     * <p>The display name of the pipeline execution.</p>
     */
    inline PipelineExecution& WithPipelineExecutionDisplayName(const char* value) { SetPipelineExecutionDisplayName(value); return *this;}


    /**
     * <p>The status of the pipeline status.</p>
     */
    inline const PipelineExecutionStatus& GetPipelineExecutionStatus() const{ return m_pipelineExecutionStatus; }

    /**
     * <p>The status of the pipeline status.</p>
     */
    inline bool PipelineExecutionStatusHasBeenSet() const { return m_pipelineExecutionStatusHasBeenSet; }

    /**
     * <p>The status of the pipeline status.</p>
     */
    inline void SetPipelineExecutionStatus(const PipelineExecutionStatus& value) { m_pipelineExecutionStatusHasBeenSet = true; m_pipelineExecutionStatus = value; }

    /**
     * <p>The status of the pipeline status.</p>
     */
    inline void SetPipelineExecutionStatus(PipelineExecutionStatus&& value) { m_pipelineExecutionStatusHasBeenSet = true; m_pipelineExecutionStatus = std::move(value); }

    /**
     * <p>The status of the pipeline status.</p>
     */
    inline PipelineExecution& WithPipelineExecutionStatus(const PipelineExecutionStatus& value) { SetPipelineExecutionStatus(value); return *this;}

    /**
     * <p>The status of the pipeline status.</p>
     */
    inline PipelineExecution& WithPipelineExecutionStatus(PipelineExecutionStatus&& value) { SetPipelineExecutionStatus(std::move(value)); return *this;}


    /**
     * <p>The description of the pipeline execution.</p>
     */
    inline const Aws::String& GetPipelineExecutionDescription() const{ return m_pipelineExecutionDescription; }

    /**
     * <p>The description of the pipeline execution.</p>
     */
    inline bool PipelineExecutionDescriptionHasBeenSet() const { return m_pipelineExecutionDescriptionHasBeenSet; }

    /**
     * <p>The description of the pipeline execution.</p>
     */
    inline void SetPipelineExecutionDescription(const Aws::String& value) { m_pipelineExecutionDescriptionHasBeenSet = true; m_pipelineExecutionDescription = value; }

    /**
     * <p>The description of the pipeline execution.</p>
     */
    inline void SetPipelineExecutionDescription(Aws::String&& value) { m_pipelineExecutionDescriptionHasBeenSet = true; m_pipelineExecutionDescription = std::move(value); }

    /**
     * <p>The description of the pipeline execution.</p>
     */
    inline void SetPipelineExecutionDescription(const char* value) { m_pipelineExecutionDescriptionHasBeenSet = true; m_pipelineExecutionDescription.assign(value); }

    /**
     * <p>The description of the pipeline execution.</p>
     */
    inline PipelineExecution& WithPipelineExecutionDescription(const Aws::String& value) { SetPipelineExecutionDescription(value); return *this;}

    /**
     * <p>The description of the pipeline execution.</p>
     */
    inline PipelineExecution& WithPipelineExecutionDescription(Aws::String&& value) { SetPipelineExecutionDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the pipeline execution.</p>
     */
    inline PipelineExecution& WithPipelineExecutionDescription(const char* value) { SetPipelineExecutionDescription(value); return *this;}


    /**
     * <p>The creation time of the pipeline execution.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }

    /**
     * <p>The creation time of the pipeline execution.</p>
     */
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }

    /**
     * <p>The creation time of the pipeline execution.</p>
     */
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }

    /**
     * <p>The creation time of the pipeline execution.</p>
     */
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::move(value); }

    /**
     * <p>The creation time of the pipeline execution.</p>
     */
    inline PipelineExecution& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}

    /**
     * <p>The creation time of the pipeline execution.</p>
     */
    inline PipelineExecution& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}


    /**
     * <p>The time that the pipeline execution was last modified.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTime() const{ return m_lastModifiedTime; }

    /**
     * <p>The time that the pipeline execution was last modified.</p>
     */
    inline bool LastModifiedTimeHasBeenSet() const { return m_lastModifiedTimeHasBeenSet; }

    /**
     * <p>The time that the pipeline execution was last modified.</p>
     */
    inline void SetLastModifiedTime(const Aws::Utils::DateTime& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = value; }

    /**
     * <p>The time that the pipeline execution was last modified.</p>
     */
    inline void SetLastModifiedTime(Aws::Utils::DateTime&& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = std::move(value); }

    /**
     * <p>The time that the pipeline execution was last modified.</p>
     */
    inline PipelineExecution& WithLastModifiedTime(const Aws::Utils::DateTime& value) { SetLastModifiedTime(value); return *this;}

    /**
     * <p>The time that the pipeline execution was last modified.</p>
     */
    inline PipelineExecution& WithLastModifiedTime(Aws::Utils::DateTime&& value) { SetLastModifiedTime(std::move(value)); return *this;}


    
    inline const UserContext& GetCreatedBy() const{ return m_createdBy; }

    
    inline bool CreatedByHasBeenSet() const { return m_createdByHasBeenSet; }

    
    inline void SetCreatedBy(const UserContext& value) { m_createdByHasBeenSet = true; m_createdBy = value; }

    
    inline void SetCreatedBy(UserContext&& value) { m_createdByHasBeenSet = true; m_createdBy = std::move(value); }

    
    inline PipelineExecution& WithCreatedBy(const UserContext& value) { SetCreatedBy(value); return *this;}

    
    inline PipelineExecution& WithCreatedBy(UserContext&& value) { SetCreatedBy(std::move(value)); return *this;}


    
    inline const UserContext& GetLastModifiedBy() const{ return m_lastModifiedBy; }

    
    inline bool LastModifiedByHasBeenSet() const { return m_lastModifiedByHasBeenSet; }

    
    inline void SetLastModifiedBy(const UserContext& value) { m_lastModifiedByHasBeenSet = true; m_lastModifiedBy = value; }

    
    inline void SetLastModifiedBy(UserContext&& value) { m_lastModifiedByHasBeenSet = true; m_lastModifiedBy = std::move(value); }

    
    inline PipelineExecution& WithLastModifiedBy(const UserContext& value) { SetLastModifiedBy(value); return *this;}

    
    inline PipelineExecution& WithLastModifiedBy(UserContext&& value) { SetLastModifiedBy(std::move(value)); return *this;}


    /**
     * <p>Contains a list of pipeline parameters. This list can be empty. </p>
     */
    inline const Aws::Vector<Parameter>& GetPipelineParameters() const{ return m_pipelineParameters; }

    /**
     * <p>Contains a list of pipeline parameters. This list can be empty. </p>
     */
    inline bool PipelineParametersHasBeenSet() const { return m_pipelineParametersHasBeenSet; }

    /**
     * <p>Contains a list of pipeline parameters. This list can be empty. </p>
     */
    inline void SetPipelineParameters(const Aws::Vector<Parameter>& value) { m_pipelineParametersHasBeenSet = true; m_pipelineParameters = value; }

    /**
     * <p>Contains a list of pipeline parameters. This list can be empty. </p>
     */
    inline void SetPipelineParameters(Aws::Vector<Parameter>&& value) { m_pipelineParametersHasBeenSet = true; m_pipelineParameters = std::move(value); }

    /**
     * <p>Contains a list of pipeline parameters. This list can be empty. </p>
     */
    inline PipelineExecution& WithPipelineParameters(const Aws::Vector<Parameter>& value) { SetPipelineParameters(value); return *this;}

    /**
     * <p>Contains a list of pipeline parameters. This list can be empty. </p>
     */
    inline PipelineExecution& WithPipelineParameters(Aws::Vector<Parameter>&& value) { SetPipelineParameters(std::move(value)); return *this;}

    /**
     * <p>Contains a list of pipeline parameters. This list can be empty. </p>
     */
    inline PipelineExecution& AddPipelineParameters(const Parameter& value) { m_pipelineParametersHasBeenSet = true; m_pipelineParameters.push_back(value); return *this; }

    /**
     * <p>Contains a list of pipeline parameters. This list can be empty. </p>
     */
    inline PipelineExecution& AddPipelineParameters(Parameter&& value) { m_pipelineParametersHasBeenSet = true; m_pipelineParameters.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_pipelineArn;
    bool m_pipelineArnHasBeenSet;

    Aws::String m_pipelineExecutionArn;
    bool m_pipelineExecutionArnHasBeenSet;

    Aws::String m_pipelineExecutionDisplayName;
    bool m_pipelineExecutionDisplayNameHasBeenSet;

    PipelineExecutionStatus m_pipelineExecutionStatus;
    bool m_pipelineExecutionStatusHasBeenSet;

    Aws::String m_pipelineExecutionDescription;
    bool m_pipelineExecutionDescriptionHasBeenSet;

    Aws::Utils::DateTime m_creationTime;
    bool m_creationTimeHasBeenSet;

    Aws::Utils::DateTime m_lastModifiedTime;
    bool m_lastModifiedTimeHasBeenSet;

    UserContext m_createdBy;
    bool m_createdByHasBeenSet;

    UserContext m_lastModifiedBy;
    bool m_lastModifiedByHasBeenSet;

    Aws::Vector<Parameter> m_pipelineParameters;
    bool m_pipelineParametersHasBeenSet;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
