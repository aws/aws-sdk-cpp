/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lookoutequipment/LookoutEquipment_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
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
namespace LookoutEquipment
{
namespace Model
{

  /**
   * <p> Contains information about the label group. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutequipment-2020-12-15/LabelGroupSummary">AWS
   * API Reference</a></p>
   */
  class LabelGroupSummary
  {
  public:
    AWS_LOOKOUTEQUIPMENT_API LabelGroupSummary();
    AWS_LOOKOUTEQUIPMENT_API LabelGroupSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOOKOUTEQUIPMENT_API LabelGroupSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOOKOUTEQUIPMENT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The name of the label group. </p>
     */
    inline const Aws::String& GetLabelGroupName() const{ return m_labelGroupName; }
    inline bool LabelGroupNameHasBeenSet() const { return m_labelGroupNameHasBeenSet; }
    inline void SetLabelGroupName(const Aws::String& value) { m_labelGroupNameHasBeenSet = true; m_labelGroupName = value; }
    inline void SetLabelGroupName(Aws::String&& value) { m_labelGroupNameHasBeenSet = true; m_labelGroupName = std::move(value); }
    inline void SetLabelGroupName(const char* value) { m_labelGroupNameHasBeenSet = true; m_labelGroupName.assign(value); }
    inline LabelGroupSummary& WithLabelGroupName(const Aws::String& value) { SetLabelGroupName(value); return *this;}
    inline LabelGroupSummary& WithLabelGroupName(Aws::String&& value) { SetLabelGroupName(std::move(value)); return *this;}
    inline LabelGroupSummary& WithLabelGroupName(const char* value) { SetLabelGroupName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The Amazon Resource Name (ARN) of the label group. </p>
     */
    inline const Aws::String& GetLabelGroupArn() const{ return m_labelGroupArn; }
    inline bool LabelGroupArnHasBeenSet() const { return m_labelGroupArnHasBeenSet; }
    inline void SetLabelGroupArn(const Aws::String& value) { m_labelGroupArnHasBeenSet = true; m_labelGroupArn = value; }
    inline void SetLabelGroupArn(Aws::String&& value) { m_labelGroupArnHasBeenSet = true; m_labelGroupArn = std::move(value); }
    inline void SetLabelGroupArn(const char* value) { m_labelGroupArnHasBeenSet = true; m_labelGroupArn.assign(value); }
    inline LabelGroupSummary& WithLabelGroupArn(const Aws::String& value) { SetLabelGroupArn(value); return *this;}
    inline LabelGroupSummary& WithLabelGroupArn(Aws::String&& value) { SetLabelGroupArn(std::move(value)); return *this;}
    inline LabelGroupSummary& WithLabelGroupArn(const char* value) { SetLabelGroupArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The time at which the label group was created. </p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }
    inline LabelGroupSummary& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}
    inline LabelGroupSummary& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The time at which the label group was updated. </p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedAt() const{ return m_updatedAt; }
    inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }
    inline void SetUpdatedAt(const Aws::Utils::DateTime& value) { m_updatedAtHasBeenSet = true; m_updatedAt = value; }
    inline void SetUpdatedAt(Aws::Utils::DateTime&& value) { m_updatedAtHasBeenSet = true; m_updatedAt = std::move(value); }
    inline LabelGroupSummary& WithUpdatedAt(const Aws::Utils::DateTime& value) { SetUpdatedAt(value); return *this;}
    inline LabelGroupSummary& WithUpdatedAt(Aws::Utils::DateTime&& value) { SetUpdatedAt(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_labelGroupName;
    bool m_labelGroupNameHasBeenSet = false;

    Aws::String m_labelGroupArn;
    bool m_labelGroupArnHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt;
    bool m_createdAtHasBeenSet = false;

    Aws::Utils::DateTime m_updatedAt;
    bool m_updatedAtHasBeenSet = false;
  };

} // namespace Model
} // namespace LookoutEquipment
} // namespace Aws
