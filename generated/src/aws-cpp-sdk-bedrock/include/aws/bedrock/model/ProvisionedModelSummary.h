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
    AWS_BEDROCK_API ProvisionedModelSummary() = default;
    AWS_BEDROCK_API ProvisionedModelSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCK_API ProvisionedModelSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCK_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the Provisioned Throughput.</p>
     */
    inline const Aws::String& GetProvisionedModelName() const { return m_provisionedModelName; }
    inline bool ProvisionedModelNameHasBeenSet() const { return m_provisionedModelNameHasBeenSet; }
    template<typename ProvisionedModelNameT = Aws::String>
    void SetProvisionedModelName(ProvisionedModelNameT&& value) { m_provisionedModelNameHasBeenSet = true; m_provisionedModelName = std::forward<ProvisionedModelNameT>(value); }
    template<typename ProvisionedModelNameT = Aws::String>
    ProvisionedModelSummary& WithProvisionedModelName(ProvisionedModelNameT&& value) { SetProvisionedModelName(std::forward<ProvisionedModelNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the Provisioned Throughput.</p>
     */
    inline const Aws::String& GetProvisionedModelArn() const { return m_provisionedModelArn; }
    inline bool ProvisionedModelArnHasBeenSet() const { return m_provisionedModelArnHasBeenSet; }
    template<typename ProvisionedModelArnT = Aws::String>
    void SetProvisionedModelArn(ProvisionedModelArnT&& value) { m_provisionedModelArnHasBeenSet = true; m_provisionedModelArn = std::forward<ProvisionedModelArnT>(value); }
    template<typename ProvisionedModelArnT = Aws::String>
    ProvisionedModelSummary& WithProvisionedModelArn(ProvisionedModelArnT&& value) { SetProvisionedModelArn(std::forward<ProvisionedModelArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the model associated with the Provisioned
     * Throughput.</p>
     */
    inline const Aws::String& GetModelArn() const { return m_modelArn; }
    inline bool ModelArnHasBeenSet() const { return m_modelArnHasBeenSet; }
    template<typename ModelArnT = Aws::String>
    void SetModelArn(ModelArnT&& value) { m_modelArnHasBeenSet = true; m_modelArn = std::forward<ModelArnT>(value); }
    template<typename ModelArnT = Aws::String>
    ProvisionedModelSummary& WithModelArn(ModelArnT&& value) { SetModelArn(std::forward<ModelArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the model requested to be associated to
     * this Provisioned Throughput. This value differs from the <code>modelArn</code>
     * if updating hasn't completed.</p>
     */
    inline const Aws::String& GetDesiredModelArn() const { return m_desiredModelArn; }
    inline bool DesiredModelArnHasBeenSet() const { return m_desiredModelArnHasBeenSet; }
    template<typename DesiredModelArnT = Aws::String>
    void SetDesiredModelArn(DesiredModelArnT&& value) { m_desiredModelArnHasBeenSet = true; m_desiredModelArn = std::forward<DesiredModelArnT>(value); }
    template<typename DesiredModelArnT = Aws::String>
    ProvisionedModelSummary& WithDesiredModelArn(DesiredModelArnT&& value) { SetDesiredModelArn(std::forward<DesiredModelArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the base model for which the Provisioned
     * Throughput was created, or of the base model that the custom model for which the
     * Provisioned Throughput was created was customized.</p>
     */
    inline const Aws::String& GetFoundationModelArn() const { return m_foundationModelArn; }
    inline bool FoundationModelArnHasBeenSet() const { return m_foundationModelArnHasBeenSet; }
    template<typename FoundationModelArnT = Aws::String>
    void SetFoundationModelArn(FoundationModelArnT&& value) { m_foundationModelArnHasBeenSet = true; m_foundationModelArn = std::forward<FoundationModelArnT>(value); }
    template<typename FoundationModelArnT = Aws::String>
    ProvisionedModelSummary& WithFoundationModelArn(FoundationModelArnT&& value) { SetFoundationModelArn(std::forward<FoundationModelArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of model units allocated to the Provisioned Throughput.</p>
     */
    inline int GetModelUnits() const { return m_modelUnits; }
    inline bool ModelUnitsHasBeenSet() const { return m_modelUnitsHasBeenSet; }
    inline void SetModelUnits(int value) { m_modelUnitsHasBeenSet = true; m_modelUnits = value; }
    inline ProvisionedModelSummary& WithModelUnits(int value) { SetModelUnits(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of model units that was requested to be allocated to the
     * Provisioned Throughput.</p>
     */
    inline int GetDesiredModelUnits() const { return m_desiredModelUnits; }
    inline bool DesiredModelUnitsHasBeenSet() const { return m_desiredModelUnitsHasBeenSet; }
    inline void SetDesiredModelUnits(int value) { m_desiredModelUnitsHasBeenSet = true; m_desiredModelUnits = value; }
    inline ProvisionedModelSummary& WithDesiredModelUnits(int value) { SetDesiredModelUnits(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the Provisioned Throughput.</p>
     */
    inline ProvisionedModelStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(ProvisionedModelStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline ProvisionedModelSummary& WithStatus(ProvisionedModelStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The duration for which the Provisioned Throughput was committed.</p>
     */
    inline CommitmentDuration GetCommitmentDuration() const { return m_commitmentDuration; }
    inline bool CommitmentDurationHasBeenSet() const { return m_commitmentDurationHasBeenSet; }
    inline void SetCommitmentDuration(CommitmentDuration value) { m_commitmentDurationHasBeenSet = true; m_commitmentDuration = value; }
    inline ProvisionedModelSummary& WithCommitmentDuration(CommitmentDuration value) { SetCommitmentDuration(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp for when the commitment term of the Provisioned Throughput
     * expires.</p>
     */
    inline const Aws::Utils::DateTime& GetCommitmentExpirationTime() const { return m_commitmentExpirationTime; }
    inline bool CommitmentExpirationTimeHasBeenSet() const { return m_commitmentExpirationTimeHasBeenSet; }
    template<typename CommitmentExpirationTimeT = Aws::Utils::DateTime>
    void SetCommitmentExpirationTime(CommitmentExpirationTimeT&& value) { m_commitmentExpirationTimeHasBeenSet = true; m_commitmentExpirationTime = std::forward<CommitmentExpirationTimeT>(value); }
    template<typename CommitmentExpirationTimeT = Aws::Utils::DateTime>
    ProvisionedModelSummary& WithCommitmentExpirationTime(CommitmentExpirationTimeT&& value) { SetCommitmentExpirationTime(std::forward<CommitmentExpirationTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time that the Provisioned Throughput was created. </p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const { return m_creationTime; }
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    void SetCreationTime(CreationTimeT&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::forward<CreationTimeT>(value); }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    ProvisionedModelSummary& WithCreationTime(CreationTimeT&& value) { SetCreationTime(std::forward<CreationTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time that the Provisioned Throughput was last modified. </p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTime() const { return m_lastModifiedTime; }
    inline bool LastModifiedTimeHasBeenSet() const { return m_lastModifiedTimeHasBeenSet; }
    template<typename LastModifiedTimeT = Aws::Utils::DateTime>
    void SetLastModifiedTime(LastModifiedTimeT&& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = std::forward<LastModifiedTimeT>(value); }
    template<typename LastModifiedTimeT = Aws::Utils::DateTime>
    ProvisionedModelSummary& WithLastModifiedTime(LastModifiedTimeT&& value) { SetLastModifiedTime(std::forward<LastModifiedTimeT>(value)); return *this;}
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

    int m_modelUnits{0};
    bool m_modelUnitsHasBeenSet = false;

    int m_desiredModelUnits{0};
    bool m_desiredModelUnitsHasBeenSet = false;

    ProvisionedModelStatus m_status{ProvisionedModelStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    CommitmentDuration m_commitmentDuration{CommitmentDuration::NOT_SET};
    bool m_commitmentDurationHasBeenSet = false;

    Aws::Utils::DateTime m_commitmentExpirationTime{};
    bool m_commitmentExpirationTimeHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime{};
    bool m_creationTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastModifiedTime{};
    bool m_lastModifiedTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace Bedrock
} // namespace Aws
