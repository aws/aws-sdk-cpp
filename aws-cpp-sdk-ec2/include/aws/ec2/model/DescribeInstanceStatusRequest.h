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
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/EC2Request.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/Filter.h>
#include <utility>

namespace Aws
{
namespace EC2
{
namespace Model
{

  /**
   */
  class AWS_EC2_API DescribeInstanceStatusRequest : public EC2Request
  {
  public:
    DescribeInstanceStatusRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeInstanceStatus"; }

    Aws::String SerializePayload() const override;

  protected:
    void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The filters.</p> <ul> <li> <p> <code>availability-zone</code> - The
     * Availability Zone of the instance.</p> </li> <li> <p> <code>event.code</code> -
     * The code for the scheduled event (<code>instance-reboot</code> |
     * <code>system-reboot</code> | <code>system-maintenance</code> |
     * <code>instance-retirement</code> | <code>instance-stop</code>).</p> </li> <li>
     * <p> <code>event.description</code> - A description of the event.</p> </li> <li>
     * <p> <code>event.instance-event-id</code> - The ID of the event whose date and
     * time you are modifying.</p> </li> <li> <p> <code>event.not-after</code> - The
     * latest end time for the scheduled event (for example,
     * <code>2014-09-15T17:15:20.000Z</code>).</p> </li> <li> <p>
     * <code>event.not-before</code> - The earliest start time for the scheduled event
     * (for example, <code>2014-09-15T17:15:20.000Z</code>).</p> </li> <li> <p>
     * <code>event.not-before-deadline</code> - The deadline for starting the event
     * (for example, <code>2014-09-15T17:15:20.000Z</code>).</p> </li> <li> <p>
     * <code>instance-state-code</code> - The code for the instance state, as a 16-bit
     * unsigned integer. The high byte is used for internal purposes and should be
     * ignored. The low byte is set based on the state represented. The valid values
     * are 0 (pending), 16 (running), 32 (shutting-down), 48 (terminated), 64
     * (stopping), and 80 (stopped).</p> </li> <li> <p>
     * <code>instance-state-name</code> - The state of the instance
     * (<code>pending</code> | <code>running</code> | <code>shutting-down</code> |
     * <code>terminated</code> | <code>stopping</code> | <code>stopped</code>).</p>
     * </li> <li> <p> <code>instance-status.reachability</code> - Filters on instance
     * status where the name is <code>reachability</code> (<code>passed</code> |
     * <code>failed</code> | <code>initializing</code> |
     * <code>insufficient-data</code>).</p> </li> <li> <p>
     * <code>instance-status.status</code> - The status of the instance
     * (<code>ok</code> | <code>impaired</code> | <code>initializing</code> |
     * <code>insufficient-data</code> | <code>not-applicable</code>).</p> </li> <li>
     * <p> <code>system-status.reachability</code> - Filters on system status where the
     * name is <code>reachability</code> (<code>passed</code> | <code>failed</code> |
     * <code>initializing</code> | <code>insufficient-data</code>).</p> </li> <li> <p>
     * <code>system-status.status</code> - The system status of the instance
     * (<code>ok</code> | <code>impaired</code> | <code>initializing</code> |
     * <code>insufficient-data</code> | <code>not-applicable</code>).</p> </li> </ul>
     */
    inline const Aws::Vector<Filter>& GetFilters() const{ return m_filters; }

    /**
     * <p>The filters.</p> <ul> <li> <p> <code>availability-zone</code> - The
     * Availability Zone of the instance.</p> </li> <li> <p> <code>event.code</code> -
     * The code for the scheduled event (<code>instance-reboot</code> |
     * <code>system-reboot</code> | <code>system-maintenance</code> |
     * <code>instance-retirement</code> | <code>instance-stop</code>).</p> </li> <li>
     * <p> <code>event.description</code> - A description of the event.</p> </li> <li>
     * <p> <code>event.instance-event-id</code> - The ID of the event whose date and
     * time you are modifying.</p> </li> <li> <p> <code>event.not-after</code> - The
     * latest end time for the scheduled event (for example,
     * <code>2014-09-15T17:15:20.000Z</code>).</p> </li> <li> <p>
     * <code>event.not-before</code> - The earliest start time for the scheduled event
     * (for example, <code>2014-09-15T17:15:20.000Z</code>).</p> </li> <li> <p>
     * <code>event.not-before-deadline</code> - The deadline for starting the event
     * (for example, <code>2014-09-15T17:15:20.000Z</code>).</p> </li> <li> <p>
     * <code>instance-state-code</code> - The code for the instance state, as a 16-bit
     * unsigned integer. The high byte is used for internal purposes and should be
     * ignored. The low byte is set based on the state represented. The valid values
     * are 0 (pending), 16 (running), 32 (shutting-down), 48 (terminated), 64
     * (stopping), and 80 (stopped).</p> </li> <li> <p>
     * <code>instance-state-name</code> - The state of the instance
     * (<code>pending</code> | <code>running</code> | <code>shutting-down</code> |
     * <code>terminated</code> | <code>stopping</code> | <code>stopped</code>).</p>
     * </li> <li> <p> <code>instance-status.reachability</code> - Filters on instance
     * status where the name is <code>reachability</code> (<code>passed</code> |
     * <code>failed</code> | <code>initializing</code> |
     * <code>insufficient-data</code>).</p> </li> <li> <p>
     * <code>instance-status.status</code> - The status of the instance
     * (<code>ok</code> | <code>impaired</code> | <code>initializing</code> |
     * <code>insufficient-data</code> | <code>not-applicable</code>).</p> </li> <li>
     * <p> <code>system-status.reachability</code> - Filters on system status where the
     * name is <code>reachability</code> (<code>passed</code> | <code>failed</code> |
     * <code>initializing</code> | <code>insufficient-data</code>).</p> </li> <li> <p>
     * <code>system-status.status</code> - The system status of the instance
     * (<code>ok</code> | <code>impaired</code> | <code>initializing</code> |
     * <code>insufficient-data</code> | <code>not-applicable</code>).</p> </li> </ul>
     */
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }

    /**
     * <p>The filters.</p> <ul> <li> <p> <code>availability-zone</code> - The
     * Availability Zone of the instance.</p> </li> <li> <p> <code>event.code</code> -
     * The code for the scheduled event (<code>instance-reboot</code> |
     * <code>system-reboot</code> | <code>system-maintenance</code> |
     * <code>instance-retirement</code> | <code>instance-stop</code>).</p> </li> <li>
     * <p> <code>event.description</code> - A description of the event.</p> </li> <li>
     * <p> <code>event.instance-event-id</code> - The ID of the event whose date and
     * time you are modifying.</p> </li> <li> <p> <code>event.not-after</code> - The
     * latest end time for the scheduled event (for example,
     * <code>2014-09-15T17:15:20.000Z</code>).</p> </li> <li> <p>
     * <code>event.not-before</code> - The earliest start time for the scheduled event
     * (for example, <code>2014-09-15T17:15:20.000Z</code>).</p> </li> <li> <p>
     * <code>event.not-before-deadline</code> - The deadline for starting the event
     * (for example, <code>2014-09-15T17:15:20.000Z</code>).</p> </li> <li> <p>
     * <code>instance-state-code</code> - The code for the instance state, as a 16-bit
     * unsigned integer. The high byte is used for internal purposes and should be
     * ignored. The low byte is set based on the state represented. The valid values
     * are 0 (pending), 16 (running), 32 (shutting-down), 48 (terminated), 64
     * (stopping), and 80 (stopped).</p> </li> <li> <p>
     * <code>instance-state-name</code> - The state of the instance
     * (<code>pending</code> | <code>running</code> | <code>shutting-down</code> |
     * <code>terminated</code> | <code>stopping</code> | <code>stopped</code>).</p>
     * </li> <li> <p> <code>instance-status.reachability</code> - Filters on instance
     * status where the name is <code>reachability</code> (<code>passed</code> |
     * <code>failed</code> | <code>initializing</code> |
     * <code>insufficient-data</code>).</p> </li> <li> <p>
     * <code>instance-status.status</code> - The status of the instance
     * (<code>ok</code> | <code>impaired</code> | <code>initializing</code> |
     * <code>insufficient-data</code> | <code>not-applicable</code>).</p> </li> <li>
     * <p> <code>system-status.reachability</code> - Filters on system status where the
     * name is <code>reachability</code> (<code>passed</code> | <code>failed</code> |
     * <code>initializing</code> | <code>insufficient-data</code>).</p> </li> <li> <p>
     * <code>system-status.status</code> - The system status of the instance
     * (<code>ok</code> | <code>impaired</code> | <code>initializing</code> |
     * <code>insufficient-data</code> | <code>not-applicable</code>).</p> </li> </ul>
     */
    inline void SetFilters(const Aws::Vector<Filter>& value) { m_filtersHasBeenSet = true; m_filters = value; }

    /**
     * <p>The filters.</p> <ul> <li> <p> <code>availability-zone</code> - The
     * Availability Zone of the instance.</p> </li> <li> <p> <code>event.code</code> -
     * The code for the scheduled event (<code>instance-reboot</code> |
     * <code>system-reboot</code> | <code>system-maintenance</code> |
     * <code>instance-retirement</code> | <code>instance-stop</code>).</p> </li> <li>
     * <p> <code>event.description</code> - A description of the event.</p> </li> <li>
     * <p> <code>event.instance-event-id</code> - The ID of the event whose date and
     * time you are modifying.</p> </li> <li> <p> <code>event.not-after</code> - The
     * latest end time for the scheduled event (for example,
     * <code>2014-09-15T17:15:20.000Z</code>).</p> </li> <li> <p>
     * <code>event.not-before</code> - The earliest start time for the scheduled event
     * (for example, <code>2014-09-15T17:15:20.000Z</code>).</p> </li> <li> <p>
     * <code>event.not-before-deadline</code> - The deadline for starting the event
     * (for example, <code>2014-09-15T17:15:20.000Z</code>).</p> </li> <li> <p>
     * <code>instance-state-code</code> - The code for the instance state, as a 16-bit
     * unsigned integer. The high byte is used for internal purposes and should be
     * ignored. The low byte is set based on the state represented. The valid values
     * are 0 (pending), 16 (running), 32 (shutting-down), 48 (terminated), 64
     * (stopping), and 80 (stopped).</p> </li> <li> <p>
     * <code>instance-state-name</code> - The state of the instance
     * (<code>pending</code> | <code>running</code> | <code>shutting-down</code> |
     * <code>terminated</code> | <code>stopping</code> | <code>stopped</code>).</p>
     * </li> <li> <p> <code>instance-status.reachability</code> - Filters on instance
     * status where the name is <code>reachability</code> (<code>passed</code> |
     * <code>failed</code> | <code>initializing</code> |
     * <code>insufficient-data</code>).</p> </li> <li> <p>
     * <code>instance-status.status</code> - The status of the instance
     * (<code>ok</code> | <code>impaired</code> | <code>initializing</code> |
     * <code>insufficient-data</code> | <code>not-applicable</code>).</p> </li> <li>
     * <p> <code>system-status.reachability</code> - Filters on system status where the
     * name is <code>reachability</code> (<code>passed</code> | <code>failed</code> |
     * <code>initializing</code> | <code>insufficient-data</code>).</p> </li> <li> <p>
     * <code>system-status.status</code> - The system status of the instance
     * (<code>ok</code> | <code>impaired</code> | <code>initializing</code> |
     * <code>insufficient-data</code> | <code>not-applicable</code>).</p> </li> </ul>
     */
    inline void SetFilters(Aws::Vector<Filter>&& value) { m_filtersHasBeenSet = true; m_filters = std::move(value); }

    /**
     * <p>The filters.</p> <ul> <li> <p> <code>availability-zone</code> - The
     * Availability Zone of the instance.</p> </li> <li> <p> <code>event.code</code> -
     * The code for the scheduled event (<code>instance-reboot</code> |
     * <code>system-reboot</code> | <code>system-maintenance</code> |
     * <code>instance-retirement</code> | <code>instance-stop</code>).</p> </li> <li>
     * <p> <code>event.description</code> - A description of the event.</p> </li> <li>
     * <p> <code>event.instance-event-id</code> - The ID of the event whose date and
     * time you are modifying.</p> </li> <li> <p> <code>event.not-after</code> - The
     * latest end time for the scheduled event (for example,
     * <code>2014-09-15T17:15:20.000Z</code>).</p> </li> <li> <p>
     * <code>event.not-before</code> - The earliest start time for the scheduled event
     * (for example, <code>2014-09-15T17:15:20.000Z</code>).</p> </li> <li> <p>
     * <code>event.not-before-deadline</code> - The deadline for starting the event
     * (for example, <code>2014-09-15T17:15:20.000Z</code>).</p> </li> <li> <p>
     * <code>instance-state-code</code> - The code for the instance state, as a 16-bit
     * unsigned integer. The high byte is used for internal purposes and should be
     * ignored. The low byte is set based on the state represented. The valid values
     * are 0 (pending), 16 (running), 32 (shutting-down), 48 (terminated), 64
     * (stopping), and 80 (stopped).</p> </li> <li> <p>
     * <code>instance-state-name</code> - The state of the instance
     * (<code>pending</code> | <code>running</code> | <code>shutting-down</code> |
     * <code>terminated</code> | <code>stopping</code> | <code>stopped</code>).</p>
     * </li> <li> <p> <code>instance-status.reachability</code> - Filters on instance
     * status where the name is <code>reachability</code> (<code>passed</code> |
     * <code>failed</code> | <code>initializing</code> |
     * <code>insufficient-data</code>).</p> </li> <li> <p>
     * <code>instance-status.status</code> - The status of the instance
     * (<code>ok</code> | <code>impaired</code> | <code>initializing</code> |
     * <code>insufficient-data</code> | <code>not-applicable</code>).</p> </li> <li>
     * <p> <code>system-status.reachability</code> - Filters on system status where the
     * name is <code>reachability</code> (<code>passed</code> | <code>failed</code> |
     * <code>initializing</code> | <code>insufficient-data</code>).</p> </li> <li> <p>
     * <code>system-status.status</code> - The system status of the instance
     * (<code>ok</code> | <code>impaired</code> | <code>initializing</code> |
     * <code>insufficient-data</code> | <code>not-applicable</code>).</p> </li> </ul>
     */
    inline DescribeInstanceStatusRequest& WithFilters(const Aws::Vector<Filter>& value) { SetFilters(value); return *this;}

    /**
     * <p>The filters.</p> <ul> <li> <p> <code>availability-zone</code> - The
     * Availability Zone of the instance.</p> </li> <li> <p> <code>event.code</code> -
     * The code for the scheduled event (<code>instance-reboot</code> |
     * <code>system-reboot</code> | <code>system-maintenance</code> |
     * <code>instance-retirement</code> | <code>instance-stop</code>).</p> </li> <li>
     * <p> <code>event.description</code> - A description of the event.</p> </li> <li>
     * <p> <code>event.instance-event-id</code> - The ID of the event whose date and
     * time you are modifying.</p> </li> <li> <p> <code>event.not-after</code> - The
     * latest end time for the scheduled event (for example,
     * <code>2014-09-15T17:15:20.000Z</code>).</p> </li> <li> <p>
     * <code>event.not-before</code> - The earliest start time for the scheduled event
     * (for example, <code>2014-09-15T17:15:20.000Z</code>).</p> </li> <li> <p>
     * <code>event.not-before-deadline</code> - The deadline for starting the event
     * (for example, <code>2014-09-15T17:15:20.000Z</code>).</p> </li> <li> <p>
     * <code>instance-state-code</code> - The code for the instance state, as a 16-bit
     * unsigned integer. The high byte is used for internal purposes and should be
     * ignored. The low byte is set based on the state represented. The valid values
     * are 0 (pending), 16 (running), 32 (shutting-down), 48 (terminated), 64
     * (stopping), and 80 (stopped).</p> </li> <li> <p>
     * <code>instance-state-name</code> - The state of the instance
     * (<code>pending</code> | <code>running</code> | <code>shutting-down</code> |
     * <code>terminated</code> | <code>stopping</code> | <code>stopped</code>).</p>
     * </li> <li> <p> <code>instance-status.reachability</code> - Filters on instance
     * status where the name is <code>reachability</code> (<code>passed</code> |
     * <code>failed</code> | <code>initializing</code> |
     * <code>insufficient-data</code>).</p> </li> <li> <p>
     * <code>instance-status.status</code> - The status of the instance
     * (<code>ok</code> | <code>impaired</code> | <code>initializing</code> |
     * <code>insufficient-data</code> | <code>not-applicable</code>).</p> </li> <li>
     * <p> <code>system-status.reachability</code> - Filters on system status where the
     * name is <code>reachability</code> (<code>passed</code> | <code>failed</code> |
     * <code>initializing</code> | <code>insufficient-data</code>).</p> </li> <li> <p>
     * <code>system-status.status</code> - The system status of the instance
     * (<code>ok</code> | <code>impaired</code> | <code>initializing</code> |
     * <code>insufficient-data</code> | <code>not-applicable</code>).</p> </li> </ul>
     */
    inline DescribeInstanceStatusRequest& WithFilters(Aws::Vector<Filter>&& value) { SetFilters(std::move(value)); return *this;}

    /**
     * <p>The filters.</p> <ul> <li> <p> <code>availability-zone</code> - The
     * Availability Zone of the instance.</p> </li> <li> <p> <code>event.code</code> -
     * The code for the scheduled event (<code>instance-reboot</code> |
     * <code>system-reboot</code> | <code>system-maintenance</code> |
     * <code>instance-retirement</code> | <code>instance-stop</code>).</p> </li> <li>
     * <p> <code>event.description</code> - A description of the event.</p> </li> <li>
     * <p> <code>event.instance-event-id</code> - The ID of the event whose date and
     * time you are modifying.</p> </li> <li> <p> <code>event.not-after</code> - The
     * latest end time for the scheduled event (for example,
     * <code>2014-09-15T17:15:20.000Z</code>).</p> </li> <li> <p>
     * <code>event.not-before</code> - The earliest start time for the scheduled event
     * (for example, <code>2014-09-15T17:15:20.000Z</code>).</p> </li> <li> <p>
     * <code>event.not-before-deadline</code> - The deadline for starting the event
     * (for example, <code>2014-09-15T17:15:20.000Z</code>).</p> </li> <li> <p>
     * <code>instance-state-code</code> - The code for the instance state, as a 16-bit
     * unsigned integer. The high byte is used for internal purposes and should be
     * ignored. The low byte is set based on the state represented. The valid values
     * are 0 (pending), 16 (running), 32 (shutting-down), 48 (terminated), 64
     * (stopping), and 80 (stopped).</p> </li> <li> <p>
     * <code>instance-state-name</code> - The state of the instance
     * (<code>pending</code> | <code>running</code> | <code>shutting-down</code> |
     * <code>terminated</code> | <code>stopping</code> | <code>stopped</code>).</p>
     * </li> <li> <p> <code>instance-status.reachability</code> - Filters on instance
     * status where the name is <code>reachability</code> (<code>passed</code> |
     * <code>failed</code> | <code>initializing</code> |
     * <code>insufficient-data</code>).</p> </li> <li> <p>
     * <code>instance-status.status</code> - The status of the instance
     * (<code>ok</code> | <code>impaired</code> | <code>initializing</code> |
     * <code>insufficient-data</code> | <code>not-applicable</code>).</p> </li> <li>
     * <p> <code>system-status.reachability</code> - Filters on system status where the
     * name is <code>reachability</code> (<code>passed</code> | <code>failed</code> |
     * <code>initializing</code> | <code>insufficient-data</code>).</p> </li> <li> <p>
     * <code>system-status.status</code> - The system status of the instance
     * (<code>ok</code> | <code>impaired</code> | <code>initializing</code> |
     * <code>insufficient-data</code> | <code>not-applicable</code>).</p> </li> </ul>
     */
    inline DescribeInstanceStatusRequest& AddFilters(const Filter& value) { m_filtersHasBeenSet = true; m_filters.push_back(value); return *this; }

    /**
     * <p>The filters.</p> <ul> <li> <p> <code>availability-zone</code> - The
     * Availability Zone of the instance.</p> </li> <li> <p> <code>event.code</code> -
     * The code for the scheduled event (<code>instance-reboot</code> |
     * <code>system-reboot</code> | <code>system-maintenance</code> |
     * <code>instance-retirement</code> | <code>instance-stop</code>).</p> </li> <li>
     * <p> <code>event.description</code> - A description of the event.</p> </li> <li>
     * <p> <code>event.instance-event-id</code> - The ID of the event whose date and
     * time you are modifying.</p> </li> <li> <p> <code>event.not-after</code> - The
     * latest end time for the scheduled event (for example,
     * <code>2014-09-15T17:15:20.000Z</code>).</p> </li> <li> <p>
     * <code>event.not-before</code> - The earliest start time for the scheduled event
     * (for example, <code>2014-09-15T17:15:20.000Z</code>).</p> </li> <li> <p>
     * <code>event.not-before-deadline</code> - The deadline for starting the event
     * (for example, <code>2014-09-15T17:15:20.000Z</code>).</p> </li> <li> <p>
     * <code>instance-state-code</code> - The code for the instance state, as a 16-bit
     * unsigned integer. The high byte is used for internal purposes and should be
     * ignored. The low byte is set based on the state represented. The valid values
     * are 0 (pending), 16 (running), 32 (shutting-down), 48 (terminated), 64
     * (stopping), and 80 (stopped).</p> </li> <li> <p>
     * <code>instance-state-name</code> - The state of the instance
     * (<code>pending</code> | <code>running</code> | <code>shutting-down</code> |
     * <code>terminated</code> | <code>stopping</code> | <code>stopped</code>).</p>
     * </li> <li> <p> <code>instance-status.reachability</code> - Filters on instance
     * status where the name is <code>reachability</code> (<code>passed</code> |
     * <code>failed</code> | <code>initializing</code> |
     * <code>insufficient-data</code>).</p> </li> <li> <p>
     * <code>instance-status.status</code> - The status of the instance
     * (<code>ok</code> | <code>impaired</code> | <code>initializing</code> |
     * <code>insufficient-data</code> | <code>not-applicable</code>).</p> </li> <li>
     * <p> <code>system-status.reachability</code> - Filters on system status where the
     * name is <code>reachability</code> (<code>passed</code> | <code>failed</code> |
     * <code>initializing</code> | <code>insufficient-data</code>).</p> </li> <li> <p>
     * <code>system-status.status</code> - The system status of the instance
     * (<code>ok</code> | <code>impaired</code> | <code>initializing</code> |
     * <code>insufficient-data</code> | <code>not-applicable</code>).</p> </li> </ul>
     */
    inline DescribeInstanceStatusRequest& AddFilters(Filter&& value) { m_filtersHasBeenSet = true; m_filters.push_back(std::move(value)); return *this; }


    /**
     * <p>The instance IDs.</p> <p>Default: Describes all your instances.</p>
     * <p>Constraints: Maximum 100 explicitly specified instance IDs.</p>
     */
    inline const Aws::Vector<Aws::String>& GetInstanceIds() const{ return m_instanceIds; }

    /**
     * <p>The instance IDs.</p> <p>Default: Describes all your instances.</p>
     * <p>Constraints: Maximum 100 explicitly specified instance IDs.</p>
     */
    inline bool InstanceIdsHasBeenSet() const { return m_instanceIdsHasBeenSet; }

    /**
     * <p>The instance IDs.</p> <p>Default: Describes all your instances.</p>
     * <p>Constraints: Maximum 100 explicitly specified instance IDs.</p>
     */
    inline void SetInstanceIds(const Aws::Vector<Aws::String>& value) { m_instanceIdsHasBeenSet = true; m_instanceIds = value; }

    /**
     * <p>The instance IDs.</p> <p>Default: Describes all your instances.</p>
     * <p>Constraints: Maximum 100 explicitly specified instance IDs.</p>
     */
    inline void SetInstanceIds(Aws::Vector<Aws::String>&& value) { m_instanceIdsHasBeenSet = true; m_instanceIds = std::move(value); }

    /**
     * <p>The instance IDs.</p> <p>Default: Describes all your instances.</p>
     * <p>Constraints: Maximum 100 explicitly specified instance IDs.</p>
     */
    inline DescribeInstanceStatusRequest& WithInstanceIds(const Aws::Vector<Aws::String>& value) { SetInstanceIds(value); return *this;}

    /**
     * <p>The instance IDs.</p> <p>Default: Describes all your instances.</p>
     * <p>Constraints: Maximum 100 explicitly specified instance IDs.</p>
     */
    inline DescribeInstanceStatusRequest& WithInstanceIds(Aws::Vector<Aws::String>&& value) { SetInstanceIds(std::move(value)); return *this;}

    /**
     * <p>The instance IDs.</p> <p>Default: Describes all your instances.</p>
     * <p>Constraints: Maximum 100 explicitly specified instance IDs.</p>
     */
    inline DescribeInstanceStatusRequest& AddInstanceIds(const Aws::String& value) { m_instanceIdsHasBeenSet = true; m_instanceIds.push_back(value); return *this; }

    /**
     * <p>The instance IDs.</p> <p>Default: Describes all your instances.</p>
     * <p>Constraints: Maximum 100 explicitly specified instance IDs.</p>
     */
    inline DescribeInstanceStatusRequest& AddInstanceIds(Aws::String&& value) { m_instanceIdsHasBeenSet = true; m_instanceIds.push_back(std::move(value)); return *this; }

    /**
     * <p>The instance IDs.</p> <p>Default: Describes all your instances.</p>
     * <p>Constraints: Maximum 100 explicitly specified instance IDs.</p>
     */
    inline DescribeInstanceStatusRequest& AddInstanceIds(const char* value) { m_instanceIdsHasBeenSet = true; m_instanceIds.push_back(value); return *this; }


    /**
     * <p>The maximum number of results to return in a single call. To retrieve the
     * remaining results, make another call with the returned <code>NextToken</code>
     * value. This value can be between 5 and 1000. You cannot specify this parameter
     * and the instance IDs parameter in the same call.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of results to return in a single call. To retrieve the
     * remaining results, make another call with the returned <code>NextToken</code>
     * value. This value can be between 5 and 1000. You cannot specify this parameter
     * and the instance IDs parameter in the same call.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of results to return in a single call. To retrieve the
     * remaining results, make another call with the returned <code>NextToken</code>
     * value. This value can be between 5 and 1000. You cannot specify this parameter
     * and the instance IDs parameter in the same call.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of results to return in a single call. To retrieve the
     * remaining results, make another call with the returned <code>NextToken</code>
     * value. This value can be between 5 and 1000. You cannot specify this parameter
     * and the instance IDs parameter in the same call.</p>
     */
    inline DescribeInstanceStatusRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>The token to retrieve the next page of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token to retrieve the next page of results.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>The token to retrieve the next page of results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The token to retrieve the next page of results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>The token to retrieve the next page of results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>The token to retrieve the next page of results.</p>
     */
    inline DescribeInstanceStatusRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token to retrieve the next page of results.</p>
     */
    inline DescribeInstanceStatusRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token to retrieve the next page of results.</p>
     */
    inline DescribeInstanceStatusRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline bool GetDryRun() const{ return m_dryRun; }

    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline bool DryRunHasBeenSet() const { return m_dryRunHasBeenSet; }

    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline void SetDryRun(bool value) { m_dryRunHasBeenSet = true; m_dryRun = value; }

    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline DescribeInstanceStatusRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}


    /**
     * <p>When <code>true</code>, includes the health status for all instances. When
     * <code>false</code>, includes the health status for running instances only.</p>
     * <p>Default: <code>false</code> </p>
     */
    inline bool GetIncludeAllInstances() const{ return m_includeAllInstances; }

    /**
     * <p>When <code>true</code>, includes the health status for all instances. When
     * <code>false</code>, includes the health status for running instances only.</p>
     * <p>Default: <code>false</code> </p>
     */
    inline bool IncludeAllInstancesHasBeenSet() const { return m_includeAllInstancesHasBeenSet; }

    /**
     * <p>When <code>true</code>, includes the health status for all instances. When
     * <code>false</code>, includes the health status for running instances only.</p>
     * <p>Default: <code>false</code> </p>
     */
    inline void SetIncludeAllInstances(bool value) { m_includeAllInstancesHasBeenSet = true; m_includeAllInstances = value; }

    /**
     * <p>When <code>true</code>, includes the health status for all instances. When
     * <code>false</code>, includes the health status for running instances only.</p>
     * <p>Default: <code>false</code> </p>
     */
    inline DescribeInstanceStatusRequest& WithIncludeAllInstances(bool value) { SetIncludeAllInstances(value); return *this;}

  private:

    Aws::Vector<Filter> m_filters;
    bool m_filtersHasBeenSet;

    Aws::Vector<Aws::String> m_instanceIds;
    bool m_instanceIdsHasBeenSet;

    int m_maxResults;
    bool m_maxResultsHasBeenSet;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet;

    bool m_dryRun;
    bool m_dryRunHasBeenSet;

    bool m_includeAllInstances;
    bool m_includeAllInstancesHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
