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


    /**
     * <p>Content included in the response.</p>
     */
    inline const PayloadPart& GetChunk() const{ return m_chunk; }

    /**
     * <p>Content included in the response.</p>
     */
    inline bool ChunkHasBeenSet() const { return m_chunkHasBeenSet; }

    /**
     * <p>Content included in the response.</p>
     */
    inline void SetChunk(const PayloadPart& value) { m_chunkHasBeenSet = true; m_chunk = value; }

    /**
     * <p>Content included in the response.</p>
     */
    inline void SetChunk(PayloadPart&& value) { m_chunkHasBeenSet = true; m_chunk = std::move(value); }

    /**
     * <p>Content included in the response.</p>
     */
    inline ResponseStream& WithChunk(const PayloadPart& value) { SetChunk(value); return *this;}

    /**
     * <p>Content included in the response.</p>
     */
    inline ResponseStream& WithChunk(PayloadPart&& value) { SetChunk(std::move(value)); return *this;}


    /**
     * <p>An internal server error occurred. Retry your request.</p>
     */
    inline const InternalServerException& GetInternalServerException() const{ return m_internalServerException; }

    /**
     * <p>An internal server error occurred. Retry your request.</p>
     */
    inline bool InternalServerExceptionHasBeenSet() const { return m_internalServerExceptionHasBeenSet; }

    /**
     * <p>An internal server error occurred. Retry your request.</p>
     */
    inline void SetInternalServerException(const InternalServerException& value) { m_internalServerExceptionHasBeenSet = true; m_internalServerException = value; }

    /**
     * <p>An internal server error occurred. Retry your request.</p>
     */
    inline void SetInternalServerException(InternalServerException&& value) { m_internalServerExceptionHasBeenSet = true; m_internalServerException = std::move(value); }

    /**
     * <p>An internal server error occurred. Retry your request.</p>
     */
    inline ResponseStream& WithInternalServerException(const InternalServerException& value) { SetInternalServerException(value); return *this;}

    /**
     * <p>An internal server error occurred. Retry your request.</p>
     */
    inline ResponseStream& WithInternalServerException(InternalServerException&& value) { SetInternalServerException(std::move(value)); return *this;}


    /**
     * <p>An error occurred while streaming the response. Retry your request.</p>
     */
    inline const ModelStreamErrorException& GetModelStreamErrorException() const{ return m_modelStreamErrorException; }

    /**
     * <p>An error occurred while streaming the response. Retry your request.</p>
     */
    inline bool ModelStreamErrorExceptionHasBeenSet() const { return m_modelStreamErrorExceptionHasBeenSet; }

    /**
     * <p>An error occurred while streaming the response. Retry your request.</p>
     */
    inline void SetModelStreamErrorException(const ModelStreamErrorException& value) { m_modelStreamErrorExceptionHasBeenSet = true; m_modelStreamErrorException = value; }

    /**
     * <p>An error occurred while streaming the response. Retry your request.</p>
     */
    inline void SetModelStreamErrorException(ModelStreamErrorException&& value) { m_modelStreamErrorExceptionHasBeenSet = true; m_modelStreamErrorException = std::move(value); }

    /**
     * <p>An error occurred while streaming the response. Retry your request.</p>
     */
    inline ResponseStream& WithModelStreamErrorException(const ModelStreamErrorException& value) { SetModelStreamErrorException(value); return *this;}

    /**
     * <p>An error occurred while streaming the response. Retry your request.</p>
     */
    inline ResponseStream& WithModelStreamErrorException(ModelStreamErrorException&& value) { SetModelStreamErrorException(std::move(value)); return *this;}


    /**
     * <p>Input validation failed. Check your request parameters and retry the
     * request.</p>
     */
    inline const ValidationException& GetValidationException() const{ return m_validationException; }

    /**
     * <p>Input validation failed. Check your request parameters and retry the
     * request.</p>
     */
    inline bool ValidationExceptionHasBeenSet() const { return m_validationExceptionHasBeenSet; }

    /**
     * <p>Input validation failed. Check your request parameters and retry the
     * request.</p>
     */
    inline void SetValidationException(const ValidationException& value) { m_validationExceptionHasBeenSet = true; m_validationException = value; }

    /**
     * <p>Input validation failed. Check your request parameters and retry the
     * request.</p>
     */
    inline void SetValidationException(ValidationException&& value) { m_validationExceptionHasBeenSet = true; m_validationException = std::move(value); }

    /**
     * <p>Input validation failed. Check your request parameters and retry the
     * request.</p>
     */
    inline ResponseStream& WithValidationException(const ValidationException& value) { SetValidationException(value); return *this;}

    /**
     * <p>Input validation failed. Check your request parameters and retry the
     * request.</p>
     */
    inline ResponseStream& WithValidationException(ValidationException&& value) { SetValidationException(std::move(value)); return *this;}


    /**
     * <p>The number or frequency of requests exceeds the limit. Resubmit your request
     * later.</p>
     */
    inline const ThrottlingException& GetThrottlingException() const{ return m_throttlingException; }

    /**
     * <p>The number or frequency of requests exceeds the limit. Resubmit your request
     * later.</p>
     */
    inline bool ThrottlingExceptionHasBeenSet() const { return m_throttlingExceptionHasBeenSet; }

    /**
     * <p>The number or frequency of requests exceeds the limit. Resubmit your request
     * later.</p>
     */
    inline void SetThrottlingException(const ThrottlingException& value) { m_throttlingExceptionHasBeenSet = true; m_throttlingException = value; }

    /**
     * <p>The number or frequency of requests exceeds the limit. Resubmit your request
     * later.</p>
     */
    inline void SetThrottlingException(ThrottlingException&& value) { m_throttlingExceptionHasBeenSet = true; m_throttlingException = std::move(value); }

    /**
     * <p>The number or frequency of requests exceeds the limit. Resubmit your request
     * later.</p>
     */
    inline ResponseStream& WithThrottlingException(const ThrottlingException& value) { SetThrottlingException(value); return *this;}

    /**
     * <p>The number or frequency of requests exceeds the limit. Resubmit your request
     * later.</p>
     */
    inline ResponseStream& WithThrottlingException(ThrottlingException&& value) { SetThrottlingException(std::move(value)); return *this;}


    /**
     * <p>The request took too long to process. Processing time exceeded the model
     * timeout length.</p>
     */
    inline const ModelTimeoutException& GetModelTimeoutException() const{ return m_modelTimeoutException; }

    /**
     * <p>The request took too long to process. Processing time exceeded the model
     * timeout length.</p>
     */
    inline bool ModelTimeoutExceptionHasBeenSet() const { return m_modelTimeoutExceptionHasBeenSet; }

    /**
     * <p>The request took too long to process. Processing time exceeded the model
     * timeout length.</p>
     */
    inline void SetModelTimeoutException(const ModelTimeoutException& value) { m_modelTimeoutExceptionHasBeenSet = true; m_modelTimeoutException = value; }

    /**
     * <p>The request took too long to process. Processing time exceeded the model
     * timeout length.</p>
     */
    inline void SetModelTimeoutException(ModelTimeoutException&& value) { m_modelTimeoutExceptionHasBeenSet = true; m_modelTimeoutException = std::move(value); }

    /**
     * <p>The request took too long to process. Processing time exceeded the model
     * timeout length.</p>
     */
    inline ResponseStream& WithModelTimeoutException(const ModelTimeoutException& value) { SetModelTimeoutException(value); return *this;}

    /**
     * <p>The request took too long to process. Processing time exceeded the model
     * timeout length.</p>
     */
    inline ResponseStream& WithModelTimeoutException(ModelTimeoutException&& value) { SetModelTimeoutException(std::move(value)); return *this;}

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
  };

} // namespace Model
} // namespace BedrockRuntime
} // namespace Aws
