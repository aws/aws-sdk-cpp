/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/model/EndpointInput.h>
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
namespace SageMaker
{
namespace Model
{

  /**
   * <p>Inputs for the model explainability job.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ModelExplainabilityJobInput">AWS
   * API Reference</a></p>
   */
  class AWS_SAGEMAKER_API ModelExplainabilityJobInput
  {
  public:
    ModelExplainabilityJobInput();
    ModelExplainabilityJobInput(Aws::Utils::Json::JsonView jsonValue);
    ModelExplainabilityJobInput& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const EndpointInput& GetEndpointInput() const{ return m_endpointInput; }

    
    inline bool EndpointInputHasBeenSet() const { return m_endpointInputHasBeenSet; }

    
    inline void SetEndpointInput(const EndpointInput& value) { m_endpointInputHasBeenSet = true; m_endpointInput = value; }

    
    inline void SetEndpointInput(EndpointInput&& value) { m_endpointInputHasBeenSet = true; m_endpointInput = std::move(value); }

    
    inline ModelExplainabilityJobInput& WithEndpointInput(const EndpointInput& value) { SetEndpointInput(value); return *this;}

    
    inline ModelExplainabilityJobInput& WithEndpointInput(EndpointInput&& value) { SetEndpointInput(std::move(value)); return *this;}

  private:

    EndpointInput m_endpointInput;
    bool m_endpointInputHasBeenSet;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
