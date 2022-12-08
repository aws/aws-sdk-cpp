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
    AWS_GUARDDUTY_API TriggerDetails();
    AWS_GUARDDUTY_API TriggerDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API TriggerDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ID of the GuardDuty finding that triggered the BirdDog scan.</p>
     */
    inline const Aws::String& GetGuardDutyFindingId() const{ return m_guardDutyFindingId; }

    /**
     * <p>The ID of the GuardDuty finding that triggered the BirdDog scan.</p>
     */
    inline bool GuardDutyFindingIdHasBeenSet() const { return m_guardDutyFindingIdHasBeenSet; }

    /**
     * <p>The ID of the GuardDuty finding that triggered the BirdDog scan.</p>
     */
    inline void SetGuardDutyFindingId(const Aws::String& value) { m_guardDutyFindingIdHasBeenSet = true; m_guardDutyFindingId = value; }

    /**
     * <p>The ID of the GuardDuty finding that triggered the BirdDog scan.</p>
     */
    inline void SetGuardDutyFindingId(Aws::String&& value) { m_guardDutyFindingIdHasBeenSet = true; m_guardDutyFindingId = std::move(value); }

    /**
     * <p>The ID of the GuardDuty finding that triggered the BirdDog scan.</p>
     */
    inline void SetGuardDutyFindingId(const char* value) { m_guardDutyFindingIdHasBeenSet = true; m_guardDutyFindingId.assign(value); }

    /**
     * <p>The ID of the GuardDuty finding that triggered the BirdDog scan.</p>
     */
    inline TriggerDetails& WithGuardDutyFindingId(const Aws::String& value) { SetGuardDutyFindingId(value); return *this;}

    /**
     * <p>The ID of the GuardDuty finding that triggered the BirdDog scan.</p>
     */
    inline TriggerDetails& WithGuardDutyFindingId(Aws::String&& value) { SetGuardDutyFindingId(std::move(value)); return *this;}

    /**
     * <p>The ID of the GuardDuty finding that triggered the BirdDog scan.</p>
     */
    inline TriggerDetails& WithGuardDutyFindingId(const char* value) { SetGuardDutyFindingId(value); return *this;}


    /**
     * <p>The description of the scan trigger.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description of the scan trigger.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The description of the scan trigger.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The description of the scan trigger.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The description of the scan trigger.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The description of the scan trigger.</p>
     */
    inline TriggerDetails& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of the scan trigger.</p>
     */
    inline TriggerDetails& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the scan trigger.</p>
     */
    inline TriggerDetails& WithDescription(const char* value) { SetDescription(value); return *this;}

  private:

    Aws::String m_guardDutyFindingId;
    bool m_guardDutyFindingIdHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;
  };

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
