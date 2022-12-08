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
  class UpdateWorkerFleetRequest : public IoTRoboRunnerRequest
  {
  public:
    AWS_IOTROBORUNNER_API UpdateWorkerFleetRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateWorkerFleet"; }

    AWS_IOTROBORUNNER_API Aws::String SerializePayload() const override;


    
    inline const Aws::String& GetId() const{ return m_id; }

    
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    
    inline UpdateWorkerFleetRequest& WithId(const Aws::String& value) { SetId(value); return *this;}

    
    inline UpdateWorkerFleetRequest& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    
    inline UpdateWorkerFleetRequest& WithId(const char* value) { SetId(value); return *this;}


    
    inline const Aws::String& GetName() const{ return m_name; }

    
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    
    inline UpdateWorkerFleetRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    
    inline UpdateWorkerFleetRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    
    inline UpdateWorkerFleetRequest& WithName(const char* value) { SetName(value); return *this;}


    
    inline const Aws::String& GetAdditionalFixedProperties() const{ return m_additionalFixedProperties; }

    
    inline bool AdditionalFixedPropertiesHasBeenSet() const { return m_additionalFixedPropertiesHasBeenSet; }

    
    inline void SetAdditionalFixedProperties(const Aws::String& value) { m_additionalFixedPropertiesHasBeenSet = true; m_additionalFixedProperties = value; }

    
    inline void SetAdditionalFixedProperties(Aws::String&& value) { m_additionalFixedPropertiesHasBeenSet = true; m_additionalFixedProperties = std::move(value); }

    
    inline void SetAdditionalFixedProperties(const char* value) { m_additionalFixedPropertiesHasBeenSet = true; m_additionalFixedProperties.assign(value); }

    
    inline UpdateWorkerFleetRequest& WithAdditionalFixedProperties(const Aws::String& value) { SetAdditionalFixedProperties(value); return *this;}

    
    inline UpdateWorkerFleetRequest& WithAdditionalFixedProperties(Aws::String&& value) { SetAdditionalFixedProperties(std::move(value)); return *this;}

    
    inline UpdateWorkerFleetRequest& WithAdditionalFixedProperties(const char* value) { SetAdditionalFixedProperties(value); return *this;}

  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_additionalFixedProperties;
    bool m_additionalFixedPropertiesHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTRoboRunner
} // namespace Aws
