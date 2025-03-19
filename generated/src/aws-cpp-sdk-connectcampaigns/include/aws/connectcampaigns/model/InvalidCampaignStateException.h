/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connectcampaigns/ConnectCampaigns_EXPORTS.h>
#include <aws/connectcampaigns/model/CampaignState.h>
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
namespace ConnectCampaigns
{
namespace Model
{

  /**
   * <p>The request could not be processed because of conflict in the current state
   * of the campaign.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connectcampaigns-2021-01-30/InvalidCampaignStateException">AWS
   * API Reference</a></p>
   */
  class InvalidCampaignStateException
  {
  public:
    AWS_CONNECTCAMPAIGNS_API InvalidCampaignStateException() = default;
    AWS_CONNECTCAMPAIGNS_API InvalidCampaignStateException(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECTCAMPAIGNS_API InvalidCampaignStateException& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECTCAMPAIGNS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline CampaignState GetState() const { return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(CampaignState value) { m_stateHasBeenSet = true; m_state = value; }
    inline InvalidCampaignStateException& WithState(CampaignState value) { SetState(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetMessage() const { return m_message; }
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
    template<typename MessageT = Aws::String>
    void SetMessage(MessageT&& value) { m_messageHasBeenSet = true; m_message = std::forward<MessageT>(value); }
    template<typename MessageT = Aws::String>
    InvalidCampaignStateException& WithMessage(MessageT&& value) { SetMessage(std::forward<MessageT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetXAmzErrorType() const { return m_xAmzErrorType; }
    inline bool XAmzErrorTypeHasBeenSet() const { return m_xAmzErrorTypeHasBeenSet; }
    template<typename XAmzErrorTypeT = Aws::String>
    void SetXAmzErrorType(XAmzErrorTypeT&& value) { m_xAmzErrorTypeHasBeenSet = true; m_xAmzErrorType = std::forward<XAmzErrorTypeT>(value); }
    template<typename XAmzErrorTypeT = Aws::String>
    InvalidCampaignStateException& WithXAmzErrorType(XAmzErrorTypeT&& value) { SetXAmzErrorType(std::forward<XAmzErrorTypeT>(value)); return *this;}
    ///@}
  private:

    CampaignState m_state{CampaignState::NOT_SET};
    bool m_stateHasBeenSet = false;

    Aws::String m_message;
    bool m_messageHasBeenSet = false;

    Aws::String m_xAmzErrorType;
    bool m_xAmzErrorTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace ConnectCampaigns
} // namespace Aws
