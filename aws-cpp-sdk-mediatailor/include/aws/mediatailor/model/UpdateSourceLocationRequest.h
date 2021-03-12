/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediatailor/MediaTailor_EXPORTS.h>
#include <aws/mediatailor/MediaTailorRequest.h>
#include <aws/mediatailor/model/AccessConfiguration.h>
#include <aws/mediatailor/model/DefaultSegmentDeliveryConfiguration.h>
#include <aws/mediatailor/model/HttpConfiguration.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace MediaTailor
{
namespace Model
{

  /**
   */
  class AWS_MEDIATAILOR_API UpdateSourceLocationRequest : public MediaTailorRequest
  {
  public:
    UpdateSourceLocationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateSourceLocation"; }

    Aws::String SerializePayload() const override;


    /**
     * <p>Access configuration parameters. Configures the type of authentication used
     * to access content from your source location.</p>
     */
    inline const AccessConfiguration& GetAccessConfiguration() const{ return m_accessConfiguration; }

    /**
     * <p>Access configuration parameters. Configures the type of authentication used
     * to access content from your source location.</p>
     */
    inline bool AccessConfigurationHasBeenSet() const { return m_accessConfigurationHasBeenSet; }

    /**
     * <p>Access configuration parameters. Configures the type of authentication used
     * to access content from your source location.</p>
     */
    inline void SetAccessConfiguration(const AccessConfiguration& value) { m_accessConfigurationHasBeenSet = true; m_accessConfiguration = value; }

    /**
     * <p>Access configuration parameters. Configures the type of authentication used
     * to access content from your source location.</p>
     */
    inline void SetAccessConfiguration(AccessConfiguration&& value) { m_accessConfigurationHasBeenSet = true; m_accessConfiguration = std::move(value); }

    /**
     * <p>Access configuration parameters. Configures the type of authentication used
     * to access content from your source location.</p>
     */
    inline UpdateSourceLocationRequest& WithAccessConfiguration(const AccessConfiguration& value) { SetAccessConfiguration(value); return *this;}

    /**
     * <p>Access configuration parameters. Configures the type of authentication used
     * to access content from your source location.</p>
     */
    inline UpdateSourceLocationRequest& WithAccessConfiguration(AccessConfiguration&& value) { SetAccessConfiguration(std::move(value)); return *this;}


    /**
     * <p>The optional configuration for the host server that serves segments.</p>
     */
    inline const DefaultSegmentDeliveryConfiguration& GetDefaultSegmentDeliveryConfiguration() const{ return m_defaultSegmentDeliveryConfiguration; }

    /**
     * <p>The optional configuration for the host server that serves segments.</p>
     */
    inline bool DefaultSegmentDeliveryConfigurationHasBeenSet() const { return m_defaultSegmentDeliveryConfigurationHasBeenSet; }

    /**
     * <p>The optional configuration for the host server that serves segments.</p>
     */
    inline void SetDefaultSegmentDeliveryConfiguration(const DefaultSegmentDeliveryConfiguration& value) { m_defaultSegmentDeliveryConfigurationHasBeenSet = true; m_defaultSegmentDeliveryConfiguration = value; }

    /**
     * <p>The optional configuration for the host server that serves segments.</p>
     */
    inline void SetDefaultSegmentDeliveryConfiguration(DefaultSegmentDeliveryConfiguration&& value) { m_defaultSegmentDeliveryConfigurationHasBeenSet = true; m_defaultSegmentDeliveryConfiguration = std::move(value); }

    /**
     * <p>The optional configuration for the host server that serves segments.</p>
     */
    inline UpdateSourceLocationRequest& WithDefaultSegmentDeliveryConfiguration(const DefaultSegmentDeliveryConfiguration& value) { SetDefaultSegmentDeliveryConfiguration(value); return *this;}

    /**
     * <p>The optional configuration for the host server that serves segments.</p>
     */
    inline UpdateSourceLocationRequest& WithDefaultSegmentDeliveryConfiguration(DefaultSegmentDeliveryConfiguration&& value) { SetDefaultSegmentDeliveryConfiguration(std::move(value)); return *this;}


    /**
     * <p>The HTTP configuration for the source location.</p>
     */
    inline const HttpConfiguration& GetHttpConfiguration() const{ return m_httpConfiguration; }

    /**
     * <p>The HTTP configuration for the source location.</p>
     */
    inline bool HttpConfigurationHasBeenSet() const { return m_httpConfigurationHasBeenSet; }

    /**
     * <p>The HTTP configuration for the source location.</p>
     */
    inline void SetHttpConfiguration(const HttpConfiguration& value) { m_httpConfigurationHasBeenSet = true; m_httpConfiguration = value; }

    /**
     * <p>The HTTP configuration for the source location.</p>
     */
    inline void SetHttpConfiguration(HttpConfiguration&& value) { m_httpConfigurationHasBeenSet = true; m_httpConfiguration = std::move(value); }

    /**
     * <p>The HTTP configuration for the source location.</p>
     */
    inline UpdateSourceLocationRequest& WithHttpConfiguration(const HttpConfiguration& value) { SetHttpConfiguration(value); return *this;}

    /**
     * <p>The HTTP configuration for the source location.</p>
     */
    inline UpdateSourceLocationRequest& WithHttpConfiguration(HttpConfiguration&& value) { SetHttpConfiguration(std::move(value)); return *this;}


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
    inline UpdateSourceLocationRequest& WithSourceLocationName(const Aws::String& value) { SetSourceLocationName(value); return *this;}

    /**
     * <p>The identifier for the source location you are working on.</p>
     */
    inline UpdateSourceLocationRequest& WithSourceLocationName(Aws::String&& value) { SetSourceLocationName(std::move(value)); return *this;}

    /**
     * <p>The identifier for the source location you are working on.</p>
     */
    inline UpdateSourceLocationRequest& WithSourceLocationName(const char* value) { SetSourceLocationName(value); return *this;}

  private:

    AccessConfiguration m_accessConfiguration;
    bool m_accessConfigurationHasBeenSet;

    DefaultSegmentDeliveryConfiguration m_defaultSegmentDeliveryConfiguration;
    bool m_defaultSegmentDeliveryConfigurationHasBeenSet;

    HttpConfiguration m_httpConfiguration;
    bool m_httpConfigurationHasBeenSet;

    Aws::String m_sourceLocationName;
    bool m_sourceLocationNameHasBeenSet;
  };

} // namespace Model
} // namespace MediaTailor
} // namespace Aws
