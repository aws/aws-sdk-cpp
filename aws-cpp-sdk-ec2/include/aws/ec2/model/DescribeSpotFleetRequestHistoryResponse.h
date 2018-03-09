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
#include <aws/ec2/model/HistoryRecord.h>
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
  /**
   * <p>Contains the output of DescribeSpotFleetRequestHistory.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeSpotFleetRequestHistoryResponse">AWS
   * API Reference</a></p>
   */
  class AWS_EC2_API DescribeSpotFleetRequestHistoryResponse
  {
  public:
    DescribeSpotFleetRequestHistoryResponse();
    DescribeSpotFleetRequestHistoryResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    DescribeSpotFleetRequestHistoryResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>Information about the events in the history of the Spot Fleet request.</p>
     */
    inline const Aws::Vector<HistoryRecord>& GetHistoryRecords() const{ return m_historyRecords; }

    /**
     * <p>Information about the events in the history of the Spot Fleet request.</p>
     */
    inline void SetHistoryRecords(const Aws::Vector<HistoryRecord>& value) { m_historyRecords = value; }

    /**
     * <p>Information about the events in the history of the Spot Fleet request.</p>
     */
    inline void SetHistoryRecords(Aws::Vector<HistoryRecord>&& value) { m_historyRecords = std::move(value); }

    /**
     * <p>Information about the events in the history of the Spot Fleet request.</p>
     */
    inline DescribeSpotFleetRequestHistoryResponse& WithHistoryRecords(const Aws::Vector<HistoryRecord>& value) { SetHistoryRecords(value); return *this;}

    /**
     * <p>Information about the events in the history of the Spot Fleet request.</p>
     */
    inline DescribeSpotFleetRequestHistoryResponse& WithHistoryRecords(Aws::Vector<HistoryRecord>&& value) { SetHistoryRecords(std::move(value)); return *this;}

    /**
     * <p>Information about the events in the history of the Spot Fleet request.</p>
     */
    inline DescribeSpotFleetRequestHistoryResponse& AddHistoryRecords(const HistoryRecord& value) { m_historyRecords.push_back(value); return *this; }

    /**
     * <p>Information about the events in the history of the Spot Fleet request.</p>
     */
    inline DescribeSpotFleetRequestHistoryResponse& AddHistoryRecords(HistoryRecord&& value) { m_historyRecords.push_back(std::move(value)); return *this; }


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
    inline DescribeSpotFleetRequestHistoryResponse& WithLastEvaluatedTime(const Aws::Utils::DateTime& value) { SetLastEvaluatedTime(value); return *this;}

    /**
     * <p>The last date and time for the events, in UTC format (for example,
     * <i>YYYY</i>-<i>MM</i>-<i>DD</i>T<i>HH</i>:<i>MM</i>:<i>SS</i>Z). All records up
     * to this time were retrieved.</p> <p>If <code>nextToken</code> indicates that
     * there are more results, this value is not present.</p>
     */
    inline DescribeSpotFleetRequestHistoryResponse& WithLastEvaluatedTime(Aws::Utils::DateTime&& value) { SetLastEvaluatedTime(std::move(value)); return *this;}


    /**
     * <p>The token required to retrieve the next set of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token required to retrieve the next set of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The token required to retrieve the next set of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The token required to retrieve the next set of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The token required to retrieve the next set of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline DescribeSpotFleetRequestHistoryResponse& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token required to retrieve the next set of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline DescribeSpotFleetRequestHistoryResponse& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token required to retrieve the next set of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline DescribeSpotFleetRequestHistoryResponse& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The ID of the Spot Fleet request.</p>
     */
    inline const Aws::String& GetSpotFleetRequestId() const{ return m_spotFleetRequestId; }

    /**
     * <p>The ID of the Spot Fleet request.</p>
     */
    inline void SetSpotFleetRequestId(const Aws::String& value) { m_spotFleetRequestId = value; }

    /**
     * <p>The ID of the Spot Fleet request.</p>
     */
    inline void SetSpotFleetRequestId(Aws::String&& value) { m_spotFleetRequestId = std::move(value); }

    /**
     * <p>The ID of the Spot Fleet request.</p>
     */
    inline void SetSpotFleetRequestId(const char* value) { m_spotFleetRequestId.assign(value); }

    /**
     * <p>The ID of the Spot Fleet request.</p>
     */
    inline DescribeSpotFleetRequestHistoryResponse& WithSpotFleetRequestId(const Aws::String& value) { SetSpotFleetRequestId(value); return *this;}

    /**
     * <p>The ID of the Spot Fleet request.</p>
     */
    inline DescribeSpotFleetRequestHistoryResponse& WithSpotFleetRequestId(Aws::String&& value) { SetSpotFleetRequestId(std::move(value)); return *this;}

    /**
     * <p>The ID of the Spot Fleet request.</p>
     */
    inline DescribeSpotFleetRequestHistoryResponse& WithSpotFleetRequestId(const char* value) { SetSpotFleetRequestId(value); return *this;}


    /**
     * <p>The starting date and time for the events, in UTC format (for example,
     * <i>YYYY</i>-<i>MM</i>-<i>DD</i>T<i>HH</i>:<i>MM</i>:<i>SS</i>Z).</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const{ return m_startTime; }

    /**
     * <p>The starting date and time for the events, in UTC format (for example,
     * <i>YYYY</i>-<i>MM</i>-<i>DD</i>T<i>HH</i>:<i>MM</i>:<i>SS</i>Z).</p>
     */
    inline void SetStartTime(const Aws::Utils::DateTime& value) { m_startTime = value; }

    /**
     * <p>The starting date and time for the events, in UTC format (for example,
     * <i>YYYY</i>-<i>MM</i>-<i>DD</i>T<i>HH</i>:<i>MM</i>:<i>SS</i>Z).</p>
     */
    inline void SetStartTime(Aws::Utils::DateTime&& value) { m_startTime = std::move(value); }

    /**
     * <p>The starting date and time for the events, in UTC format (for example,
     * <i>YYYY</i>-<i>MM</i>-<i>DD</i>T<i>HH</i>:<i>MM</i>:<i>SS</i>Z).</p>
     */
    inline DescribeSpotFleetRequestHistoryResponse& WithStartTime(const Aws::Utils::DateTime& value) { SetStartTime(value); return *this;}

    /**
     * <p>The starting date and time for the events, in UTC format (for example,
     * <i>YYYY</i>-<i>MM</i>-<i>DD</i>T<i>HH</i>:<i>MM</i>:<i>SS</i>Z).</p>
     */
    inline DescribeSpotFleetRequestHistoryResponse& WithStartTime(Aws::Utils::DateTime&& value) { SetStartTime(std::move(value)); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline DescribeSpotFleetRequestHistoryResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline DescribeSpotFleetRequestHistoryResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::Vector<HistoryRecord> m_historyRecords;

    Aws::Utils::DateTime m_lastEvaluatedTime;

    Aws::String m_nextToken;

    Aws::String m_spotFleetRequestId;

    Aws::Utils::DateTime m_startTime;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
