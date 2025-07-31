/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector2/Inspector2_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
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
    AWS_INSPECTOR2_API CisaData() = default;
    AWS_INSPECTOR2_API CisaData(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR2_API CisaData& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The date and time CISA added this vulnerability to their catalogue.</p>
     */
    inline const Aws::Utils::DateTime& GetDateAdded() const { return m_dateAdded; }
    inline bool DateAddedHasBeenSet() const { return m_dateAddedHasBeenSet; }
    template<typename DateAddedT = Aws::Utils::DateTime>
    void SetDateAdded(DateAddedT&& value) { m_dateAddedHasBeenSet = true; m_dateAdded = std::forward<DateAddedT>(value); }
    template<typename DateAddedT = Aws::Utils::DateTime>
    CisaData& WithDateAdded(DateAddedT&& value) { SetDateAdded(std::forward<DateAddedT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time CISA expects a fix to have been provided vulnerability.</p>
     */
    inline const Aws::Utils::DateTime& GetDateDue() const { return m_dateDue; }
    inline bool DateDueHasBeenSet() const { return m_dateDueHasBeenSet; }
    template<typename DateDueT = Aws::Utils::DateTime>
    void SetDateDue(DateDueT&& value) { m_dateDueHasBeenSet = true; m_dateDue = std::forward<DateDueT>(value); }
    template<typename DateDueT = Aws::Utils::DateTime>
    CisaData& WithDateDue(DateDueT&& value) { SetDateDue(std::forward<DateDueT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The remediation action recommended by CISA for this vulnerability.</p>
     */
    inline const Aws::String& GetAction() const { return m_action; }
    inline bool ActionHasBeenSet() const { return m_actionHasBeenSet; }
    template<typename ActionT = Aws::String>
    void SetAction(ActionT&& value) { m_actionHasBeenSet = true; m_action = std::forward<ActionT>(value); }
    template<typename ActionT = Aws::String>
    CisaData& WithAction(ActionT&& value) { SetAction(std::forward<ActionT>(value)); return *this;}
    ///@}
  private:

    Aws::Utils::DateTime m_dateAdded{};
    bool m_dateAddedHasBeenSet = false;

    Aws::Utils::DateTime m_dateDue{};
    bool m_dateDueHasBeenSet = false;

    Aws::String m_action;
    bool m_actionHasBeenSet = false;
  };

} // namespace Model
} // namespace Inspector2
} // namespace Aws
