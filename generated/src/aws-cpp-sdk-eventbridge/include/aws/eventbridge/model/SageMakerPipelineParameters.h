/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/eventbridge/EventBridge_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/eventbridge/model/SageMakerPipelineParameter.h>
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
namespace EventBridge
{
namespace Model
{

  /**
   * <p>These are custom parameters to use when the target is a SageMaker AI Model
   * Building Pipeline that starts based on EventBridge events.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/eventbridge-2015-10-07/SageMakerPipelineParameters">AWS
   * API Reference</a></p>
   */
  class SageMakerPipelineParameters
  {
  public:
    AWS_EVENTBRIDGE_API SageMakerPipelineParameters() = default;
    AWS_EVENTBRIDGE_API SageMakerPipelineParameters(Aws::Utils::Json::JsonView jsonValue);
    AWS_EVENTBRIDGE_API SageMakerPipelineParameters& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_EVENTBRIDGE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>List of Parameter names and values for SageMaker AI Model Building Pipeline
     * execution.</p>
     */
    inline const Aws::Vector<SageMakerPipelineParameter>& GetPipelineParameterList() const { return m_pipelineParameterList; }
    inline bool PipelineParameterListHasBeenSet() const { return m_pipelineParameterListHasBeenSet; }
    template<typename PipelineParameterListT = Aws::Vector<SageMakerPipelineParameter>>
    void SetPipelineParameterList(PipelineParameterListT&& value) { m_pipelineParameterListHasBeenSet = true; m_pipelineParameterList = std::forward<PipelineParameterListT>(value); }
    template<typename PipelineParameterListT = Aws::Vector<SageMakerPipelineParameter>>
    SageMakerPipelineParameters& WithPipelineParameterList(PipelineParameterListT&& value) { SetPipelineParameterList(std::forward<PipelineParameterListT>(value)); return *this;}
    template<typename PipelineParameterListT = SageMakerPipelineParameter>
    SageMakerPipelineParameters& AddPipelineParameterList(PipelineParameterListT&& value) { m_pipelineParameterListHasBeenSet = true; m_pipelineParameterList.emplace_back(std::forward<PipelineParameterListT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<SageMakerPipelineParameter> m_pipelineParameterList;
    bool m_pipelineParameterListHasBeenSet = false;
  };

} // namespace Model
} // namespace EventBridge
} // namespace Aws
