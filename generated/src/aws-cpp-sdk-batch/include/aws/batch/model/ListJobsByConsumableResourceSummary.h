/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/batch/Batch_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/batch/model/ConsumableResourceProperties.h>
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
namespace Batch
{
namespace Model
{

  /**
   * <p>Current information about a consumable resource required by a
   * job.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/batch-2016-08-10/ListJobsByConsumableResourceSummary">AWS
   * API Reference</a></p>
   */
  class ListJobsByConsumableResourceSummary
  {
  public:
    AWS_BATCH_API ListJobsByConsumableResourceSummary() = default;
    AWS_BATCH_API ListJobsByConsumableResourceSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_BATCH_API ListJobsByConsumableResourceSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BATCH_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the job.</p>
     */
    inline const Aws::String& GetJobArn() const { return m_jobArn; }
    inline bool JobArnHasBeenSet() const { return m_jobArnHasBeenSet; }
    template<typename JobArnT = Aws::String>
    void SetJobArn(JobArnT&& value) { m_jobArnHasBeenSet = true; m_jobArn = std::forward<JobArnT>(value); }
    template<typename JobArnT = Aws::String>
    ListJobsByConsumableResourceSummary& WithJobArn(JobArnT&& value) { SetJobArn(std::forward<JobArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the job queue.</p>
     */
    inline const Aws::String& GetJobQueueArn() const { return m_jobQueueArn; }
    inline bool JobQueueArnHasBeenSet() const { return m_jobQueueArnHasBeenSet; }
    template<typename JobQueueArnT = Aws::String>
    void SetJobQueueArn(JobQueueArnT&& value) { m_jobQueueArnHasBeenSet = true; m_jobQueueArn = std::forward<JobQueueArnT>(value); }
    template<typename JobQueueArnT = Aws::String>
    ListJobsByConsumableResourceSummary& WithJobQueueArn(JobQueueArnT&& value) { SetJobQueueArn(std::forward<JobQueueArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the job.</p>
     */
    inline const Aws::String& GetJobName() const { return m_jobName; }
    inline bool JobNameHasBeenSet() const { return m_jobNameHasBeenSet; }
    template<typename JobNameT = Aws::String>
    void SetJobName(JobNameT&& value) { m_jobNameHasBeenSet = true; m_jobName = std::forward<JobNameT>(value); }
    template<typename JobNameT = Aws::String>
    ListJobsByConsumableResourceSummary& WithJobName(JobNameT&& value) { SetJobName(std::forward<JobNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the job definition.</p>
     */
    inline const Aws::String& GetJobDefinitionArn() const { return m_jobDefinitionArn; }
    inline bool JobDefinitionArnHasBeenSet() const { return m_jobDefinitionArnHasBeenSet; }
    template<typename JobDefinitionArnT = Aws::String>
    void SetJobDefinitionArn(JobDefinitionArnT&& value) { m_jobDefinitionArnHasBeenSet = true; m_jobDefinitionArn = std::forward<JobDefinitionArnT>(value); }
    template<typename JobDefinitionArnT = Aws::String>
    ListJobsByConsumableResourceSummary& WithJobDefinitionArn(JobDefinitionArnT&& value) { SetJobDefinitionArn(std::forward<JobDefinitionArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The fair-share scheduling policy identifier for the job.</p>
     */
    inline const Aws::String& GetShareIdentifier() const { return m_shareIdentifier; }
    inline bool ShareIdentifierHasBeenSet() const { return m_shareIdentifierHasBeenSet; }
    template<typename ShareIdentifierT = Aws::String>
    void SetShareIdentifier(ShareIdentifierT&& value) { m_shareIdentifierHasBeenSet = true; m_shareIdentifier = std::forward<ShareIdentifierT>(value); }
    template<typename ShareIdentifierT = Aws::String>
    ListJobsByConsumableResourceSummary& WithShareIdentifier(ShareIdentifierT&& value) { SetShareIdentifier(std::forward<ShareIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the job. Can be one of:</p> <ul> <li> <p>
     * <code>SUBMITTED</code> </p> </li> <li> <p> <code>PENDING</code> </p> </li> <li>
     * <p> <code>RUNNABLE</code> </p> </li> <li> <p> <code>STARTING</code> </p> </li>
     * <li> <p> <code>RUNNING</code> </p> </li> <li> <p> <code>SUCCEEDED</code> </p>
     * </li> <li> <p> <code>FAILED</code> </p> </li> </ul>
     */
    inline const Aws::String& GetJobStatus() const { return m_jobStatus; }
    inline bool JobStatusHasBeenSet() const { return m_jobStatusHasBeenSet; }
    template<typename JobStatusT = Aws::String>
    void SetJobStatus(JobStatusT&& value) { m_jobStatusHasBeenSet = true; m_jobStatus = std::forward<JobStatusT>(value); }
    template<typename JobStatusT = Aws::String>
    ListJobsByConsumableResourceSummary& WithJobStatus(JobStatusT&& value) { SetJobStatus(std::forward<JobStatusT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The total amount of the consumable resource that is available.</p>
     */
    inline long long GetQuantity() const { return m_quantity; }
    inline bool QuantityHasBeenSet() const { return m_quantityHasBeenSet; }
    inline void SetQuantity(long long value) { m_quantityHasBeenSet = true; m_quantity = value; }
    inline ListJobsByConsumableResourceSummary& WithQuantity(long long value) { SetQuantity(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A short, human-readable string to provide more details for the current status
     * of the job.</p>
     */
    inline const Aws::String& GetStatusReason() const { return m_statusReason; }
    inline bool StatusReasonHasBeenSet() const { return m_statusReasonHasBeenSet; }
    template<typename StatusReasonT = Aws::String>
    void SetStatusReason(StatusReasonT&& value) { m_statusReasonHasBeenSet = true; m_statusReason = std::forward<StatusReasonT>(value); }
    template<typename StatusReasonT = Aws::String>
    ListJobsByConsumableResourceSummary& WithStatusReason(StatusReasonT&& value) { SetStatusReason(std::forward<StatusReasonT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Unix timestamp for when the job was started. More specifically, it's when
     * the job transitioned from the <code>STARTING</code> state to the
     * <code>RUNNING</code> state.</p>
     */
    inline long long GetStartedAt() const { return m_startedAt; }
    inline bool StartedAtHasBeenSet() const { return m_startedAtHasBeenSet; }
    inline void SetStartedAt(long long value) { m_startedAtHasBeenSet = true; m_startedAt = value; }
    inline ListJobsByConsumableResourceSummary& WithStartedAt(long long value) { SetStartedAt(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Unix timestamp (in milliseconds) for when the consumable resource was
     * created.</p>
     */
    inline long long GetCreatedAt() const { return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    inline void SetCreatedAt(long long value) { m_createdAtHasBeenSet = true; m_createdAt = value; }
    inline ListJobsByConsumableResourceSummary& WithCreatedAt(long long value) { SetCreatedAt(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains a list of consumable resources required by the job.</p>
     */
    inline const ConsumableResourceProperties& GetConsumableResourceProperties() const { return m_consumableResourceProperties; }
    inline bool ConsumableResourcePropertiesHasBeenSet() const { return m_consumableResourcePropertiesHasBeenSet; }
    template<typename ConsumableResourcePropertiesT = ConsumableResourceProperties>
    void SetConsumableResourceProperties(ConsumableResourcePropertiesT&& value) { m_consumableResourcePropertiesHasBeenSet = true; m_consumableResourceProperties = std::forward<ConsumableResourcePropertiesT>(value); }
    template<typename ConsumableResourcePropertiesT = ConsumableResourceProperties>
    ListJobsByConsumableResourceSummary& WithConsumableResourceProperties(ConsumableResourcePropertiesT&& value) { SetConsumableResourceProperties(std::forward<ConsumableResourcePropertiesT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_jobArn;
    bool m_jobArnHasBeenSet = false;

    Aws::String m_jobQueueArn;
    bool m_jobQueueArnHasBeenSet = false;

    Aws::String m_jobName;
    bool m_jobNameHasBeenSet = false;

    Aws::String m_jobDefinitionArn;
    bool m_jobDefinitionArnHasBeenSet = false;

    Aws::String m_shareIdentifier;
    bool m_shareIdentifierHasBeenSet = false;

    Aws::String m_jobStatus;
    bool m_jobStatusHasBeenSet = false;

    long long m_quantity{0};
    bool m_quantityHasBeenSet = false;

    Aws::String m_statusReason;
    bool m_statusReasonHasBeenSet = false;

    long long m_startedAt{0};
    bool m_startedAtHasBeenSet = false;

    long long m_createdAt{0};
    bool m_createdAtHasBeenSet = false;

    ConsumableResourceProperties m_consumableResourceProperties;
    bool m_consumableResourcePropertiesHasBeenSet = false;
  };

} // namespace Model
} // namespace Batch
} // namespace Aws
