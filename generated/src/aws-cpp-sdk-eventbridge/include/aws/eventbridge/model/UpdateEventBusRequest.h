/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/eventbridge/EventBridge_EXPORTS.h>
#include <aws/eventbridge/EventBridgeRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/eventbridge/model/DeadLetterConfig.h>
#include <aws/eventbridge/model/LogConfig.h>
#include <utility>

namespace Aws
{
namespace EventBridge
{
namespace Model
{

  /**
   */
  class UpdateEventBusRequest : public EventBridgeRequest
  {
  public:
    AWS_EVENTBRIDGE_API UpdateEventBusRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateEventBus"; }

    AWS_EVENTBRIDGE_API Aws::String SerializePayload() const override;

    AWS_EVENTBRIDGE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name of the event bus.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    UpdateEventBusRequest& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the KMS customer managed key for EventBridge to use, if you
     * choose to use a customer managed key to encrypt events on this event bus. The
     * identifier can be the key Amazon Resource Name (ARN), KeyId, key alias, or key
     * alias ARN.</p> <p>If you do not specify a customer managed key identifier,
     * EventBridge uses an Amazon Web Services owned key to encrypt events on the event
     * bus.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/viewing-keys.html">Identify
     * and view keys</a> in the <i>Key Management Service Developer Guide</i>. </p>
     *  <p>Schema discovery is not supported for event buses encrypted using a
     * customer managed key. EventBridge returns an error if: </p> <ul> <li> <p>You
     * call <code> <a
     * href="https://docs.aws.amazon.com/eventbridge/latest/schema-reference/v1-discoverers.html#CreateDiscoverer">CreateDiscoverer</a>
     * </code> on an event bus set to use a customer managed key for encryption.</p>
     * </li> <li> <p>You call <code> <a
     * href="https://docs.aws.amazon.com/eventbridge/latest/APIReference/API_UpdatedEventBus.html">UpdatedEventBus</a>
     * </code> to set a customer managed key on an event bus with schema discovery
     * enabled.</p> </li> </ul> <p>To enable schema discovery on an event bus, choose
     * to use an Amazon Web Services owned key. For more information, see <a
     * href="https://docs.aws.amazon.com/eventbridge/latest/userguide/eb-encryption-event-bus-cmkey.html">Encrypting
     * events</a> in the <i>Amazon EventBridge User Guide</i>.</p>  
     * <p>If you have specified that EventBridge use a customer managed key for
     * encrypting the source event bus, we strongly recommend you also specify a
     * customer managed key for any archives for the event bus as well. </p> <p>For
     * more information, see <a
     * href="https://docs.aws.amazon.com/eventbridge/latest/userguide/encryption-archives.html">Encrypting
     * archives</a> in the <i>Amazon EventBridge User Guide</i>.</p> 
     */
    inline const Aws::String& GetKmsKeyIdentifier() const { return m_kmsKeyIdentifier; }
    inline bool KmsKeyIdentifierHasBeenSet() const { return m_kmsKeyIdentifierHasBeenSet; }
    template<typename KmsKeyIdentifierT = Aws::String>
    void SetKmsKeyIdentifier(KmsKeyIdentifierT&& value) { m_kmsKeyIdentifierHasBeenSet = true; m_kmsKeyIdentifier = std::forward<KmsKeyIdentifierT>(value); }
    template<typename KmsKeyIdentifierT = Aws::String>
    UpdateEventBusRequest& WithKmsKeyIdentifier(KmsKeyIdentifierT&& value) { SetKmsKeyIdentifier(std::forward<KmsKeyIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The event bus description.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    UpdateEventBusRequest& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const DeadLetterConfig& GetDeadLetterConfig() const { return m_deadLetterConfig; }
    inline bool DeadLetterConfigHasBeenSet() const { return m_deadLetterConfigHasBeenSet; }
    template<typename DeadLetterConfigT = DeadLetterConfig>
    void SetDeadLetterConfig(DeadLetterConfigT&& value) { m_deadLetterConfigHasBeenSet = true; m_deadLetterConfig = std::forward<DeadLetterConfigT>(value); }
    template<typename DeadLetterConfigT = DeadLetterConfig>
    UpdateEventBusRequest& WithDeadLetterConfig(DeadLetterConfigT&& value) { SetDeadLetterConfig(std::forward<DeadLetterConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The logging configuration settings for the event bus.</p> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/eb-event-bus-logs.html">Configuring logs for
     * event buses</a> in the <i>EventBridge User Guide</i>.</p>
     */
    inline const LogConfig& GetLogConfig() const { return m_logConfig; }
    inline bool LogConfigHasBeenSet() const { return m_logConfigHasBeenSet; }
    template<typename LogConfigT = LogConfig>
    void SetLogConfig(LogConfigT&& value) { m_logConfigHasBeenSet = true; m_logConfig = std::forward<LogConfigT>(value); }
    template<typename LogConfigT = LogConfig>
    UpdateEventBusRequest& WithLogConfig(LogConfigT&& value) { SetLogConfig(std::forward<LogConfigT>(value)); return *this;}
    ///@}
  private:

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
  };

} // namespace Model
} // namespace EventBridge
} // namespace Aws
