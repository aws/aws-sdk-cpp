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
    AWS_CONNECT_API ListRealtimeContactAnalysisSegmentsV2Request();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListRealtimeContactAnalysisSegmentsV2"; }

    AWS_CONNECT_API Aws::String SerializePayload() const override;


    /**
     * <p>The identifier of the Amazon Connect instance. You can <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/find-instance-arn.html">find
     * the instance ID</a> in the Amazon Resource Name (ARN) of the instance.</p>
     */
    inline const Aws::String& GetInstanceId() const{ return m_instanceId; }

    /**
     * <p>The identifier of the Amazon Connect instance. You can <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/find-instance-arn.html">find
     * the instance ID</a> in the Amazon Resource Name (ARN) of the instance.</p>
     */
    inline bool InstanceIdHasBeenSet() const { return m_instanceIdHasBeenSet; }

    /**
     * <p>The identifier of the Amazon Connect instance. You can <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/find-instance-arn.html">find
     * the instance ID</a> in the Amazon Resource Name (ARN) of the instance.</p>
     */
    inline void SetInstanceId(const Aws::String& value) { m_instanceIdHasBeenSet = true; m_instanceId = value; }

    /**
     * <p>The identifier of the Amazon Connect instance. You can <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/find-instance-arn.html">find
     * the instance ID</a> in the Amazon Resource Name (ARN) of the instance.</p>
     */
    inline void SetInstanceId(Aws::String&& value) { m_instanceIdHasBeenSet = true; m_instanceId = std::move(value); }

    /**
     * <p>The identifier of the Amazon Connect instance. You can <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/find-instance-arn.html">find
     * the instance ID</a> in the Amazon Resource Name (ARN) of the instance.</p>
     */
    inline void SetInstanceId(const char* value) { m_instanceIdHasBeenSet = true; m_instanceId.assign(value); }

    /**
     * <p>The identifier of the Amazon Connect instance. You can <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/find-instance-arn.html">find
     * the instance ID</a> in the Amazon Resource Name (ARN) of the instance.</p>
     */
    inline ListRealtimeContactAnalysisSegmentsV2Request& WithInstanceId(const Aws::String& value) { SetInstanceId(value); return *this;}

    /**
     * <p>The identifier of the Amazon Connect instance. You can <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/find-instance-arn.html">find
     * the instance ID</a> in the Amazon Resource Name (ARN) of the instance.</p>
     */
    inline ListRealtimeContactAnalysisSegmentsV2Request& WithInstanceId(Aws::String&& value) { SetInstanceId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the Amazon Connect instance. You can <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/find-instance-arn.html">find
     * the instance ID</a> in the Amazon Resource Name (ARN) of the instance.</p>
     */
    inline ListRealtimeContactAnalysisSegmentsV2Request& WithInstanceId(const char* value) { SetInstanceId(value); return *this;}


    /**
     * <p>The identifier of the contact in this instance of Amazon Connect. </p>
     */
    inline const Aws::String& GetContactId() const{ return m_contactId; }

    /**
     * <p>The identifier of the contact in this instance of Amazon Connect. </p>
     */
    inline bool ContactIdHasBeenSet() const { return m_contactIdHasBeenSet; }

    /**
     * <p>The identifier of the contact in this instance of Amazon Connect. </p>
     */
    inline void SetContactId(const Aws::String& value) { m_contactIdHasBeenSet = true; m_contactId = value; }

    /**
     * <p>The identifier of the contact in this instance of Amazon Connect. </p>
     */
    inline void SetContactId(Aws::String&& value) { m_contactIdHasBeenSet = true; m_contactId = std::move(value); }

    /**
     * <p>The identifier of the contact in this instance of Amazon Connect. </p>
     */
    inline void SetContactId(const char* value) { m_contactIdHasBeenSet = true; m_contactId.assign(value); }

    /**
     * <p>The identifier of the contact in this instance of Amazon Connect. </p>
     */
    inline ListRealtimeContactAnalysisSegmentsV2Request& WithContactId(const Aws::String& value) { SetContactId(value); return *this;}

    /**
     * <p>The identifier of the contact in this instance of Amazon Connect. </p>
     */
    inline ListRealtimeContactAnalysisSegmentsV2Request& WithContactId(Aws::String&& value) { SetContactId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the contact in this instance of Amazon Connect. </p>
     */
    inline ListRealtimeContactAnalysisSegmentsV2Request& WithContactId(const char* value) { SetContactId(value); return *this;}


    /**
     * <p>The maximum number of results to return per page.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of results to return per page.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of results to return per page.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of results to return per page.</p>
     */
    inline ListRealtimeContactAnalysisSegmentsV2Request& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>The token for the next set of results. Use the value returned in the previous
     * response in the next request to retrieve the next set of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token for the next set of results. Use the value returned in the previous
     * response in the next request to retrieve the next set of results.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>The token for the next set of results. Use the value returned in the previous
     * response in the next request to retrieve the next set of results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The token for the next set of results. Use the value returned in the previous
     * response in the next request to retrieve the next set of results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>The token for the next set of results. Use the value returned in the previous
     * response in the next request to retrieve the next set of results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>The token for the next set of results. Use the value returned in the previous
     * response in the next request to retrieve the next set of results.</p>
     */
    inline ListRealtimeContactAnalysisSegmentsV2Request& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token for the next set of results. Use the value returned in the previous
     * response in the next request to retrieve the next set of results.</p>
     */
    inline ListRealtimeContactAnalysisSegmentsV2Request& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token for the next set of results. Use the value returned in the previous
     * response in the next request to retrieve the next set of results.</p>
     */
    inline ListRealtimeContactAnalysisSegmentsV2Request& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The Contact Lens output type to be returned.</p>
     */
    inline const RealTimeContactAnalysisOutputType& GetOutputType() const{ return m_outputType; }

    /**
     * <p>The Contact Lens output type to be returned.</p>
     */
    inline bool OutputTypeHasBeenSet() const { return m_outputTypeHasBeenSet; }

    /**
     * <p>The Contact Lens output type to be returned.</p>
     */
    inline void SetOutputType(const RealTimeContactAnalysisOutputType& value) { m_outputTypeHasBeenSet = true; m_outputType = value; }

    /**
     * <p>The Contact Lens output type to be returned.</p>
     */
    inline void SetOutputType(RealTimeContactAnalysisOutputType&& value) { m_outputTypeHasBeenSet = true; m_outputType = std::move(value); }

    /**
     * <p>The Contact Lens output type to be returned.</p>
     */
    inline ListRealtimeContactAnalysisSegmentsV2Request& WithOutputType(const RealTimeContactAnalysisOutputType& value) { SetOutputType(value); return *this;}

    /**
     * <p>The Contact Lens output type to be returned.</p>
     */
    inline ListRealtimeContactAnalysisSegmentsV2Request& WithOutputType(RealTimeContactAnalysisOutputType&& value) { SetOutputType(std::move(value)); return *this;}


    /**
     * <p>Enum with segment types . Each value corresponds to a segment type returned
     * in the segments list of the API. Each segment type has its own structure.
     * Different channels may have different sets of supported segment types.</p>
     */
    inline const Aws::Vector<RealTimeContactAnalysisSegmentType>& GetSegmentTypes() const{ return m_segmentTypes; }

    /**
     * <p>Enum with segment types . Each value corresponds to a segment type returned
     * in the segments list of the API. Each segment type has its own structure.
     * Different channels may have different sets of supported segment types.</p>
     */
    inline bool SegmentTypesHasBeenSet() const { return m_segmentTypesHasBeenSet; }

    /**
     * <p>Enum with segment types . Each value corresponds to a segment type returned
     * in the segments list of the API. Each segment type has its own structure.
     * Different channels may have different sets of supported segment types.</p>
     */
    inline void SetSegmentTypes(const Aws::Vector<RealTimeContactAnalysisSegmentType>& value) { m_segmentTypesHasBeenSet = true; m_segmentTypes = value; }

    /**
     * <p>Enum with segment types . Each value corresponds to a segment type returned
     * in the segments list of the API. Each segment type has its own structure.
     * Different channels may have different sets of supported segment types.</p>
     */
    inline void SetSegmentTypes(Aws::Vector<RealTimeContactAnalysisSegmentType>&& value) { m_segmentTypesHasBeenSet = true; m_segmentTypes = std::move(value); }

    /**
     * <p>Enum with segment types . Each value corresponds to a segment type returned
     * in the segments list of the API. Each segment type has its own structure.
     * Different channels may have different sets of supported segment types.</p>
     */
    inline ListRealtimeContactAnalysisSegmentsV2Request& WithSegmentTypes(const Aws::Vector<RealTimeContactAnalysisSegmentType>& value) { SetSegmentTypes(value); return *this;}

    /**
     * <p>Enum with segment types . Each value corresponds to a segment type returned
     * in the segments list of the API. Each segment type has its own structure.
     * Different channels may have different sets of supported segment types.</p>
     */
    inline ListRealtimeContactAnalysisSegmentsV2Request& WithSegmentTypes(Aws::Vector<RealTimeContactAnalysisSegmentType>&& value) { SetSegmentTypes(std::move(value)); return *this;}

    /**
     * <p>Enum with segment types . Each value corresponds to a segment type returned
     * in the segments list of the API. Each segment type has its own structure.
     * Different channels may have different sets of supported segment types.</p>
     */
    inline ListRealtimeContactAnalysisSegmentsV2Request& AddSegmentTypes(const RealTimeContactAnalysisSegmentType& value) { m_segmentTypesHasBeenSet = true; m_segmentTypes.push_back(value); return *this; }

    /**
     * <p>Enum with segment types . Each value corresponds to a segment type returned
     * in the segments list of the API. Each segment type has its own structure.
     * Different channels may have different sets of supported segment types.</p>
     */
    inline ListRealtimeContactAnalysisSegmentsV2Request& AddSegmentTypes(RealTimeContactAnalysisSegmentType&& value) { m_segmentTypesHasBeenSet = true; m_segmentTypes.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_instanceId;
    bool m_instanceIdHasBeenSet = false;

    Aws::String m_contactId;
    bool m_contactIdHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    RealTimeContactAnalysisOutputType m_outputType;
    bool m_outputTypeHasBeenSet = false;

    Aws::Vector<RealTimeContactAnalysisSegmentType> m_segmentTypes;
    bool m_segmentTypesHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
