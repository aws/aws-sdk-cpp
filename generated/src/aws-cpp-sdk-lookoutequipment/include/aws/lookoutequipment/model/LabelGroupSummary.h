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


    /**
     * <p> The name of the label group. </p>
     */
    inline const Aws::String& GetLabelGroupName() const{ return m_labelGroupName; }

    /**
     * <p> The name of the label group. </p>
     */
    inline bool LabelGroupNameHasBeenSet() const { return m_labelGroupNameHasBeenSet; }

    /**
     * <p> The name of the label group. </p>
     */
    inline void SetLabelGroupName(const Aws::String& value) { m_labelGroupNameHasBeenSet = true; m_labelGroupName = value; }

    /**
     * <p> The name of the label group. </p>
     */
    inline void SetLabelGroupName(Aws::String&& value) { m_labelGroupNameHasBeenSet = true; m_labelGroupName = std::move(value); }

    /**
     * <p> The name of the label group. </p>
     */
    inline void SetLabelGroupName(const char* value) { m_labelGroupNameHasBeenSet = true; m_labelGroupName.assign(value); }

    /**
     * <p> The name of the label group. </p>
     */
    inline LabelGroupSummary& WithLabelGroupName(const Aws::String& value) { SetLabelGroupName(value); return *this;}

    /**
     * <p> The name of the label group. </p>
     */
    inline LabelGroupSummary& WithLabelGroupName(Aws::String&& value) { SetLabelGroupName(std::move(value)); return *this;}

    /**
     * <p> The name of the label group. </p>
     */
    inline LabelGroupSummary& WithLabelGroupName(const char* value) { SetLabelGroupName(value); return *this;}


    /**
     * <p> The ARN of the label group. </p>
     */
    inline const Aws::String& GetLabelGroupArn() const{ return m_labelGroupArn; }

    /**
     * <p> The ARN of the label group. </p>
     */
    inline bool LabelGroupArnHasBeenSet() const { return m_labelGroupArnHasBeenSet; }

    /**
     * <p> The ARN of the label group. </p>
     */
    inline void SetLabelGroupArn(const Aws::String& value) { m_labelGroupArnHasBeenSet = true; m_labelGroupArn = value; }

    /**
     * <p> The ARN of the label group. </p>
     */
    inline void SetLabelGroupArn(Aws::String&& value) { m_labelGroupArnHasBeenSet = true; m_labelGroupArn = std::move(value); }

    /**
     * <p> The ARN of the label group. </p>
     */
    inline void SetLabelGroupArn(const char* value) { m_labelGroupArnHasBeenSet = true; m_labelGroupArn.assign(value); }

    /**
     * <p> The ARN of the label group. </p>
     */
    inline LabelGroupSummary& WithLabelGroupArn(const Aws::String& value) { SetLabelGroupArn(value); return *this;}

    /**
     * <p> The ARN of the label group. </p>
     */
    inline LabelGroupSummary& WithLabelGroupArn(Aws::String&& value) { SetLabelGroupArn(std::move(value)); return *this;}

    /**
     * <p> The ARN of the label group. </p>
     */
    inline LabelGroupSummary& WithLabelGroupArn(const char* value) { SetLabelGroupArn(value); return *this;}


    /**
     * <p> The time at which the label group was created. </p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }

    /**
     * <p> The time at which the label group was created. </p>
     */
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }

    /**
     * <p> The time at which the label group was created. </p>
     */
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }

    /**
     * <p> The time at which the label group was created. </p>
     */
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }

    /**
     * <p> The time at which the label group was created. </p>
     */
    inline LabelGroupSummary& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}

    /**
     * <p> The time at which the label group was created. </p>
     */
    inline LabelGroupSummary& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}


    /**
     * <p> The time at which the label group was updated. </p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedAt() const{ return m_updatedAt; }

    /**
     * <p> The time at which the label group was updated. </p>
     */
    inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }

    /**
     * <p> The time at which the label group was updated. </p>
     */
    inline void SetUpdatedAt(const Aws::Utils::DateTime& value) { m_updatedAtHasBeenSet = true; m_updatedAt = value; }

    /**
     * <p> The time at which the label group was updated. </p>
     */
    inline void SetUpdatedAt(Aws::Utils::DateTime&& value) { m_updatedAtHasBeenSet = true; m_updatedAt = std::move(value); }

    /**
     * <p> The time at which the label group was updated. </p>
     */
    inline LabelGroupSummary& WithUpdatedAt(const Aws::Utils::DateTime& value) { SetUpdatedAt(value); return *this;}

    /**
     * <p> The time at which the label group was updated. </p>
     */
    inline LabelGroupSummary& WithUpdatedAt(Aws::Utils::DateTime&& value) { SetUpdatedAt(std::move(value)); return *this;}

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
