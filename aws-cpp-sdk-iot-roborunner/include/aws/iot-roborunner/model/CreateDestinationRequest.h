/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot-roborunner/IoTRoboRunner_EXPORTS.h>
#include <aws/iot-roborunner/IoTRoboRunnerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iot-roborunner/model/DestinationState.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace IoTRoboRunner
{
namespace Model
{

  /**
   */
  class CreateDestinationRequest : public IoTRoboRunnerRequest
  {
  public:
    AWS_IOTROBORUNNER_API CreateDestinationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateDestination"; }

    AWS_IOTROBORUNNER_API Aws::String SerializePayload() const override;


    
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }

    
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }

    
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }

    
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }

    
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }

    
    inline CreateDestinationRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}

    
    inline CreateDestinationRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}

    
    inline CreateDestinationRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}


    
    inline const Aws::String& GetName() const{ return m_name; }

    
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    
    inline CreateDestinationRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    
    inline CreateDestinationRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    
    inline CreateDestinationRequest& WithName(const char* value) { SetName(value); return *this;}


    
    inline const Aws::String& GetSite() const{ return m_site; }

    
    inline bool SiteHasBeenSet() const { return m_siteHasBeenSet; }

    
    inline void SetSite(const Aws::String& value) { m_siteHasBeenSet = true; m_site = value; }

    
    inline void SetSite(Aws::String&& value) { m_siteHasBeenSet = true; m_site = std::move(value); }

    
    inline void SetSite(const char* value) { m_siteHasBeenSet = true; m_site.assign(value); }

    
    inline CreateDestinationRequest& WithSite(const Aws::String& value) { SetSite(value); return *this;}

    
    inline CreateDestinationRequest& WithSite(Aws::String&& value) { SetSite(std::move(value)); return *this;}

    
    inline CreateDestinationRequest& WithSite(const char* value) { SetSite(value); return *this;}


    /**
     * <p>The state of the destination. Default used if not specified.</p>
     */
    inline const DestinationState& GetState() const{ return m_state; }

    /**
     * <p>The state of the destination. Default used if not specified.</p>
     */
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }

    /**
     * <p>The state of the destination. Default used if not specified.</p>
     */
    inline void SetState(const DestinationState& value) { m_stateHasBeenSet = true; m_state = value; }

    /**
     * <p>The state of the destination. Default used if not specified.</p>
     */
    inline void SetState(DestinationState&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }

    /**
     * <p>The state of the destination. Default used if not specified.</p>
     */
    inline CreateDestinationRequest& WithState(const DestinationState& value) { SetState(value); return *this;}

    /**
     * <p>The state of the destination. Default used if not specified.</p>
     */
    inline CreateDestinationRequest& WithState(DestinationState&& value) { SetState(std::move(value)); return *this;}


    
    inline const Aws::String& GetAdditionalFixedProperties() const{ return m_additionalFixedProperties; }

    
    inline bool AdditionalFixedPropertiesHasBeenSet() const { return m_additionalFixedPropertiesHasBeenSet; }

    
    inline void SetAdditionalFixedProperties(const Aws::String& value) { m_additionalFixedPropertiesHasBeenSet = true; m_additionalFixedProperties = value; }

    
    inline void SetAdditionalFixedProperties(Aws::String&& value) { m_additionalFixedPropertiesHasBeenSet = true; m_additionalFixedProperties = std::move(value); }

    
    inline void SetAdditionalFixedProperties(const char* value) { m_additionalFixedPropertiesHasBeenSet = true; m_additionalFixedProperties.assign(value); }

    
    inline CreateDestinationRequest& WithAdditionalFixedProperties(const Aws::String& value) { SetAdditionalFixedProperties(value); return *this;}

    
    inline CreateDestinationRequest& WithAdditionalFixedProperties(Aws::String&& value) { SetAdditionalFixedProperties(std::move(value)); return *this;}

    
    inline CreateDestinationRequest& WithAdditionalFixedProperties(const char* value) { SetAdditionalFixedProperties(value); return *this;}

  private:

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_site;
    bool m_siteHasBeenSet = false;

    DestinationState m_state;
    bool m_stateHasBeenSet = false;

    Aws::String m_additionalFixedProperties;
    bool m_additionalFixedPropertiesHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTRoboRunner
} // namespace Aws
