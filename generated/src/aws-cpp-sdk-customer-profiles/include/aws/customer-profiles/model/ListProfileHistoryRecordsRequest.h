/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/customer-profiles/CustomerProfilesRequest.h>
#include <aws/customer-profiles/CustomerProfiles_EXPORTS.h>
#include <aws/customer-profiles/model/ActionType.h>

#include <utility>

namespace Aws {
namespace Http {
class URI;
}  // namespace Http
namespace CustomerProfiles {
namespace Model {

/**
 */
class ListProfileHistoryRecordsRequest : public CustomerProfilesRequest {
 public:
  AWS_CUSTOMERPROFILES_API ListProfileHistoryRecordsRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "ListProfileHistoryRecords"; }

  AWS_CUSTOMERPROFILES_API Aws::String SerializePayload() const override;

  AWS_CUSTOMERPROFILES_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;

  ///@{
  /**
   * <p>The unique name of the domain for which to return profile history
   * records.</p>
   */
  inline const Aws::String& GetDomainName() const { return m_domainName; }
  inline bool DomainNameHasBeenSet() const { return m_domainNameHasBeenSet; }
  template <typename DomainNameT = Aws::String>
  void SetDomainName(DomainNameT&& value) {
    m_domainNameHasBeenSet = true;
    m_domainName = std::forward<DomainNameT>(value);
  }
  template <typename DomainNameT = Aws::String>
  ListProfileHistoryRecordsRequest& WithDomainName(DomainNameT&& value) {
    SetDomainName(std::forward<DomainNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The identifier of the profile to be taken.</p>
   */
  inline const Aws::String& GetProfileId() const { return m_profileId; }
  inline bool ProfileIdHasBeenSet() const { return m_profileIdHasBeenSet; }
  template <typename ProfileIdT = Aws::String>
  void SetProfileId(ProfileIdT&& value) {
    m_profileIdHasBeenSet = true;
    m_profileId = std::forward<ProfileIdT>(value);
  }
  template <typename ProfileIdT = Aws::String>
  ListProfileHistoryRecordsRequest& WithProfileId(ProfileIdT&& value) {
    SetProfileId(std::forward<ProfileIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Applies a filter to include profile history records only with the specified
   * <code>ObjectTypeName</code> value in the response.</p>
   */
  inline const Aws::String& GetObjectTypeName() const { return m_objectTypeName; }
  inline bool ObjectTypeNameHasBeenSet() const { return m_objectTypeNameHasBeenSet; }
  template <typename ObjectTypeNameT = Aws::String>
  void SetObjectTypeName(ObjectTypeNameT&& value) {
    m_objectTypeNameHasBeenSet = true;
    m_objectTypeName = std::forward<ObjectTypeNameT>(value);
  }
  template <typename ObjectTypeNameT = Aws::String>
  ListProfileHistoryRecordsRequest& WithObjectTypeName(ObjectTypeNameT&& value) {
    SetObjectTypeName(std::forward<ObjectTypeNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The token for the next set of results. Use the value returned in the previous
   * response in the next request to retrieve the next set of results.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  ListProfileHistoryRecordsRequest& WithNextToken(NextTokenT&& value) {
    SetNextToken(std::forward<NextTokenT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The maximum number of results to return per page.</p>
   */
  inline int GetMaxResults() const { return m_maxResults; }
  inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
  inline void SetMaxResults(int value) {
    m_maxResultsHasBeenSet = true;
    m_maxResults = value;
  }
  inline ListProfileHistoryRecordsRequest& WithMaxResults(int value) {
    SetMaxResults(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Applies a filter to include profile history records only with the specified
   * <code>ActionType</code> value in the response.</p>
   */
  inline ActionType GetActionType() const { return m_actionType; }
  inline bool ActionTypeHasBeenSet() const { return m_actionTypeHasBeenSet; }
  inline void SetActionType(ActionType value) {
    m_actionTypeHasBeenSet = true;
    m_actionType = value;
  }
  inline ListProfileHistoryRecordsRequest& WithActionType(ActionType value) {
    SetActionType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Applies a filter to include profile history records only with the specified
   * <code>PerformedBy</code> value in the response. The <code>PerformedBy</code>
   * value can be the Amazon Resource Name (ARN) of the person or service principal
   * who performed the action.</p>
   */
  inline const Aws::String& GetPerformedBy() const { return m_performedBy; }
  inline bool PerformedByHasBeenSet() const { return m_performedByHasBeenSet; }
  template <typename PerformedByT = Aws::String>
  void SetPerformedBy(PerformedByT&& value) {
    m_performedByHasBeenSet = true;
    m_performedBy = std::forward<PerformedByT>(value);
  }
  template <typename PerformedByT = Aws::String>
  ListProfileHistoryRecordsRequest& WithPerformedBy(PerformedByT&& value) {
    SetPerformedBy(std::forward<PerformedByT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_domainName;
  bool m_domainNameHasBeenSet = false;

  Aws::String m_profileId;
  bool m_profileIdHasBeenSet = false;

  Aws::String m_objectTypeName;
  bool m_objectTypeNameHasBeenSet = false;

  Aws::String m_nextToken;
  bool m_nextTokenHasBeenSet = false;

  int m_maxResults{0};
  bool m_maxResultsHasBeenSet = false;

  ActionType m_actionType{ActionType::NOT_SET};
  bool m_actionTypeHasBeenSet = false;

  Aws::String m_performedBy;
  bool m_performedByHasBeenSet = false;
};

}  // namespace Model
}  // namespace CustomerProfiles
}  // namespace Aws
