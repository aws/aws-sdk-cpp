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
#include <aws/xray/model/TraceUser.h>
#include <aws/xray/model/ServiceId.h>
#include <aws/xray/model/ValueWithServiceIds.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
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
    TraceSummary(const Aws::Utils::Json::JsonValue& jsonValue);
    TraceSummary& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
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
  };

} // namespace Model
} // namespace XRay
} // namespace Aws
