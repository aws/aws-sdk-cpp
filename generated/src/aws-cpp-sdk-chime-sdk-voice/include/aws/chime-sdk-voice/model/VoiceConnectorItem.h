/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-voice/ChimeSDKVoice_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace ChimeSDKVoice
{
namespace Model
{

  /**
   * <p>For Amazon Chime SDK Voice Connector groups, the Amazon Chime SDK Voice
   * Connectors to which you route inbound calls. Includes priority configuration
   * settings. Limit: 3 VoiceConnectorItems per Voice Connector group.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-voice-2022-08-03/VoiceConnectorItem">AWS
   * API Reference</a></p>
   */
  class VoiceConnectorItem
  {
  public:
    AWS_CHIMESDKVOICE_API VoiceConnectorItem();
    AWS_CHIMESDKVOICE_API VoiceConnectorItem(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKVOICE_API VoiceConnectorItem& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKVOICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Voice Connector ID.</p>
     */
    inline const Aws::String& GetVoiceConnectorId() const{ return m_voiceConnectorId; }

    /**
     * <p>The Voice Connector ID.</p>
     */
    inline bool VoiceConnectorIdHasBeenSet() const { return m_voiceConnectorIdHasBeenSet; }

    /**
     * <p>The Voice Connector ID.</p>
     */
    inline void SetVoiceConnectorId(const Aws::String& value) { m_voiceConnectorIdHasBeenSet = true; m_voiceConnectorId = value; }

    /**
     * <p>The Voice Connector ID.</p>
     */
    inline void SetVoiceConnectorId(Aws::String&& value) { m_voiceConnectorIdHasBeenSet = true; m_voiceConnectorId = std::move(value); }

    /**
     * <p>The Voice Connector ID.</p>
     */
    inline void SetVoiceConnectorId(const char* value) { m_voiceConnectorIdHasBeenSet = true; m_voiceConnectorId.assign(value); }

    /**
     * <p>The Voice Connector ID.</p>
     */
    inline VoiceConnectorItem& WithVoiceConnectorId(const Aws::String& value) { SetVoiceConnectorId(value); return *this;}

    /**
     * <p>The Voice Connector ID.</p>
     */
    inline VoiceConnectorItem& WithVoiceConnectorId(Aws::String&& value) { SetVoiceConnectorId(std::move(value)); return *this;}

    /**
     * <p>The Voice Connector ID.</p>
     */
    inline VoiceConnectorItem& WithVoiceConnectorId(const char* value) { SetVoiceConnectorId(value); return *this;}


    /**
     * <p>The priority setting of a Voice Connector item. Calls are routed to hosts in
     * priority order, with 1 as the highest priority. When hosts have equal priority,
     * the system distributes calls among them based on their relative weight.</p>
     */
    inline int GetPriority() const{ return m_priority; }

    /**
     * <p>The priority setting of a Voice Connector item. Calls are routed to hosts in
     * priority order, with 1 as the highest priority. When hosts have equal priority,
     * the system distributes calls among them based on their relative weight.</p>
     */
    inline bool PriorityHasBeenSet() const { return m_priorityHasBeenSet; }

    /**
     * <p>The priority setting of a Voice Connector item. Calls are routed to hosts in
     * priority order, with 1 as the highest priority. When hosts have equal priority,
     * the system distributes calls among them based on their relative weight.</p>
     */
    inline void SetPriority(int value) { m_priorityHasBeenSet = true; m_priority = value; }

    /**
     * <p>The priority setting of a Voice Connector item. Calls are routed to hosts in
     * priority order, with 1 as the highest priority. When hosts have equal priority,
     * the system distributes calls among them based on their relative weight.</p>
     */
    inline VoiceConnectorItem& WithPriority(int value) { SetPriority(value); return *this;}

  private:

    Aws::String m_voiceConnectorId;
    bool m_voiceConnectorIdHasBeenSet = false;

    int m_priority;
    bool m_priorityHasBeenSet = false;
  };

} // namespace Model
} // namespace ChimeSDKVoice
} // namespace Aws
