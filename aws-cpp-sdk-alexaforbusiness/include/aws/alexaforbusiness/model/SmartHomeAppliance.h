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
#include <aws/alexaforbusiness/AlexaForBusiness_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace AlexaForBusiness
{
namespace Model
{

  /**
   * <p>A smart home appliance that can connect to a central system. Any domestic
   * device can be a smart appliance. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/SmartHomeAppliance">AWS
   * API Reference</a></p>
   */
  class AWS_ALEXAFORBUSINESS_API SmartHomeAppliance
  {
  public:
    SmartHomeAppliance();
    SmartHomeAppliance(Aws::Utils::Json::JsonView jsonValue);
    SmartHomeAppliance& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The friendly name of the smart home appliance.</p>
     */
    inline const Aws::String& GetFriendlyName() const{ return m_friendlyName; }

    /**
     * <p>The friendly name of the smart home appliance.</p>
     */
    inline bool FriendlyNameHasBeenSet() const { return m_friendlyNameHasBeenSet; }

    /**
     * <p>The friendly name of the smart home appliance.</p>
     */
    inline void SetFriendlyName(const Aws::String& value) { m_friendlyNameHasBeenSet = true; m_friendlyName = value; }

    /**
     * <p>The friendly name of the smart home appliance.</p>
     */
    inline void SetFriendlyName(Aws::String&& value) { m_friendlyNameHasBeenSet = true; m_friendlyName = std::move(value); }

    /**
     * <p>The friendly name of the smart home appliance.</p>
     */
    inline void SetFriendlyName(const char* value) { m_friendlyNameHasBeenSet = true; m_friendlyName.assign(value); }

    /**
     * <p>The friendly name of the smart home appliance.</p>
     */
    inline SmartHomeAppliance& WithFriendlyName(const Aws::String& value) { SetFriendlyName(value); return *this;}

    /**
     * <p>The friendly name of the smart home appliance.</p>
     */
    inline SmartHomeAppliance& WithFriendlyName(Aws::String&& value) { SetFriendlyName(std::move(value)); return *this;}

    /**
     * <p>The friendly name of the smart home appliance.</p>
     */
    inline SmartHomeAppliance& WithFriendlyName(const char* value) { SetFriendlyName(value); return *this;}


    /**
     * <p>The description of the smart home appliance.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description of the smart home appliance.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The description of the smart home appliance.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The description of the smart home appliance.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The description of the smart home appliance.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The description of the smart home appliance.</p>
     */
    inline SmartHomeAppliance& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of the smart home appliance.</p>
     */
    inline SmartHomeAppliance& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the smart home appliance.</p>
     */
    inline SmartHomeAppliance& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The name of the manufacturer of the smart home appliance.</p>
     */
    inline const Aws::String& GetManufacturerName() const{ return m_manufacturerName; }

    /**
     * <p>The name of the manufacturer of the smart home appliance.</p>
     */
    inline bool ManufacturerNameHasBeenSet() const { return m_manufacturerNameHasBeenSet; }

    /**
     * <p>The name of the manufacturer of the smart home appliance.</p>
     */
    inline void SetManufacturerName(const Aws::String& value) { m_manufacturerNameHasBeenSet = true; m_manufacturerName = value; }

    /**
     * <p>The name of the manufacturer of the smart home appliance.</p>
     */
    inline void SetManufacturerName(Aws::String&& value) { m_manufacturerNameHasBeenSet = true; m_manufacturerName = std::move(value); }

    /**
     * <p>The name of the manufacturer of the smart home appliance.</p>
     */
    inline void SetManufacturerName(const char* value) { m_manufacturerNameHasBeenSet = true; m_manufacturerName.assign(value); }

    /**
     * <p>The name of the manufacturer of the smart home appliance.</p>
     */
    inline SmartHomeAppliance& WithManufacturerName(const Aws::String& value) { SetManufacturerName(value); return *this;}

    /**
     * <p>The name of the manufacturer of the smart home appliance.</p>
     */
    inline SmartHomeAppliance& WithManufacturerName(Aws::String&& value) { SetManufacturerName(std::move(value)); return *this;}

    /**
     * <p>The name of the manufacturer of the smart home appliance.</p>
     */
    inline SmartHomeAppliance& WithManufacturerName(const char* value) { SetManufacturerName(value); return *this;}

  private:

    Aws::String m_friendlyName;
    bool m_friendlyNameHasBeenSet;

    Aws::String m_description;
    bool m_descriptionHasBeenSet;

    Aws::String m_manufacturerName;
    bool m_manufacturerNameHasBeenSet;
  };

} // namespace Model
} // namespace AlexaForBusiness
} // namespace Aws
