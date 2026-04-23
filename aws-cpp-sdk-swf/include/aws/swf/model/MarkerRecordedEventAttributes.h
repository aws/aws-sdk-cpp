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
#include <aws/swf/SWF_EXPORTS.h>
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
namespace SWF
{
namespace Model
{

  /**
   * <p>Provides the details of the <code>MarkerRecorded</code> event.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/swf-2012-01-25/MarkerRecordedEventAttributes">AWS
   * API Reference</a></p>
   */
  class AWS_SWF_API MarkerRecordedEventAttributes
  {
  public:
    MarkerRecordedEventAttributes();
    MarkerRecordedEventAttributes(Aws::Utils::Json::JsonView jsonValue);
    MarkerRecordedEventAttributes& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the marker.</p>
     */
    inline const Aws::String& GetMarkerName() const{ return m_markerName; }

    /**
     * <p>The name of the marker.</p>
     */
    inline bool MarkerNameHasBeenSet() const { return m_markerNameHasBeenSet; }

    /**
     * <p>The name of the marker.</p>
     */
    inline void SetMarkerName(const Aws::String& value) { m_markerNameHasBeenSet = true; m_markerName = value; }

    /**
     * <p>The name of the marker.</p>
     */
    inline void SetMarkerName(Aws::String&& value) { m_markerNameHasBeenSet = true; m_markerName = std::move(value); }

    /**
     * <p>The name of the marker.</p>
     */
    inline void SetMarkerName(const char* value) { m_markerNameHasBeenSet = true; m_markerName.assign(value); }

    /**
     * <p>The name of the marker.</p>
     */
    inline MarkerRecordedEventAttributes& WithMarkerName(const Aws::String& value) { SetMarkerName(value); return *this;}

    /**
     * <p>The name of the marker.</p>
     */
    inline MarkerRecordedEventAttributes& WithMarkerName(Aws::String&& value) { SetMarkerName(std::move(value)); return *this;}

    /**
     * <p>The name of the marker.</p>
     */
    inline MarkerRecordedEventAttributes& WithMarkerName(const char* value) { SetMarkerName(value); return *this;}


    /**
     * <p>The details of the marker.</p>
     */
    inline const Aws::String& GetDetails() const{ return m_details; }

    /**
     * <p>The details of the marker.</p>
     */
    inline bool DetailsHasBeenSet() const { return m_detailsHasBeenSet; }

    /**
     * <p>The details of the marker.</p>
     */
    inline void SetDetails(const Aws::String& value) { m_detailsHasBeenSet = true; m_details = value; }

    /**
     * <p>The details of the marker.</p>
     */
    inline void SetDetails(Aws::String&& value) { m_detailsHasBeenSet = true; m_details = std::move(value); }

    /**
     * <p>The details of the marker.</p>
     */
    inline void SetDetails(const char* value) { m_detailsHasBeenSet = true; m_details.assign(value); }

    /**
     * <p>The details of the marker.</p>
     */
    inline MarkerRecordedEventAttributes& WithDetails(const Aws::String& value) { SetDetails(value); return *this;}

    /**
     * <p>The details of the marker.</p>
     */
    inline MarkerRecordedEventAttributes& WithDetails(Aws::String&& value) { SetDetails(std::move(value)); return *this;}

    /**
     * <p>The details of the marker.</p>
     */
    inline MarkerRecordedEventAttributes& WithDetails(const char* value) { SetDetails(value); return *this;}


    /**
     * <p>The ID of the <code>DecisionTaskCompleted</code> event corresponding to the
     * decision task that resulted in the <code>RecordMarker</code> decision that
     * requested this marker. This information can be useful for diagnosing problems by
     * tracing back the chain of events leading up to this event.</p>
     */
    inline long long GetDecisionTaskCompletedEventId() const{ return m_decisionTaskCompletedEventId; }

    /**
     * <p>The ID of the <code>DecisionTaskCompleted</code> event corresponding to the
     * decision task that resulted in the <code>RecordMarker</code> decision that
     * requested this marker. This information can be useful for diagnosing problems by
     * tracing back the chain of events leading up to this event.</p>
     */
    inline bool DecisionTaskCompletedEventIdHasBeenSet() const { return m_decisionTaskCompletedEventIdHasBeenSet; }

    /**
     * <p>The ID of the <code>DecisionTaskCompleted</code> event corresponding to the
     * decision task that resulted in the <code>RecordMarker</code> decision that
     * requested this marker. This information can be useful for diagnosing problems by
     * tracing back the chain of events leading up to this event.</p>
     */
    inline void SetDecisionTaskCompletedEventId(long long value) { m_decisionTaskCompletedEventIdHasBeenSet = true; m_decisionTaskCompletedEventId = value; }

    /**
     * <p>The ID of the <code>DecisionTaskCompleted</code> event corresponding to the
     * decision task that resulted in the <code>RecordMarker</code> decision that
     * requested this marker. This information can be useful for diagnosing problems by
     * tracing back the chain of events leading up to this event.</p>
     */
    inline MarkerRecordedEventAttributes& WithDecisionTaskCompletedEventId(long long value) { SetDecisionTaskCompletedEventId(value); return *this;}

  private:

    Aws::String m_markerName;
    bool m_markerNameHasBeenSet;

    Aws::String m_details;
    bool m_detailsHasBeenSet;

    long long m_decisionTaskCompletedEventId;
    bool m_decisionTaskCompletedEventIdHasBeenSet;
  };

} // namespace Model
} // namespace SWF
} // namespace Aws
