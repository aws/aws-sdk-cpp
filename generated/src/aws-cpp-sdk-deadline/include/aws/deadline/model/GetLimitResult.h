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
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace deadline
{
namespace Model
{
  class GetLimitResult
  {
  public:
    AWS_DEADLINE_API GetLimitResult() = default;
    AWS_DEADLINE_API GetLimitResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DEADLINE_API GetLimitResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The display name of the limit.</p>  <p>This field can store any
     * content. Escape or encode this content before displaying it on a webpage or any
     * other system that might interpret the content of this field.</p> 
     */
    inline const Aws::String& GetDisplayName() const { return m_displayName; }
    template<typename DisplayNameT = Aws::String>
    void SetDisplayName(DisplayNameT&& value) { m_displayNameHasBeenSet = true; m_displayName = std::forward<DisplayNameT>(value); }
    template<typename DisplayNameT = Aws::String>
    GetLimitResult& WithDisplayName(DisplayNameT&& value) { SetDisplayName(std::forward<DisplayNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The value that you specify as the <code>name</code> in the
     * <code>amounts</code> field of the <code>hostRequirements</code> in a step of a
     * job template to declare the limit requirement.</p>
     */
    inline const Aws::String& GetAmountRequirementName() const { return m_amountRequirementName; }
    template<typename AmountRequirementNameT = Aws::String>
    void SetAmountRequirementName(AmountRequirementNameT&& value) { m_amountRequirementNameHasBeenSet = true; m_amountRequirementName = std::forward<AmountRequirementNameT>(value); }
    template<typename AmountRequirementNameT = Aws::String>
    GetLimitResult& WithAmountRequirementName(AmountRequirementNameT&& value) { SetAmountRequirementName(std::forward<AmountRequirementNameT>(value)); return *this;}
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
    inline void SetMaxCount(int value) { m_maxCountHasBeenSet = true; m_maxCount = value; }
    inline GetLimitResult& WithMaxCount(int value) { SetMaxCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Unix timestamp of the date and time that the limit was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    void SetCreatedAt(CreatedAtT&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::forward<CreatedAtT>(value); }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    GetLimitResult& WithCreatedAt(CreatedAtT&& value) { SetCreatedAt(std::forward<CreatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The user identifier of the person that created the limit.</p>
     */
    inline const Aws::String& GetCreatedBy() const { return m_createdBy; }
    template<typename CreatedByT = Aws::String>
    void SetCreatedBy(CreatedByT&& value) { m_createdByHasBeenSet = true; m_createdBy = std::forward<CreatedByT>(value); }
    template<typename CreatedByT = Aws::String>
    GetLimitResult& WithCreatedBy(CreatedByT&& value) { SetCreatedBy(std::forward<CreatedByT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Unix timestamp of the date and time that the limit was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedAt() const { return m_updatedAt; }
    template<typename UpdatedAtT = Aws::Utils::DateTime>
    void SetUpdatedAt(UpdatedAtT&& value) { m_updatedAtHasBeenSet = true; m_updatedAt = std::forward<UpdatedAtT>(value); }
    template<typename UpdatedAtT = Aws::Utils::DateTime>
    GetLimitResult& WithUpdatedAt(UpdatedAtT&& value) { SetUpdatedAt(std::forward<UpdatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The user identifier of the person that last updated the limit.</p>
     */
    inline const Aws::String& GetUpdatedBy() const { return m_updatedBy; }
    template<typename UpdatedByT = Aws::String>
    void SetUpdatedBy(UpdatedByT&& value) { m_updatedByHasBeenSet = true; m_updatedBy = std::forward<UpdatedByT>(value); }
    template<typename UpdatedByT = Aws::String>
    GetLimitResult& WithUpdatedBy(UpdatedByT&& value) { SetUpdatedBy(std::forward<UpdatedByT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the farm that contains the limit.</p>
     */
    inline const Aws::String& GetFarmId() const { return m_farmId; }
    template<typename FarmIdT = Aws::String>
    void SetFarmId(FarmIdT&& value) { m_farmIdHasBeenSet = true; m_farmId = std::forward<FarmIdT>(value); }
    template<typename FarmIdT = Aws::String>
    GetLimitResult& WithFarmId(FarmIdT&& value) { SetFarmId(std::forward<FarmIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the limit.</p>
     */
    inline const Aws::String& GetLimitId() const { return m_limitId; }
    template<typename LimitIdT = Aws::String>
    void SetLimitId(LimitIdT&& value) { m_limitIdHasBeenSet = true; m_limitId = std::forward<LimitIdT>(value); }
    template<typename LimitIdT = Aws::String>
    GetLimitResult& WithLimitId(LimitIdT&& value) { SetLimitId(std::forward<LimitIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of resources from the limit that are being used by jobs. The
     * result is delayed and may not be the count at the time that you called the
     * operation.</p>
     */
    inline int GetCurrentCount() const { return m_currentCount; }
    inline void SetCurrentCount(int value) { m_currentCountHasBeenSet = true; m_currentCount = value; }
    inline GetLimitResult& WithCurrentCount(int value) { SetCurrentCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the limit that helps identify what the limit is used
     * for.</p>  <p>This field can store any content. Escape or encode this
     * content before displaying it on a webpage or any other system that might
     * interpret the content of this field.</p> 
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    GetLimitResult& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetLimitResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
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

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace deadline
} // namespace Aws
