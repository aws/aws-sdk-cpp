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
    AWS_IVS_API BatchStartViewerSessionRevocationError();
    AWS_IVS_API BatchStartViewerSessionRevocationError(Aws::Utils::Json::JsonView jsonValue);
    AWS_IVS_API BatchStartViewerSessionRevocationError& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IVS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Channel ARN.</p>
     */
    inline const Aws::String& GetChannelArn() const{ return m_channelArn; }
    inline bool ChannelArnHasBeenSet() const { return m_channelArnHasBeenSet; }
    inline void SetChannelArn(const Aws::String& value) { m_channelArnHasBeenSet = true; m_channelArn = value; }
    inline void SetChannelArn(Aws::String&& value) { m_channelArnHasBeenSet = true; m_channelArn = std::move(value); }
    inline void SetChannelArn(const char* value) { m_channelArnHasBeenSet = true; m_channelArn.assign(value); }
    inline BatchStartViewerSessionRevocationError& WithChannelArn(const Aws::String& value) { SetChannelArn(value); return *this;}
    inline BatchStartViewerSessionRevocationError& WithChannelArn(Aws::String&& value) { SetChannelArn(std::move(value)); return *this;}
    inline BatchStartViewerSessionRevocationError& WithChannelArn(const char* value) { SetChannelArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Error code.</p>
     */
    inline const Aws::String& GetCode() const{ return m_code; }
    inline bool CodeHasBeenSet() const { return m_codeHasBeenSet; }
    inline void SetCode(const Aws::String& value) { m_codeHasBeenSet = true; m_code = value; }
    inline void SetCode(Aws::String&& value) { m_codeHasBeenSet = true; m_code = std::move(value); }
    inline void SetCode(const char* value) { m_codeHasBeenSet = true; m_code.assign(value); }
    inline BatchStartViewerSessionRevocationError& WithCode(const Aws::String& value) { SetCode(value); return *this;}
    inline BatchStartViewerSessionRevocationError& WithCode(Aws::String&& value) { SetCode(std::move(value)); return *this;}
    inline BatchStartViewerSessionRevocationError& WithCode(const char* value) { SetCode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Error message, determined by the application.</p>
     */
    inline const Aws::String& GetMessage() const{ return m_message; }
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }
    inline BatchStartViewerSessionRevocationError& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}
    inline BatchStartViewerSessionRevocationError& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}
    inline BatchStartViewerSessionRevocationError& WithMessage(const char* value) { SetMessage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the viewer session to revoke.</p>
     */
    inline const Aws::String& GetViewerId() const{ return m_viewerId; }
    inline bool ViewerIdHasBeenSet() const { return m_viewerIdHasBeenSet; }
    inline void SetViewerId(const Aws::String& value) { m_viewerIdHasBeenSet = true; m_viewerId = value; }
    inline void SetViewerId(Aws::String&& value) { m_viewerIdHasBeenSet = true; m_viewerId = std::move(value); }
    inline void SetViewerId(const char* value) { m_viewerIdHasBeenSet = true; m_viewerId.assign(value); }
    inline BatchStartViewerSessionRevocationError& WithViewerId(const Aws::String& value) { SetViewerId(value); return *this;}
    inline BatchStartViewerSessionRevocationError& WithViewerId(Aws::String&& value) { SetViewerId(std::move(value)); return *this;}
    inline BatchStartViewerSessionRevocationError& WithViewerId(const char* value) { SetViewerId(value); return *this;}
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
