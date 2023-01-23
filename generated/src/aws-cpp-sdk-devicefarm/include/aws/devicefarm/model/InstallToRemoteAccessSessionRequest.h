/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/devicefarm/DeviceFarm_EXPORTS.h>
#include <aws/devicefarm/DeviceFarmRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace DeviceFarm
{
namespace Model
{

  /**
   * <p>Represents the request to install an Android application (in .apk format) or
   * an iOS application (in .ipa format) as part of a remote access
   * session.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/InstallToRemoteAccessSessionRequest">AWS
   * API Reference</a></p>
   */
  class InstallToRemoteAccessSessionRequest : public DeviceFarmRequest
  {
  public:
    AWS_DEVICEFARM_API InstallToRemoteAccessSessionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "InstallToRemoteAccessSession"; }

    AWS_DEVICEFARM_API Aws::String SerializePayload() const override;

    AWS_DEVICEFARM_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The Amazon Resource Name (ARN) of the remote access session about which you
     * are requesting information.</p>
     */
    inline const Aws::String& GetRemoteAccessSessionArn() const{ return m_remoteAccessSessionArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the remote access session about which you
     * are requesting information.</p>
     */
    inline bool RemoteAccessSessionArnHasBeenSet() const { return m_remoteAccessSessionArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the remote access session about which you
     * are requesting information.</p>
     */
    inline void SetRemoteAccessSessionArn(const Aws::String& value) { m_remoteAccessSessionArnHasBeenSet = true; m_remoteAccessSessionArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the remote access session about which you
     * are requesting information.</p>
     */
    inline void SetRemoteAccessSessionArn(Aws::String&& value) { m_remoteAccessSessionArnHasBeenSet = true; m_remoteAccessSessionArn = std::move(value); }

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
    inline InstallToRemoteAccessSessionRequest& WithRemoteAccessSessionArn(Aws::String&& value) { SetRemoteAccessSessionArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the remote access session about which you
     * are requesting information.</p>
     */
    inline InstallToRemoteAccessSessionRequest& WithRemoteAccessSessionArn(const char* value) { SetRemoteAccessSessionArn(value); return *this;}


    /**
     * <p>The ARN of the app about which you are requesting information.</p>
     */
    inline const Aws::String& GetAppArn() const{ return m_appArn; }

    /**
     * <p>The ARN of the app about which you are requesting information.</p>
     */
    inline bool AppArnHasBeenSet() const { return m_appArnHasBeenSet; }

    /**
     * <p>The ARN of the app about which you are requesting information.</p>
     */
    inline void SetAppArn(const Aws::String& value) { m_appArnHasBeenSet = true; m_appArn = value; }

    /**
     * <p>The ARN of the app about which you are requesting information.</p>
     */
    inline void SetAppArn(Aws::String&& value) { m_appArnHasBeenSet = true; m_appArn = std::move(value); }

    /**
     * <p>The ARN of the app about which you are requesting information.</p>
     */
    inline void SetAppArn(const char* value) { m_appArnHasBeenSet = true; m_appArn.assign(value); }

    /**
     * <p>The ARN of the app about which you are requesting information.</p>
     */
    inline InstallToRemoteAccessSessionRequest& WithAppArn(const Aws::String& value) { SetAppArn(value); return *this;}

    /**
     * <p>The ARN of the app about which you are requesting information.</p>
     */
    inline InstallToRemoteAccessSessionRequest& WithAppArn(Aws::String&& value) { SetAppArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the app about which you are requesting information.</p>
     */
    inline InstallToRemoteAccessSessionRequest& WithAppArn(const char* value) { SetAppArn(value); return *this;}

  private:

    Aws::String m_remoteAccessSessionArn;
    bool m_remoteAccessSessionArnHasBeenSet = false;

    Aws::String m_appArn;
    bool m_appArnHasBeenSet = false;
  };

} // namespace Model
} // namespace DeviceFarm
} // namespace Aws
