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
    AWS_CODEPIPELINE_API ExecutionTrigger() = default;
    AWS_CODEPIPELINE_API ExecutionTrigger(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEPIPELINE_API ExecutionTrigger& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEPIPELINE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The type of change-detection method, command, or user interaction that
     * started a pipeline execution.</p>
     */
    inline TriggerType GetTriggerType() const { return m_triggerType; }
    inline bool TriggerTypeHasBeenSet() const { return m_triggerTypeHasBeenSet; }
    inline void SetTriggerType(TriggerType value) { m_triggerTypeHasBeenSet = true; m_triggerType = value; }
    inline ExecutionTrigger& WithTriggerType(TriggerType value) { SetTriggerType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Detail related to the event that started a pipeline execution, such as the
     * webhook ARN of the webhook that triggered the pipeline execution or the user ARN
     * for a user-initiated <code>start-pipeline-execution</code> CLI command.</p>
     */
    inline const Aws::String& GetTriggerDetail() const { return m_triggerDetail; }
    inline bool TriggerDetailHasBeenSet() const { return m_triggerDetailHasBeenSet; }
    template<typename TriggerDetailT = Aws::String>
    void SetTriggerDetail(TriggerDetailT&& value) { m_triggerDetailHasBeenSet = true; m_triggerDetail = std::forward<TriggerDetailT>(value); }
    template<typename TriggerDetailT = Aws::String>
    ExecutionTrigger& WithTriggerDetail(TriggerDetailT&& value) { SetTriggerDetail(std::forward<TriggerDetailT>(value)); return *this;}
    ///@}
  private:

    TriggerType m_triggerType{TriggerType::NOT_SET};
    bool m_triggerTypeHasBeenSet = false;

    Aws::String m_triggerDetail;
    bool m_triggerDetailHasBeenSet = false;
  };

} // namespace Model
} // namespace CodePipeline
} // namespace Aws
