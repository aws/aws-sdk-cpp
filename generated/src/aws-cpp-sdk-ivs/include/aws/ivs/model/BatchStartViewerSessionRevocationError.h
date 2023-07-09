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


    /**
     * <p>Channel ARN.</p>
     */
    inline const Aws::String& GetChannelArn() const{ return m_channelArn; }

    /**
     * <p>Channel ARN.</p>
     */
    inline bool ChannelArnHasBeenSet() const { return m_channelArnHasBeenSet; }

    /**
     * <p>Channel ARN.</p>
     */
    inline void SetChannelArn(const Aws::String& value) { m_channelArnHasBeenSet = true; m_channelArn = value; }

    /**
     * <p>Channel ARN.</p>
     */
    inline void SetChannelArn(Aws::String&& value) { m_channelArnHasBeenSet = true; m_channelArn = std::move(value); }

    /**
     * <p>Channel ARN.</p>
     */
    inline void SetChannelArn(const char* value) { m_channelArnHasBeenSet = true; m_channelArn.assign(value); }

    /**
     * <p>Channel ARN.</p>
     */
    inline BatchStartViewerSessionRevocationError& WithChannelArn(const Aws::String& value) { SetChannelArn(value); return *this;}

    /**
     * <p>Channel ARN.</p>
     */
    inline BatchStartViewerSessionRevocationError& WithChannelArn(Aws::String&& value) { SetChannelArn(std::move(value)); return *this;}

    /**
     * <p>Channel ARN.</p>
     */
    inline BatchStartViewerSessionRevocationError& WithChannelArn(const char* value) { SetChannelArn(value); return *this;}


    /**
     * <p>Error code.</p>
     */
    inline const Aws::String& GetCode() const{ return m_code; }

    /**
     * <p>Error code.</p>
     */
    inline bool CodeHasBeenSet() const { return m_codeHasBeenSet; }

    /**
     * <p>Error code.</p>
     */
    inline void SetCode(const Aws::String& value) { m_codeHasBeenSet = true; m_code = value; }

    /**
     * <p>Error code.</p>
     */
    inline void SetCode(Aws::String&& value) { m_codeHasBeenSet = true; m_code = std::move(value); }

    /**
     * <p>Error code.</p>
     */
    inline void SetCode(const char* value) { m_codeHasBeenSet = true; m_code.assign(value); }

    /**
     * <p>Error code.</p>
     */
    inline BatchStartViewerSessionRevocationError& WithCode(const Aws::String& value) { SetCode(value); return *this;}

    /**
     * <p>Error code.</p>
     */
    inline BatchStartViewerSessionRevocationError& WithCode(Aws::String&& value) { SetCode(std::move(value)); return *this;}

    /**
     * <p>Error code.</p>
     */
    inline BatchStartViewerSessionRevocationError& WithCode(const char* value) { SetCode(value); return *this;}


    /**
     * <p>Error message, determined by the application.</p>
     */
    inline const Aws::String& GetMessage() const{ return m_message; }

    /**
     * <p>Error message, determined by the application.</p>
     */
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }

    /**
     * <p>Error message, determined by the application.</p>
     */
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }

    /**
     * <p>Error message, determined by the application.</p>
     */
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }

    /**
     * <p>Error message, determined by the application.</p>
     */
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }

    /**
     * <p>Error message, determined by the application.</p>
     */
    inline BatchStartViewerSessionRevocationError& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    /**
     * <p>Error message, determined by the application.</p>
     */
    inline BatchStartViewerSessionRevocationError& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}

    /**
     * <p>Error message, determined by the application.</p>
     */
    inline BatchStartViewerSessionRevocationError& WithMessage(const char* value) { SetMessage(value); return *this;}


    /**
     * <p>The ID of the viewer session to revoke.</p>
     */
    inline const Aws::String& GetViewerId() const{ return m_viewerId; }

    /**
     * <p>The ID of the viewer session to revoke.</p>
     */
    inline bool ViewerIdHasBeenSet() const { return m_viewerIdHasBeenSet; }

    /**
     * <p>The ID of the viewer session to revoke.</p>
     */
    inline void SetViewerId(const Aws::String& value) { m_viewerIdHasBeenSet = true; m_viewerId = value; }

    /**
     * <p>The ID of the viewer session to revoke.</p>
     */
    inline void SetViewerId(Aws::String&& value) { m_viewerIdHasBeenSet = true; m_viewerId = std::move(value); }

    /**
     * <p>The ID of the viewer session to revoke.</p>
     */
    inline void SetViewerId(const char* value) { m_viewerIdHasBeenSet = true; m_viewerId.assign(value); }

    /**
     * <p>The ID of the viewer session to revoke.</p>
     */
    inline BatchStartViewerSessionRevocationError& WithViewerId(const Aws::String& value) { SetViewerId(value); return *this;}

    /**
     * <p>The ID of the viewer session to revoke.</p>
     */
    inline BatchStartViewerSessionRevocationError& WithViewerId(Aws::String&& value) { SetViewerId(std::move(value)); return *this;}

    /**
     * <p>The ID of the viewer session to revoke.</p>
     */
    inline BatchStartViewerSessionRevocationError& WithViewerId(const char* value) { SetViewerId(value); return *this;}

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
