/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot-roborunner/IoTRoboRunner_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/iot-roborunner/model/DestinationState.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace IoTRoboRunner
{
namespace Model
{

  /**
   * <p>Area within a facility where work can be performed.</p><p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iot-roborunner-2018-05-10/Destination">AWS
   * API Reference</a></p>
   */
  class Destination
  {
  public:
    AWS_IOTROBORUNNER_API Destination();
    AWS_IOTROBORUNNER_API Destination(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTROBORUNNER_API Destination& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTROBORUNNER_API Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const Aws::String& GetArn() const{ return m_arn; }

    
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    
    inline Destination& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    
    inline Destination& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    
    inline Destination& WithArn(const char* value) { SetArn(value); return *this;}


    
    inline const Aws::String& GetId() const{ return m_id; }

    
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    
    inline Destination& WithId(const Aws::String& value) { SetId(value); return *this;}

    
    inline Destination& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    
    inline Destination& WithId(const char* value) { SetId(value); return *this;}


    
    inline const Aws::String& GetName() const{ return m_name; }

    
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    
    inline Destination& WithName(const Aws::String& value) { SetName(value); return *this;}

    
    inline Destination& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    
    inline Destination& WithName(const char* value) { SetName(value); return *this;}


    
    inline const Aws::String& GetSite() const{ return m_site; }

    
    inline bool SiteHasBeenSet() const { return m_siteHasBeenSet; }

    
    inline void SetSite(const Aws::String& value) { m_siteHasBeenSet = true; m_site = value; }

    
    inline void SetSite(Aws::String&& value) { m_siteHasBeenSet = true; m_site = std::move(value); }

    
    inline void SetSite(const char* value) { m_siteHasBeenSet = true; m_site.assign(value); }

    
    inline Destination& WithSite(const Aws::String& value) { SetSite(value); return *this;}

    
    inline Destination& WithSite(Aws::String&& value) { SetSite(std::move(value)); return *this;}

    
    inline Destination& WithSite(const char* value) { SetSite(value); return *this;}


    
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }

    
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }

    
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }

    
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }

    
    inline Destination& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}

    
    inline Destination& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}


    
    inline const Aws::Utils::DateTime& GetUpdatedAt() const{ return m_updatedAt; }

    
    inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }

    
    inline void SetUpdatedAt(const Aws::Utils::DateTime& value) { m_updatedAtHasBeenSet = true; m_updatedAt = value; }

    
    inline void SetUpdatedAt(Aws::Utils::DateTime&& value) { m_updatedAtHasBeenSet = true; m_updatedAt = std::move(value); }

    
    inline Destination& WithUpdatedAt(const Aws::Utils::DateTime& value) { SetUpdatedAt(value); return *this;}

    
    inline Destination& WithUpdatedAt(Aws::Utils::DateTime&& value) { SetUpdatedAt(std::move(value)); return *this;}


    
    inline const DestinationState& GetState() const{ return m_state; }

    
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }

    
    inline void SetState(const DestinationState& value) { m_stateHasBeenSet = true; m_state = value; }

    
    inline void SetState(DestinationState&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }

    
    inline Destination& WithState(const DestinationState& value) { SetState(value); return *this;}

    
    inline Destination& WithState(DestinationState&& value) { SetState(std::move(value)); return *this;}


    
    inline const Aws::String& GetAdditionalFixedProperties() const{ return m_additionalFixedProperties; }

    
    inline bool AdditionalFixedPropertiesHasBeenSet() const { return m_additionalFixedPropertiesHasBeenSet; }

    
    inline void SetAdditionalFixedProperties(const Aws::String& value) { m_additionalFixedPropertiesHasBeenSet = true; m_additionalFixedProperties = value; }

    
    inline void SetAdditionalFixedProperties(Aws::String&& value) { m_additionalFixedPropertiesHasBeenSet = true; m_additionalFixedProperties = std::move(value); }

    
    inline void SetAdditionalFixedProperties(const char* value) { m_additionalFixedPropertiesHasBeenSet = true; m_additionalFixedProperties.assign(value); }

    
    inline Destination& WithAdditionalFixedProperties(const Aws::String& value) { SetAdditionalFixedProperties(value); return *this;}

    
    inline Destination& WithAdditionalFixedProperties(Aws::String&& value) { SetAdditionalFixedProperties(std::move(value)); return *this;}

    
    inline Destination& WithAdditionalFixedProperties(const char* value) { SetAdditionalFixedProperties(value); return *this;}

  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_site;
    bool m_siteHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt;
    bool m_createdAtHasBeenSet = false;

    Aws::Utils::DateTime m_updatedAt;
    bool m_updatedAtHasBeenSet = false;

    DestinationState m_state;
    bool m_stateHasBeenSet = false;

    Aws::String m_additionalFixedProperties;
    bool m_additionalFixedPropertiesHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTRoboRunner
} // namespace Aws
