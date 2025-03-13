/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kinesisanalyticsv2/KinesisAnalyticsV2_EXPORTS.h>
#include <aws/kinesisanalyticsv2/KinesisAnalyticsV2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/kinesisanalyticsv2/model/UrlType.h>
#include <utility>

namespace Aws
{
namespace KinesisAnalyticsV2
{
namespace Model
{

  /**
   */
  class CreateApplicationPresignedUrlRequest : public KinesisAnalyticsV2Request
  {
  public:
    AWS_KINESISANALYTICSV2_API CreateApplicationPresignedUrlRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateApplicationPresignedUrl"; }

    AWS_KINESISANALYTICSV2_API Aws::String SerializePayload() const override;

    AWS_KINESISANALYTICSV2_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name of the application.</p>
     */
    inline const Aws::String& GetApplicationName() const { return m_applicationName; }
    inline bool ApplicationNameHasBeenSet() const { return m_applicationNameHasBeenSet; }
    template<typename ApplicationNameT = Aws::String>
    void SetApplicationName(ApplicationNameT&& value) { m_applicationNameHasBeenSet = true; m_applicationName = std::forward<ApplicationNameT>(value); }
    template<typename ApplicationNameT = Aws::String>
    CreateApplicationPresignedUrlRequest& WithApplicationName(ApplicationNameT&& value) { SetApplicationName(std::forward<ApplicationNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of the extension for which to create and return a URL. Currently,
     * the only valid extension URL type is <code>FLINK_DASHBOARD_URL</code>. </p>
     */
    inline UrlType GetUrlType() const { return m_urlType; }
    inline bool UrlTypeHasBeenSet() const { return m_urlTypeHasBeenSet; }
    inline void SetUrlType(UrlType value) { m_urlTypeHasBeenSet = true; m_urlType = value; }
    inline CreateApplicationPresignedUrlRequest& WithUrlType(UrlType value) { SetUrlType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The duration in seconds for which the returned URL will be valid.</p>
     */
    inline long long GetSessionExpirationDurationInSeconds() const { return m_sessionExpirationDurationInSeconds; }
    inline bool SessionExpirationDurationInSecondsHasBeenSet() const { return m_sessionExpirationDurationInSecondsHasBeenSet; }
    inline void SetSessionExpirationDurationInSeconds(long long value) { m_sessionExpirationDurationInSecondsHasBeenSet = true; m_sessionExpirationDurationInSeconds = value; }
    inline CreateApplicationPresignedUrlRequest& WithSessionExpirationDurationInSeconds(long long value) { SetSessionExpirationDurationInSeconds(value); return *this;}
    ///@}
  private:

    Aws::String m_applicationName;
    bool m_applicationNameHasBeenSet = false;

    UrlType m_urlType{UrlType::NOT_SET};
    bool m_urlTypeHasBeenSet = false;

    long long m_sessionExpirationDurationInSeconds{0};
    bool m_sessionExpirationDurationInSecondsHasBeenSet = false;
  };

} // namespace Model
} // namespace KinesisAnalyticsV2
} // namespace Aws
