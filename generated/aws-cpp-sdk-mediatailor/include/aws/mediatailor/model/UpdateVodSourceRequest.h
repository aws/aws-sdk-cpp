/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediatailor/MediaTailor_EXPORTS.h>
#include <aws/mediatailor/MediaTailorRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mediatailor/model/HttpPackageConfiguration.h>
#include <utility>

namespace Aws
{
namespace MediaTailor
{
namespace Model
{

  /**
   */
  class AWS_MEDIATAILOR_API UpdateVodSourceRequest : public MediaTailorRequest
  {
  public:
    UpdateVodSourceRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateVodSource"; }

    Aws::String SerializePayload() const override;


    /**
     * <p>An array of HTTP package configurations for the VOD source on this
     * account.</p>
     */
    inline const Aws::Vector<HttpPackageConfiguration>& GetHttpPackageConfigurations() const{ return m_httpPackageConfigurations; }

    /**
     * <p>An array of HTTP package configurations for the VOD source on this
     * account.</p>
     */
    inline bool HttpPackageConfigurationsHasBeenSet() const { return m_httpPackageConfigurationsHasBeenSet; }

    /**
     * <p>An array of HTTP package configurations for the VOD source on this
     * account.</p>
     */
    inline void SetHttpPackageConfigurations(const Aws::Vector<HttpPackageConfiguration>& value) { m_httpPackageConfigurationsHasBeenSet = true; m_httpPackageConfigurations = value; }

    /**
     * <p>An array of HTTP package configurations for the VOD source on this
     * account.</p>
     */
    inline void SetHttpPackageConfigurations(Aws::Vector<HttpPackageConfiguration>&& value) { m_httpPackageConfigurationsHasBeenSet = true; m_httpPackageConfigurations = std::move(value); }

    /**
     * <p>An array of HTTP package configurations for the VOD source on this
     * account.</p>
     */
    inline UpdateVodSourceRequest& WithHttpPackageConfigurations(const Aws::Vector<HttpPackageConfiguration>& value) { SetHttpPackageConfigurations(value); return *this;}

    /**
     * <p>An array of HTTP package configurations for the VOD source on this
     * account.</p>
     */
    inline UpdateVodSourceRequest& WithHttpPackageConfigurations(Aws::Vector<HttpPackageConfiguration>&& value) { SetHttpPackageConfigurations(std::move(value)); return *this;}

    /**
     * <p>An array of HTTP package configurations for the VOD source on this
     * account.</p>
     */
    inline UpdateVodSourceRequest& AddHttpPackageConfigurations(const HttpPackageConfiguration& value) { m_httpPackageConfigurationsHasBeenSet = true; m_httpPackageConfigurations.push_back(value); return *this; }

    /**
     * <p>An array of HTTP package configurations for the VOD source on this
     * account.</p>
     */
    inline UpdateVodSourceRequest& AddHttpPackageConfigurations(HttpPackageConfiguration&& value) { m_httpPackageConfigurationsHasBeenSet = true; m_httpPackageConfigurations.push_back(std::move(value)); return *this; }


    /**
     * <p>The identifier for the source location you are working on.</p>
     */
    inline const Aws::String& GetSourceLocationName() const{ return m_sourceLocationName; }

    /**
     * <p>The identifier for the source location you are working on.</p>
     */
    inline bool SourceLocationNameHasBeenSet() const { return m_sourceLocationNameHasBeenSet; }

    /**
     * <p>The identifier for the source location you are working on.</p>
     */
    inline void SetSourceLocationName(const Aws::String& value) { m_sourceLocationNameHasBeenSet = true; m_sourceLocationName = value; }

    /**
     * <p>The identifier for the source location you are working on.</p>
     */
    inline void SetSourceLocationName(Aws::String&& value) { m_sourceLocationNameHasBeenSet = true; m_sourceLocationName = std::move(value); }

    /**
     * <p>The identifier for the source location you are working on.</p>
     */
    inline void SetSourceLocationName(const char* value) { m_sourceLocationNameHasBeenSet = true; m_sourceLocationName.assign(value); }

    /**
     * <p>The identifier for the source location you are working on.</p>
     */
    inline UpdateVodSourceRequest& WithSourceLocationName(const Aws::String& value) { SetSourceLocationName(value); return *this;}

    /**
     * <p>The identifier for the source location you are working on.</p>
     */
    inline UpdateVodSourceRequest& WithSourceLocationName(Aws::String&& value) { SetSourceLocationName(std::move(value)); return *this;}

    /**
     * <p>The identifier for the source location you are working on.</p>
     */
    inline UpdateVodSourceRequest& WithSourceLocationName(const char* value) { SetSourceLocationName(value); return *this;}


    /**
     * <p>The identifier for the VOD source you are working on.</p>
     */
    inline const Aws::String& GetVodSourceName() const{ return m_vodSourceName; }

    /**
     * <p>The identifier for the VOD source you are working on.</p>
     */
    inline bool VodSourceNameHasBeenSet() const { return m_vodSourceNameHasBeenSet; }

    /**
     * <p>The identifier for the VOD source you are working on.</p>
     */
    inline void SetVodSourceName(const Aws::String& value) { m_vodSourceNameHasBeenSet = true; m_vodSourceName = value; }

    /**
     * <p>The identifier for the VOD source you are working on.</p>
     */
    inline void SetVodSourceName(Aws::String&& value) { m_vodSourceNameHasBeenSet = true; m_vodSourceName = std::move(value); }

    /**
     * <p>The identifier for the VOD source you are working on.</p>
     */
    inline void SetVodSourceName(const char* value) { m_vodSourceNameHasBeenSet = true; m_vodSourceName.assign(value); }

    /**
     * <p>The identifier for the VOD source you are working on.</p>
     */
    inline UpdateVodSourceRequest& WithVodSourceName(const Aws::String& value) { SetVodSourceName(value); return *this;}

    /**
     * <p>The identifier for the VOD source you are working on.</p>
     */
    inline UpdateVodSourceRequest& WithVodSourceName(Aws::String&& value) { SetVodSourceName(std::move(value)); return *this;}

    /**
     * <p>The identifier for the VOD source you are working on.</p>
     */
    inline UpdateVodSourceRequest& WithVodSourceName(const char* value) { SetVodSourceName(value); return *this;}

  private:

    Aws::Vector<HttpPackageConfiguration> m_httpPackageConfigurations;
    bool m_httpPackageConfigurationsHasBeenSet;

    Aws::String m_sourceLocationName;
    bool m_sourceLocationNameHasBeenSet;

    Aws::String m_vodSourceName;
    bool m_vodSourceNameHasBeenSet;
  };

} // namespace Model
} // namespace MediaTailor
} // namespace Aws
