/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudtrail/CloudTrailRequest.h>
#include <aws/cloudtrail/CloudTrail_EXPORTS.h>
#include <aws/cloudtrail/model/ListInsightsDataDimensionKey.h>
#include <aws/cloudtrail/model/ListInsightsDataType.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace CloudTrail {
namespace Model {

/**
 */
class ListInsightsDataRequest : public CloudTrailRequest {
 public:
  AWS_CLOUDTRAIL_API ListInsightsDataRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "ListInsightsData"; }

  AWS_CLOUDTRAIL_API Aws::String SerializePayload() const override;

  AWS_CLOUDTRAIL_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>The Amazon Resource Name(ARN) of the trail for which you want to retrieve
   * Insights events.</p>
   */
  inline const Aws::String& GetInsightSource() const { return m_insightSource; }
  inline bool InsightSourceHasBeenSet() const { return m_insightSourceHasBeenSet; }
  template <typename InsightSourceT = Aws::String>
  void SetInsightSource(InsightSourceT&& value) {
    m_insightSourceHasBeenSet = true;
    m_insightSource = std::forward<InsightSourceT>(value);
  }
  template <typename InsightSourceT = Aws::String>
  ListInsightsDataRequest& WithInsightSource(InsightSourceT&& value) {
    SetInsightSource(std::forward<InsightSourceT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies the category of events returned. To fetch Insights events, specify
   * <code>InsightsEvents</code> as the value of <code>DataType</code> </p>
   */
  inline ListInsightsDataType GetDataType() const { return m_dataType; }
  inline bool DataTypeHasBeenSet() const { return m_dataTypeHasBeenSet; }
  inline void SetDataType(ListInsightsDataType value) {
    m_dataTypeHasBeenSet = true;
    m_dataType = value;
  }
  inline ListInsightsDataRequest& WithDataType(ListInsightsDataType value) {
    SetDataType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Contains a map of dimensions. Currently the map can contain only one
   * item.</p>
   */
  inline const Aws::Map<ListInsightsDataDimensionKey, Aws::String>& GetDimensions() const { return m_dimensions; }
  inline bool DimensionsHasBeenSet() const { return m_dimensionsHasBeenSet; }
  template <typename DimensionsT = Aws::Map<ListInsightsDataDimensionKey, Aws::String>>
  void SetDimensions(DimensionsT&& value) {
    m_dimensionsHasBeenSet = true;
    m_dimensions = std::forward<DimensionsT>(value);
  }
  template <typename DimensionsT = Aws::Map<ListInsightsDataDimensionKey, Aws::String>>
  ListInsightsDataRequest& WithDimensions(DimensionsT&& value) {
    SetDimensions(std::forward<DimensionsT>(value));
    return *this;
  }
  inline ListInsightsDataRequest& AddDimensions(ListInsightsDataDimensionKey key, Aws::String value) {
    m_dimensionsHasBeenSet = true;
    m_dimensions.emplace(key, value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies that only events that occur after or at the specified time are
   * returned. If the specified start time is after the specified end time, an error
   * is returned.</p>
   */
  inline const Aws::Utils::DateTime& GetStartTime() const { return m_startTime; }
  inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }
  template <typename StartTimeT = Aws::Utils::DateTime>
  void SetStartTime(StartTimeT&& value) {
    m_startTimeHasBeenSet = true;
    m_startTime = std::forward<StartTimeT>(value);
  }
  template <typename StartTimeT = Aws::Utils::DateTime>
  ListInsightsDataRequest& WithStartTime(StartTimeT&& value) {
    SetStartTime(std::forward<StartTimeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies that only events that occur before or at the specified time are
   * returned. If the specified end time is before the specified start time, an error
   * is returned.</p>
   */
  inline const Aws::Utils::DateTime& GetEndTime() const { return m_endTime; }
  inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }
  template <typename EndTimeT = Aws::Utils::DateTime>
  void SetEndTime(EndTimeT&& value) {
    m_endTimeHasBeenSet = true;
    m_endTime = std::forward<EndTimeT>(value);
  }
  template <typename EndTimeT = Aws::Utils::DateTime>
  ListInsightsDataRequest& WithEndTime(EndTimeT&& value) {
    SetEndTime(std::forward<EndTimeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of events to return. Possible values are 1 through 50. The default
   * is 50.</p>
   */
  inline int GetMaxResults() const { return m_maxResults; }
  inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
  inline void SetMaxResults(int value) {
    m_maxResultsHasBeenSet = true;
    m_maxResults = value;
  }
  inline ListInsightsDataRequest& WithMaxResults(int value) {
    SetMaxResults(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The token to use to get the next page of results after a previous API call.
   * This token must be passed in with the same parameters that were specified in the
   * original call. For example, if the original call specified a EventName as a
   * dimension with <code>PutObject</code> as a value, the call with NextToken should
   * include those same parameters. </p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  ListInsightsDataRequest& WithNextToken(NextTokenT&& value) {
    SetNextToken(std::forward<NextTokenT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_insightSource;
  bool m_insightSourceHasBeenSet = false;

  ListInsightsDataType m_dataType{ListInsightsDataType::NOT_SET};
  bool m_dataTypeHasBeenSet = false;

  Aws::Map<ListInsightsDataDimensionKey, Aws::String> m_dimensions;
  bool m_dimensionsHasBeenSet = false;

  Aws::Utils::DateTime m_startTime{};
  bool m_startTimeHasBeenSet = false;

  Aws::Utils::DateTime m_endTime{};
  bool m_endTimeHasBeenSet = false;

  int m_maxResults{0};
  bool m_maxResultsHasBeenSet = false;

  Aws::String m_nextToken;
  bool m_nextTokenHasBeenSet = false;
};

}  // namespace Model
}  // namespace CloudTrail
}  // namespace Aws
