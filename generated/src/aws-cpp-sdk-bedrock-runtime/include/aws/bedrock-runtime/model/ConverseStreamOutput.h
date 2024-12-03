/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-runtime/BedrockRuntime_EXPORTS.h>
#include <aws/bedrock-runtime/model/MessageStartEvent.h>
#include <aws/bedrock-runtime/model/ContentBlockStartEvent.h>
#include <aws/bedrock-runtime/model/ContentBlockDeltaEvent.h>
#include <aws/bedrock-runtime/model/ContentBlockStopEvent.h>
#include <aws/bedrock-runtime/model/MessageStopEvent.h>
#include <aws/bedrock-runtime/model/ConverseStreamMetadataEvent.h>
#include <aws/bedrock-runtime/model/InternalServerException.h>
#include <aws/bedrock-runtime/model/ModelStreamErrorException.h>
#include <aws/bedrock-runtime/model/ValidationException.h>
#include <aws/bedrock-runtime/model/ThrottlingException.h>
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
   * <p>The messages output stream</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-runtime-2023-09-30/ConverseStreamOutput">AWS
   * API Reference</a></p>
   */
  class ConverseStreamOutput
  {
  public:
    AWS_BEDROCKRUNTIME_API ConverseStreamOutput();
    AWS_BEDROCKRUNTIME_API ConverseStreamOutput(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKRUNTIME_API ConverseStreamOutput& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Message start information.</p>
     */
    inline const MessageStartEvent& GetMessageStart() const{ return m_messageStart; }
    inline bool MessageStartHasBeenSet() const { return m_messageStartHasBeenSet; }
    inline void SetMessageStart(const MessageStartEvent& value) { m_messageStartHasBeenSet = true; m_messageStart = value; }
    inline void SetMessageStart(MessageStartEvent&& value) { m_messageStartHasBeenSet = true; m_messageStart = std::move(value); }
    inline ConverseStreamOutput& WithMessageStart(const MessageStartEvent& value) { SetMessageStart(value); return *this;}
    inline ConverseStreamOutput& WithMessageStart(MessageStartEvent&& value) { SetMessageStart(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Start information for a content block.</p>
     */
    inline const ContentBlockStartEvent& GetContentBlockStart() const{ return m_contentBlockStart; }
    inline bool ContentBlockStartHasBeenSet() const { return m_contentBlockStartHasBeenSet; }
    inline void SetContentBlockStart(const ContentBlockStartEvent& value) { m_contentBlockStartHasBeenSet = true; m_contentBlockStart = value; }
    inline void SetContentBlockStart(ContentBlockStartEvent&& value) { m_contentBlockStartHasBeenSet = true; m_contentBlockStart = std::move(value); }
    inline ConverseStreamOutput& WithContentBlockStart(const ContentBlockStartEvent& value) { SetContentBlockStart(value); return *this;}
    inline ConverseStreamOutput& WithContentBlockStart(ContentBlockStartEvent&& value) { SetContentBlockStart(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The messages output content block delta.</p>
     */
    inline const ContentBlockDeltaEvent& GetContentBlockDelta() const{ return m_contentBlockDelta; }
    inline bool ContentBlockDeltaHasBeenSet() const { return m_contentBlockDeltaHasBeenSet; }
    inline void SetContentBlockDelta(const ContentBlockDeltaEvent& value) { m_contentBlockDeltaHasBeenSet = true; m_contentBlockDelta = value; }
    inline void SetContentBlockDelta(ContentBlockDeltaEvent&& value) { m_contentBlockDeltaHasBeenSet = true; m_contentBlockDelta = std::move(value); }
    inline ConverseStreamOutput& WithContentBlockDelta(const ContentBlockDeltaEvent& value) { SetContentBlockDelta(value); return *this;}
    inline ConverseStreamOutput& WithContentBlockDelta(ContentBlockDeltaEvent&& value) { SetContentBlockDelta(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Stop information for a content block.</p>
     */
    inline const ContentBlockStopEvent& GetContentBlockStop() const{ return m_contentBlockStop; }
    inline bool ContentBlockStopHasBeenSet() const { return m_contentBlockStopHasBeenSet; }
    inline void SetContentBlockStop(const ContentBlockStopEvent& value) { m_contentBlockStopHasBeenSet = true; m_contentBlockStop = value; }
    inline void SetContentBlockStop(ContentBlockStopEvent&& value) { m_contentBlockStopHasBeenSet = true; m_contentBlockStop = std::move(value); }
    inline ConverseStreamOutput& WithContentBlockStop(const ContentBlockStopEvent& value) { SetContentBlockStop(value); return *this;}
    inline ConverseStreamOutput& WithContentBlockStop(ContentBlockStopEvent&& value) { SetContentBlockStop(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Message stop information.</p>
     */
    inline const MessageStopEvent& GetMessageStop() const{ return m_messageStop; }
    inline bool MessageStopHasBeenSet() const { return m_messageStopHasBeenSet; }
    inline void SetMessageStop(const MessageStopEvent& value) { m_messageStopHasBeenSet = true; m_messageStop = value; }
    inline void SetMessageStop(MessageStopEvent&& value) { m_messageStopHasBeenSet = true; m_messageStop = std::move(value); }
    inline ConverseStreamOutput& WithMessageStop(const MessageStopEvent& value) { SetMessageStop(value); return *this;}
    inline ConverseStreamOutput& WithMessageStop(MessageStopEvent&& value) { SetMessageStop(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Metadata for the converse output stream.</p>
     */
    inline const ConverseStreamMetadataEvent& GetMetadata() const{ return m_metadata; }
    inline bool MetadataHasBeenSet() const { return m_metadataHasBeenSet; }
    inline void SetMetadata(const ConverseStreamMetadataEvent& value) { m_metadataHasBeenSet = true; m_metadata = value; }
    inline void SetMetadata(ConverseStreamMetadataEvent&& value) { m_metadataHasBeenSet = true; m_metadata = std::move(value); }
    inline ConverseStreamOutput& WithMetadata(const ConverseStreamMetadataEvent& value) { SetMetadata(value); return *this;}
    inline ConverseStreamOutput& WithMetadata(ConverseStreamMetadataEvent&& value) { SetMetadata(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An internal server error occurred. Retry your request.</p>
     */
    inline const InternalServerException& GetInternalServerException() const{ return m_internalServerException; }
    inline bool InternalServerExceptionHasBeenSet() const { return m_internalServerExceptionHasBeenSet; }
    inline void SetInternalServerException(const InternalServerException& value) { m_internalServerExceptionHasBeenSet = true; m_internalServerException = value; }
    inline void SetInternalServerException(InternalServerException&& value) { m_internalServerExceptionHasBeenSet = true; m_internalServerException = std::move(value); }
    inline ConverseStreamOutput& WithInternalServerException(const InternalServerException& value) { SetInternalServerException(value); return *this;}
    inline ConverseStreamOutput& WithInternalServerException(InternalServerException&& value) { SetInternalServerException(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A streaming error occurred. Retry your request.</p>
     */
    inline const ModelStreamErrorException& GetModelStreamErrorException() const{ return m_modelStreamErrorException; }
    inline bool ModelStreamErrorExceptionHasBeenSet() const { return m_modelStreamErrorExceptionHasBeenSet; }
    inline void SetModelStreamErrorException(const ModelStreamErrorException& value) { m_modelStreamErrorExceptionHasBeenSet = true; m_modelStreamErrorException = value; }
    inline void SetModelStreamErrorException(ModelStreamErrorException&& value) { m_modelStreamErrorExceptionHasBeenSet = true; m_modelStreamErrorException = std::move(value); }
    inline ConverseStreamOutput& WithModelStreamErrorException(const ModelStreamErrorException& value) { SetModelStreamErrorException(value); return *this;}
    inline ConverseStreamOutput& WithModelStreamErrorException(ModelStreamErrorException&& value) { SetModelStreamErrorException(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The input fails to satisfy the constraints specified by <i>Amazon
     * Bedrock</i>. For troubleshooting this error, see <a
     * href="https://docs.aws.amazon.com/bedrock/latest/userguide/troubleshooting-api-error-codes.html#ts-validation-error">ValidationError</a>
     * in the Amazon Bedrock User Guide</p>
     */
    inline const ValidationException& GetValidationException() const{ return m_validationException; }
    inline bool ValidationExceptionHasBeenSet() const { return m_validationExceptionHasBeenSet; }
    inline void SetValidationException(const ValidationException& value) { m_validationExceptionHasBeenSet = true; m_validationException = value; }
    inline void SetValidationException(ValidationException&& value) { m_validationExceptionHasBeenSet = true; m_validationException = std::move(value); }
    inline ConverseStreamOutput& WithValidationException(const ValidationException& value) { SetValidationException(value); return *this;}
    inline ConverseStreamOutput& WithValidationException(ValidationException&& value) { SetValidationException(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Your request was denied due to exceeding the account quotas for <i>Amazon
     * Bedrock</i>. For troubleshooting this error, see <a
     * href="https://docs.aws.amazon.com/bedrock/latest/userguide/troubleshooting-api-error-codes.html#ts-throttling-exception">ThrottlingException</a>
     * in the Amazon Bedrock User Guide</p>
     */
    inline const ThrottlingException& GetThrottlingException() const{ return m_throttlingException; }
    inline bool ThrottlingExceptionHasBeenSet() const { return m_throttlingExceptionHasBeenSet; }
    inline void SetThrottlingException(const ThrottlingException& value) { m_throttlingExceptionHasBeenSet = true; m_throttlingException = value; }
    inline void SetThrottlingException(ThrottlingException&& value) { m_throttlingExceptionHasBeenSet = true; m_throttlingException = std::move(value); }
    inline ConverseStreamOutput& WithThrottlingException(const ThrottlingException& value) { SetThrottlingException(value); return *this;}
    inline ConverseStreamOutput& WithThrottlingException(ThrottlingException&& value) { SetThrottlingException(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The service isn't currently available. For troubleshooting this error, see <a
     * href="https://docs.aws.amazon.com/bedrock/latest/userguide/troubleshooting-api-error-codes.html#ts-service-unavailable">ServiceUnavailable</a>
     * in the Amazon Bedrock User Guide</p>
     */
    inline const ServiceUnavailableException& GetServiceUnavailableException() const{ return m_serviceUnavailableException; }
    inline bool ServiceUnavailableExceptionHasBeenSet() const { return m_serviceUnavailableExceptionHasBeenSet; }
    inline void SetServiceUnavailableException(const ServiceUnavailableException& value) { m_serviceUnavailableExceptionHasBeenSet = true; m_serviceUnavailableException = value; }
    inline void SetServiceUnavailableException(ServiceUnavailableException&& value) { m_serviceUnavailableExceptionHasBeenSet = true; m_serviceUnavailableException = std::move(value); }
    inline ConverseStreamOutput& WithServiceUnavailableException(const ServiceUnavailableException& value) { SetServiceUnavailableException(value); return *this;}
    inline ConverseStreamOutput& WithServiceUnavailableException(ServiceUnavailableException&& value) { SetServiceUnavailableException(std::move(value)); return *this;}
    ///@}
  private:

    MessageStartEvent m_messageStart;
    bool m_messageStartHasBeenSet = false;

    ContentBlockStartEvent m_contentBlockStart;
    bool m_contentBlockStartHasBeenSet = false;

    ContentBlockDeltaEvent m_contentBlockDelta;
    bool m_contentBlockDeltaHasBeenSet = false;

    ContentBlockStopEvent m_contentBlockStop;
    bool m_contentBlockStopHasBeenSet = false;

    MessageStopEvent m_messageStop;
    bool m_messageStopHasBeenSet = false;

    ConverseStreamMetadataEvent m_metadata;
    bool m_metadataHasBeenSet = false;

    InternalServerException m_internalServerException;
    bool m_internalServerExceptionHasBeenSet = false;

    ModelStreamErrorException m_modelStreamErrorException;
    bool m_modelStreamErrorExceptionHasBeenSet = false;

    ValidationException m_validationException;
    bool m_validationExceptionHasBeenSet = false;

    ThrottlingException m_throttlingException;
    bool m_throttlingExceptionHasBeenSet = false;

    ServiceUnavailableException m_serviceUnavailableException;
    bool m_serviceUnavailableExceptionHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockRuntime
} // namespace Aws
