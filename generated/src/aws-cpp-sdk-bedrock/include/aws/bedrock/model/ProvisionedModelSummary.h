/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock/Bedrock_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/bedrock/model/ProvisionedModelStatus.h>
#include <aws/bedrock/model/CommitmentDuration.h>
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
   * <p>A summary of information about a Provisioned Throughput.</p> <p>This data
   * type is used in the following API operations:</p> <ul> <li> <p> <a
   * href="https://docs.aws.amazon.com/bedrock/latest/APIReference/API_ListProvisionedModelThroughputs.html#API_ListProvisionedModelThroughputs_ResponseSyntax">ListProvisionedThroughputs
   * response</a> </p> </li> </ul><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-2023-04-20/ProvisionedModelSummary">AWS
   * API Reference</a></p>
   */
  class ProvisionedModelSummary
  {
  public:
    AWS_BEDROCK_API ProvisionedModelSummary();
    AWS_BEDROCK_API ProvisionedModelSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCK_API ProvisionedModelSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCK_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the Provisioned Throughput.</p>
     */
    inline const Aws::String& GetProvisionedModelName() const{ return m_provisionedModelName; }
    inline bool ProvisionedModelNameHasBeenSet() const { return m_provisionedModelNameHasBeenSet; }
    inline void SetProvisionedModelName(const Aws::String& value) { m_provisionedModelNameHasBeenSet = true; m_provisionedModelName = value; }
    inline void SetProvisionedModelName(Aws::String&& value) { m_provisionedModelNameHasBeenSet = true; m_provisionedModelName = std::move(value); }
    inline void SetProvisionedModelName(const char* value) { m_provisionedModelNameHasBeenSet = true; m_provisionedModelName.assign(value); }
    inline ProvisionedModelSummary& WithProvisionedModelName(const Aws::String& value) { SetProvisionedModelName(value); return *this;}
    inline ProvisionedModelSummary& WithProvisionedModelName(Aws::String&& value) { SetProvisionedModelName(std::move(value)); return *this;}
    inline ProvisionedModelSummary& WithProvisionedModelName(const char* value) { SetProvisionedModelName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the Provisioned Throughput.</p>
     */
    inline const Aws::String& GetProvisionedModelArn() const{ return m_provisionedModelArn; }
    inline bool ProvisionedModelArnHasBeenSet() const { return m_provisionedModelArnHasBeenSet; }
    inline void SetProvisionedModelArn(const Aws::String& value) { m_provisionedModelArnHasBeenSet = true; m_provisionedModelArn = value; }
    inline void SetProvisionedModelArn(Aws::String&& value) { m_provisionedModelArnHasBeenSet = true; m_provisionedModelArn = std::move(value); }
    inline void SetProvisionedModelArn(const char* value) { m_provisionedModelArnHasBeenSet = true; m_provisionedModelArn.assign(value); }
    inline ProvisionedModelSummary& WithProvisionedModelArn(const Aws::String& value) { SetProvisionedModelArn(value); return *this;}
    inline ProvisionedModelSummary& WithProvisionedModelArn(Aws::String&& value) { SetProvisionedModelArn(std::move(value)); return *this;}
    inline ProvisionedModelSummary& WithProvisionedModelArn(const char* value) { SetProvisionedModelArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the model associated with the Provisioned
     * Throughput.</p>
     */
    inline const Aws::String& GetModelArn() const{ return m_modelArn; }
    inline bool ModelArnHasBeenSet() const { return m_modelArnHasBeenSet; }
    inline void SetModelArn(const Aws::String& value) { m_modelArnHasBeenSet = true; m_modelArn = value; }
    inline void SetModelArn(Aws::String&& value) { m_modelArnHasBeenSet = true; m_modelArn = std::move(value); }
    inline void SetModelArn(const char* value) { m_modelArnHasBeenSet = true; m_modelArn.assign(value); }
    inline ProvisionedModelSummary& WithModelArn(const Aws::String& value) { SetModelArn(value); return *this;}
    inline ProvisionedModelSummary& WithModelArn(Aws::String&& value) { SetModelArn(std::move(value)); return *this;}
    inline ProvisionedModelSummary& WithModelArn(const char* value) { SetModelArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the model requested to be associated to
     * this Provisioned Throughput. This value differs from the <code>modelArn</code>
     * if updating hasn't completed.</p>
     */
    inline const Aws::String& GetDesiredModelArn() const{ return m_desiredModelArn; }
    inline bool DesiredModelArnHasBeenSet() const { return m_desiredModelArnHasBeenSet; }
    inline void SetDesiredModelArn(const Aws::String& value) { m_desiredModelArnHasBeenSet = true; m_desiredModelArn = value; }
    inline void SetDesiredModelArn(Aws::String&& value) { m_desiredModelArnHasBeenSet = true; m_desiredModelArn = std::move(value); }
    inline void SetDesiredModelArn(const char* value) { m_desiredModelArnHasBeenSet = true; m_desiredModelArn.assign(value); }
    inline ProvisionedModelSummary& WithDesiredModelArn(const Aws::String& value) { SetDesiredModelArn(value); return *this;}
    inline ProvisionedModelSummary& WithDesiredModelArn(Aws::String&& value) { SetDesiredModelArn(std::move(value)); return *this;}
    inline ProvisionedModelSummary& WithDesiredModelArn(const char* value) { SetDesiredModelArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the base model for which the Provisioned
     * Throughput was created, or of the base model that the custom model for which the
     * Provisioned Throughput was created was customized.</p>
     */
    inline const Aws::String& GetFoundationModelArn() const{ return m_foundationModelArn; }
    inline bool FoundationModelArnHasBeenSet() const { return m_foundationModelArnHasBeenSet; }
    inline void SetFoundationModelArn(const Aws::String& value) { m_foundationModelArnHasBeenSet = true; m_foundationModelArn = value; }
    inline void SetFoundationModelArn(Aws::String&& value) { m_foundationModelArnHasBeenSet = true; m_foundationModelArn = std::move(value); }
    inline void SetFoundationModelArn(const char* value) { m_foundationModelArnHasBeenSet = true; m_foundationModelArn.assign(value); }
    inline ProvisionedModelSummary& WithFoundationModelArn(const Aws::String& value) { SetFoundationModelArn(value); return *this;}
    inline ProvisionedModelSummary& WithFoundationModelArn(Aws::String&& value) { SetFoundationModelArn(std::move(value)); return *this;}
    inline ProvisionedModelSummary& WithFoundationModelArn(const char* value) { SetFoundationModelArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of model units allocated to the Provisioned Throughput.</p>
     */
    inline int GetModelUnits() const{ return m_modelUnits; }
    inline bool ModelUnitsHasBeenSet() const { return m_modelUnitsHasBeenSet; }
    inline void SetModelUnits(int value) { m_modelUnitsHasBeenSet = true; m_modelUnits = value; }
    inline ProvisionedModelSummary& WithModelUnits(int value) { SetModelUnits(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of model units that was requested to be allocated to the
     * Provisioned Throughput.</p>
     */
    inline int GetDesiredModelUnits() const{ return m_desiredModelUnits; }
    inline bool DesiredModelUnitsHasBeenSet() const { return m_desiredModelUnitsHasBeenSet; }
    inline void SetDesiredModelUnits(int value) { m_desiredModelUnitsHasBeenSet = true; m_desiredModelUnits = value; }
    inline ProvisionedModelSummary& WithDesiredModelUnits(int value) { SetDesiredModelUnits(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the Provisioned Throughput.</p>
     */
    inline const ProvisionedModelStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const ProvisionedModelStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(ProvisionedModelStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline ProvisionedModelSummary& WithStatus(const ProvisionedModelStatus& value) { SetStatus(value); return *this;}
    inline ProvisionedModelSummary& WithStatus(ProvisionedModelStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The duration for which the Provisioned Throughput was committed.</p>
     */
    inline const CommitmentDuration& GetCommitmentDuration() const{ return m_commitmentDuration; }
    inline bool CommitmentDurationHasBeenSet() const { return m_commitmentDurationHasBeenSet; }
    inline void SetCommitmentDuration(const CommitmentDuration& value) { m_commitmentDurationHasBeenSet = true; m_commitmentDuration = value; }
    inline void SetCommitmentDuration(CommitmentDuration&& value) { m_commitmentDurationHasBeenSet = true; m_commitmentDuration = std::move(value); }
    inline ProvisionedModelSummary& WithCommitmentDuration(const CommitmentDuration& value) { SetCommitmentDuration(value); return *this;}
    inline ProvisionedModelSummary& WithCommitmentDuration(CommitmentDuration&& value) { SetCommitmentDuration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp for when the commitment term of the Provisioned Throughput
     * expires.</p>
     */
    inline const Aws::Utils::DateTime& GetCommitmentExpirationTime() const{ return m_commitmentExpirationTime; }
    inline bool CommitmentExpirationTimeHasBeenSet() const { return m_commitmentExpirationTimeHasBeenSet; }
    inline void SetCommitmentExpirationTime(const Aws::Utils::DateTime& value) { m_commitmentExpirationTimeHasBeenSet = true; m_commitmentExpirationTime = value; }
    inline void SetCommitmentExpirationTime(Aws::Utils::DateTime&& value) { m_commitmentExpirationTimeHasBeenSet = true; m_commitmentExpirationTime = std::move(value); }
    inline ProvisionedModelSummary& WithCommitmentExpirationTime(const Aws::Utils::DateTime& value) { SetCommitmentExpirationTime(value); return *this;}
    inline ProvisionedModelSummary& WithCommitmentExpirationTime(Aws::Utils::DateTime&& value) { SetCommitmentExpirationTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time that the Provisioned Throughput was created. </p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::move(value); }
    inline ProvisionedModelSummary& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}
    inline ProvisionedModelSummary& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time that the Provisioned Throughput was last modified. </p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTime() const{ return m_lastModifiedTime; }
    inline bool LastModifiedTimeHasBeenSet() const { return m_lastModifiedTimeHasBeenSet; }
    inline void SetLastModifiedTime(const Aws::Utils::DateTime& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = value; }
    inline void SetLastModifiedTime(Aws::Utils::DateTime&& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = std::move(value); }
    inline ProvisionedModelSummary& WithLastModifiedTime(const Aws::Utils::DateTime& value) { SetLastModifiedTime(value); return *this;}
    inline ProvisionedModelSummary& WithLastModifiedTime(Aws::Utils::DateTime&& value) { SetLastModifiedTime(std::move(value)); return *this;}
    ///@}
  private:

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

    int m_modelUnits;
    bool m_modelUnitsHasBeenSet = false;

    int m_desiredModelUnits;
    bool m_desiredModelUnitsHasBeenSet = false;

    ProvisionedModelStatus m_status;
    bool m_statusHasBeenSet = false;

    CommitmentDuration m_commitmentDuration;
    bool m_commitmentDurationHasBeenSet = false;

    Aws::Utils::DateTime m_commitmentExpirationTime;
    bool m_commitmentExpirationTimeHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime;
    bool m_creationTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastModifiedTime;
    bool m_lastModifiedTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace Bedrock
} // namespace Aws
