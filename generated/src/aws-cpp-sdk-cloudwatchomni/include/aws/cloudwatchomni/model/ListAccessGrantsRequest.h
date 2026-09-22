/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudwatchomni/CloudWatchOmniRequest.h>
#include <aws/cloudwatchomni/CloudWatchOmni_EXPORTS.h>
#include <aws/cloudwatchomni/model/AccessGrantPermission.h>
#include <aws/cloudwatchomni/model/AccessGrantPrincipalType.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace CloudWatchOmni {
namespace Model {

/**
 */
class ListAccessGrantsRequest : public CloudWatchOmniRequest {
 public:
  AWS_CLOUDWATCHOMNI_API ListAccessGrantsRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "ListAccessGrants"; }

  AWS_CLOUDWATCHOMNI_API Aws::String SerializePayload() const override;

  AWS_CLOUDWATCHOMNI_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>Filter by domain ID.</p>
   */
  inline const Aws::String& GetDomainId() const { return m_domainId; }
  inline bool DomainIdHasBeenSet() const { return m_domainIdHasBeenSet; }
  template <typename DomainIdT = Aws::String>
  void SetDomainId(DomainIdT&& value) {
    m_domainIdHasBeenSet = true;
    m_domainId = std::forward<DomainIdT>(value);
  }
  template <typename DomainIdT = Aws::String>
  ListAccessGrantsRequest& WithDomainId(DomainIdT&& value) {
    SetDomainId(std::forward<DomainIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Filter by space ID.</p>
   */
  inline const Aws::String& GetSpaceId() const { return m_spaceId; }
  inline bool SpaceIdHasBeenSet() const { return m_spaceIdHasBeenSet; }
  template <typename SpaceIdT = Aws::String>
  void SetSpaceId(SpaceIdT&& value) {
    m_spaceIdHasBeenSet = true;
    m_spaceId = std::forward<SpaceIdT>(value);
  }
  template <typename SpaceIdT = Aws::String>
  ListAccessGrantsRequest& WithSpaceId(SpaceIdT&& value) {
    SetSpaceId(std::forward<SpaceIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Filter by principal ID.</p>
   */
  inline const Aws::String& GetPrincipalId() const { return m_principalId; }
  inline bool PrincipalIdHasBeenSet() const { return m_principalIdHasBeenSet; }
  template <typename PrincipalIdT = Aws::String>
  void SetPrincipalId(PrincipalIdT&& value) {
    m_principalIdHasBeenSet = true;
    m_principalId = std::forward<PrincipalIdT>(value);
  }
  template <typename PrincipalIdT = Aws::String>
  ListAccessGrantsRequest& WithPrincipalId(PrincipalIdT&& value) {
    SetPrincipalId(std::forward<PrincipalIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Filter by principal type.</p>
   */
  inline AccessGrantPrincipalType GetPrincipalType() const { return m_principalType; }
  inline bool PrincipalTypeHasBeenSet() const { return m_principalTypeHasBeenSet; }
  inline void SetPrincipalType(AccessGrantPrincipalType value) {
    m_principalTypeHasBeenSet = true;
    m_principalType = value;
  }
  inline ListAccessGrantsRequest& WithPrincipalType(AccessGrantPrincipalType value) {
    SetPrincipalType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Filter by permission level.</p>
   */
  inline AccessGrantPermission GetPermission() const { return m_permission; }
  inline bool PermissionHasBeenSet() const { return m_permissionHasBeenSet; }
  inline void SetPermission(AccessGrantPermission value) {
    m_permissionHasBeenSet = true;
    m_permission = value;
  }
  inline ListAccessGrantsRequest& WithPermission(AccessGrantPermission value) {
    SetPermission(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A token to retrieve the next page of results. Supply the same filters used on
   * the request that returned it. Tokens expire after 24 hours.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  ListAccessGrantsRequest& WithNextToken(NextTokenT&& value) {
    SetNextToken(std::forward<NextTokenT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The maximum number of access grants to return per page. Defaults to 100. A
   * page can contain fewer results than this value even when more results remain;
   * continue while nextToken is present.</p>
   */
  inline int GetMaxResults() const { return m_maxResults; }
  inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
  inline void SetMaxResults(int value) {
    m_maxResultsHasBeenSet = true;
    m_maxResults = value;
  }
  inline ListAccessGrantsRequest& WithMaxResults(int value) {
    SetMaxResults(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_domainId;

  Aws::String m_spaceId;

  Aws::String m_principalId;

  AccessGrantPrincipalType m_principalType{AccessGrantPrincipalType::NOT_SET};

  AccessGrantPermission m_permission{AccessGrantPermission::NOT_SET};

  Aws::String m_nextToken;

  int m_maxResults{0};
  bool m_domainIdHasBeenSet = false;
  bool m_spaceIdHasBeenSet = false;
  bool m_principalIdHasBeenSet = false;
  bool m_principalTypeHasBeenSet = false;
  bool m_permissionHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
  bool m_maxResultsHasBeenSet = false;
};

}  // namespace Model
}  // namespace CloudWatchOmni
}  // namespace Aws
