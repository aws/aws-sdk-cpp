/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/email/SES_EXPORTS.h>
#include <aws/email/SESRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/email/model/TrackingOptions.h>
#include <utility>

namespace Aws
{
namespace SES
{
namespace Model
{

  /**
   * <p>Represents a request to create an open and click tracking option object in a
   * configuration set. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/CreateConfigurationSetTrackingOptionsRequest">AWS
   * API Reference</a></p>
   */
  class CreateConfigurationSetTrackingOptionsRequest : public SESRequest
  {
  public:
    AWS_SES_API CreateConfigurationSetTrackingOptionsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateConfigurationSetTrackingOptions"; }

    AWS_SES_API Aws::String SerializePayload() const override;

  protected:
    AWS_SES_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>The name of the configuration set that the tracking options should be
     * associated with.</p>
     */
    inline const Aws::String& GetConfigurationSetName() const { return m_configurationSetName; }
    inline bool ConfigurationSetNameHasBeenSet() const { return m_configurationSetNameHasBeenSet; }
    template<typename ConfigurationSetNameT = Aws::String>
    void SetConfigurationSetName(ConfigurationSetNameT&& value) { m_configurationSetNameHasBeenSet = true; m_configurationSetName = std::forward<ConfigurationSetNameT>(value); }
    template<typename ConfigurationSetNameT = Aws::String>
    CreateConfigurationSetTrackingOptionsRequest& WithConfigurationSetName(ConfigurationSetNameT&& value) { SetConfigurationSetName(std::forward<ConfigurationSetNameT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const TrackingOptions& GetTrackingOptions() const { return m_trackingOptions; }
    inline bool TrackingOptionsHasBeenSet() const { return m_trackingOptionsHasBeenSet; }
    template<typename TrackingOptionsT = TrackingOptions>
    void SetTrackingOptions(TrackingOptionsT&& value) { m_trackingOptionsHasBeenSet = true; m_trackingOptions = std::forward<TrackingOptionsT>(value); }
    template<typename TrackingOptionsT = TrackingOptions>
    CreateConfigurationSetTrackingOptionsRequest& WithTrackingOptions(TrackingOptionsT&& value) { SetTrackingOptions(std::forward<TrackingOptionsT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_configurationSetName;
    bool m_configurationSetNameHasBeenSet = false;

    TrackingOptions m_trackingOptions;
    bool m_trackingOptionsHasBeenSet = false;
  };

} // namespace Model
} // namespace SES
} // namespace Aws
