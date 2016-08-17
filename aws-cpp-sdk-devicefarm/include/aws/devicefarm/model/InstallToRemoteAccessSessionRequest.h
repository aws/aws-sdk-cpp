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
#include <aws/devicefarm/DeviceFarm_EXPORTS.h>
#include <aws/devicefarm/DeviceFarmRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace DeviceFarm
{
namespace Model
{

  /**
   * <p>Represents the request to install an Android application (in .apk format) or
   * an iOS application (in .ipa format) as part of a remote access session.</p>
   */
  class AWS_DEVICEFARM_API InstallToRemoteAccessSessionRequest : public DeviceFarmRequest
  {
  public:
    InstallToRemoteAccessSessionRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    /**
     * <p>The Amazon Resource Name (ARN) of the remote access session about which you
     * are requesting information.</p>
     */
    inline const Aws::String& GetRemoteAccessSessionArn() const{ return m_remoteAccessSessionArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the remote access session about which you
     * are requesting information.</p>
     */
    inline void SetRemoteAccessSessionArn(const Aws::String& value) { m_remoteAccessSessionArnHasBeenSet = true; m_remoteAccessSessionArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the remote access session about which you
     * are requesting information.</p>
     */
    inline void SetRemoteAccessSessionArn(Aws::String&& value) { m_remoteAccessSessionArnHasBeenSet = true; m_remoteAccessSessionArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the remote access session about which you
     * are requesting information.</p>
     */
    inline void SetRemoteAccessSessionArn(const char* value) { m_remoteAccessSessionArnHasBeenSet = true; m_remoteAccessSessionArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the remote access session about which you
     * are requesting information.</p>
     */
    inline InstallToRemoteAccessSessionRequest& WithRemoteAccessSessionArn(const Aws::String& value) { SetRemoteAccessSessionArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the remote access session about which you
     * are requesting information.</p>
     */
    inline InstallToRemoteAccessSessionRequest& WithRemoteAccessSessionArn(Aws::String&& value) { SetRemoteAccessSessionArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the remote access session about which you
     * are requesting information.</p>
     */
    inline InstallToRemoteAccessSessionRequest& WithRemoteAccessSessionArn(const char* value) { SetRemoteAccessSessionArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the app about which you are requesting
     * information.</p>
     */
    inline const Aws::String& GetAppArn() const{ return m_appArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the app about which you are requesting
     * information.</p>
     */
    inline void SetAppArn(const Aws::String& value) { m_appArnHasBeenSet = true; m_appArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the app about which you are requesting
     * information.</p>
     */
    inline void SetAppArn(Aws::String&& value) { m_appArnHasBeenSet = true; m_appArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the app about which you are requesting
     * information.</p>
     */
    inline void SetAppArn(const char* value) { m_appArnHasBeenSet = true; m_appArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the app about which you are requesting
     * information.</p>
     */
    inline InstallToRemoteAccessSessionRequest& WithAppArn(const Aws::String& value) { SetAppArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the app about which you are requesting
     * information.</p>
     */
    inline InstallToRemoteAccessSessionRequest& WithAppArn(Aws::String&& value) { SetAppArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the app about which you are requesting
     * information.</p>
     */
    inline InstallToRemoteAccessSessionRequest& WithAppArn(const char* value) { SetAppArn(value); return *this;}

  private:
    Aws::String m_remoteAccessSessionArn;
    bool m_remoteAccessSessionArnHasBeenSet;
    Aws::String m_appArn;
    bool m_appArnHasBeenSet;
  };

} // namespace Model
} // namespace DeviceFarm
} // namespace Aws
