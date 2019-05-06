/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/chime/Chime_EXPORTS.h>
#include <aws/chime/ChimeRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/chime/model/Origination.h>
#include <utility>

namespace Aws
{
namespace Chime
{
namespace Model
{

  /**
   */
  class AWS_CHIME_API PutVoiceConnectorOriginationRequest : public ChimeRequest
  {
  public:
    PutVoiceConnectorOriginationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutVoiceConnectorOrigination"; }

    Aws::String SerializePayload() const override;


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
    inline PutVoiceConnectorOriginationRequest& WithVoiceConnectorId(const Aws::String& value) { SetVoiceConnectorId(value); return *this;}

    /**
     * <p>The Amazon Chime Voice Connector ID.</p>
     */
    inline PutVoiceConnectorOriginationRequest& WithVoiceConnectorId(Aws::String&& value) { SetVoiceConnectorId(std::move(value)); return *this;}

    /**
     * <p>The Amazon Chime Voice Connector ID.</p>
     */
    inline PutVoiceConnectorOriginationRequest& WithVoiceConnectorId(const char* value) { SetVoiceConnectorId(value); return *this;}


    /**
     * <p>The origination setting details to add.</p>
     */
    inline const Origination& GetOrigination() const{ return m_origination; }

    /**
     * <p>The origination setting details to add.</p>
     */
    inline bool OriginationHasBeenSet() const { return m_originationHasBeenSet; }

    /**
     * <p>The origination setting details to add.</p>
     */
    inline void SetOrigination(const Origination& value) { m_originationHasBeenSet = true; m_origination = value; }

    /**
     * <p>The origination setting details to add.</p>
     */
    inline void SetOrigination(Origination&& value) { m_originationHasBeenSet = true; m_origination = std::move(value); }

    /**
     * <p>The origination setting details to add.</p>
     */
    inline PutVoiceConnectorOriginationRequest& WithOrigination(const Origination& value) { SetOrigination(value); return *this;}

    /**
     * <p>The origination setting details to add.</p>
     */
    inline PutVoiceConnectorOriginationRequest& WithOrigination(Origination&& value) { SetOrigination(std::move(value)); return *this;}

  private:

    Aws::String m_voiceConnectorId;
    bool m_voiceConnectorIdHasBeenSet;

    Origination m_origination;
    bool m_originationHasBeenSet;
  };

} // namespace Model
} // namespace Chime
} // namespace Aws
