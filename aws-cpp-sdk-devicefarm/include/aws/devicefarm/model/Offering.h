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
#include <aws/devicefarm/DeviceFarm_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/devicefarm/model/OfferingType.h>
#include <aws/devicefarm/model/DevicePlatform.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/devicefarm/model/RecurringCharge.h>
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
namespace DeviceFarm
{
namespace Model
{

  /**
   * <p>Represents the metadata of a device offering.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/Offering">AWS
   * API Reference</a></p>
   */
  class AWS_DEVICEFARM_API Offering
  {
  public:
    Offering();
    Offering(Aws::Utils::Json::JsonView jsonValue);
    Offering& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ID that corresponds to a device offering.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The ID that corresponds to a device offering.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>The ID that corresponds to a device offering.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The ID that corresponds to a device offering.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>The ID that corresponds to a device offering.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The ID that corresponds to a device offering.</p>
     */
    inline Offering& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The ID that corresponds to a device offering.</p>
     */
    inline Offering& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The ID that corresponds to a device offering.</p>
     */
    inline Offering& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>A string describing the offering.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A string describing the offering.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>A string describing the offering.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A string describing the offering.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>A string describing the offering.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>A string describing the offering.</p>
     */
    inline Offering& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A string describing the offering.</p>
     */
    inline Offering& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A string describing the offering.</p>
     */
    inline Offering& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The type of offering (e.g., "RECURRING") for a device.</p>
     */
    inline const OfferingType& GetType() const{ return m_type; }

    /**
     * <p>The type of offering (e.g., "RECURRING") for a device.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The type of offering (e.g., "RECURRING") for a device.</p>
     */
    inline void SetType(const OfferingType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The type of offering (e.g., "RECURRING") for a device.</p>
     */
    inline void SetType(OfferingType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The type of offering (e.g., "RECURRING") for a device.</p>
     */
    inline Offering& WithType(const OfferingType& value) { SetType(value); return *this;}

    /**
     * <p>The type of offering (e.g., "RECURRING") for a device.</p>
     */
    inline Offering& WithType(OfferingType&& value) { SetType(std::move(value)); return *this;}


    /**
     * <p>The platform of the device (e.g., ANDROID or IOS).</p>
     */
    inline const DevicePlatform& GetPlatform() const{ return m_platform; }

    /**
     * <p>The platform of the device (e.g., ANDROID or IOS).</p>
     */
    inline bool PlatformHasBeenSet() const { return m_platformHasBeenSet; }

    /**
     * <p>The platform of the device (e.g., ANDROID or IOS).</p>
     */
    inline void SetPlatform(const DevicePlatform& value) { m_platformHasBeenSet = true; m_platform = value; }

    /**
     * <p>The platform of the device (e.g., ANDROID or IOS).</p>
     */
    inline void SetPlatform(DevicePlatform&& value) { m_platformHasBeenSet = true; m_platform = std::move(value); }

    /**
     * <p>The platform of the device (e.g., ANDROID or IOS).</p>
     */
    inline Offering& WithPlatform(const DevicePlatform& value) { SetPlatform(value); return *this;}

    /**
     * <p>The platform of the device (e.g., ANDROID or IOS).</p>
     */
    inline Offering& WithPlatform(DevicePlatform&& value) { SetPlatform(std::move(value)); return *this;}


    /**
     * <p>Specifies whether there are recurring charges for the offering.</p>
     */
    inline const Aws::Vector<RecurringCharge>& GetRecurringCharges() const{ return m_recurringCharges; }

    /**
     * <p>Specifies whether there are recurring charges for the offering.</p>
     */
    inline bool RecurringChargesHasBeenSet() const { return m_recurringChargesHasBeenSet; }

    /**
     * <p>Specifies whether there are recurring charges for the offering.</p>
     */
    inline void SetRecurringCharges(const Aws::Vector<RecurringCharge>& value) { m_recurringChargesHasBeenSet = true; m_recurringCharges = value; }

    /**
     * <p>Specifies whether there are recurring charges for the offering.</p>
     */
    inline void SetRecurringCharges(Aws::Vector<RecurringCharge>&& value) { m_recurringChargesHasBeenSet = true; m_recurringCharges = std::move(value); }

    /**
     * <p>Specifies whether there are recurring charges for the offering.</p>
     */
    inline Offering& WithRecurringCharges(const Aws::Vector<RecurringCharge>& value) { SetRecurringCharges(value); return *this;}

    /**
     * <p>Specifies whether there are recurring charges for the offering.</p>
     */
    inline Offering& WithRecurringCharges(Aws::Vector<RecurringCharge>&& value) { SetRecurringCharges(std::move(value)); return *this;}

    /**
     * <p>Specifies whether there are recurring charges for the offering.</p>
     */
    inline Offering& AddRecurringCharges(const RecurringCharge& value) { m_recurringChargesHasBeenSet = true; m_recurringCharges.push_back(value); return *this; }

    /**
     * <p>Specifies whether there are recurring charges for the offering.</p>
     */
    inline Offering& AddRecurringCharges(RecurringCharge&& value) { m_recurringChargesHasBeenSet = true; m_recurringCharges.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_id;
    bool m_idHasBeenSet;

    Aws::String m_description;
    bool m_descriptionHasBeenSet;

    OfferingType m_type;
    bool m_typeHasBeenSet;

    DevicePlatform m_platform;
    bool m_platformHasBeenSet;

    Aws::Vector<RecurringCharge> m_recurringCharges;
    bool m_recurringChargesHasBeenSet;
  };

} // namespace Model
} // namespace DeviceFarm
} // namespace Aws
