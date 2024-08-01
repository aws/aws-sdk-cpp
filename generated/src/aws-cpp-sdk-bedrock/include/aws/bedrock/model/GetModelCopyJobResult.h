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
    AWS_BEDROCK_API GetModelCopyJobResult();
    AWS_BEDROCK_API GetModelCopyJobResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BEDROCK_API GetModelCopyJobResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the model copy job.</p>
     */
    inline const Aws::String& GetJobArn() const{ return m_jobArn; }
    inline void SetJobArn(const Aws::String& value) { m_jobArn = value; }
    inline void SetJobArn(Aws::String&& value) { m_jobArn = std::move(value); }
    inline void SetJobArn(const char* value) { m_jobArn.assign(value); }
    inline GetModelCopyJobResult& WithJobArn(const Aws::String& value) { SetJobArn(value); return *this;}
    inline GetModelCopyJobResult& WithJobArn(Aws::String&& value) { SetJobArn(std::move(value)); return *this;}
    inline GetModelCopyJobResult& WithJobArn(const char* value) { SetJobArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the model copy job.</p>
     */
    inline const ModelCopyJobStatus& GetStatus() const{ return m_status; }
    inline void SetStatus(const ModelCopyJobStatus& value) { m_status = value; }
    inline void SetStatus(ModelCopyJobStatus&& value) { m_status = std::move(value); }
    inline GetModelCopyJobResult& WithStatus(const ModelCopyJobStatus& value) { SetStatus(value); return *this;}
    inline GetModelCopyJobResult& WithStatus(ModelCopyJobStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time at which the model copy job was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTime = value; }
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTime = std::move(value); }
    inline GetModelCopyJobResult& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}
    inline GetModelCopyJobResult& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the copied model.</p>
     */
    inline const Aws::String& GetTargetModelArn() const{ return m_targetModelArn; }
    inline void SetTargetModelArn(const Aws::String& value) { m_targetModelArn = value; }
    inline void SetTargetModelArn(Aws::String&& value) { m_targetModelArn = std::move(value); }
    inline void SetTargetModelArn(const char* value) { m_targetModelArn.assign(value); }
    inline GetModelCopyJobResult& WithTargetModelArn(const Aws::String& value) { SetTargetModelArn(value); return *this;}
    inline GetModelCopyJobResult& WithTargetModelArn(Aws::String&& value) { SetTargetModelArn(std::move(value)); return *this;}
    inline GetModelCopyJobResult& WithTargetModelArn(const char* value) { SetTargetModelArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the copied model.</p>
     */
    inline const Aws::String& GetTargetModelName() const{ return m_targetModelName; }
    inline void SetTargetModelName(const Aws::String& value) { m_targetModelName = value; }
    inline void SetTargetModelName(Aws::String&& value) { m_targetModelName = std::move(value); }
    inline void SetTargetModelName(const char* value) { m_targetModelName.assign(value); }
    inline GetModelCopyJobResult& WithTargetModelName(const Aws::String& value) { SetTargetModelName(value); return *this;}
    inline GetModelCopyJobResult& WithTargetModelName(Aws::String&& value) { SetTargetModelName(std::move(value)); return *this;}
    inline GetModelCopyJobResult& WithTargetModelName(const char* value) { SetTargetModelName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the account that the model being copied originated
     * from.</p>
     */
    inline const Aws::String& GetSourceAccountId() const{ return m_sourceAccountId; }
    inline void SetSourceAccountId(const Aws::String& value) { m_sourceAccountId = value; }
    inline void SetSourceAccountId(Aws::String&& value) { m_sourceAccountId = std::move(value); }
    inline void SetSourceAccountId(const char* value) { m_sourceAccountId.assign(value); }
    inline GetModelCopyJobResult& WithSourceAccountId(const Aws::String& value) { SetSourceAccountId(value); return *this;}
    inline GetModelCopyJobResult& WithSourceAccountId(Aws::String&& value) { SetSourceAccountId(std::move(value)); return *this;}
    inline GetModelCopyJobResult& WithSourceAccountId(const char* value) { SetSourceAccountId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the original model being copied.</p>
     */
    inline const Aws::String& GetSourceModelArn() const{ return m_sourceModelArn; }
    inline void SetSourceModelArn(const Aws::String& value) { m_sourceModelArn = value; }
    inline void SetSourceModelArn(Aws::String&& value) { m_sourceModelArn = std::move(value); }
    inline void SetSourceModelArn(const char* value) { m_sourceModelArn.assign(value); }
    inline GetModelCopyJobResult& WithSourceModelArn(const Aws::String& value) { SetSourceModelArn(value); return *this;}
    inline GetModelCopyJobResult& WithSourceModelArn(Aws::String&& value) { SetSourceModelArn(std::move(value)); return *this;}
    inline GetModelCopyJobResult& WithSourceModelArn(const char* value) { SetSourceModelArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the KMS key encrypting the copied
     * model.</p>
     */
    inline const Aws::String& GetTargetModelKmsKeyArn() const{ return m_targetModelKmsKeyArn; }
    inline void SetTargetModelKmsKeyArn(const Aws::String& value) { m_targetModelKmsKeyArn = value; }
    inline void SetTargetModelKmsKeyArn(Aws::String&& value) { m_targetModelKmsKeyArn = std::move(value); }
    inline void SetTargetModelKmsKeyArn(const char* value) { m_targetModelKmsKeyArn.assign(value); }
    inline GetModelCopyJobResult& WithTargetModelKmsKeyArn(const Aws::String& value) { SetTargetModelKmsKeyArn(value); return *this;}
    inline GetModelCopyJobResult& WithTargetModelKmsKeyArn(Aws::String&& value) { SetTargetModelKmsKeyArn(std::move(value)); return *this;}
    inline GetModelCopyJobResult& WithTargetModelKmsKeyArn(const char* value) { SetTargetModelKmsKeyArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags associated with the copied model.</p>
     */
    inline const Aws::Vector<Tag>& GetTargetModelTags() const{ return m_targetModelTags; }
    inline void SetTargetModelTags(const Aws::Vector<Tag>& value) { m_targetModelTags = value; }
    inline void SetTargetModelTags(Aws::Vector<Tag>&& value) { m_targetModelTags = std::move(value); }
    inline GetModelCopyJobResult& WithTargetModelTags(const Aws::Vector<Tag>& value) { SetTargetModelTags(value); return *this;}
    inline GetModelCopyJobResult& WithTargetModelTags(Aws::Vector<Tag>&& value) { SetTargetModelTags(std::move(value)); return *this;}
    inline GetModelCopyJobResult& AddTargetModelTags(const Tag& value) { m_targetModelTags.push_back(value); return *this; }
    inline GetModelCopyJobResult& AddTargetModelTags(Tag&& value) { m_targetModelTags.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>An error message for why the model copy job failed.</p>
     */
    inline const Aws::String& GetFailureMessage() const{ return m_failureMessage; }
    inline void SetFailureMessage(const Aws::String& value) { m_failureMessage = value; }
    inline void SetFailureMessage(Aws::String&& value) { m_failureMessage = std::move(value); }
    inline void SetFailureMessage(const char* value) { m_failureMessage.assign(value); }
    inline GetModelCopyJobResult& WithFailureMessage(const Aws::String& value) { SetFailureMessage(value); return *this;}
    inline GetModelCopyJobResult& WithFailureMessage(Aws::String&& value) { SetFailureMessage(std::move(value)); return *this;}
    inline GetModelCopyJobResult& WithFailureMessage(const char* value) { SetFailureMessage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the original model being copied.</p>
     */
    inline const Aws::String& GetSourceModelName() const{ return m_sourceModelName; }
    inline void SetSourceModelName(const Aws::String& value) { m_sourceModelName = value; }
    inline void SetSourceModelName(Aws::String&& value) { m_sourceModelName = std::move(value); }
    inline void SetSourceModelName(const char* value) { m_sourceModelName.assign(value); }
    inline GetModelCopyJobResult& WithSourceModelName(const Aws::String& value) { SetSourceModelName(value); return *this;}
    inline GetModelCopyJobResult& WithSourceModelName(Aws::String&& value) { SetSourceModelName(std::move(value)); return *this;}
    inline GetModelCopyJobResult& WithSourceModelName(const char* value) { SetSourceModelName(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetModelCopyJobResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetModelCopyJobResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetModelCopyJobResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_jobArn;

    ModelCopyJobStatus m_status;

    Aws::Utils::DateTime m_creationTime;

    Aws::String m_targetModelArn;

    Aws::String m_targetModelName;

    Aws::String m_sourceAccountId;

    Aws::String m_sourceModelArn;

    Aws::String m_targetModelKmsKeyArn;

    Aws::Vector<Tag> m_targetModelTags;

    Aws::String m_failureMessage;

    Aws::String m_sourceModelName;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Bedrock
} // namespace Aws
