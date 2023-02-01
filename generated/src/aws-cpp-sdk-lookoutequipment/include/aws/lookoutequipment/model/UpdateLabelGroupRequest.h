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
    AWS_LOOKOUTEQUIPMENT_API UpdateLabelGroupRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateLabelGroup"; }

    AWS_LOOKOUTEQUIPMENT_API Aws::String SerializePayload() const override;

    AWS_LOOKOUTEQUIPMENT_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p> The name of the label group to be updated. </p>
     */
    inline const Aws::String& GetLabelGroupName() const{ return m_labelGroupName; }

    /**
     * <p> The name of the label group to be updated. </p>
     */
    inline bool LabelGroupNameHasBeenSet() const { return m_labelGroupNameHasBeenSet; }

    /**
     * <p> The name of the label group to be updated. </p>
     */
    inline void SetLabelGroupName(const Aws::String& value) { m_labelGroupNameHasBeenSet = true; m_labelGroupName = value; }

    /**
     * <p> The name of the label group to be updated. </p>
     */
    inline void SetLabelGroupName(Aws::String&& value) { m_labelGroupNameHasBeenSet = true; m_labelGroupName = std::move(value); }

    /**
     * <p> The name of the label group to be updated. </p>
     */
    inline void SetLabelGroupName(const char* value) { m_labelGroupNameHasBeenSet = true; m_labelGroupName.assign(value); }

    /**
     * <p> The name of the label group to be updated. </p>
     */
    inline UpdateLabelGroupRequest& WithLabelGroupName(const Aws::String& value) { SetLabelGroupName(value); return *this;}

    /**
     * <p> The name of the label group to be updated. </p>
     */
    inline UpdateLabelGroupRequest& WithLabelGroupName(Aws::String&& value) { SetLabelGroupName(std::move(value)); return *this;}

    /**
     * <p> The name of the label group to be updated. </p>
     */
    inline UpdateLabelGroupRequest& WithLabelGroupName(const char* value) { SetLabelGroupName(value); return *this;}


    /**
     * <p> Updates the code indicating the type of anomaly associated with the label.
     * </p> <p>Data in this field will be retained for service usage. Follow best
     * practices for the security of your data.</p>
     */
    inline const Aws::Vector<Aws::String>& GetFaultCodes() const{ return m_faultCodes; }

    /**
     * <p> Updates the code indicating the type of anomaly associated with the label.
     * </p> <p>Data in this field will be retained for service usage. Follow best
     * practices for the security of your data.</p>
     */
    inline bool FaultCodesHasBeenSet() const { return m_faultCodesHasBeenSet; }

    /**
     * <p> Updates the code indicating the type of anomaly associated with the label.
     * </p> <p>Data in this field will be retained for service usage. Follow best
     * practices for the security of your data.</p>
     */
    inline void SetFaultCodes(const Aws::Vector<Aws::String>& value) { m_faultCodesHasBeenSet = true; m_faultCodes = value; }

    /**
     * <p> Updates the code indicating the type of anomaly associated with the label.
     * </p> <p>Data in this field will be retained for service usage. Follow best
     * practices for the security of your data.</p>
     */
    inline void SetFaultCodes(Aws::Vector<Aws::String>&& value) { m_faultCodesHasBeenSet = true; m_faultCodes = std::move(value); }

    /**
     * <p> Updates the code indicating the type of anomaly associated with the label.
     * </p> <p>Data in this field will be retained for service usage. Follow best
     * practices for the security of your data.</p>
     */
    inline UpdateLabelGroupRequest& WithFaultCodes(const Aws::Vector<Aws::String>& value) { SetFaultCodes(value); return *this;}

    /**
     * <p> Updates the code indicating the type of anomaly associated with the label.
     * </p> <p>Data in this field will be retained for service usage. Follow best
     * practices for the security of your data.</p>
     */
    inline UpdateLabelGroupRequest& WithFaultCodes(Aws::Vector<Aws::String>&& value) { SetFaultCodes(std::move(value)); return *this;}

    /**
     * <p> Updates the code indicating the type of anomaly associated with the label.
     * </p> <p>Data in this field will be retained for service usage. Follow best
     * practices for the security of your data.</p>
     */
    inline UpdateLabelGroupRequest& AddFaultCodes(const Aws::String& value) { m_faultCodesHasBeenSet = true; m_faultCodes.push_back(value); return *this; }

    /**
     * <p> Updates the code indicating the type of anomaly associated with the label.
     * </p> <p>Data in this field will be retained for service usage. Follow best
     * practices for the security of your data.</p>
     */
    inline UpdateLabelGroupRequest& AddFaultCodes(Aws::String&& value) { m_faultCodesHasBeenSet = true; m_faultCodes.push_back(std::move(value)); return *this; }

    /**
     * <p> Updates the code indicating the type of anomaly associated with the label.
     * </p> <p>Data in this field will be retained for service usage. Follow best
     * practices for the security of your data.</p>
     */
    inline UpdateLabelGroupRequest& AddFaultCodes(const char* value) { m_faultCodesHasBeenSet = true; m_faultCodes.push_back(value); return *this; }

  private:

    Aws::String m_labelGroupName;
    bool m_labelGroupNameHasBeenSet = false;

    Aws::Vector<Aws::String> m_faultCodes;
    bool m_faultCodesHasBeenSet = false;
  };

} // namespace Model
} // namespace LookoutEquipment
} // namespace Aws
