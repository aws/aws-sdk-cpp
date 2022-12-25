/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/model/EndpointInput.h>
#include <aws/sagemaker/model/BatchTransformInput.h>
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
   * <p>The input for the data quality monitoring job. Currently endpoints are
   * supported for input.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DataQualityJobInput">AWS
   * API Reference</a></p>
   */
  class DataQualityJobInput
  {
  public:
    AWS_SAGEMAKER_API DataQualityJobInput();
    AWS_SAGEMAKER_API DataQualityJobInput(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API DataQualityJobInput& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const EndpointInput& GetEndpointInput() const{ return m_endpointInput; }

    
    inline bool EndpointInputHasBeenSet() const { return m_endpointInputHasBeenSet; }

    
    inline void SetEndpointInput(const EndpointInput& value) { m_endpointInputHasBeenSet = true; m_endpointInput = value; }

    
    inline void SetEndpointInput(EndpointInput&& value) { m_endpointInputHasBeenSet = true; m_endpointInput = std::move(value); }

    
    inline DataQualityJobInput& WithEndpointInput(const EndpointInput& value) { SetEndpointInput(value); return *this;}

    
    inline DataQualityJobInput& WithEndpointInput(EndpointInput&& value) { SetEndpointInput(std::move(value)); return *this;}


    /**
     * <p>Input object for the batch transform job.</p>
     */
    inline const BatchTransformInput& GetBatchTransformInput() const{ return m_batchTransformInput; }

    /**
     * <p>Input object for the batch transform job.</p>
     */
    inline bool BatchTransformInputHasBeenSet() const { return m_batchTransformInputHasBeenSet; }

    /**
     * <p>Input object for the batch transform job.</p>
     */
    inline void SetBatchTransformInput(const BatchTransformInput& value) { m_batchTransformInputHasBeenSet = true; m_batchTransformInput = value; }

    /**
     * <p>Input object for the batch transform job.</p>
     */
    inline void SetBatchTransformInput(BatchTransformInput&& value) { m_batchTransformInputHasBeenSet = true; m_batchTransformInput = std::move(value); }

    /**
     * <p>Input object for the batch transform job.</p>
     */
    inline DataQualityJobInput& WithBatchTransformInput(const BatchTransformInput& value) { SetBatchTransformInput(value); return *this;}

    /**
     * <p>Input object for the batch transform job.</p>
     */
    inline DataQualityJobInput& WithBatchTransformInput(BatchTransformInput&& value) { SetBatchTransformInput(std::move(value)); return *this;}

  private:

    EndpointInput m_endpointInput;
    bool m_endpointInputHasBeenSet = false;

    BatchTransformInput m_batchTransformInput;
    bool m_batchTransformInputHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
