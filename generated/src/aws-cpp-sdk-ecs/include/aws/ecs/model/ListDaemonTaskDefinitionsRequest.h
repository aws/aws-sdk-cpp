/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ecs/ECSRequest.h>
#include <aws/ecs/ECS_EXPORTS.h>
#include <aws/ecs/model/DaemonTaskDefinitionRevisionFilter.h>
#include <aws/ecs/model/DaemonTaskDefinitionStatusFilter.h>
#include <aws/ecs/model/SortOrder.h>

#include <utility>

namespace Aws {
namespace ECS {
namespace Model {

/**
 */
class ListDaemonTaskDefinitionsRequest : public ECSRequest {
 public:
  AWS_ECS_API ListDaemonTaskDefinitionsRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "ListDaemonTaskDefinitions"; }

  AWS_ECS_API Aws::String SerializePayload() const override;

  AWS_ECS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>The full family name to filter the <code>ListDaemonTaskDefinitions</code>
   * results with. Specifying a <code>familyPrefix</code> limits the listed daemon
   * task definitions to daemon task definition families that start with the
   * <code>familyPrefix</code> string.</p>
   */
  inline const Aws::String& GetFamilyPrefix() const { return m_familyPrefix; }
  inline bool FamilyPrefixHasBeenSet() const { return m_familyPrefixHasBeenSet; }
  template <typename FamilyPrefixT = Aws::String>
  void SetFamilyPrefix(FamilyPrefixT&& value) {
    m_familyPrefixHasBeenSet = true;
    m_familyPrefix = std::forward<FamilyPrefixT>(value);
  }
  template <typename FamilyPrefixT = Aws::String>
  ListDaemonTaskDefinitionsRequest& WithFamilyPrefix(FamilyPrefixT&& value) {
    SetFamilyPrefix(std::forward<FamilyPrefixT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The exact name of the daemon task definition family to filter results
   * with.</p>
   */
  inline const Aws::String& GetFamily() const { return m_family; }
  inline bool FamilyHasBeenSet() const { return m_familyHasBeenSet; }
  template <typename FamilyT = Aws::String>
  void SetFamily(FamilyT&& value) {
    m_familyHasBeenSet = true;
    m_family = std::forward<FamilyT>(value);
  }
  template <typename FamilyT = Aws::String>
  ListDaemonTaskDefinitionsRequest& WithFamily(FamilyT&& value) {
    SetFamily(std::forward<FamilyT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The revision filter to apply. Specify <code>LAST_REGISTERED</code> to return
   * only the last registered revision for each daemon task definition family.</p>
   */
  inline DaemonTaskDefinitionRevisionFilter GetRevision() const { return m_revision; }
  inline bool RevisionHasBeenSet() const { return m_revisionHasBeenSet; }
  inline void SetRevision(DaemonTaskDefinitionRevisionFilter value) {
    m_revisionHasBeenSet = true;
    m_revision = value;
  }
  inline ListDaemonTaskDefinitionsRequest& WithRevision(DaemonTaskDefinitionRevisionFilter value) {
    SetRevision(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The daemon task definition status to filter the
   * <code>ListDaemonTaskDefinitions</code> results with. By default, only
   * <code>ACTIVE</code> daemon task definitions are listed. If you set this
   * parameter to <code>DELETE_IN_PROGRESS</code>, only daemon task definitions that
   * are in the process of being deleted are listed. If you set this parameter to
   * <code>ALL</code>, all daemon task definitions are listed regardless of
   * status.</p>
   */
  inline DaemonTaskDefinitionStatusFilter GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  inline void SetStatus(DaemonTaskDefinitionStatusFilter value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline ListDaemonTaskDefinitionsRequest& WithStatus(DaemonTaskDefinitionStatusFilter value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The order to sort the results. Valid values are <code>ASC</code> and
   * <code>DESC</code>. By default (<code>ASC</code>), daemon task definitions are
   * listed in ascending order by family name and revision number.</p>
   */
  inline SortOrder GetSort() const { return m_sort; }
  inline bool SortHasBeenSet() const { return m_sortHasBeenSet; }
  inline void SetSort(SortOrder value) {
    m_sortHasBeenSet = true;
    m_sort = value;
  }
  inline ListDaemonTaskDefinitionsRequest& WithSort(SortOrder value) {
    SetSort(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The <code>nextToken</code> value returned from a
   * <code>ListDaemonTaskDefinitions</code> request indicating that more results are
   * available to fulfill the request and further calls will be needed. If
   * <code>maxResults</code> was provided, it's possible for the number of results to
   * be fewer than <code>maxResults</code>.</p>  <p>This token should be
   * treated as an opaque identifier that is only used to retrieve the next items in
   * a list and not for other programmatic purposes.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  ListDaemonTaskDefinitionsRequest& WithNextToken(NextTokenT&& value) {
    SetNextToken(std::forward<NextTokenT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The maximum number of daemon task definition results that
   * <code>ListDaemonTaskDefinitions</code> returned in paginated output. When this
   * parameter is used, <code>ListDaemonTaskDefinitions</code> only returns
   * <code>maxResults</code> results in a single page along with a
   * <code>nextToken</code> response element. The remaining results of the initial
   * request can be seen by sending another <code>ListDaemonTaskDefinitions</code>
   * request with the returned <code>nextToken</code> value. This value can be
   * between 1 and 100. If this parameter isn't used, then
   * <code>ListDaemonTaskDefinitions</code> returns up to 100 results and a
   * <code>nextToken</code> value if applicable.</p>
   */
  inline int GetMaxResults() const { return m_maxResults; }
  inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
  inline void SetMaxResults(int value) {
    m_maxResultsHasBeenSet = true;
    m_maxResults = value;
  }
  inline ListDaemonTaskDefinitionsRequest& WithMaxResults(int value) {
    SetMaxResults(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_familyPrefix;

  Aws::String m_family;

  DaemonTaskDefinitionRevisionFilter m_revision{DaemonTaskDefinitionRevisionFilter::NOT_SET};

  DaemonTaskDefinitionStatusFilter m_status{DaemonTaskDefinitionStatusFilter::NOT_SET};

  SortOrder m_sort{SortOrder::NOT_SET};

  Aws::String m_nextToken;

  int m_maxResults{0};
  bool m_familyPrefixHasBeenSet = false;
  bool m_familyHasBeenSet = false;
  bool m_revisionHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_sortHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
  bool m_maxResultsHasBeenSet = false;
};

}  // namespace Model
}  // namespace ECS
}  // namespace Aws
