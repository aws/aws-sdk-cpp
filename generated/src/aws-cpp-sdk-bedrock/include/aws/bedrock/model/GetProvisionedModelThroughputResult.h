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
    AWS_BEDROCK_API GetProvisionedModelThroughputResult();
    AWS_BEDROCK_API GetProvisionedModelThroughputResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BEDROCK_API GetProvisionedModelThroughputResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The number of model units allocated to this Provisioned Throughput.</p>
     */
    inline int GetModelUnits() const{ return m_modelUnits; }

    /**
     * <p>The number of model units allocated to this Provisioned Throughput.</p>
     */
    inline void SetModelUnits(int value) { m_modelUnits = value; }

    /**
     * <p>The number of model units allocated to this Provisioned Throughput.</p>
     */
    inline GetProvisionedModelThroughputResult& WithModelUnits(int value) { SetModelUnits(value); return *this;}


    /**
     * <p>The number of model units that was requested for this Provisioned
     * Throughput.</p>
     */
    inline int GetDesiredModelUnits() const{ return m_desiredModelUnits; }

    /**
     * <p>The number of model units that was requested for this Provisioned
     * Throughput.</p>
     */
    inline void SetDesiredModelUnits(int value) { m_desiredModelUnits = value; }

    /**
     * <p>The number of model units that was requested for this Provisioned
     * Throughput.</p>
     */
    inline GetProvisionedModelThroughputResult& WithDesiredModelUnits(int value) { SetDesiredModelUnits(value); return *this;}


    /**
     * <p>The name of the Provisioned Throughput.</p>
     */
    inline const Aws::String& GetProvisionedModelName() const{ return m_provisionedModelName; }

    /**
     * <p>The name of the Provisioned Throughput.</p>
     */
    inline void SetProvisionedModelName(const Aws::String& value) { m_provisionedModelName = value; }

    /**
     * <p>The name of the Provisioned Throughput.</p>
     */
    inline void SetProvisionedModelName(Aws::String&& value) { m_provisionedModelName = std::move(value); }

    /**
     * <p>The name of the Provisioned Throughput.</p>
     */
    inline void SetProvisionedModelName(const char* value) { m_provisionedModelName.assign(value); }

    /**
     * <p>The name of the Provisioned Throughput.</p>
     */
    inline GetProvisionedModelThroughputResult& WithProvisionedModelName(const Aws::String& value) { SetProvisionedModelName(value); return *this;}

    /**
     * <p>The name of the Provisioned Throughput.</p>
     */
    inline GetProvisionedModelThroughputResult& WithProvisionedModelName(Aws::String&& value) { SetProvisionedModelName(std::move(value)); return *this;}

    /**
     * <p>The name of the Provisioned Throughput.</p>
     */
    inline GetProvisionedModelThroughputResult& WithProvisionedModelName(const char* value) { SetProvisionedModelName(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the Provisioned Throughput.</p>
     */
    inline const Aws::String& GetProvisionedModelArn() const{ return m_provisionedModelArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Provisioned Throughput.</p>
     */
    inline void SetProvisionedModelArn(const Aws::String& value) { m_provisionedModelArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Provisioned Throughput.</p>
     */
    inline void SetProvisionedModelArn(Aws::String&& value) { m_provisionedModelArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the Provisioned Throughput.</p>
     */
    inline void SetProvisionedModelArn(const char* value) { m_provisionedModelArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the Provisioned Throughput.</p>
     */
    inline GetProvisionedModelThroughputResult& WithProvisionedModelArn(const Aws::String& value) { SetProvisionedModelArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the Provisioned Throughput.</p>
     */
    inline GetProvisionedModelThroughputResult& WithProvisionedModelArn(Aws::String&& value) { SetProvisionedModelArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the Provisioned Throughput.</p>
     */
    inline GetProvisionedModelThroughputResult& WithProvisionedModelArn(const char* value) { SetProvisionedModelArn(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the model associated with this Provisioned
     * Throughput.</p>
     */
    inline const Aws::String& GetModelArn() const{ return m_modelArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the model associated with this Provisioned
     * Throughput.</p>
     */
    inline void SetModelArn(const Aws::String& value) { m_modelArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the model associated with this Provisioned
     * Throughput.</p>
     */
    inline void SetModelArn(Aws::String&& value) { m_modelArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the model associated with this Provisioned
     * Throughput.</p>
     */
    inline void SetModelArn(const char* value) { m_modelArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the model associated with this Provisioned
     * Throughput.</p>
     */
    inline GetProvisionedModelThroughputResult& WithModelArn(const Aws::String& value) { SetModelArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the model associated with this Provisioned
     * Throughput.</p>
     */
    inline GetProvisionedModelThroughputResult& WithModelArn(Aws::String&& value) { SetModelArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the model associated with this Provisioned
     * Throughput.</p>
     */
    inline GetProvisionedModelThroughputResult& WithModelArn(const char* value) { SetModelArn(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the model requested to be associated to
     * this Provisioned Throughput. This value differs from the <code>modelArn</code>
     * if updating hasn't completed.</p>
     */
    inline const Aws::String& GetDesiredModelArn() const{ return m_desiredModelArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the model requested to be associated to
     * this Provisioned Throughput. This value differs from the <code>modelArn</code>
     * if updating hasn't completed.</p>
     */
    inline void SetDesiredModelArn(const Aws::String& value) { m_desiredModelArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the model requested to be associated to
     * this Provisioned Throughput. This value differs from the <code>modelArn</code>
     * if updating hasn't completed.</p>
     */
    inline void SetDesiredModelArn(Aws::String&& value) { m_desiredModelArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the model requested to be associated to
     * this Provisioned Throughput. This value differs from the <code>modelArn</code>
     * if updating hasn't completed.</p>
     */
    inline void SetDesiredModelArn(const char* value) { m_desiredModelArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the model requested to be associated to
     * this Provisioned Throughput. This value differs from the <code>modelArn</code>
     * if updating hasn't completed.</p>
     */
    inline GetProvisionedModelThroughputResult& WithDesiredModelArn(const Aws::String& value) { SetDesiredModelArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the model requested to be associated to
     * this Provisioned Throughput. This value differs from the <code>modelArn</code>
     * if updating hasn't completed.</p>
     */
    inline GetProvisionedModelThroughputResult& WithDesiredModelArn(Aws::String&& value) { SetDesiredModelArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the model requested to be associated to
     * this Provisioned Throughput. This value differs from the <code>modelArn</code>
     * if updating hasn't completed.</p>
     */
    inline GetProvisionedModelThroughputResult& WithDesiredModelArn(const char* value) { SetDesiredModelArn(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the base model for which the Provisioned
     * Throughput was created, or of the base model that the custom model for which the
     * Provisioned Throughput was created was customized.</p>
     */
    inline const Aws::String& GetFoundationModelArn() const{ return m_foundationModelArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the base model for which the Provisioned
     * Throughput was created, or of the base model that the custom model for which the
     * Provisioned Throughput was created was customized.</p>
     */
    inline void SetFoundationModelArn(const Aws::String& value) { m_foundationModelArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the base model for which the Provisioned
     * Throughput was created, or of the base model that the custom model for which the
     * Provisioned Throughput was created was customized.</p>
     */
    inline void SetFoundationModelArn(Aws::String&& value) { m_foundationModelArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the base model for which the Provisioned
     * Throughput was created, or of the base model that the custom model for which the
     * Provisioned Throughput was created was customized.</p>
     */
    inline void SetFoundationModelArn(const char* value) { m_foundationModelArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the base model for which the Provisioned
     * Throughput was created, or of the base model that the custom model for which the
     * Provisioned Throughput was created was customized.</p>
     */
    inline GetProvisionedModelThroughputResult& WithFoundationModelArn(const Aws::String& value) { SetFoundationModelArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the base model for which the Provisioned
     * Throughput was created, or of the base model that the custom model for which the
     * Provisioned Throughput was created was customized.</p>
     */
    inline GetProvisionedModelThroughputResult& WithFoundationModelArn(Aws::String&& value) { SetFoundationModelArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the base model for which the Provisioned
     * Throughput was created, or of the base model that the custom model for which the
     * Provisioned Throughput was created was customized.</p>
     */
    inline GetProvisionedModelThroughputResult& WithFoundationModelArn(const char* value) { SetFoundationModelArn(value); return *this;}


    /**
     * <p>The status of the Provisioned Throughput. </p>
     */
    inline const ProvisionedModelStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the Provisioned Throughput. </p>
     */
    inline void SetStatus(const ProvisionedModelStatus& value) { m_status = value; }

    /**
     * <p>The status of the Provisioned Throughput. </p>
     */
    inline void SetStatus(ProvisionedModelStatus&& value) { m_status = std::move(value); }

    /**
     * <p>The status of the Provisioned Throughput. </p>
     */
    inline GetProvisionedModelThroughputResult& WithStatus(const ProvisionedModelStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the Provisioned Throughput. </p>
     */
    inline GetProvisionedModelThroughputResult& WithStatus(ProvisionedModelStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The timestamp of the creation time for this Provisioned Throughput. </p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }

    /**
     * <p>The timestamp of the creation time for this Provisioned Throughput. </p>
     */
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTime = value; }

    /**
     * <p>The timestamp of the creation time for this Provisioned Throughput. </p>
     */
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTime = std::move(value); }

    /**
     * <p>The timestamp of the creation time for this Provisioned Throughput. </p>
     */
    inline GetProvisionedModelThroughputResult& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}

    /**
     * <p>The timestamp of the creation time for this Provisioned Throughput. </p>
     */
    inline GetProvisionedModelThroughputResult& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}


    /**
     * <p>The timestamp of the last time that this Provisioned Throughput was modified.
     * </p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTime() const{ return m_lastModifiedTime; }

    /**
     * <p>The timestamp of the last time that this Provisioned Throughput was modified.
     * </p>
     */
    inline void SetLastModifiedTime(const Aws::Utils::DateTime& value) { m_lastModifiedTime = value; }

    /**
     * <p>The timestamp of the last time that this Provisioned Throughput was modified.
     * </p>
     */
    inline void SetLastModifiedTime(Aws::Utils::DateTime&& value) { m_lastModifiedTime = std::move(value); }

    /**
     * <p>The timestamp of the last time that this Provisioned Throughput was modified.
     * </p>
     */
    inline GetProvisionedModelThroughputResult& WithLastModifiedTime(const Aws::Utils::DateTime& value) { SetLastModifiedTime(value); return *this;}

    /**
     * <p>The timestamp of the last time that this Provisioned Throughput was modified.
     * </p>
     */
    inline GetProvisionedModelThroughputResult& WithLastModifiedTime(Aws::Utils::DateTime&& value) { SetLastModifiedTime(std::move(value)); return *this;}


    /**
     * <p>A failure message for any issues that occurred during creation, updating, or
     * deletion of the Provisioned Throughput.</p>
     */
    inline const Aws::String& GetFailureMessage() const{ return m_failureMessage; }

    /**
     * <p>A failure message for any issues that occurred during creation, updating, or
     * deletion of the Provisioned Throughput.</p>
     */
    inline void SetFailureMessage(const Aws::String& value) { m_failureMessage = value; }

    /**
     * <p>A failure message for any issues that occurred during creation, updating, or
     * deletion of the Provisioned Throughput.</p>
     */
    inline void SetFailureMessage(Aws::String&& value) { m_failureMessage = std::move(value); }

    /**
     * <p>A failure message for any issues that occurred during creation, updating, or
     * deletion of the Provisioned Throughput.</p>
     */
    inline void SetFailureMessage(const char* value) { m_failureMessage.assign(value); }

    /**
     * <p>A failure message for any issues that occurred during creation, updating, or
     * deletion of the Provisioned Throughput.</p>
     */
    inline GetProvisionedModelThroughputResult& WithFailureMessage(const Aws::String& value) { SetFailureMessage(value); return *this;}

    /**
     * <p>A failure message for any issues that occurred during creation, updating, or
     * deletion of the Provisioned Throughput.</p>
     */
    inline GetProvisionedModelThroughputResult& WithFailureMessage(Aws::String&& value) { SetFailureMessage(std::move(value)); return *this;}

    /**
     * <p>A failure message for any issues that occurred during creation, updating, or
     * deletion of the Provisioned Throughput.</p>
     */
    inline GetProvisionedModelThroughputResult& WithFailureMessage(const char* value) { SetFailureMessage(value); return *this;}


    /**
     * <p>Commitment duration of the Provisioned Throughput.</p>
     */
    inline const CommitmentDuration& GetCommitmentDuration() const{ return m_commitmentDuration; }

    /**
     * <p>Commitment duration of the Provisioned Throughput.</p>
     */
    inline void SetCommitmentDuration(const CommitmentDuration& value) { m_commitmentDuration = value; }

    /**
     * <p>Commitment duration of the Provisioned Throughput.</p>
     */
    inline void SetCommitmentDuration(CommitmentDuration&& value) { m_commitmentDuration = std::move(value); }

    /**
     * <p>Commitment duration of the Provisioned Throughput.</p>
     */
    inline GetProvisionedModelThroughputResult& WithCommitmentDuration(const CommitmentDuration& value) { SetCommitmentDuration(value); return *this;}

    /**
     * <p>Commitment duration of the Provisioned Throughput.</p>
     */
    inline GetProvisionedModelThroughputResult& WithCommitmentDuration(CommitmentDuration&& value) { SetCommitmentDuration(std::move(value)); return *this;}


    /**
     * <p>The timestamp for when the commitment term for the Provisioned Throughput
     * expires.</p>
     */
    inline const Aws::Utils::DateTime& GetCommitmentExpirationTime() const{ return m_commitmentExpirationTime; }

    /**
     * <p>The timestamp for when the commitment term for the Provisioned Throughput
     * expires.</p>
     */
    inline void SetCommitmentExpirationTime(const Aws::Utils::DateTime& value) { m_commitmentExpirationTime = value; }

    /**
     * <p>The timestamp for when the commitment term for the Provisioned Throughput
     * expires.</p>
     */
    inline void SetCommitmentExpirationTime(Aws::Utils::DateTime&& value) { m_commitmentExpirationTime = std::move(value); }

    /**
     * <p>The timestamp for when the commitment term for the Provisioned Throughput
     * expires.</p>
     */
    inline GetProvisionedModelThroughputResult& WithCommitmentExpirationTime(const Aws::Utils::DateTime& value) { SetCommitmentExpirationTime(value); return *this;}

    /**
     * <p>The timestamp for when the commitment term for the Provisioned Throughput
     * expires.</p>
     */
    inline GetProvisionedModelThroughputResult& WithCommitmentExpirationTime(Aws::Utils::DateTime&& value) { SetCommitmentExpirationTime(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetProvisionedModelThroughputResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetProvisionedModelThroughputResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetProvisionedModelThroughputResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    int m_modelUnits;

    int m_desiredModelUnits;

    Aws::String m_provisionedModelName;

    Aws::String m_provisionedModelArn;

    Aws::String m_modelArn;

    Aws::String m_desiredModelArn;

    Aws::String m_foundationModelArn;

    ProvisionedModelStatus m_status;

    Aws::Utils::DateTime m_creationTime;

    Aws::Utils::DateTime m_lastModifiedTime;

    Aws::String m_failureMessage;

    CommitmentDuration m_commitmentDuration;

    Aws::Utils::DateTime m_commitmentExpirationTime;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Bedrock
} // namespace Aws
