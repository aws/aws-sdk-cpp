/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot-roborunner/IoTRoboRunner_EXPORTS.h>
#include <aws/iot-roborunner/IoTRoboRunnerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
  class CreateWorkerFleetRequest : public IoTRoboRunnerRequest
  {
  public:
    AWS_IOTROBORUNNER_API CreateWorkerFleetRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateWorkerFleet"; }

    AWS_IOTROBORUNNER_API Aws::String SerializePayload() const override;


    
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }

    
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }

    
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }

    
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }

    
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }

    
    inline CreateWorkerFleetRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}

    
    inline CreateWorkerFleetRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}

    
    inline CreateWorkerFleetRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}


    
    inline const Aws::String& GetName() const{ return m_name; }

    
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    
    inline CreateWorkerFleetRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    
    inline CreateWorkerFleetRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    
    inline CreateWorkerFleetRequest& WithName(const char* value) { SetName(value); return *this;}


    
    inline const Aws::String& GetSite() const{ return m_site; }

    
    inline bool SiteHasBeenSet() const { return m_siteHasBeenSet; }

    
    inline void SetSite(const Aws::String& value) { m_siteHasBeenSet = true; m_site = value; }

    
    inline void SetSite(Aws::String&& value) { m_siteHasBeenSet = true; m_site = std::move(value); }

    
    inline void SetSite(const char* value) { m_siteHasBeenSet = true; m_site.assign(value); }

    
    inline CreateWorkerFleetRequest& WithSite(const Aws::String& value) { SetSite(value); return *this;}

    
    inline CreateWorkerFleetRequest& WithSite(Aws::String&& value) { SetSite(std::move(value)); return *this;}

    
    inline CreateWorkerFleetRequest& WithSite(const char* value) { SetSite(value); return *this;}


    
    inline const Aws::String& GetAdditionalFixedProperties() const{ return m_additionalFixedProperties; }

    
    inline bool AdditionalFixedPropertiesHasBeenSet() const { return m_additionalFixedPropertiesHasBeenSet; }

    
    inline void SetAdditionalFixedProperties(const Aws::String& value) { m_additionalFixedPropertiesHasBeenSet = true; m_additionalFixedProperties = value; }

    
    inline void SetAdditionalFixedProperties(Aws::String&& value) { m_additionalFixedPropertiesHasBeenSet = true; m_additionalFixedProperties = std::move(value); }

    
    inline void SetAdditionalFixedProperties(const char* value) { m_additionalFixedPropertiesHasBeenSet = true; m_additionalFixedProperties.assign(value); }

    
    inline CreateWorkerFleetRequest& WithAdditionalFixedProperties(const Aws::String& value) { SetAdditionalFixedProperties(value); return *this;}

    
    inline CreateWorkerFleetRequest& WithAdditionalFixedProperties(Aws::String&& value) { SetAdditionalFixedProperties(std::move(value)); return *this;}

    
    inline CreateWorkerFleetRequest& WithAdditionalFixedProperties(const char* value) { SetAdditionalFixedProperties(value); return *this;}

  private:

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_site;
    bool m_siteHasBeenSet = false;

    Aws::String m_additionalFixedProperties;
    bool m_additionalFixedPropertiesHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTRoboRunner
} // namespace Aws
