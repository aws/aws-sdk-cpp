/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codepipeline/CodePipeline_EXPORTS.h>
#include <aws/codepipeline/model/TriggerType.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace CodePipeline
{
namespace Model
{

  /**
   * <p>The interaction or event that started a pipeline execution.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codepipeline-2015-07-09/ExecutionTrigger">AWS
   * API Reference</a></p>
   */
  class ExecutionTrigger
  {
  public:
    AWS_CODEPIPELINE_API ExecutionTrigger();
    AWS_CODEPIPELINE_API ExecutionTrigger(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEPIPELINE_API ExecutionTrigger& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEPIPELINE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The type of change-detection method, command, or user interaction that
     * started a pipeline execution.</p>
     */
    inline const TriggerType& GetTriggerType() const{ return m_triggerType; }

    /**
     * <p>The type of change-detection method, command, or user interaction that
     * started a pipeline execution.</p>
     */
    inline bool TriggerTypeHasBeenSet() const { return m_triggerTypeHasBeenSet; }

    /**
     * <p>The type of change-detection method, command, or user interaction that
     * started a pipeline execution.</p>
     */
    inline void SetTriggerType(const TriggerType& value) { m_triggerTypeHasBeenSet = true; m_triggerType = value; }

    /**
     * <p>The type of change-detection method, command, or user interaction that
     * started a pipeline execution.</p>
     */
    inline void SetTriggerType(TriggerType&& value) { m_triggerTypeHasBeenSet = true; m_triggerType = std::move(value); }

    /**
     * <p>The type of change-detection method, command, or user interaction that
     * started a pipeline execution.</p>
     */
    inline ExecutionTrigger& WithTriggerType(const TriggerType& value) { SetTriggerType(value); return *this;}

    /**
     * <p>The type of change-detection method, command, or user interaction that
     * started a pipeline execution.</p>
     */
    inline ExecutionTrigger& WithTriggerType(TriggerType&& value) { SetTriggerType(std::move(value)); return *this;}


    /**
     * <p>Detail related to the event that started a pipeline execution, such as the
     * webhook ARN of the webhook that triggered the pipeline execution or the user ARN
     * for a user-initiated <code>start-pipeline-execution</code> CLI command.</p>
     */
    inline const Aws::String& GetTriggerDetail() const{ return m_triggerDetail; }

    /**
     * <p>Detail related to the event that started a pipeline execution, such as the
     * webhook ARN of the webhook that triggered the pipeline execution or the user ARN
     * for a user-initiated <code>start-pipeline-execution</code> CLI command.</p>
     */
    inline bool TriggerDetailHasBeenSet() const { return m_triggerDetailHasBeenSet; }

    /**
     * <p>Detail related to the event that started a pipeline execution, such as the
     * webhook ARN of the webhook that triggered the pipeline execution or the user ARN
     * for a user-initiated <code>start-pipeline-execution</code> CLI command.</p>
     */
    inline void SetTriggerDetail(const Aws::String& value) { m_triggerDetailHasBeenSet = true; m_triggerDetail = value; }

    /**
     * <p>Detail related to the event that started a pipeline execution, such as the
     * webhook ARN of the webhook that triggered the pipeline execution or the user ARN
     * for a user-initiated <code>start-pipeline-execution</code> CLI command.</p>
     */
    inline void SetTriggerDetail(Aws::String&& value) { m_triggerDetailHasBeenSet = true; m_triggerDetail = std::move(value); }

    /**
     * <p>Detail related to the event that started a pipeline execution, such as the
     * webhook ARN of the webhook that triggered the pipeline execution or the user ARN
     * for a user-initiated <code>start-pipeline-execution</code> CLI command.</p>
     */
    inline void SetTriggerDetail(const char* value) { m_triggerDetailHasBeenSet = true; m_triggerDetail.assign(value); }

    /**
     * <p>Detail related to the event that started a pipeline execution, such as the
     * webhook ARN of the webhook that triggered the pipeline execution or the user ARN
     * for a user-initiated <code>start-pipeline-execution</code> CLI command.</p>
     */
    inline ExecutionTrigger& WithTriggerDetail(const Aws::String& value) { SetTriggerDetail(value); return *this;}

    /**
     * <p>Detail related to the event that started a pipeline execution, such as the
     * webhook ARN of the webhook that triggered the pipeline execution or the user ARN
     * for a user-initiated <code>start-pipeline-execution</code> CLI command.</p>
     */
    inline ExecutionTrigger& WithTriggerDetail(Aws::String&& value) { SetTriggerDetail(std::move(value)); return *this;}

    /**
     * <p>Detail related to the event that started a pipeline execution, such as the
     * webhook ARN of the webhook that triggered the pipeline execution or the user ARN
     * for a user-initiated <code>start-pipeline-execution</code> CLI command.</p>
     */
    inline ExecutionTrigger& WithTriggerDetail(const char* value) { SetTriggerDetail(value); return *this;}

  private:

    TriggerType m_triggerType;
    bool m_triggerTypeHasBeenSet = false;

    Aws::String m_triggerDetail;
    bool m_triggerDetailHasBeenSet = false;
  };

} // namespace Model
} // namespace CodePipeline
} // namespace Aws
