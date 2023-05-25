/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudhsm/CloudHSM_EXPORTS.h>
#include <aws/cloudhsm/CloudHSMRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace CloudHSM
{
namespace Model
{

  /**
   */
  class ModifyHapgRequest : public CloudHSMRequest
  {
  public:
    AWS_CLOUDHSM_API ModifyHapgRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ModifyHapg"; }

    AWS_CLOUDHSM_API Aws::String SerializePayload() const override;

    AWS_CLOUDHSM_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The ARN of the high-availability partition group to modify.</p>
     */
    inline const Aws::String& GetHapgArn() const{ return m_hapgArn; }

    /**
     * <p>The ARN of the high-availability partition group to modify.</p>
     */
    inline bool HapgArnHasBeenSet() const { return m_hapgArnHasBeenSet; }

    /**
     * <p>The ARN of the high-availability partition group to modify.</p>
     */
    inline void SetHapgArn(const Aws::String& value) { m_hapgArnHasBeenSet = true; m_hapgArn = value; }

    /**
     * <p>The ARN of the high-availability partition group to modify.</p>
     */
    inline void SetHapgArn(Aws::String&& value) { m_hapgArnHasBeenSet = true; m_hapgArn = std::move(value); }

    /**
     * <p>The ARN of the high-availability partition group to modify.</p>
     */
    inline void SetHapgArn(const char* value) { m_hapgArnHasBeenSet = true; m_hapgArn.assign(value); }

    /**
     * <p>The ARN of the high-availability partition group to modify.</p>
     */
    inline ModifyHapgRequest& WithHapgArn(const Aws::String& value) { SetHapgArn(value); return *this;}

    /**
     * <p>The ARN of the high-availability partition group to modify.</p>
     */
    inline ModifyHapgRequest& WithHapgArn(Aws::String&& value) { SetHapgArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the high-availability partition group to modify.</p>
     */
    inline ModifyHapgRequest& WithHapgArn(const char* value) { SetHapgArn(value); return *this;}


    /**
     * <p>The new label for the high-availability partition group.</p>
     */
    inline const Aws::String& GetLabel() const{ return m_label; }

    /**
     * <p>The new label for the high-availability partition group.</p>
     */
    inline bool LabelHasBeenSet() const { return m_labelHasBeenSet; }

    /**
     * <p>The new label for the high-availability partition group.</p>
     */
    inline void SetLabel(const Aws::String& value) { m_labelHasBeenSet = true; m_label = value; }

    /**
     * <p>The new label for the high-availability partition group.</p>
     */
    inline void SetLabel(Aws::String&& value) { m_labelHasBeenSet = true; m_label = std::move(value); }

    /**
     * <p>The new label for the high-availability partition group.</p>
     */
    inline void SetLabel(const char* value) { m_labelHasBeenSet = true; m_label.assign(value); }

    /**
     * <p>The new label for the high-availability partition group.</p>
     */
    inline ModifyHapgRequest& WithLabel(const Aws::String& value) { SetLabel(value); return *this;}

    /**
     * <p>The new label for the high-availability partition group.</p>
     */
    inline ModifyHapgRequest& WithLabel(Aws::String&& value) { SetLabel(std::move(value)); return *this;}

    /**
     * <p>The new label for the high-availability partition group.</p>
     */
    inline ModifyHapgRequest& WithLabel(const char* value) { SetLabel(value); return *this;}


    /**
     * <p>The list of partition serial numbers to make members of the high-availability
     * partition group.</p>
     */
    inline const Aws::Vector<Aws::String>& GetPartitionSerialList() const{ return m_partitionSerialList; }

    /**
     * <p>The list of partition serial numbers to make members of the high-availability
     * partition group.</p>
     */
    inline bool PartitionSerialListHasBeenSet() const { return m_partitionSerialListHasBeenSet; }

    /**
     * <p>The list of partition serial numbers to make members of the high-availability
     * partition group.</p>
     */
    inline void SetPartitionSerialList(const Aws::Vector<Aws::String>& value) { m_partitionSerialListHasBeenSet = true; m_partitionSerialList = value; }

    /**
     * <p>The list of partition serial numbers to make members of the high-availability
     * partition group.</p>
     */
    inline void SetPartitionSerialList(Aws::Vector<Aws::String>&& value) { m_partitionSerialListHasBeenSet = true; m_partitionSerialList = std::move(value); }

    /**
     * <p>The list of partition serial numbers to make members of the high-availability
     * partition group.</p>
     */
    inline ModifyHapgRequest& WithPartitionSerialList(const Aws::Vector<Aws::String>& value) { SetPartitionSerialList(value); return *this;}

    /**
     * <p>The list of partition serial numbers to make members of the high-availability
     * partition group.</p>
     */
    inline ModifyHapgRequest& WithPartitionSerialList(Aws::Vector<Aws::String>&& value) { SetPartitionSerialList(std::move(value)); return *this;}

    /**
     * <p>The list of partition serial numbers to make members of the high-availability
     * partition group.</p>
     */
    inline ModifyHapgRequest& AddPartitionSerialList(const Aws::String& value) { m_partitionSerialListHasBeenSet = true; m_partitionSerialList.push_back(value); return *this; }

    /**
     * <p>The list of partition serial numbers to make members of the high-availability
     * partition group.</p>
     */
    inline ModifyHapgRequest& AddPartitionSerialList(Aws::String&& value) { m_partitionSerialListHasBeenSet = true; m_partitionSerialList.push_back(std::move(value)); return *this; }

    /**
     * <p>The list of partition serial numbers to make members of the high-availability
     * partition group.</p>
     */
    inline ModifyHapgRequest& AddPartitionSerialList(const char* value) { m_partitionSerialListHasBeenSet = true; m_partitionSerialList.push_back(value); return *this; }

  private:

    Aws::String m_hapgArn;
    bool m_hapgArnHasBeenSet = false;

    Aws::String m_label;
    bool m_labelHasBeenSet = false;

    Aws::Vector<Aws::String> m_partitionSerialList;
    bool m_partitionSerialListHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudHSM
} // namespace Aws
