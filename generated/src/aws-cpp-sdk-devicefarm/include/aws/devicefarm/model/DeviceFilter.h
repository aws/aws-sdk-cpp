/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/devicefarm/DeviceFarm_EXPORTS.h>
#include <aws/devicefarm/model/DeviceFilterAttribute.h>
#include <aws/devicefarm/model/RuleOperator.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace DeviceFarm
{
namespace Model
{

  /**
   * <p>Represents a device filter used to select a set of devices to be included in
   * a test run. This data structure is passed in as the
   * <code>deviceSelectionConfiguration</code> parameter to <code>ScheduleRun</code>.
   * For an example of the JSON request syntax, see <a>ScheduleRun</a>.</p> <p>It is
   * also passed in as the <code>filters</code> parameter to
   * <code>ListDevices</code>. For an example of the JSON request syntax, see
   * <a>ListDevices</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/DeviceFilter">AWS
   * API Reference</a></p>
   */
  class DeviceFilter
  {
  public:
    AWS_DEVICEFARM_API DeviceFilter() = default;
    AWS_DEVICEFARM_API DeviceFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEVICEFARM_API DeviceFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEVICEFARM_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The aspect of a device such as platform or model used as the selection
     * criteria in a device filter.</p> <p>The supported operators for each attribute
     * are provided in the following list.</p> <dl> <dt>ARN</dt> <dd> <p>The Amazon
     * Resource Name (ARN) of the device (for example,
     * <code>arn:aws:devicefarm:us-west-2::device:12345Example</code>).</p>
     * <p>Supported operators: <code>EQUALS</code>, <code>IN</code>,
     * <code>NOT_IN</code> </p> </dd> <dt>PLATFORM</dt> <dd> <p>The device platform.
     * Valid values are ANDROID or IOS.</p> <p>Supported operators: <code>EQUALS</code>
     * </p> </dd> <dt>OS_VERSION</dt> <dd> <p>The operating system version (for
     * example, 10.3.2).</p> <p>Supported operators: <code>EQUALS</code>,
     * <code>GREATER_THAN</code>, <code>GREATER_THAN_OR_EQUALS</code>, <code>IN</code>,
     * <code>LESS_THAN</code>, <code>LESS_THAN_OR_EQUALS</code>, <code>NOT_IN</code>
     * </p> </dd> <dt>MODEL</dt> <dd> <p>The device model (for example, iPad 5th
     * Gen).</p> <p>Supported operators: <code>CONTAINS</code>, <code>EQUALS</code>,
     * <code>IN</code>, <code>NOT_IN</code> </p> </dd> <dt>AVAILABILITY</dt> <dd>
     * <p>The current availability of the device. Valid values are AVAILABLE,
     * HIGHLY_AVAILABLE, BUSY, or TEMPORARY_NOT_AVAILABLE.</p> <p>Supported operators:
     * <code>EQUALS</code> </p> </dd> <dt>FORM_FACTOR</dt> <dd> <p>The device form
     * factor. Valid values are PHONE or TABLET.</p> <p>Supported operators:
     * <code>EQUALS</code> </p> </dd> <dt>MANUFACTURER</dt> <dd> <p>The device
     * manufacturer (for example, Apple).</p> <p>Supported operators:
     * <code>EQUALS</code>, <code>IN</code>, <code>NOT_IN</code> </p> </dd>
     * <dt>REMOTE_ACCESS_ENABLED</dt> <dd> <p>Whether the device is enabled for remote
     * access. Valid values are TRUE or FALSE.</p> <p>Supported operators:
     * <code>EQUALS</code> </p> </dd> <dt>REMOTE_DEBUG_ENABLED</dt> <dd> <p>Whether the
     * device is enabled for remote debugging. Valid values are TRUE or FALSE.</p>
     * <p>Supported operators: <code>EQUALS</code> </p> <p>Because remote debugging is
     * <a
     * href="https://docs.aws.amazon.com/devicefarm/latest/developerguide/history.html">no
     * longer supported</a>, this filter is ignored.</p> </dd> <dt>INSTANCE_ARN</dt>
     * <dd> <p>The Amazon Resource Name (ARN) of the device instance.</p> <p>Supported
     * operators: <code>EQUALS</code>, <code>IN</code>, <code>NOT_IN</code> </p> </dd>
     * <dt>INSTANCE_LABELS</dt> <dd> <p>The label of the device instance.</p>
     * <p>Supported operators: <code>CONTAINS</code> </p> </dd> <dt>FLEET_TYPE</dt>
     * <dd> <p>The fleet type. Valid values are PUBLIC or PRIVATE.</p> <p>Supported
     * operators: <code>EQUALS</code> </p> </dd> </dl>
     */
    inline DeviceFilterAttribute GetAttribute() const { return m_attribute; }
    inline bool AttributeHasBeenSet() const { return m_attributeHasBeenSet; }
    inline void SetAttribute(DeviceFilterAttribute value) { m_attributeHasBeenSet = true; m_attribute = value; }
    inline DeviceFilter& WithAttribute(DeviceFilterAttribute value) { SetAttribute(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies how Device Farm compares the filter's attribute to the value. See
     * the attribute descriptions.</p>
     */
    inline RuleOperator GetOperator() const { return m_operator; }
    inline bool OperatorHasBeenSet() const { return m_operatorHasBeenSet; }
    inline void SetOperator(RuleOperator value) { m_operatorHasBeenSet = true; m_operator = value; }
    inline DeviceFilter& WithOperator(RuleOperator value) { SetOperator(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of one or more filter values used in a device filter.</p> <p
     * class="title"> <b>Operator Values</b> </p> <ul> <li> <p>The IN and NOT_IN
     * operators can take a values array that has more than one element.</p> </li> <li>
     * <p>The other operators require an array with a single element.</p> </li> </ul>
     * <p class="title"> <b>Attribute Values</b> </p> <ul> <li> <p>The PLATFORM
     * attribute can be set to ANDROID or IOS.</p> </li> <li> <p>The AVAILABILITY
     * attribute can be set to AVAILABLE, HIGHLY_AVAILABLE, BUSY, or
     * TEMPORARY_NOT_AVAILABLE.</p> </li> <li> <p>The FORM_FACTOR attribute can be set
     * to PHONE or TABLET.</p> </li> <li> <p>The FLEET_TYPE attribute can be set to
     * PUBLIC or PRIVATE.</p> </li> </ul>
     */
    inline const Aws::Vector<Aws::String>& GetValues() const { return m_values; }
    inline bool ValuesHasBeenSet() const { return m_valuesHasBeenSet; }
    template<typename ValuesT = Aws::Vector<Aws::String>>
    void SetValues(ValuesT&& value) { m_valuesHasBeenSet = true; m_values = std::forward<ValuesT>(value); }
    template<typename ValuesT = Aws::Vector<Aws::String>>
    DeviceFilter& WithValues(ValuesT&& value) { SetValues(std::forward<ValuesT>(value)); return *this;}
    template<typename ValuesT = Aws::String>
    DeviceFilter& AddValues(ValuesT&& value) { m_valuesHasBeenSet = true; m_values.emplace_back(std::forward<ValuesT>(value)); return *this; }
    ///@}
  private:

    DeviceFilterAttribute m_attribute{DeviceFilterAttribute::NOT_SET};
    bool m_attributeHasBeenSet = false;

    RuleOperator m_operator{RuleOperator::NOT_SET};
    bool m_operatorHasBeenSet = false;

    Aws::Vector<Aws::String> m_values;
    bool m_valuesHasBeenSet = false;
  };

} // namespace Model
} // namespace DeviceFarm
} // namespace Aws
