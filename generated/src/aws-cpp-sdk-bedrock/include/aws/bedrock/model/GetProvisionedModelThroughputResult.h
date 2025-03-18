/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock/Bedrock_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/bedrock/model/ProvisionedModelStatus.h>
#include <aws/core/utils/DateTime.h>
#include <aws/bedrock/model/CommitmentDuration.h>
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
  class GetProvisionedModelThroughputResult
  {
  public:
    AWS_BEDROCK_API GetProvisionedModelThroughputResult() = default;
    AWS_BEDROCK_API GetProvisionedModelThroughputResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BEDROCK_API GetProvisionedModelThroughputResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The number of model units allocated to this Provisioned Throughput.</p>
     */
    inline int GetModelUnits() const { return m_modelUnits; }
    inline void SetModelUnits(int value) { m_modelUnitsHasBeenSet = true; m_modelUnits = value; }
    inline GetProvisionedModelThroughputResult& WithModelUnits(int value) { SetModelUnits(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of model units that was requested for this Provisioned
     * Throughput.</p>
     */
    inline int GetDesiredModelUnits() const { return m_desiredModelUnits; }
    inline void SetDesiredModelUnits(int value) { m_desiredModelUnitsHasBeenSet = true; m_desiredModelUnits = value; }
    inline GetProvisionedModelThroughputResult& WithDesiredModelUnits(int value) { SetDesiredModelUnits(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the Provisioned Throughput.</p>
     */
    inline const Aws::String& GetProvisionedModelName() const { return m_provisionedModelName; }
    template<typename ProvisionedModelNameT = Aws::String>
    void SetProvisionedModelName(ProvisionedModelNameT&& value) { m_provisionedModelNameHasBeenSet = true; m_provisionedModelName = std::forward<ProvisionedModelNameT>(value); }
    template<typename ProvisionedModelNameT = Aws::String>
    GetProvisionedModelThroughputResult& WithProvisionedModelName(ProvisionedModelNameT&& value) { SetProvisionedModelName(std::forward<ProvisionedModelNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the Provisioned Throughput.</p>
     */
    inline const Aws::String& GetProvisionedModelArn() const { return m_provisionedModelArn; }
    template<typename ProvisionedModelArnT = Aws::String>
    void SetProvisionedModelArn(ProvisionedModelArnT&& value) { m_provisionedModelArnHasBeenSet = true; m_provisionedModelArn = std::forward<ProvisionedModelArnT>(value); }
    template<typename ProvisionedModelArnT = Aws::String>
    GetProvisionedModelThroughputResult& WithProvisionedModelArn(ProvisionedModelArnT&& value) { SetProvisionedModelArn(std::forward<ProvisionedModelArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the model associated with this Provisioned
     * Throughput.</p>
     */
    inline const Aws::String& GetModelArn() const { return m_modelArn; }
    template<typename ModelArnT = Aws::String>
    void SetModelArn(ModelArnT&& value) { m_modelArnHasBeenSet = true; m_modelArn = std::forward<ModelArnT>(value); }
    template<typename ModelArnT = Aws::String>
    GetProvisionedModelThroughputResult& WithModelArn(ModelArnT&& value) { SetModelArn(std::forward<ModelArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the model requested to be associated to
     * this Provisioned Throughput. This value differs from the <code>modelArn</code>
     * if updating hasn't completed.</p>
     */
    inline const Aws::String& GetDesiredModelArn() const { return m_desiredModelArn; }
    template<typename DesiredModelArnT = Aws::String>
    void SetDesiredModelArn(DesiredModelArnT&& value) { m_desiredModelArnHasBeenSet = true; m_desiredModelArn = std::forward<DesiredModelArnT>(value); }
    template<typename DesiredModelArnT = Aws::String>
    GetProvisionedModelThroughputResult& WithDesiredModelArn(DesiredModelArnT&& value) { SetDesiredModelArn(std::forward<DesiredModelArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the base model for which the Provisioned
     * Throughput was created, or of the base model that the custom model for which the
     * Provisioned Throughput was created was customized.</p>
     */
    inline const Aws::String& GetFoundationModelArn() const { return m_foundationModelArn; }
    template<typename FoundationModelArnT = Aws::String>
    void SetFoundationModelArn(FoundationModelArnT&& value) { m_foundationModelArnHasBeenSet = true; m_foundationModelArn = std::forward<FoundationModelArnT>(value); }
    template<typename FoundationModelArnT = Aws::String>
    GetProvisionedModelThroughputResult& WithFoundationModelArn(FoundationModelArnT&& value) { SetFoundationModelArn(std::forward<FoundationModelArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the Provisioned Throughput. </p>
     */
    inline ProvisionedModelStatus GetStatus() const { return m_status; }
    inline void SetStatus(ProvisionedModelStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline GetProvisionedModelThroughputResult& WithStatus(ProvisionedModelStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp of the creation time for this Provisioned Throughput. </p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const { return m_creationTime; }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    void SetCreationTime(CreationTimeT&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::forward<CreationTimeT>(value); }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    GetProvisionedModelThroughputResult& WithCreationTime(CreationTimeT&& value) { SetCreationTime(std::forward<CreationTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp of the last time that this Provisioned Throughput was modified.
     * </p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTime() const { return m_lastModifiedTime; }
    template<typename LastModifiedTimeT = Aws::Utils::DateTime>
    void SetLastModifiedTime(LastModifiedTimeT&& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = std::forward<LastModifiedTimeT>(value); }
    template<typename LastModifiedTimeT = Aws::Utils::DateTime>
    GetProvisionedModelThroughputResult& WithLastModifiedTime(LastModifiedTimeT&& value) { SetLastModifiedTime(std::forward<LastModifiedTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A failure message for any issues that occurred during creation, updating, or
     * deletion of the Provisioned Throughput.</p>
     */
    inline const Aws::String& GetFailureMessage() const { return m_failureMessage; }
    template<typename FailureMessageT = Aws::String>
    void SetFailureMessage(FailureMessageT&& value) { m_failureMessageHasBeenSet = true; m_failureMessage = std::forward<FailureMessageT>(value); }
    template<typename FailureMessageT = Aws::String>
    GetProvisionedModelThroughputResult& WithFailureMessage(FailureMessageT&& value) { SetFailureMessage(std::forward<FailureMessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Commitment duration of the Provisioned Throughput.</p>
     */
    inline CommitmentDuration GetCommitmentDuration() const { return m_commitmentDuration; }
    inline void SetCommitmentDuration(CommitmentDuration value) { m_commitmentDurationHasBeenSet = true; m_commitmentDuration = value; }
    inline GetProvisionedModelThroughputResult& WithCommitmentDuration(CommitmentDuration value) { SetCommitmentDuration(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp for when the commitment term for the Provisioned Throughput
     * expires.</p>
     */
    inline const Aws::Utils::DateTime& GetCommitmentExpirationTime() const { return m_commitmentExpirationTime; }
    template<typename CommitmentExpirationTimeT = Aws::Utils::DateTime>
    void SetCommitmentExpirationTime(CommitmentExpirationTimeT&& value) { m_commitmentExpirationTimeHasBeenSet = true; m_commitmentExpirationTime = std::forward<CommitmentExpirationTimeT>(value); }
    template<typename CommitmentExpirationTimeT = Aws::Utils::DateTime>
    GetProvisionedModelThroughputResult& WithCommitmentExpirationTime(CommitmentExpirationTimeT&& value) { SetCommitmentExpirationTime(std::forward<CommitmentExpirationTimeT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetProvisionedModelThroughputResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    int m_modelUnits{0};
    bool m_modelUnitsHasBeenSet = false;

    int m_desiredModelUnits{0};
    bool m_desiredModelUnitsHasBeenSet = false;

    Aws::String m_provisionedModelName;
    bool m_provisionedModelNameHasBeenSet = false;

    Aws::String m_provisionedModelArn;
    bool m_provisionedModelArnHasBeenSet = false;

    Aws::String m_modelArn;
    bool m_modelArnHasBeenSet = false;

    Aws::String m_desiredModelArn;
    bool m_desiredModelArnHasBeenSet = false;

    Aws::String m_foundationModelArn;
    bool m_foundationModelArnHasBeenSet = false;

    ProvisionedModelStatus m_status{ProvisionedModelStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime{};
    bool m_creationTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastModifiedTime{};
    bool m_lastModifiedTimeHasBeenSet = false;

    Aws::String m_failureMessage;
    bool m_failureMessageHasBeenSet = false;

    CommitmentDuration m_commitmentDuration{CommitmentDuration::NOT_SET};
    bool m_commitmentDurationHasBeenSet = false;

    Aws::Utils::DateTime m_commitmentExpirationTime{};
    bool m_commitmentExpirationTimeHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Bedrock
} // namespace Aws
