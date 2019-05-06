/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
  class AWS_SES_API CreateConfigurationSetTrackingOptionsRequest : public SESRequest
  {
  public:
    CreateConfigurationSetTrackingOptionsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateConfigurationSetTrackingOptions"; }

    Aws::String SerializePayload() const override;

  protected:
    void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The name of the configuration set that the tracking options should be
     * associated with.</p>
     */
    inline const Aws::String& GetConfigurationSetName() const{ return m_configurationSetName; }

    /**
     * <p>The name of the configuration set that the tracking options should be
     * associated with.</p>
     */
    inline bool ConfigurationSetNameHasBeenSet() const { return m_configurationSetNameHasBeenSet; }

    /**
     * <p>The name of the configuration set that the tracking options should be
     * associated with.</p>
     */
    inline void SetConfigurationSetName(const Aws::String& value) { m_configurationSetNameHasBeenSet = true; m_configurationSetName = value; }

    /**
     * <p>The name of the configuration set that the tracking options should be
     * associated with.</p>
     */
    inline void SetConfigurationSetName(Aws::String&& value) { m_configurationSetNameHasBeenSet = true; m_configurationSetName = std::move(value); }

    /**
     * <p>The name of the configuration set that the tracking options should be
     * associated with.</p>
     */
    inline void SetConfigurationSetName(const char* value) { m_configurationSetNameHasBeenSet = true; m_configurationSetName.assign(value); }

    /**
     * <p>The name of the configuration set that the tracking options should be
     * associated with.</p>
     */
    inline CreateConfigurationSetTrackingOptionsRequest& WithConfigurationSetName(const Aws::String& value) { SetConfigurationSetName(value); return *this;}

    /**
     * <p>The name of the configuration set that the tracking options should be
     * associated with.</p>
     */
    inline CreateConfigurationSetTrackingOptionsRequest& WithConfigurationSetName(Aws::String&& value) { SetConfigurationSetName(std::move(value)); return *this;}

    /**
     * <p>The name of the configuration set that the tracking options should be
     * associated with.</p>
     */
    inline CreateConfigurationSetTrackingOptionsRequest& WithConfigurationSetName(const char* value) { SetConfigurationSetName(value); return *this;}


    
    inline const TrackingOptions& GetTrackingOptions() const{ return m_trackingOptions; }

    
    inline bool TrackingOptionsHasBeenSet() const { return m_trackingOptionsHasBeenSet; }

    
    inline void SetTrackingOptions(const TrackingOptions& value) { m_trackingOptionsHasBeenSet = true; m_trackingOptions = value; }

    
    inline void SetTrackingOptions(TrackingOptions&& value) { m_trackingOptionsHasBeenSet = true; m_trackingOptions = std::move(value); }

    
    inline CreateConfigurationSetTrackingOptionsRequest& WithTrackingOptions(const TrackingOptions& value) { SetTrackingOptions(value); return *this;}

    
    inline CreateConfigurationSetTrackingOptionsRequest& WithTrackingOptions(TrackingOptions&& value) { SetTrackingOptions(std::move(value)); return *this;}

  private:

    Aws::String m_configurationSetName;
    bool m_configurationSetNameHasBeenSet;

    TrackingOptions m_trackingOptions;
    bool m_trackingOptionsHasBeenSet;
  };

} // namespace Model
} // namespace SES
} // namespace Aws
