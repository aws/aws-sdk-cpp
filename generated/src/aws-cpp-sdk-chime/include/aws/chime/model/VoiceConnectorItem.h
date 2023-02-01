/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime/Chime_EXPORTS.h>
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
namespace Chime
{
namespace Model
{

  /**
   * <p>For Amazon Chime Voice Connector groups, the Amazon Chime Voice Connectors to
   * which to route inbound calls. Includes priority configuration settings. Limit: 3
   * <code>VoiceConnectorItems</code> per Amazon Chime Voice Connector
   * group.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/VoiceConnectorItem">AWS
   * API Reference</a></p>
   */
  class VoiceConnectorItem
  {
  public:
    AWS_CHIME_API VoiceConnectorItem();
    AWS_CHIME_API VoiceConnectorItem(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIME_API VoiceConnectorItem& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Chime Voice Connector ID.</p>
     */
    inline const Aws::String& GetVoiceConnectorId() const{ return m_voiceConnectorId; }

    /**
     * <p>The Amazon Chime Voice Connector ID.</p>
     */
    inline bool VoiceConnectorIdHasBeenSet() const { return m_voiceConnectorIdHasBeenSet; }

    /**
     * <p>The Amazon Chime Voice Connector ID.</p>
     */
    inline void SetVoiceConnectorId(const Aws::String& value) { m_voiceConnectorIdHasBeenSet = true; m_voiceConnectorId = value; }

    /**
     * <p>The Amazon Chime Voice Connector ID.</p>
     */
    inline void SetVoiceConnectorId(Aws::String&& value) { m_voiceConnectorIdHasBeenSet = true; m_voiceConnectorId = std::move(value); }

    /**
     * <p>The Amazon Chime Voice Connector ID.</p>
     */
    inline void SetVoiceConnectorId(const char* value) { m_voiceConnectorIdHasBeenSet = true; m_voiceConnectorId.assign(value); }

    /**
     * <p>The Amazon Chime Voice Connector ID.</p>
     */
    inline VoiceConnectorItem& WithVoiceConnectorId(const Aws::String& value) { SetVoiceConnectorId(value); return *this;}

    /**
     * <p>The Amazon Chime Voice Connector ID.</p>
     */
    inline VoiceConnectorItem& WithVoiceConnectorId(Aws::String&& value) { SetVoiceConnectorId(std::move(value)); return *this;}

    /**
     * <p>The Amazon Chime Voice Connector ID.</p>
     */
    inline VoiceConnectorItem& WithVoiceConnectorId(const char* value) { SetVoiceConnectorId(value); return *this;}


    /**
     * <p>The priority associated with the Amazon Chime Voice Connector, with 1 being
     * the highest priority. Higher priority Amazon Chime Voice Connectors are
     * attempted first.</p>
     */
    inline int GetPriority() const{ return m_priority; }

    /**
     * <p>The priority associated with the Amazon Chime Voice Connector, with 1 being
     * the highest priority. Higher priority Amazon Chime Voice Connectors are
     * attempted first.</p>
     */
    inline bool PriorityHasBeenSet() const { return m_priorityHasBeenSet; }

    /**
     * <p>The priority associated with the Amazon Chime Voice Connector, with 1 being
     * the highest priority. Higher priority Amazon Chime Voice Connectors are
     * attempted first.</p>
     */
    inline void SetPriority(int value) { m_priorityHasBeenSet = true; m_priority = value; }

    /**
     * <p>The priority associated with the Amazon Chime Voice Connector, with 1 being
     * the highest priority. Higher priority Amazon Chime Voice Connectors are
     * attempted first.</p>
     */
    inline VoiceConnectorItem& WithPriority(int value) { SetPriority(value); return *this;}

  private:

    Aws::String m_voiceConnectorId;
    bool m_voiceConnectorIdHasBeenSet = false;

    int m_priority;
    bool m_priorityHasBeenSet = false;
  };

} // namespace Model
} // namespace Chime
} // namespace Aws
