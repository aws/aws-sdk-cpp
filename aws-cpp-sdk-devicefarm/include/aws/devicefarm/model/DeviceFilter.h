/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
   * <code>deviceSelectionConfiguration</code> parameter to ScheduleRun. For an
   * example of the JSON request syntax, see <a>ScheduleRun</a>.</p> <p>It is also
   * passed in as the <code>filters</code> parameter to ListDevices. For an example
   * of the JSON request syntax, see <a>ListDevices</a>.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/DeviceFilter">AWS
   * API Reference</a></p>
   */
  class AWS_DEVICEFARM_API DeviceFilter
  {
  public:
    DeviceFilter();
    DeviceFilter(Aws::Utils::Json::JsonView jsonValue);
    DeviceFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The aspect of a device such as platform or model used as the selection
     * criteria in a device filter.</p> <p>The supported operators for each attribute
     * are provided in the following list.</p> <dl> <dt>ARN</dt> <dd> <p>The Amazon
     * Resource Name (ARN) of the device. For example,
     * "arn:aws:devicefarm:us-west-2::device:12345Example".</p> <p> <i>Supported
     * operators</i>: <code>EQUALS</code>, <code>IN</code>, <code>NOT_IN</code> </p>
     * </dd> <dt>PLATFORM</dt> <dd> <p>The device platform. Valid values are "ANDROID"
     * or "IOS".</p> <p> <i>Supported operators</i>: <code>EQUALS</code> </p> </dd>
     * <dt>OS_VERSION</dt> <dd> <p>The operating system version. For example,
     * "10.3.2".</p> <p> <i>Supported operators</i>: <code>EQUALS</code>,
     * <code>GREATER_THAN</code>, <code>GREATER_THAN_OR_EQUALS</code>, <code>IN</code>,
     * <code>LESS_THAN</code>, <code>LESS_THAN_OR_EQUALS</code>, <code>NOT_IN</code>
     * </p> </dd> <dt>MODEL</dt> <dd> <p>The device model. For example, "iPad 5th
     * Gen".</p> <p> <i>Supported operators</i>: <code>CONTAINS</code>,
     * <code>EQUALS</code>, <code>IN</code>, <code>NOT_IN</code> </p> </dd>
     * <dt>AVAILABILITY</dt> <dd> <p>The current availability of the device. Valid
     * values are "AVAILABLE", "HIGHLY_AVAILABLE", "BUSY", or
     * "TEMPORARY_NOT_AVAILABLE".</p> <p> <i>Supported operators</i>:
     * <code>EQUALS</code> </p> </dd> <dt>FORM_FACTOR</dt> <dd> <p>The device form
     * factor. Valid values are "PHONE" or "TABLET".</p> <p> <i>Supported
     * operators</i>: <code>EQUALS</code> </p> </dd> <dt>MANUFACTURER</dt> <dd> <p>The
     * device manufacturer. For example, "Apple".</p> <p> <i>Supported operators</i>:
     * <code>EQUALS</code>, <code>IN</code>, <code>NOT_IN</code> </p> </dd>
     * <dt>REMOTE_ACCESS_ENABLED</dt> <dd> <p>Whether the device is enabled for remote
     * access. Valid values are "TRUE" or "FALSE".</p> <p> <i>Supported operators</i>:
     * <code>EQUALS</code> </p> </dd> <dt>REMOTE_DEBUG_ENABLED</dt> <dd> <p>Whether the
     * device is enabled for remote debugging. Valid values are "TRUE" or "FALSE".</p>
     * <p> <i>Supported operators</i>: <code>EQUALS</code> </p> </dd>
     * <dt>INSTANCE_ARN</dt> <dd> <p>The Amazon Resource Name (ARN) of the device
     * instance.</p> <p> <i>Supported operators</i>: <code>EQUALS</code>,
     * <code>IN</code>, <code>NOT_IN</code> </p> </dd> <dt>INSTANCE_LABELS</dt> <dd>
     * <p>The label of the device instance.</p> <p> <i>Supported operators</i>:
     * <code>CONTAINS</code> </p> </dd> <dt>FLEET_TYPE</dt> <dd> <p>The fleet type.
     * Valid values are "PUBLIC" or "PRIVATE".</p> <p> <i>Supported operators</i>:
     * <code>EQUALS</code> </p> </dd> </dl>
     */
    inline const DeviceFilterAttribute& GetAttribute() const{ return m_attribute; }

    /**
     * <p>The aspect of a device such as platform or model used as the selection
     * criteria in a device filter.</p> <p>The supported operators for each attribute
     * are provided in the following list.</p> <dl> <dt>ARN</dt> <dd> <p>The Amazon
     * Resource Name (ARN) of the device. For example,
     * "arn:aws:devicefarm:us-west-2::device:12345Example".</p> <p> <i>Supported
     * operators</i>: <code>EQUALS</code>, <code>IN</code>, <code>NOT_IN</code> </p>
     * </dd> <dt>PLATFORM</dt> <dd> <p>The device platform. Valid values are "ANDROID"
     * or "IOS".</p> <p> <i>Supported operators</i>: <code>EQUALS</code> </p> </dd>
     * <dt>OS_VERSION</dt> <dd> <p>The operating system version. For example,
     * "10.3.2".</p> <p> <i>Supported operators</i>: <code>EQUALS</code>,
     * <code>GREATER_THAN</code>, <code>GREATER_THAN_OR_EQUALS</code>, <code>IN</code>,
     * <code>LESS_THAN</code>, <code>LESS_THAN_OR_EQUALS</code>, <code>NOT_IN</code>
     * </p> </dd> <dt>MODEL</dt> <dd> <p>The device model. For example, "iPad 5th
     * Gen".</p> <p> <i>Supported operators</i>: <code>CONTAINS</code>,
     * <code>EQUALS</code>, <code>IN</code>, <code>NOT_IN</code> </p> </dd>
     * <dt>AVAILABILITY</dt> <dd> <p>The current availability of the device. Valid
     * values are "AVAILABLE", "HIGHLY_AVAILABLE", "BUSY", or
     * "TEMPORARY_NOT_AVAILABLE".</p> <p> <i>Supported operators</i>:
     * <code>EQUALS</code> </p> </dd> <dt>FORM_FACTOR</dt> <dd> <p>The device form
     * factor. Valid values are "PHONE" or "TABLET".</p> <p> <i>Supported
     * operators</i>: <code>EQUALS</code> </p> </dd> <dt>MANUFACTURER</dt> <dd> <p>The
     * device manufacturer. For example, "Apple".</p> <p> <i>Supported operators</i>:
     * <code>EQUALS</code>, <code>IN</code>, <code>NOT_IN</code> </p> </dd>
     * <dt>REMOTE_ACCESS_ENABLED</dt> <dd> <p>Whether the device is enabled for remote
     * access. Valid values are "TRUE" or "FALSE".</p> <p> <i>Supported operators</i>:
     * <code>EQUALS</code> </p> </dd> <dt>REMOTE_DEBUG_ENABLED</dt> <dd> <p>Whether the
     * device is enabled for remote debugging. Valid values are "TRUE" or "FALSE".</p>
     * <p> <i>Supported operators</i>: <code>EQUALS</code> </p> </dd>
     * <dt>INSTANCE_ARN</dt> <dd> <p>The Amazon Resource Name (ARN) of the device
     * instance.</p> <p> <i>Supported operators</i>: <code>EQUALS</code>,
     * <code>IN</code>, <code>NOT_IN</code> </p> </dd> <dt>INSTANCE_LABELS</dt> <dd>
     * <p>The label of the device instance.</p> <p> <i>Supported operators</i>:
     * <code>CONTAINS</code> </p> </dd> <dt>FLEET_TYPE</dt> <dd> <p>The fleet type.
     * Valid values are "PUBLIC" or "PRIVATE".</p> <p> <i>Supported operators</i>:
     * <code>EQUALS</code> </p> </dd> </dl>
     */
    inline bool AttributeHasBeenSet() const { return m_attributeHasBeenSet; }

    /**
     * <p>The aspect of a device such as platform or model used as the selection
     * criteria in a device filter.</p> <p>The supported operators for each attribute
     * are provided in the following list.</p> <dl> <dt>ARN</dt> <dd> <p>The Amazon
     * Resource Name (ARN) of the device. For example,
     * "arn:aws:devicefarm:us-west-2::device:12345Example".</p> <p> <i>Supported
     * operators</i>: <code>EQUALS</code>, <code>IN</code>, <code>NOT_IN</code> </p>
     * </dd> <dt>PLATFORM</dt> <dd> <p>The device platform. Valid values are "ANDROID"
     * or "IOS".</p> <p> <i>Supported operators</i>: <code>EQUALS</code> </p> </dd>
     * <dt>OS_VERSION</dt> <dd> <p>The operating system version. For example,
     * "10.3.2".</p> <p> <i>Supported operators</i>: <code>EQUALS</code>,
     * <code>GREATER_THAN</code>, <code>GREATER_THAN_OR_EQUALS</code>, <code>IN</code>,
     * <code>LESS_THAN</code>, <code>LESS_THAN_OR_EQUALS</code>, <code>NOT_IN</code>
     * </p> </dd> <dt>MODEL</dt> <dd> <p>The device model. For example, "iPad 5th
     * Gen".</p> <p> <i>Supported operators</i>: <code>CONTAINS</code>,
     * <code>EQUALS</code>, <code>IN</code>, <code>NOT_IN</code> </p> </dd>
     * <dt>AVAILABILITY</dt> <dd> <p>The current availability of the device. Valid
     * values are "AVAILABLE", "HIGHLY_AVAILABLE", "BUSY", or
     * "TEMPORARY_NOT_AVAILABLE".</p> <p> <i>Supported operators</i>:
     * <code>EQUALS</code> </p> </dd> <dt>FORM_FACTOR</dt> <dd> <p>The device form
     * factor. Valid values are "PHONE" or "TABLET".</p> <p> <i>Supported
     * operators</i>: <code>EQUALS</code> </p> </dd> <dt>MANUFACTURER</dt> <dd> <p>The
     * device manufacturer. For example, "Apple".</p> <p> <i>Supported operators</i>:
     * <code>EQUALS</code>, <code>IN</code>, <code>NOT_IN</code> </p> </dd>
     * <dt>REMOTE_ACCESS_ENABLED</dt> <dd> <p>Whether the device is enabled for remote
     * access. Valid values are "TRUE" or "FALSE".</p> <p> <i>Supported operators</i>:
     * <code>EQUALS</code> </p> </dd> <dt>REMOTE_DEBUG_ENABLED</dt> <dd> <p>Whether the
     * device is enabled for remote debugging. Valid values are "TRUE" or "FALSE".</p>
     * <p> <i>Supported operators</i>: <code>EQUALS</code> </p> </dd>
     * <dt>INSTANCE_ARN</dt> <dd> <p>The Amazon Resource Name (ARN) of the device
     * instance.</p> <p> <i>Supported operators</i>: <code>EQUALS</code>,
     * <code>IN</code>, <code>NOT_IN</code> </p> </dd> <dt>INSTANCE_LABELS</dt> <dd>
     * <p>The label of the device instance.</p> <p> <i>Supported operators</i>:
     * <code>CONTAINS</code> </p> </dd> <dt>FLEET_TYPE</dt> <dd> <p>The fleet type.
     * Valid values are "PUBLIC" or "PRIVATE".</p> <p> <i>Supported operators</i>:
     * <code>EQUALS</code> </p> </dd> </dl>
     */
    inline void SetAttribute(const DeviceFilterAttribute& value) { m_attributeHasBeenSet = true; m_attribute = value; }

    /**
     * <p>The aspect of a device such as platform or model used as the selection
     * criteria in a device filter.</p> <p>The supported operators for each attribute
     * are provided in the following list.</p> <dl> <dt>ARN</dt> <dd> <p>The Amazon
     * Resource Name (ARN) of the device. For example,
     * "arn:aws:devicefarm:us-west-2::device:12345Example".</p> <p> <i>Supported
     * operators</i>: <code>EQUALS</code>, <code>IN</code>, <code>NOT_IN</code> </p>
     * </dd> <dt>PLATFORM</dt> <dd> <p>The device platform. Valid values are "ANDROID"
     * or "IOS".</p> <p> <i>Supported operators</i>: <code>EQUALS</code> </p> </dd>
     * <dt>OS_VERSION</dt> <dd> <p>The operating system version. For example,
     * "10.3.2".</p> <p> <i>Supported operators</i>: <code>EQUALS</code>,
     * <code>GREATER_THAN</code>, <code>GREATER_THAN_OR_EQUALS</code>, <code>IN</code>,
     * <code>LESS_THAN</code>, <code>LESS_THAN_OR_EQUALS</code>, <code>NOT_IN</code>
     * </p> </dd> <dt>MODEL</dt> <dd> <p>The device model. For example, "iPad 5th
     * Gen".</p> <p> <i>Supported operators</i>: <code>CONTAINS</code>,
     * <code>EQUALS</code>, <code>IN</code>, <code>NOT_IN</code> </p> </dd>
     * <dt>AVAILABILITY</dt> <dd> <p>The current availability of the device. Valid
     * values are "AVAILABLE", "HIGHLY_AVAILABLE", "BUSY", or
     * "TEMPORARY_NOT_AVAILABLE".</p> <p> <i>Supported operators</i>:
     * <code>EQUALS</code> </p> </dd> <dt>FORM_FACTOR</dt> <dd> <p>The device form
     * factor. Valid values are "PHONE" or "TABLET".</p> <p> <i>Supported
     * operators</i>: <code>EQUALS</code> </p> </dd> <dt>MANUFACTURER</dt> <dd> <p>The
     * device manufacturer. For example, "Apple".</p> <p> <i>Supported operators</i>:
     * <code>EQUALS</code>, <code>IN</code>, <code>NOT_IN</code> </p> </dd>
     * <dt>REMOTE_ACCESS_ENABLED</dt> <dd> <p>Whether the device is enabled for remote
     * access. Valid values are "TRUE" or "FALSE".</p> <p> <i>Supported operators</i>:
     * <code>EQUALS</code> </p> </dd> <dt>REMOTE_DEBUG_ENABLED</dt> <dd> <p>Whether the
     * device is enabled for remote debugging. Valid values are "TRUE" or "FALSE".</p>
     * <p> <i>Supported operators</i>: <code>EQUALS</code> </p> </dd>
     * <dt>INSTANCE_ARN</dt> <dd> <p>The Amazon Resource Name (ARN) of the device
     * instance.</p> <p> <i>Supported operators</i>: <code>EQUALS</code>,
     * <code>IN</code>, <code>NOT_IN</code> </p> </dd> <dt>INSTANCE_LABELS</dt> <dd>
     * <p>The label of the device instance.</p> <p> <i>Supported operators</i>:
     * <code>CONTAINS</code> </p> </dd> <dt>FLEET_TYPE</dt> <dd> <p>The fleet type.
     * Valid values are "PUBLIC" or "PRIVATE".</p> <p> <i>Supported operators</i>:
     * <code>EQUALS</code> </p> </dd> </dl>
     */
    inline void SetAttribute(DeviceFilterAttribute&& value) { m_attributeHasBeenSet = true; m_attribute = std::move(value); }

    /**
     * <p>The aspect of a device such as platform or model used as the selection
     * criteria in a device filter.</p> <p>The supported operators for each attribute
     * are provided in the following list.</p> <dl> <dt>ARN</dt> <dd> <p>The Amazon
     * Resource Name (ARN) of the device. For example,
     * "arn:aws:devicefarm:us-west-2::device:12345Example".</p> <p> <i>Supported
     * operators</i>: <code>EQUALS</code>, <code>IN</code>, <code>NOT_IN</code> </p>
     * </dd> <dt>PLATFORM</dt> <dd> <p>The device platform. Valid values are "ANDROID"
     * or "IOS".</p> <p> <i>Supported operators</i>: <code>EQUALS</code> </p> </dd>
     * <dt>OS_VERSION</dt> <dd> <p>The operating system version. For example,
     * "10.3.2".</p> <p> <i>Supported operators</i>: <code>EQUALS</code>,
     * <code>GREATER_THAN</code>, <code>GREATER_THAN_OR_EQUALS</code>, <code>IN</code>,
     * <code>LESS_THAN</code>, <code>LESS_THAN_OR_EQUALS</code>, <code>NOT_IN</code>
     * </p> </dd> <dt>MODEL</dt> <dd> <p>The device model. For example, "iPad 5th
     * Gen".</p> <p> <i>Supported operators</i>: <code>CONTAINS</code>,
     * <code>EQUALS</code>, <code>IN</code>, <code>NOT_IN</code> </p> </dd>
     * <dt>AVAILABILITY</dt> <dd> <p>The current availability of the device. Valid
     * values are "AVAILABLE", "HIGHLY_AVAILABLE", "BUSY", or
     * "TEMPORARY_NOT_AVAILABLE".</p> <p> <i>Supported operators</i>:
     * <code>EQUALS</code> </p> </dd> <dt>FORM_FACTOR</dt> <dd> <p>The device form
     * factor. Valid values are "PHONE" or "TABLET".</p> <p> <i>Supported
     * operators</i>: <code>EQUALS</code> </p> </dd> <dt>MANUFACTURER</dt> <dd> <p>The
     * device manufacturer. For example, "Apple".</p> <p> <i>Supported operators</i>:
     * <code>EQUALS</code>, <code>IN</code>, <code>NOT_IN</code> </p> </dd>
     * <dt>REMOTE_ACCESS_ENABLED</dt> <dd> <p>Whether the device is enabled for remote
     * access. Valid values are "TRUE" or "FALSE".</p> <p> <i>Supported operators</i>:
     * <code>EQUALS</code> </p> </dd> <dt>REMOTE_DEBUG_ENABLED</dt> <dd> <p>Whether the
     * device is enabled for remote debugging. Valid values are "TRUE" or "FALSE".</p>
     * <p> <i>Supported operators</i>: <code>EQUALS</code> </p> </dd>
     * <dt>INSTANCE_ARN</dt> <dd> <p>The Amazon Resource Name (ARN) of the device
     * instance.</p> <p> <i>Supported operators</i>: <code>EQUALS</code>,
     * <code>IN</code>, <code>NOT_IN</code> </p> </dd> <dt>INSTANCE_LABELS</dt> <dd>
     * <p>The label of the device instance.</p> <p> <i>Supported operators</i>:
     * <code>CONTAINS</code> </p> </dd> <dt>FLEET_TYPE</dt> <dd> <p>The fleet type.
     * Valid values are "PUBLIC" or "PRIVATE".</p> <p> <i>Supported operators</i>:
     * <code>EQUALS</code> </p> </dd> </dl>
     */
    inline DeviceFilter& WithAttribute(const DeviceFilterAttribute& value) { SetAttribute(value); return *this;}

    /**
     * <p>The aspect of a device such as platform or model used as the selection
     * criteria in a device filter.</p> <p>The supported operators for each attribute
     * are provided in the following list.</p> <dl> <dt>ARN</dt> <dd> <p>The Amazon
     * Resource Name (ARN) of the device. For example,
     * "arn:aws:devicefarm:us-west-2::device:12345Example".</p> <p> <i>Supported
     * operators</i>: <code>EQUALS</code>, <code>IN</code>, <code>NOT_IN</code> </p>
     * </dd> <dt>PLATFORM</dt> <dd> <p>The device platform. Valid values are "ANDROID"
     * or "IOS".</p> <p> <i>Supported operators</i>: <code>EQUALS</code> </p> </dd>
     * <dt>OS_VERSION</dt> <dd> <p>The operating system version. For example,
     * "10.3.2".</p> <p> <i>Supported operators</i>: <code>EQUALS</code>,
     * <code>GREATER_THAN</code>, <code>GREATER_THAN_OR_EQUALS</code>, <code>IN</code>,
     * <code>LESS_THAN</code>, <code>LESS_THAN_OR_EQUALS</code>, <code>NOT_IN</code>
     * </p> </dd> <dt>MODEL</dt> <dd> <p>The device model. For example, "iPad 5th
     * Gen".</p> <p> <i>Supported operators</i>: <code>CONTAINS</code>,
     * <code>EQUALS</code>, <code>IN</code>, <code>NOT_IN</code> </p> </dd>
     * <dt>AVAILABILITY</dt> <dd> <p>The current availability of the device. Valid
     * values are "AVAILABLE", "HIGHLY_AVAILABLE", "BUSY", or
     * "TEMPORARY_NOT_AVAILABLE".</p> <p> <i>Supported operators</i>:
     * <code>EQUALS</code> </p> </dd> <dt>FORM_FACTOR</dt> <dd> <p>The device form
     * factor. Valid values are "PHONE" or "TABLET".</p> <p> <i>Supported
     * operators</i>: <code>EQUALS</code> </p> </dd> <dt>MANUFACTURER</dt> <dd> <p>The
     * device manufacturer. For example, "Apple".</p> <p> <i>Supported operators</i>:
     * <code>EQUALS</code>, <code>IN</code>, <code>NOT_IN</code> </p> </dd>
     * <dt>REMOTE_ACCESS_ENABLED</dt> <dd> <p>Whether the device is enabled for remote
     * access. Valid values are "TRUE" or "FALSE".</p> <p> <i>Supported operators</i>:
     * <code>EQUALS</code> </p> </dd> <dt>REMOTE_DEBUG_ENABLED</dt> <dd> <p>Whether the
     * device is enabled for remote debugging. Valid values are "TRUE" or "FALSE".</p>
     * <p> <i>Supported operators</i>: <code>EQUALS</code> </p> </dd>
     * <dt>INSTANCE_ARN</dt> <dd> <p>The Amazon Resource Name (ARN) of the device
     * instance.</p> <p> <i>Supported operators</i>: <code>EQUALS</code>,
     * <code>IN</code>, <code>NOT_IN</code> </p> </dd> <dt>INSTANCE_LABELS</dt> <dd>
     * <p>The label of the device instance.</p> <p> <i>Supported operators</i>:
     * <code>CONTAINS</code> </p> </dd> <dt>FLEET_TYPE</dt> <dd> <p>The fleet type.
     * Valid values are "PUBLIC" or "PRIVATE".</p> <p> <i>Supported operators</i>:
     * <code>EQUALS</code> </p> </dd> </dl>
     */
    inline DeviceFilter& WithAttribute(DeviceFilterAttribute&& value) { SetAttribute(std::move(value)); return *this;}


    /**
     * <p>Specifies how Device Farm compares the filter's attribute to the value. For
     * the operators that are supported by each attribute, see the attribute
     * descriptions.</p>
     */
    inline const RuleOperator& GetOperator() const{ return m_operator; }

    /**
     * <p>Specifies how Device Farm compares the filter's attribute to the value. For
     * the operators that are supported by each attribute, see the attribute
     * descriptions.</p>
     */
    inline bool OperatorHasBeenSet() const { return m_operatorHasBeenSet; }

    /**
     * <p>Specifies how Device Farm compares the filter's attribute to the value. For
     * the operators that are supported by each attribute, see the attribute
     * descriptions.</p>
     */
    inline void SetOperator(const RuleOperator& value) { m_operatorHasBeenSet = true; m_operator = value; }

    /**
     * <p>Specifies how Device Farm compares the filter's attribute to the value. For
     * the operators that are supported by each attribute, see the attribute
     * descriptions.</p>
     */
    inline void SetOperator(RuleOperator&& value) { m_operatorHasBeenSet = true; m_operator = std::move(value); }

    /**
     * <p>Specifies how Device Farm compares the filter's attribute to the value. For
     * the operators that are supported by each attribute, see the attribute
     * descriptions.</p>
     */
    inline DeviceFilter& WithOperator(const RuleOperator& value) { SetOperator(value); return *this;}

    /**
     * <p>Specifies how Device Farm compares the filter's attribute to the value. For
     * the operators that are supported by each attribute, see the attribute
     * descriptions.</p>
     */
    inline DeviceFilter& WithOperator(RuleOperator&& value) { SetOperator(std::move(value)); return *this;}


    /**
     * <p>An array of one or more filter values used in a device filter.</p> <p
     * class="title"> <b>Operator Values</b> </p> <ul> <li> <p>The IN and NOT_IN
     * operators can take a values array that has more than one element.</p> </li> <li>
     * <p>The other operators require an array with a single element.</p> </li> </ul>
     * <p class="title"> <b>Attribute Values</b> </p> <ul> <li> <p>The PLATFORM
     * attribute can be set to "ANDROID" or "IOS".</p> </li> <li> <p>The AVAILABILITY
     * attribute can be set to "AVAILABLE", "HIGHLY_AVAILABLE", "BUSY", or
     * "TEMPORARY_NOT_AVAILABLE".</p> </li> <li> <p>The FORM_FACTOR attribute can be
     * set to "PHONE" or "TABLET".</p> </li> <li> <p>The FLEET_TYPE attribute can be
     * set to "PUBLIC" or "PRIVATE".</p> </li> </ul>
     */
    inline const Aws::Vector<Aws::String>& GetValues() const{ return m_values; }

    /**
     * <p>An array of one or more filter values used in a device filter.</p> <p
     * class="title"> <b>Operator Values</b> </p> <ul> <li> <p>The IN and NOT_IN
     * operators can take a values array that has more than one element.</p> </li> <li>
     * <p>The other operators require an array with a single element.</p> </li> </ul>
     * <p class="title"> <b>Attribute Values</b> </p> <ul> <li> <p>The PLATFORM
     * attribute can be set to "ANDROID" or "IOS".</p> </li> <li> <p>The AVAILABILITY
     * attribute can be set to "AVAILABLE", "HIGHLY_AVAILABLE", "BUSY", or
     * "TEMPORARY_NOT_AVAILABLE".</p> </li> <li> <p>The FORM_FACTOR attribute can be
     * set to "PHONE" or "TABLET".</p> </li> <li> <p>The FLEET_TYPE attribute can be
     * set to "PUBLIC" or "PRIVATE".</p> </li> </ul>
     */
    inline bool ValuesHasBeenSet() const { return m_valuesHasBeenSet; }

    /**
     * <p>An array of one or more filter values used in a device filter.</p> <p
     * class="title"> <b>Operator Values</b> </p> <ul> <li> <p>The IN and NOT_IN
     * operators can take a values array that has more than one element.</p> </li> <li>
     * <p>The other operators require an array with a single element.</p> </li> </ul>
     * <p class="title"> <b>Attribute Values</b> </p> <ul> <li> <p>The PLATFORM
     * attribute can be set to "ANDROID" or "IOS".</p> </li> <li> <p>The AVAILABILITY
     * attribute can be set to "AVAILABLE", "HIGHLY_AVAILABLE", "BUSY", or
     * "TEMPORARY_NOT_AVAILABLE".</p> </li> <li> <p>The FORM_FACTOR attribute can be
     * set to "PHONE" or "TABLET".</p> </li> <li> <p>The FLEET_TYPE attribute can be
     * set to "PUBLIC" or "PRIVATE".</p> </li> </ul>
     */
    inline void SetValues(const Aws::Vector<Aws::String>& value) { m_valuesHasBeenSet = true; m_values = value; }

    /**
     * <p>An array of one or more filter values used in a device filter.</p> <p
     * class="title"> <b>Operator Values</b> </p> <ul> <li> <p>The IN and NOT_IN
     * operators can take a values array that has more than one element.</p> </li> <li>
     * <p>The other operators require an array with a single element.</p> </li> </ul>
     * <p class="title"> <b>Attribute Values</b> </p> <ul> <li> <p>The PLATFORM
     * attribute can be set to "ANDROID" or "IOS".</p> </li> <li> <p>The AVAILABILITY
     * attribute can be set to "AVAILABLE", "HIGHLY_AVAILABLE", "BUSY", or
     * "TEMPORARY_NOT_AVAILABLE".</p> </li> <li> <p>The FORM_FACTOR attribute can be
     * set to "PHONE" or "TABLET".</p> </li> <li> <p>The FLEET_TYPE attribute can be
     * set to "PUBLIC" or "PRIVATE".</p> </li> </ul>
     */
    inline void SetValues(Aws::Vector<Aws::String>&& value) { m_valuesHasBeenSet = true; m_values = std::move(value); }

    /**
     * <p>An array of one or more filter values used in a device filter.</p> <p
     * class="title"> <b>Operator Values</b> </p> <ul> <li> <p>The IN and NOT_IN
     * operators can take a values array that has more than one element.</p> </li> <li>
     * <p>The other operators require an array with a single element.</p> </li> </ul>
     * <p class="title"> <b>Attribute Values</b> </p> <ul> <li> <p>The PLATFORM
     * attribute can be set to "ANDROID" or "IOS".</p> </li> <li> <p>The AVAILABILITY
     * attribute can be set to "AVAILABLE", "HIGHLY_AVAILABLE", "BUSY", or
     * "TEMPORARY_NOT_AVAILABLE".</p> </li> <li> <p>The FORM_FACTOR attribute can be
     * set to "PHONE" or "TABLET".</p> </li> <li> <p>The FLEET_TYPE attribute can be
     * set to "PUBLIC" or "PRIVATE".</p> </li> </ul>
     */
    inline DeviceFilter& WithValues(const Aws::Vector<Aws::String>& value) { SetValues(value); return *this;}

    /**
     * <p>An array of one or more filter values used in a device filter.</p> <p
     * class="title"> <b>Operator Values</b> </p> <ul> <li> <p>The IN and NOT_IN
     * operators can take a values array that has more than one element.</p> </li> <li>
     * <p>The other operators require an array with a single element.</p> </li> </ul>
     * <p class="title"> <b>Attribute Values</b> </p> <ul> <li> <p>The PLATFORM
     * attribute can be set to "ANDROID" or "IOS".</p> </li> <li> <p>The AVAILABILITY
     * attribute can be set to "AVAILABLE", "HIGHLY_AVAILABLE", "BUSY", or
     * "TEMPORARY_NOT_AVAILABLE".</p> </li> <li> <p>The FORM_FACTOR attribute can be
     * set to "PHONE" or "TABLET".</p> </li> <li> <p>The FLEET_TYPE attribute can be
     * set to "PUBLIC" or "PRIVATE".</p> </li> </ul>
     */
    inline DeviceFilter& WithValues(Aws::Vector<Aws::String>&& value) { SetValues(std::move(value)); return *this;}

    /**
     * <p>An array of one or more filter values used in a device filter.</p> <p
     * class="title"> <b>Operator Values</b> </p> <ul> <li> <p>The IN and NOT_IN
     * operators can take a values array that has more than one element.</p> </li> <li>
     * <p>The other operators require an array with a single element.</p> </li> </ul>
     * <p class="title"> <b>Attribute Values</b> </p> <ul> <li> <p>The PLATFORM
     * attribute can be set to "ANDROID" or "IOS".</p> </li> <li> <p>The AVAILABILITY
     * attribute can be set to "AVAILABLE", "HIGHLY_AVAILABLE", "BUSY", or
     * "TEMPORARY_NOT_AVAILABLE".</p> </li> <li> <p>The FORM_FACTOR attribute can be
     * set to "PHONE" or "TABLET".</p> </li> <li> <p>The FLEET_TYPE attribute can be
     * set to "PUBLIC" or "PRIVATE".</p> </li> </ul>
     */
    inline DeviceFilter& AddValues(const Aws::String& value) { m_valuesHasBeenSet = true; m_values.push_back(value); return *this; }

    /**
     * <p>An array of one or more filter values used in a device filter.</p> <p
     * class="title"> <b>Operator Values</b> </p> <ul> <li> <p>The IN and NOT_IN
     * operators can take a values array that has more than one element.</p> </li> <li>
     * <p>The other operators require an array with a single element.</p> </li> </ul>
     * <p class="title"> <b>Attribute Values</b> </p> <ul> <li> <p>The PLATFORM
     * attribute can be set to "ANDROID" or "IOS".</p> </li> <li> <p>The AVAILABILITY
     * attribute can be set to "AVAILABLE", "HIGHLY_AVAILABLE", "BUSY", or
     * "TEMPORARY_NOT_AVAILABLE".</p> </li> <li> <p>The FORM_FACTOR attribute can be
     * set to "PHONE" or "TABLET".</p> </li> <li> <p>The FLEET_TYPE attribute can be
     * set to "PUBLIC" or "PRIVATE".</p> </li> </ul>
     */
    inline DeviceFilter& AddValues(Aws::String&& value) { m_valuesHasBeenSet = true; m_values.push_back(std::move(value)); return *this; }

    /**
     * <p>An array of one or more filter values used in a device filter.</p> <p
     * class="title"> <b>Operator Values</b> </p> <ul> <li> <p>The IN and NOT_IN
     * operators can take a values array that has more than one element.</p> </li> <li>
     * <p>The other operators require an array with a single element.</p> </li> </ul>
     * <p class="title"> <b>Attribute Values</b> </p> <ul> <li> <p>The PLATFORM
     * attribute can be set to "ANDROID" or "IOS".</p> </li> <li> <p>The AVAILABILITY
     * attribute can be set to "AVAILABLE", "HIGHLY_AVAILABLE", "BUSY", or
     * "TEMPORARY_NOT_AVAILABLE".</p> </li> <li> <p>The FORM_FACTOR attribute can be
     * set to "PHONE" or "TABLET".</p> </li> <li> <p>The FLEET_TYPE attribute can be
     * set to "PUBLIC" or "PRIVATE".</p> </li> </ul>
     */
    inline DeviceFilter& AddValues(const char* value) { m_valuesHasBeenSet = true; m_values.push_back(value); return *this; }

  private:

    DeviceFilterAttribute m_attribute;
    bool m_attributeHasBeenSet;

    RuleOperator m_operator;
    bool m_operatorHasBeenSet;

    Aws::Vector<Aws::String> m_values;
    bool m_valuesHasBeenSet;
  };

} // namespace Model
} // namespace DeviceFarm
} // namespace Aws
