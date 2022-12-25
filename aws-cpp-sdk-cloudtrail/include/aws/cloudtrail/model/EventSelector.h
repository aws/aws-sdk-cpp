/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudtrail/CloudTrail_EXPORTS.h>
#include <aws/cloudtrail/model/ReadWriteType.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/cloudtrail/model/DataResource.h>
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
namespace CloudTrail
{
namespace Model
{

  /**
   * <p>Use event selectors to further specify the management and data event settings
   * for your trail. By default, trails created without specific event selectors will
   * be configured to log all read and write management events, and no data events.
   * When an event occurs in your account, CloudTrail evaluates the event selector
   * for all trails. For each trail, if the event matches any event selector, the
   * trail processes and logs the event. If the event doesn't match any event
   * selector, the trail doesn't log the event.</p> <p>You can configure up to five
   * event selectors for a trail.</p> <p>You cannot apply both event selectors and
   * advanced event selectors to a trail.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudtrail-2013-11-01/EventSelector">AWS
   * API Reference</a></p>
   */
  class EventSelector
  {
  public:
    AWS_CLOUDTRAIL_API EventSelector();
    AWS_CLOUDTRAIL_API EventSelector(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDTRAIL_API EventSelector& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDTRAIL_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Specify if you want your trail to log read-only events, write-only events, or
     * all. For example, the EC2 <code>GetConsoleOutput</code> is a read-only API
     * operation and <code>RunInstances</code> is a write-only API operation.</p> <p>
     * By default, the value is <code>All</code>.</p>
     */
    inline const ReadWriteType& GetReadWriteType() const{ return m_readWriteType; }

    /**
     * <p>Specify if you want your trail to log read-only events, write-only events, or
     * all. For example, the EC2 <code>GetConsoleOutput</code> is a read-only API
     * operation and <code>RunInstances</code> is a write-only API operation.</p> <p>
     * By default, the value is <code>All</code>.</p>
     */
    inline bool ReadWriteTypeHasBeenSet() const { return m_readWriteTypeHasBeenSet; }

    /**
     * <p>Specify if you want your trail to log read-only events, write-only events, or
     * all. For example, the EC2 <code>GetConsoleOutput</code> is a read-only API
     * operation and <code>RunInstances</code> is a write-only API operation.</p> <p>
     * By default, the value is <code>All</code>.</p>
     */
    inline void SetReadWriteType(const ReadWriteType& value) { m_readWriteTypeHasBeenSet = true; m_readWriteType = value; }

    /**
     * <p>Specify if you want your trail to log read-only events, write-only events, or
     * all. For example, the EC2 <code>GetConsoleOutput</code> is a read-only API
     * operation and <code>RunInstances</code> is a write-only API operation.</p> <p>
     * By default, the value is <code>All</code>.</p>
     */
    inline void SetReadWriteType(ReadWriteType&& value) { m_readWriteTypeHasBeenSet = true; m_readWriteType = std::move(value); }

    /**
     * <p>Specify if you want your trail to log read-only events, write-only events, or
     * all. For example, the EC2 <code>GetConsoleOutput</code> is a read-only API
     * operation and <code>RunInstances</code> is a write-only API operation.</p> <p>
     * By default, the value is <code>All</code>.</p>
     */
    inline EventSelector& WithReadWriteType(const ReadWriteType& value) { SetReadWriteType(value); return *this;}

    /**
     * <p>Specify if you want your trail to log read-only events, write-only events, or
     * all. For example, the EC2 <code>GetConsoleOutput</code> is a read-only API
     * operation and <code>RunInstances</code> is a write-only API operation.</p> <p>
     * By default, the value is <code>All</code>.</p>
     */
    inline EventSelector& WithReadWriteType(ReadWriteType&& value) { SetReadWriteType(std::move(value)); return *this;}


    /**
     * <p>Specify if you want your event selector to include management events for your
     * trail.</p> <p> For more information, see <a
     * href="https://docs.aws.amazon.com/awscloudtrail/latest/userguide/logging-management-events-with-cloudtrail.html">Management
     * Events</a> in the <i>CloudTrail User Guide</i>.</p> <p>By default, the value is
     * <code>true</code>.</p> <p>The first copy of management events is free. You are
     * charged for additional copies of management events that you are logging on any
     * subsequent trail in the same region. For more information about CloudTrail
     * pricing, see <a href="http://aws.amazon.com/cloudtrail/pricing/">CloudTrail
     * Pricing</a>.</p>
     */
    inline bool GetIncludeManagementEvents() const{ return m_includeManagementEvents; }

    /**
     * <p>Specify if you want your event selector to include management events for your
     * trail.</p> <p> For more information, see <a
     * href="https://docs.aws.amazon.com/awscloudtrail/latest/userguide/logging-management-events-with-cloudtrail.html">Management
     * Events</a> in the <i>CloudTrail User Guide</i>.</p> <p>By default, the value is
     * <code>true</code>.</p> <p>The first copy of management events is free. You are
     * charged for additional copies of management events that you are logging on any
     * subsequent trail in the same region. For more information about CloudTrail
     * pricing, see <a href="http://aws.amazon.com/cloudtrail/pricing/">CloudTrail
     * Pricing</a>.</p>
     */
    inline bool IncludeManagementEventsHasBeenSet() const { return m_includeManagementEventsHasBeenSet; }

    /**
     * <p>Specify if you want your event selector to include management events for your
     * trail.</p> <p> For more information, see <a
     * href="https://docs.aws.amazon.com/awscloudtrail/latest/userguide/logging-management-events-with-cloudtrail.html">Management
     * Events</a> in the <i>CloudTrail User Guide</i>.</p> <p>By default, the value is
     * <code>true</code>.</p> <p>The first copy of management events is free. You are
     * charged for additional copies of management events that you are logging on any
     * subsequent trail in the same region. For more information about CloudTrail
     * pricing, see <a href="http://aws.amazon.com/cloudtrail/pricing/">CloudTrail
     * Pricing</a>.</p>
     */
    inline void SetIncludeManagementEvents(bool value) { m_includeManagementEventsHasBeenSet = true; m_includeManagementEvents = value; }

    /**
     * <p>Specify if you want your event selector to include management events for your
     * trail.</p> <p> For more information, see <a
     * href="https://docs.aws.amazon.com/awscloudtrail/latest/userguide/logging-management-events-with-cloudtrail.html">Management
     * Events</a> in the <i>CloudTrail User Guide</i>.</p> <p>By default, the value is
     * <code>true</code>.</p> <p>The first copy of management events is free. You are
     * charged for additional copies of management events that you are logging on any
     * subsequent trail in the same region. For more information about CloudTrail
     * pricing, see <a href="http://aws.amazon.com/cloudtrail/pricing/">CloudTrail
     * Pricing</a>.</p>
     */
    inline EventSelector& WithIncludeManagementEvents(bool value) { SetIncludeManagementEvents(value); return *this;}


    /**
     * <p>CloudTrail supports data event logging for Amazon S3 objects, Lambda
     * functions, and Amazon DynamoDB tables with basic event selectors. You can
     * specify up to 250 resources for an individual event selector, but the total
     * number of data resources cannot exceed 250 across all event selectors in a
     * trail. This limit does not apply if you configure resource logging for all data
     * events.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/awscloudtrail/latest/userguide/logging-data-events-with-cloudtrail.html">Data
     * Events</a> and <a
     * href="https://docs.aws.amazon.com/awscloudtrail/latest/userguide/WhatIsCloudTrail-Limits.html">Limits
     * in CloudTrail</a> in the <i>CloudTrail User Guide</i>.</p>
     */
    inline const Aws::Vector<DataResource>& GetDataResources() const{ return m_dataResources; }

    /**
     * <p>CloudTrail supports data event logging for Amazon S3 objects, Lambda
     * functions, and Amazon DynamoDB tables with basic event selectors. You can
     * specify up to 250 resources for an individual event selector, but the total
     * number of data resources cannot exceed 250 across all event selectors in a
     * trail. This limit does not apply if you configure resource logging for all data
     * events.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/awscloudtrail/latest/userguide/logging-data-events-with-cloudtrail.html">Data
     * Events</a> and <a
     * href="https://docs.aws.amazon.com/awscloudtrail/latest/userguide/WhatIsCloudTrail-Limits.html">Limits
     * in CloudTrail</a> in the <i>CloudTrail User Guide</i>.</p>
     */
    inline bool DataResourcesHasBeenSet() const { return m_dataResourcesHasBeenSet; }

    /**
     * <p>CloudTrail supports data event logging for Amazon S3 objects, Lambda
     * functions, and Amazon DynamoDB tables with basic event selectors. You can
     * specify up to 250 resources for an individual event selector, but the total
     * number of data resources cannot exceed 250 across all event selectors in a
     * trail. This limit does not apply if you configure resource logging for all data
     * events.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/awscloudtrail/latest/userguide/logging-data-events-with-cloudtrail.html">Data
     * Events</a> and <a
     * href="https://docs.aws.amazon.com/awscloudtrail/latest/userguide/WhatIsCloudTrail-Limits.html">Limits
     * in CloudTrail</a> in the <i>CloudTrail User Guide</i>.</p>
     */
    inline void SetDataResources(const Aws::Vector<DataResource>& value) { m_dataResourcesHasBeenSet = true; m_dataResources = value; }

    /**
     * <p>CloudTrail supports data event logging for Amazon S3 objects, Lambda
     * functions, and Amazon DynamoDB tables with basic event selectors. You can
     * specify up to 250 resources for an individual event selector, but the total
     * number of data resources cannot exceed 250 across all event selectors in a
     * trail. This limit does not apply if you configure resource logging for all data
     * events.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/awscloudtrail/latest/userguide/logging-data-events-with-cloudtrail.html">Data
     * Events</a> and <a
     * href="https://docs.aws.amazon.com/awscloudtrail/latest/userguide/WhatIsCloudTrail-Limits.html">Limits
     * in CloudTrail</a> in the <i>CloudTrail User Guide</i>.</p>
     */
    inline void SetDataResources(Aws::Vector<DataResource>&& value) { m_dataResourcesHasBeenSet = true; m_dataResources = std::move(value); }

    /**
     * <p>CloudTrail supports data event logging for Amazon S3 objects, Lambda
     * functions, and Amazon DynamoDB tables with basic event selectors. You can
     * specify up to 250 resources for an individual event selector, but the total
     * number of data resources cannot exceed 250 across all event selectors in a
     * trail. This limit does not apply if you configure resource logging for all data
     * events.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/awscloudtrail/latest/userguide/logging-data-events-with-cloudtrail.html">Data
     * Events</a> and <a
     * href="https://docs.aws.amazon.com/awscloudtrail/latest/userguide/WhatIsCloudTrail-Limits.html">Limits
     * in CloudTrail</a> in the <i>CloudTrail User Guide</i>.</p>
     */
    inline EventSelector& WithDataResources(const Aws::Vector<DataResource>& value) { SetDataResources(value); return *this;}

    /**
     * <p>CloudTrail supports data event logging for Amazon S3 objects, Lambda
     * functions, and Amazon DynamoDB tables with basic event selectors. You can
     * specify up to 250 resources for an individual event selector, but the total
     * number of data resources cannot exceed 250 across all event selectors in a
     * trail. This limit does not apply if you configure resource logging for all data
     * events.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/awscloudtrail/latest/userguide/logging-data-events-with-cloudtrail.html">Data
     * Events</a> and <a
     * href="https://docs.aws.amazon.com/awscloudtrail/latest/userguide/WhatIsCloudTrail-Limits.html">Limits
     * in CloudTrail</a> in the <i>CloudTrail User Guide</i>.</p>
     */
    inline EventSelector& WithDataResources(Aws::Vector<DataResource>&& value) { SetDataResources(std::move(value)); return *this;}

    /**
     * <p>CloudTrail supports data event logging for Amazon S3 objects, Lambda
     * functions, and Amazon DynamoDB tables with basic event selectors. You can
     * specify up to 250 resources for an individual event selector, but the total
     * number of data resources cannot exceed 250 across all event selectors in a
     * trail. This limit does not apply if you configure resource logging for all data
     * events.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/awscloudtrail/latest/userguide/logging-data-events-with-cloudtrail.html">Data
     * Events</a> and <a
     * href="https://docs.aws.amazon.com/awscloudtrail/latest/userguide/WhatIsCloudTrail-Limits.html">Limits
     * in CloudTrail</a> in the <i>CloudTrail User Guide</i>.</p>
     */
    inline EventSelector& AddDataResources(const DataResource& value) { m_dataResourcesHasBeenSet = true; m_dataResources.push_back(value); return *this; }

    /**
     * <p>CloudTrail supports data event logging for Amazon S3 objects, Lambda
     * functions, and Amazon DynamoDB tables with basic event selectors. You can
     * specify up to 250 resources for an individual event selector, but the total
     * number of data resources cannot exceed 250 across all event selectors in a
     * trail. This limit does not apply if you configure resource logging for all data
     * events.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/awscloudtrail/latest/userguide/logging-data-events-with-cloudtrail.html">Data
     * Events</a> and <a
     * href="https://docs.aws.amazon.com/awscloudtrail/latest/userguide/WhatIsCloudTrail-Limits.html">Limits
     * in CloudTrail</a> in the <i>CloudTrail User Guide</i>.</p>
     */
    inline EventSelector& AddDataResources(DataResource&& value) { m_dataResourcesHasBeenSet = true; m_dataResources.push_back(std::move(value)); return *this; }


    /**
     * <p>An optional list of service event sources from which you do not want
     * management events to be logged on your trail. In this release, the list can be
     * empty (disables the filter), or it can filter out Key Management Service or
     * Amazon RDS Data API events by containing <code>kms.amazonaws.com</code> or
     * <code>rdsdata.amazonaws.com</code>. By default,
     * <code>ExcludeManagementEventSources</code> is empty, and KMS and Amazon RDS Data
     * API events are logged to your trail. You can exclude management event sources
     * only in regions that support the event source.</p>
     */
    inline const Aws::Vector<Aws::String>& GetExcludeManagementEventSources() const{ return m_excludeManagementEventSources; }

    /**
     * <p>An optional list of service event sources from which you do not want
     * management events to be logged on your trail. In this release, the list can be
     * empty (disables the filter), or it can filter out Key Management Service or
     * Amazon RDS Data API events by containing <code>kms.amazonaws.com</code> or
     * <code>rdsdata.amazonaws.com</code>. By default,
     * <code>ExcludeManagementEventSources</code> is empty, and KMS and Amazon RDS Data
     * API events are logged to your trail. You can exclude management event sources
     * only in regions that support the event source.</p>
     */
    inline bool ExcludeManagementEventSourcesHasBeenSet() const { return m_excludeManagementEventSourcesHasBeenSet; }

    /**
     * <p>An optional list of service event sources from which you do not want
     * management events to be logged on your trail. In this release, the list can be
     * empty (disables the filter), or it can filter out Key Management Service or
     * Amazon RDS Data API events by containing <code>kms.amazonaws.com</code> or
     * <code>rdsdata.amazonaws.com</code>. By default,
     * <code>ExcludeManagementEventSources</code> is empty, and KMS and Amazon RDS Data
     * API events are logged to your trail. You can exclude management event sources
     * only in regions that support the event source.</p>
     */
    inline void SetExcludeManagementEventSources(const Aws::Vector<Aws::String>& value) { m_excludeManagementEventSourcesHasBeenSet = true; m_excludeManagementEventSources = value; }

    /**
     * <p>An optional list of service event sources from which you do not want
     * management events to be logged on your trail. In this release, the list can be
     * empty (disables the filter), or it can filter out Key Management Service or
     * Amazon RDS Data API events by containing <code>kms.amazonaws.com</code> or
     * <code>rdsdata.amazonaws.com</code>. By default,
     * <code>ExcludeManagementEventSources</code> is empty, and KMS and Amazon RDS Data
     * API events are logged to your trail. You can exclude management event sources
     * only in regions that support the event source.</p>
     */
    inline void SetExcludeManagementEventSources(Aws::Vector<Aws::String>&& value) { m_excludeManagementEventSourcesHasBeenSet = true; m_excludeManagementEventSources = std::move(value); }

    /**
     * <p>An optional list of service event sources from which you do not want
     * management events to be logged on your trail. In this release, the list can be
     * empty (disables the filter), or it can filter out Key Management Service or
     * Amazon RDS Data API events by containing <code>kms.amazonaws.com</code> or
     * <code>rdsdata.amazonaws.com</code>. By default,
     * <code>ExcludeManagementEventSources</code> is empty, and KMS and Amazon RDS Data
     * API events are logged to your trail. You can exclude management event sources
     * only in regions that support the event source.</p>
     */
    inline EventSelector& WithExcludeManagementEventSources(const Aws::Vector<Aws::String>& value) { SetExcludeManagementEventSources(value); return *this;}

    /**
     * <p>An optional list of service event sources from which you do not want
     * management events to be logged on your trail. In this release, the list can be
     * empty (disables the filter), or it can filter out Key Management Service or
     * Amazon RDS Data API events by containing <code>kms.amazonaws.com</code> or
     * <code>rdsdata.amazonaws.com</code>. By default,
     * <code>ExcludeManagementEventSources</code> is empty, and KMS and Amazon RDS Data
     * API events are logged to your trail. You can exclude management event sources
     * only in regions that support the event source.</p>
     */
    inline EventSelector& WithExcludeManagementEventSources(Aws::Vector<Aws::String>&& value) { SetExcludeManagementEventSources(std::move(value)); return *this;}

    /**
     * <p>An optional list of service event sources from which you do not want
     * management events to be logged on your trail. In this release, the list can be
     * empty (disables the filter), or it can filter out Key Management Service or
     * Amazon RDS Data API events by containing <code>kms.amazonaws.com</code> or
     * <code>rdsdata.amazonaws.com</code>. By default,
     * <code>ExcludeManagementEventSources</code> is empty, and KMS and Amazon RDS Data
     * API events are logged to your trail. You can exclude management event sources
     * only in regions that support the event source.</p>
     */
    inline EventSelector& AddExcludeManagementEventSources(const Aws::String& value) { m_excludeManagementEventSourcesHasBeenSet = true; m_excludeManagementEventSources.push_back(value); return *this; }

    /**
     * <p>An optional list of service event sources from which you do not want
     * management events to be logged on your trail. In this release, the list can be
     * empty (disables the filter), or it can filter out Key Management Service or
     * Amazon RDS Data API events by containing <code>kms.amazonaws.com</code> or
     * <code>rdsdata.amazonaws.com</code>. By default,
     * <code>ExcludeManagementEventSources</code> is empty, and KMS and Amazon RDS Data
     * API events are logged to your trail. You can exclude management event sources
     * only in regions that support the event source.</p>
     */
    inline EventSelector& AddExcludeManagementEventSources(Aws::String&& value) { m_excludeManagementEventSourcesHasBeenSet = true; m_excludeManagementEventSources.push_back(std::move(value)); return *this; }

    /**
     * <p>An optional list of service event sources from which you do not want
     * management events to be logged on your trail. In this release, the list can be
     * empty (disables the filter), or it can filter out Key Management Service or
     * Amazon RDS Data API events by containing <code>kms.amazonaws.com</code> or
     * <code>rdsdata.amazonaws.com</code>. By default,
     * <code>ExcludeManagementEventSources</code> is empty, and KMS and Amazon RDS Data
     * API events are logged to your trail. You can exclude management event sources
     * only in regions that support the event source.</p>
     */
    inline EventSelector& AddExcludeManagementEventSources(const char* value) { m_excludeManagementEventSourcesHasBeenSet = true; m_excludeManagementEventSources.push_back(value); return *this; }

  private:

    ReadWriteType m_readWriteType;
    bool m_readWriteTypeHasBeenSet = false;

    bool m_includeManagementEvents;
    bool m_includeManagementEventsHasBeenSet = false;

    Aws::Vector<DataResource> m_dataResources;
    bool m_dataResourcesHasBeenSet = false;

    Aws::Vector<Aws::String> m_excludeManagementEventSources;
    bool m_excludeManagementEventSourcesHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudTrail
} // namespace Aws
