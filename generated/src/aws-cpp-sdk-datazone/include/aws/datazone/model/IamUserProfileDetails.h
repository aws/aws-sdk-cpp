/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/datazone/DataZone_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace DataZone {
namespace Model {

/**
 * <p>The details of the IAM user profile.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/IamUserProfileDetails">AWS
 * API Reference</a></p>
 */
class IamUserProfileDetails {
 public:
  AWS_DATAZONE_API IamUserProfileDetails() = default;
  AWS_DATAZONE_API IamUserProfileDetails(Aws::Utils::Json::JsonView jsonValue);
  AWS_DATAZONE_API IamUserProfileDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_DATAZONE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The ARN of the IAM user.</p>
   */
  inline const Aws::String& GetArn() const { return m_arn; }
  inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
  template <typename ArnT = Aws::String>
  void SetArn(ArnT&& value) {
    m_arnHasBeenSet = true;
    m_arn = std::forward<ArnT>(value);
  }
  template <typename ArnT = Aws::String>
  IamUserProfileDetails& WithArn(ArnT&& value) {
    SetArn(std::forward<ArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The principal ID as part of the IAM user profile details.</p>
   */
  inline const Aws::String& GetPrincipalId() const { return m_principalId; }
  inline bool PrincipalIdHasBeenSet() const { return m_principalIdHasBeenSet; }
  template <typename PrincipalIdT = Aws::String>
  void SetPrincipalId(PrincipalIdT&& value) {
    m_principalIdHasBeenSet = true;
    m_principalId = std::forward<PrincipalIdT>(value);
  }
  template <typename PrincipalIdT = Aws::String>
  IamUserProfileDetails& WithPrincipalId(PrincipalIdT&& value) {
    SetPrincipalId(std::forward<PrincipalIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The session name for IAM role sessions.</p>
   */
  inline const Aws::String& GetSessionName() const { return m_sessionName; }
  inline bool SessionNameHasBeenSet() const { return m_sessionNameHasBeenSet; }
  template <typename SessionNameT = Aws::String>
  void SetSessionName(SessionNameT&& value) {
    m_sessionNameHasBeenSet = true;
    m_sessionName = std::forward<SessionNameT>(value);
  }
  template <typename SessionNameT = Aws::String>
  IamUserProfileDetails& WithSessionName(SessionNameT&& value) {
    SetSessionName(std::forward<SessionNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The identifier of the group profile associated with the IAM user profile.
   * This links the user to a specific group profile within the Amazon DataZone
   * domain.</p>
   */
  inline const Aws::String& GetGroupProfileId() const { return m_groupProfileId; }
  inline bool GroupProfileIdHasBeenSet() const { return m_groupProfileIdHasBeenSet; }
  template <typename GroupProfileIdT = Aws::String>
  void SetGroupProfileId(GroupProfileIdT&& value) {
    m_groupProfileIdHasBeenSet = true;
    m_groupProfileId = std::forward<GroupProfileIdT>(value);
  }
  template <typename GroupProfileIdT = Aws::String>
  IamUserProfileDetails& WithGroupProfileId(GroupProfileIdT&& value) {
    SetGroupProfileId(std::forward<GroupProfileIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_arn;

  Aws::String m_principalId;

  Aws::String m_sessionName;

  Aws::String m_groupProfileId;
  bool m_arnHasBeenSet = false;
  bool m_principalIdHasBeenSet = false;
  bool m_sessionNameHasBeenSet = false;
  bool m_groupProfileIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace DataZone
}  // namespace Aws
