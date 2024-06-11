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
    AWS_EVENTBRIDGE_API CreateEventBusResult();
    AWS_EVENTBRIDGE_API CreateEventBusResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_EVENTBRIDGE_API CreateEventBusResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ARN of the new event bus.</p>
     */
    inline const Aws::String& GetEventBusArn() const{ return m_eventBusArn; }
    inline void SetEventBusArn(const Aws::String& value) { m_eventBusArn = value; }
    inline void SetEventBusArn(Aws::String&& value) { m_eventBusArn = std::move(value); }
    inline void SetEventBusArn(const char* value) { m_eventBusArn.assign(value); }
    inline CreateEventBusResult& WithEventBusArn(const Aws::String& value) { SetEventBusArn(value); return *this;}
    inline CreateEventBusResult& WithEventBusArn(Aws::String&& value) { SetEventBusArn(std::move(value)); return *this;}
    inline CreateEventBusResult& WithEventBusArn(const char* value) { SetEventBusArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The event bus description.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline void SetDescription(const Aws::String& value) { m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_description.assign(value); }
    inline CreateEventBusResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline CreateEventBusResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline CreateEventBusResult& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the KMS customer managed key for EventBridge to use to
     * encrypt events on this event bus, if one has been specified.</p> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/eventbridge/latest/userguide/eb-encryption.html">Data
     * encryption in EventBridge</a> in the <i>Amazon EventBridge User Guide</i>.</p>
     */
    inline const Aws::String& GetKmsKeyIdentifier() const{ return m_kmsKeyIdentifier; }
    inline void SetKmsKeyIdentifier(const Aws::String& value) { m_kmsKeyIdentifier = value; }
    inline void SetKmsKeyIdentifier(Aws::String&& value) { m_kmsKeyIdentifier = std::move(value); }
    inline void SetKmsKeyIdentifier(const char* value) { m_kmsKeyIdentifier.assign(value); }
    inline CreateEventBusResult& WithKmsKeyIdentifier(const Aws::String& value) { SetKmsKeyIdentifier(value); return *this;}
    inline CreateEventBusResult& WithKmsKeyIdentifier(Aws::String&& value) { SetKmsKeyIdentifier(std::move(value)); return *this;}
    inline CreateEventBusResult& WithKmsKeyIdentifier(const char* value) { SetKmsKeyIdentifier(value); return *this;}
    ///@}

    ///@{
    
    inline const DeadLetterConfig& GetDeadLetterConfig() const{ return m_deadLetterConfig; }
    inline void SetDeadLetterConfig(const DeadLetterConfig& value) { m_deadLetterConfig = value; }
    inline void SetDeadLetterConfig(DeadLetterConfig&& value) { m_deadLetterConfig = std::move(value); }
    inline CreateEventBusResult& WithDeadLetterConfig(const DeadLetterConfig& value) { SetDeadLetterConfig(value); return *this;}
    inline CreateEventBusResult& WithDeadLetterConfig(DeadLetterConfig&& value) { SetDeadLetterConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline CreateEventBusResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline CreateEventBusResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline CreateEventBusResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_eventBusArn;

    Aws::String m_description;

    Aws::String m_kmsKeyIdentifier;

    DeadLetterConfig m_deadLetterConfig;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace EventBridge
} // namespace Aws
