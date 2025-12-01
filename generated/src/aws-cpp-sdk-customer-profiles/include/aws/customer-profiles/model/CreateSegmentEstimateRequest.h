/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/customer-profiles/CustomerProfilesRequest.h>
#include <aws/customer-profiles/CustomerProfiles_EXPORTS.h>
#include <aws/customer-profiles/model/SegmentGroupStructure.h>

#include <utility>

namespace Aws {
namespace CustomerProfiles {
namespace Model {

/**
 */
class CreateSegmentEstimateRequest : public CustomerProfilesRequest {
 public:
  AWS_CUSTOMERPROFILES_API CreateSegmentEstimateRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "CreateSegmentEstimate"; }

  AWS_CUSTOMERPROFILES_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The unique name of the domain.</p>
   */
  inline const Aws::String& GetDomainName() const { return m_domainName; }
  inline bool DomainNameHasBeenSet() const { return m_domainNameHasBeenSet; }
  template <typename DomainNameT = Aws::String>
  void SetDomainName(DomainNameT&& value) {
    m_domainNameHasBeenSet = true;
    m_domainName = std::forward<DomainNameT>(value);
  }
  template <typename DomainNameT = Aws::String>
  CreateSegmentEstimateRequest& WithDomainName(DomainNameT&& value) {
    SetDomainName(std::forward<DomainNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The segment query for calculating a segment estimate.</p>
   */
  inline const SegmentGroupStructure& GetSegmentQuery() const { return m_segmentQuery; }
  inline bool SegmentQueryHasBeenSet() const { return m_segmentQueryHasBeenSet; }
  template <typename SegmentQueryT = SegmentGroupStructure>
  void SetSegmentQuery(SegmentQueryT&& value) {
    m_segmentQueryHasBeenSet = true;
    m_segmentQuery = std::forward<SegmentQueryT>(value);
  }
  template <typename SegmentQueryT = SegmentGroupStructure>
  CreateSegmentEstimateRequest& WithSegmentQuery(SegmentQueryT&& value) {
    SetSegmentQuery(std::forward<SegmentQueryT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The segment SQL query.</p>
   */
  inline const Aws::String& GetSegmentSqlQuery() const { return m_segmentSqlQuery; }
  inline bool SegmentSqlQueryHasBeenSet() const { return m_segmentSqlQueryHasBeenSet; }
  template <typename SegmentSqlQueryT = Aws::String>
  void SetSegmentSqlQuery(SegmentSqlQueryT&& value) {
    m_segmentSqlQueryHasBeenSet = true;
    m_segmentSqlQuery = std::forward<SegmentSqlQueryT>(value);
  }
  template <typename SegmentSqlQueryT = Aws::String>
  CreateSegmentEstimateRequest& WithSegmentSqlQuery(SegmentSqlQueryT&& value) {
    SetSegmentSqlQuery(std::forward<SegmentSqlQueryT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_domainName;
  bool m_domainNameHasBeenSet = false;

  SegmentGroupStructure m_segmentQuery;
  bool m_segmentQueryHasBeenSet = false;

  Aws::String m_segmentSqlQuery;
  bool m_segmentSqlQueryHasBeenSet = false;
};

}  // namespace Model
}  // namespace CustomerProfiles
}  // namespace Aws
