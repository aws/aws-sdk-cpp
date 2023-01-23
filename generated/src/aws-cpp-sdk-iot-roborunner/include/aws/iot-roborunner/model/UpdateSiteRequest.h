/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot-roborunner/IoTRoboRunner_EXPORTS.h>
#include <aws/iot-roborunner/IoTRoboRunnerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace IoTRoboRunner
{
namespace Model
{

  /**
   */
  class UpdateSiteRequest : public IoTRoboRunnerRequest
  {
  public:
    AWS_IOTROBORUNNER_API UpdateSiteRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateSite"; }

    AWS_IOTROBORUNNER_API Aws::String SerializePayload() const override;


    
    inline const Aws::String& GetId() const{ return m_id; }

    
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    
    inline UpdateSiteRequest& WithId(const Aws::String& value) { SetId(value); return *this;}

    
    inline UpdateSiteRequest& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    
    inline UpdateSiteRequest& WithId(const char* value) { SetId(value); return *this;}


    
    inline const Aws::String& GetName() const{ return m_name; }

    
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    
    inline UpdateSiteRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    
    inline UpdateSiteRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    
    inline UpdateSiteRequest& WithName(const char* value) { SetName(value); return *this;}


    
    inline const Aws::String& GetCountryCode() const{ return m_countryCode; }

    
    inline bool CountryCodeHasBeenSet() const { return m_countryCodeHasBeenSet; }

    
    inline void SetCountryCode(const Aws::String& value) { m_countryCodeHasBeenSet = true; m_countryCode = value; }

    
    inline void SetCountryCode(Aws::String&& value) { m_countryCodeHasBeenSet = true; m_countryCode = std::move(value); }

    
    inline void SetCountryCode(const char* value) { m_countryCodeHasBeenSet = true; m_countryCode.assign(value); }

    
    inline UpdateSiteRequest& WithCountryCode(const Aws::String& value) { SetCountryCode(value); return *this;}

    
    inline UpdateSiteRequest& WithCountryCode(Aws::String&& value) { SetCountryCode(std::move(value)); return *this;}

    
    inline UpdateSiteRequest& WithCountryCode(const char* value) { SetCountryCode(value); return *this;}


    
    inline const Aws::String& GetDescription() const{ return m_description; }

    
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    
    inline UpdateSiteRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    
    inline UpdateSiteRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    
    inline UpdateSiteRequest& WithDescription(const char* value) { SetDescription(value); return *this;}

  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

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
