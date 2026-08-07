/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/EC2Request.h>
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/model/ChronologicalOrder.h>

#include <utility>

namespace Aws {
namespace EC2 {
namespace Model {

/**
 */
class GetIpamRoutingPolicyRegistrationDeltasRequest : public EC2Request {
 public:
  AWS_EC2_API GetIpamRoutingPolicyRegistrationDeltasRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "GetIpamRoutingPolicyRegistrationDeltas"; }

  AWS_EC2_API Aws::String SerializePayload() const override;

 protected:
  AWS_EC2_API void DumpBodyToUrl(Aws::Http::URI& uri) const override;

 public:
  ///@{
  /**
   * <p>Checks whether you have the required permissions for the operation, without
   * actually making the request, and provides an error response. If you have the
   * required permissions, the error response is <code>DryRunOperation</code>.
   * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
   */
  inline bool GetDryRun() const { return m_dryRun; }
  inline bool DryRunHasBeenSet() const { return m_dryRunHasBeenSet; }
  inline void SetDryRun(bool value) {
    m_dryRunHasBeenSet = true;
    m_dryRun = value;
  }
  inline GetIpamRoutingPolicyRegistrationDeltasRequest& WithDryRun(bool value) {
    SetDryRun(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ID of the IPAM internet registry association.</p>
   */
  inline const Aws::String& GetIpamInternetRegistryAssociationId() const { return m_ipamInternetRegistryAssociationId; }
  inline bool IpamInternetRegistryAssociationIdHasBeenSet() const { return m_ipamInternetRegistryAssociationIdHasBeenSet; }
  template <typename IpamInternetRegistryAssociationIdT = Aws::String>
  void SetIpamInternetRegistryAssociationId(IpamInternetRegistryAssociationIdT&& value) {
    m_ipamInternetRegistryAssociationIdHasBeenSet = true;
    m_ipamInternetRegistryAssociationId = std::forward<IpamInternetRegistryAssociationIdT>(value);
  }
  template <typename IpamInternetRegistryAssociationIdT = Aws::String>
  GetIpamRoutingPolicyRegistrationDeltasRequest& WithIpamInternetRegistryAssociationId(IpamInternetRegistryAssociationIdT&& value) {
    SetIpamInternetRegistryAssociationId(std::forward<IpamInternetRegistryAssociationIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Filter results to a specific delta ID.</p>
   */
  inline const Aws::String& GetDeltaId() const { return m_deltaId; }
  inline bool DeltaIdHasBeenSet() const { return m_deltaIdHasBeenSet; }
  template <typename DeltaIdT = Aws::String>
  void SetDeltaId(DeltaIdT&& value) {
    m_deltaIdHasBeenSet = true;
    m_deltaId = std::forward<DeltaIdT>(value);
  }
  template <typename DeltaIdT = Aws::String>
  GetIpamRoutingPolicyRegistrationDeltasRequest& WithDeltaId(DeltaIdT&& value) {
    SetDeltaId(std::forward<DeltaIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The start of the time range to filter deltas by.</p>
   */
  inline const Aws::Utils::DateTime& GetStartTime() const { return m_startTime; }
  inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }
  template <typename StartTimeT = Aws::Utils::DateTime>
  void SetStartTime(StartTimeT&& value) {
    m_startTimeHasBeenSet = true;
    m_startTime = std::forward<StartTimeT>(value);
  }
  template <typename StartTimeT = Aws::Utils::DateTime>
  GetIpamRoutingPolicyRegistrationDeltasRequest& WithStartTime(StartTimeT&& value) {
    SetStartTime(std::forward<StartTimeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The end of the time range to filter deltas by.</p>
   */
  inline const Aws::Utils::DateTime& GetEndTime() const { return m_endTime; }
  inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }
  template <typename EndTimeT = Aws::Utils::DateTime>
  void SetEndTime(EndTimeT&& value) {
    m_endTimeHasBeenSet = true;
    m_endTime = std::forward<EndTimeT>(value);
  }
  template <typename EndTimeT = Aws::Utils::DateTime>
  GetIpamRoutingPolicyRegistrationDeltasRequest& WithEndTime(EndTimeT&& value) {
    SetEndTime(std::forward<EndTimeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The chronological order to return results in. Valid values:
   * <code>forward</code> | <code>reverse</code>.</p>
   */
  inline ChronologicalOrder GetChronologicalOrder() const { return m_chronologicalOrder; }
  inline bool ChronologicalOrderHasBeenSet() const { return m_chronologicalOrderHasBeenSet; }
  inline void SetChronologicalOrder(ChronologicalOrder value) {
    m_chronologicalOrderHasBeenSet = true;
    m_chronologicalOrder = value;
  }
  inline GetIpamRoutingPolicyRegistrationDeltasRequest& WithChronologicalOrder(ChronologicalOrder value) {
    SetChronologicalOrder(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The maximum number of results to return in a single call. If not specified,
   * all available results are returned. To retrieve the remaining results, make
   * another call with the returned <code>nextToken</code> value.</p>
   */
  inline int GetMaxResults() const { return m_maxResults; }
  inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
  inline void SetMaxResults(int value) {
    m_maxResultsHasBeenSet = true;
    m_maxResults = value;
  }
  inline GetIpamRoutingPolicyRegistrationDeltasRequest& WithMaxResults(int value) {
    SetMaxResults(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The token for the next page of results.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  GetIpamRoutingPolicyRegistrationDeltasRequest& WithNextToken(NextTokenT&& value) {
    SetNextToken(std::forward<NextTokenT>(value));
    return *this;
  }
  ///@}
 private:
  bool m_dryRun{false};

  Aws::String m_ipamInternetRegistryAssociationId;

  Aws::String m_deltaId;

  Aws::Utils::DateTime m_startTime{};

  Aws::Utils::DateTime m_endTime{};

  ChronologicalOrder m_chronologicalOrder{ChronologicalOrder::NOT_SET};

  int m_maxResults{0};

  Aws::String m_nextToken;
  bool m_dryRunHasBeenSet = false;
  bool m_ipamInternetRegistryAssociationIdHasBeenSet = false;
  bool m_deltaIdHasBeenSet = false;
  bool m_startTimeHasBeenSet = false;
  bool m_endTimeHasBeenSet = false;
  bool m_chronologicalOrderHasBeenSet = false;
  bool m_maxResultsHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
};

}  // namespace Model
}  // namespace EC2
}  // namespace Aws
