/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/eventbridge/EventBridge_EXPORTS.h>
#include <aws/eventbridge/EventBridgeRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/eventbridge/model/DeadLetterConfig.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/eventbridge/model/Tag.h>
#include <utility>

namespace Aws
{
namespace EventBridge
{
namespace Model
{

  /**
   */
  class CreateEventBusRequest : public EventBridgeRequest
  {
  public:
    AWS_EVENTBRIDGE_API CreateEventBusRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateEventBus"; }

    AWS_EVENTBRIDGE_API Aws::String SerializePayload() const override;

    AWS_EVENTBRIDGE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name of the new event bus. </p> <p>Custom event bus names can't contain
     * the <code>/</code> character, but you can use the <code>/</code> character in
     * partner event bus names. In addition, for partner event buses, the name must
     * exactly match the name of the partner event source that this event bus is
     * matched to.</p> <p>You can't use the name <code>default</code> for a custom
     * event bus, as this name is already used for your account's default event
     * bus.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline CreateEventBusRequest& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline CreateEventBusRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline CreateEventBusRequest& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If you are creating a partner event bus, this specifies the partner event
     * source that the new event bus will be matched with.</p>
     */
    inline const Aws::String& GetEventSourceName() const{ return m_eventSourceName; }
    inline bool EventSourceNameHasBeenSet() const { return m_eventSourceNameHasBeenSet; }
    inline void SetEventSourceName(const Aws::String& value) { m_eventSourceNameHasBeenSet = true; m_eventSourceName = value; }
    inline void SetEventSourceName(Aws::String&& value) { m_eventSourceNameHasBeenSet = true; m_eventSourceName = std::move(value); }
    inline void SetEventSourceName(const char* value) { m_eventSourceNameHasBeenSet = true; m_eventSourceName.assign(value); }
    inline CreateEventBusRequest& WithEventSourceName(const Aws::String& value) { SetEventSourceName(value); return *this;}
    inline CreateEventBusRequest& WithEventSourceName(Aws::String&& value) { SetEventSourceName(std::move(value)); return *this;}
    inline CreateEventBusRequest& WithEventSourceName(const char* value) { SetEventSourceName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The event bus description.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline CreateEventBusRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline CreateEventBusRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline CreateEventBusRequest& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
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
    inline bool KmsKeyIdentifierHasBeenSet() const { return m_kmsKeyIdentifierHasBeenSet; }
    inline void SetKmsKeyIdentifier(const Aws::String& value) { m_kmsKeyIdentifierHasBeenSet = true; m_kmsKeyIdentifier = value; }
    inline void SetKmsKeyIdentifier(Aws::String&& value) { m_kmsKeyIdentifierHasBeenSet = true; m_kmsKeyIdentifier = std::move(value); }
    inline void SetKmsKeyIdentifier(const char* value) { m_kmsKeyIdentifierHasBeenSet = true; m_kmsKeyIdentifier.assign(value); }
    inline CreateEventBusRequest& WithKmsKeyIdentifier(const Aws::String& value) { SetKmsKeyIdentifier(value); return *this;}
    inline CreateEventBusRequest& WithKmsKeyIdentifier(Aws::String&& value) { SetKmsKeyIdentifier(std::move(value)); return *this;}
    inline CreateEventBusRequest& WithKmsKeyIdentifier(const char* value) { SetKmsKeyIdentifier(value); return *this;}
    ///@}

    ///@{
    
    inline const DeadLetterConfig& GetDeadLetterConfig() const{ return m_deadLetterConfig; }
    inline bool DeadLetterConfigHasBeenSet() const { return m_deadLetterConfigHasBeenSet; }
    inline void SetDeadLetterConfig(const DeadLetterConfig& value) { m_deadLetterConfigHasBeenSet = true; m_deadLetterConfig = value; }
    inline void SetDeadLetterConfig(DeadLetterConfig&& value) { m_deadLetterConfigHasBeenSet = true; m_deadLetterConfig = std::move(value); }
    inline CreateEventBusRequest& WithDeadLetterConfig(const DeadLetterConfig& value) { SetDeadLetterConfig(value); return *this;}
    inline CreateEventBusRequest& WithDeadLetterConfig(DeadLetterConfig&& value) { SetDeadLetterConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Tags to associate with the event bus.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline CreateEventBusRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}
    inline CreateEventBusRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}
    inline CreateEventBusRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }
    inline CreateEventBusRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_eventSourceName;
    bool m_eventSourceNameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_kmsKeyIdentifier;
    bool m_kmsKeyIdentifierHasBeenSet = false;

    DeadLetterConfig m_deadLetterConfig;
    bool m_deadLetterConfigHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace EventBridge
} // namespace Aws
