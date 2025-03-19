/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ivs/IVS_EXPORTS.h>
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
namespace IVS
{
namespace Model
{

  /**
   * <p>Error for a request in the batch for BatchStartViewerSessionRevocation. Each
   * error is related to a specific channel-ARN and viewer-ID pair.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ivs-2020-07-14/BatchStartViewerSessionRevocationError">AWS
   * API Reference</a></p>
   */
  class BatchStartViewerSessionRevocationError
  {
  public:
    AWS_IVS_API BatchStartViewerSessionRevocationError() = default;
    AWS_IVS_API BatchStartViewerSessionRevocationError(Aws::Utils::Json::JsonView jsonValue);
    AWS_IVS_API BatchStartViewerSessionRevocationError& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IVS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Channel ARN.</p>
     */
    inline const Aws::String& GetChannelArn() const { return m_channelArn; }
    inline bool ChannelArnHasBeenSet() const { return m_channelArnHasBeenSet; }
    template<typename ChannelArnT = Aws::String>
    void SetChannelArn(ChannelArnT&& value) { m_channelArnHasBeenSet = true; m_channelArn = std::forward<ChannelArnT>(value); }
    template<typename ChannelArnT = Aws::String>
    BatchStartViewerSessionRevocationError& WithChannelArn(ChannelArnT&& value) { SetChannelArn(std::forward<ChannelArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Error code.</p>
     */
    inline const Aws::String& GetCode() const { return m_code; }
    inline bool CodeHasBeenSet() const { return m_codeHasBeenSet; }
    template<typename CodeT = Aws::String>
    void SetCode(CodeT&& value) { m_codeHasBeenSet = true; m_code = std::forward<CodeT>(value); }
    template<typename CodeT = Aws::String>
    BatchStartViewerSessionRevocationError& WithCode(CodeT&& value) { SetCode(std::forward<CodeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Error message, determined by the application.</p>
     */
    inline const Aws::String& GetMessage() const { return m_message; }
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
    template<typename MessageT = Aws::String>
    void SetMessage(MessageT&& value) { m_messageHasBeenSet = true; m_message = std::forward<MessageT>(value); }
    template<typename MessageT = Aws::String>
    BatchStartViewerSessionRevocationError& WithMessage(MessageT&& value) { SetMessage(std::forward<MessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the viewer session to revoke.</p>
     */
    inline const Aws::String& GetViewerId() const { return m_viewerId; }
    inline bool ViewerIdHasBeenSet() const { return m_viewerIdHasBeenSet; }
    template<typename ViewerIdT = Aws::String>
    void SetViewerId(ViewerIdT&& value) { m_viewerIdHasBeenSet = true; m_viewerId = std::forward<ViewerIdT>(value); }
    template<typename ViewerIdT = Aws::String>
    BatchStartViewerSessionRevocationError& WithViewerId(ViewerIdT&& value) { SetViewerId(std::forward<ViewerIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_channelArn;
    bool m_channelArnHasBeenSet = false;

    Aws::String m_code;
    bool m_codeHasBeenSet = false;

    Aws::String m_message;
    bool m_messageHasBeenSet = false;

    Aws::String m_viewerId;
    bool m_viewerIdHasBeenSet = false;
  };

} // namespace Model
} // namespace IVS
} // namespace Aws
