/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/guardduty/GuardDuty_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace GuardDuty
{
namespace Model
{

  /**
   * <p>Represents the reason the scan was triggered.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/TriggerDetails">AWS
   * API Reference</a></p>
   */
  class TriggerDetails
  {
  public:
    AWS_GUARDDUTY_API TriggerDetails() = default;
    AWS_GUARDDUTY_API TriggerDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API TriggerDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the GuardDuty finding that triggered the malware scan.</p>
     */
    inline const Aws::String& GetGuardDutyFindingId() const { return m_guardDutyFindingId; }
    inline bool GuardDutyFindingIdHasBeenSet() const { return m_guardDutyFindingIdHasBeenSet; }
    template<typename GuardDutyFindingIdT = Aws::String>
    void SetGuardDutyFindingId(GuardDutyFindingIdT&& value) { m_guardDutyFindingIdHasBeenSet = true; m_guardDutyFindingId = std::forward<GuardDutyFindingIdT>(value); }
    template<typename GuardDutyFindingIdT = Aws::String>
    TriggerDetails& WithGuardDutyFindingId(GuardDutyFindingIdT&& value) { SetGuardDutyFindingId(std::forward<GuardDutyFindingIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the scan trigger.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    TriggerDetails& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_guardDutyFindingId;
    bool m_guardDutyFindingIdHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;
  };

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
