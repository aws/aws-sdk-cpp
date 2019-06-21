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
#include <aws/devicefarm/DeviceFarmRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/devicefarm/model/DeviceFilter.h>
#include <utility>

namespace Aws
{
namespace DeviceFarm
{
namespace Model
{

  /**
   * <p>Represents the result of a list devices request.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/ListDevicesRequest">AWS
   * API Reference</a></p>
   */
  class AWS_DEVICEFARM_API ListDevicesRequest : public DeviceFarmRequest
  {
  public:
    ListDevicesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListDevices"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The Amazon Resource Name (ARN) of the project.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the project.</p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the project.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the project.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the project.</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the project.</p>
     */
    inline ListDevicesRequest& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the project.</p>
     */
    inline ListDevicesRequest& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the project.</p>
     */
    inline ListDevicesRequest& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>An identifier that was returned from the previous call to this operation,
     * which can be used to return the next set of items in the list.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>An identifier that was returned from the previous call to this operation,
     * which can be used to return the next set of items in the list.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>An identifier that was returned from the previous call to this operation,
     * which can be used to return the next set of items in the list.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>An identifier that was returned from the previous call to this operation,
     * which can be used to return the next set of items in the list.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>An identifier that was returned from the previous call to this operation,
     * which can be used to return the next set of items in the list.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>An identifier that was returned from the previous call to this operation,
     * which can be used to return the next set of items in the list.</p>
     */
    inline ListDevicesRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>An identifier that was returned from the previous call to this operation,
     * which can be used to return the next set of items in the list.</p>
     */
    inline ListDevicesRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>An identifier that was returned from the previous call to this operation,
     * which can be used to return the next set of items in the list.</p>
     */
    inline ListDevicesRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>Used to select a set of devices. A filter is made up of an attribute, an
     * operator, and one or more values.</p> <ul> <li> <p>Attribute: The aspect of a
     * device such as platform or model used as the selection criteria in a device
     * filter.</p> <p>Allowed values include:</p> <ul> <li> <p>ARN: The Amazon Resource
     * Name (ARN) of the device. For example,
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
     * Valid values are "PUBLIC" or "PRIVATE".</p> </li> </ul> </li> <li> <p>Operator:
     * The filter operator.</p> <ul> <li> <p>The EQUALS operator is available for every
     * attribute except INSTANCE_LABELS.</p> </li> <li> <p>The CONTAINS operator is
     * available for the INSTANCE_LABELS and MODEL attributes.</p> </li> <li> <p>The IN
     * and NOT_IN operators are available for the ARN, OS_VERSION, MODEL, MANUFACTURER,
     * and INSTANCE_ARN attributes.</p> </li> <li> <p>The LESS_THAN, GREATER_THAN,
     * LESS_THAN_OR_EQUALS, and GREATER_THAN_OR_EQUALS operators are also available for
     * the OS_VERSION attribute.</p> </li> </ul> </li> <li> <p>Values: An array of one
     * or more filter values.</p> <ul> <li> <p>The IN and NOT_IN operators take a
     * values array that has one or more elements.</p> </li> <li> <p>The other
     * operators require an array with a single element.</p> </li> <li> <p>In a
     * request, the AVAILABILITY attribute takes "AVAILABLE", "HIGHLY_AVAILABLE",
     * "BUSY", or "TEMPORARY_NOT_AVAILABLE" as values.</p> </li> </ul> </li> </ul>
     */
    inline const Aws::Vector<DeviceFilter>& GetFilters() const{ return m_filters; }

    /**
     * <p>Used to select a set of devices. A filter is made up of an attribute, an
     * operator, and one or more values.</p> <ul> <li> <p>Attribute: The aspect of a
     * device such as platform or model used as the selection criteria in a device
     * filter.</p> <p>Allowed values include:</p> <ul> <li> <p>ARN: The Amazon Resource
     * Name (ARN) of the device. For example,
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
     * Valid values are "PUBLIC" or "PRIVATE".</p> </li> </ul> </li> <li> <p>Operator:
     * The filter operator.</p> <ul> <li> <p>The EQUALS operator is available for every
     * attribute except INSTANCE_LABELS.</p> </li> <li> <p>The CONTAINS operator is
     * available for the INSTANCE_LABELS and MODEL attributes.</p> </li> <li> <p>The IN
     * and NOT_IN operators are available for the ARN, OS_VERSION, MODEL, MANUFACTURER,
     * and INSTANCE_ARN attributes.</p> </li> <li> <p>The LESS_THAN, GREATER_THAN,
     * LESS_THAN_OR_EQUALS, and GREATER_THAN_OR_EQUALS operators are also available for
     * the OS_VERSION attribute.</p> </li> </ul> </li> <li> <p>Values: An array of one
     * or more filter values.</p> <ul> <li> <p>The IN and NOT_IN operators take a
     * values array that has one or more elements.</p> </li> <li> <p>The other
     * operators require an array with a single element.</p> </li> <li> <p>In a
     * request, the AVAILABILITY attribute takes "AVAILABLE", "HIGHLY_AVAILABLE",
     * "BUSY", or "TEMPORARY_NOT_AVAILABLE" as values.</p> </li> </ul> </li> </ul>
     */
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }

    /**
     * <p>Used to select a set of devices. A filter is made up of an attribute, an
     * operator, and one or more values.</p> <ul> <li> <p>Attribute: The aspect of a
     * device such as platform or model used as the selection criteria in a device
     * filter.</p> <p>Allowed values include:</p> <ul> <li> <p>ARN: The Amazon Resource
     * Name (ARN) of the device. For example,
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
     * Valid values are "PUBLIC" or "PRIVATE".</p> </li> </ul> </li> <li> <p>Operator:
     * The filter operator.</p> <ul> <li> <p>The EQUALS operator is available for every
     * attribute except INSTANCE_LABELS.</p> </li> <li> <p>The CONTAINS operator is
     * available for the INSTANCE_LABELS and MODEL attributes.</p> </li> <li> <p>The IN
     * and NOT_IN operators are available for the ARN, OS_VERSION, MODEL, MANUFACTURER,
     * and INSTANCE_ARN attributes.</p> </li> <li> <p>The LESS_THAN, GREATER_THAN,
     * LESS_THAN_OR_EQUALS, and GREATER_THAN_OR_EQUALS operators are also available for
     * the OS_VERSION attribute.</p> </li> </ul> </li> <li> <p>Values: An array of one
     * or more filter values.</p> <ul> <li> <p>The IN and NOT_IN operators take a
     * values array that has one or more elements.</p> </li> <li> <p>The other
     * operators require an array with a single element.</p> </li> <li> <p>In a
     * request, the AVAILABILITY attribute takes "AVAILABLE", "HIGHLY_AVAILABLE",
     * "BUSY", or "TEMPORARY_NOT_AVAILABLE" as values.</p> </li> </ul> </li> </ul>
     */
    inline void SetFilters(const Aws::Vector<DeviceFilter>& value) { m_filtersHasBeenSet = true; m_filters = value; }

    /**
     * <p>Used to select a set of devices. A filter is made up of an attribute, an
     * operator, and one or more values.</p> <ul> <li> <p>Attribute: The aspect of a
     * device such as platform or model used as the selection criteria in a device
     * filter.</p> <p>Allowed values include:</p> <ul> <li> <p>ARN: The Amazon Resource
     * Name (ARN) of the device. For example,
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
     * Valid values are "PUBLIC" or "PRIVATE".</p> </li> </ul> </li> <li> <p>Operator:
     * The filter operator.</p> <ul> <li> <p>The EQUALS operator is available for every
     * attribute except INSTANCE_LABELS.</p> </li> <li> <p>The CONTAINS operator is
     * available for the INSTANCE_LABELS and MODEL attributes.</p> </li> <li> <p>The IN
     * and NOT_IN operators are available for the ARN, OS_VERSION, MODEL, MANUFACTURER,
     * and INSTANCE_ARN attributes.</p> </li> <li> <p>The LESS_THAN, GREATER_THAN,
     * LESS_THAN_OR_EQUALS, and GREATER_THAN_OR_EQUALS operators are also available for
     * the OS_VERSION attribute.</p> </li> </ul> </li> <li> <p>Values: An array of one
     * or more filter values.</p> <ul> <li> <p>The IN and NOT_IN operators take a
     * values array that has one or more elements.</p> </li> <li> <p>The other
     * operators require an array with a single element.</p> </li> <li> <p>In a
     * request, the AVAILABILITY attribute takes "AVAILABLE", "HIGHLY_AVAILABLE",
     * "BUSY", or "TEMPORARY_NOT_AVAILABLE" as values.</p> </li> </ul> </li> </ul>
     */
    inline void SetFilters(Aws::Vector<DeviceFilter>&& value) { m_filtersHasBeenSet = true; m_filters = std::move(value); }

    /**
     * <p>Used to select a set of devices. A filter is made up of an attribute, an
     * operator, and one or more values.</p> <ul> <li> <p>Attribute: The aspect of a
     * device such as platform or model used as the selection criteria in a device
     * filter.</p> <p>Allowed values include:</p> <ul> <li> <p>ARN: The Amazon Resource
     * Name (ARN) of the device. For example,
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
     * Valid values are "PUBLIC" or "PRIVATE".</p> </li> </ul> </li> <li> <p>Operator:
     * The filter operator.</p> <ul> <li> <p>The EQUALS operator is available for every
     * attribute except INSTANCE_LABELS.</p> </li> <li> <p>The CONTAINS operator is
     * available for the INSTANCE_LABELS and MODEL attributes.</p> </li> <li> <p>The IN
     * and NOT_IN operators are available for the ARN, OS_VERSION, MODEL, MANUFACTURER,
     * and INSTANCE_ARN attributes.</p> </li> <li> <p>The LESS_THAN, GREATER_THAN,
     * LESS_THAN_OR_EQUALS, and GREATER_THAN_OR_EQUALS operators are also available for
     * the OS_VERSION attribute.</p> </li> </ul> </li> <li> <p>Values: An array of one
     * or more filter values.</p> <ul> <li> <p>The IN and NOT_IN operators take a
     * values array that has one or more elements.</p> </li> <li> <p>The other
     * operators require an array with a single element.</p> </li> <li> <p>In a
     * request, the AVAILABILITY attribute takes "AVAILABLE", "HIGHLY_AVAILABLE",
     * "BUSY", or "TEMPORARY_NOT_AVAILABLE" as values.</p> </li> </ul> </li> </ul>
     */
    inline ListDevicesRequest& WithFilters(const Aws::Vector<DeviceFilter>& value) { SetFilters(value); return *this;}

    /**
     * <p>Used to select a set of devices. A filter is made up of an attribute, an
     * operator, and one or more values.</p> <ul> <li> <p>Attribute: The aspect of a
     * device such as platform or model used as the selection criteria in a device
     * filter.</p> <p>Allowed values include:</p> <ul> <li> <p>ARN: The Amazon Resource
     * Name (ARN) of the device. For example,
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
     * Valid values are "PUBLIC" or "PRIVATE".</p> </li> </ul> </li> <li> <p>Operator:
     * The filter operator.</p> <ul> <li> <p>The EQUALS operator is available for every
     * attribute except INSTANCE_LABELS.</p> </li> <li> <p>The CONTAINS operator is
     * available for the INSTANCE_LABELS and MODEL attributes.</p> </li> <li> <p>The IN
     * and NOT_IN operators are available for the ARN, OS_VERSION, MODEL, MANUFACTURER,
     * and INSTANCE_ARN attributes.</p> </li> <li> <p>The LESS_THAN, GREATER_THAN,
     * LESS_THAN_OR_EQUALS, and GREATER_THAN_OR_EQUALS operators are also available for
     * the OS_VERSION attribute.</p> </li> </ul> </li> <li> <p>Values: An array of one
     * or more filter values.</p> <ul> <li> <p>The IN and NOT_IN operators take a
     * values array that has one or more elements.</p> </li> <li> <p>The other
     * operators require an array with a single element.</p> </li> <li> <p>In a
     * request, the AVAILABILITY attribute takes "AVAILABLE", "HIGHLY_AVAILABLE",
     * "BUSY", or "TEMPORARY_NOT_AVAILABLE" as values.</p> </li> </ul> </li> </ul>
     */
    inline ListDevicesRequest& WithFilters(Aws::Vector<DeviceFilter>&& value) { SetFilters(std::move(value)); return *this;}

    /**
     * <p>Used to select a set of devices. A filter is made up of an attribute, an
     * operator, and one or more values.</p> <ul> <li> <p>Attribute: The aspect of a
     * device such as platform or model used as the selection criteria in a device
     * filter.</p> <p>Allowed values include:</p> <ul> <li> <p>ARN: The Amazon Resource
     * Name (ARN) of the device. For example,
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
     * Valid values are "PUBLIC" or "PRIVATE".</p> </li> </ul> </li> <li> <p>Operator:
     * The filter operator.</p> <ul> <li> <p>The EQUALS operator is available for every
     * attribute except INSTANCE_LABELS.</p> </li> <li> <p>The CONTAINS operator is
     * available for the INSTANCE_LABELS and MODEL attributes.</p> </li> <li> <p>The IN
     * and NOT_IN operators are available for the ARN, OS_VERSION, MODEL, MANUFACTURER,
     * and INSTANCE_ARN attributes.</p> </li> <li> <p>The LESS_THAN, GREATER_THAN,
     * LESS_THAN_OR_EQUALS, and GREATER_THAN_OR_EQUALS operators are also available for
     * the OS_VERSION attribute.</p> </li> </ul> </li> <li> <p>Values: An array of one
     * or more filter values.</p> <ul> <li> <p>The IN and NOT_IN operators take a
     * values array that has one or more elements.</p> </li> <li> <p>The other
     * operators require an array with a single element.</p> </li> <li> <p>In a
     * request, the AVAILABILITY attribute takes "AVAILABLE", "HIGHLY_AVAILABLE",
     * "BUSY", or "TEMPORARY_NOT_AVAILABLE" as values.</p> </li> </ul> </li> </ul>
     */
    inline ListDevicesRequest& AddFilters(const DeviceFilter& value) { m_filtersHasBeenSet = true; m_filters.push_back(value); return *this; }

    /**
     * <p>Used to select a set of devices. A filter is made up of an attribute, an
     * operator, and one or more values.</p> <ul> <li> <p>Attribute: The aspect of a
     * device such as platform or model used as the selection criteria in a device
     * filter.</p> <p>Allowed values include:</p> <ul> <li> <p>ARN: The Amazon Resource
     * Name (ARN) of the device. For example,
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
     * Valid values are "PUBLIC" or "PRIVATE".</p> </li> </ul> </li> <li> <p>Operator:
     * The filter operator.</p> <ul> <li> <p>The EQUALS operator is available for every
     * attribute except INSTANCE_LABELS.</p> </li> <li> <p>The CONTAINS operator is
     * available for the INSTANCE_LABELS and MODEL attributes.</p> </li> <li> <p>The IN
     * and NOT_IN operators are available for the ARN, OS_VERSION, MODEL, MANUFACTURER,
     * and INSTANCE_ARN attributes.</p> </li> <li> <p>The LESS_THAN, GREATER_THAN,
     * LESS_THAN_OR_EQUALS, and GREATER_THAN_OR_EQUALS operators are also available for
     * the OS_VERSION attribute.</p> </li> </ul> </li> <li> <p>Values: An array of one
     * or more filter values.</p> <ul> <li> <p>The IN and NOT_IN operators take a
     * values array that has one or more elements.</p> </li> <li> <p>The other
     * operators require an array with a single element.</p> </li> <li> <p>In a
     * request, the AVAILABILITY attribute takes "AVAILABLE", "HIGHLY_AVAILABLE",
     * "BUSY", or "TEMPORARY_NOT_AVAILABLE" as values.</p> </li> </ul> </li> </ul>
     */
    inline ListDevicesRequest& AddFilters(DeviceFilter&& value) { m_filtersHasBeenSet = true; m_filters.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet;

    Aws::Vector<DeviceFilter> m_filters;
    bool m_filtersHasBeenSet;
  };

} // namespace Model
} // namespace DeviceFarm
} // namespace Aws
