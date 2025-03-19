/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lookoutequipment/LookoutEquipment_EXPORTS.h>
#include <aws/lookoutequipment/LookoutEquipmentRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace LookoutEquipment
{
namespace Model
{

  /**
   */
  class UpdateLabelGroupRequest : public LookoutEquipmentRequest
  {
  public:
    AWS_LOOKOUTEQUIPMENT_API UpdateLabelGroupRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateLabelGroup"; }

    AWS_LOOKOUTEQUIPMENT_API Aws::String SerializePayload() const override;

    AWS_LOOKOUTEQUIPMENT_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p> The name of the label group to be updated. </p>
     */
    inline const Aws::String& GetLabelGroupName() const { return m_labelGroupName; }
    inline bool LabelGroupNameHasBeenSet() const { return m_labelGroupNameHasBeenSet; }
    template<typename LabelGroupNameT = Aws::String>
    void SetLabelGroupName(LabelGroupNameT&& value) { m_labelGroupNameHasBeenSet = true; m_labelGroupName = std::forward<LabelGroupNameT>(value); }
    template<typename LabelGroupNameT = Aws::String>
    UpdateLabelGroupRequest& WithLabelGroupName(LabelGroupNameT&& value) { SetLabelGroupName(std::forward<LabelGroupNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Updates the code indicating the type of anomaly associated with the label.
     * </p> <p>Data in this field will be retained for service usage. Follow best
     * practices for the security of your data.</p>
     */
    inline const Aws::Vector<Aws::String>& GetFaultCodes() const { return m_faultCodes; }
    inline bool FaultCodesHasBeenSet() const { return m_faultCodesHasBeenSet; }
    template<typename FaultCodesT = Aws::Vector<Aws::String>>
    void SetFaultCodes(FaultCodesT&& value) { m_faultCodesHasBeenSet = true; m_faultCodes = std::forward<FaultCodesT>(value); }
    template<typename FaultCodesT = Aws::Vector<Aws::String>>
    UpdateLabelGroupRequest& WithFaultCodes(FaultCodesT&& value) { SetFaultCodes(std::forward<FaultCodesT>(value)); return *this;}
    template<typename FaultCodesT = Aws::String>
    UpdateLabelGroupRequest& AddFaultCodes(FaultCodesT&& value) { m_faultCodesHasBeenSet = true; m_faultCodes.emplace_back(std::forward<FaultCodesT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_labelGroupName;
    bool m_labelGroupNameHasBeenSet = false;

    Aws::Vector<Aws::String> m_faultCodes;
    bool m_faultCodesHasBeenSet = false;
  };

} // namespace Model
} // namespace LookoutEquipment
} // namespace Aws
