/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bcm-dashboards/BCMDashboards_EXPORTS.h>
#include <aws/bcm-dashboards/model/DateTimeType.h>
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
namespace BCMDashboards
{
namespace Model
{

  /**
   * <p>Represents a point in time that can be specified as either an absolute date
   * (for example, "2025-07-01") or a relative time period using ISO 8601 duration
   * format (for example, "-P3M" for three months ago).</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bcm-dashboards-2025-08-18/DateTimeValue">AWS
   * API Reference</a></p>
   */
  class DateTimeValue
  {
  public:
    AWS_BCMDASHBOARDS_API DateTimeValue() = default;
    AWS_BCMDASHBOARDS_API DateTimeValue(Aws::Utils::Json::JsonView jsonValue);
    AWS_BCMDASHBOARDS_API DateTimeValue& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BCMDASHBOARDS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The type of date/time value: <code>ABSOLUTE</code> for specific dates or
     * <code>RELATIVE</code> for dynamic time periods.</p>
     */
    inline DateTimeType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(DateTimeType value) { m_typeHasBeenSet = true; m_type = value; }
    inline DateTimeValue& WithType(DateTimeType value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The actual date/time value.</p>
     */
    inline const Aws::String& GetValue() const { return m_value; }
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
    template<typename ValueT = Aws::String>
    void SetValue(ValueT&& value) { m_valueHasBeenSet = true; m_value = std::forward<ValueT>(value); }
    template<typename ValueT = Aws::String>
    DateTimeValue& WithValue(ValueT&& value) { SetValue(std::forward<ValueT>(value)); return *this;}
    ///@}
  private:

    DateTimeType m_type{DateTimeType::NOT_SET};
    bool m_typeHasBeenSet = false;

    Aws::String m_value;
    bool m_valueHasBeenSet = false;
  };

} // namespace Model
} // namespace BCMDashboards
} // namespace Aws
