/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/guardduty/GuardDutyRequest.h>
#include <aws/guardduty/GuardDuty_EXPORTS.h>
#include <aws/guardduty/model/RecordType.h>

#include <utility>

namespace Aws {
namespace GuardDuty {
namespace Model {

/**
 */
class ListInvestigationRecordsRequest : public GuardDutyRequest {
 public:
  AWS_GUARDDUTY_API ListInvestigationRecordsRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "ListInvestigationRecords"; }

  AWS_GUARDDUTY_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The unique ID of the GuardDuty detector associated with the
   * investigation.</p> <p>To find the <code>detectorId</code> in the current Region,
   * see the Settings page in the GuardDuty console, or run the <a
   * href="https://docs.aws.amazon.com/guardduty/latest/APIReference/API_ListDetectors.html">ListDetectors</a>
   * API.</p>
   */
  inline const Aws::String& GetDetectorId() const { return m_detectorId; }
  inline bool DetectorIdHasBeenSet() const { return m_detectorIdHasBeenSet; }
  template <typename DetectorIdT = Aws::String>
  void SetDetectorId(DetectorIdT&& value) {
    m_detectorIdHasBeenSet = true;
    m_detectorId = std::forward<DetectorIdT>(value);
  }
  template <typename DetectorIdT = Aws::String>
  ListInvestigationRecordsRequest& WithDetectorId(DetectorIdT&& value) {
    SetDetectorId(std::forward<DetectorIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique identifier of the investigation whose records you want to
   * list.</p>
   */
  inline const Aws::String& GetInvestigationId() const { return m_investigationId; }
  inline bool InvestigationIdHasBeenSet() const { return m_investigationIdHasBeenSet; }
  template <typename InvestigationIdT = Aws::String>
  void SetInvestigationId(InvestigationIdT&& value) {
    m_investigationIdHasBeenSet = true;
    m_investigationId = std::forward<InvestigationIdT>(value);
  }
  template <typename InvestigationIdT = Aws::String>
  ListInvestigationRecordsRequest& WithInvestigationId(InvestigationIdT&& value) {
    SetInvestigationId(std::forward<InvestigationIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The types of records to return. Possible values are <code>UPDATE</code>,
   * <code>FETCH</code>, <code>OBSERVATION</code>, <code>ANALYSIS</code>, and
   * <code>METADATA</code>. If you don't specify this parameter, GuardDuty returns
   * records of all types.</p>
   */
  inline const Aws::Vector<RecordType>& GetRecordTypes() const { return m_recordTypes; }
  inline bool RecordTypesHasBeenSet() const { return m_recordTypesHasBeenSet; }
  template <typename RecordTypesT = Aws::Vector<RecordType>>
  void SetRecordTypes(RecordTypesT&& value) {
    m_recordTypesHasBeenSet = true;
    m_recordTypes = std::forward<RecordTypesT>(value);
  }
  template <typename RecordTypesT = Aws::Vector<RecordType>>
  ListInvestigationRecordsRequest& WithRecordTypes(RecordTypesT&& value) {
    SetRecordTypes(std::forward<RecordTypesT>(value));
    return *this;
  }
  inline ListInvestigationRecordsRequest& AddRecordTypes(RecordType value) {
    m_recordTypesHasBeenSet = true;
    m_recordTypes.push_back(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The maximum number of records to return in a single response. Valid values
   * are 1 to 50. The default value is 20. A response can contain fewer records than
   * this value, or no records, and still include a <code>NextToken</code>.</p>
   */
  inline int GetMaxResults() const { return m_maxResults; }
  inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
  inline void SetMaxResults(int value) {
    m_maxResultsHasBeenSet = true;
    m_maxResults = value;
  }
  inline ListInvestigationRecordsRequest& WithMaxResults(int value) {
    SetMaxResults(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>You can use this parameter when paginating results. Set the value of this
   * parameter to null on your first call to the list action. For subsequent calls to
   * the action, fill nextToken in the request with the value of NextToken from the
   * previous response to continue listing data. Use the same
   * <code>InvestigationId</code> and <code>RecordTypes</code> values that you used
   * in the previous request.</p> <p>If you specify this parameter for an
   * investigation whose status isn't <code>COMPLETED</code>, the operation returns a
   * <code>BadRequestException</code>. A <code>NextToken</code> expires 24 hours
   * after it's returned.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  ListInvestigationRecordsRequest& WithNextToken(NextTokenT&& value) {
    SetNextToken(std::forward<NextTokenT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_detectorId;

  Aws::String m_investigationId;

  Aws::Vector<RecordType> m_recordTypes;

  int m_maxResults{0};

  Aws::String m_nextToken;
  bool m_detectorIdHasBeenSet = false;
  bool m_investigationIdHasBeenSet = false;
  bool m_recordTypesHasBeenSet = false;
  bool m_maxResultsHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
};

}  // namespace Model
}  // namespace GuardDuty
}  // namespace Aws
