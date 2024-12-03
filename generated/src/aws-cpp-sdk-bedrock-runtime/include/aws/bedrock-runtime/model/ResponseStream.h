/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-runtime/BedrockRuntime_EXPORTS.h>
#include <aws/bedrock-runtime/model/PayloadPart.h>
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
   * <p>Definition of content in the response stream.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-runtime-2023-09-30/ResponseStream">AWS
   * API Reference</a></p>
   */
  class ResponseStream
  {
  public:
    AWS_BEDROCKRUNTIME_API ResponseStream();
    AWS_BEDROCKRUNTIME_API ResponseStream(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKRUNTIME_API ResponseStream& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Content included in the response.</p>
     */
    inline const PayloadPart& GetChunk() const{ return m_chunk; }
    inline bool ChunkHasBeenSet() const { return m_chunkHasBeenSet; }
    inline void SetChunk(const PayloadPart& value) { m_chunkHasBeenSet = true; m_chunk = value; }
    inline void SetChunk(PayloadPart&& value) { m_chunkHasBeenSet = true; m_chunk = std::move(value); }
    inline ResponseStream& WithChunk(const PayloadPart& value) { SetChunk(value); return *this;}
    inline ResponseStream& WithChunk(PayloadPart&& value) { SetChunk(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An internal server error occurred. Retry your request.</p>
     */
    inline const InternalServerException& GetInternalServerException() const{ return m_internalServerException; }
    inline bool InternalServerExceptionHasBeenSet() const { return m_internalServerExceptionHasBeenSet; }
    inline void SetInternalServerException(const InternalServerException& value) { m_internalServerExceptionHasBeenSet = true; m_internalServerException = value; }
    inline void SetInternalServerException(InternalServerException&& value) { m_internalServerExceptionHasBeenSet = true; m_internalServerException = std::move(value); }
    inline ResponseStream& WithInternalServerException(const InternalServerException& value) { SetInternalServerException(value); return *this;}
    inline ResponseStream& WithInternalServerException(InternalServerException&& value) { SetInternalServerException(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An error occurred while streaming the response. Retry your request.</p>
     */
    inline const ModelStreamErrorException& GetModelStreamErrorException() const{ return m_modelStreamErrorException; }
    inline bool ModelStreamErrorExceptionHasBeenSet() const { return m_modelStreamErrorExceptionHasBeenSet; }
    inline void SetModelStreamErrorException(const ModelStreamErrorException& value) { m_modelStreamErrorExceptionHasBeenSet = true; m_modelStreamErrorException = value; }
    inline void SetModelStreamErrorException(ModelStreamErrorException&& value) { m_modelStreamErrorExceptionHasBeenSet = true; m_modelStreamErrorException = std::move(value); }
    inline ResponseStream& WithModelStreamErrorException(const ModelStreamErrorException& value) { SetModelStreamErrorException(value); return *this;}
    inline ResponseStream& WithModelStreamErrorException(ModelStreamErrorException&& value) { SetModelStreamErrorException(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Input validation failed. Check your request parameters and retry the
     * request.</p>
     */
    inline const ValidationException& GetValidationException() const{ return m_validationException; }
    inline bool ValidationExceptionHasBeenSet() const { return m_validationExceptionHasBeenSet; }
    inline void SetValidationException(const ValidationException& value) { m_validationExceptionHasBeenSet = true; m_validationException = value; }
    inline void SetValidationException(ValidationException&& value) { m_validationExceptionHasBeenSet = true; m_validationException = std::move(value); }
    inline ResponseStream& WithValidationException(const ValidationException& value) { SetValidationException(value); return *this;}
    inline ResponseStream& WithValidationException(ValidationException&& value) { SetValidationException(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Your request was throttled because of service-wide limitations. Resubmit your
     * request later or in a different region. You can also purchase <a
     * href="https://docs.aws.amazon.com/bedrock/latest/userguide/prov-throughput.html">Provisioned
     * Throughput</a> to increase the rate or number of tokens you can process.</p>
     */
    inline const ThrottlingException& GetThrottlingException() const{ return m_throttlingException; }
    inline bool ThrottlingExceptionHasBeenSet() const { return m_throttlingExceptionHasBeenSet; }
    inline void SetThrottlingException(const ThrottlingException& value) { m_throttlingExceptionHasBeenSet = true; m_throttlingException = value; }
    inline void SetThrottlingException(ThrottlingException&& value) { m_throttlingExceptionHasBeenSet = true; m_throttlingException = std::move(value); }
    inline ResponseStream& WithThrottlingException(const ThrottlingException& value) { SetThrottlingException(value); return *this;}
    inline ResponseStream& WithThrottlingException(ThrottlingException&& value) { SetThrottlingException(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The request took too long to process. Processing time exceeded the model
     * timeout length.</p>
     */
    inline const ModelTimeoutException& GetModelTimeoutException() const{ return m_modelTimeoutException; }
    inline bool ModelTimeoutExceptionHasBeenSet() const { return m_modelTimeoutExceptionHasBeenSet; }
    inline void SetModelTimeoutException(const ModelTimeoutException& value) { m_modelTimeoutExceptionHasBeenSet = true; m_modelTimeoutException = value; }
    inline void SetModelTimeoutException(ModelTimeoutException&& value) { m_modelTimeoutExceptionHasBeenSet = true; m_modelTimeoutException = std::move(value); }
    inline ResponseStream& WithModelTimeoutException(const ModelTimeoutException& value) { SetModelTimeoutException(value); return *this;}
    inline ResponseStream& WithModelTimeoutException(ModelTimeoutException&& value) { SetModelTimeoutException(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The service isn't available. Try again later.</p>
     */
    inline const ServiceUnavailableException& GetServiceUnavailableException() const{ return m_serviceUnavailableException; }
    inline bool ServiceUnavailableExceptionHasBeenSet() const { return m_serviceUnavailableExceptionHasBeenSet; }
    inline void SetServiceUnavailableException(const ServiceUnavailableException& value) { m_serviceUnavailableExceptionHasBeenSet = true; m_serviceUnavailableException = value; }
    inline void SetServiceUnavailableException(ServiceUnavailableException&& value) { m_serviceUnavailableExceptionHasBeenSet = true; m_serviceUnavailableException = std::move(value); }
    inline ResponseStream& WithServiceUnavailableException(const ServiceUnavailableException& value) { SetServiceUnavailableException(value); return *this;}
    inline ResponseStream& WithServiceUnavailableException(ServiceUnavailableException&& value) { SetServiceUnavailableException(std::move(value)); return *this;}
    ///@}
  private:

    PayloadPart m_chunk;
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
