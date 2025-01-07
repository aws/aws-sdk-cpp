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
    AWS_CONNECT_API EffectiveHoursOfOperations();
    AWS_CONNECT_API EffectiveHoursOfOperations(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API EffectiveHoursOfOperations& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The date that the hours of operation or overrides applies to.</p>
     */
    inline const Aws::String& GetDate() const{ return m_date; }
    inline bool DateHasBeenSet() const { return m_dateHasBeenSet; }
    inline void SetDate(const Aws::String& value) { m_dateHasBeenSet = true; m_date = value; }
    inline void SetDate(Aws::String&& value) { m_dateHasBeenSet = true; m_date = std::move(value); }
    inline void SetDate(const char* value) { m_dateHasBeenSet = true; m_date.assign(value); }
    inline EffectiveHoursOfOperations& WithDate(const Aws::String& value) { SetDate(value); return *this;}
    inline EffectiveHoursOfOperations& WithDate(Aws::String&& value) { SetDate(std::move(value)); return *this;}
    inline EffectiveHoursOfOperations& WithDate(const char* value) { SetDate(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the hours of operations with the effective override
     * applied.</p>
     */
    inline const Aws::Vector<OperationalHour>& GetOperationalHours() const{ return m_operationalHours; }
    inline bool OperationalHoursHasBeenSet() const { return m_operationalHoursHasBeenSet; }
    inline void SetOperationalHours(const Aws::Vector<OperationalHour>& value) { m_operationalHoursHasBeenSet = true; m_operationalHours = value; }
    inline void SetOperationalHours(Aws::Vector<OperationalHour>&& value) { m_operationalHoursHasBeenSet = true; m_operationalHours = std::move(value); }
    inline EffectiveHoursOfOperations& WithOperationalHours(const Aws::Vector<OperationalHour>& value) { SetOperationalHours(value); return *this;}
    inline EffectiveHoursOfOperations& WithOperationalHours(Aws::Vector<OperationalHour>&& value) { SetOperationalHours(std::move(value)); return *this;}
    inline EffectiveHoursOfOperations& AddOperationalHours(const OperationalHour& value) { m_operationalHoursHasBeenSet = true; m_operationalHours.push_back(value); return *this; }
    inline EffectiveHoursOfOperations& AddOperationalHours(OperationalHour&& value) { m_operationalHoursHasBeenSet = true; m_operationalHours.push_back(std::move(value)); return *this; }
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
