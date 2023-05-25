/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/iot/IoTRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace IoT
{
namespace Model
{

  /**
   */
  class DeleteStreamRequest : public IoTRequest
  {
  public:
    AWS_IOT_API DeleteStreamRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteStream"; }

    AWS_IOT_API Aws::String SerializePayload() const override;


    /**
     * <p>The stream ID.</p>
     */
    inline const Aws::String& GetStreamId() const{ return m_streamId; }

    /**
     * <p>The stream ID.</p>
     */
    inline bool StreamIdHasBeenSet() const { return m_streamIdHasBeenSet; }

    /**
     * <p>The stream ID.</p>
     */
    inline void SetStreamId(const Aws::String& value) { m_streamIdHasBeenSet = true; m_streamId = value; }

    /**
     * <p>The stream ID.</p>
     */
    inline void SetStreamId(Aws::String&& value) { m_streamIdHasBeenSet = true; m_streamId = std::move(value); }

    /**
     * <p>The stream ID.</p>
     */
    inline void SetStreamId(const char* value) { m_streamIdHasBeenSet = true; m_streamId.assign(value); }

    /**
     * <p>The stream ID.</p>
     */
    inline DeleteStreamRequest& WithStreamId(const Aws::String& value) { SetStreamId(value); return *this;}

    /**
     * <p>The stream ID.</p>
     */
    inline DeleteStreamRequest& WithStreamId(Aws::String&& value) { SetStreamId(std::move(value)); return *this;}

    /**
     * <p>The stream ID.</p>
     */
    inline DeleteStreamRequest& WithStreamId(const char* value) { SetStreamId(value); return *this;}

  private:

    Aws::String m_streamId;
    bool m_streamIdHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
