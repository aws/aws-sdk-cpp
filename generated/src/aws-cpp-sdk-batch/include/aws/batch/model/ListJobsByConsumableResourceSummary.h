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
    AWS_BATCH_API ListJobsByConsumableResourceSummary();
    AWS_BATCH_API ListJobsByConsumableResourceSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_BATCH_API ListJobsByConsumableResourceSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BATCH_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the job.</p>
     */
    inline const Aws::String& GetJobArn() const{ return m_jobArn; }
    inline bool JobArnHasBeenSet() const { return m_jobArnHasBeenSet; }
    inline void SetJobArn(const Aws::String& value) { m_jobArnHasBeenSet = true; m_jobArn = value; }
    inline void SetJobArn(Aws::String&& value) { m_jobArnHasBeenSet = true; m_jobArn = std::move(value); }
    inline void SetJobArn(const char* value) { m_jobArnHasBeenSet = true; m_jobArn.assign(value); }
    inline ListJobsByConsumableResourceSummary& WithJobArn(const Aws::String& value) { SetJobArn(value); return *this;}
    inline ListJobsByConsumableResourceSummary& WithJobArn(Aws::String&& value) { SetJobArn(std::move(value)); return *this;}
    inline ListJobsByConsumableResourceSummary& WithJobArn(const char* value) { SetJobArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the job queue.</p>
     */
    inline const Aws::String& GetJobQueueArn() const{ return m_jobQueueArn; }
    inline bool JobQueueArnHasBeenSet() const { return m_jobQueueArnHasBeenSet; }
    inline void SetJobQueueArn(const Aws::String& value) { m_jobQueueArnHasBeenSet = true; m_jobQueueArn = value; }
    inline void SetJobQueueArn(Aws::String&& value) { m_jobQueueArnHasBeenSet = true; m_jobQueueArn = std::move(value); }
    inline void SetJobQueueArn(const char* value) { m_jobQueueArnHasBeenSet = true; m_jobQueueArn.assign(value); }
    inline ListJobsByConsumableResourceSummary& WithJobQueueArn(const Aws::String& value) { SetJobQueueArn(value); return *this;}
    inline ListJobsByConsumableResourceSummary& WithJobQueueArn(Aws::String&& value) { SetJobQueueArn(std::move(value)); return *this;}
    inline ListJobsByConsumableResourceSummary& WithJobQueueArn(const char* value) { SetJobQueueArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the job.</p>
     */
    inline const Aws::String& GetJobName() const{ return m_jobName; }
    inline bool JobNameHasBeenSet() const { return m_jobNameHasBeenSet; }
    inline void SetJobName(const Aws::String& value) { m_jobNameHasBeenSet = true; m_jobName = value; }
    inline void SetJobName(Aws::String&& value) { m_jobNameHasBeenSet = true; m_jobName = std::move(value); }
    inline void SetJobName(const char* value) { m_jobNameHasBeenSet = true; m_jobName.assign(value); }
    inline ListJobsByConsumableResourceSummary& WithJobName(const Aws::String& value) { SetJobName(value); return *this;}
    inline ListJobsByConsumableResourceSummary& WithJobName(Aws::String&& value) { SetJobName(std::move(value)); return *this;}
    inline ListJobsByConsumableResourceSummary& WithJobName(const char* value) { SetJobName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the job definition.</p>
     */
    inline const Aws::String& GetJobDefinitionArn() const{ return m_jobDefinitionArn; }
    inline bool JobDefinitionArnHasBeenSet() const { return m_jobDefinitionArnHasBeenSet; }
    inline void SetJobDefinitionArn(const Aws::String& value) { m_jobDefinitionArnHasBeenSet = true; m_jobDefinitionArn = value; }
    inline void SetJobDefinitionArn(Aws::String&& value) { m_jobDefinitionArnHasBeenSet = true; m_jobDefinitionArn = std::move(value); }
    inline void SetJobDefinitionArn(const char* value) { m_jobDefinitionArnHasBeenSet = true; m_jobDefinitionArn.assign(value); }
    inline ListJobsByConsumableResourceSummary& WithJobDefinitionArn(const Aws::String& value) { SetJobDefinitionArn(value); return *this;}
    inline ListJobsByConsumableResourceSummary& WithJobDefinitionArn(Aws::String&& value) { SetJobDefinitionArn(std::move(value)); return *this;}
    inline ListJobsByConsumableResourceSummary& WithJobDefinitionArn(const char* value) { SetJobDefinitionArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The fair-share scheduling policy identifier for the job.</p>
     */
    inline const Aws::String& GetShareIdentifier() const{ return m_shareIdentifier; }
    inline bool ShareIdentifierHasBeenSet() const { return m_shareIdentifierHasBeenSet; }
    inline void SetShareIdentifier(const Aws::String& value) { m_shareIdentifierHasBeenSet = true; m_shareIdentifier = value; }
    inline void SetShareIdentifier(Aws::String&& value) { m_shareIdentifierHasBeenSet = true; m_shareIdentifier = std::move(value); }
    inline void SetShareIdentifier(const char* value) { m_shareIdentifierHasBeenSet = true; m_shareIdentifier.assign(value); }
    inline ListJobsByConsumableResourceSummary& WithShareIdentifier(const Aws::String& value) { SetShareIdentifier(value); return *this;}
    inline ListJobsByConsumableResourceSummary& WithShareIdentifier(Aws::String&& value) { SetShareIdentifier(std::move(value)); return *this;}
    inline ListJobsByConsumableResourceSummary& WithShareIdentifier(const char* value) { SetShareIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the job. Can be one of:</p> <ul> <li> <p>
     * <code>SUBMITTED</code> </p> </li> <li> <p> <code>PENDING</code> </p> </li> <li>
     * <p> <code>RUNNABLE</code> </p> </li> <li> <p> <code>STARTING</code> </p> </li>
     * <li> <p> <code>RUNNING</code> </p> </li> <li> <p> <code>SUCCEEDED</code> </p>
     * </li> <li> <p> <code>FAILED</code> </p> </li> </ul>
     */
    inline const Aws::String& GetJobStatus() const{ return m_jobStatus; }
    inline bool JobStatusHasBeenSet() const { return m_jobStatusHasBeenSet; }
    inline void SetJobStatus(const Aws::String& value) { m_jobStatusHasBeenSet = true; m_jobStatus = value; }
    inline void SetJobStatus(Aws::String&& value) { m_jobStatusHasBeenSet = true; m_jobStatus = std::move(value); }
    inline void SetJobStatus(const char* value) { m_jobStatusHasBeenSet = true; m_jobStatus.assign(value); }
    inline ListJobsByConsumableResourceSummary& WithJobStatus(const Aws::String& value) { SetJobStatus(value); return *this;}
    inline ListJobsByConsumableResourceSummary& WithJobStatus(Aws::String&& value) { SetJobStatus(std::move(value)); return *this;}
    inline ListJobsByConsumableResourceSummary& WithJobStatus(const char* value) { SetJobStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The total amount of the consumable resource that is available.</p>
     */
    inline long long GetQuantity() const{ return m_quantity; }
    inline bool QuantityHasBeenSet() const { return m_quantityHasBeenSet; }
    inline void SetQuantity(long long value) { m_quantityHasBeenSet = true; m_quantity = value; }
    inline ListJobsByConsumableResourceSummary& WithQuantity(long long value) { SetQuantity(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A short, human-readable string to provide more details for the current status
     * of the job.</p>
     */
    inline const Aws::String& GetStatusReason() const{ return m_statusReason; }
    inline bool StatusReasonHasBeenSet() const { return m_statusReasonHasBeenSet; }
    inline void SetStatusReason(const Aws::String& value) { m_statusReasonHasBeenSet = true; m_statusReason = value; }
    inline void SetStatusReason(Aws::String&& value) { m_statusReasonHasBeenSet = true; m_statusReason = std::move(value); }
    inline void SetStatusReason(const char* value) { m_statusReasonHasBeenSet = true; m_statusReason.assign(value); }
    inline ListJobsByConsumableResourceSummary& WithStatusReason(const Aws::String& value) { SetStatusReason(value); return *this;}
    inline ListJobsByConsumableResourceSummary& WithStatusReason(Aws::String&& value) { SetStatusReason(std::move(value)); return *this;}
    inline ListJobsByConsumableResourceSummary& WithStatusReason(const char* value) { SetStatusReason(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Unix timestamp for when the job was started. More specifically, it's when
     * the job transitioned from the <code>STARTING</code> state to the
     * <code>RUNNING</code> state.</p>
     */
    inline long long GetStartedAt() const{ return m_startedAt; }
    inline bool StartedAtHasBeenSet() const { return m_startedAtHasBeenSet; }
    inline void SetStartedAt(long long value) { m_startedAtHasBeenSet = true; m_startedAt = value; }
    inline ListJobsByConsumableResourceSummary& WithStartedAt(long long value) { SetStartedAt(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Unix timestamp (in milliseconds) for when the consumable resource was
     * created.</p>
     */
    inline long long GetCreatedAt() const{ return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    inline void SetCreatedAt(long long value) { m_createdAtHasBeenSet = true; m_createdAt = value; }
    inline ListJobsByConsumableResourceSummary& WithCreatedAt(long long value) { SetCreatedAt(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains a list of consumable resources required by the job.</p>
     */
    inline const ConsumableResourceProperties& GetConsumableResourceProperties() const{ return m_consumableResourceProperties; }
    inline bool ConsumableResourcePropertiesHasBeenSet() const { return m_consumableResourcePropertiesHasBeenSet; }
    inline void SetConsumableResourceProperties(const ConsumableResourceProperties& value) { m_consumableResourcePropertiesHasBeenSet = true; m_consumableResourceProperties = value; }
    inline void SetConsumableResourceProperties(ConsumableResourceProperties&& value) { m_consumableResourcePropertiesHasBeenSet = true; m_consumableResourceProperties = std::move(value); }
    inline ListJobsByConsumableResourceSummary& WithConsumableResourceProperties(const ConsumableResourceProperties& value) { SetConsumableResourceProperties(value); return *this;}
    inline ListJobsByConsumableResourceSummary& WithConsumableResourceProperties(ConsumableResourceProperties&& value) { SetConsumableResourceProperties(std::move(value)); return *this;}
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

    long long m_quantity;
    bool m_quantityHasBeenSet = false;

    Aws::String m_statusReason;
    bool m_statusReasonHasBeenSet = false;

    long long m_startedAt;
    bool m_startedAtHasBeenSet = false;

    long long m_createdAt;
    bool m_createdAtHasBeenSet = false;

    ConsumableResourceProperties m_consumableResourceProperties;
    bool m_consumableResourcePropertiesHasBeenSet = false;
  };

} // namespace Model
} // namespace Batch
} // namespace Aws
