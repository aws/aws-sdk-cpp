/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/eventbridge/EventBridge_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/eventbridge/model/DeadLetterConfig.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace EventBridge
{
namespace Model
{
  class CreateEventBusResult
  {
  public:
    AWS_EVENTBRIDGE_API CreateEventBusResult() = default;
    AWS_EVENTBRIDGE_API CreateEventBusResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_EVENTBRIDGE_API CreateEventBusResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ARN of the new event bus.</p>
     */
    inline const Aws::String& GetEventBusArn() const { return m_eventBusArn; }
    template<typename EventBusArnT = Aws::String>
    void SetEventBusArn(EventBusArnT&& value) { m_eventBusArnHasBeenSet = true; m_eventBusArn = std::forward<EventBusArnT>(value); }
    template<typename EventBusArnT = Aws::String>
    CreateEventBusResult& WithEventBusArn(EventBusArnT&& value) { SetEventBusArn(std::forward<EventBusArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The event bus description.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    CreateEventBusResult& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the KMS customer managed key for EventBridge to use to
     * encrypt events on this event bus, if one has been specified.</p> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/eventbridge/latest/userguide/eb-encryption.html">Data
     * encryption in EventBridge</a> in the <i>Amazon EventBridge User Guide</i>.</p>
     */
    inline const Aws::String& GetKmsKeyIdentifier() const { return m_kmsKeyIdentifier; }
    template<typename KmsKeyIdentifierT = Aws::String>
    void SetKmsKeyIdentifier(KmsKeyIdentifierT&& value) { m_kmsKeyIdentifierHasBeenSet = true; m_kmsKeyIdentifier = std::forward<KmsKeyIdentifierT>(value); }
    template<typename KmsKeyIdentifierT = Aws::String>
    CreateEventBusResult& WithKmsKeyIdentifier(KmsKeyIdentifierT&& value) { SetKmsKeyIdentifier(std::forward<KmsKeyIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const DeadLetterConfig& GetDeadLetterConfig() const { return m_deadLetterConfig; }
    template<typename DeadLetterConfigT = DeadLetterConfig>
    void SetDeadLetterConfig(DeadLetterConfigT&& value) { m_deadLetterConfigHasBeenSet = true; m_deadLetterConfig = std::forward<DeadLetterConfigT>(value); }
    template<typename DeadLetterConfigT = DeadLetterConfig>
    CreateEventBusResult& WithDeadLetterConfig(DeadLetterConfigT&& value) { SetDeadLetterConfig(std::forward<DeadLetterConfigT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CreateEventBusResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_eventBusArn;
    bool m_eventBusArnHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_kmsKeyIdentifier;
    bool m_kmsKeyIdentifierHasBeenSet = false;

    DeadLetterConfig m_deadLetterConfig;
    bool m_deadLetterConfigHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace EventBridge
} // namespace Aws
