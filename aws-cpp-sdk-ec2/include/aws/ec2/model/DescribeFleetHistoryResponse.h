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
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/ResponseMetadata.h>
#include <aws/ec2/model/HistoryRecordEntry.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Xml
{
  class XmlDocument;
} // namespace Xml
} // namespace Utils
namespace EC2
{
namespace Model
{
  class AWS_EC2_API DescribeFleetHistoryResponse
  {
  public:
    DescribeFleetHistoryResponse();
    DescribeFleetHistoryResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    DescribeFleetHistoryResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>Information about the events in the history of the EC2 Fleet.</p>
     */
    inline const Aws::Vector<HistoryRecordEntry>& GetHistoryRecords() const{ return m_historyRecords; }

    /**
     * <p>Information about the events in the history of the EC2 Fleet.</p>
     */
    inline void SetHistoryRecords(const Aws::Vector<HistoryRecordEntry>& value) { m_historyRecords = value; }

    /**
     * <p>Information about the events in the history of the EC2 Fleet.</p>
     */
    inline void SetHistoryRecords(Aws::Vector<HistoryRecordEntry>&& value) { m_historyRecords = std::move(value); }

    /**
     * <p>Information about the events in the history of the EC2 Fleet.</p>
     */
    inline DescribeFleetHistoryResponse& WithHistoryRecords(const Aws::Vector<HistoryRecordEntry>& value) { SetHistoryRecords(value); return *this;}

    /**
     * <p>Information about the events in the history of the EC2 Fleet.</p>
     */
    inline DescribeFleetHistoryResponse& WithHistoryRecords(Aws::Vector<HistoryRecordEntry>&& value) { SetHistoryRecords(std::move(value)); return *this;}

    /**
     * <p>Information about the events in the history of the EC2 Fleet.</p>
     */
    inline DescribeFleetHistoryResponse& AddHistoryRecords(const HistoryRecordEntry& value) { m_historyRecords.push_back(value); return *this; }

    /**
     * <p>Information about the events in the history of the EC2 Fleet.</p>
     */
    inline DescribeFleetHistoryResponse& AddHistoryRecords(HistoryRecordEntry&& value) { m_historyRecords.push_back(std::move(value)); return *this; }


    /**
     * <p>The last date and time for the events, in UTC format (for example,
     * <i>YYYY</i>-<i>MM</i>-<i>DD</i>T<i>HH</i>:<i>MM</i>:<i>SS</i>Z). All records up
     * to this time were retrieved.</p> <p>If <code>nextToken</code> indicates that
     * there are more results, this value is not present.</p>
     */
    inline const Aws::Utils::DateTime& GetLastEvaluatedTime() const{ return m_lastEvaluatedTime; }

    /**
     * <p>The last date and time for the events, in UTC format (for example,
     * <i>YYYY</i>-<i>MM</i>-<i>DD</i>T<i>HH</i>:<i>MM</i>:<i>SS</i>Z). All records up
     * to this time were retrieved.</p> <p>If <code>nextToken</code> indicates that
     * there are more results, this value is not present.</p>
     */
    inline void SetLastEvaluatedTime(const Aws::Utils::DateTime& value) { m_lastEvaluatedTime = value; }

    /**
     * <p>The last date and time for the events, in UTC format (for example,
     * <i>YYYY</i>-<i>MM</i>-<i>DD</i>T<i>HH</i>:<i>MM</i>:<i>SS</i>Z). All records up
     * to this time were retrieved.</p> <p>If <code>nextToken</code> indicates that
     * there are more results, this value is not present.</p>
     */
    inline void SetLastEvaluatedTime(Aws::Utils::DateTime&& value) { m_lastEvaluatedTime = std::move(value); }

    /**
     * <p>The last date and time for the events, in UTC format (for example,
     * <i>YYYY</i>-<i>MM</i>-<i>DD</i>T<i>HH</i>:<i>MM</i>:<i>SS</i>Z). All records up
     * to this time were retrieved.</p> <p>If <code>nextToken</code> indicates that
     * there are more results, this value is not present.</p>
     */
    inline DescribeFleetHistoryResponse& WithLastEvaluatedTime(const Aws::Utils::DateTime& value) { SetLastEvaluatedTime(value); return *this;}

    /**
     * <p>The last date and time for the events, in UTC format (for example,
     * <i>YYYY</i>-<i>MM</i>-<i>DD</i>T<i>HH</i>:<i>MM</i>:<i>SS</i>Z). All records up
     * to this time were retrieved.</p> <p>If <code>nextToken</code> indicates that
     * there are more results, this value is not present.</p>
     */
    inline DescribeFleetHistoryResponse& WithLastEvaluatedTime(Aws::Utils::DateTime&& value) { SetLastEvaluatedTime(std::move(value)); return *this;}


    /**
     * <p>The token for the next set of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token for the next set of results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The token for the next set of results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The token for the next set of results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The token for the next set of results.</p>
     */
    inline DescribeFleetHistoryResponse& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token for the next set of results.</p>
     */
    inline DescribeFleetHistoryResponse& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token for the next set of results.</p>
     */
    inline DescribeFleetHistoryResponse& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The ID of the EC Fleet.</p>
     */
    inline const Aws::String& GetFleetId() const{ return m_fleetId; }

    /**
     * <p>The ID of the EC Fleet.</p>
     */
    inline void SetFleetId(const Aws::String& value) { m_fleetId = value; }

    /**
     * <p>The ID of the EC Fleet.</p>
     */
    inline void SetFleetId(Aws::String&& value) { m_fleetId = std::move(value); }

    /**
     * <p>The ID of the EC Fleet.</p>
     */
    inline void SetFleetId(const char* value) { m_fleetId.assign(value); }

    /**
     * <p>The ID of the EC Fleet.</p>
     */
    inline DescribeFleetHistoryResponse& WithFleetId(const Aws::String& value) { SetFleetId(value); return *this;}

    /**
     * <p>The ID of the EC Fleet.</p>
     */
    inline DescribeFleetHistoryResponse& WithFleetId(Aws::String&& value) { SetFleetId(std::move(value)); return *this;}

    /**
     * <p>The ID of the EC Fleet.</p>
     */
    inline DescribeFleetHistoryResponse& WithFleetId(const char* value) { SetFleetId(value); return *this;}


    /**
     * <p>The start date and time for the events, in UTC format (for example,
     * <i>YYYY</i>-<i>MM</i>-<i>DD</i>T<i>HH</i>:<i>MM</i>:<i>SS</i>Z).</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const{ return m_startTime; }

    /**
     * <p>The start date and time for the events, in UTC format (for example,
     * <i>YYYY</i>-<i>MM</i>-<i>DD</i>T<i>HH</i>:<i>MM</i>:<i>SS</i>Z).</p>
     */
    inline void SetStartTime(const Aws::Utils::DateTime& value) { m_startTime = value; }

    /**
     * <p>The start date and time for the events, in UTC format (for example,
     * <i>YYYY</i>-<i>MM</i>-<i>DD</i>T<i>HH</i>:<i>MM</i>:<i>SS</i>Z).</p>
     */
    inline void SetStartTime(Aws::Utils::DateTime&& value) { m_startTime = std::move(value); }

    /**
     * <p>The start date and time for the events, in UTC format (for example,
     * <i>YYYY</i>-<i>MM</i>-<i>DD</i>T<i>HH</i>:<i>MM</i>:<i>SS</i>Z).</p>
     */
    inline DescribeFleetHistoryResponse& WithStartTime(const Aws::Utils::DateTime& value) { SetStartTime(value); return *this;}

    /**
     * <p>The start date and time for the events, in UTC format (for example,
     * <i>YYYY</i>-<i>MM</i>-<i>DD</i>T<i>HH</i>:<i>MM</i>:<i>SS</i>Z).</p>
     */
    inline DescribeFleetHistoryResponse& WithStartTime(Aws::Utils::DateTime&& value) { SetStartTime(std::move(value)); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline DescribeFleetHistoryResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline DescribeFleetHistoryResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::Vector<HistoryRecordEntry> m_historyRecords;

    Aws::Utils::DateTime m_lastEvaluatedTime;

    Aws::String m_nextToken;

    Aws::String m_fleetId;

    Aws::Utils::DateTime m_startTime;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
