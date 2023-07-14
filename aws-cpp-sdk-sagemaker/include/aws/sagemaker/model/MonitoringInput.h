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
   * <p>The inputs for a monitoring job.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/MonitoringInput">AWS
   * API Reference</a></p>
   */
  class AWS_SAGEMAKER_API MonitoringInput
  {
  public:
    MonitoringInput();
    MonitoringInput(Aws::Utils::Json::JsonView jsonValue);
    MonitoringInput& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The endpoint for a monitoring job.</p>
     */
    inline const EndpointInput& GetEndpointInput() const{ return m_endpointInput; }

    /**
     * <p>The endpoint for a monitoring job.</p>
     */
    inline bool EndpointInputHasBeenSet() const { return m_endpointInputHasBeenSet; }

    /**
     * <p>The endpoint for a monitoring job.</p>
     */
    inline void SetEndpointInput(const EndpointInput& value) { m_endpointInputHasBeenSet = true; m_endpointInput = value; }

    /**
     * <p>The endpoint for a monitoring job.</p>
     */
    inline void SetEndpointInput(EndpointInput&& value) { m_endpointInputHasBeenSet = true; m_endpointInput = std::move(value); }

    /**
     * <p>The endpoint for a monitoring job.</p>
     */
    inline MonitoringInput& WithEndpointInput(const EndpointInput& value) { SetEndpointInput(value); return *this;}

    /**
     * <p>The endpoint for a monitoring job.</p>
     */
    inline MonitoringInput& WithEndpointInput(EndpointInput&& value) { SetEndpointInput(std::move(value)); return *this;}

  private:

    EndpointInput m_endpointInput;
    bool m_endpointInputHasBeenSet;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
