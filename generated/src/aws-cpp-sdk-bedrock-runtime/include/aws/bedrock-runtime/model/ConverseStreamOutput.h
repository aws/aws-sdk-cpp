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
   * <p>The messages output stream</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-runtime-2023-09-30/ConverseStreamOutput">AWS
   * API Reference</a></p>
   */
  class ConverseStreamOutput
  {
  public:
    AWS_BEDROCKRUNTIME_API ConverseStreamOutput() = default;
    AWS_BEDROCKRUNTIME_API ConverseStreamOutput(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKRUNTIME_API ConverseStreamOutput& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Message start information.</p>
     */
    inline const MessageStartEvent& GetMessageStart() const { return m_messageStart; }
    inline bool MessageStartHasBeenSet() const { return m_messageStartHasBeenSet; }
    template<typename MessageStartT = MessageStartEvent>
    void SetMessageStart(MessageStartT&& value) { m_messageStartHasBeenSet = true; m_messageStart = std::forward<MessageStartT>(value); }
    template<typename MessageStartT = MessageStartEvent>
    ConverseStreamOutput& WithMessageStart(MessageStartT&& value) { SetMessageStart(std::forward<MessageStartT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Start information for a content block.</p>
     */
    inline const ContentBlockStartEvent& GetContentBlockStart() const { return m_contentBlockStart; }
    inline bool ContentBlockStartHasBeenSet() const { return m_contentBlockStartHasBeenSet; }
    template<typename ContentBlockStartT = ContentBlockStartEvent>
    void SetContentBlockStart(ContentBlockStartT&& value) { m_contentBlockStartHasBeenSet = true; m_contentBlockStart = std::forward<ContentBlockStartT>(value); }
    template<typename ContentBlockStartT = ContentBlockStartEvent>
    ConverseStreamOutput& WithContentBlockStart(ContentBlockStartT&& value) { SetContentBlockStart(std::forward<ContentBlockStartT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The messages output content block delta.</p>
     */
    inline const ContentBlockDeltaEvent& GetContentBlockDelta() const { return m_contentBlockDelta; }
    inline bool ContentBlockDeltaHasBeenSet() const { return m_contentBlockDeltaHasBeenSet; }
    template<typename ContentBlockDeltaT = ContentBlockDeltaEvent>
    void SetContentBlockDelta(ContentBlockDeltaT&& value) { m_contentBlockDeltaHasBeenSet = true; m_contentBlockDelta = std::forward<ContentBlockDeltaT>(value); }
    template<typename ContentBlockDeltaT = ContentBlockDeltaEvent>
    ConverseStreamOutput& WithContentBlockDelta(ContentBlockDeltaT&& value) { SetContentBlockDelta(std::forward<ContentBlockDeltaT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Stop information for a content block.</p>
     */
    inline const ContentBlockStopEvent& GetContentBlockStop() const { return m_contentBlockStop; }
    inline bool ContentBlockStopHasBeenSet() const { return m_contentBlockStopHasBeenSet; }
    template<typename ContentBlockStopT = ContentBlockStopEvent>
    void SetContentBlockStop(ContentBlockStopT&& value) { m_contentBlockStopHasBeenSet = true; m_contentBlockStop = std::forward<ContentBlockStopT>(value); }
    template<typename ContentBlockStopT = ContentBlockStopEvent>
    ConverseStreamOutput& WithContentBlockStop(ContentBlockStopT&& value) { SetContentBlockStop(std::forward<ContentBlockStopT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Message stop information.</p>
     */
    inline const MessageStopEvent& GetMessageStop() const { return m_messageStop; }
    inline bool MessageStopHasBeenSet() const { return m_messageStopHasBeenSet; }
    template<typename MessageStopT = MessageStopEvent>
    void SetMessageStop(MessageStopT&& value) { m_messageStopHasBeenSet = true; m_messageStop = std::forward<MessageStopT>(value); }
    template<typename MessageStopT = MessageStopEvent>
    ConverseStreamOutput& WithMessageStop(MessageStopT&& value) { SetMessageStop(std::forward<MessageStopT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Metadata for the converse output stream.</p>
     */
    inline const ConverseStreamMetadataEvent& GetMetadata() const { return m_metadata; }
    inline bool MetadataHasBeenSet() const { return m_metadataHasBeenSet; }
    template<typename MetadataT = ConverseStreamMetadataEvent>
    void SetMetadata(MetadataT&& value) { m_metadataHasBeenSet = true; m_metadata = std::forward<MetadataT>(value); }
    template<typename MetadataT = ConverseStreamMetadataEvent>
    ConverseStreamOutput& WithMetadata(MetadataT&& value) { SetMetadata(std::forward<MetadataT>(value)); return *this;}
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
    ConverseStreamOutput& WithInternalServerException(InternalServerExceptionT&& value) { SetInternalServerException(std::forward<InternalServerExceptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A streaming error occurred. Retry your request.</p>
     */
    inline const ModelStreamErrorException& GetModelStreamErrorException() const { return m_modelStreamErrorException; }
    inline bool ModelStreamErrorExceptionHasBeenSet() const { return m_modelStreamErrorExceptionHasBeenSet; }
    template<typename ModelStreamErrorExceptionT = ModelStreamErrorException>
    void SetModelStreamErrorException(ModelStreamErrorExceptionT&& value) { m_modelStreamErrorExceptionHasBeenSet = true; m_modelStreamErrorException = std::forward<ModelStreamErrorExceptionT>(value); }
    template<typename ModelStreamErrorExceptionT = ModelStreamErrorException>
    ConverseStreamOutput& WithModelStreamErrorException(ModelStreamErrorExceptionT&& value) { SetModelStreamErrorException(std::forward<ModelStreamErrorExceptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The input fails to satisfy the constraints specified by <i>Amazon
     * Bedrock</i>. For troubleshooting this error, see <a
     * href="https://docs.aws.amazon.com/bedrock/latest/userguide/troubleshooting-api-error-codes.html#ts-validation-error">ValidationError</a>
     * in the Amazon Bedrock User Guide</p>
     */
    inline const BedrockRuntimeError& GetValidationException() const { return m_validationException; }
    inline bool ValidationExceptionHasBeenSet() const { return m_validationExceptionHasBeenSet; }
    template<typename ValidationExceptionT = BedrockRuntimeError>
    void SetValidationException(ValidationExceptionT&& value) { m_validationExceptionHasBeenSet = true; m_validationException = std::forward<ValidationExceptionT>(value); }
    template<typename ValidationExceptionT = BedrockRuntimeError>
    ConverseStreamOutput& WithValidationException(ValidationExceptionT&& value) { SetValidationException(std::forward<ValidationExceptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Your request was denied due to exceeding the account quotas for <i>Amazon
     * Bedrock</i>. For troubleshooting this error, see <a
     * href="https://docs.aws.amazon.com/bedrock/latest/userguide/troubleshooting-api-error-codes.html#ts-throttling-exception">ThrottlingException</a>
     * in the Amazon Bedrock User Guide</p>
     */
    inline const BedrockRuntimeError& GetThrottlingException() const { return m_throttlingException; }
    inline bool ThrottlingExceptionHasBeenSet() const { return m_throttlingExceptionHasBeenSet; }
    template<typename ThrottlingExceptionT = BedrockRuntimeError>
    void SetThrottlingException(ThrottlingExceptionT&& value) { m_throttlingExceptionHasBeenSet = true; m_throttlingException = std::forward<ThrottlingExceptionT>(value); }
    template<typename ThrottlingExceptionT = BedrockRuntimeError>
    ConverseStreamOutput& WithThrottlingException(ThrottlingExceptionT&& value) { SetThrottlingException(std::forward<ThrottlingExceptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The service isn't currently available. For troubleshooting this error, see <a
     * href="https://docs.aws.amazon.com/bedrock/latest/userguide/troubleshooting-api-error-codes.html#ts-service-unavailable">ServiceUnavailable</a>
     * in the Amazon Bedrock User Guide</p>
     */
    inline const BedrockRuntimeError& GetServiceUnavailableException() const { return m_serviceUnavailableException; }
    inline bool ServiceUnavailableExceptionHasBeenSet() const { return m_serviceUnavailableExceptionHasBeenSet; }
    template<typename ServiceUnavailableExceptionT = BedrockRuntimeError>
    void SetServiceUnavailableException(ServiceUnavailableExceptionT&& value) { m_serviceUnavailableExceptionHasBeenSet = true; m_serviceUnavailableException = std::forward<ServiceUnavailableExceptionT>(value); }
    template<typename ServiceUnavailableExceptionT = BedrockRuntimeError>
    ConverseStreamOutput& WithServiceUnavailableException(ServiceUnavailableExceptionT&& value) { SetServiceUnavailableException(std::forward<ServiceUnavailableExceptionT>(value)); return *this;}
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

    BedrockRuntimeError m_internalServerException;
    bool m_internalServerExceptionHasBeenSet = false;

    ModelStreamErrorException m_modelStreamErrorException;
    bool m_modelStreamErrorExceptionHasBeenSet = false;

    BedrockRuntimeError m_validationException;
    bool m_validationExceptionHasBeenSet = false;

    BedrockRuntimeError m_throttlingException;
    bool m_throttlingExceptionHasBeenSet = false;

    BedrockRuntimeError m_serviceUnavailableException;
    bool m_serviceUnavailableExceptionHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockRuntime
} // namespace Aws
