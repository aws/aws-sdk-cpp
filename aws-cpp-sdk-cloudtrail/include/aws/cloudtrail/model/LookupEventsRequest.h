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
#include <aws/cloudtrail/CloudTrail_EXPORTS.h>
#include <aws/cloudtrail/CloudTrailRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/cloudtrail/model/LookupAttribute.h>
#include <utility>

namespace Aws
{
namespace CloudTrail
{
namespace Model
{

  /**
   * <p>Contains a request for LookupEvents.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudtrail-2013-11-01/LookupEventsRequest">AWS
   * API Reference</a></p>
   */
  class AWS_CLOUDTRAIL_API LookupEventsRequest : public CloudTrailRequest
  {
  public:
    LookupEventsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "LookupEvents"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>Contains a list of lookup attributes. Currently the list can contain only one
     * item.</p>
     */
    inline const Aws::Vector<LookupAttribute>& GetLookupAttributes() const{ return m_lookupAttributes; }

    /**
     * <p>Contains a list of lookup attributes. Currently the list can contain only one
     * item.</p>
     */
    inline bool LookupAttributesHasBeenSet() const { return m_lookupAttributesHasBeenSet; }

    /**
     * <p>Contains a list of lookup attributes. Currently the list can contain only one
     * item.</p>
     */
    inline void SetLookupAttributes(const Aws::Vector<LookupAttribute>& value) { m_lookupAttributesHasBeenSet = true; m_lookupAttributes = value; }

    /**
     * <p>Contains a list of lookup attributes. Currently the list can contain only one
     * item.</p>
     */
    inline void SetLookupAttributes(Aws::Vector<LookupAttribute>&& value) { m_lookupAttributesHasBeenSet = true; m_lookupAttributes = std::move(value); }

    /**
     * <p>Contains a list of lookup attributes. Currently the list can contain only one
     * item.</p>
     */
    inline LookupEventsRequest& WithLookupAttributes(const Aws::Vector<LookupAttribute>& value) { SetLookupAttributes(value); return *this;}

    /**
     * <p>Contains a list of lookup attributes. Currently the list can contain only one
     * item.</p>
     */
    inline LookupEventsRequest& WithLookupAttributes(Aws::Vector<LookupAttribute>&& value) { SetLookupAttributes(std::move(value)); return *this;}

    /**
     * <p>Contains a list of lookup attributes. Currently the list can contain only one
     * item.</p>
     */
    inline LookupEventsRequest& AddLookupAttributes(const LookupAttribute& value) { m_lookupAttributesHasBeenSet = true; m_lookupAttributes.push_back(value); return *this; }

    /**
     * <p>Contains a list of lookup attributes. Currently the list can contain only one
     * item.</p>
     */
    inline LookupEventsRequest& AddLookupAttributes(LookupAttribute&& value) { m_lookupAttributesHasBeenSet = true; m_lookupAttributes.push_back(std::move(value)); return *this; }


    /**
     * <p>Specifies that only events that occur after or at the specified time are
     * returned. If the specified start time is after the specified end time, an error
     * is returned.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const{ return m_startTime; }

    /**
     * <p>Specifies that only events that occur after or at the specified time are
     * returned. If the specified start time is after the specified end time, an error
     * is returned.</p>
     */
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }

    /**
     * <p>Specifies that only events that occur after or at the specified time are
     * returned. If the specified start time is after the specified end time, an error
     * is returned.</p>
     */
    inline void SetStartTime(const Aws::Utils::DateTime& value) { m_startTimeHasBeenSet = true; m_startTime = value; }

    /**
     * <p>Specifies that only events that occur after or at the specified time are
     * returned. If the specified start time is after the specified end time, an error
     * is returned.</p>
     */
    inline void SetStartTime(Aws::Utils::DateTime&& value) { m_startTimeHasBeenSet = true; m_startTime = std::move(value); }

    /**
     * <p>Specifies that only events that occur after or at the specified time are
     * returned. If the specified start time is after the specified end time, an error
     * is returned.</p>
     */
    inline LookupEventsRequest& WithStartTime(const Aws::Utils::DateTime& value) { SetStartTime(value); return *this;}

    /**
     * <p>Specifies that only events that occur after or at the specified time are
     * returned. If the specified start time is after the specified end time, an error
     * is returned.</p>
     */
    inline LookupEventsRequest& WithStartTime(Aws::Utils::DateTime&& value) { SetStartTime(std::move(value)); return *this;}


    /**
     * <p>Specifies that only events that occur before or at the specified time are
     * returned. If the specified end time is before the specified start time, an error
     * is returned.</p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const{ return m_endTime; }

    /**
     * <p>Specifies that only events that occur before or at the specified time are
     * returned. If the specified end time is before the specified start time, an error
     * is returned.</p>
     */
    inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }

    /**
     * <p>Specifies that only events that occur before or at the specified time are
     * returned. If the specified end time is before the specified start time, an error
     * is returned.</p>
     */
    inline void SetEndTime(const Aws::Utils::DateTime& value) { m_endTimeHasBeenSet = true; m_endTime = value; }

    /**
     * <p>Specifies that only events that occur before or at the specified time are
     * returned. If the specified end time is before the specified start time, an error
     * is returned.</p>
     */
    inline void SetEndTime(Aws::Utils::DateTime&& value) { m_endTimeHasBeenSet = true; m_endTime = std::move(value); }

    /**
     * <p>Specifies that only events that occur before or at the specified time are
     * returned. If the specified end time is before the specified start time, an error
     * is returned.</p>
     */
    inline LookupEventsRequest& WithEndTime(const Aws::Utils::DateTime& value) { SetEndTime(value); return *this;}

    /**
     * <p>Specifies that only events that occur before or at the specified time are
     * returned. If the specified end time is before the specified start time, an error
     * is returned.</p>
     */
    inline LookupEventsRequest& WithEndTime(Aws::Utils::DateTime&& value) { SetEndTime(std::move(value)); return *this;}


    /**
     * <p>The number of events to return. Possible values are 1 through 50. The default
     * is 50.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The number of events to return. Possible values are 1 through 50. The default
     * is 50.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The number of events to return. Possible values are 1 through 50. The default
     * is 50.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The number of events to return. Possible values are 1 through 50. The default
     * is 50.</p>
     */
    inline LookupEventsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>The token to use to get the next page of results after a previous API call.
     * This token must be passed in with the same parameters that were specified in the
     * the original call. For example, if the original call specified an AttributeKey
     * of 'Username' with a value of 'root', the call with NextToken should include
     * those same parameters.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token to use to get the next page of results after a previous API call.
     * This token must be passed in with the same parameters that were specified in the
     * the original call. For example, if the original call specified an AttributeKey
     * of 'Username' with a value of 'root', the call with NextToken should include
     * those same parameters.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>The token to use to get the next page of results after a previous API call.
     * This token must be passed in with the same parameters that were specified in the
     * the original call. For example, if the original call specified an AttributeKey
     * of 'Username' with a value of 'root', the call with NextToken should include
     * those same parameters.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The token to use to get the next page of results after a previous API call.
     * This token must be passed in with the same parameters that were specified in the
     * the original call. For example, if the original call specified an AttributeKey
     * of 'Username' with a value of 'root', the call with NextToken should include
     * those same parameters.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>The token to use to get the next page of results after a previous API call.
     * This token must be passed in with the same parameters that were specified in the
     * the original call. For example, if the original call specified an AttributeKey
     * of 'Username' with a value of 'root', the call with NextToken should include
     * those same parameters.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>The token to use to get the next page of results after a previous API call.
     * This token must be passed in with the same parameters that were specified in the
     * the original call. For example, if the original call specified an AttributeKey
     * of 'Username' with a value of 'root', the call with NextToken should include
     * those same parameters.</p>
     */
    inline LookupEventsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token to use to get the next page of results after a previous API call.
     * This token must be passed in with the same parameters that were specified in the
     * the original call. For example, if the original call specified an AttributeKey
     * of 'Username' with a value of 'root', the call with NextToken should include
     * those same parameters.</p>
     */
    inline LookupEventsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token to use to get the next page of results after a previous API call.
     * This token must be passed in with the same parameters that were specified in the
     * the original call. For example, if the original call specified an AttributeKey
     * of 'Username' with a value of 'root', the call with NextToken should include
     * those same parameters.</p>
     */
    inline LookupEventsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<LookupAttribute> m_lookupAttributes;
    bool m_lookupAttributesHasBeenSet;

    Aws::Utils::DateTime m_startTime;
    bool m_startTimeHasBeenSet;

    Aws::Utils::DateTime m_endTime;
    bool m_endTimeHasBeenSet;

    int m_maxResults;
    bool m_maxResultsHasBeenSet;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet;
  };

} // namespace Model
} // namespace CloudTrail
} // namespace Aws
