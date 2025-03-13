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
    AWS_LOOKOUTEQUIPMENT_API LabelGroupSummary() = default;
    AWS_LOOKOUTEQUIPMENT_API LabelGroupSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOOKOUTEQUIPMENT_API LabelGroupSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOOKOUTEQUIPMENT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The name of the label group. </p>
     */
    inline const Aws::String& GetLabelGroupName() const { return m_labelGroupName; }
    inline bool LabelGroupNameHasBeenSet() const { return m_labelGroupNameHasBeenSet; }
    template<typename LabelGroupNameT = Aws::String>
    void SetLabelGroupName(LabelGroupNameT&& value) { m_labelGroupNameHasBeenSet = true; m_labelGroupName = std::forward<LabelGroupNameT>(value); }
    template<typename LabelGroupNameT = Aws::String>
    LabelGroupSummary& WithLabelGroupName(LabelGroupNameT&& value) { SetLabelGroupName(std::forward<LabelGroupNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The Amazon Resource Name (ARN) of the label group. </p>
     */
    inline const Aws::String& GetLabelGroupArn() const { return m_labelGroupArn; }
    inline bool LabelGroupArnHasBeenSet() const { return m_labelGroupArnHasBeenSet; }
    template<typename LabelGroupArnT = Aws::String>
    void SetLabelGroupArn(LabelGroupArnT&& value) { m_labelGroupArnHasBeenSet = true; m_labelGroupArn = std::forward<LabelGroupArnT>(value); }
    template<typename LabelGroupArnT = Aws::String>
    LabelGroupSummary& WithLabelGroupArn(LabelGroupArnT&& value) { SetLabelGroupArn(std::forward<LabelGroupArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The time at which the label group was created. </p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    void SetCreatedAt(CreatedAtT&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::forward<CreatedAtT>(value); }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    LabelGroupSummary& WithCreatedAt(CreatedAtT&& value) { SetCreatedAt(std::forward<CreatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The time at which the label group was updated. </p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedAt() const { return m_updatedAt; }
    inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }
    template<typename UpdatedAtT = Aws::Utils::DateTime>
    void SetUpdatedAt(UpdatedAtT&& value) { m_updatedAtHasBeenSet = true; m_updatedAt = std::forward<UpdatedAtT>(value); }
    template<typename UpdatedAtT = Aws::Utils::DateTime>
    LabelGroupSummary& WithUpdatedAt(UpdatedAtT&& value) { SetUpdatedAt(std::forward<UpdatedAtT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_labelGroupName;
    bool m_labelGroupNameHasBeenSet = false;

    Aws::String m_labelGroupArn;
    bool m_labelGroupArnHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt{};
    bool m_createdAtHasBeenSet = false;

    Aws::Utils::DateTime m_updatedAt{};
    bool m_updatedAtHasBeenSet = false;
  };

} // namespace Model
} // namespace LookoutEquipment
} // namespace Aws
