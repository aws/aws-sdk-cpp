/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector2/Inspector2_EXPORTS.h>
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
namespace Inspector2
{
namespace Model
{

  /**
   * <p>The Cybersecurity and Infrastructure Security Agency (CISA) details for a
   * specific vulnerability.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/inspector2-2020-06-08/CisaData">AWS
   * API Reference</a></p>
   */
  class CisaData
  {
  public:
    AWS_INSPECTOR2_API CisaData();
    AWS_INSPECTOR2_API CisaData(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR2_API CisaData& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The remediation action recommended by CISA for this vulnerability.</p>
     */
    inline const Aws::String& GetAction() const{ return m_action; }

    /**
     * <p>The remediation action recommended by CISA for this vulnerability.</p>
     */
    inline bool ActionHasBeenSet() const { return m_actionHasBeenSet; }

    /**
     * <p>The remediation action recommended by CISA for this vulnerability.</p>
     */
    inline void SetAction(const Aws::String& value) { m_actionHasBeenSet = true; m_action = value; }

    /**
     * <p>The remediation action recommended by CISA for this vulnerability.</p>
     */
    inline void SetAction(Aws::String&& value) { m_actionHasBeenSet = true; m_action = std::move(value); }

    /**
     * <p>The remediation action recommended by CISA for this vulnerability.</p>
     */
    inline void SetAction(const char* value) { m_actionHasBeenSet = true; m_action.assign(value); }

    /**
     * <p>The remediation action recommended by CISA for this vulnerability.</p>
     */
    inline CisaData& WithAction(const Aws::String& value) { SetAction(value); return *this;}

    /**
     * <p>The remediation action recommended by CISA for this vulnerability.</p>
     */
    inline CisaData& WithAction(Aws::String&& value) { SetAction(std::move(value)); return *this;}

    /**
     * <p>The remediation action recommended by CISA for this vulnerability.</p>
     */
    inline CisaData& WithAction(const char* value) { SetAction(value); return *this;}


    /**
     * <p>The date and time CISA added this vulnerability to their catalogue.</p>
     */
    inline const Aws::Utils::DateTime& GetDateAdded() const{ return m_dateAdded; }

    /**
     * <p>The date and time CISA added this vulnerability to their catalogue.</p>
     */
    inline bool DateAddedHasBeenSet() const { return m_dateAddedHasBeenSet; }

    /**
     * <p>The date and time CISA added this vulnerability to their catalogue.</p>
     */
    inline void SetDateAdded(const Aws::Utils::DateTime& value) { m_dateAddedHasBeenSet = true; m_dateAdded = value; }

    /**
     * <p>The date and time CISA added this vulnerability to their catalogue.</p>
     */
    inline void SetDateAdded(Aws::Utils::DateTime&& value) { m_dateAddedHasBeenSet = true; m_dateAdded = std::move(value); }

    /**
     * <p>The date and time CISA added this vulnerability to their catalogue.</p>
     */
    inline CisaData& WithDateAdded(const Aws::Utils::DateTime& value) { SetDateAdded(value); return *this;}

    /**
     * <p>The date and time CISA added this vulnerability to their catalogue.</p>
     */
    inline CisaData& WithDateAdded(Aws::Utils::DateTime&& value) { SetDateAdded(std::move(value)); return *this;}


    /**
     * <p>The date and time CISA expects a fix to have been provided vulnerability.</p>
     */
    inline const Aws::Utils::DateTime& GetDateDue() const{ return m_dateDue; }

    /**
     * <p>The date and time CISA expects a fix to have been provided vulnerability.</p>
     */
    inline bool DateDueHasBeenSet() const { return m_dateDueHasBeenSet; }

    /**
     * <p>The date and time CISA expects a fix to have been provided vulnerability.</p>
     */
    inline void SetDateDue(const Aws::Utils::DateTime& value) { m_dateDueHasBeenSet = true; m_dateDue = value; }

    /**
     * <p>The date and time CISA expects a fix to have been provided vulnerability.</p>
     */
    inline void SetDateDue(Aws::Utils::DateTime&& value) { m_dateDueHasBeenSet = true; m_dateDue = std::move(value); }

    /**
     * <p>The date and time CISA expects a fix to have been provided vulnerability.</p>
     */
    inline CisaData& WithDateDue(const Aws::Utils::DateTime& value) { SetDateDue(value); return *this;}

    /**
     * <p>The date and time CISA expects a fix to have been provided vulnerability.</p>
     */
    inline CisaData& WithDateDue(Aws::Utils::DateTime&& value) { SetDateDue(std::move(value)); return *this;}

  private:

    Aws::String m_action;
    bool m_actionHasBeenSet = false;

    Aws::Utils::DateTime m_dateAdded;
    bool m_dateAddedHasBeenSet = false;

    Aws::Utils::DateTime m_dateDue;
    bool m_dateDueHasBeenSet = false;
  };

} // namespace Model
} // namespace Inspector2
} // namespace Aws
