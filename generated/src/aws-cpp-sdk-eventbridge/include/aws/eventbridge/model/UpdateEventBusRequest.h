/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/eventbridge/EventBridge_EXPORTS.h>
#include <aws/eventbridge/EventBridgeRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/eventbridge/model/DeadLetterConfig.h>
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
    AWS_EVENTBRIDGE_API UpdateEventBusRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateEventBus"; }

    AWS_EVENTBRIDGE_API Aws::String SerializePayload() const override;

    AWS_EVENTBRIDGE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the event bus.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the event bus.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the event bus.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the event bus.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the event bus.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the event bus.</p>
     */
    inline UpdateEventBusRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the event bus.</p>
     */
    inline UpdateEventBusRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the event bus.</p>
     */
    inline UpdateEventBusRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The identifier of the KMS customer managed key for EventBridge to use, if you
     * choose to use a customer managed key to encrypt events on this event bus. The
     * identifier can be the key Amazon Resource Name (ARN), KeyId, key alias, or key
     * alias ARN.</p> <p>If you do not specify a customer managed key identifier,
     * EventBridge uses an Amazon Web Services owned key to encrypt events on the event
     * bus.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/getting-started.html">Managing
     * keys</a> in the <i>Key Management Service Developer Guide</i>. </p> 
     * <p>Archives and schema discovery are not supported for event buses encrypted
     * using a customer managed key. EventBridge returns an error if:</p> <ul> <li>
     * <p>You call <code> <a
     * href="https://docs.aws.amazon.com/eventbridge/latest/APIReference/API_CreateArchive.html">CreateArchive</a>
     * </code> on an event bus set to use a customer managed key for encryption.</p>
     * </li> <li> <p>You call <code> <a
     * href="https://docs.aws.amazon.com/eventbridge/latest/schema-reference/v1-discoverers.html#CreateDiscoverer">CreateDiscoverer</a>
     * </code> on an event bus set to use a customer managed key for encryption.</p>
     * </li> <li> <p>You call <code> <a
     * href="https://docs.aws.amazon.com/eventbridge/latest/APIReference/API_UpdatedEventBus.html">UpdatedEventBus</a>
     * </code> to set a customer managed key on an event bus with an archives or schema
     * discovery enabled.</p> </li> </ul> <p>To enable archives or schema discovery on
     * an event bus, choose to use an Amazon Web Services owned key. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/eventbridge/latest/userguide/eb-encryption.html">Data
     * encryption in EventBridge</a> in the <i>Amazon EventBridge User Guide</i>.</p>
     * 
     */
    inline const Aws::String& GetKmsKeyIdentifier() const{ return m_kmsKeyIdentifier; }

    /**
     * <p>The identifier of the KMS customer managed key for EventBridge to use, if you
     * choose to use a customer managed key to encrypt events on this event bus. The
     * identifier can be the key Amazon Resource Name (ARN), KeyId, key alias, or key
     * alias ARN.</p> <p>If you do not specify a customer managed key identifier,
     * EventBridge uses an Amazon Web Services owned key to encrypt events on the event
     * bus.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/getting-started.html">Managing
     * keys</a> in the <i>Key Management Service Developer Guide</i>. </p> 
     * <p>Archives and schema discovery are not supported for event buses encrypted
     * using a customer managed key. EventBridge returns an error if:</p> <ul> <li>
     * <p>You call <code> <a
     * href="https://docs.aws.amazon.com/eventbridge/latest/APIReference/API_CreateArchive.html">CreateArchive</a>
     * </code> on an event bus set to use a customer managed key for encryption.</p>
     * </li> <li> <p>You call <code> <a
     * href="https://docs.aws.amazon.com/eventbridge/latest/schema-reference/v1-discoverers.html#CreateDiscoverer">CreateDiscoverer</a>
     * </code> on an event bus set to use a customer managed key for encryption.</p>
     * </li> <li> <p>You call <code> <a
     * href="https://docs.aws.amazon.com/eventbridge/latest/APIReference/API_UpdatedEventBus.html">UpdatedEventBus</a>
     * </code> to set a customer managed key on an event bus with an archives or schema
     * discovery enabled.</p> </li> </ul> <p>To enable archives or schema discovery on
     * an event bus, choose to use an Amazon Web Services owned key. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/eventbridge/latest/userguide/eb-encryption.html">Data
     * encryption in EventBridge</a> in the <i>Amazon EventBridge User Guide</i>.</p>
     * 
     */
    inline bool KmsKeyIdentifierHasBeenSet() const { return m_kmsKeyIdentifierHasBeenSet; }

    /**
     * <p>The identifier of the KMS customer managed key for EventBridge to use, if you
     * choose to use a customer managed key to encrypt events on this event bus. The
     * identifier can be the key Amazon Resource Name (ARN), KeyId, key alias, or key
     * alias ARN.</p> <p>If you do not specify a customer managed key identifier,
     * EventBridge uses an Amazon Web Services owned key to encrypt events on the event
     * bus.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/getting-started.html">Managing
     * keys</a> in the <i>Key Management Service Developer Guide</i>. </p> 
     * <p>Archives and schema discovery are not supported for event buses encrypted
     * using a customer managed key. EventBridge returns an error if:</p> <ul> <li>
     * <p>You call <code> <a
     * href="https://docs.aws.amazon.com/eventbridge/latest/APIReference/API_CreateArchive.html">CreateArchive</a>
     * </code> on an event bus set to use a customer managed key for encryption.</p>
     * </li> <li> <p>You call <code> <a
     * href="https://docs.aws.amazon.com/eventbridge/latest/schema-reference/v1-discoverers.html#CreateDiscoverer">CreateDiscoverer</a>
     * </code> on an event bus set to use a customer managed key for encryption.</p>
     * </li> <li> <p>You call <code> <a
     * href="https://docs.aws.amazon.com/eventbridge/latest/APIReference/API_UpdatedEventBus.html">UpdatedEventBus</a>
     * </code> to set a customer managed key on an event bus with an archives or schema
     * discovery enabled.</p> </li> </ul> <p>To enable archives or schema discovery on
     * an event bus, choose to use an Amazon Web Services owned key. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/eventbridge/latest/userguide/eb-encryption.html">Data
     * encryption in EventBridge</a> in the <i>Amazon EventBridge User Guide</i>.</p>
     * 
     */
    inline void SetKmsKeyIdentifier(const Aws::String& value) { m_kmsKeyIdentifierHasBeenSet = true; m_kmsKeyIdentifier = value; }

    /**
     * <p>The identifier of the KMS customer managed key for EventBridge to use, if you
     * choose to use a customer managed key to encrypt events on this event bus. The
     * identifier can be the key Amazon Resource Name (ARN), KeyId, key alias, or key
     * alias ARN.</p> <p>If you do not specify a customer managed key identifier,
     * EventBridge uses an Amazon Web Services owned key to encrypt events on the event
     * bus.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/getting-started.html">Managing
     * keys</a> in the <i>Key Management Service Developer Guide</i>. </p> 
     * <p>Archives and schema discovery are not supported for event buses encrypted
     * using a customer managed key. EventBridge returns an error if:</p> <ul> <li>
     * <p>You call <code> <a
     * href="https://docs.aws.amazon.com/eventbridge/latest/APIReference/API_CreateArchive.html">CreateArchive</a>
     * </code> on an event bus set to use a customer managed key for encryption.</p>
     * </li> <li> <p>You call <code> <a
     * href="https://docs.aws.amazon.com/eventbridge/latest/schema-reference/v1-discoverers.html#CreateDiscoverer">CreateDiscoverer</a>
     * </code> on an event bus set to use a customer managed key for encryption.</p>
     * </li> <li> <p>You call <code> <a
     * href="https://docs.aws.amazon.com/eventbridge/latest/APIReference/API_UpdatedEventBus.html">UpdatedEventBus</a>
     * </code> to set a customer managed key on an event bus with an archives or schema
     * discovery enabled.</p> </li> </ul> <p>To enable archives or schema discovery on
     * an event bus, choose to use an Amazon Web Services owned key. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/eventbridge/latest/userguide/eb-encryption.html">Data
     * encryption in EventBridge</a> in the <i>Amazon EventBridge User Guide</i>.</p>
     * 
     */
    inline void SetKmsKeyIdentifier(Aws::String&& value) { m_kmsKeyIdentifierHasBeenSet = true; m_kmsKeyIdentifier = std::move(value); }

    /**
     * <p>The identifier of the KMS customer managed key for EventBridge to use, if you
     * choose to use a customer managed key to encrypt events on this event bus. The
     * identifier can be the key Amazon Resource Name (ARN), KeyId, key alias, or key
     * alias ARN.</p> <p>If you do not specify a customer managed key identifier,
     * EventBridge uses an Amazon Web Services owned key to encrypt events on the event
     * bus.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/getting-started.html">Managing
     * keys</a> in the <i>Key Management Service Developer Guide</i>. </p> 
     * <p>Archives and schema discovery are not supported for event buses encrypted
     * using a customer managed key. EventBridge returns an error if:</p> <ul> <li>
     * <p>You call <code> <a
     * href="https://docs.aws.amazon.com/eventbridge/latest/APIReference/API_CreateArchive.html">CreateArchive</a>
     * </code> on an event bus set to use a customer managed key for encryption.</p>
     * </li> <li> <p>You call <code> <a
     * href="https://docs.aws.amazon.com/eventbridge/latest/schema-reference/v1-discoverers.html#CreateDiscoverer">CreateDiscoverer</a>
     * </code> on an event bus set to use a customer managed key for encryption.</p>
     * </li> <li> <p>You call <code> <a
     * href="https://docs.aws.amazon.com/eventbridge/latest/APIReference/API_UpdatedEventBus.html">UpdatedEventBus</a>
     * </code> to set a customer managed key on an event bus with an archives or schema
     * discovery enabled.</p> </li> </ul> <p>To enable archives or schema discovery on
     * an event bus, choose to use an Amazon Web Services owned key. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/eventbridge/latest/userguide/eb-encryption.html">Data
     * encryption in EventBridge</a> in the <i>Amazon EventBridge User Guide</i>.</p>
     * 
     */
    inline void SetKmsKeyIdentifier(const char* value) { m_kmsKeyIdentifierHasBeenSet = true; m_kmsKeyIdentifier.assign(value); }

    /**
     * <p>The identifier of the KMS customer managed key for EventBridge to use, if you
     * choose to use a customer managed key to encrypt events on this event bus. The
     * identifier can be the key Amazon Resource Name (ARN), KeyId, key alias, or key
     * alias ARN.</p> <p>If you do not specify a customer managed key identifier,
     * EventBridge uses an Amazon Web Services owned key to encrypt events on the event
     * bus.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/getting-started.html">Managing
     * keys</a> in the <i>Key Management Service Developer Guide</i>. </p> 
     * <p>Archives and schema discovery are not supported for event buses encrypted
     * using a customer managed key. EventBridge returns an error if:</p> <ul> <li>
     * <p>You call <code> <a
     * href="https://docs.aws.amazon.com/eventbridge/latest/APIReference/API_CreateArchive.html">CreateArchive</a>
     * </code> on an event bus set to use a customer managed key for encryption.</p>
     * </li> <li> <p>You call <code> <a
     * href="https://docs.aws.amazon.com/eventbridge/latest/schema-reference/v1-discoverers.html#CreateDiscoverer">CreateDiscoverer</a>
     * </code> on an event bus set to use a customer managed key for encryption.</p>
     * </li> <li> <p>You call <code> <a
     * href="https://docs.aws.amazon.com/eventbridge/latest/APIReference/API_UpdatedEventBus.html">UpdatedEventBus</a>
     * </code> to set a customer managed key on an event bus with an archives or schema
     * discovery enabled.</p> </li> </ul> <p>To enable archives or schema discovery on
     * an event bus, choose to use an Amazon Web Services owned key. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/eventbridge/latest/userguide/eb-encryption.html">Data
     * encryption in EventBridge</a> in the <i>Amazon EventBridge User Guide</i>.</p>
     * 
     */
    inline UpdateEventBusRequest& WithKmsKeyIdentifier(const Aws::String& value) { SetKmsKeyIdentifier(value); return *this;}

    /**
     * <p>The identifier of the KMS customer managed key for EventBridge to use, if you
     * choose to use a customer managed key to encrypt events on this event bus. The
     * identifier can be the key Amazon Resource Name (ARN), KeyId, key alias, or key
     * alias ARN.</p> <p>If you do not specify a customer managed key identifier,
     * EventBridge uses an Amazon Web Services owned key to encrypt events on the event
     * bus.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/getting-started.html">Managing
     * keys</a> in the <i>Key Management Service Developer Guide</i>. </p> 
     * <p>Archives and schema discovery are not supported for event buses encrypted
     * using a customer managed key. EventBridge returns an error if:</p> <ul> <li>
     * <p>You call <code> <a
     * href="https://docs.aws.amazon.com/eventbridge/latest/APIReference/API_CreateArchive.html">CreateArchive</a>
     * </code> on an event bus set to use a customer managed key for encryption.</p>
     * </li> <li> <p>You call <code> <a
     * href="https://docs.aws.amazon.com/eventbridge/latest/schema-reference/v1-discoverers.html#CreateDiscoverer">CreateDiscoverer</a>
     * </code> on an event bus set to use a customer managed key for encryption.</p>
     * </li> <li> <p>You call <code> <a
     * href="https://docs.aws.amazon.com/eventbridge/latest/APIReference/API_UpdatedEventBus.html">UpdatedEventBus</a>
     * </code> to set a customer managed key on an event bus with an archives or schema
     * discovery enabled.</p> </li> </ul> <p>To enable archives or schema discovery on
     * an event bus, choose to use an Amazon Web Services owned key. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/eventbridge/latest/userguide/eb-encryption.html">Data
     * encryption in EventBridge</a> in the <i>Amazon EventBridge User Guide</i>.</p>
     * 
     */
    inline UpdateEventBusRequest& WithKmsKeyIdentifier(Aws::String&& value) { SetKmsKeyIdentifier(std::move(value)); return *this;}

    /**
     * <p>The identifier of the KMS customer managed key for EventBridge to use, if you
     * choose to use a customer managed key to encrypt events on this event bus. The
     * identifier can be the key Amazon Resource Name (ARN), KeyId, key alias, or key
     * alias ARN.</p> <p>If you do not specify a customer managed key identifier,
     * EventBridge uses an Amazon Web Services owned key to encrypt events on the event
     * bus.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/getting-started.html">Managing
     * keys</a> in the <i>Key Management Service Developer Guide</i>. </p> 
     * <p>Archives and schema discovery are not supported for event buses encrypted
     * using a customer managed key. EventBridge returns an error if:</p> <ul> <li>
     * <p>You call <code> <a
     * href="https://docs.aws.amazon.com/eventbridge/latest/APIReference/API_CreateArchive.html">CreateArchive</a>
     * </code> on an event bus set to use a customer managed key for encryption.</p>
     * </li> <li> <p>You call <code> <a
     * href="https://docs.aws.amazon.com/eventbridge/latest/schema-reference/v1-discoverers.html#CreateDiscoverer">CreateDiscoverer</a>
     * </code> on an event bus set to use a customer managed key for encryption.</p>
     * </li> <li> <p>You call <code> <a
     * href="https://docs.aws.amazon.com/eventbridge/latest/APIReference/API_UpdatedEventBus.html">UpdatedEventBus</a>
     * </code> to set a customer managed key on an event bus with an archives or schema
     * discovery enabled.</p> </li> </ul> <p>To enable archives or schema discovery on
     * an event bus, choose to use an Amazon Web Services owned key. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/eventbridge/latest/userguide/eb-encryption.html">Data
     * encryption in EventBridge</a> in the <i>Amazon EventBridge User Guide</i>.</p>
     * 
     */
    inline UpdateEventBusRequest& WithKmsKeyIdentifier(const char* value) { SetKmsKeyIdentifier(value); return *this;}


    /**
     * <p>The event bus description.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The event bus description.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The event bus description.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The event bus description.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The event bus description.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The event bus description.</p>
     */
    inline UpdateEventBusRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The event bus description.</p>
     */
    inline UpdateEventBusRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The event bus description.</p>
     */
    inline UpdateEventBusRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    
    inline const DeadLetterConfig& GetDeadLetterConfig() const{ return m_deadLetterConfig; }

    
    inline bool DeadLetterConfigHasBeenSet() const { return m_deadLetterConfigHasBeenSet; }

    
    inline void SetDeadLetterConfig(const DeadLetterConfig& value) { m_deadLetterConfigHasBeenSet = true; m_deadLetterConfig = value; }

    
    inline void SetDeadLetterConfig(DeadLetterConfig&& value) { m_deadLetterConfigHasBeenSet = true; m_deadLetterConfig = std::move(value); }

    
    inline UpdateEventBusRequest& WithDeadLetterConfig(const DeadLetterConfig& value) { SetDeadLetterConfig(value); return *this;}

    
    inline UpdateEventBusRequest& WithDeadLetterConfig(DeadLetterConfig&& value) { SetDeadLetterConfig(std::move(value)); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_kmsKeyIdentifier;
    bool m_kmsKeyIdentifierHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    DeadLetterConfig m_deadLetterConfig;
    bool m_deadLetterConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace EventBridge
} // namespace Aws
