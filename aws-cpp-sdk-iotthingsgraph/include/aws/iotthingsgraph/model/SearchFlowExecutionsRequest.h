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
#include <aws/iotthingsgraph/IoTThingsGraph_EXPORTS.h>
#include <aws/iotthingsgraph/IoTThingsGraphRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <utility>

namespace Aws
{
namespace IoTThingsGraph
{
namespace Model
{

  /**
   */
  class AWS_IOTTHINGSGRAPH_API SearchFlowExecutionsRequest : public IoTThingsGraphRequest
  {
  public:
    SearchFlowExecutionsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "SearchFlowExecutions"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The ID of the system instance that contains the flow.</p>
     */
    inline const Aws::String& GetSystemInstanceId() const{ return m_systemInstanceId; }

    /**
     * <p>The ID of the system instance that contains the flow.</p>
     */
    inline bool SystemInstanceIdHasBeenSet() const { return m_systemInstanceIdHasBeenSet; }

    /**
     * <p>The ID of the system instance that contains the flow.</p>
     */
    inline void SetSystemInstanceId(const Aws::String& value) { m_systemInstanceIdHasBeenSet = true; m_systemInstanceId = value; }

    /**
     * <p>The ID of the system instance that contains the flow.</p>
     */
    inline void SetSystemInstanceId(Aws::String&& value) { m_systemInstanceIdHasBeenSet = true; m_systemInstanceId = std::move(value); }

    /**
     * <p>The ID of the system instance that contains the flow.</p>
     */
    inline void SetSystemInstanceId(const char* value) { m_systemInstanceIdHasBeenSet = true; m_systemInstanceId.assign(value); }

    /**
     * <p>The ID of the system instance that contains the flow.</p>
     */
    inline SearchFlowExecutionsRequest& WithSystemInstanceId(const Aws::String& value) { SetSystemInstanceId(value); return *this;}

    /**
     * <p>The ID of the system instance that contains the flow.</p>
     */
    inline SearchFlowExecutionsRequest& WithSystemInstanceId(Aws::String&& value) { SetSystemInstanceId(std::move(value)); return *this;}

    /**
     * <p>The ID of the system instance that contains the flow.</p>
     */
    inline SearchFlowExecutionsRequest& WithSystemInstanceId(const char* value) { SetSystemInstanceId(value); return *this;}


    /**
     * <p>The ID of a flow execution.</p>
     */
    inline const Aws::String& GetFlowExecutionId() const{ return m_flowExecutionId; }

    /**
     * <p>The ID of a flow execution.</p>
     */
    inline bool FlowExecutionIdHasBeenSet() const { return m_flowExecutionIdHasBeenSet; }

    /**
     * <p>The ID of a flow execution.</p>
     */
    inline void SetFlowExecutionId(const Aws::String& value) { m_flowExecutionIdHasBeenSet = true; m_flowExecutionId = value; }

    /**
     * <p>The ID of a flow execution.</p>
     */
    inline void SetFlowExecutionId(Aws::String&& value) { m_flowExecutionIdHasBeenSet = true; m_flowExecutionId = std::move(value); }

    /**
     * <p>The ID of a flow execution.</p>
     */
    inline void SetFlowExecutionId(const char* value) { m_flowExecutionIdHasBeenSet = true; m_flowExecutionId.assign(value); }

    /**
     * <p>The ID of a flow execution.</p>
     */
    inline SearchFlowExecutionsRequest& WithFlowExecutionId(const Aws::String& value) { SetFlowExecutionId(value); return *this;}

    /**
     * <p>The ID of a flow execution.</p>
     */
    inline SearchFlowExecutionsRequest& WithFlowExecutionId(Aws::String&& value) { SetFlowExecutionId(std::move(value)); return *this;}

    /**
     * <p>The ID of a flow execution.</p>
     */
    inline SearchFlowExecutionsRequest& WithFlowExecutionId(const char* value) { SetFlowExecutionId(value); return *this;}


    /**
     * <p>The date and time of the earliest flow execution to return.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const{ return m_startTime; }

    /**
     * <p>The date and time of the earliest flow execution to return.</p>
     */
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }

    /**
     * <p>The date and time of the earliest flow execution to return.</p>
     */
    inline void SetStartTime(const Aws::Utils::DateTime& value) { m_startTimeHasBeenSet = true; m_startTime = value; }

    /**
     * <p>The date and time of the earliest flow execution to return.</p>
     */
    inline void SetStartTime(Aws::Utils::DateTime&& value) { m_startTimeHasBeenSet = true; m_startTime = std::move(value); }

    /**
     * <p>The date and time of the earliest flow execution to return.</p>
     */
    inline SearchFlowExecutionsRequest& WithStartTime(const Aws::Utils::DateTime& value) { SetStartTime(value); return *this;}

    /**
     * <p>The date and time of the earliest flow execution to return.</p>
     */
    inline SearchFlowExecutionsRequest& WithStartTime(Aws::Utils::DateTime&& value) { SetStartTime(std::move(value)); return *this;}


    /**
     * <p>The date and time of the latest flow execution to return.</p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const{ return m_endTime; }

    /**
     * <p>The date and time of the latest flow execution to return.</p>
     */
    inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }

    /**
     * <p>The date and time of the latest flow execution to return.</p>
     */
    inline void SetEndTime(const Aws::Utils::DateTime& value) { m_endTimeHasBeenSet = true; m_endTime = value; }

    /**
     * <p>The date and time of the latest flow execution to return.</p>
     */
    inline void SetEndTime(Aws::Utils::DateTime&& value) { m_endTimeHasBeenSet = true; m_endTime = std::move(value); }

    /**
     * <p>The date and time of the latest flow execution to return.</p>
     */
    inline SearchFlowExecutionsRequest& WithEndTime(const Aws::Utils::DateTime& value) { SetEndTime(value); return *this;}

    /**
     * <p>The date and time of the latest flow execution to return.</p>
     */
    inline SearchFlowExecutionsRequest& WithEndTime(Aws::Utils::DateTime&& value) { SetEndTime(std::move(value)); return *this;}


    /**
     * <p>The string that specifies the next page of results. Use this when you're
     * paginating results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The string that specifies the next page of results. Use this when you're
     * paginating results.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>The string that specifies the next page of results. Use this when you're
     * paginating results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The string that specifies the next page of results. Use this when you're
     * paginating results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>The string that specifies the next page of results. Use this when you're
     * paginating results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>The string that specifies the next page of results. Use this when you're
     * paginating results.</p>
     */
    inline SearchFlowExecutionsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The string that specifies the next page of results. Use this when you're
     * paginating results.</p>
     */
    inline SearchFlowExecutionsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The string that specifies the next page of results. Use this when you're
     * paginating results.</p>
     */
    inline SearchFlowExecutionsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The maximum number of results to return in the response.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of results to return in the response.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of results to return in the response.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of results to return in the response.</p>
     */
    inline SearchFlowExecutionsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}

  private:

    Aws::String m_systemInstanceId;
    bool m_systemInstanceIdHasBeenSet;

    Aws::String m_flowExecutionId;
    bool m_flowExecutionIdHasBeenSet;

    Aws::Utils::DateTime m_startTime;
    bool m_startTimeHasBeenSet;

    Aws::Utils::DateTime m_endTime;
    bool m_endTimeHasBeenSet;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet;

    int m_maxResults;
    bool m_maxResultsHasBeenSet;
  };

} // namespace Model
} // namespace IoTThingsGraph
} // namespace Aws
