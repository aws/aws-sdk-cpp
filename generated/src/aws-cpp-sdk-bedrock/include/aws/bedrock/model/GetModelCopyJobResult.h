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
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace Bedrock
{
namespace Model
{
  class GetModelCopyJobResult
  {
  public:
    AWS_BEDROCK_API GetModelCopyJobResult() = default;
    AWS_BEDROCK_API GetModelCopyJobResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BEDROCK_API GetModelCopyJobResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the model copy job.</p>
     */
    inline const Aws::String& GetJobArn() const { return m_jobArn; }
    template<typename JobArnT = Aws::String>
    void SetJobArn(JobArnT&& value) { m_jobArnHasBeenSet = true; m_jobArn = std::forward<JobArnT>(value); }
    template<typename JobArnT = Aws::String>
    GetModelCopyJobResult& WithJobArn(JobArnT&& value) { SetJobArn(std::forward<JobArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the model copy job.</p>
     */
    inline ModelCopyJobStatus GetStatus() const { return m_status; }
    inline void SetStatus(ModelCopyJobStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline GetModelCopyJobResult& WithStatus(ModelCopyJobStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time at which the model copy job was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const { return m_creationTime; }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    void SetCreationTime(CreationTimeT&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::forward<CreationTimeT>(value); }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    GetModelCopyJobResult& WithCreationTime(CreationTimeT&& value) { SetCreationTime(std::forward<CreationTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the copied model.</p>
     */
    inline const Aws::String& GetTargetModelArn() const { return m_targetModelArn; }
    template<typename TargetModelArnT = Aws::String>
    void SetTargetModelArn(TargetModelArnT&& value) { m_targetModelArnHasBeenSet = true; m_targetModelArn = std::forward<TargetModelArnT>(value); }
    template<typename TargetModelArnT = Aws::String>
    GetModelCopyJobResult& WithTargetModelArn(TargetModelArnT&& value) { SetTargetModelArn(std::forward<TargetModelArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the copied model.</p>
     */
    inline const Aws::String& GetTargetModelName() const { return m_targetModelName; }
    template<typename TargetModelNameT = Aws::String>
    void SetTargetModelName(TargetModelNameT&& value) { m_targetModelNameHasBeenSet = true; m_targetModelName = std::forward<TargetModelNameT>(value); }
    template<typename TargetModelNameT = Aws::String>
    GetModelCopyJobResult& WithTargetModelName(TargetModelNameT&& value) { SetTargetModelName(std::forward<TargetModelNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the account that the model being copied originated
     * from.</p>
     */
    inline const Aws::String& GetSourceAccountId() const { return m_sourceAccountId; }
    template<typename SourceAccountIdT = Aws::String>
    void SetSourceAccountId(SourceAccountIdT&& value) { m_sourceAccountIdHasBeenSet = true; m_sourceAccountId = std::forward<SourceAccountIdT>(value); }
    template<typename SourceAccountIdT = Aws::String>
    GetModelCopyJobResult& WithSourceAccountId(SourceAccountIdT&& value) { SetSourceAccountId(std::forward<SourceAccountIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the original model being copied.</p>
     */
    inline const Aws::String& GetSourceModelArn() const { return m_sourceModelArn; }
    template<typename SourceModelArnT = Aws::String>
    void SetSourceModelArn(SourceModelArnT&& value) { m_sourceModelArnHasBeenSet = true; m_sourceModelArn = std::forward<SourceModelArnT>(value); }
    template<typename SourceModelArnT = Aws::String>
    GetModelCopyJobResult& WithSourceModelArn(SourceModelArnT&& value) { SetSourceModelArn(std::forward<SourceModelArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the KMS key encrypting the copied
     * model.</p>
     */
    inline const Aws::String& GetTargetModelKmsKeyArn() const { return m_targetModelKmsKeyArn; }
    template<typename TargetModelKmsKeyArnT = Aws::String>
    void SetTargetModelKmsKeyArn(TargetModelKmsKeyArnT&& value) { m_targetModelKmsKeyArnHasBeenSet = true; m_targetModelKmsKeyArn = std::forward<TargetModelKmsKeyArnT>(value); }
    template<typename TargetModelKmsKeyArnT = Aws::String>
    GetModelCopyJobResult& WithTargetModelKmsKeyArn(TargetModelKmsKeyArnT&& value) { SetTargetModelKmsKeyArn(std::forward<TargetModelKmsKeyArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags associated with the copied model.</p>
     */
    inline const Aws::Vector<Tag>& GetTargetModelTags() const { return m_targetModelTags; }
    template<typename TargetModelTagsT = Aws::Vector<Tag>>
    void SetTargetModelTags(TargetModelTagsT&& value) { m_targetModelTagsHasBeenSet = true; m_targetModelTags = std::forward<TargetModelTagsT>(value); }
    template<typename TargetModelTagsT = Aws::Vector<Tag>>
    GetModelCopyJobResult& WithTargetModelTags(TargetModelTagsT&& value) { SetTargetModelTags(std::forward<TargetModelTagsT>(value)); return *this;}
    template<typename TargetModelTagsT = Tag>
    GetModelCopyJobResult& AddTargetModelTags(TargetModelTagsT&& value) { m_targetModelTagsHasBeenSet = true; m_targetModelTags.emplace_back(std::forward<TargetModelTagsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>An error message for why the model copy job failed.</p>
     */
    inline const Aws::String& GetFailureMessage() const { return m_failureMessage; }
    template<typename FailureMessageT = Aws::String>
    void SetFailureMessage(FailureMessageT&& value) { m_failureMessageHasBeenSet = true; m_failureMessage = std::forward<FailureMessageT>(value); }
    template<typename FailureMessageT = Aws::String>
    GetModelCopyJobResult& WithFailureMessage(FailureMessageT&& value) { SetFailureMessage(std::forward<FailureMessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the original model being copied.</p>
     */
    inline const Aws::String& GetSourceModelName() const { return m_sourceModelName; }
    template<typename SourceModelNameT = Aws::String>
    void SetSourceModelName(SourceModelNameT&& value) { m_sourceModelNameHasBeenSet = true; m_sourceModelName = std::forward<SourceModelNameT>(value); }
    template<typename SourceModelNameT = Aws::String>
    GetModelCopyJobResult& WithSourceModelName(SourceModelNameT&& value) { SetSourceModelName(std::forward<SourceModelNameT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetModelCopyJobResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
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

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Bedrock
} // namespace Aws
