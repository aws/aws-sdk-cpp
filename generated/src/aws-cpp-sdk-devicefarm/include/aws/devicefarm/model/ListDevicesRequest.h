﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class ListDevicesRequest : public DeviceFarmRequest
  {
  public:
    AWS_DEVICEFARM_API ListDevicesRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListDevices"; }

    AWS_DEVICEFARM_API Aws::String SerializePayload() const override;

    AWS_DEVICEFARM_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the project.</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    ListDevicesRequest& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An identifier that was returned from the previous call to this operation,
     * which can be used to return the next set of items in the list.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListDevicesRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Used to select a set of devices. A filter is made up of an attribute, an
     * operator, and one or more values.</p> <ul> <li> <p>Attribute: The aspect of a
     * device such as platform or model used as the selection criteria in a device
     * filter.</p> <p>Allowed values include:</p> <ul> <li> <p>ARN: The Amazon Resource
     * Name (ARN) of the device (for example,
     * <code>arn:aws:devicefarm:us-west-2::device:12345Example</code>).</p> </li> <li>
     * <p>PLATFORM: The device platform. Valid values are ANDROID or IOS.</p> </li>
     * <li> <p>OS_VERSION: The operating system version (for example, 10.3.2).</p>
     * </li> <li> <p>MODEL: The device model (for example, iPad 5th Gen).</p> </li>
     * <li> <p>AVAILABILITY: The current availability of the device. Valid values are
     * AVAILABLE, HIGHLY_AVAILABLE, BUSY, or TEMPORARY_NOT_AVAILABLE.</p> </li> <li>
     * <p>FORM_FACTOR: The device form factor. Valid values are PHONE or TABLET.</p>
     * </li> <li> <p>MANUFACTURER: The device manufacturer (for example, Apple).</p>
     * </li> <li> <p>REMOTE_ACCESS_ENABLED: Whether the device is enabled for remote
     * access. Valid values are TRUE or FALSE.</p> </li> <li> <p>REMOTE_DEBUG_ENABLED:
     * Whether the device is enabled for remote debugging. Valid values are TRUE or
     * FALSE. Because remote debugging is <a
     * href="https://docs.aws.amazon.com/devicefarm/latest/developerguide/history.html">no
     * longer supported</a>, this attribute is ignored.</p> </li> <li> <p>INSTANCE_ARN:
     * The Amazon Resource Name (ARN) of the device instance.</p> </li> <li>
     * <p>INSTANCE_LABELS: The label of the device instance.</p> </li> <li>
     * <p>FLEET_TYPE: The fleet type. Valid values are PUBLIC or PRIVATE.</p> </li>
     * </ul> </li> <li> <p>Operator: The filter operator.</p> <ul> <li> <p>The EQUALS
     * operator is available for every attribute except INSTANCE_LABELS.</p> </li> <li>
     * <p>The CONTAINS operator is available for the INSTANCE_LABELS and MODEL
     * attributes.</p> </li> <li> <p>The IN and NOT_IN operators are available for the
     * ARN, OS_VERSION, MODEL, MANUFACTURER, and INSTANCE_ARN attributes.</p> </li>
     * <li> <p>The LESS_THAN, GREATER_THAN, LESS_THAN_OR_EQUALS, and
     * GREATER_THAN_OR_EQUALS operators are also available for the OS_VERSION
     * attribute.</p> </li> </ul> </li> <li> <p>Values: An array of one or more filter
     * values.</p> <ul> <li> <p>The IN and NOT_IN operators take a values array that
     * has one or more elements.</p> </li> <li> <p>The other operators require an array
     * with a single element.</p> </li> <li> <p>In a request, the AVAILABILITY
     * attribute takes the following values: AVAILABLE, HIGHLY_AVAILABLE, BUSY, or
     * TEMPORARY_NOT_AVAILABLE.</p> </li> </ul> </li> </ul>
     */
    inline const Aws::Vector<DeviceFilter>& GetFilters() const { return m_filters; }
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }
    template<typename FiltersT = Aws::Vector<DeviceFilter>>
    void SetFilters(FiltersT&& value) { m_filtersHasBeenSet = true; m_filters = std::forward<FiltersT>(value); }
    template<typename FiltersT = Aws::Vector<DeviceFilter>>
    ListDevicesRequest& WithFilters(FiltersT&& value) { SetFilters(std::forward<FiltersT>(value)); return *this;}
    template<typename FiltersT = DeviceFilter>
    ListDevicesRequest& AddFilters(FiltersT&& value) { m_filtersHasBeenSet = true; m_filters.emplace_back(std::forward<FiltersT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Vector<DeviceFilter> m_filters;
    bool m_filtersHasBeenSet = false;
  };

} // namespace Model
} // namespace DeviceFarm
} // namespace Aws
