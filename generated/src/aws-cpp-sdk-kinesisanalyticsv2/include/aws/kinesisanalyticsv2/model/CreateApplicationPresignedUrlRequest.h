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
    AWS_KINESISANALYTICSV2_API CreateApplicationPresignedUrlRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateApplicationPresignedUrl"; }

    AWS_KINESISANALYTICSV2_API Aws::String SerializePayload() const override;

    AWS_KINESISANALYTICSV2_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the application.</p>
     */
    inline const Aws::String& GetApplicationName() const{ return m_applicationName; }

    /**
     * <p>The name of the application.</p>
     */
    inline bool ApplicationNameHasBeenSet() const { return m_applicationNameHasBeenSet; }

    /**
     * <p>The name of the application.</p>
     */
    inline void SetApplicationName(const Aws::String& value) { m_applicationNameHasBeenSet = true; m_applicationName = value; }

    /**
     * <p>The name of the application.</p>
     */
    inline void SetApplicationName(Aws::String&& value) { m_applicationNameHasBeenSet = true; m_applicationName = std::move(value); }

    /**
     * <p>The name of the application.</p>
     */
    inline void SetApplicationName(const char* value) { m_applicationNameHasBeenSet = true; m_applicationName.assign(value); }

    /**
     * <p>The name of the application.</p>
     */
    inline CreateApplicationPresignedUrlRequest& WithApplicationName(const Aws::String& value) { SetApplicationName(value); return *this;}

    /**
     * <p>The name of the application.</p>
     */
    inline CreateApplicationPresignedUrlRequest& WithApplicationName(Aws::String&& value) { SetApplicationName(std::move(value)); return *this;}

    /**
     * <p>The name of the application.</p>
     */
    inline CreateApplicationPresignedUrlRequest& WithApplicationName(const char* value) { SetApplicationName(value); return *this;}


    /**
     * <p>The type of the extension for which to create and return a URL. Currently,
     * the only valid extension URL type is <code>FLINK_DASHBOARD_URL</code>. </p>
     */
    inline const UrlType& GetUrlType() const{ return m_urlType; }

    /**
     * <p>The type of the extension for which to create and return a URL. Currently,
     * the only valid extension URL type is <code>FLINK_DASHBOARD_URL</code>. </p>
     */
    inline bool UrlTypeHasBeenSet() const { return m_urlTypeHasBeenSet; }

    /**
     * <p>The type of the extension for which to create and return a URL. Currently,
     * the only valid extension URL type is <code>FLINK_DASHBOARD_URL</code>. </p>
     */
    inline void SetUrlType(const UrlType& value) { m_urlTypeHasBeenSet = true; m_urlType = value; }

    /**
     * <p>The type of the extension for which to create and return a URL. Currently,
     * the only valid extension URL type is <code>FLINK_DASHBOARD_URL</code>. </p>
     */
    inline void SetUrlType(UrlType&& value) { m_urlTypeHasBeenSet = true; m_urlType = std::move(value); }

    /**
     * <p>The type of the extension for which to create and return a URL. Currently,
     * the only valid extension URL type is <code>FLINK_DASHBOARD_URL</code>. </p>
     */
    inline CreateApplicationPresignedUrlRequest& WithUrlType(const UrlType& value) { SetUrlType(value); return *this;}

    /**
     * <p>The type of the extension for which to create and return a URL. Currently,
     * the only valid extension URL type is <code>FLINK_DASHBOARD_URL</code>. </p>
     */
    inline CreateApplicationPresignedUrlRequest& WithUrlType(UrlType&& value) { SetUrlType(std::move(value)); return *this;}


    /**
     * <p>The duration in seconds for which the returned URL will be valid.</p>
     */
    inline long long GetSessionExpirationDurationInSeconds() const{ return m_sessionExpirationDurationInSeconds; }

    /**
     * <p>The duration in seconds for which the returned URL will be valid.</p>
     */
    inline bool SessionExpirationDurationInSecondsHasBeenSet() const { return m_sessionExpirationDurationInSecondsHasBeenSet; }

    /**
     * <p>The duration in seconds for which the returned URL will be valid.</p>
     */
    inline void SetSessionExpirationDurationInSeconds(long long value) { m_sessionExpirationDurationInSecondsHasBeenSet = true; m_sessionExpirationDurationInSeconds = value; }

    /**
     * <p>The duration in seconds for which the returned URL will be valid.</p>
     */
    inline CreateApplicationPresignedUrlRequest& WithSessionExpirationDurationInSeconds(long long value) { SetSessionExpirationDurationInSeconds(value); return *this;}

  private:

    Aws::String m_applicationName;
    bool m_applicationNameHasBeenSet = false;

    UrlType m_urlType;
    bool m_urlTypeHasBeenSet = false;

    long long m_sessionExpirationDurationInSeconds;
    bool m_sessionExpirationDurationInSecondsHasBeenSet = false;
  };

} // namespace Model
} // namespace KinesisAnalyticsV2
} // namespace Aws
