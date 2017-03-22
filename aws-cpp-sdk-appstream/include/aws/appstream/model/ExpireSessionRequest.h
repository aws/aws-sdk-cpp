/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/appstream/AppStream_EXPORTS.h>
#include <aws/appstream/AppStreamRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace AppStream
{
namespace Model
{

  /**
   */
  class AWS_APPSTREAM_API ExpireSessionRequest : public AppStreamRequest
  {
  public:
    ExpireSessionRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The unique identifier of the streaming session to be stopped.</p>
     */
    inline const Aws::String& GetSessionId() const{ return m_sessionId; }

    /**
     * <p>The unique identifier of the streaming session to be stopped.</p>
     */
    inline void SetSessionId(const Aws::String& value) { m_sessionIdHasBeenSet = true; m_sessionId = value; }

    /**
     * <p>The unique identifier of the streaming session to be stopped.</p>
     */
    inline void SetSessionId(Aws::String&& value) { m_sessionIdHasBeenSet = true; m_sessionId = value; }

    /**
     * <p>The unique identifier of the streaming session to be stopped.</p>
     */
    inline void SetSessionId(const char* value) { m_sessionIdHasBeenSet = true; m_sessionId.assign(value); }

    /**
     * <p>The unique identifier of the streaming session to be stopped.</p>
     */
    inline ExpireSessionRequest& WithSessionId(const Aws::String& value) { SetSessionId(value); return *this;}

    /**
     * <p>The unique identifier of the streaming session to be stopped.</p>
     */
    inline ExpireSessionRequest& WithSessionId(Aws::String&& value) { SetSessionId(value); return *this;}

    /**
     * <p>The unique identifier of the streaming session to be stopped.</p>
     */
    inline ExpireSessionRequest& WithSessionId(const char* value) { SetSessionId(value); return *this;}

  private:
    Aws::String m_sessionId;
    bool m_sessionIdHasBeenSet;
  };

} // namespace Model
} // namespace AppStream
} // namespace Aws
