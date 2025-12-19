/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/customer-profiles/CustomerProfilesRequest.h>
#include <aws/customer-profiles/CustomerProfiles_EXPORTS.h>

#include <utility>

namespace Aws {
namespace CustomerProfiles {
namespace Model {

/**
 */
class GetProfileHistoryRecordRequest : public CustomerProfilesRequest {
 public:
  AWS_CUSTOMERPROFILES_API GetProfileHistoryRecordRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "GetProfileHistoryRecord"; }

  AWS_CUSTOMERPROFILES_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The unique name of the domain for which to return a profile history
   * record.</p>
   */
  inline const Aws::String& GetDomainName() const { return m_domainName; }
  inline bool DomainNameHasBeenSet() const { return m_domainNameHasBeenSet; }
  template <typename DomainNameT = Aws::String>
  void SetDomainName(DomainNameT&& value) {
    m_domainNameHasBeenSet = true;
    m_domainName = std::forward<DomainNameT>(value);
  }
  template <typename DomainNameT = Aws::String>
  GetProfileHistoryRecordRequest& WithDomainName(DomainNameT&& value) {
    SetDomainName(std::forward<DomainNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique identifier of the profile for which to return a history
   * record.</p>
   */
  inline const Aws::String& GetProfileId() const { return m_profileId; }
  inline bool ProfileIdHasBeenSet() const { return m_profileIdHasBeenSet; }
  template <typename ProfileIdT = Aws::String>
  void SetProfileId(ProfileIdT&& value) {
    m_profileIdHasBeenSet = true;
    m_profileId = std::forward<ProfileIdT>(value);
  }
  template <typename ProfileIdT = Aws::String>
  GetProfileHistoryRecordRequest& WithProfileId(ProfileIdT&& value) {
    SetProfileId(std::forward<ProfileIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique identifier of the profile history record to return.</p>
   */
  inline const Aws::String& GetId() const { return m_id; }
  inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
  template <typename IdT = Aws::String>
  void SetId(IdT&& value) {
    m_idHasBeenSet = true;
    m_id = std::forward<IdT>(value);
  }
  template <typename IdT = Aws::String>
  GetProfileHistoryRecordRequest& WithId(IdT&& value) {
    SetId(std::forward<IdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_domainName;

  Aws::String m_profileId;

  Aws::String m_id;
  bool m_domainNameHasBeenSet = false;
  bool m_profileIdHasBeenSet = false;
  bool m_idHasBeenSet = false;
};

}  // namespace Model
}  // namespace CustomerProfiles
}  // namespace Aws
