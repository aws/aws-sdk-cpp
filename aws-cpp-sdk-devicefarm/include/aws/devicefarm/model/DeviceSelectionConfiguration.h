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
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/devicefarm/model/DeviceFilter.h>
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
   * <p>Represents the device filters used in a test run as well as the maximum
   * number of devices to be included in the run. It is passed in as the
   * <code>deviceSelectionConfiguration</code> request parameter in
   * <a>ScheduleRun</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/DeviceSelectionConfiguration">AWS
   * API Reference</a></p>
   */
  class AWS_DEVICEFARM_API DeviceSelectionConfiguration
  {
  public:
    DeviceSelectionConfiguration();
    DeviceSelectionConfiguration(Aws::Utils::Json::JsonView jsonValue);
    DeviceSelectionConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Used to dynamically select a set of devices for a test run. A filter is made
     * up of an attribute, an operator, and one or more values.</p> <ul> <li> <p>
     * <b>Attribute</b> </p> <p>The aspect of a device such as platform or model used
     * as the selection criteria in a device filter.</p> <p>Allowed values include:</p>
     * <ul> <li> <p>ARN: The Amazon Resource Name (ARN) of the device. For example,
     * "arn:aws:devicefarm:us-west-2::device:12345Example".</p> </li> <li> <p>PLATFORM:
     * The device platform. Valid values are "ANDROID" or "IOS".</p> </li> <li>
     * <p>OS_VERSION: The operating system version. For example, "10.3.2".</p> </li>
     * <li> <p>MODEL: The device model. For example, "iPad 5th Gen".</p> </li> <li>
     * <p>AVAILABILITY: The current availability of the device. Valid values are
     * "AVAILABLE", "HIGHLY_AVAILABLE", "BUSY", or "TEMPORARY_NOT_AVAILABLE".</p> </li>
     * <li> <p>FORM_FACTOR: The device form factor. Valid values are "PHONE" or
     * "TABLET".</p> </li> <li> <p>MANUFACTURER: The device manufacturer. For example,
     * "Apple".</p> </li> <li> <p>REMOTE_ACCESS_ENABLED: Whether the device is enabled
     * for remote access. Valid values are "TRUE" or "FALSE".</p> </li> <li>
     * <p>REMOTE_DEBUG_ENABLED: Whether the device is enabled for remote debugging.
     * Valid values are "TRUE" or "FALSE".</p> </li> <li> <p>INSTANCE_ARN: The Amazon
     * Resource Name (ARN) of the device instance.</p> </li> <li> <p>INSTANCE_LABELS:
     * The label of the device instance.</p> </li> <li> <p>FLEET_TYPE: The fleet type.
     * Valid values are "PUBLIC" or "PRIVATE".</p> </li> </ul> </li> <li> <p>
     * <b>Operator</b> </p> <p>The filter operator.</p> <ul> <li> <p>The EQUALS
     * operator is available for every attribute except INSTANCE_LABELS.</p> </li> <li>
     * <p>The CONTAINS operator is available for the INSTANCE_LABELS and MODEL
     * attributes.</p> </li> <li> <p>The IN and NOT_IN operators are available for the
     * ARN, OS_VERSION, MODEL, MANUFACTURER, and INSTANCE_ARN attributes.</p> </li>
     * <li> <p>The LESS_THAN, GREATER_THAN, LESS_THAN_OR_EQUALS, and
     * GREATER_THAN_OR_EQUALS operators are also available for the OS_VERSION
     * attribute.</p> </li> </ul> </li> <li> <p> <b>Values</b> </p> <p>An array of one
     * or more filter values.</p> <p class="title"> <b>Operator Values</b> </p> <ul>
     * <li> <p>The IN and NOT_IN operators can take a values array that has more than
     * one element.</p> </li> <li> <p>The other operators require an array with a
     * single element.</p> </li> </ul> <p class="title"> <b>Attribute Values</b> </p>
     * <ul> <li> <p>The PLATFORM attribute can be set to "ANDROID" or "IOS".</p> </li>
     * <li> <p>The AVAILABILITY attribute can be set to "AVAILABLE",
     * "HIGHLY_AVAILABLE", "BUSY", or "TEMPORARY_NOT_AVAILABLE".</p> </li> <li> <p>The
     * FORM_FACTOR attribute can be set to "PHONE" or "TABLET".</p> </li> <li> <p>The
     * FLEET_TYPE attribute can be set to "PUBLIC" or "PRIVATE".</p> </li> </ul> </li>
     * </ul>
     */
    inline const Aws::Vector<DeviceFilter>& GetFilters() const{ return m_filters; }

    /**
     * <p>Used to dynamically select a set of devices for a test run. A filter is made
     * up of an attribute, an operator, and one or more values.</p> <ul> <li> <p>
     * <b>Attribute</b> </p> <p>The aspect of a device such as platform or model used
     * as the selection criteria in a device filter.</p> <p>Allowed values include:</p>
     * <ul> <li> <p>ARN: The Amazon Resource Name (ARN) of the device. For example,
     * "arn:aws:devicefarm:us-west-2::device:12345Example".</p> </li> <li> <p>PLATFORM:
     * The device platform. Valid values are "ANDROID" or "IOS".</p> </li> <li>
     * <p>OS_VERSION: The operating system version. For example, "10.3.2".</p> </li>
     * <li> <p>MODEL: The device model. For example, "iPad 5th Gen".</p> </li> <li>
     * <p>AVAILABILITY: The current availability of the device. Valid values are
     * "AVAILABLE", "HIGHLY_AVAILABLE", "BUSY", or "TEMPORARY_NOT_AVAILABLE".</p> </li>
     * <li> <p>FORM_FACTOR: The device form factor. Valid values are "PHONE" or
     * "TABLET".</p> </li> <li> <p>MANUFACTURER: The device manufacturer. For example,
     * "Apple".</p> </li> <li> <p>REMOTE_ACCESS_ENABLED: Whether the device is enabled
     * for remote access. Valid values are "TRUE" or "FALSE".</p> </li> <li>
     * <p>REMOTE_DEBUG_ENABLED: Whether the device is enabled for remote debugging.
     * Valid values are "TRUE" or "FALSE".</p> </li> <li> <p>INSTANCE_ARN: The Amazon
     * Resource Name (ARN) of the device instance.</p> </li> <li> <p>INSTANCE_LABELS:
     * The label of the device instance.</p> </li> <li> <p>FLEET_TYPE: The fleet type.
     * Valid values are "PUBLIC" or "PRIVATE".</p> </li> </ul> </li> <li> <p>
     * <b>Operator</b> </p> <p>The filter operator.</p> <ul> <li> <p>The EQUALS
     * operator is available for every attribute except INSTANCE_LABELS.</p> </li> <li>
     * <p>The CONTAINS operator is available for the INSTANCE_LABELS and MODEL
     * attributes.</p> </li> <li> <p>The IN and NOT_IN operators are available for the
     * ARN, OS_VERSION, MODEL, MANUFACTURER, and INSTANCE_ARN attributes.</p> </li>
     * <li> <p>The LESS_THAN, GREATER_THAN, LESS_THAN_OR_EQUALS, and
     * GREATER_THAN_OR_EQUALS operators are also available for the OS_VERSION
     * attribute.</p> </li> </ul> </li> <li> <p> <b>Values</b> </p> <p>An array of one
     * or more filter values.</p> <p class="title"> <b>Operator Values</b> </p> <ul>
     * <li> <p>The IN and NOT_IN operators can take a values array that has more than
     * one element.</p> </li> <li> <p>The other operators require an array with a
     * single element.</p> </li> </ul> <p class="title"> <b>Attribute Values</b> </p>
     * <ul> <li> <p>The PLATFORM attribute can be set to "ANDROID" or "IOS".</p> </li>
     * <li> <p>The AVAILABILITY attribute can be set to "AVAILABLE",
     * "HIGHLY_AVAILABLE", "BUSY", or "TEMPORARY_NOT_AVAILABLE".</p> </li> <li> <p>The
     * FORM_FACTOR attribute can be set to "PHONE" or "TABLET".</p> </li> <li> <p>The
     * FLEET_TYPE attribute can be set to "PUBLIC" or "PRIVATE".</p> </li> </ul> </li>
     * </ul>
     */
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }

    /**
     * <p>Used to dynamically select a set of devices for a test run. A filter is made
     * up of an attribute, an operator, and one or more values.</p> <ul> <li> <p>
     * <b>Attribute</b> </p> <p>The aspect of a device such as platform or model used
     * as the selection criteria in a device filter.</p> <p>Allowed values include:</p>
     * <ul> <li> <p>ARN: The Amazon Resource Name (ARN) of the device. For example,
     * "arn:aws:devicefarm:us-west-2::device:12345Example".</p> </li> <li> <p>PLATFORM:
     * The device platform. Valid values are "ANDROID" or "IOS".</p> </li> <li>
     * <p>OS_VERSION: The operating system version. For example, "10.3.2".</p> </li>
     * <li> <p>MODEL: The device model. For example, "iPad 5th Gen".</p> </li> <li>
     * <p>AVAILABILITY: The current availability of the device. Valid values are
     * "AVAILABLE", "HIGHLY_AVAILABLE", "BUSY", or "TEMPORARY_NOT_AVAILABLE".</p> </li>
     * <li> <p>FORM_FACTOR: The device form factor. Valid values are "PHONE" or
     * "TABLET".</p> </li> <li> <p>MANUFACTURER: The device manufacturer. For example,
     * "Apple".</p> </li> <li> <p>REMOTE_ACCESS_ENABLED: Whether the device is enabled
     * for remote access. Valid values are "TRUE" or "FALSE".</p> </li> <li>
     * <p>REMOTE_DEBUG_ENABLED: Whether the device is enabled for remote debugging.
     * Valid values are "TRUE" or "FALSE".</p> </li> <li> <p>INSTANCE_ARN: The Amazon
     * Resource Name (ARN) of the device instance.</p> </li> <li> <p>INSTANCE_LABELS:
     * The label of the device instance.</p> </li> <li> <p>FLEET_TYPE: The fleet type.
     * Valid values are "PUBLIC" or "PRIVATE".</p> </li> </ul> </li> <li> <p>
     * <b>Operator</b> </p> <p>The filter operator.</p> <ul> <li> <p>The EQUALS
     * operator is available for every attribute except INSTANCE_LABELS.</p> </li> <li>
     * <p>The CONTAINS operator is available for the INSTANCE_LABELS and MODEL
     * attributes.</p> </li> <li> <p>The IN and NOT_IN operators are available for the
     * ARN, OS_VERSION, MODEL, MANUFACTURER, and INSTANCE_ARN attributes.</p> </li>
     * <li> <p>The LESS_THAN, GREATER_THAN, LESS_THAN_OR_EQUALS, and
     * GREATER_THAN_OR_EQUALS operators are also available for the OS_VERSION
     * attribute.</p> </li> </ul> </li> <li> <p> <b>Values</b> </p> <p>An array of one
     * or more filter values.</p> <p class="title"> <b>Operator Values</b> </p> <ul>
     * <li> <p>The IN and NOT_IN operators can take a values array that has more than
     * one element.</p> </li> <li> <p>The other operators require an array with a
     * single element.</p> </li> </ul> <p class="title"> <b>Attribute Values</b> </p>
     * <ul> <li> <p>The PLATFORM attribute can be set to "ANDROID" or "IOS".</p> </li>
     * <li> <p>The AVAILABILITY attribute can be set to "AVAILABLE",
     * "HIGHLY_AVAILABLE", "BUSY", or "TEMPORARY_NOT_AVAILABLE".</p> </li> <li> <p>The
     * FORM_FACTOR attribute can be set to "PHONE" or "TABLET".</p> </li> <li> <p>The
     * FLEET_TYPE attribute can be set to "PUBLIC" or "PRIVATE".</p> </li> </ul> </li>
     * </ul>
     */
    inline void SetFilters(const Aws::Vector<DeviceFilter>& value) { m_filtersHasBeenSet = true; m_filters = value; }

    /**
     * <p>Used to dynamically select a set of devices for a test run. A filter is made
     * up of an attribute, an operator, and one or more values.</p> <ul> <li> <p>
     * <b>Attribute</b> </p> <p>The aspect of a device such as platform or model used
     * as the selection criteria in a device filter.</p> <p>Allowed values include:</p>
     * <ul> <li> <p>ARN: The Amazon Resource Name (ARN) of the device. For example,
     * "arn:aws:devicefarm:us-west-2::device:12345Example".</p> </li> <li> <p>PLATFORM:
     * The device platform. Valid values are "ANDROID" or "IOS".</p> </li> <li>
     * <p>OS_VERSION: The operating system version. For example, "10.3.2".</p> </li>
     * <li> <p>MODEL: The device model. For example, "iPad 5th Gen".</p> </li> <li>
     * <p>AVAILABILITY: The current availability of the device. Valid values are
     * "AVAILABLE", "HIGHLY_AVAILABLE", "BUSY", or "TEMPORARY_NOT_AVAILABLE".</p> </li>
     * <li> <p>FORM_FACTOR: The device form factor. Valid values are "PHONE" or
     * "TABLET".</p> </li> <li> <p>MANUFACTURER: The device manufacturer. For example,
     * "Apple".</p> </li> <li> <p>REMOTE_ACCESS_ENABLED: Whether the device is enabled
     * for remote access. Valid values are "TRUE" or "FALSE".</p> </li> <li>
     * <p>REMOTE_DEBUG_ENABLED: Whether the device is enabled for remote debugging.
     * Valid values are "TRUE" or "FALSE".</p> </li> <li> <p>INSTANCE_ARN: The Amazon
     * Resource Name (ARN) of the device instance.</p> </li> <li> <p>INSTANCE_LABELS:
     * The label of the device instance.</p> </li> <li> <p>FLEET_TYPE: The fleet type.
     * Valid values are "PUBLIC" or "PRIVATE".</p> </li> </ul> </li> <li> <p>
     * <b>Operator</b> </p> <p>The filter operator.</p> <ul> <li> <p>The EQUALS
     * operator is available for every attribute except INSTANCE_LABELS.</p> </li> <li>
     * <p>The CONTAINS operator is available for the INSTANCE_LABELS and MODEL
     * attributes.</p> </li> <li> <p>The IN and NOT_IN operators are available for the
     * ARN, OS_VERSION, MODEL, MANUFACTURER, and INSTANCE_ARN attributes.</p> </li>
     * <li> <p>The LESS_THAN, GREATER_THAN, LESS_THAN_OR_EQUALS, and
     * GREATER_THAN_OR_EQUALS operators are also available for the OS_VERSION
     * attribute.</p> </li> </ul> </li> <li> <p> <b>Values</b> </p> <p>An array of one
     * or more filter values.</p> <p class="title"> <b>Operator Values</b> </p> <ul>
     * <li> <p>The IN and NOT_IN operators can take a values array that has more than
     * one element.</p> </li> <li> <p>The other operators require an array with a
     * single element.</p> </li> </ul> <p class="title"> <b>Attribute Values</b> </p>
     * <ul> <li> <p>The PLATFORM attribute can be set to "ANDROID" or "IOS".</p> </li>
     * <li> <p>The AVAILABILITY attribute can be set to "AVAILABLE",
     * "HIGHLY_AVAILABLE", "BUSY", or "TEMPORARY_NOT_AVAILABLE".</p> </li> <li> <p>The
     * FORM_FACTOR attribute can be set to "PHONE" or "TABLET".</p> </li> <li> <p>The
     * FLEET_TYPE attribute can be set to "PUBLIC" or "PRIVATE".</p> </li> </ul> </li>
     * </ul>
     */
    inline void SetFilters(Aws::Vector<DeviceFilter>&& value) { m_filtersHasBeenSet = true; m_filters = std::move(value); }

    /**
     * <p>Used to dynamically select a set of devices for a test run. A filter is made
     * up of an attribute, an operator, and one or more values.</p> <ul> <li> <p>
     * <b>Attribute</b> </p> <p>The aspect of a device such as platform or model used
     * as the selection criteria in a device filter.</p> <p>Allowed values include:</p>
     * <ul> <li> <p>ARN: The Amazon Resource Name (ARN) of the device. For example,
     * "arn:aws:devicefarm:us-west-2::device:12345Example".</p> </li> <li> <p>PLATFORM:
     * The device platform. Valid values are "ANDROID" or "IOS".</p> </li> <li>
     * <p>OS_VERSION: The operating system version. For example, "10.3.2".</p> </li>
     * <li> <p>MODEL: The device model. For example, "iPad 5th Gen".</p> </li> <li>
     * <p>AVAILABILITY: The current availability of the device. Valid values are
     * "AVAILABLE", "HIGHLY_AVAILABLE", "BUSY", or "TEMPORARY_NOT_AVAILABLE".</p> </li>
     * <li> <p>FORM_FACTOR: The device form factor. Valid values are "PHONE" or
     * "TABLET".</p> </li> <li> <p>MANUFACTURER: The device manufacturer. For example,
     * "Apple".</p> </li> <li> <p>REMOTE_ACCESS_ENABLED: Whether the device is enabled
     * for remote access. Valid values are "TRUE" or "FALSE".</p> </li> <li>
     * <p>REMOTE_DEBUG_ENABLED: Whether the device is enabled for remote debugging.
     * Valid values are "TRUE" or "FALSE".</p> </li> <li> <p>INSTANCE_ARN: The Amazon
     * Resource Name (ARN) of the device instance.</p> </li> <li> <p>INSTANCE_LABELS:
     * The label of the device instance.</p> </li> <li> <p>FLEET_TYPE: The fleet type.
     * Valid values are "PUBLIC" or "PRIVATE".</p> </li> </ul> </li> <li> <p>
     * <b>Operator</b> </p> <p>The filter operator.</p> <ul> <li> <p>The EQUALS
     * operator is available for every attribute except INSTANCE_LABELS.</p> </li> <li>
     * <p>The CONTAINS operator is available for the INSTANCE_LABELS and MODEL
     * attributes.</p> </li> <li> <p>The IN and NOT_IN operators are available for the
     * ARN, OS_VERSION, MODEL, MANUFACTURER, and INSTANCE_ARN attributes.</p> </li>
     * <li> <p>The LESS_THAN, GREATER_THAN, LESS_THAN_OR_EQUALS, and
     * GREATER_THAN_OR_EQUALS operators are also available for the OS_VERSION
     * attribute.</p> </li> </ul> </li> <li> <p> <b>Values</b> </p> <p>An array of one
     * or more filter values.</p> <p class="title"> <b>Operator Values</b> </p> <ul>
     * <li> <p>The IN and NOT_IN operators can take a values array that has more than
     * one element.</p> </li> <li> <p>The other operators require an array with a
     * single element.</p> </li> </ul> <p class="title"> <b>Attribute Values</b> </p>
     * <ul> <li> <p>The PLATFORM attribute can be set to "ANDROID" or "IOS".</p> </li>
     * <li> <p>The AVAILABILITY attribute can be set to "AVAILABLE",
     * "HIGHLY_AVAILABLE", "BUSY", or "TEMPORARY_NOT_AVAILABLE".</p> </li> <li> <p>The
     * FORM_FACTOR attribute can be set to "PHONE" or "TABLET".</p> </li> <li> <p>The
     * FLEET_TYPE attribute can be set to "PUBLIC" or "PRIVATE".</p> </li> </ul> </li>
     * </ul>
     */
    inline DeviceSelectionConfiguration& WithFilters(const Aws::Vector<DeviceFilter>& value) { SetFilters(value); return *this;}

    /**
     * <p>Used to dynamically select a set of devices for a test run. A filter is made
     * up of an attribute, an operator, and one or more values.</p> <ul> <li> <p>
     * <b>Attribute</b> </p> <p>The aspect of a device such as platform or model used
     * as the selection criteria in a device filter.</p> <p>Allowed values include:</p>
     * <ul> <li> <p>ARN: The Amazon Resource Name (ARN) of the device. For example,
     * "arn:aws:devicefarm:us-west-2::device:12345Example".</p> </li> <li> <p>PLATFORM:
     * The device platform. Valid values are "ANDROID" or "IOS".</p> </li> <li>
     * <p>OS_VERSION: The operating system version. For example, "10.3.2".</p> </li>
     * <li> <p>MODEL: The device model. For example, "iPad 5th Gen".</p> </li> <li>
     * <p>AVAILABILITY: The current availability of the device. Valid values are
     * "AVAILABLE", "HIGHLY_AVAILABLE", "BUSY", or "TEMPORARY_NOT_AVAILABLE".</p> </li>
     * <li> <p>FORM_FACTOR: The device form factor. Valid values are "PHONE" or
     * "TABLET".</p> </li> <li> <p>MANUFACTURER: The device manufacturer. For example,
     * "Apple".</p> </li> <li> <p>REMOTE_ACCESS_ENABLED: Whether the device is enabled
     * for remote access. Valid values are "TRUE" or "FALSE".</p> </li> <li>
     * <p>REMOTE_DEBUG_ENABLED: Whether the device is enabled for remote debugging.
     * Valid values are "TRUE" or "FALSE".</p> </li> <li> <p>INSTANCE_ARN: The Amazon
     * Resource Name (ARN) of the device instance.</p> </li> <li> <p>INSTANCE_LABELS:
     * The label of the device instance.</p> </li> <li> <p>FLEET_TYPE: The fleet type.
     * Valid values are "PUBLIC" or "PRIVATE".</p> </li> </ul> </li> <li> <p>
     * <b>Operator</b> </p> <p>The filter operator.</p> <ul> <li> <p>The EQUALS
     * operator is available for every attribute except INSTANCE_LABELS.</p> </li> <li>
     * <p>The CONTAINS operator is available for the INSTANCE_LABELS and MODEL
     * attributes.</p> </li> <li> <p>The IN and NOT_IN operators are available for the
     * ARN, OS_VERSION, MODEL, MANUFACTURER, and INSTANCE_ARN attributes.</p> </li>
     * <li> <p>The LESS_THAN, GREATER_THAN, LESS_THAN_OR_EQUALS, and
     * GREATER_THAN_OR_EQUALS operators are also available for the OS_VERSION
     * attribute.</p> </li> </ul> </li> <li> <p> <b>Values</b> </p> <p>An array of one
     * or more filter values.</p> <p class="title"> <b>Operator Values</b> </p> <ul>
     * <li> <p>The IN and NOT_IN operators can take a values array that has more than
     * one element.</p> </li> <li> <p>The other operators require an array with a
     * single element.</p> </li> </ul> <p class="title"> <b>Attribute Values</b> </p>
     * <ul> <li> <p>The PLATFORM attribute can be set to "ANDROID" or "IOS".</p> </li>
     * <li> <p>The AVAILABILITY attribute can be set to "AVAILABLE",
     * "HIGHLY_AVAILABLE", "BUSY", or "TEMPORARY_NOT_AVAILABLE".</p> </li> <li> <p>The
     * FORM_FACTOR attribute can be set to "PHONE" or "TABLET".</p> </li> <li> <p>The
     * FLEET_TYPE attribute can be set to "PUBLIC" or "PRIVATE".</p> </li> </ul> </li>
     * </ul>
     */
    inline DeviceSelectionConfiguration& WithFilters(Aws::Vector<DeviceFilter>&& value) { SetFilters(std::move(value)); return *this;}

    /**
     * <p>Used to dynamically select a set of devices for a test run. A filter is made
     * up of an attribute, an operator, and one or more values.</p> <ul> <li> <p>
     * <b>Attribute</b> </p> <p>The aspect of a device such as platform or model used
     * as the selection criteria in a device filter.</p> <p>Allowed values include:</p>
     * <ul> <li> <p>ARN: The Amazon Resource Name (ARN) of the device. For example,
     * "arn:aws:devicefarm:us-west-2::device:12345Example".</p> </li> <li> <p>PLATFORM:
     * The device platform. Valid values are "ANDROID" or "IOS".</p> </li> <li>
     * <p>OS_VERSION: The operating system version. For example, "10.3.2".</p> </li>
     * <li> <p>MODEL: The device model. For example, "iPad 5th Gen".</p> </li> <li>
     * <p>AVAILABILITY: The current availability of the device. Valid values are
     * "AVAILABLE", "HIGHLY_AVAILABLE", "BUSY", or "TEMPORARY_NOT_AVAILABLE".</p> </li>
     * <li> <p>FORM_FACTOR: The device form factor. Valid values are "PHONE" or
     * "TABLET".</p> </li> <li> <p>MANUFACTURER: The device manufacturer. For example,
     * "Apple".</p> </li> <li> <p>REMOTE_ACCESS_ENABLED: Whether the device is enabled
     * for remote access. Valid values are "TRUE" or "FALSE".</p> </li> <li>
     * <p>REMOTE_DEBUG_ENABLED: Whether the device is enabled for remote debugging.
     * Valid values are "TRUE" or "FALSE".</p> </li> <li> <p>INSTANCE_ARN: The Amazon
     * Resource Name (ARN) of the device instance.</p> </li> <li> <p>INSTANCE_LABELS:
     * The label of the device instance.</p> </li> <li> <p>FLEET_TYPE: The fleet type.
     * Valid values are "PUBLIC" or "PRIVATE".</p> </li> </ul> </li> <li> <p>
     * <b>Operator</b> </p> <p>The filter operator.</p> <ul> <li> <p>The EQUALS
     * operator is available for every attribute except INSTANCE_LABELS.</p> </li> <li>
     * <p>The CONTAINS operator is available for the INSTANCE_LABELS and MODEL
     * attributes.</p> </li> <li> <p>The IN and NOT_IN operators are available for the
     * ARN, OS_VERSION, MODEL, MANUFACTURER, and INSTANCE_ARN attributes.</p> </li>
     * <li> <p>The LESS_THAN, GREATER_THAN, LESS_THAN_OR_EQUALS, and
     * GREATER_THAN_OR_EQUALS operators are also available for the OS_VERSION
     * attribute.</p> </li> </ul> </li> <li> <p> <b>Values</b> </p> <p>An array of one
     * or more filter values.</p> <p class="title"> <b>Operator Values</b> </p> <ul>
     * <li> <p>The IN and NOT_IN operators can take a values array that has more than
     * one element.</p> </li> <li> <p>The other operators require an array with a
     * single element.</p> </li> </ul> <p class="title"> <b>Attribute Values</b> </p>
     * <ul> <li> <p>The PLATFORM attribute can be set to "ANDROID" or "IOS".</p> </li>
     * <li> <p>The AVAILABILITY attribute can be set to "AVAILABLE",
     * "HIGHLY_AVAILABLE", "BUSY", or "TEMPORARY_NOT_AVAILABLE".</p> </li> <li> <p>The
     * FORM_FACTOR attribute can be set to "PHONE" or "TABLET".</p> </li> <li> <p>The
     * FLEET_TYPE attribute can be set to "PUBLIC" or "PRIVATE".</p> </li> </ul> </li>
     * </ul>
     */
    inline DeviceSelectionConfiguration& AddFilters(const DeviceFilter& value) { m_filtersHasBeenSet = true; m_filters.push_back(value); return *this; }

    /**
     * <p>Used to dynamically select a set of devices for a test run. A filter is made
     * up of an attribute, an operator, and one or more values.</p> <ul> <li> <p>
     * <b>Attribute</b> </p> <p>The aspect of a device such as platform or model used
     * as the selection criteria in a device filter.</p> <p>Allowed values include:</p>
     * <ul> <li> <p>ARN: The Amazon Resource Name (ARN) of the device. For example,
     * "arn:aws:devicefarm:us-west-2::device:12345Example".</p> </li> <li> <p>PLATFORM:
     * The device platform. Valid values are "ANDROID" or "IOS".</p> </li> <li>
     * <p>OS_VERSION: The operating system version. For example, "10.3.2".</p> </li>
     * <li> <p>MODEL: The device model. For example, "iPad 5th Gen".</p> </li> <li>
     * <p>AVAILABILITY: The current availability of the device. Valid values are
     * "AVAILABLE", "HIGHLY_AVAILABLE", "BUSY", or "TEMPORARY_NOT_AVAILABLE".</p> </li>
     * <li> <p>FORM_FACTOR: The device form factor. Valid values are "PHONE" or
     * "TABLET".</p> </li> <li> <p>MANUFACTURER: The device manufacturer. For example,
     * "Apple".</p> </li> <li> <p>REMOTE_ACCESS_ENABLED: Whether the device is enabled
     * for remote access. Valid values are "TRUE" or "FALSE".</p> </li> <li>
     * <p>REMOTE_DEBUG_ENABLED: Whether the device is enabled for remote debugging.
     * Valid values are "TRUE" or "FALSE".</p> </li> <li> <p>INSTANCE_ARN: The Amazon
     * Resource Name (ARN) of the device instance.</p> </li> <li> <p>INSTANCE_LABELS:
     * The label of the device instance.</p> </li> <li> <p>FLEET_TYPE: The fleet type.
     * Valid values are "PUBLIC" or "PRIVATE".</p> </li> </ul> </li> <li> <p>
     * <b>Operator</b> </p> <p>The filter operator.</p> <ul> <li> <p>The EQUALS
     * operator is available for every attribute except INSTANCE_LABELS.</p> </li> <li>
     * <p>The CONTAINS operator is available for the INSTANCE_LABELS and MODEL
     * attributes.</p> </li> <li> <p>The IN and NOT_IN operators are available for the
     * ARN, OS_VERSION, MODEL, MANUFACTURER, and INSTANCE_ARN attributes.</p> </li>
     * <li> <p>The LESS_THAN, GREATER_THAN, LESS_THAN_OR_EQUALS, and
     * GREATER_THAN_OR_EQUALS operators are also available for the OS_VERSION
     * attribute.</p> </li> </ul> </li> <li> <p> <b>Values</b> </p> <p>An array of one
     * or more filter values.</p> <p class="title"> <b>Operator Values</b> </p> <ul>
     * <li> <p>The IN and NOT_IN operators can take a values array that has more than
     * one element.</p> </li> <li> <p>The other operators require an array with a
     * single element.</p> </li> </ul> <p class="title"> <b>Attribute Values</b> </p>
     * <ul> <li> <p>The PLATFORM attribute can be set to "ANDROID" or "IOS".</p> </li>
     * <li> <p>The AVAILABILITY attribute can be set to "AVAILABLE",
     * "HIGHLY_AVAILABLE", "BUSY", or "TEMPORARY_NOT_AVAILABLE".</p> </li> <li> <p>The
     * FORM_FACTOR attribute can be set to "PHONE" or "TABLET".</p> </li> <li> <p>The
     * FLEET_TYPE attribute can be set to "PUBLIC" or "PRIVATE".</p> </li> </ul> </li>
     * </ul>
     */
    inline DeviceSelectionConfiguration& AddFilters(DeviceFilter&& value) { m_filtersHasBeenSet = true; m_filters.push_back(std::move(value)); return *this; }


    /**
     * <p>The maximum number of devices to be included in a test run.</p>
     */
    inline int GetMaxDevices() const{ return m_maxDevices; }

    /**
     * <p>The maximum number of devices to be included in a test run.</p>
     */
    inline bool MaxDevicesHasBeenSet() const { return m_maxDevicesHasBeenSet; }

    /**
     * <p>The maximum number of devices to be included in a test run.</p>
     */
    inline void SetMaxDevices(int value) { m_maxDevicesHasBeenSet = true; m_maxDevices = value; }

    /**
     * <p>The maximum number of devices to be included in a test run.</p>
     */
    inline DeviceSelectionConfiguration& WithMaxDevices(int value) { SetMaxDevices(value); return *this;}

  private:

    Aws::Vector<DeviceFilter> m_filters;
    bool m_filtersHasBeenSet;

    int m_maxDevices;
    bool m_maxDevicesHasBeenSet;
  };

} // namespace Model
} // namespace DeviceFarm
} // namespace Aws
