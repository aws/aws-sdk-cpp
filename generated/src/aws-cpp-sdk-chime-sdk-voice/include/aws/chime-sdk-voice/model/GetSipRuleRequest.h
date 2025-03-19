/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-voice/ChimeSDKVoice_EXPORTS.h>
#include <aws/chime-sdk-voice/ChimeSDKVoiceRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace ChimeSDKVoice
{
namespace Model
{

  /**
   */
  class GetSipRuleRequest : public ChimeSDKVoiceRequest
  {
  public:
    AWS_CHIMESDKVOICE_API GetSipRuleRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetSipRule"; }

    AWS_CHIMESDKVOICE_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The SIP rule ID.</p>
     */
    inline const Aws::String& GetSipRuleId() const { return m_sipRuleId; }
    inline bool SipRuleIdHasBeenSet() const { return m_sipRuleIdHasBeenSet; }
    template<typename SipRuleIdT = Aws::String>
    void SetSipRuleId(SipRuleIdT&& value) { m_sipRuleIdHasBeenSet = true; m_sipRuleId = std::forward<SipRuleIdT>(value); }
    template<typename SipRuleIdT = Aws::String>
    GetSipRuleRequest& WithSipRuleId(SipRuleIdT&& value) { SetSipRuleId(std::forward<SipRuleIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_sipRuleId;
    bool m_sipRuleIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ChimeSDKVoice
} // namespace Aws
