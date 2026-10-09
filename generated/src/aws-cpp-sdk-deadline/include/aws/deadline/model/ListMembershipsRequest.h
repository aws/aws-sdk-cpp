/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/deadline/DeadlineRequest.h>
#include <aws/deadline/Deadline_EXPORTS.h>
#include <aws/deadline/model/MembershipResourceType.h>

#include <utility>

namespace Aws {
namespace Http {
class URI;
}  // namespace Http
namespace deadline {
namespace Model {

/**
 * <p>Shared pagination fields for List operation inputs (nextToken +
 * maxResults).</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/deadline-2023-10-12/ListMembershipsRequest">AWS
 * API Reference</a></p>
 */
class ListMembershipsRequest : public DeadlineRequest {
 public:
  AWS_DEADLINE_API ListMembershipsRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "ListMemberships"; }

  AWS_DEADLINE_API Aws::String SerializePayload() const override;

  AWS_DEADLINE_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;

  ///@{
  /**
   * <p>The token for the next set of results, or <code>null</code> to start from the
   * beginning.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  ListMembershipsRequest& WithNextToken(NextTokenT&& value) {
    SetNextToken(std::forward<NextTokenT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The maximum number of results to return. Use this parameter with
   * <code>NextToken</code> to get results as a set of sequential pages.</p>
   */
  inline int GetMaxResults() const { return m_maxResults; }
  inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
  inline void SetMaxResults(int value) {
    m_maxResultsHasBeenSet = true;
    m_maxResults = value;
  }
  inline ListMembershipsRequest& WithMaxResults(int value) {
    SetMaxResults(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ID of the IAM Identity Center principal whose Deadline Cloud resource
   * memberships you want to list.</p>
   */
  inline const Aws::String& GetPrincipalId() const { return m_principalId; }
  inline bool PrincipalIdHasBeenSet() const { return m_principalIdHasBeenSet; }
  template <typename PrincipalIdT = Aws::String>
  void SetPrincipalId(PrincipalIdT&& value) {
    m_principalIdHasBeenSet = true;
    m_principalId = std::forward<PrincipalIdT>(value);
  }
  template <typename PrincipalIdT = Aws::String>
  ListMembershipsRequest& WithPrincipalId(PrincipalIdT&& value) {
    SetPrincipalId(std::forward<PrincipalIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The identity store ID that contains the principal. This parameter is required
   * for callers that do not use a monitor session.</p>
   */
  inline const Aws::String& GetIdentityStoreId() const { return m_identityStoreId; }
  inline bool IdentityStoreIdHasBeenSet() const { return m_identityStoreIdHasBeenSet; }
  template <typename IdentityStoreIdT = Aws::String>
  void SetIdentityStoreId(IdentityStoreIdT&& value) {
    m_identityStoreIdHasBeenSet = true;
    m_identityStoreId = std::forward<IdentityStoreIdT>(value);
  }
  template <typename IdentityStoreIdT = Aws::String>
  ListMembershipsRequest& WithIdentityStoreId(IdentityStoreIdT&& value) {
    SetIdentityStoreId(std::forward<IdentityStoreIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Region of the IAM Identity Center instance. If not provided, the service
   * defaults to the Amazon Web Services Region in which you make the request.</p>
   */
  inline const Aws::String& GetIdentityCenterRegion() const { return m_identityCenterRegion; }
  inline bool IdentityCenterRegionHasBeenSet() const { return m_identityCenterRegionHasBeenSet; }
  template <typename IdentityCenterRegionT = Aws::String>
  void SetIdentityCenterRegion(IdentityCenterRegionT&& value) {
    m_identityCenterRegionHasBeenSet = true;
    m_identityCenterRegion = std::forward<IdentityCenterRegionT>(value);
  }
  template <typename IdentityCenterRegionT = Aws::String>
  ListMembershipsRequest& WithIdentityCenterRegion(IdentityCenterRegionT&& value) {
    SetIdentityCenterRegion(std::forward<IdentityCenterRegionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The resource types to include when listing the principal's memberships. If
   * not specified, memberships for all supported resource types are returned.</p>
   */
  inline const Aws::Vector<MembershipResourceType>& GetResourceTypes() const { return m_resourceTypes; }
  inline bool ResourceTypesHasBeenSet() const { return m_resourceTypesHasBeenSet; }
  template <typename ResourceTypesT = Aws::Vector<MembershipResourceType>>
  void SetResourceTypes(ResourceTypesT&& value) {
    m_resourceTypesHasBeenSet = true;
    m_resourceTypes = std::forward<ResourceTypesT>(value);
  }
  template <typename ResourceTypesT = Aws::Vector<MembershipResourceType>>
  ListMembershipsRequest& WithResourceTypes(ResourceTypesT&& value) {
    SetResourceTypes(std::forward<ResourceTypesT>(value));
    return *this;
  }
  inline ListMembershipsRequest& AddResourceTypes(MembershipResourceType value) {
    m_resourceTypesHasBeenSet = true;
    m_resourceTypes.push_back(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_nextToken;

  int m_maxResults{0};

  Aws::String m_principalId;

  Aws::String m_identityStoreId;

  Aws::String m_identityCenterRegion;

  Aws::Vector<MembershipResourceType> m_resourceTypes;
  bool m_nextTokenHasBeenSet = false;
  bool m_maxResultsHasBeenSet = false;
  bool m_principalIdHasBeenSet = false;
  bool m_identityStoreIdHasBeenSet = false;
  bool m_identityCenterRegionHasBeenSet = false;
  bool m_resourceTypesHasBeenSet = false;
};

}  // namespace Model
}  // namespace deadline
}  // namespace Aws
