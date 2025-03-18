/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock/Bedrock_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/bedrock/model/ModelCopyJobStatus.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/bedrock/model/Tag.h>
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
   * <p>Contains details about each model copy job.</p> <p>This data type is used in
   * the following API operations:</p> <ul> <li> <p> <a
   * href="https://docs.aws.amazon.com/bedrock/latest/APIReference/API_ListModelCopyJobs.html#API_ListModelCopyJobs_ResponseSyntax">ListModelCopyJobs
   * response</a> </p> </li> </ul><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-2023-04-20/ModelCopyJobSummary">AWS
   * API Reference</a></p>
   */
  class ModelCopyJobSummary
  {
  public:
    AWS_BEDROCK_API ModelCopyJobSummary() = default;
    AWS_BEDROCK_API ModelCopyJobSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCK_API ModelCopyJobSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCK_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resoource Name (ARN) of the model copy job.</p>
     */
    inline const Aws::String& GetJobArn() const { return m_jobArn; }
    inline bool JobArnHasBeenSet() const { return m_jobArnHasBeenSet; }
    template<typename JobArnT = Aws::String>
    void SetJobArn(JobArnT&& value) { m_jobArnHasBeenSet = true; m_jobArn = std::forward<JobArnT>(value); }
    template<typename JobArnT = Aws::String>
    ModelCopyJobSummary& WithJobArn(JobArnT&& value) { SetJobArn(std::forward<JobArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the model copy job.</p>
     */
    inline ModelCopyJobStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(ModelCopyJobStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline ModelCopyJobSummary& WithStatus(ModelCopyJobStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time that the model copy job was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const { return m_creationTime; }
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    void SetCreationTime(CreationTimeT&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::forward<CreationTimeT>(value); }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    ModelCopyJobSummary& WithCreationTime(CreationTimeT&& value) { SetCreationTime(std::forward<CreationTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the copied model.</p>
     */
    inline const Aws::String& GetTargetModelArn() const { return m_targetModelArn; }
    inline bool TargetModelArnHasBeenSet() const { return m_targetModelArnHasBeenSet; }
    template<typename TargetModelArnT = Aws::String>
    void SetTargetModelArn(TargetModelArnT&& value) { m_targetModelArnHasBeenSet = true; m_targetModelArn = std::forward<TargetModelArnT>(value); }
    template<typename TargetModelArnT = Aws::String>
    ModelCopyJobSummary& WithTargetModelArn(TargetModelArnT&& value) { SetTargetModelArn(std::forward<TargetModelArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the copied model.</p>
     */
    inline const Aws::String& GetTargetModelName() const { return m_targetModelName; }
    inline bool TargetModelNameHasBeenSet() const { return m_targetModelNameHasBeenSet; }
    template<typename TargetModelNameT = Aws::String>
    void SetTargetModelName(TargetModelNameT&& value) { m_targetModelNameHasBeenSet = true; m_targetModelName = std::forward<TargetModelNameT>(value); }
    template<typename TargetModelNameT = Aws::String>
    ModelCopyJobSummary& WithTargetModelName(TargetModelNameT&& value) { SetTargetModelName(std::forward<TargetModelNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the account that the model being copied originated
     * from.</p>
     */
    inline const Aws::String& GetSourceAccountId() const { return m_sourceAccountId; }
    inline bool SourceAccountIdHasBeenSet() const { return m_sourceAccountIdHasBeenSet; }
    template<typename SourceAccountIdT = Aws::String>
    void SetSourceAccountId(SourceAccountIdT&& value) { m_sourceAccountIdHasBeenSet = true; m_sourceAccountId = std::forward<SourceAccountIdT>(value); }
    template<typename SourceAccountIdT = Aws::String>
    ModelCopyJobSummary& WithSourceAccountId(SourceAccountIdT&& value) { SetSourceAccountId(std::forward<SourceAccountIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the original model being copied.</p>
     */
    inline const Aws::String& GetSourceModelArn() const { return m_sourceModelArn; }
    inline bool SourceModelArnHasBeenSet() const { return m_sourceModelArnHasBeenSet; }
    template<typename SourceModelArnT = Aws::String>
    void SetSourceModelArn(SourceModelArnT&& value) { m_sourceModelArnHasBeenSet = true; m_sourceModelArn = std::forward<SourceModelArnT>(value); }
    template<typename SourceModelArnT = Aws::String>
    ModelCopyJobSummary& WithSourceModelArn(SourceModelArnT&& value) { SetSourceModelArn(std::forward<SourceModelArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the KMS key used to encrypt the copied
     * model.</p>
     */
    inline const Aws::String& GetTargetModelKmsKeyArn() const { return m_targetModelKmsKeyArn; }
    inline bool TargetModelKmsKeyArnHasBeenSet() const { return m_targetModelKmsKeyArnHasBeenSet; }
    template<typename TargetModelKmsKeyArnT = Aws::String>
    void SetTargetModelKmsKeyArn(TargetModelKmsKeyArnT&& value) { m_targetModelKmsKeyArnHasBeenSet = true; m_targetModelKmsKeyArn = std::forward<TargetModelKmsKeyArnT>(value); }
    template<typename TargetModelKmsKeyArnT = Aws::String>
    ModelCopyJobSummary& WithTargetModelKmsKeyArn(TargetModelKmsKeyArnT&& value) { SetTargetModelKmsKeyArn(std::forward<TargetModelKmsKeyArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Tags associated with the copied model.</p>
     */
    inline const Aws::Vector<Tag>& GetTargetModelTags() const { return m_targetModelTags; }
    inline bool TargetModelTagsHasBeenSet() const { return m_targetModelTagsHasBeenSet; }
    template<typename TargetModelTagsT = Aws::Vector<Tag>>
    void SetTargetModelTags(TargetModelTagsT&& value) { m_targetModelTagsHasBeenSet = true; m_targetModelTags = std::forward<TargetModelTagsT>(value); }
    template<typename TargetModelTagsT = Aws::Vector<Tag>>
    ModelCopyJobSummary& WithTargetModelTags(TargetModelTagsT&& value) { SetTargetModelTags(std::forward<TargetModelTagsT>(value)); return *this;}
    template<typename TargetModelTagsT = Tag>
    ModelCopyJobSummary& AddTargetModelTags(TargetModelTagsT&& value) { m_targetModelTagsHasBeenSet = true; m_targetModelTags.emplace_back(std::forward<TargetModelTagsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>If a model fails to be copied, a message describing why the job failed is
     * included here.</p>
     */
    inline const Aws::String& GetFailureMessage() const { return m_failureMessage; }
    inline bool FailureMessageHasBeenSet() const { return m_failureMessageHasBeenSet; }
    template<typename FailureMessageT = Aws::String>
    void SetFailureMessage(FailureMessageT&& value) { m_failureMessageHasBeenSet = true; m_failureMessage = std::forward<FailureMessageT>(value); }
    template<typename FailureMessageT = Aws::String>
    ModelCopyJobSummary& WithFailureMessage(FailureMessageT&& value) { SetFailureMessage(std::forward<FailureMessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the original model being copied.</p>
     */
    inline const Aws::String& GetSourceModelName() const { return m_sourceModelName; }
    inline bool SourceModelNameHasBeenSet() const { return m_sourceModelNameHasBeenSet; }
    template<typename SourceModelNameT = Aws::String>
    void SetSourceModelName(SourceModelNameT&& value) { m_sourceModelNameHasBeenSet = true; m_sourceModelName = std::forward<SourceModelNameT>(value); }
    template<typename SourceModelNameT = Aws::String>
    ModelCopyJobSummary& WithSourceModelName(SourceModelNameT&& value) { SetSourceModelName(std::forward<SourceModelNameT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_jobArn;
    bool m_jobArnHasBeenSet = false;

    ModelCopyJobStatus m_status{ModelCopyJobStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime{};
    bool m_creationTimeHasBeenSet = false;

    Aws::String m_targetModelArn;
    bool m_targetModelArnHasBeenSet = false;

    Aws::String m_targetModelName;
    bool m_targetModelNameHasBeenSet = false;

    Aws::String m_sourceAccountId;
    bool m_sourceAccountIdHasBeenSet = false;

    Aws::String m_sourceModelArn;
    bool m_sourceModelArnHasBeenSet = false;

    Aws::String m_targetModelKmsKeyArn;
    bool m_targetModelKmsKeyArnHasBeenSet = false;

    Aws::Vector<Tag> m_targetModelTags;
    bool m_targetModelTagsHasBeenSet = false;

    Aws::String m_failureMessage;
    bool m_failureMessageHasBeenSet = false;

    Aws::String m_sourceModelName;
    bool m_sourceModelNameHasBeenSet = false;
  };

} // namespace Model
} // namespace Bedrock
} // namespace Aws
