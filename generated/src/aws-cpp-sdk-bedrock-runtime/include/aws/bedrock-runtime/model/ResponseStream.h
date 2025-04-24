/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-runtime/BedrockRuntime_EXPORTS.h>
#include <aws/bedrock-runtime/model/PayloadPart.h>
#include <aws/bedrock-runtime/model/ModelStreamErrorException.h>
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
   * <p>Definition of content in the response stream.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-runtime-2023-09-30/ResponseStream">AWS
   * API Reference</a></p>
   */
  class ResponseStream
  {
  public:
    AWS_BEDROCKRUNTIME_API ResponseStream() = default;
    AWS_BEDROCKRUNTIME_API ResponseStream(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKRUNTIME_API ResponseStream& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Content included in the response.</p>
     */
    inline const PayloadPart& GetChunk() const { return m_chunk; }
    inline bool ChunkHasBeenSet() const { return m_chunkHasBeenSet; }
    template<typename ChunkT = PayloadPart>
    void SetChunk(ChunkT&& value) { m_chunkHasBeenSet = true; m_chunk = std::forward<ChunkT>(value); }
    template<typename ChunkT = PayloadPart>
    ResponseStream& WithChunk(ChunkT&& value) { SetChunk(std::forward<ChunkT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An internal server error occurred. Retry your request.</p>
     */
    inline const BedrockRuntimeError& GetInternalServerException() const { return m_internalServerException; }
    inline bool InternalServerExceptionHasBeenSet() const { return m_internalServerExceptionHasBeenSet; }
    template<typename InternalServerExceptionT = BedrockRuntimeError>
    void SetInternalServerException(InternalServerExceptionT&& value) { m_internalServerExceptionHasBeenSet = true; m_internalServerException = std::forward<InternalServerExceptionT>(value); }
    template<typename InternalServerExceptionT = BedrockRuntimeError>
    ResponseStream& WithInternalServerException(InternalServerExceptionT&& value) { SetInternalServerException(std::forward<InternalServerExceptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An error occurred while streaming the response. Retry your request.</p>
     */
    inline const ModelStreamErrorException& GetModelStreamErrorException() const { return m_modelStreamErrorException; }
    inline bool ModelStreamErrorExceptionHasBeenSet() const { return m_modelStreamErrorExceptionHasBeenSet; }
    template<typename ModelStreamErrorExceptionT = ModelStreamErrorException>
    void SetModelStreamErrorException(ModelStreamErrorExceptionT&& value) { m_modelStreamErrorExceptionHasBeenSet = true; m_modelStreamErrorException = std::forward<ModelStreamErrorExceptionT>(value); }
    template<typename ModelStreamErrorExceptionT = ModelStreamErrorException>
    ResponseStream& WithModelStreamErrorException(ModelStreamErrorExceptionT&& value) { SetModelStreamErrorException(std::forward<ModelStreamErrorExceptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Input validation failed. Check your request parameters and retry the
     * request.</p>
     */
    inline const BedrockRuntimeError& GetValidationException() const { return m_validationException; }
    inline bool ValidationExceptionHasBeenSet() const { return m_validationExceptionHasBeenSet; }
    template<typename ValidationExceptionT = BedrockRuntimeError>
    void SetValidationException(ValidationExceptionT&& value) { m_validationExceptionHasBeenSet = true; m_validationException = std::forward<ValidationExceptionT>(value); }
    template<typename ValidationExceptionT = BedrockRuntimeError>
    ResponseStream& WithValidationException(ValidationExceptionT&& value) { SetValidationException(std::forward<ValidationExceptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Your request was throttled because of service-wide limitations. Resubmit your
     * request later or in a different region. You can also purchase <a
     * href="https://docs.aws.amazon.com/bedrock/latest/userguide/prov-throughput.html">Provisioned
     * Throughput</a> to increase the rate or number of tokens you can process.</p>
     */
    inline const BedrockRuntimeError& GetThrottlingException() const { return m_throttlingException; }
    inline bool ThrottlingExceptionHasBeenSet() const { return m_throttlingExceptionHasBeenSet; }
    template<typename ThrottlingExceptionT = BedrockRuntimeError>
    void SetThrottlingException(ThrottlingExceptionT&& value) { m_throttlingExceptionHasBeenSet = true; m_throttlingException = std::forward<ThrottlingExceptionT>(value); }
    template<typename ThrottlingExceptionT = BedrockRuntimeError>
    ResponseStream& WithThrottlingException(ThrottlingExceptionT&& value) { SetThrottlingException(std::forward<ThrottlingExceptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The request took too long to process. Processing time exceeded the model
     * timeout length.</p>
     */
    inline const BedrockRuntimeError& GetModelTimeoutException() const { return m_modelTimeoutException; }
    inline bool ModelTimeoutExceptionHasBeenSet() const { return m_modelTimeoutExceptionHasBeenSet; }
    template<typename ModelTimeoutExceptionT = BedrockRuntimeError>
    void SetModelTimeoutException(ModelTimeoutExceptionT&& value) { m_modelTimeoutExceptionHasBeenSet = true; m_modelTimeoutException = std::forward<ModelTimeoutExceptionT>(value); }
    template<typename ModelTimeoutExceptionT = BedrockRuntimeError>
    ResponseStream& WithModelTimeoutException(ModelTimeoutExceptionT&& value) { SetModelTimeoutException(std::forward<ModelTimeoutExceptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The service isn't available. Try again later.</p>
     */
    inline const BedrockRuntimeError& GetServiceUnavailableException() const { return m_serviceUnavailableException; }
    inline bool ServiceUnavailableExceptionHasBeenSet() const { return m_serviceUnavailableExceptionHasBeenSet; }
    template<typename ServiceUnavailableExceptionT = BedrockRuntimeError>
    void SetServiceUnavailableException(ServiceUnavailableExceptionT&& value) { m_serviceUnavailableExceptionHasBeenSet = true; m_serviceUnavailableException = std::forward<ServiceUnavailableExceptionT>(value); }
    template<typename ServiceUnavailableExceptionT = BedrockRuntimeError>
    ResponseStream& WithServiceUnavailableException(ServiceUnavailableExceptionT&& value) { SetServiceUnavailableException(std::forward<ServiceUnavailableExceptionT>(value)); return *this;}
    ///@}
  private:

    PayloadPart m_chunk;
    bool m_chunkHasBeenSet = false;

    BedrockRuntimeError m_internalServerException;
    bool m_internalServerExceptionHasBeenSet = false;

    ModelStreamErrorException m_modelStreamErrorException;
    bool m_modelStreamErrorExceptionHasBeenSet = false;

    BedrockRuntimeError m_validationException;
    bool m_validationExceptionHasBeenSet = false;

    BedrockRuntimeError m_throttlingException;
    bool m_throttlingExceptionHasBeenSet = false;

    BedrockRuntimeError m_modelTimeoutException;
    bool m_modelTimeoutExceptionHasBeenSet = false;

    BedrockRuntimeError m_serviceUnavailableException;
    bool m_serviceUnavailableExceptionHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockRuntime
} // namespace Aws
