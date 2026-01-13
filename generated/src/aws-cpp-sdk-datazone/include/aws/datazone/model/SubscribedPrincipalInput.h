/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datazone/DataZone_EXPORTS.h>
#include <aws/datazone/model/SubscribedGroupInput.h>
#include <aws/datazone/model/SubscribedIamPrincipalInput.h>
#include <aws/datazone/model/SubscribedProjectInput.h>
#include <aws/datazone/model/SubscribedUserInput.h>

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
 * <p>The principal that is to be given a subscriptiong grant.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/SubscribedPrincipalInput">AWS
 * API Reference</a></p>
 */
class SubscribedPrincipalInput {
 public:
  AWS_DATAZONE_API SubscribedPrincipalInput() = default;
  AWS_DATAZONE_API SubscribedPrincipalInput(Aws::Utils::Json::JsonView jsonValue);
  AWS_DATAZONE_API SubscribedPrincipalInput& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_DATAZONE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The project that is to be given a subscription grant.</p>
   */
  inline const SubscribedProjectInput& GetProject() const { return m_project; }
  inline bool ProjectHasBeenSet() const { return m_projectHasBeenSet; }
  template <typename ProjectT = SubscribedProjectInput>
  void SetProject(ProjectT&& value) {
    m_projectHasBeenSet = true;
    m_project = std::forward<ProjectT>(value);
  }
  template <typename ProjectT = SubscribedProjectInput>
  SubscribedPrincipalInput& WithProject(ProjectT&& value) {
    SetProject(std::forward<ProjectT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The subscribed user.</p>
   */
  inline const SubscribedUserInput& GetUser() const { return m_user; }
  inline bool UserHasBeenSet() const { return m_userHasBeenSet; }
  template <typename UserT = SubscribedUserInput>
  void SetUser(UserT&& value) {
    m_userHasBeenSet = true;
    m_user = std::forward<UserT>(value);
  }
  template <typename UserT = SubscribedUserInput>
  SubscribedPrincipalInput& WithUser(UserT&& value) {
    SetUser(std::forward<UserT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The subscribed group.</p>
   */
  inline const SubscribedGroupInput& GetGroup() const { return m_group; }
  inline bool GroupHasBeenSet() const { return m_groupHasBeenSet; }
  template <typename GroupT = SubscribedGroupInput>
  void SetGroup(GroupT&& value) {
    m_groupHasBeenSet = true;
    m_group = std::forward<GroupT>(value);
  }
  template <typename GroupT = SubscribedGroupInput>
  SubscribedPrincipalInput& WithGroup(GroupT&& value) {
    SetGroup(std::forward<GroupT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The subscribed IAM principal.</p>
   */
  inline const SubscribedIamPrincipalInput& GetIam() const { return m_iam; }
  inline bool IamHasBeenSet() const { return m_iamHasBeenSet; }
  template <typename IamT = SubscribedIamPrincipalInput>
  void SetIam(IamT&& value) {
    m_iamHasBeenSet = true;
    m_iam = std::forward<IamT>(value);
  }
  template <typename IamT = SubscribedIamPrincipalInput>
  SubscribedPrincipalInput& WithIam(IamT&& value) {
    SetIam(std::forward<IamT>(value));
    return *this;
  }
  ///@}
 private:
  SubscribedProjectInput m_project;

  SubscribedUserInput m_user;

  SubscribedGroupInput m_group;

  SubscribedIamPrincipalInput m_iam;
  bool m_projectHasBeenSet = false;
  bool m_userHasBeenSet = false;
  bool m_groupHasBeenSet = false;
  bool m_iamHasBeenSet = false;
};

}  // namespace Model
}  // namespace DataZone
}  // namespace Aws
