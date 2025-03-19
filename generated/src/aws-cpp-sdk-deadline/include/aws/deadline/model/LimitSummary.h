/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/deadline/Deadline_EXPORTS.h>
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
namespace deadline
{
namespace Model
{

  /**
   * <p>Provides information about a specific limit.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/deadline-2023-10-12/LimitSummary">AWS
   * API Reference</a></p>
   */
  class LimitSummary
  {
  public:
    AWS_DEADLINE_API LimitSummary() = default;
    AWS_DEADLINE_API LimitSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEADLINE_API LimitSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEADLINE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the limit used in lists to identify the limit.</p> 
     * <p>This field can store any content. Escape or encode this content before
     * displaying it on a webpage or any other system that might interpret the content
     * of this field.</p> 
     */
    inline const Aws::String& GetDisplayName() const { return m_displayName; }
    inline bool DisplayNameHasBeenSet() const { return m_displayNameHasBeenSet; }
    template<typename DisplayNameT = Aws::String>
    void SetDisplayName(DisplayNameT&& value) { m_displayNameHasBeenSet = true; m_displayName = std::forward<DisplayNameT>(value); }
    template<typename DisplayNameT = Aws::String>
    LimitSummary& WithDisplayName(DisplayNameT&& value) { SetDisplayName(std::forward<DisplayNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The value that you specify as the <code>name</code> in the
     * <code>amounts</code> field of the <code>hostRequirements</code> in a step of a
     * job template to declare the limit requirement.</p>
     */
    inline const Aws::String& GetAmountRequirementName() const { return m_amountRequirementName; }
    inline bool AmountRequirementNameHasBeenSet() const { return m_amountRequirementNameHasBeenSet; }
    template<typename AmountRequirementNameT = Aws::String>
    void SetAmountRequirementName(AmountRequirementNameT&& value) { m_amountRequirementNameHasBeenSet = true; m_amountRequirementName = std::forward<AmountRequirementNameT>(value); }
    template<typename AmountRequirementNameT = Aws::String>
    LimitSummary& WithAmountRequirementName(AmountRequirementNameT&& value) { SetAmountRequirementName(std::forward<AmountRequirementNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of resources constrained by this limit. When all of the
     * resources are in use, steps that require the limit won't be scheduled until the
     * resource is available.</p> <p>The <code>maxValue</code> must not be 0. If the
     * value is -1, there is no restriction on the number of resources that can be
     * acquired for this limit.</p>
     */
    inline int GetMaxCount() const { return m_maxCount; }
    inline bool MaxCountHasBeenSet() const { return m_maxCountHasBeenSet; }
    inline void SetMaxCount(int value) { m_maxCountHasBeenSet = true; m_maxCount = value; }
    inline LimitSummary& WithMaxCount(int value) { SetMaxCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Unix timestamp of the date and time that the limit was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    void SetCreatedAt(CreatedAtT&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::forward<CreatedAtT>(value); }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    LimitSummary& WithCreatedAt(CreatedAtT&& value) { SetCreatedAt(std::forward<CreatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The user identifier of the person that created the limit.</p>
     */
    inline const Aws::String& GetCreatedBy() const { return m_createdBy; }
    inline bool CreatedByHasBeenSet() const { return m_createdByHasBeenSet; }
    template<typename CreatedByT = Aws::String>
    void SetCreatedBy(CreatedByT&& value) { m_createdByHasBeenSet = true; m_createdBy = std::forward<CreatedByT>(value); }
    template<typename CreatedByT = Aws::String>
    LimitSummary& WithCreatedBy(CreatedByT&& value) { SetCreatedBy(std::forward<CreatedByT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Unix timestamp of the date and time that the limit was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedAt() const { return m_updatedAt; }
    inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }
    template<typename UpdatedAtT = Aws::Utils::DateTime>
    void SetUpdatedAt(UpdatedAtT&& value) { m_updatedAtHasBeenSet = true; m_updatedAt = std::forward<UpdatedAtT>(value); }
    template<typename UpdatedAtT = Aws::Utils::DateTime>
    LimitSummary& WithUpdatedAt(UpdatedAtT&& value) { SetUpdatedAt(std::forward<UpdatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The user identifier of the person that last updated the limit.</p>
     */
    inline const Aws::String& GetUpdatedBy() const { return m_updatedBy; }
    inline bool UpdatedByHasBeenSet() const { return m_updatedByHasBeenSet; }
    template<typename UpdatedByT = Aws::String>
    void SetUpdatedBy(UpdatedByT&& value) { m_updatedByHasBeenSet = true; m_updatedBy = std::forward<UpdatedByT>(value); }
    template<typename UpdatedByT = Aws::String>
    LimitSummary& WithUpdatedBy(UpdatedByT&& value) { SetUpdatedBy(std::forward<UpdatedByT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the farm that contains the limit.</p>
     */
    inline const Aws::String& GetFarmId() const { return m_farmId; }
    inline bool FarmIdHasBeenSet() const { return m_farmIdHasBeenSet; }
    template<typename FarmIdT = Aws::String>
    void SetFarmId(FarmIdT&& value) { m_farmIdHasBeenSet = true; m_farmId = std::forward<FarmIdT>(value); }
    template<typename FarmIdT = Aws::String>
    LimitSummary& WithFarmId(FarmIdT&& value) { SetFarmId(std::forward<FarmIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the limit.</p>
     */
    inline const Aws::String& GetLimitId() const { return m_limitId; }
    inline bool LimitIdHasBeenSet() const { return m_limitIdHasBeenSet; }
    template<typename LimitIdT = Aws::String>
    void SetLimitId(LimitIdT&& value) { m_limitIdHasBeenSet = true; m_limitId = std::forward<LimitIdT>(value); }
    template<typename LimitIdT = Aws::String>
    LimitSummary& WithLimitId(LimitIdT&& value) { SetLimitId(std::forward<LimitIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of resources from the limit that are being used by jobs. The
     * result is delayed and may not be the count at the time that you called the
     * operation.</p>
     */
    inline int GetCurrentCount() const { return m_currentCount; }
    inline bool CurrentCountHasBeenSet() const { return m_currentCountHasBeenSet; }
    inline void SetCurrentCount(int value) { m_currentCountHasBeenSet = true; m_currentCount = value; }
    inline LimitSummary& WithCurrentCount(int value) { SetCurrentCount(value); return *this;}
    ///@}
  private:

    Aws::String m_displayName;
    bool m_displayNameHasBeenSet = false;

    Aws::String m_amountRequirementName;
    bool m_amountRequirementNameHasBeenSet = false;

    int m_maxCount{0};
    bool m_maxCountHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt{};
    bool m_createdAtHasBeenSet = false;

    Aws::String m_createdBy;
    bool m_createdByHasBeenSet = false;

    Aws::Utils::DateTime m_updatedAt{};
    bool m_updatedAtHasBeenSet = false;

    Aws::String m_updatedBy;
    bool m_updatedByHasBeenSet = false;

    Aws::String m_farmId;
    bool m_farmIdHasBeenSet = false;

    Aws::String m_limitId;
    bool m_limitIdHasBeenSet = false;

    int m_currentCount{0};
    bool m_currentCountHasBeenSet = false;
  };

} // namespace Model
} // namespace deadline
} // namespace Aws
