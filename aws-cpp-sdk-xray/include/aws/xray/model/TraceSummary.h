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
#include <aws/xray/XRay_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/xray/model/Http.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/xray/model/ServiceId.h>
#include <aws/core/utils/DateTime.h>
#include <aws/xray/model/TraceUser.h>
#include <aws/xray/model/ResourceARNDetail.h>
#include <aws/xray/model/InstanceIdDetail.h>
#include <aws/xray/model/AvailabilityZoneDetail.h>
#include <aws/xray/model/FaultRootCause.h>
#include <aws/xray/model/ErrorRootCause.h>
#include <aws/xray/model/ResponseTimeRootCause.h>
#include <aws/xray/model/ValueWithServiceIds.h>
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
namespace XRay
{
namespace Model
{

  /**
   * <p>Metadata generated from the segment documents in a trace.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/xray-2016-04-12/TraceSummary">AWS
   * API Reference</a></p>
   */
  class AWS_XRAY_API TraceSummary
  {
  public:
    TraceSummary();
    TraceSummary(Aws::Utils::Json::JsonView jsonValue);
    TraceSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The unique identifier for the request that generated the trace's segments and
     * subsegments.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The unique identifier for the request that generated the trace's segments and
     * subsegments.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>The unique identifier for the request that generated the trace's segments and
     * subsegments.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The unique identifier for the request that generated the trace's segments and
     * subsegments.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>The unique identifier for the request that generated the trace's segments and
     * subsegments.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The unique identifier for the request that generated the trace's segments and
     * subsegments.</p>
     */
    inline TraceSummary& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The unique identifier for the request that generated the trace's segments and
     * subsegments.</p>
     */
    inline TraceSummary& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier for the request that generated the trace's segments and
     * subsegments.</p>
     */
    inline TraceSummary& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The length of time in seconds between the start time of the root segment and
     * the end time of the last segment that completed.</p>
     */
    inline double GetDuration() const{ return m_duration; }

    /**
     * <p>The length of time in seconds between the start time of the root segment and
     * the end time of the last segment that completed.</p>
     */
    inline bool DurationHasBeenSet() const { return m_durationHasBeenSet; }

    /**
     * <p>The length of time in seconds between the start time of the root segment and
     * the end time of the last segment that completed.</p>
     */
    inline void SetDuration(double value) { m_durationHasBeenSet = true; m_duration = value; }

    /**
     * <p>The length of time in seconds between the start time of the root segment and
     * the end time of the last segment that completed.</p>
     */
    inline TraceSummary& WithDuration(double value) { SetDuration(value); return *this;}


    /**
     * <p>The length of time in seconds between the start and end times of the root
     * segment. If the service performs work asynchronously, the response time measures
     * the time before the response is sent to the user, while the duration measures
     * the amount of time before the last traced activity completes.</p>
     */
    inline double GetResponseTime() const{ return m_responseTime; }

    /**
     * <p>The length of time in seconds between the start and end times of the root
     * segment. If the service performs work asynchronously, the response time measures
     * the time before the response is sent to the user, while the duration measures
     * the amount of time before the last traced activity completes.</p>
     */
    inline bool ResponseTimeHasBeenSet() const { return m_responseTimeHasBeenSet; }

    /**
     * <p>The length of time in seconds between the start and end times of the root
     * segment. If the service performs work asynchronously, the response time measures
     * the time before the response is sent to the user, while the duration measures
     * the amount of time before the last traced activity completes.</p>
     */
    inline void SetResponseTime(double value) { m_responseTimeHasBeenSet = true; m_responseTime = value; }

    /**
     * <p>The length of time in seconds between the start and end times of the root
     * segment. If the service performs work asynchronously, the response time measures
     * the time before the response is sent to the user, while the duration measures
     * the amount of time before the last traced activity completes.</p>
     */
    inline TraceSummary& WithResponseTime(double value) { SetResponseTime(value); return *this;}


    /**
     * <p>One or more of the segment documents has a 500 series error.</p>
     */
    inline bool GetHasFault() const{ return m_hasFault; }

    /**
     * <p>One or more of the segment documents has a 500 series error.</p>
     */
    inline bool HasFaultHasBeenSet() const { return m_hasFaultHasBeenSet; }

    /**
     * <p>One or more of the segment documents has a 500 series error.</p>
     */
    inline void SetHasFault(bool value) { m_hasFaultHasBeenSet = true; m_hasFault = value; }

    /**
     * <p>One or more of the segment documents has a 500 series error.</p>
     */
    inline TraceSummary& WithHasFault(bool value) { SetHasFault(value); return *this;}


    /**
     * <p>One or more of the segment documents has a 400 series error.</p>
     */
    inline bool GetHasError() const{ return m_hasError; }

    /**
     * <p>One or more of the segment documents has a 400 series error.</p>
     */
    inline bool HasErrorHasBeenSet() const { return m_hasErrorHasBeenSet; }

    /**
     * <p>One or more of the segment documents has a 400 series error.</p>
     */
    inline void SetHasError(bool value) { m_hasErrorHasBeenSet = true; m_hasError = value; }

    /**
     * <p>One or more of the segment documents has a 400 series error.</p>
     */
    inline TraceSummary& WithHasError(bool value) { SetHasError(value); return *this;}


    /**
     * <p>One or more of the segment documents has a 429 throttling error.</p>
     */
    inline bool GetHasThrottle() const{ return m_hasThrottle; }

    /**
     * <p>One or more of the segment documents has a 429 throttling error.</p>
     */
    inline bool HasThrottleHasBeenSet() const { return m_hasThrottleHasBeenSet; }

    /**
     * <p>One or more of the segment documents has a 429 throttling error.</p>
     */
    inline void SetHasThrottle(bool value) { m_hasThrottleHasBeenSet = true; m_hasThrottle = value; }

    /**
     * <p>One or more of the segment documents has a 429 throttling error.</p>
     */
    inline TraceSummary& WithHasThrottle(bool value) { SetHasThrottle(value); return *this;}


    /**
     * <p>One or more of the segment documents is in progress.</p>
     */
    inline bool GetIsPartial() const{ return m_isPartial; }

    /**
     * <p>One or more of the segment documents is in progress.</p>
     */
    inline bool IsPartialHasBeenSet() const { return m_isPartialHasBeenSet; }

    /**
     * <p>One or more of the segment documents is in progress.</p>
     */
    inline void SetIsPartial(bool value) { m_isPartialHasBeenSet = true; m_isPartial = value; }

    /**
     * <p>One or more of the segment documents is in progress.</p>
     */
    inline TraceSummary& WithIsPartial(bool value) { SetIsPartial(value); return *this;}


    /**
     * <p>Information about the HTTP request served by the trace.</p>
     */
    inline const Http& GetHttp() const{ return m_http; }

    /**
     * <p>Information about the HTTP request served by the trace.</p>
     */
    inline bool HttpHasBeenSet() const { return m_httpHasBeenSet; }

    /**
     * <p>Information about the HTTP request served by the trace.</p>
     */
    inline void SetHttp(const Http& value) { m_httpHasBeenSet = true; m_http = value; }

    /**
     * <p>Information about the HTTP request served by the trace.</p>
     */
    inline void SetHttp(Http&& value) { m_httpHasBeenSet = true; m_http = std::move(value); }

    /**
     * <p>Information about the HTTP request served by the trace.</p>
     */
    inline TraceSummary& WithHttp(const Http& value) { SetHttp(value); return *this;}

    /**
     * <p>Information about the HTTP request served by the trace.</p>
     */
    inline TraceSummary& WithHttp(Http&& value) { SetHttp(std::move(value)); return *this;}


    /**
     * <p>Annotations from the trace's segment documents.</p>
     */
    inline const Aws::Map<Aws::String, Aws::Vector<ValueWithServiceIds>>& GetAnnotations() const{ return m_annotations; }

    /**
     * <p>Annotations from the trace's segment documents.</p>
     */
    inline bool AnnotationsHasBeenSet() const { return m_annotationsHasBeenSet; }

    /**
     * <p>Annotations from the trace's segment documents.</p>
     */
    inline void SetAnnotations(const Aws::Map<Aws::String, Aws::Vector<ValueWithServiceIds>>& value) { m_annotationsHasBeenSet = true; m_annotations = value; }

    /**
     * <p>Annotations from the trace's segment documents.</p>
     */
    inline void SetAnnotations(Aws::Map<Aws::String, Aws::Vector<ValueWithServiceIds>>&& value) { m_annotationsHasBeenSet = true; m_annotations = std::move(value); }

    /**
     * <p>Annotations from the trace's segment documents.</p>
     */
    inline TraceSummary& WithAnnotations(const Aws::Map<Aws::String, Aws::Vector<ValueWithServiceIds>>& value) { SetAnnotations(value); return *this;}

    /**
     * <p>Annotations from the trace's segment documents.</p>
     */
    inline TraceSummary& WithAnnotations(Aws::Map<Aws::String, Aws::Vector<ValueWithServiceIds>>&& value) { SetAnnotations(std::move(value)); return *this;}

    /**
     * <p>Annotations from the trace's segment documents.</p>
     */
    inline TraceSummary& AddAnnotations(const Aws::String& key, const Aws::Vector<ValueWithServiceIds>& value) { m_annotationsHasBeenSet = true; m_annotations.emplace(key, value); return *this; }

    /**
     * <p>Annotations from the trace's segment documents.</p>
     */
    inline TraceSummary& AddAnnotations(Aws::String&& key, const Aws::Vector<ValueWithServiceIds>& value) { m_annotationsHasBeenSet = true; m_annotations.emplace(std::move(key), value); return *this; }

    /**
     * <p>Annotations from the trace's segment documents.</p>
     */
    inline TraceSummary& AddAnnotations(const Aws::String& key, Aws::Vector<ValueWithServiceIds>&& value) { m_annotationsHasBeenSet = true; m_annotations.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Annotations from the trace's segment documents.</p>
     */
    inline TraceSummary& AddAnnotations(Aws::String&& key, Aws::Vector<ValueWithServiceIds>&& value) { m_annotationsHasBeenSet = true; m_annotations.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Annotations from the trace's segment documents.</p>
     */
    inline TraceSummary& AddAnnotations(const char* key, Aws::Vector<ValueWithServiceIds>&& value) { m_annotationsHasBeenSet = true; m_annotations.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Annotations from the trace's segment documents.</p>
     */
    inline TraceSummary& AddAnnotations(const char* key, const Aws::Vector<ValueWithServiceIds>& value) { m_annotationsHasBeenSet = true; m_annotations.emplace(key, value); return *this; }


    /**
     * <p>Users from the trace's segment documents.</p>
     */
    inline const Aws::Vector<TraceUser>& GetUsers() const{ return m_users; }

    /**
     * <p>Users from the trace's segment documents.</p>
     */
    inline bool UsersHasBeenSet() const { return m_usersHasBeenSet; }

    /**
     * <p>Users from the trace's segment documents.</p>
     */
    inline void SetUsers(const Aws::Vector<TraceUser>& value) { m_usersHasBeenSet = true; m_users = value; }

    /**
     * <p>Users from the trace's segment documents.</p>
     */
    inline void SetUsers(Aws::Vector<TraceUser>&& value) { m_usersHasBeenSet = true; m_users = std::move(value); }

    /**
     * <p>Users from the trace's segment documents.</p>
     */
    inline TraceSummary& WithUsers(const Aws::Vector<TraceUser>& value) { SetUsers(value); return *this;}

    /**
     * <p>Users from the trace's segment documents.</p>
     */
    inline TraceSummary& WithUsers(Aws::Vector<TraceUser>&& value) { SetUsers(std::move(value)); return *this;}

    /**
     * <p>Users from the trace's segment documents.</p>
     */
    inline TraceSummary& AddUsers(const TraceUser& value) { m_usersHasBeenSet = true; m_users.push_back(value); return *this; }

    /**
     * <p>Users from the trace's segment documents.</p>
     */
    inline TraceSummary& AddUsers(TraceUser&& value) { m_usersHasBeenSet = true; m_users.push_back(std::move(value)); return *this; }


    /**
     * <p>Service IDs from the trace's segment documents.</p>
     */
    inline const Aws::Vector<ServiceId>& GetServiceIds() const{ return m_serviceIds; }

    /**
     * <p>Service IDs from the trace's segment documents.</p>
     */
    inline bool ServiceIdsHasBeenSet() const { return m_serviceIdsHasBeenSet; }

    /**
     * <p>Service IDs from the trace's segment documents.</p>
     */
    inline void SetServiceIds(const Aws::Vector<ServiceId>& value) { m_serviceIdsHasBeenSet = true; m_serviceIds = value; }

    /**
     * <p>Service IDs from the trace's segment documents.</p>
     */
    inline void SetServiceIds(Aws::Vector<ServiceId>&& value) { m_serviceIdsHasBeenSet = true; m_serviceIds = std::move(value); }

    /**
     * <p>Service IDs from the trace's segment documents.</p>
     */
    inline TraceSummary& WithServiceIds(const Aws::Vector<ServiceId>& value) { SetServiceIds(value); return *this;}

    /**
     * <p>Service IDs from the trace's segment documents.</p>
     */
    inline TraceSummary& WithServiceIds(Aws::Vector<ServiceId>&& value) { SetServiceIds(std::move(value)); return *this;}

    /**
     * <p>Service IDs from the trace's segment documents.</p>
     */
    inline TraceSummary& AddServiceIds(const ServiceId& value) { m_serviceIdsHasBeenSet = true; m_serviceIds.push_back(value); return *this; }

    /**
     * <p>Service IDs from the trace's segment documents.</p>
     */
    inline TraceSummary& AddServiceIds(ServiceId&& value) { m_serviceIdsHasBeenSet = true; m_serviceIds.push_back(std::move(value)); return *this; }


    /**
     * <p>A list of resource ARNs for any resource corresponding to the trace
     * segments.</p>
     */
    inline const Aws::Vector<ResourceARNDetail>& GetResourceARNs() const{ return m_resourceARNs; }

    /**
     * <p>A list of resource ARNs for any resource corresponding to the trace
     * segments.</p>
     */
    inline bool ResourceARNsHasBeenSet() const { return m_resourceARNsHasBeenSet; }

    /**
     * <p>A list of resource ARNs for any resource corresponding to the trace
     * segments.</p>
     */
    inline void SetResourceARNs(const Aws::Vector<ResourceARNDetail>& value) { m_resourceARNsHasBeenSet = true; m_resourceARNs = value; }

    /**
     * <p>A list of resource ARNs for any resource corresponding to the trace
     * segments.</p>
     */
    inline void SetResourceARNs(Aws::Vector<ResourceARNDetail>&& value) { m_resourceARNsHasBeenSet = true; m_resourceARNs = std::move(value); }

    /**
     * <p>A list of resource ARNs for any resource corresponding to the trace
     * segments.</p>
     */
    inline TraceSummary& WithResourceARNs(const Aws::Vector<ResourceARNDetail>& value) { SetResourceARNs(value); return *this;}

    /**
     * <p>A list of resource ARNs for any resource corresponding to the trace
     * segments.</p>
     */
    inline TraceSummary& WithResourceARNs(Aws::Vector<ResourceARNDetail>&& value) { SetResourceARNs(std::move(value)); return *this;}

    /**
     * <p>A list of resource ARNs for any resource corresponding to the trace
     * segments.</p>
     */
    inline TraceSummary& AddResourceARNs(const ResourceARNDetail& value) { m_resourceARNsHasBeenSet = true; m_resourceARNs.push_back(value); return *this; }

    /**
     * <p>A list of resource ARNs for any resource corresponding to the trace
     * segments.</p>
     */
    inline TraceSummary& AddResourceARNs(ResourceARNDetail&& value) { m_resourceARNsHasBeenSet = true; m_resourceARNs.push_back(std::move(value)); return *this; }


    /**
     * <p>A list of EC2 instance IDs for any instance corresponding to the trace
     * segments.</p>
     */
    inline const Aws::Vector<InstanceIdDetail>& GetInstanceIds() const{ return m_instanceIds; }

    /**
     * <p>A list of EC2 instance IDs for any instance corresponding to the trace
     * segments.</p>
     */
    inline bool InstanceIdsHasBeenSet() const { return m_instanceIdsHasBeenSet; }

    /**
     * <p>A list of EC2 instance IDs for any instance corresponding to the trace
     * segments.</p>
     */
    inline void SetInstanceIds(const Aws::Vector<InstanceIdDetail>& value) { m_instanceIdsHasBeenSet = true; m_instanceIds = value; }

    /**
     * <p>A list of EC2 instance IDs for any instance corresponding to the trace
     * segments.</p>
     */
    inline void SetInstanceIds(Aws::Vector<InstanceIdDetail>&& value) { m_instanceIdsHasBeenSet = true; m_instanceIds = std::move(value); }

    /**
     * <p>A list of EC2 instance IDs for any instance corresponding to the trace
     * segments.</p>
     */
    inline TraceSummary& WithInstanceIds(const Aws::Vector<InstanceIdDetail>& value) { SetInstanceIds(value); return *this;}

    /**
     * <p>A list of EC2 instance IDs for any instance corresponding to the trace
     * segments.</p>
     */
    inline TraceSummary& WithInstanceIds(Aws::Vector<InstanceIdDetail>&& value) { SetInstanceIds(std::move(value)); return *this;}

    /**
     * <p>A list of EC2 instance IDs for any instance corresponding to the trace
     * segments.</p>
     */
    inline TraceSummary& AddInstanceIds(const InstanceIdDetail& value) { m_instanceIdsHasBeenSet = true; m_instanceIds.push_back(value); return *this; }

    /**
     * <p>A list of EC2 instance IDs for any instance corresponding to the trace
     * segments.</p>
     */
    inline TraceSummary& AddInstanceIds(InstanceIdDetail&& value) { m_instanceIdsHasBeenSet = true; m_instanceIds.push_back(std::move(value)); return *this; }


    /**
     * <p>A list of availability zones for any zone corresponding to the trace
     * segments.</p>
     */
    inline const Aws::Vector<AvailabilityZoneDetail>& GetAvailabilityZones() const{ return m_availabilityZones; }

    /**
     * <p>A list of availability zones for any zone corresponding to the trace
     * segments.</p>
     */
    inline bool AvailabilityZonesHasBeenSet() const { return m_availabilityZonesHasBeenSet; }

    /**
     * <p>A list of availability zones for any zone corresponding to the trace
     * segments.</p>
     */
    inline void SetAvailabilityZones(const Aws::Vector<AvailabilityZoneDetail>& value) { m_availabilityZonesHasBeenSet = true; m_availabilityZones = value; }

    /**
     * <p>A list of availability zones for any zone corresponding to the trace
     * segments.</p>
     */
    inline void SetAvailabilityZones(Aws::Vector<AvailabilityZoneDetail>&& value) { m_availabilityZonesHasBeenSet = true; m_availabilityZones = std::move(value); }

    /**
     * <p>A list of availability zones for any zone corresponding to the trace
     * segments.</p>
     */
    inline TraceSummary& WithAvailabilityZones(const Aws::Vector<AvailabilityZoneDetail>& value) { SetAvailabilityZones(value); return *this;}

    /**
     * <p>A list of availability zones for any zone corresponding to the trace
     * segments.</p>
     */
    inline TraceSummary& WithAvailabilityZones(Aws::Vector<AvailabilityZoneDetail>&& value) { SetAvailabilityZones(std::move(value)); return *this;}

    /**
     * <p>A list of availability zones for any zone corresponding to the trace
     * segments.</p>
     */
    inline TraceSummary& AddAvailabilityZones(const AvailabilityZoneDetail& value) { m_availabilityZonesHasBeenSet = true; m_availabilityZones.push_back(value); return *this; }

    /**
     * <p>A list of availability zones for any zone corresponding to the trace
     * segments.</p>
     */
    inline TraceSummary& AddAvailabilityZones(AvailabilityZoneDetail&& value) { m_availabilityZonesHasBeenSet = true; m_availabilityZones.push_back(std::move(value)); return *this; }


    /**
     * <p>The root of a trace.</p>
     */
    inline const ServiceId& GetEntryPoint() const{ return m_entryPoint; }

    /**
     * <p>The root of a trace.</p>
     */
    inline bool EntryPointHasBeenSet() const { return m_entryPointHasBeenSet; }

    /**
     * <p>The root of a trace.</p>
     */
    inline void SetEntryPoint(const ServiceId& value) { m_entryPointHasBeenSet = true; m_entryPoint = value; }

    /**
     * <p>The root of a trace.</p>
     */
    inline void SetEntryPoint(ServiceId&& value) { m_entryPointHasBeenSet = true; m_entryPoint = std::move(value); }

    /**
     * <p>The root of a trace.</p>
     */
    inline TraceSummary& WithEntryPoint(const ServiceId& value) { SetEntryPoint(value); return *this;}

    /**
     * <p>The root of a trace.</p>
     */
    inline TraceSummary& WithEntryPoint(ServiceId&& value) { SetEntryPoint(std::move(value)); return *this;}


    /**
     * <p>A collection of FaultRootCause structures corresponding to the the trace
     * segments.</p>
     */
    inline const Aws::Vector<FaultRootCause>& GetFaultRootCauses() const{ return m_faultRootCauses; }

    /**
     * <p>A collection of FaultRootCause structures corresponding to the the trace
     * segments.</p>
     */
    inline bool FaultRootCausesHasBeenSet() const { return m_faultRootCausesHasBeenSet; }

    /**
     * <p>A collection of FaultRootCause structures corresponding to the the trace
     * segments.</p>
     */
    inline void SetFaultRootCauses(const Aws::Vector<FaultRootCause>& value) { m_faultRootCausesHasBeenSet = true; m_faultRootCauses = value; }

    /**
     * <p>A collection of FaultRootCause structures corresponding to the the trace
     * segments.</p>
     */
    inline void SetFaultRootCauses(Aws::Vector<FaultRootCause>&& value) { m_faultRootCausesHasBeenSet = true; m_faultRootCauses = std::move(value); }

    /**
     * <p>A collection of FaultRootCause structures corresponding to the the trace
     * segments.</p>
     */
    inline TraceSummary& WithFaultRootCauses(const Aws::Vector<FaultRootCause>& value) { SetFaultRootCauses(value); return *this;}

    /**
     * <p>A collection of FaultRootCause structures corresponding to the the trace
     * segments.</p>
     */
    inline TraceSummary& WithFaultRootCauses(Aws::Vector<FaultRootCause>&& value) { SetFaultRootCauses(std::move(value)); return *this;}

    /**
     * <p>A collection of FaultRootCause structures corresponding to the the trace
     * segments.</p>
     */
    inline TraceSummary& AddFaultRootCauses(const FaultRootCause& value) { m_faultRootCausesHasBeenSet = true; m_faultRootCauses.push_back(value); return *this; }

    /**
     * <p>A collection of FaultRootCause structures corresponding to the the trace
     * segments.</p>
     */
    inline TraceSummary& AddFaultRootCauses(FaultRootCause&& value) { m_faultRootCausesHasBeenSet = true; m_faultRootCauses.push_back(std::move(value)); return *this; }


    /**
     * <p>A collection of ErrorRootCause structures corresponding to the trace
     * segments.</p>
     */
    inline const Aws::Vector<ErrorRootCause>& GetErrorRootCauses() const{ return m_errorRootCauses; }

    /**
     * <p>A collection of ErrorRootCause structures corresponding to the trace
     * segments.</p>
     */
    inline bool ErrorRootCausesHasBeenSet() const { return m_errorRootCausesHasBeenSet; }

    /**
     * <p>A collection of ErrorRootCause structures corresponding to the trace
     * segments.</p>
     */
    inline void SetErrorRootCauses(const Aws::Vector<ErrorRootCause>& value) { m_errorRootCausesHasBeenSet = true; m_errorRootCauses = value; }

    /**
     * <p>A collection of ErrorRootCause structures corresponding to the trace
     * segments.</p>
     */
    inline void SetErrorRootCauses(Aws::Vector<ErrorRootCause>&& value) { m_errorRootCausesHasBeenSet = true; m_errorRootCauses = std::move(value); }

    /**
     * <p>A collection of ErrorRootCause structures corresponding to the trace
     * segments.</p>
     */
    inline TraceSummary& WithErrorRootCauses(const Aws::Vector<ErrorRootCause>& value) { SetErrorRootCauses(value); return *this;}

    /**
     * <p>A collection of ErrorRootCause structures corresponding to the trace
     * segments.</p>
     */
    inline TraceSummary& WithErrorRootCauses(Aws::Vector<ErrorRootCause>&& value) { SetErrorRootCauses(std::move(value)); return *this;}

    /**
     * <p>A collection of ErrorRootCause structures corresponding to the trace
     * segments.</p>
     */
    inline TraceSummary& AddErrorRootCauses(const ErrorRootCause& value) { m_errorRootCausesHasBeenSet = true; m_errorRootCauses.push_back(value); return *this; }

    /**
     * <p>A collection of ErrorRootCause structures corresponding to the trace
     * segments.</p>
     */
    inline TraceSummary& AddErrorRootCauses(ErrorRootCause&& value) { m_errorRootCausesHasBeenSet = true; m_errorRootCauses.push_back(std::move(value)); return *this; }


    /**
     * <p>A collection of ResponseTimeRootCause structures corresponding to the trace
     * segments.</p>
     */
    inline const Aws::Vector<ResponseTimeRootCause>& GetResponseTimeRootCauses() const{ return m_responseTimeRootCauses; }

    /**
     * <p>A collection of ResponseTimeRootCause structures corresponding to the trace
     * segments.</p>
     */
    inline bool ResponseTimeRootCausesHasBeenSet() const { return m_responseTimeRootCausesHasBeenSet; }

    /**
     * <p>A collection of ResponseTimeRootCause structures corresponding to the trace
     * segments.</p>
     */
    inline void SetResponseTimeRootCauses(const Aws::Vector<ResponseTimeRootCause>& value) { m_responseTimeRootCausesHasBeenSet = true; m_responseTimeRootCauses = value; }

    /**
     * <p>A collection of ResponseTimeRootCause structures corresponding to the trace
     * segments.</p>
     */
    inline void SetResponseTimeRootCauses(Aws::Vector<ResponseTimeRootCause>&& value) { m_responseTimeRootCausesHasBeenSet = true; m_responseTimeRootCauses = std::move(value); }

    /**
     * <p>A collection of ResponseTimeRootCause structures corresponding to the trace
     * segments.</p>
     */
    inline TraceSummary& WithResponseTimeRootCauses(const Aws::Vector<ResponseTimeRootCause>& value) { SetResponseTimeRootCauses(value); return *this;}

    /**
     * <p>A collection of ResponseTimeRootCause structures corresponding to the trace
     * segments.</p>
     */
    inline TraceSummary& WithResponseTimeRootCauses(Aws::Vector<ResponseTimeRootCause>&& value) { SetResponseTimeRootCauses(std::move(value)); return *this;}

    /**
     * <p>A collection of ResponseTimeRootCause structures corresponding to the trace
     * segments.</p>
     */
    inline TraceSummary& AddResponseTimeRootCauses(const ResponseTimeRootCause& value) { m_responseTimeRootCausesHasBeenSet = true; m_responseTimeRootCauses.push_back(value); return *this; }

    /**
     * <p>A collection of ResponseTimeRootCause structures corresponding to the trace
     * segments.</p>
     */
    inline TraceSummary& AddResponseTimeRootCauses(ResponseTimeRootCause&& value) { m_responseTimeRootCausesHasBeenSet = true; m_responseTimeRootCauses.push_back(std::move(value)); return *this; }


    /**
     * <p>The revision number of a trace.</p>
     */
    inline int GetRevision() const{ return m_revision; }

    /**
     * <p>The revision number of a trace.</p>
     */
    inline bool RevisionHasBeenSet() const { return m_revisionHasBeenSet; }

    /**
     * <p>The revision number of a trace.</p>
     */
    inline void SetRevision(int value) { m_revisionHasBeenSet = true; m_revision = value; }

    /**
     * <p>The revision number of a trace.</p>
     */
    inline TraceSummary& WithRevision(int value) { SetRevision(value); return *this;}


    /**
     * <p>The matched time stamp of a defined event.</p>
     */
    inline const Aws::Utils::DateTime& GetMatchedEventTime() const{ return m_matchedEventTime; }

    /**
     * <p>The matched time stamp of a defined event.</p>
     */
    inline bool MatchedEventTimeHasBeenSet() const { return m_matchedEventTimeHasBeenSet; }

    /**
     * <p>The matched time stamp of a defined event.</p>
     */
    inline void SetMatchedEventTime(const Aws::Utils::DateTime& value) { m_matchedEventTimeHasBeenSet = true; m_matchedEventTime = value; }

    /**
     * <p>The matched time stamp of a defined event.</p>
     */
    inline void SetMatchedEventTime(Aws::Utils::DateTime&& value) { m_matchedEventTimeHasBeenSet = true; m_matchedEventTime = std::move(value); }

    /**
     * <p>The matched time stamp of a defined event.</p>
     */
    inline TraceSummary& WithMatchedEventTime(const Aws::Utils::DateTime& value) { SetMatchedEventTime(value); return *this;}

    /**
     * <p>The matched time stamp of a defined event.</p>
     */
    inline TraceSummary& WithMatchedEventTime(Aws::Utils::DateTime&& value) { SetMatchedEventTime(std::move(value)); return *this;}

  private:

    Aws::String m_id;
    bool m_idHasBeenSet;

    double m_duration;
    bool m_durationHasBeenSet;

    double m_responseTime;
    bool m_responseTimeHasBeenSet;

    bool m_hasFault;
    bool m_hasFaultHasBeenSet;

    bool m_hasError;
    bool m_hasErrorHasBeenSet;

    bool m_hasThrottle;
    bool m_hasThrottleHasBeenSet;

    bool m_isPartial;
    bool m_isPartialHasBeenSet;

    Http m_http;
    bool m_httpHasBeenSet;

    Aws::Map<Aws::String, Aws::Vector<ValueWithServiceIds>> m_annotations;
    bool m_annotationsHasBeenSet;

    Aws::Vector<TraceUser> m_users;
    bool m_usersHasBeenSet;

    Aws::Vector<ServiceId> m_serviceIds;
    bool m_serviceIdsHasBeenSet;

    Aws::Vector<ResourceARNDetail> m_resourceARNs;
    bool m_resourceARNsHasBeenSet;

    Aws::Vector<InstanceIdDetail> m_instanceIds;
    bool m_instanceIdsHasBeenSet;

    Aws::Vector<AvailabilityZoneDetail> m_availabilityZones;
    bool m_availabilityZonesHasBeenSet;

    ServiceId m_entryPoint;
    bool m_entryPointHasBeenSet;

    Aws::Vector<FaultRootCause> m_faultRootCauses;
    bool m_faultRootCausesHasBeenSet;

    Aws::Vector<ErrorRootCause> m_errorRootCauses;
    bool m_errorRootCausesHasBeenSet;

    Aws::Vector<ResponseTimeRootCause> m_responseTimeRootCauses;
    bool m_responseTimeRootCausesHasBeenSet;

    int m_revision;
    bool m_revisionHasBeenSet;

    Aws::Utils::DateTime m_matchedEventTime;
    bool m_matchedEventTimeHasBeenSet;
  };

} // namespace Model
} // namespace XRay
} // namespace Aws
