/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker-a2i-runtime/AugmentedAIRuntime_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker-a2i-runtime/model/HumanLoopStatus.h>
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
namespace AugmentedAIRuntime
{
namespace Model
{

  /**
   * <p>Summary information about the human loop.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-a2i-runtime-2019-11-07/HumanLoopSummary">AWS
   * API Reference</a></p>
   */
  class HumanLoopSummary
  {
  public:
    AWS_AUGMENTEDAIRUNTIME_API HumanLoopSummary();
    AWS_AUGMENTEDAIRUNTIME_API HumanLoopSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_AUGMENTEDAIRUNTIME_API HumanLoopSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_AUGMENTEDAIRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the human loop.</p>
     */
    inline const Aws::String& GetHumanLoopName() const{ return m_humanLoopName; }

    /**
     * <p>The name of the human loop.</p>
     */
    inline bool HumanLoopNameHasBeenSet() const { return m_humanLoopNameHasBeenSet; }

    /**
     * <p>The name of the human loop.</p>
     */
    inline void SetHumanLoopName(const Aws::String& value) { m_humanLoopNameHasBeenSet = true; m_humanLoopName = value; }

    /**
     * <p>The name of the human loop.</p>
     */
    inline void SetHumanLoopName(Aws::String&& value) { m_humanLoopNameHasBeenSet = true; m_humanLoopName = std::move(value); }

    /**
     * <p>The name of the human loop.</p>
     */
    inline void SetHumanLoopName(const char* value) { m_humanLoopNameHasBeenSet = true; m_humanLoopName.assign(value); }

    /**
     * <p>The name of the human loop.</p>
     */
    inline HumanLoopSummary& WithHumanLoopName(const Aws::String& value) { SetHumanLoopName(value); return *this;}

    /**
     * <p>The name of the human loop.</p>
     */
    inline HumanLoopSummary& WithHumanLoopName(Aws::String&& value) { SetHumanLoopName(std::move(value)); return *this;}

    /**
     * <p>The name of the human loop.</p>
     */
    inline HumanLoopSummary& WithHumanLoopName(const char* value) { SetHumanLoopName(value); return *this;}


    /**
     * <p>The status of the human loop. </p>
     */
    inline const HumanLoopStatus& GetHumanLoopStatus() const{ return m_humanLoopStatus; }

    /**
     * <p>The status of the human loop. </p>
     */
    inline bool HumanLoopStatusHasBeenSet() const { return m_humanLoopStatusHasBeenSet; }

    /**
     * <p>The status of the human loop. </p>
     */
    inline void SetHumanLoopStatus(const HumanLoopStatus& value) { m_humanLoopStatusHasBeenSet = true; m_humanLoopStatus = value; }

    /**
     * <p>The status of the human loop. </p>
     */
    inline void SetHumanLoopStatus(HumanLoopStatus&& value) { m_humanLoopStatusHasBeenSet = true; m_humanLoopStatus = std::move(value); }

    /**
     * <p>The status of the human loop. </p>
     */
    inline HumanLoopSummary& WithHumanLoopStatus(const HumanLoopStatus& value) { SetHumanLoopStatus(value); return *this;}

    /**
     * <p>The status of the human loop. </p>
     */
    inline HumanLoopSummary& WithHumanLoopStatus(HumanLoopStatus&& value) { SetHumanLoopStatus(std::move(value)); return *this;}


    /**
     * <p>When Amazon Augmented AI created the human loop.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }

    /**
     * <p>When Amazon Augmented AI created the human loop.</p>
     */
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }

    /**
     * <p>When Amazon Augmented AI created the human loop.</p>
     */
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }

    /**
     * <p>When Amazon Augmented AI created the human loop.</p>
     */
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::move(value); }

    /**
     * <p>When Amazon Augmented AI created the human loop.</p>
     */
    inline HumanLoopSummary& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}

    /**
     * <p>When Amazon Augmented AI created the human loop.</p>
     */
    inline HumanLoopSummary& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}


    /**
     * <p>The reason why the human loop failed. A failure reason is returned when the
     * status of the human loop is <code>Failed</code>.</p>
     */
    inline const Aws::String& GetFailureReason() const{ return m_failureReason; }

    /**
     * <p>The reason why the human loop failed. A failure reason is returned when the
     * status of the human loop is <code>Failed</code>.</p>
     */
    inline bool FailureReasonHasBeenSet() const { return m_failureReasonHasBeenSet; }

    /**
     * <p>The reason why the human loop failed. A failure reason is returned when the
     * status of the human loop is <code>Failed</code>.</p>
     */
    inline void SetFailureReason(const Aws::String& value) { m_failureReasonHasBeenSet = true; m_failureReason = value; }

    /**
     * <p>The reason why the human loop failed. A failure reason is returned when the
     * status of the human loop is <code>Failed</code>.</p>
     */
    inline void SetFailureReason(Aws::String&& value) { m_failureReasonHasBeenSet = true; m_failureReason = std::move(value); }

    /**
     * <p>The reason why the human loop failed. A failure reason is returned when the
     * status of the human loop is <code>Failed</code>.</p>
     */
    inline void SetFailureReason(const char* value) { m_failureReasonHasBeenSet = true; m_failureReason.assign(value); }

    /**
     * <p>The reason why the human loop failed. A failure reason is returned when the
     * status of the human loop is <code>Failed</code>.</p>
     */
    inline HumanLoopSummary& WithFailureReason(const Aws::String& value) { SetFailureReason(value); return *this;}

    /**
     * <p>The reason why the human loop failed. A failure reason is returned when the
     * status of the human loop is <code>Failed</code>.</p>
     */
    inline HumanLoopSummary& WithFailureReason(Aws::String&& value) { SetFailureReason(std::move(value)); return *this;}

    /**
     * <p>The reason why the human loop failed. A failure reason is returned when the
     * status of the human loop is <code>Failed</code>.</p>
     */
    inline HumanLoopSummary& WithFailureReason(const char* value) { SetFailureReason(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the flow definition used to configure the
     * human loop.</p>
     */
    inline const Aws::String& GetFlowDefinitionArn() const{ return m_flowDefinitionArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the flow definition used to configure the
     * human loop.</p>
     */
    inline bool FlowDefinitionArnHasBeenSet() const { return m_flowDefinitionArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the flow definition used to configure the
     * human loop.</p>
     */
    inline void SetFlowDefinitionArn(const Aws::String& value) { m_flowDefinitionArnHasBeenSet = true; m_flowDefinitionArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the flow definition used to configure the
     * human loop.</p>
     */
    inline void SetFlowDefinitionArn(Aws::String&& value) { m_flowDefinitionArnHasBeenSet = true; m_flowDefinitionArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the flow definition used to configure the
     * human loop.</p>
     */
    inline void SetFlowDefinitionArn(const char* value) { m_flowDefinitionArnHasBeenSet = true; m_flowDefinitionArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the flow definition used to configure the
     * human loop.</p>
     */
    inline HumanLoopSummary& WithFlowDefinitionArn(const Aws::String& value) { SetFlowDefinitionArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the flow definition used to configure the
     * human loop.</p>
     */
    inline HumanLoopSummary& WithFlowDefinitionArn(Aws::String&& value) { SetFlowDefinitionArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the flow definition used to configure the
     * human loop.</p>
     */
    inline HumanLoopSummary& WithFlowDefinitionArn(const char* value) { SetFlowDefinitionArn(value); return *this;}

  private:

    Aws::String m_humanLoopName;
    bool m_humanLoopNameHasBeenSet = false;

    HumanLoopStatus m_humanLoopStatus;
    bool m_humanLoopStatusHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime;
    bool m_creationTimeHasBeenSet = false;

    Aws::String m_failureReason;
    bool m_failureReasonHasBeenSet = false;

    Aws::String m_flowDefinitionArn;
    bool m_flowDefinitionArnHasBeenSet = false;
  };

} // namespace Model
} // namespace AugmentedAIRuntime
} // namespace Aws
