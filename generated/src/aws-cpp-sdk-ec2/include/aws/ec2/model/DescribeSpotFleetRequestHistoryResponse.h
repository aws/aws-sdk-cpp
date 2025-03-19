/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class DescribeSpotFleetRequestHistoryResponse
  {
  public:
    AWS_EC2_API DescribeSpotFleetRequestHistoryResponse() = default;
    AWS_EC2_API DescribeSpotFleetRequestHistoryResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API DescribeSpotFleetRequestHistoryResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>Information about the events in the history of the Spot Fleet request.</p>
     */
    inline const Aws::Vector<HistoryRecord>& GetHistoryRecords() const { return m_historyRecords; }
    template<typename HistoryRecordsT = Aws::Vector<HistoryRecord>>
    void SetHistoryRecords(HistoryRecordsT&& value) { m_historyRecordsHasBeenSet = true; m_historyRecords = std::forward<HistoryRecordsT>(value); }
    template<typename HistoryRecordsT = Aws::Vector<HistoryRecord>>
    DescribeSpotFleetRequestHistoryResponse& WithHistoryRecords(HistoryRecordsT&& value) { SetHistoryRecords(std::forward<HistoryRecordsT>(value)); return *this;}
    template<typename HistoryRecordsT = HistoryRecord>
    DescribeSpotFleetRequestHistoryResponse& AddHistoryRecords(HistoryRecordsT&& value) { m_historyRecordsHasBeenSet = true; m_historyRecords.emplace_back(std::forward<HistoryRecordsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The last date and time for the events, in UTC format (for example,
     * <i>YYYY</i>-<i>MM</i>-<i>DD</i>T<i>HH</i>:<i>MM</i>:<i>SS</i>Z). All records up
     * to this time were retrieved.</p> <p>If <code>nextToken</code> indicates that
     * there are more items, this value is not present.</p>
     */
    inline const Aws::Utils::DateTime& GetLastEvaluatedTime() const { return m_lastEvaluatedTime; }
    template<typename LastEvaluatedTimeT = Aws::Utils::DateTime>
    void SetLastEvaluatedTime(LastEvaluatedTimeT&& value) { m_lastEvaluatedTimeHasBeenSet = true; m_lastEvaluatedTime = std::forward<LastEvaluatedTimeT>(value); }
    template<typename LastEvaluatedTimeT = Aws::Utils::DateTime>
    DescribeSpotFleetRequestHistoryResponse& WithLastEvaluatedTime(LastEvaluatedTimeT&& value) { SetLastEvaluatedTime(std::forward<LastEvaluatedTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The token to include in another request to get the next page of items. This
     * value is <code>null</code> when there are no more items to return.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    DescribeSpotFleetRequestHistoryResponse& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the Spot Fleet request.</p>
     */
    inline const Aws::String& GetSpotFleetRequestId() const { return m_spotFleetRequestId; }
    template<typename SpotFleetRequestIdT = Aws::String>
    void SetSpotFleetRequestId(SpotFleetRequestIdT&& value) { m_spotFleetRequestIdHasBeenSet = true; m_spotFleetRequestId = std::forward<SpotFleetRequestIdT>(value); }
    template<typename SpotFleetRequestIdT = Aws::String>
    DescribeSpotFleetRequestHistoryResponse& WithSpotFleetRequestId(SpotFleetRequestIdT&& value) { SetSpotFleetRequestId(std::forward<SpotFleetRequestIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The starting date and time for the events, in UTC format (for example,
     * <i>YYYY</i>-<i>MM</i>-<i>DD</i>T<i>HH</i>:<i>MM</i>:<i>SS</i>Z).</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const { return m_startTime; }
    template<typename StartTimeT = Aws::Utils::DateTime>
    void SetStartTime(StartTimeT&& value) { m_startTimeHasBeenSet = true; m_startTime = std::forward<StartTimeT>(value); }
    template<typename StartTimeT = Aws::Utils::DateTime>
    DescribeSpotFleetRequestHistoryResponse& WithStartTime(StartTimeT&& value) { SetStartTime(std::forward<StartTimeT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    DescribeSpotFleetRequestHistoryResponse& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<HistoryRecord> m_historyRecords;
    bool m_historyRecordsHasBeenSet = false;

    Aws::Utils::DateTime m_lastEvaluatedTime{};
    bool m_lastEvaluatedTimeHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_spotFleetRequestId;
    bool m_spotFleetRequestIdHasBeenSet = false;

    Aws::Utils::DateTime m_startTime{};
    bool m_startTimeHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
