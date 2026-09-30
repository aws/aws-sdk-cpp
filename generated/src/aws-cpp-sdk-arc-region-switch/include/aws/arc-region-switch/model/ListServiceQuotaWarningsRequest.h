/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/arc-region-switch/ARCRegionswitchRequest.h>
#include <aws/arc-region-switch/ARCRegionswitch_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <utility>

namespace Aws {
namespace ARCRegionswitch {
namespace Model {

/**
 */
class ListServiceQuotaWarningsRequest : public ARCRegionswitchRequest {
 public:
  AWS_ARCREGIONSWITCH_API ListServiceQuotaWarningsRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "ListServiceQuotaWarnings"; }

  AWS_ARCREGIONSWITCH_API Aws::String SerializePayload() const override;

  AWS_ARCREGIONSWITCH_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>The Amazon Resource Names (ARNs) of the plans to return service quota
   * warnings for. You can specify up to 100 plan ARNs. Region switch ignores any
   * plan ARN that you can't access. If you omit this parameter, Region switch
   * returns the warnings for all of your accessible plans.</p>
   */
  inline const Aws::Vector<Aws::String>& GetPlanArns() const { return m_planArns; }
  inline bool PlanArnsHasBeenSet() const { return m_planArnsHasBeenSet; }
  template <typename PlanArnsT = Aws::Vector<Aws::String>>
  void SetPlanArns(PlanArnsT&& value) {
    m_planArnsHasBeenSet = true;
    m_planArns = std::forward<PlanArnsT>(value);
  }
  template <typename PlanArnsT = Aws::Vector<Aws::String>>
  ListServiceQuotaWarningsRequest& WithPlanArns(PlanArnsT&& value) {
    SetPlanArns(std::forward<PlanArnsT>(value));
    return *this;
  }
  template <typename PlanArnsT = Aws::String>
  ListServiceQuotaWarningsRequest& AddPlanArns(PlanArnsT&& value) {
    m_planArnsHasBeenSet = true;
    m_planArns.emplace_back(std::forward<PlanArnsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The maximum number of results to return with this call. Valid values are
   * <code>1</code> to <code>100</code>. If you don't specify a value, the operation
   * returns up to the maximum number of results.</p>
   */
  inline int GetMaxResults() const { return m_maxResults; }
  inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
  inline void SetMaxResults(int value) {
    m_maxResultsHasBeenSet = true;
    m_maxResults = value;
  }
  inline ListServiceQuotaWarningsRequest& WithMaxResults(int value) {
    SetMaxResults(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies that you want to receive the next page of results. Valid only if
   * you received a <code>nextToken</code> response in the previous request. If you
   * did, it indicates that more output is available. Set this parameter to the value
   * provided by the previous call's <code>nextToken</code> response to request the
   * next page of results.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  ListServiceQuotaWarningsRequest& WithNextToken(NextTokenT&& value) {
    SetNextToken(std::forward<NextTokenT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<Aws::String> m_planArns;

  int m_maxResults{0};

  Aws::String m_nextToken;
  bool m_planArnsHasBeenSet = false;
  bool m_maxResultsHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
};

}  // namespace Model
}  // namespace ARCRegionswitch
}  // namespace Aws
