/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconnect/MediaConnect_EXPORTS.h>
#include <aws/mediaconnect/MediaConnectRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace MediaConnect
{
namespace Model
{

  /**
   */
  class RemoveFlowMediaStreamRequest : public MediaConnectRequest
  {
  public:
    AWS_MEDIACONNECT_API RemoveFlowMediaStreamRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "RemoveFlowMediaStream"; }

    AWS_MEDIACONNECT_API Aws::String SerializePayload() const override;


    /**
     * The Amazon Resource Name (ARN) of the flow.
     */
    inline const Aws::String& GetFlowArn() const{ return m_flowArn; }

    /**
     * The Amazon Resource Name (ARN) of the flow.
     */
    inline bool FlowArnHasBeenSet() const { return m_flowArnHasBeenSet; }

    /**
     * The Amazon Resource Name (ARN) of the flow.
     */
    inline void SetFlowArn(const Aws::String& value) { m_flowArnHasBeenSet = true; m_flowArn = value; }

    /**
     * The Amazon Resource Name (ARN) of the flow.
     */
    inline void SetFlowArn(Aws::String&& value) { m_flowArnHasBeenSet = true; m_flowArn = std::move(value); }

    /**
     * The Amazon Resource Name (ARN) of the flow.
     */
    inline void SetFlowArn(const char* value) { m_flowArnHasBeenSet = true; m_flowArn.assign(value); }

    /**
     * The Amazon Resource Name (ARN) of the flow.
     */
    inline RemoveFlowMediaStreamRequest& WithFlowArn(const Aws::String& value) { SetFlowArn(value); return *this;}

    /**
     * The Amazon Resource Name (ARN) of the flow.
     */
    inline RemoveFlowMediaStreamRequest& WithFlowArn(Aws::String&& value) { SetFlowArn(std::move(value)); return *this;}

    /**
     * The Amazon Resource Name (ARN) of the flow.
     */
    inline RemoveFlowMediaStreamRequest& WithFlowArn(const char* value) { SetFlowArn(value); return *this;}


    /**
     * The name of the media stream that you want to remove.
     */
    inline const Aws::String& GetMediaStreamName() const{ return m_mediaStreamName; }

    /**
     * The name of the media stream that you want to remove.
     */
    inline bool MediaStreamNameHasBeenSet() const { return m_mediaStreamNameHasBeenSet; }

    /**
     * The name of the media stream that you want to remove.
     */
    inline void SetMediaStreamName(const Aws::String& value) { m_mediaStreamNameHasBeenSet = true; m_mediaStreamName = value; }

    /**
     * The name of the media stream that you want to remove.
     */
    inline void SetMediaStreamName(Aws::String&& value) { m_mediaStreamNameHasBeenSet = true; m_mediaStreamName = std::move(value); }

    /**
     * The name of the media stream that you want to remove.
     */
    inline void SetMediaStreamName(const char* value) { m_mediaStreamNameHasBeenSet = true; m_mediaStreamName.assign(value); }

    /**
     * The name of the media stream that you want to remove.
     */
    inline RemoveFlowMediaStreamRequest& WithMediaStreamName(const Aws::String& value) { SetMediaStreamName(value); return *this;}

    /**
     * The name of the media stream that you want to remove.
     */
    inline RemoveFlowMediaStreamRequest& WithMediaStreamName(Aws::String&& value) { SetMediaStreamName(std::move(value)); return *this;}

    /**
     * The name of the media stream that you want to remove.
     */
    inline RemoveFlowMediaStreamRequest& WithMediaStreamName(const char* value) { SetMediaStreamName(value); return *this;}

  private:

    Aws::String m_flowArn;
    bool m_flowArnHasBeenSet = false;

    Aws::String m_mediaStreamName;
    bool m_mediaStreamNameHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaConnect
} // namespace Aws
