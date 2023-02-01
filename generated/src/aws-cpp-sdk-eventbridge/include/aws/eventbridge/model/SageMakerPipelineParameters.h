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
   * <p>These are custom parameters to use when the target is a SageMaker Model
   * Building Pipeline that starts based on EventBridge events.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/eventbridge-2015-10-07/SageMakerPipelineParameters">AWS
   * API Reference</a></p>
   */
  class SageMakerPipelineParameters
  {
  public:
    AWS_EVENTBRIDGE_API SageMakerPipelineParameters();
    AWS_EVENTBRIDGE_API SageMakerPipelineParameters(Aws::Utils::Json::JsonView jsonValue);
    AWS_EVENTBRIDGE_API SageMakerPipelineParameters& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_EVENTBRIDGE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>List of Parameter names and values for SageMaker Model Building Pipeline
     * execution.</p>
     */
    inline const Aws::Vector<SageMakerPipelineParameter>& GetPipelineParameterList() const{ return m_pipelineParameterList; }

    /**
     * <p>List of Parameter names and values for SageMaker Model Building Pipeline
     * execution.</p>
     */
    inline bool PipelineParameterListHasBeenSet() const { return m_pipelineParameterListHasBeenSet; }

    /**
     * <p>List of Parameter names and values for SageMaker Model Building Pipeline
     * execution.</p>
     */
    inline void SetPipelineParameterList(const Aws::Vector<SageMakerPipelineParameter>& value) { m_pipelineParameterListHasBeenSet = true; m_pipelineParameterList = value; }

    /**
     * <p>List of Parameter names and values for SageMaker Model Building Pipeline
     * execution.</p>
     */
    inline void SetPipelineParameterList(Aws::Vector<SageMakerPipelineParameter>&& value) { m_pipelineParameterListHasBeenSet = true; m_pipelineParameterList = std::move(value); }

    /**
     * <p>List of Parameter names and values for SageMaker Model Building Pipeline
     * execution.</p>
     */
    inline SageMakerPipelineParameters& WithPipelineParameterList(const Aws::Vector<SageMakerPipelineParameter>& value) { SetPipelineParameterList(value); return *this;}

    /**
     * <p>List of Parameter names and values for SageMaker Model Building Pipeline
     * execution.</p>
     */
    inline SageMakerPipelineParameters& WithPipelineParameterList(Aws::Vector<SageMakerPipelineParameter>&& value) { SetPipelineParameterList(std::move(value)); return *this;}

    /**
     * <p>List of Parameter names and values for SageMaker Model Building Pipeline
     * execution.</p>
     */
    inline SageMakerPipelineParameters& AddPipelineParameterList(const SageMakerPipelineParameter& value) { m_pipelineParameterListHasBeenSet = true; m_pipelineParameterList.push_back(value); return *this; }

    /**
     * <p>List of Parameter names and values for SageMaker Model Building Pipeline
     * execution.</p>
     */
    inline SageMakerPipelineParameters& AddPipelineParameterList(SageMakerPipelineParameter&& value) { m_pipelineParameterListHasBeenSet = true; m_pipelineParameterList.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<SageMakerPipelineParameter> m_pipelineParameterList;
    bool m_pipelineParameterListHasBeenSet = false;
  };

} // namespace Model
} // namespace EventBridge
} // namespace Aws
