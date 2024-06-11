/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kinesisvideo/KinesisVideo_EXPORTS.h>
#include <aws/kinesisvideo/KinesisVideoRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/kinesisvideo/model/APIName.h>
#include <utility>

namespace Aws
{
namespace KinesisVideo
{
namespace Model
{

  /**
   */
  class GetDataEndpointRequest : public KinesisVideoRequest
  {
  public:
    AWS_KINESISVIDEO_API GetDataEndpointRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetDataEndpoint"; }

    AWS_KINESISVIDEO_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The name of the stream that you want to get the endpoint for. You must
     * specify either this parameter or a <code>StreamARN</code> in the request.</p>
     */
    inline const Aws::String& GetStreamName() const{ return m_streamName; }
    inline bool StreamNameHasBeenSet() const { return m_streamNameHasBeenSet; }
    inline void SetStreamName(const Aws::String& value) { m_streamNameHasBeenSet = true; m_streamName = value; }
    inline void SetStreamName(Aws::String&& value) { m_streamNameHasBeenSet = true; m_streamName = std::move(value); }
    inline void SetStreamName(const char* value) { m_streamNameHasBeenSet = true; m_streamName.assign(value); }
    inline GetDataEndpointRequest& WithStreamName(const Aws::String& value) { SetStreamName(value); return *this;}
    inline GetDataEndpointRequest& WithStreamName(Aws::String&& value) { SetStreamName(std::move(value)); return *this;}
    inline GetDataEndpointRequest& WithStreamName(const char* value) { SetStreamName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the stream that you want to get the
     * endpoint for. You must specify either this parameter or a
     * <code>StreamName</code> in the request. </p>
     */
    inline const Aws::String& GetStreamARN() const{ return m_streamARN; }
    inline bool StreamARNHasBeenSet() const { return m_streamARNHasBeenSet; }
    inline void SetStreamARN(const Aws::String& value) { m_streamARNHasBeenSet = true; m_streamARN = value; }
    inline void SetStreamARN(Aws::String&& value) { m_streamARNHasBeenSet = true; m_streamARN = std::move(value); }
    inline void SetStreamARN(const char* value) { m_streamARNHasBeenSet = true; m_streamARN.assign(value); }
    inline GetDataEndpointRequest& WithStreamARN(const Aws::String& value) { SetStreamARN(value); return *this;}
    inline GetDataEndpointRequest& WithStreamARN(Aws::String&& value) { SetStreamARN(std::move(value)); return *this;}
    inline GetDataEndpointRequest& WithStreamARN(const char* value) { SetStreamARN(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the API action for which to get an endpoint.</p>
     */
    inline const APIName& GetAPIName() const{ return m_aPIName; }
    inline bool APINameHasBeenSet() const { return m_aPINameHasBeenSet; }
    inline void SetAPIName(const APIName& value) { m_aPINameHasBeenSet = true; m_aPIName = value; }
    inline void SetAPIName(APIName&& value) { m_aPINameHasBeenSet = true; m_aPIName = std::move(value); }
    inline GetDataEndpointRequest& WithAPIName(const APIName& value) { SetAPIName(value); return *this;}
    inline GetDataEndpointRequest& WithAPIName(APIName&& value) { SetAPIName(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_streamName;
    bool m_streamNameHasBeenSet = false;

    Aws::String m_streamARN;
    bool m_streamARNHasBeenSet = false;

    APIName m_aPIName;
    bool m_aPINameHasBeenSet = false;
  };

} // namespace Model
} // namespace KinesisVideo
} // namespace Aws
