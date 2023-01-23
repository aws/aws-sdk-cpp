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
  class DeleteLabelRequest : public LookoutEquipmentRequest
  {
  public:
    AWS_LOOKOUTEQUIPMENT_API DeleteLabelRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteLabel"; }

    AWS_LOOKOUTEQUIPMENT_API Aws::String SerializePayload() const override;

    AWS_LOOKOUTEQUIPMENT_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p> The name of the label group that contains the label that you want to delete.
     * Data in this field will be retained for service usage. Follow best practices for
     * the security of your data. </p>
     */
    inline const Aws::String& GetLabelGroupName() const{ return m_labelGroupName; }

    /**
     * <p> The name of the label group that contains the label that you want to delete.
     * Data in this field will be retained for service usage. Follow best practices for
     * the security of your data. </p>
     */
    inline bool LabelGroupNameHasBeenSet() const { return m_labelGroupNameHasBeenSet; }

    /**
     * <p> The name of the label group that contains the label that you want to delete.
     * Data in this field will be retained for service usage. Follow best practices for
     * the security of your data. </p>
     */
    inline void SetLabelGroupName(const Aws::String& value) { m_labelGroupNameHasBeenSet = true; m_labelGroupName = value; }

    /**
     * <p> The name of the label group that contains the label that you want to delete.
     * Data in this field will be retained for service usage. Follow best practices for
     * the security of your data. </p>
     */
    inline void SetLabelGroupName(Aws::String&& value) { m_labelGroupNameHasBeenSet = true; m_labelGroupName = std::move(value); }

    /**
     * <p> The name of the label group that contains the label that you want to delete.
     * Data in this field will be retained for service usage. Follow best practices for
     * the security of your data. </p>
     */
    inline void SetLabelGroupName(const char* value) { m_labelGroupNameHasBeenSet = true; m_labelGroupName.assign(value); }

    /**
     * <p> The name of the label group that contains the label that you want to delete.
     * Data in this field will be retained for service usage. Follow best practices for
     * the security of your data. </p>
     */
    inline DeleteLabelRequest& WithLabelGroupName(const Aws::String& value) { SetLabelGroupName(value); return *this;}

    /**
     * <p> The name of the label group that contains the label that you want to delete.
     * Data in this field will be retained for service usage. Follow best practices for
     * the security of your data. </p>
     */
    inline DeleteLabelRequest& WithLabelGroupName(Aws::String&& value) { SetLabelGroupName(std::move(value)); return *this;}

    /**
     * <p> The name of the label group that contains the label that you want to delete.
     * Data in this field will be retained for service usage. Follow best practices for
     * the security of your data. </p>
     */
    inline DeleteLabelRequest& WithLabelGroupName(const char* value) { SetLabelGroupName(value); return *this;}


    /**
     * <p> The ID of the label that you want to delete. </p>
     */
    inline const Aws::String& GetLabelId() const{ return m_labelId; }

    /**
     * <p> The ID of the label that you want to delete. </p>
     */
    inline bool LabelIdHasBeenSet() const { return m_labelIdHasBeenSet; }

    /**
     * <p> The ID of the label that you want to delete. </p>
     */
    inline void SetLabelId(const Aws::String& value) { m_labelIdHasBeenSet = true; m_labelId = value; }

    /**
     * <p> The ID of the label that you want to delete. </p>
     */
    inline void SetLabelId(Aws::String&& value) { m_labelIdHasBeenSet = true; m_labelId = std::move(value); }

    /**
     * <p> The ID of the label that you want to delete. </p>
     */
    inline void SetLabelId(const char* value) { m_labelIdHasBeenSet = true; m_labelId.assign(value); }

    /**
     * <p> The ID of the label that you want to delete. </p>
     */
    inline DeleteLabelRequest& WithLabelId(const Aws::String& value) { SetLabelId(value); return *this;}

    /**
     * <p> The ID of the label that you want to delete. </p>
     */
    inline DeleteLabelRequest& WithLabelId(Aws::String&& value) { SetLabelId(std::move(value)); return *this;}

    /**
     * <p> The ID of the label that you want to delete. </p>
     */
    inline DeleteLabelRequest& WithLabelId(const char* value) { SetLabelId(value); return *this;}

  private:

    Aws::String m_labelGroupName;
    bool m_labelGroupNameHasBeenSet = false;

    Aws::String m_labelId;
    bool m_labelIdHasBeenSet = false;
  };

} // namespace Model
} // namespace LookoutEquipment
} // namespace Aws
