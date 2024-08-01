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
    AWS_BEDROCK_API ModelCopyJobSummary();
    AWS_BEDROCK_API ModelCopyJobSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCK_API ModelCopyJobSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCK_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resoource Name (ARN) of the model copy job.</p>
     */
    inline const Aws::String& GetJobArn() const{ return m_jobArn; }
    inline bool JobArnHasBeenSet() const { return m_jobArnHasBeenSet; }
    inline void SetJobArn(const Aws::String& value) { m_jobArnHasBeenSet = true; m_jobArn = value; }
    inline void SetJobArn(Aws::String&& value) { m_jobArnHasBeenSet = true; m_jobArn = std::move(value); }
    inline void SetJobArn(const char* value) { m_jobArnHasBeenSet = true; m_jobArn.assign(value); }
    inline ModelCopyJobSummary& WithJobArn(const Aws::String& value) { SetJobArn(value); return *this;}
    inline ModelCopyJobSummary& WithJobArn(Aws::String&& value) { SetJobArn(std::move(value)); return *this;}
    inline ModelCopyJobSummary& WithJobArn(const char* value) { SetJobArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the model copy job.</p>
     */
    inline const ModelCopyJobStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const ModelCopyJobStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(ModelCopyJobStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline ModelCopyJobSummary& WithStatus(const ModelCopyJobStatus& value) { SetStatus(value); return *this;}
    inline ModelCopyJobSummary& WithStatus(ModelCopyJobStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time that the model copy job was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::move(value); }
    inline ModelCopyJobSummary& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}
    inline ModelCopyJobSummary& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the copied model.</p>
     */
    inline const Aws::String& GetTargetModelArn() const{ return m_targetModelArn; }
    inline bool TargetModelArnHasBeenSet() const { return m_targetModelArnHasBeenSet; }
    inline void SetTargetModelArn(const Aws::String& value) { m_targetModelArnHasBeenSet = true; m_targetModelArn = value; }
    inline void SetTargetModelArn(Aws::String&& value) { m_targetModelArnHasBeenSet = true; m_targetModelArn = std::move(value); }
    inline void SetTargetModelArn(const char* value) { m_targetModelArnHasBeenSet = true; m_targetModelArn.assign(value); }
    inline ModelCopyJobSummary& WithTargetModelArn(const Aws::String& value) { SetTargetModelArn(value); return *this;}
    inline ModelCopyJobSummary& WithTargetModelArn(Aws::String&& value) { SetTargetModelArn(std::move(value)); return *this;}
    inline ModelCopyJobSummary& WithTargetModelArn(const char* value) { SetTargetModelArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the copied model.</p>
     */
    inline const Aws::String& GetTargetModelName() const{ return m_targetModelName; }
    inline bool TargetModelNameHasBeenSet() const { return m_targetModelNameHasBeenSet; }
    inline void SetTargetModelName(const Aws::String& value) { m_targetModelNameHasBeenSet = true; m_targetModelName = value; }
    inline void SetTargetModelName(Aws::String&& value) { m_targetModelNameHasBeenSet = true; m_targetModelName = std::move(value); }
    inline void SetTargetModelName(const char* value) { m_targetModelNameHasBeenSet = true; m_targetModelName.assign(value); }
    inline ModelCopyJobSummary& WithTargetModelName(const Aws::String& value) { SetTargetModelName(value); return *this;}
    inline ModelCopyJobSummary& WithTargetModelName(Aws::String&& value) { SetTargetModelName(std::move(value)); return *this;}
    inline ModelCopyJobSummary& WithTargetModelName(const char* value) { SetTargetModelName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the account that the model being copied originated
     * from.</p>
     */
    inline const Aws::String& GetSourceAccountId() const{ return m_sourceAccountId; }
    inline bool SourceAccountIdHasBeenSet() const { return m_sourceAccountIdHasBeenSet; }
    inline void SetSourceAccountId(const Aws::String& value) { m_sourceAccountIdHasBeenSet = true; m_sourceAccountId = value; }
    inline void SetSourceAccountId(Aws::String&& value) { m_sourceAccountIdHasBeenSet = true; m_sourceAccountId = std::move(value); }
    inline void SetSourceAccountId(const char* value) { m_sourceAccountIdHasBeenSet = true; m_sourceAccountId.assign(value); }
    inline ModelCopyJobSummary& WithSourceAccountId(const Aws::String& value) { SetSourceAccountId(value); return *this;}
    inline ModelCopyJobSummary& WithSourceAccountId(Aws::String&& value) { SetSourceAccountId(std::move(value)); return *this;}
    inline ModelCopyJobSummary& WithSourceAccountId(const char* value) { SetSourceAccountId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the original model being copied.</p>
     */
    inline const Aws::String& GetSourceModelArn() const{ return m_sourceModelArn; }
    inline bool SourceModelArnHasBeenSet() const { return m_sourceModelArnHasBeenSet; }
    inline void SetSourceModelArn(const Aws::String& value) { m_sourceModelArnHasBeenSet = true; m_sourceModelArn = value; }
    inline void SetSourceModelArn(Aws::String&& value) { m_sourceModelArnHasBeenSet = true; m_sourceModelArn = std::move(value); }
    inline void SetSourceModelArn(const char* value) { m_sourceModelArnHasBeenSet = true; m_sourceModelArn.assign(value); }
    inline ModelCopyJobSummary& WithSourceModelArn(const Aws::String& value) { SetSourceModelArn(value); return *this;}
    inline ModelCopyJobSummary& WithSourceModelArn(Aws::String&& value) { SetSourceModelArn(std::move(value)); return *this;}
    inline ModelCopyJobSummary& WithSourceModelArn(const char* value) { SetSourceModelArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the KMS key used to encrypt the copied
     * model.</p>
     */
    inline const Aws::String& GetTargetModelKmsKeyArn() const{ return m_targetModelKmsKeyArn; }
    inline bool TargetModelKmsKeyArnHasBeenSet() const { return m_targetModelKmsKeyArnHasBeenSet; }
    inline void SetTargetModelKmsKeyArn(const Aws::String& value) { m_targetModelKmsKeyArnHasBeenSet = true; m_targetModelKmsKeyArn = value; }
    inline void SetTargetModelKmsKeyArn(Aws::String&& value) { m_targetModelKmsKeyArnHasBeenSet = true; m_targetModelKmsKeyArn = std::move(value); }
    inline void SetTargetModelKmsKeyArn(const char* value) { m_targetModelKmsKeyArnHasBeenSet = true; m_targetModelKmsKeyArn.assign(value); }
    inline ModelCopyJobSummary& WithTargetModelKmsKeyArn(const Aws::String& value) { SetTargetModelKmsKeyArn(value); return *this;}
    inline ModelCopyJobSummary& WithTargetModelKmsKeyArn(Aws::String&& value) { SetTargetModelKmsKeyArn(std::move(value)); return *this;}
    inline ModelCopyJobSummary& WithTargetModelKmsKeyArn(const char* value) { SetTargetModelKmsKeyArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Tags associated with the copied model.</p>
     */
    inline const Aws::Vector<Tag>& GetTargetModelTags() const{ return m_targetModelTags; }
    inline bool TargetModelTagsHasBeenSet() const { return m_targetModelTagsHasBeenSet; }
    inline void SetTargetModelTags(const Aws::Vector<Tag>& value) { m_targetModelTagsHasBeenSet = true; m_targetModelTags = value; }
    inline void SetTargetModelTags(Aws::Vector<Tag>&& value) { m_targetModelTagsHasBeenSet = true; m_targetModelTags = std::move(value); }
    inline ModelCopyJobSummary& WithTargetModelTags(const Aws::Vector<Tag>& value) { SetTargetModelTags(value); return *this;}
    inline ModelCopyJobSummary& WithTargetModelTags(Aws::Vector<Tag>&& value) { SetTargetModelTags(std::move(value)); return *this;}
    inline ModelCopyJobSummary& AddTargetModelTags(const Tag& value) { m_targetModelTagsHasBeenSet = true; m_targetModelTags.push_back(value); return *this; }
    inline ModelCopyJobSummary& AddTargetModelTags(Tag&& value) { m_targetModelTagsHasBeenSet = true; m_targetModelTags.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>If a model fails to be copied, a message describing why the job failed is
     * included here.</p>
     */
    inline const Aws::String& GetFailureMessage() const{ return m_failureMessage; }
    inline bool FailureMessageHasBeenSet() const { return m_failureMessageHasBeenSet; }
    inline void SetFailureMessage(const Aws::String& value) { m_failureMessageHasBeenSet = true; m_failureMessage = value; }
    inline void SetFailureMessage(Aws::String&& value) { m_failureMessageHasBeenSet = true; m_failureMessage = std::move(value); }
    inline void SetFailureMessage(const char* value) { m_failureMessageHasBeenSet = true; m_failureMessage.assign(value); }
    inline ModelCopyJobSummary& WithFailureMessage(const Aws::String& value) { SetFailureMessage(value); return *this;}
    inline ModelCopyJobSummary& WithFailureMessage(Aws::String&& value) { SetFailureMessage(std::move(value)); return *this;}
    inline ModelCopyJobSummary& WithFailureMessage(const char* value) { SetFailureMessage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the original model being copied.</p>
     */
    inline const Aws::String& GetSourceModelName() const{ return m_sourceModelName; }
    inline bool SourceModelNameHasBeenSet() const { return m_sourceModelNameHasBeenSet; }
    inline void SetSourceModelName(const Aws::String& value) { m_sourceModelNameHasBeenSet = true; m_sourceModelName = value; }
    inline void SetSourceModelName(Aws::String&& value) { m_sourceModelNameHasBeenSet = true; m_sourceModelName = std::move(value); }
    inline void SetSourceModelName(const char* value) { m_sourceModelNameHasBeenSet = true; m_sourceModelName.assign(value); }
    inline ModelCopyJobSummary& WithSourceModelName(const Aws::String& value) { SetSourceModelName(value); return *this;}
    inline ModelCopyJobSummary& WithSourceModelName(Aws::String&& value) { SetSourceModelName(std::move(value)); return *this;}
    inline ModelCopyJobSummary& WithSourceModelName(const char* value) { SetSourceModelName(value); return *this;}
    ///@}
  private:

    Aws::String m_jobArn;
    bool m_jobArnHasBeenSet = false;

    ModelCopyJobStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime;
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
