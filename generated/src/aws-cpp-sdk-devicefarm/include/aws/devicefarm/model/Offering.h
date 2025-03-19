/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class Offering
  {
  public:
    AWS_DEVICEFARM_API Offering() = default;
    AWS_DEVICEFARM_API Offering(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEVICEFARM_API Offering& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEVICEFARM_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID that corresponds to a device offering.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    Offering& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A string that describes the offering.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    Offering& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of offering (for example, <code>RECURRING</code>) for a device.</p>
     */
    inline OfferingType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(OfferingType value) { m_typeHasBeenSet = true; m_type = value; }
    inline Offering& WithType(OfferingType value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The platform of the device (for example, <code>ANDROID</code> or
     * <code>IOS</code>).</p>
     */
    inline DevicePlatform GetPlatform() const { return m_platform; }
    inline bool PlatformHasBeenSet() const { return m_platformHasBeenSet; }
    inline void SetPlatform(DevicePlatform value) { m_platformHasBeenSet = true; m_platform = value; }
    inline Offering& WithPlatform(DevicePlatform value) { SetPlatform(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether there are recurring charges for the offering.</p>
     */
    inline const Aws::Vector<RecurringCharge>& GetRecurringCharges() const { return m_recurringCharges; }
    inline bool RecurringChargesHasBeenSet() const { return m_recurringChargesHasBeenSet; }
    template<typename RecurringChargesT = Aws::Vector<RecurringCharge>>
    void SetRecurringCharges(RecurringChargesT&& value) { m_recurringChargesHasBeenSet = true; m_recurringCharges = std::forward<RecurringChargesT>(value); }
    template<typename RecurringChargesT = Aws::Vector<RecurringCharge>>
    Offering& WithRecurringCharges(RecurringChargesT&& value) { SetRecurringCharges(std::forward<RecurringChargesT>(value)); return *this;}
    template<typename RecurringChargesT = RecurringCharge>
    Offering& AddRecurringCharges(RecurringChargesT&& value) { m_recurringChargesHasBeenSet = true; m_recurringCharges.emplace_back(std::forward<RecurringChargesT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    OfferingType m_type{OfferingType::NOT_SET};
    bool m_typeHasBeenSet = false;

    DevicePlatform m_platform{DevicePlatform::NOT_SET};
    bool m_platformHasBeenSet = false;

    Aws::Vector<RecurringCharge> m_recurringCharges;
    bool m_recurringChargesHasBeenSet = false;
  };

} // namespace Model
} // namespace DeviceFarm
} // namespace Aws
