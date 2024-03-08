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
   * <p>Set of fields associated with a provisioned throughput.</p><p><h3>See
   * Also:</h3>   <a
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


    /**
     * <p>The name of the provisioned throughput.</p>
     */
    inline const Aws::String& GetProvisionedModelName() const{ return m_provisionedModelName; }

    /**
     * <p>The name of the provisioned throughput.</p>
     */
    inline bool ProvisionedModelNameHasBeenSet() const { return m_provisionedModelNameHasBeenSet; }

    /**
     * <p>The name of the provisioned throughput.</p>
     */
    inline void SetProvisionedModelName(const Aws::String& value) { m_provisionedModelNameHasBeenSet = true; m_provisionedModelName = value; }

    /**
     * <p>The name of the provisioned throughput.</p>
     */
    inline void SetProvisionedModelName(Aws::String&& value) { m_provisionedModelNameHasBeenSet = true; m_provisionedModelName = std::move(value); }

    /**
     * <p>The name of the provisioned throughput.</p>
     */
    inline void SetProvisionedModelName(const char* value) { m_provisionedModelNameHasBeenSet = true; m_provisionedModelName.assign(value); }

    /**
     * <p>The name of the provisioned throughput.</p>
     */
    inline ProvisionedModelSummary& WithProvisionedModelName(const Aws::String& value) { SetProvisionedModelName(value); return *this;}

    /**
     * <p>The name of the provisioned throughput.</p>
     */
    inline ProvisionedModelSummary& WithProvisionedModelName(Aws::String&& value) { SetProvisionedModelName(std::move(value)); return *this;}

    /**
     * <p>The name of the provisioned throughput.</p>
     */
    inline ProvisionedModelSummary& WithProvisionedModelName(const char* value) { SetProvisionedModelName(value); return *this;}


    /**
     * <p>The ARN of the provisioned throughput.</p>
     */
    inline const Aws::String& GetProvisionedModelArn() const{ return m_provisionedModelArn; }

    /**
     * <p>The ARN of the provisioned throughput.</p>
     */
    inline bool ProvisionedModelArnHasBeenSet() const { return m_provisionedModelArnHasBeenSet; }

    /**
     * <p>The ARN of the provisioned throughput.</p>
     */
    inline void SetProvisionedModelArn(const Aws::String& value) { m_provisionedModelArnHasBeenSet = true; m_provisionedModelArn = value; }

    /**
     * <p>The ARN of the provisioned throughput.</p>
     */
    inline void SetProvisionedModelArn(Aws::String&& value) { m_provisionedModelArnHasBeenSet = true; m_provisionedModelArn = std::move(value); }

    /**
     * <p>The ARN of the provisioned throughput.</p>
     */
    inline void SetProvisionedModelArn(const char* value) { m_provisionedModelArnHasBeenSet = true; m_provisionedModelArn.assign(value); }

    /**
     * <p>The ARN of the provisioned throughput.</p>
     */
    inline ProvisionedModelSummary& WithProvisionedModelArn(const Aws::String& value) { SetProvisionedModelArn(value); return *this;}

    /**
     * <p>The ARN of the provisioned throughput.</p>
     */
    inline ProvisionedModelSummary& WithProvisionedModelArn(Aws::String&& value) { SetProvisionedModelArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the provisioned throughput.</p>
     */
    inline ProvisionedModelSummary& WithProvisionedModelArn(const char* value) { SetProvisionedModelArn(value); return *this;}


    /**
     * <p>The ARN of the model associated with this provisioned throughput.</p>
     */
    inline const Aws::String& GetModelArn() const{ return m_modelArn; }

    /**
     * <p>The ARN of the model associated with this provisioned throughput.</p>
     */
    inline bool ModelArnHasBeenSet() const { return m_modelArnHasBeenSet; }

    /**
     * <p>The ARN of the model associated with this provisioned throughput.</p>
     */
    inline void SetModelArn(const Aws::String& value) { m_modelArnHasBeenSet = true; m_modelArn = value; }

    /**
     * <p>The ARN of the model associated with this provisioned throughput.</p>
     */
    inline void SetModelArn(Aws::String&& value) { m_modelArnHasBeenSet = true; m_modelArn = std::move(value); }

    /**
     * <p>The ARN of the model associated with this provisioned throughput.</p>
     */
    inline void SetModelArn(const char* value) { m_modelArnHasBeenSet = true; m_modelArn.assign(value); }

    /**
     * <p>The ARN of the model associated with this provisioned throughput.</p>
     */
    inline ProvisionedModelSummary& WithModelArn(const Aws::String& value) { SetModelArn(value); return *this;}

    /**
     * <p>The ARN of the model associated with this provisioned throughput.</p>
     */
    inline ProvisionedModelSummary& WithModelArn(Aws::String&& value) { SetModelArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the model associated with this provisioned throughput.</p>
     */
    inline ProvisionedModelSummary& WithModelArn(const char* value) { SetModelArn(value); return *this;}


    /**
     * <p>Desired model ARN.</p>
     */
    inline const Aws::String& GetDesiredModelArn() const{ return m_desiredModelArn; }

    /**
     * <p>Desired model ARN.</p>
     */
    inline bool DesiredModelArnHasBeenSet() const { return m_desiredModelArnHasBeenSet; }

    /**
     * <p>Desired model ARN.</p>
     */
    inline void SetDesiredModelArn(const Aws::String& value) { m_desiredModelArnHasBeenSet = true; m_desiredModelArn = value; }

    /**
     * <p>Desired model ARN.</p>
     */
    inline void SetDesiredModelArn(Aws::String&& value) { m_desiredModelArnHasBeenSet = true; m_desiredModelArn = std::move(value); }

    /**
     * <p>Desired model ARN.</p>
     */
    inline void SetDesiredModelArn(const char* value) { m_desiredModelArnHasBeenSet = true; m_desiredModelArn.assign(value); }

    /**
     * <p>Desired model ARN.</p>
     */
    inline ProvisionedModelSummary& WithDesiredModelArn(const Aws::String& value) { SetDesiredModelArn(value); return *this;}

    /**
     * <p>Desired model ARN.</p>
     */
    inline ProvisionedModelSummary& WithDesiredModelArn(Aws::String&& value) { SetDesiredModelArn(std::move(value)); return *this;}

    /**
     * <p>Desired model ARN.</p>
     */
    inline ProvisionedModelSummary& WithDesiredModelArn(const char* value) { SetDesiredModelArn(value); return *this;}


    /**
     * <p>Foundation model ARN.</p>
     */
    inline const Aws::String& GetFoundationModelArn() const{ return m_foundationModelArn; }

    /**
     * <p>Foundation model ARN.</p>
     */
    inline bool FoundationModelArnHasBeenSet() const { return m_foundationModelArnHasBeenSet; }

    /**
     * <p>Foundation model ARN.</p>
     */
    inline void SetFoundationModelArn(const Aws::String& value) { m_foundationModelArnHasBeenSet = true; m_foundationModelArn = value; }

    /**
     * <p>Foundation model ARN.</p>
     */
    inline void SetFoundationModelArn(Aws::String&& value) { m_foundationModelArnHasBeenSet = true; m_foundationModelArn = std::move(value); }

    /**
     * <p>Foundation model ARN.</p>
     */
    inline void SetFoundationModelArn(const char* value) { m_foundationModelArnHasBeenSet = true; m_foundationModelArn.assign(value); }

    /**
     * <p>Foundation model ARN.</p>
     */
    inline ProvisionedModelSummary& WithFoundationModelArn(const Aws::String& value) { SetFoundationModelArn(value); return *this;}

    /**
     * <p>Foundation model ARN.</p>
     */
    inline ProvisionedModelSummary& WithFoundationModelArn(Aws::String&& value) { SetFoundationModelArn(std::move(value)); return *this;}

    /**
     * <p>Foundation model ARN.</p>
     */
    inline ProvisionedModelSummary& WithFoundationModelArn(const char* value) { SetFoundationModelArn(value); return *this;}


    /**
     * <p>The number of model units allocated.</p>
     */
    inline int GetModelUnits() const{ return m_modelUnits; }

    /**
     * <p>The number of model units allocated.</p>
     */
    inline bool ModelUnitsHasBeenSet() const { return m_modelUnitsHasBeenSet; }

    /**
     * <p>The number of model units allocated.</p>
     */
    inline void SetModelUnits(int value) { m_modelUnitsHasBeenSet = true; m_modelUnits = value; }

    /**
     * <p>The number of model units allocated.</p>
     */
    inline ProvisionedModelSummary& WithModelUnits(int value) { SetModelUnits(value); return *this;}


    /**
     * <p>Desired model units.</p>
     */
    inline int GetDesiredModelUnits() const{ return m_desiredModelUnits; }

    /**
     * <p>Desired model units.</p>
     */
    inline bool DesiredModelUnitsHasBeenSet() const { return m_desiredModelUnitsHasBeenSet; }

    /**
     * <p>Desired model units.</p>
     */
    inline void SetDesiredModelUnits(int value) { m_desiredModelUnitsHasBeenSet = true; m_desiredModelUnits = value; }

    /**
     * <p>Desired model units.</p>
     */
    inline ProvisionedModelSummary& WithDesiredModelUnits(int value) { SetDesiredModelUnits(value); return *this;}


    /**
     * <p>Status of the provisioned throughput.</p>
     */
    inline const ProvisionedModelStatus& GetStatus() const{ return m_status; }

    /**
     * <p>Status of the provisioned throughput.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>Status of the provisioned throughput.</p>
     */
    inline void SetStatus(const ProvisionedModelStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>Status of the provisioned throughput.</p>
     */
    inline void SetStatus(ProvisionedModelStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>Status of the provisioned throughput.</p>
     */
    inline ProvisionedModelSummary& WithStatus(const ProvisionedModelStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>Status of the provisioned throughput.</p>
     */
    inline ProvisionedModelSummary& WithStatus(ProvisionedModelStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>Commitment duration for the provisioned throughput.</p>
     */
    inline const CommitmentDuration& GetCommitmentDuration() const{ return m_commitmentDuration; }

    /**
     * <p>Commitment duration for the provisioned throughput.</p>
     */
    inline bool CommitmentDurationHasBeenSet() const { return m_commitmentDurationHasBeenSet; }

    /**
     * <p>Commitment duration for the provisioned throughput.</p>
     */
    inline void SetCommitmentDuration(const CommitmentDuration& value) { m_commitmentDurationHasBeenSet = true; m_commitmentDuration = value; }

    /**
     * <p>Commitment duration for the provisioned throughput.</p>
     */
    inline void SetCommitmentDuration(CommitmentDuration&& value) { m_commitmentDurationHasBeenSet = true; m_commitmentDuration = std::move(value); }

    /**
     * <p>Commitment duration for the provisioned throughput.</p>
     */
    inline ProvisionedModelSummary& WithCommitmentDuration(const CommitmentDuration& value) { SetCommitmentDuration(value); return *this;}

    /**
     * <p>Commitment duration for the provisioned throughput.</p>
     */
    inline ProvisionedModelSummary& WithCommitmentDuration(CommitmentDuration&& value) { SetCommitmentDuration(std::move(value)); return *this;}


    /**
     * <p>Commitment expiration time for the provisioned throughput.</p>
     */
    inline const Aws::Utils::DateTime& GetCommitmentExpirationTime() const{ return m_commitmentExpirationTime; }

    /**
     * <p>Commitment expiration time for the provisioned throughput.</p>
     */
    inline bool CommitmentExpirationTimeHasBeenSet() const { return m_commitmentExpirationTimeHasBeenSet; }

    /**
     * <p>Commitment expiration time for the provisioned throughput.</p>
     */
    inline void SetCommitmentExpirationTime(const Aws::Utils::DateTime& value) { m_commitmentExpirationTimeHasBeenSet = true; m_commitmentExpirationTime = value; }

    /**
     * <p>Commitment expiration time for the provisioned throughput.</p>
     */
    inline void SetCommitmentExpirationTime(Aws::Utils::DateTime&& value) { m_commitmentExpirationTimeHasBeenSet = true; m_commitmentExpirationTime = std::move(value); }

    /**
     * <p>Commitment expiration time for the provisioned throughput.</p>
     */
    inline ProvisionedModelSummary& WithCommitmentExpirationTime(const Aws::Utils::DateTime& value) { SetCommitmentExpirationTime(value); return *this;}

    /**
     * <p>Commitment expiration time for the provisioned throughput.</p>
     */
    inline ProvisionedModelSummary& WithCommitmentExpirationTime(Aws::Utils::DateTime&& value) { SetCommitmentExpirationTime(std::move(value)); return *this;}


    /**
     * <p>The time that this provisioned throughput was created. </p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }

    /**
     * <p>The time that this provisioned throughput was created. </p>
     */
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }

    /**
     * <p>The time that this provisioned throughput was created. </p>
     */
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }

    /**
     * <p>The time that this provisioned throughput was created. </p>
     */
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::move(value); }

    /**
     * <p>The time that this provisioned throughput was created. </p>
     */
    inline ProvisionedModelSummary& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}

    /**
     * <p>The time that this provisioned throughput was created. </p>
     */
    inline ProvisionedModelSummary& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}


    /**
     * <p>The time that this provisioned throughput was last modified. </p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTime() const{ return m_lastModifiedTime; }

    /**
     * <p>The time that this provisioned throughput was last modified. </p>
     */
    inline bool LastModifiedTimeHasBeenSet() const { return m_lastModifiedTimeHasBeenSet; }

    /**
     * <p>The time that this provisioned throughput was last modified. </p>
     */
    inline void SetLastModifiedTime(const Aws::Utils::DateTime& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = value; }

    /**
     * <p>The time that this provisioned throughput was last modified. </p>
     */
    inline void SetLastModifiedTime(Aws::Utils::DateTime&& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = std::move(value); }

    /**
     * <p>The time that this provisioned throughput was last modified. </p>
     */
    inline ProvisionedModelSummary& WithLastModifiedTime(const Aws::Utils::DateTime& value) { SetLastModifiedTime(value); return *this;}

    /**
     * <p>The time that this provisioned throughput was last modified. </p>
     */
    inline ProvisionedModelSummary& WithLastModifiedTime(Aws::Utils::DateTime&& value) { SetLastModifiedTime(std::move(value)); return *this;}

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
