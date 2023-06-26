/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lightsail/Lightsail_EXPORTS.h>
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
namespace Lightsail
{
namespace Model
{

  /**
   * <p>Describes a pending database maintenance action.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/PendingMaintenanceAction">AWS
   * API Reference</a></p>
   */
  class PendingMaintenanceAction
  {
  public:
    AWS_LIGHTSAIL_API PendingMaintenanceAction();
    AWS_LIGHTSAIL_API PendingMaintenanceAction(Aws::Utils::Json::JsonView jsonValue);
    AWS_LIGHTSAIL_API PendingMaintenanceAction& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LIGHTSAIL_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The type of pending database maintenance action.</p>
     */
    inline const Aws::String& GetAction() const{ return m_action; }

    /**
     * <p>The type of pending database maintenance action.</p>
     */
    inline bool ActionHasBeenSet() const { return m_actionHasBeenSet; }

    /**
     * <p>The type of pending database maintenance action.</p>
     */
    inline void SetAction(const Aws::String& value) { m_actionHasBeenSet = true; m_action = value; }

    /**
     * <p>The type of pending database maintenance action.</p>
     */
    inline void SetAction(Aws::String&& value) { m_actionHasBeenSet = true; m_action = std::move(value); }

    /**
     * <p>The type of pending database maintenance action.</p>
     */
    inline void SetAction(const char* value) { m_actionHasBeenSet = true; m_action.assign(value); }

    /**
     * <p>The type of pending database maintenance action.</p>
     */
    inline PendingMaintenanceAction& WithAction(const Aws::String& value) { SetAction(value); return *this;}

    /**
     * <p>The type of pending database maintenance action.</p>
     */
    inline PendingMaintenanceAction& WithAction(Aws::String&& value) { SetAction(std::move(value)); return *this;}

    /**
     * <p>The type of pending database maintenance action.</p>
     */
    inline PendingMaintenanceAction& WithAction(const char* value) { SetAction(value); return *this;}


    /**
     * <p>Additional detail about the pending database maintenance action.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>Additional detail about the pending database maintenance action.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>Additional detail about the pending database maintenance action.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>Additional detail about the pending database maintenance action.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>Additional detail about the pending database maintenance action.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>Additional detail about the pending database maintenance action.</p>
     */
    inline PendingMaintenanceAction& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>Additional detail about the pending database maintenance action.</p>
     */
    inline PendingMaintenanceAction& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>Additional detail about the pending database maintenance action.</p>
     */
    inline PendingMaintenanceAction& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The effective date of the pending database maintenance action.</p>
     */
    inline const Aws::Utils::DateTime& GetCurrentApplyDate() const{ return m_currentApplyDate; }

    /**
     * <p>The effective date of the pending database maintenance action.</p>
     */
    inline bool CurrentApplyDateHasBeenSet() const { return m_currentApplyDateHasBeenSet; }

    /**
     * <p>The effective date of the pending database maintenance action.</p>
     */
    inline void SetCurrentApplyDate(const Aws::Utils::DateTime& value) { m_currentApplyDateHasBeenSet = true; m_currentApplyDate = value; }

    /**
     * <p>The effective date of the pending database maintenance action.</p>
     */
    inline void SetCurrentApplyDate(Aws::Utils::DateTime&& value) { m_currentApplyDateHasBeenSet = true; m_currentApplyDate = std::move(value); }

    /**
     * <p>The effective date of the pending database maintenance action.</p>
     */
    inline PendingMaintenanceAction& WithCurrentApplyDate(const Aws::Utils::DateTime& value) { SetCurrentApplyDate(value); return *this;}

    /**
     * <p>The effective date of the pending database maintenance action.</p>
     */
    inline PendingMaintenanceAction& WithCurrentApplyDate(Aws::Utils::DateTime&& value) { SetCurrentApplyDate(std::move(value)); return *this;}

  private:

    Aws::String m_action;
    bool m_actionHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Utils::DateTime m_currentApplyDate;
    bool m_currentApplyDateHasBeenSet = false;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
