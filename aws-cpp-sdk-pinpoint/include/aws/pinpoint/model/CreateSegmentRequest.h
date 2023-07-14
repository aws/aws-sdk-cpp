﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint/Pinpoint_EXPORTS.h>
#include <aws/pinpoint/PinpointRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/pinpoint/model/WriteSegmentRequest.h>
#include <utility>

namespace Aws
{
namespace Pinpoint
{
namespace Model
{

  /**
   */
  class AWS_PINPOINT_API CreateSegmentRequest : public PinpointRequest
  {
  public:
    CreateSegmentRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateSegment"; }

    Aws::String SerializePayload() const override;


    /**
     * <p>The unique identifier for the application. This identifier is displayed as
     * the <b>Project ID</b> on the Amazon Pinpoint console.</p>
     */
    inline const Aws::String& GetApplicationId() const{ return m_applicationId; }

    /**
     * <p>The unique identifier for the application. This identifier is displayed as
     * the <b>Project ID</b> on the Amazon Pinpoint console.</p>
     */
    inline bool ApplicationIdHasBeenSet() const { return m_applicationIdHasBeenSet; }

    /**
     * <p>The unique identifier for the application. This identifier is displayed as
     * the <b>Project ID</b> on the Amazon Pinpoint console.</p>
     */
    inline void SetApplicationId(const Aws::String& value) { m_applicationIdHasBeenSet = true; m_applicationId = value; }

    /**
     * <p>The unique identifier for the application. This identifier is displayed as
     * the <b>Project ID</b> on the Amazon Pinpoint console.</p>
     */
    inline void SetApplicationId(Aws::String&& value) { m_applicationIdHasBeenSet = true; m_applicationId = std::move(value); }

    /**
     * <p>The unique identifier for the application. This identifier is displayed as
     * the <b>Project ID</b> on the Amazon Pinpoint console.</p>
     */
    inline void SetApplicationId(const char* value) { m_applicationIdHasBeenSet = true; m_applicationId.assign(value); }

    /**
     * <p>The unique identifier for the application. This identifier is displayed as
     * the <b>Project ID</b> on the Amazon Pinpoint console.</p>
     */
    inline CreateSegmentRequest& WithApplicationId(const Aws::String& value) { SetApplicationId(value); return *this;}

    /**
     * <p>The unique identifier for the application. This identifier is displayed as
     * the <b>Project ID</b> on the Amazon Pinpoint console.</p>
     */
    inline CreateSegmentRequest& WithApplicationId(Aws::String&& value) { SetApplicationId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier for the application. This identifier is displayed as
     * the <b>Project ID</b> on the Amazon Pinpoint console.</p>
     */
    inline CreateSegmentRequest& WithApplicationId(const char* value) { SetApplicationId(value); return *this;}


    
    inline const WriteSegmentRequest& GetWriteSegmentRequest() const{ return m_writeSegmentRequest; }

    
    inline bool WriteSegmentRequestHasBeenSet() const { return m_writeSegmentRequestHasBeenSet; }

    
    inline void SetWriteSegmentRequest(const WriteSegmentRequest& value) { m_writeSegmentRequestHasBeenSet = true; m_writeSegmentRequest = value; }

    
    inline void SetWriteSegmentRequest(WriteSegmentRequest&& value) { m_writeSegmentRequestHasBeenSet = true; m_writeSegmentRequest = std::move(value); }

    
    inline CreateSegmentRequest& WithWriteSegmentRequest(const WriteSegmentRequest& value) { SetWriteSegmentRequest(value); return *this;}

    
    inline CreateSegmentRequest& WithWriteSegmentRequest(WriteSegmentRequest&& value) { SetWriteSegmentRequest(std::move(value)); return *this;}

  private:

    Aws::String m_applicationId;
    bool m_applicationIdHasBeenSet;

    WriteSegmentRequest m_writeSegmentRequest;
    bool m_writeSegmentRequestHasBeenSet;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
