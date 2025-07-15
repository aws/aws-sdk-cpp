/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/eventbridge/EventBridge_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/eventbridge/model/DeadLetterConfig.h>
#include <aws/eventbridge/model/LogConfig.h>
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
    AWS_EVENTBRIDGE_API UpdateEventBusResult() = default;
    AWS_EVENTBRIDGE_API UpdateEventBusResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_EVENTBRIDGE_API UpdateEventBusResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The event bus Amazon Resource Name (ARN).</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    UpdateEventBusResult& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The event bus name.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    UpdateEventBusResult& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
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
    UpdateEventBusResult& WithKmsKeyIdentifier(KmsKeyIdentifierT&& value) { SetKmsKeyIdentifier(std::forward<KmsKeyIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The event bus description.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    UpdateEventBusResult& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const DeadLetterConfig& GetDeadLetterConfig() const { return m_deadLetterConfig; }
    template<typename DeadLetterConfigT = DeadLetterConfig>
    void SetDeadLetterConfig(DeadLetterConfigT&& value) { m_deadLetterConfigHasBeenSet = true; m_deadLetterConfig = std::forward<DeadLetterConfigT>(value); }
    template<typename DeadLetterConfigT = DeadLetterConfig>
    UpdateEventBusResult& WithDeadLetterConfig(DeadLetterConfigT&& value) { SetDeadLetterConfig(std::forward<DeadLetterConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The logging configuration settings for the event bus.</p> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/eb-event-bus-logs.html">Configuring logs for
     * event buses</a> in the <i>EventBridge User Guide</i>.</p>
     */
    inline const LogConfig& GetLogConfig() const { return m_logConfig; }
    template<typename LogConfigT = LogConfig>
    void SetLogConfig(LogConfigT&& value) { m_logConfigHasBeenSet = true; m_logConfig = std::forward<LogConfigT>(value); }
    template<typename LogConfigT = LogConfig>
    UpdateEventBusResult& WithLogConfig(LogConfigT&& value) { SetLogConfig(std::forward<LogConfigT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    UpdateEventBusResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_kmsKeyIdentifier;
    bool m_kmsKeyIdentifierHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    DeadLetterConfig m_deadLetterConfig;
    bool m_deadLetterConfigHasBeenSet = false;

    LogConfig m_logConfig;
    bool m_logConfigHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace EventBridge
} // namespace Aws
