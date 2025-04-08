/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-runtime/BedrockRuntime_EXPORTS.h>
#include <aws/bedrock-runtime/model/BidirectionalOutputPayloadPart.h>
#include <aws/bedrock-runtime/model/InternalServerException.h>
#include <aws/bedrock-runtime/model/ModelStreamErrorException.h>
#include <aws/bedrock-runtime/model/ValidationException.h>
#include <aws/bedrock-runtime/model/ThrottlingException.h>
#include <aws/bedrock-runtime/model/ModelTimeoutException.h>
#include <aws/bedrock-runtime/model/ServiceUnavailableException.h>
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
namespace BedrockRuntime
{
namespace Model
{

  /**
   * <p>Output from the bidirectional stream that was used for model
   * invocation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-runtime-2023-09-30/InvokeModelWithBidirectionalStreamOutput">AWS
   * API Reference</a></p>
   */
  class InvokeModelWithBidirectionalStreamOutput
  {
  public:
    AWS_BEDROCKRUNTIME_API InvokeModelWithBidirectionalStreamOutput() = default;
    AWS_BEDROCKRUNTIME_API InvokeModelWithBidirectionalStreamOutput(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKRUNTIME_API InvokeModelWithBidirectionalStreamOutput& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The speech chunk that was provided as output from the invocation step.</p>
     */
    inline const BidirectionalOutputPayloadPart& GetChunk() const { return m_chunk; }
    inline bool ChunkHasBeenSet() const { return m_chunkHasBeenSet; }
    template<typename ChunkT = BidirectionalOutputPayloadPart>
    void SetChunk(ChunkT&& value) { m_chunkHasBeenSet = true; m_chunk = std::forward<ChunkT>(value); }
    template<typename ChunkT = BidirectionalOutputPayloadPart>
    InvokeModelWithBidirectionalStreamOutput& WithChunk(ChunkT&& value) { SetChunk(std::forward<ChunkT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The request encountered an unknown internal error.</p>
     */
    inline const InternalServerException& GetInternalServerException() const { return m_internalServerException; }
    inline bool InternalServerExceptionHasBeenSet() const { return m_internalServerExceptionHasBeenSet; }
    template<typename InternalServerExceptionT = InternalServerException>
    void SetInternalServerException(InternalServerExceptionT&& value) { m_internalServerExceptionHasBeenSet = true; m_internalServerException = std::forward<InternalServerExceptionT>(value); }
    template<typename InternalServerExceptionT = InternalServerException>
    InvokeModelWithBidirectionalStreamOutput& WithInternalServerException(InternalServerExceptionT&& value) { SetInternalServerException(std::forward<InternalServerExceptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The request encountered an error with the model stream.</p>
     */
    inline const ModelStreamErrorException& GetModelStreamErrorException() const { return m_modelStreamErrorException; }
    inline bool ModelStreamErrorExceptionHasBeenSet() const { return m_modelStreamErrorExceptionHasBeenSet; }
    template<typename ModelStreamErrorExceptionT = ModelStreamErrorException>
    void SetModelStreamErrorException(ModelStreamErrorExceptionT&& value) { m_modelStreamErrorExceptionHasBeenSet = true; m_modelStreamErrorException = std::forward<ModelStreamErrorExceptionT>(value); }
    template<typename ModelStreamErrorExceptionT = ModelStreamErrorException>
    InvokeModelWithBidirectionalStreamOutput& WithModelStreamErrorException(ModelStreamErrorExceptionT&& value) { SetModelStreamErrorException(std::forward<ModelStreamErrorExceptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The input fails to satisfy the constraints specified by an Amazon Web
     * Services service.</p>
     */
    inline const ValidationException& GetValidationException() const { return m_validationException; }
    inline bool ValidationExceptionHasBeenSet() const { return m_validationExceptionHasBeenSet; }
    template<typename ValidationExceptionT = ValidationException>
    void SetValidationException(ValidationExceptionT&& value) { m_validationExceptionHasBeenSet = true; m_validationException = std::forward<ValidationExceptionT>(value); }
    template<typename ValidationExceptionT = ValidationException>
    InvokeModelWithBidirectionalStreamOutput& WithValidationException(ValidationExceptionT&& value) { SetValidationException(std::forward<ValidationExceptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The request was denied due to request throttling.</p>
     */
    inline const ThrottlingException& GetThrottlingException() const { return m_throttlingException; }
    inline bool ThrottlingExceptionHasBeenSet() const { return m_throttlingExceptionHasBeenSet; }
    template<typename ThrottlingExceptionT = ThrottlingException>
    void SetThrottlingException(ThrottlingExceptionT&& value) { m_throttlingExceptionHasBeenSet = true; m_throttlingException = std::forward<ThrottlingExceptionT>(value); }
    template<typename ThrottlingExceptionT = ThrottlingException>
    InvokeModelWithBidirectionalStreamOutput& WithThrottlingException(ThrottlingExceptionT&& value) { SetThrottlingException(std::forward<ThrottlingExceptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The connection was closed because a request was not received within the
     * timeout period.</p>
     */
    inline const ModelTimeoutException& GetModelTimeoutException() const { return m_modelTimeoutException; }
    inline bool ModelTimeoutExceptionHasBeenSet() const { return m_modelTimeoutExceptionHasBeenSet; }
    template<typename ModelTimeoutExceptionT = ModelTimeoutException>
    void SetModelTimeoutException(ModelTimeoutExceptionT&& value) { m_modelTimeoutExceptionHasBeenSet = true; m_modelTimeoutException = std::forward<ModelTimeoutExceptionT>(value); }
    template<typename ModelTimeoutExceptionT = ModelTimeoutException>
    InvokeModelWithBidirectionalStreamOutput& WithModelTimeoutException(ModelTimeoutExceptionT&& value) { SetModelTimeoutException(std::forward<ModelTimeoutExceptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The request has failed due to a temporary failure of the server.</p>
     */
    inline const ServiceUnavailableException& GetServiceUnavailableException() const { return m_serviceUnavailableException; }
    inline bool ServiceUnavailableExceptionHasBeenSet() const { return m_serviceUnavailableExceptionHasBeenSet; }
    template<typename ServiceUnavailableExceptionT = ServiceUnavailableException>
    void SetServiceUnavailableException(ServiceUnavailableExceptionT&& value) { m_serviceUnavailableExceptionHasBeenSet = true; m_serviceUnavailableException = std::forward<ServiceUnavailableExceptionT>(value); }
    template<typename ServiceUnavailableExceptionT = ServiceUnavailableException>
    InvokeModelWithBidirectionalStreamOutput& WithServiceUnavailableException(ServiceUnavailableExceptionT&& value) { SetServiceUnavailableException(std::forward<ServiceUnavailableExceptionT>(value)); return *this;}
    ///@}
  private:

    BidirectionalOutputPayloadPart m_chunk;
    bool m_chunkHasBeenSet = false;

    InternalServerException m_internalServerException;
    bool m_internalServerExceptionHasBeenSet = false;

    ModelStreamErrorException m_modelStreamErrorException;
    bool m_modelStreamErrorExceptionHasBeenSet = false;

    ValidationException m_validationException;
    bool m_validationExceptionHasBeenSet = false;

    ThrottlingException m_throttlingException;
    bool m_throttlingExceptionHasBeenSet = false;

    ModelTimeoutException m_modelTimeoutException;
    bool m_modelTimeoutExceptionHasBeenSet = false;

    ServiceUnavailableException m_serviceUnavailableException;
    bool m_serviceUnavailableExceptionHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockRuntime
} // namespace Aws
