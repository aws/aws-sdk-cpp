/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lookoutequipment/LookoutEquipment_EXPORTS.h>
#include <aws/lookoutequipment/LookoutEquipmentRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace LookoutEquipment
{
namespace Model
{

  /**
   */
  class DescribeLabelGroupRequest : public LookoutEquipmentRequest
  {
  public:
    AWS_LOOKOUTEQUIPMENT_API DescribeLabelGroupRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeLabelGroup"; }

    AWS_LOOKOUTEQUIPMENT_API Aws::String SerializePayload() const override;

    AWS_LOOKOUTEQUIPMENT_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p> Returns the name of the label group. </p>
     */
    inline const Aws::String& GetLabelGroupName() const{ return m_labelGroupName; }

    /**
     * <p> Returns the name of the label group. </p>
     */
    inline bool LabelGroupNameHasBeenSet() const { return m_labelGroupNameHasBeenSet; }

    /**
     * <p> Returns the name of the label group. </p>
     */
    inline void SetLabelGroupName(const Aws::String& value) { m_labelGroupNameHasBeenSet = true; m_labelGroupName = value; }

    /**
     * <p> Returns the name of the label group. </p>
     */
    inline void SetLabelGroupName(Aws::String&& value) { m_labelGroupNameHasBeenSet = true; m_labelGroupName = std::move(value); }

    /**
     * <p> Returns the name of the label group. </p>
     */
    inline void SetLabelGroupName(const char* value) { m_labelGroupNameHasBeenSet = true; m_labelGroupName.assign(value); }

    /**
     * <p> Returns the name of the label group. </p>
     */
    inline DescribeLabelGroupRequest& WithLabelGroupName(const Aws::String& value) { SetLabelGroupName(value); return *this;}

    /**
     * <p> Returns the name of the label group. </p>
     */
    inline DescribeLabelGroupRequest& WithLabelGroupName(Aws::String&& value) { SetLabelGroupName(std::move(value)); return *this;}

    /**
     * <p> Returns the name of the label group. </p>
     */
    inline DescribeLabelGroupRequest& WithLabelGroupName(const char* value) { SetLabelGroupName(value); return *this;}

  private:

    Aws::String m_labelGroupName;
    bool m_labelGroupNameHasBeenSet = false;
  };

} // namespace Model
} // namespace LookoutEquipment
} // namespace Aws
