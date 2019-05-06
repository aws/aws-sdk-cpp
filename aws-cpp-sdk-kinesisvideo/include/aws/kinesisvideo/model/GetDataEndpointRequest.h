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
  class AWS_KINESISVIDEO_API GetDataEndpointRequest : public KinesisVideoRequest
  {
  public:
    GetDataEndpointRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetDataEndpoint"; }

    Aws::String SerializePayload() const override;


    /**
     * <p>The name of the stream that you want to get the endpoint for. You must
     * specify either this parameter or a <code>StreamARN</code> in the request.</p>
     */
    inline const Aws::String& GetStreamName() const{ return m_streamName; }

    /**
     * <p>The name of the stream that you want to get the endpoint for. You must
     * specify either this parameter or a <code>StreamARN</code> in the request.</p>
     */
    inline bool StreamNameHasBeenSet() const { return m_streamNameHasBeenSet; }

    /**
     * <p>The name of the stream that you want to get the endpoint for. You must
     * specify either this parameter or a <code>StreamARN</code> in the request.</p>
     */
    inline void SetStreamName(const Aws::String& value) { m_streamNameHasBeenSet = true; m_streamName = value; }

    /**
     * <p>The name of the stream that you want to get the endpoint for. You must
     * specify either this parameter or a <code>StreamARN</code> in the request.</p>
     */
    inline void SetStreamName(Aws::String&& value) { m_streamNameHasBeenSet = true; m_streamName = std::move(value); }

    /**
     * <p>The name of the stream that you want to get the endpoint for. You must
     * specify either this parameter or a <code>StreamARN</code> in the request.</p>
     */
    inline void SetStreamName(const char* value) { m_streamNameHasBeenSet = true; m_streamName.assign(value); }

    /**
     * <p>The name of the stream that you want to get the endpoint for. You must
     * specify either this parameter or a <code>StreamARN</code> in the request.</p>
     */
    inline GetDataEndpointRequest& WithStreamName(const Aws::String& value) { SetStreamName(value); return *this;}

    /**
     * <p>The name of the stream that you want to get the endpoint for. You must
     * specify either this parameter or a <code>StreamARN</code> in the request.</p>
     */
    inline GetDataEndpointRequest& WithStreamName(Aws::String&& value) { SetStreamName(std::move(value)); return *this;}

    /**
     * <p>The name of the stream that you want to get the endpoint for. You must
     * specify either this parameter or a <code>StreamARN</code> in the request.</p>
     */
    inline GetDataEndpointRequest& WithStreamName(const char* value) { SetStreamName(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the stream that you want to get the
     * endpoint for. You must specify either this parameter or a
     * <code>StreamName</code> in the request. </p>
     */
    inline const Aws::String& GetStreamARN() const{ return m_streamARN; }

    /**
     * <p>The Amazon Resource Name (ARN) of the stream that you want to get the
     * endpoint for. You must specify either this parameter or a
     * <code>StreamName</code> in the request. </p>
     */
    inline bool StreamARNHasBeenSet() const { return m_streamARNHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the stream that you want to get the
     * endpoint for. You must specify either this parameter or a
     * <code>StreamName</code> in the request. </p>
     */
    inline void SetStreamARN(const Aws::String& value) { m_streamARNHasBeenSet = true; m_streamARN = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the stream that you want to get the
     * endpoint for. You must specify either this parameter or a
     * <code>StreamName</code> in the request. </p>
     */
    inline void SetStreamARN(Aws::String&& value) { m_streamARNHasBeenSet = true; m_streamARN = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the stream that you want to get the
     * endpoint for. You must specify either this parameter or a
     * <code>StreamName</code> in the request. </p>
     */
    inline void SetStreamARN(const char* value) { m_streamARNHasBeenSet = true; m_streamARN.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the stream that you want to get the
     * endpoint for. You must specify either this parameter or a
     * <code>StreamName</code> in the request. </p>
     */
    inline GetDataEndpointRequest& WithStreamARN(const Aws::String& value) { SetStreamARN(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the stream that you want to get the
     * endpoint for. You must specify either this parameter or a
     * <code>StreamName</code> in the request. </p>
     */
    inline GetDataEndpointRequest& WithStreamARN(Aws::String&& value) { SetStreamARN(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the stream that you want to get the
     * endpoint for. You must specify either this parameter or a
     * <code>StreamName</code> in the request. </p>
     */
    inline GetDataEndpointRequest& WithStreamARN(const char* value) { SetStreamARN(value); return *this;}


    /**
     * <p>The name of the API action for which to get an endpoint.</p>
     */
    inline const APIName& GetAPIName() const{ return m_aPIName; }

    /**
     * <p>The name of the API action for which to get an endpoint.</p>
     */
    inline bool APINameHasBeenSet() const { return m_aPINameHasBeenSet; }

    /**
     * <p>The name of the API action for which to get an endpoint.</p>
     */
    inline void SetAPIName(const APIName& value) { m_aPINameHasBeenSet = true; m_aPIName = value; }

    /**
     * <p>The name of the API action for which to get an endpoint.</p>
     */
    inline void SetAPIName(APIName&& value) { m_aPINameHasBeenSet = true; m_aPIName = std::move(value); }

    /**
     * <p>The name of the API action for which to get an endpoint.</p>
     */
    inline GetDataEndpointRequest& WithAPIName(const APIName& value) { SetAPIName(value); return *this;}

    /**
     * <p>The name of the API action for which to get an endpoint.</p>
     */
    inline GetDataEndpointRequest& WithAPIName(APIName&& value) { SetAPIName(std::move(value)); return *this;}

  private:

    Aws::String m_streamName;
    bool m_streamNameHasBeenSet;

    Aws::String m_streamARN;
    bool m_streamARNHasBeenSet;

    APIName m_aPIName;
    bool m_aPINameHasBeenSet;
  };

} // namespace Model
} // namespace KinesisVideo
} // namespace Aws
