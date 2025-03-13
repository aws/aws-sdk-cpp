/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/ConnectRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/connect/model/RealTimeContactAnalysisOutputType.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/connect/model/RealTimeContactAnalysisSegmentType.h>
#include <utility>

namespace Aws
{
namespace Connect
{
namespace Model
{

  /**
   */
  class ListRealtimeContactAnalysisSegmentsV2Request : public ConnectRequest
  {
  public:
    AWS_CONNECT_API ListRealtimeContactAnalysisSegmentsV2Request() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListRealtimeContactAnalysisSegmentsV2"; }

    AWS_CONNECT_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The identifier of the Amazon Connect instance. You can <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/find-instance-arn.html">find
     * the instance ID</a> in the Amazon Resource Name (ARN) of the instance.</p>
     */
    inline const Aws::String& GetInstanceId() const { return m_instanceId; }
    inline bool InstanceIdHasBeenSet() const { return m_instanceIdHasBeenSet; }
    template<typename InstanceIdT = Aws::String>
    void SetInstanceId(InstanceIdT&& value) { m_instanceIdHasBeenSet = true; m_instanceId = std::forward<InstanceIdT>(value); }
    template<typename InstanceIdT = Aws::String>
    ListRealtimeContactAnalysisSegmentsV2Request& WithInstanceId(InstanceIdT&& value) { SetInstanceId(std::forward<InstanceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the contact in this instance of Amazon Connect. </p>
     */
    inline const Aws::String& GetContactId() const { return m_contactId; }
    inline bool ContactIdHasBeenSet() const { return m_contactIdHasBeenSet; }
    template<typename ContactIdT = Aws::String>
    void SetContactId(ContactIdT&& value) { m_contactIdHasBeenSet = true; m_contactId = std::forward<ContactIdT>(value); }
    template<typename ContactIdT = Aws::String>
    ListRealtimeContactAnalysisSegmentsV2Request& WithContactId(ContactIdT&& value) { SetContactId(std::forward<ContactIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of results to return per page.</p>
     */
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListRealtimeContactAnalysisSegmentsV2Request& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The token for the next set of results. Use the value returned in the previous
     * response in the next request to retrieve the next set of results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListRealtimeContactAnalysisSegmentsV2Request& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Contact Lens output type to be returned.</p>
     */
    inline RealTimeContactAnalysisOutputType GetOutputType() const { return m_outputType; }
    inline bool OutputTypeHasBeenSet() const { return m_outputTypeHasBeenSet; }
    inline void SetOutputType(RealTimeContactAnalysisOutputType value) { m_outputTypeHasBeenSet = true; m_outputType = value; }
    inline ListRealtimeContactAnalysisSegmentsV2Request& WithOutputType(RealTimeContactAnalysisOutputType value) { SetOutputType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Enum with segment types . Each value corresponds to a segment type returned
     * in the segments list of the API. Each segment type has its own structure.
     * Different channels may have different sets of supported segment types.</p>
     */
    inline const Aws::Vector<RealTimeContactAnalysisSegmentType>& GetSegmentTypes() const { return m_segmentTypes; }
    inline bool SegmentTypesHasBeenSet() const { return m_segmentTypesHasBeenSet; }
    template<typename SegmentTypesT = Aws::Vector<RealTimeContactAnalysisSegmentType>>
    void SetSegmentTypes(SegmentTypesT&& value) { m_segmentTypesHasBeenSet = true; m_segmentTypes = std::forward<SegmentTypesT>(value); }
    template<typename SegmentTypesT = Aws::Vector<RealTimeContactAnalysisSegmentType>>
    ListRealtimeContactAnalysisSegmentsV2Request& WithSegmentTypes(SegmentTypesT&& value) { SetSegmentTypes(std::forward<SegmentTypesT>(value)); return *this;}
    inline ListRealtimeContactAnalysisSegmentsV2Request& AddSegmentTypes(RealTimeContactAnalysisSegmentType value) { m_segmentTypesHasBeenSet = true; m_segmentTypes.push_back(value); return *this; }
    ///@}
  private:

    Aws::String m_instanceId;
    bool m_instanceIdHasBeenSet = false;

    Aws::String m_contactId;
    bool m_contactIdHasBeenSet = false;

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    RealTimeContactAnalysisOutputType m_outputType{RealTimeContactAnalysisOutputType::NOT_SET};
    bool m_outputTypeHasBeenSet = false;

    Aws::Vector<RealTimeContactAnalysisSegmentType> m_segmentTypes;
    bool m_segmentTypesHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
