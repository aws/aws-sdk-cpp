/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/connect/model/OperationalHour.h>
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
namespace Connect
{
namespace Model
{

  /**
   * <p>Information about the hours of operations with the effective override
   * applied.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/EffectiveHoursOfOperations">AWS
   * API Reference</a></p>
   */
  class EffectiveHoursOfOperations
  {
  public:
    AWS_CONNECT_API EffectiveHoursOfOperations() = default;
    AWS_CONNECT_API EffectiveHoursOfOperations(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API EffectiveHoursOfOperations& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The date that the hours of operation or overrides applies to.</p>
     */
    inline const Aws::String& GetDate() const { return m_date; }
    inline bool DateHasBeenSet() const { return m_dateHasBeenSet; }
    template<typename DateT = Aws::String>
    void SetDate(DateT&& value) { m_dateHasBeenSet = true; m_date = std::forward<DateT>(value); }
    template<typename DateT = Aws::String>
    EffectiveHoursOfOperations& WithDate(DateT&& value) { SetDate(std::forward<DateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the hours of operations with the effective override
     * applied.</p>
     */
    inline const Aws::Vector<OperationalHour>& GetOperationalHours() const { return m_operationalHours; }
    inline bool OperationalHoursHasBeenSet() const { return m_operationalHoursHasBeenSet; }
    template<typename OperationalHoursT = Aws::Vector<OperationalHour>>
    void SetOperationalHours(OperationalHoursT&& value) { m_operationalHoursHasBeenSet = true; m_operationalHours = std::forward<OperationalHoursT>(value); }
    template<typename OperationalHoursT = Aws::Vector<OperationalHour>>
    EffectiveHoursOfOperations& WithOperationalHours(OperationalHoursT&& value) { SetOperationalHours(std::forward<OperationalHoursT>(value)); return *this;}
    template<typename OperationalHoursT = OperationalHour>
    EffectiveHoursOfOperations& AddOperationalHours(OperationalHoursT&& value) { m_operationalHoursHasBeenSet = true; m_operationalHours.emplace_back(std::forward<OperationalHoursT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_date;
    bool m_dateHasBeenSet = false;

    Aws::Vector<OperationalHour> m_operationalHours;
    bool m_operationalHoursHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
