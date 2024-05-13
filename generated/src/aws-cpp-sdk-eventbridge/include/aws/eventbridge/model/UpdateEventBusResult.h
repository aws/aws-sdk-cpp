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
  class UpdateEventBusResult
  {
  public:
    AWS_EVENTBRIDGE_API UpdateEventBusResult();
    AWS_EVENTBRIDGE_API UpdateEventBusResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_EVENTBRIDGE_API UpdateEventBusResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The event bus Amazon Resource Name (ARN).</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The event bus Amazon Resource Name (ARN).</p>
     */
    inline void SetArn(const Aws::String& value) { m_arn = value; }

    /**
     * <p>The event bus Amazon Resource Name (ARN).</p>
     */
    inline void SetArn(Aws::String&& value) { m_arn = std::move(value); }

    /**
     * <p>The event bus Amazon Resource Name (ARN).</p>
     */
    inline void SetArn(const char* value) { m_arn.assign(value); }

    /**
     * <p>The event bus Amazon Resource Name (ARN).</p>
     */
    inline UpdateEventBusResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The event bus Amazon Resource Name (ARN).</p>
     */
    inline UpdateEventBusResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The event bus Amazon Resource Name (ARN).</p>
     */
    inline UpdateEventBusResult& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>The event bus name.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The event bus name.</p>
     */
    inline void SetName(const Aws::String& value) { m_name = value; }

    /**
     * <p>The event bus name.</p>
     */
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }

    /**
     * <p>The event bus name.</p>
     */
    inline void SetName(const char* value) { m_name.assign(value); }

    /**
     * <p>The event bus name.</p>
     */
    inline UpdateEventBusResult& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The event bus name.</p>
     */
    inline UpdateEventBusResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The event bus name.</p>
     */
    inline UpdateEventBusResult& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The identifier of the KMS customer managed key for EventBridge to use to
     * encrypt events on this event bus, if one has been specified.</p> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/eventbridge/latest/userguide/eb-encryption.html">Data
     * encryption in EventBridge</a> in the <i>Amazon EventBridge User Guide</i>.</p>
     */
    inline const Aws::String& GetKmsKeyIdentifier() const{ return m_kmsKeyIdentifier; }

    /**
     * <p>The identifier of the KMS customer managed key for EventBridge to use to
     * encrypt events on this event bus, if one has been specified.</p> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/eventbridge/latest/userguide/eb-encryption.html">Data
     * encryption in EventBridge</a> in the <i>Amazon EventBridge User Guide</i>.</p>
     */
    inline void SetKmsKeyIdentifier(const Aws::String& value) { m_kmsKeyIdentifier = value; }

    /**
     * <p>The identifier of the KMS customer managed key for EventBridge to use to
     * encrypt events on this event bus, if one has been specified.</p> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/eventbridge/latest/userguide/eb-encryption.html">Data
     * encryption in EventBridge</a> in the <i>Amazon EventBridge User Guide</i>.</p>
     */
    inline void SetKmsKeyIdentifier(Aws::String&& value) { m_kmsKeyIdentifier = std::move(value); }

    /**
     * <p>The identifier of the KMS customer managed key for EventBridge to use to
     * encrypt events on this event bus, if one has been specified.</p> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/eventbridge/latest/userguide/eb-encryption.html">Data
     * encryption in EventBridge</a> in the <i>Amazon EventBridge User Guide</i>.</p>
     */
    inline void SetKmsKeyIdentifier(const char* value) { m_kmsKeyIdentifier.assign(value); }

    /**
     * <p>The identifier of the KMS customer managed key for EventBridge to use to
     * encrypt events on this event bus, if one has been specified.</p> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/eventbridge/latest/userguide/eb-encryption.html">Data
     * encryption in EventBridge</a> in the <i>Amazon EventBridge User Guide</i>.</p>
     */
    inline UpdateEventBusResult& WithKmsKeyIdentifier(const Aws::String& value) { SetKmsKeyIdentifier(value); return *this;}

    /**
     * <p>The identifier of the KMS customer managed key for EventBridge to use to
     * encrypt events on this event bus, if one has been specified.</p> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/eventbridge/latest/userguide/eb-encryption.html">Data
     * encryption in EventBridge</a> in the <i>Amazon EventBridge User Guide</i>.</p>
     */
    inline UpdateEventBusResult& WithKmsKeyIdentifier(Aws::String&& value) { SetKmsKeyIdentifier(std::move(value)); return *this;}

    /**
     * <p>The identifier of the KMS customer managed key for EventBridge to use to
     * encrypt events on this event bus, if one has been specified.</p> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/eventbridge/latest/userguide/eb-encryption.html">Data
     * encryption in EventBridge</a> in the <i>Amazon EventBridge User Guide</i>.</p>
     */
    inline UpdateEventBusResult& WithKmsKeyIdentifier(const char* value) { SetKmsKeyIdentifier(value); return *this;}


    /**
     * <p>The event bus description.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The event bus description.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_description = value; }

    /**
     * <p>The event bus description.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }

    /**
     * <p>The event bus description.</p>
     */
    inline void SetDescription(const char* value) { m_description.assign(value); }

    /**
     * <p>The event bus description.</p>
     */
    inline UpdateEventBusResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The event bus description.</p>
     */
    inline UpdateEventBusResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The event bus description.</p>
     */
    inline UpdateEventBusResult& WithDescription(const char* value) { SetDescription(value); return *this;}


    
    inline const DeadLetterConfig& GetDeadLetterConfig() const{ return m_deadLetterConfig; }

    
    inline void SetDeadLetterConfig(const DeadLetterConfig& value) { m_deadLetterConfig = value; }

    
    inline void SetDeadLetterConfig(DeadLetterConfig&& value) { m_deadLetterConfig = std::move(value); }

    
    inline UpdateEventBusResult& WithDeadLetterConfig(const DeadLetterConfig& value) { SetDeadLetterConfig(value); return *this;}

    
    inline UpdateEventBusResult& WithDeadLetterConfig(DeadLetterConfig&& value) { SetDeadLetterConfig(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline UpdateEventBusResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline UpdateEventBusResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline UpdateEventBusResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_arn;

    Aws::String m_name;

    Aws::String m_kmsKeyIdentifier;

    Aws::String m_description;

    DeadLetterConfig m_deadLetterConfig;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace EventBridge
} // namespace Aws
