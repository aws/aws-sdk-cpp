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
  class CreateSiteRequest : public IoTRoboRunnerRequest
  {
  public:
    AWS_IOTROBORUNNER_API CreateSiteRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateSite"; }

    AWS_IOTROBORUNNER_API Aws::String SerializePayload() const override;


    
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }

    
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }

    
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }

    
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }

    
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }

    
    inline CreateSiteRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}

    
    inline CreateSiteRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}

    
    inline CreateSiteRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}


    
    inline const Aws::String& GetName() const{ return m_name; }

    
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    
    inline CreateSiteRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    
    inline CreateSiteRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    
    inline CreateSiteRequest& WithName(const char* value) { SetName(value); return *this;}


    
    inline const Aws::String& GetCountryCode() const{ return m_countryCode; }

    
    inline bool CountryCodeHasBeenSet() const { return m_countryCodeHasBeenSet; }

    
    inline void SetCountryCode(const Aws::String& value) { m_countryCodeHasBeenSet = true; m_countryCode = value; }

    
    inline void SetCountryCode(Aws::String&& value) { m_countryCodeHasBeenSet = true; m_countryCode = std::move(value); }

    
    inline void SetCountryCode(const char* value) { m_countryCodeHasBeenSet = true; m_countryCode.assign(value); }

    
    inline CreateSiteRequest& WithCountryCode(const Aws::String& value) { SetCountryCode(value); return *this;}

    
    inline CreateSiteRequest& WithCountryCode(Aws::String&& value) { SetCountryCode(std::move(value)); return *this;}

    
    inline CreateSiteRequest& WithCountryCode(const char* value) { SetCountryCode(value); return *this;}


    
    inline const Aws::String& GetDescription() const{ return m_description; }

    
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    
    inline CreateSiteRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    
    inline CreateSiteRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    
    inline CreateSiteRequest& WithDescription(const char* value) { SetDescription(value); return *this;}

  private:

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_countryCode;
    bool m_countryCodeHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTRoboRunner
} // namespace Aws
