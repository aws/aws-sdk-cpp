/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datazone/DataZone_EXPORTS.h>
#include <aws/datazone/model/SubscribedGroup.h>
#include <aws/datazone/model/SubscribedIamPrincipal.h>
#include <aws/datazone/model/SubscribedProject.h>
#include <aws/datazone/model/SubscribedUser.h>

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
 * <p>The principal that has the subscription grant for the asset.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/SubscribedPrincipal">AWS
 * API Reference</a></p>
 */
class SubscribedPrincipal {
 public:
  AWS_DATAZONE_API SubscribedPrincipal() = default;
  AWS_DATAZONE_API SubscribedPrincipal(Aws::Utils::Json::JsonView jsonValue);
  AWS_DATAZONE_API SubscribedPrincipal& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_DATAZONE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The project that has the subscription grant.</p>
   */
  inline const SubscribedProject& GetProject() const { return m_project; }
  inline bool ProjectHasBeenSet() const { return m_projectHasBeenSet; }
  template <typename ProjectT = SubscribedProject>
  void SetProject(ProjectT&& value) {
    m_projectHasBeenSet = true;
    m_project = std::forward<ProjectT>(value);
  }
  template <typename ProjectT = SubscribedProject>
  SubscribedPrincipal& WithProject(ProjectT&& value) {
    SetProject(std::forward<ProjectT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The subscribed user.</p>
   */
  inline const SubscribedUser& GetUser() const { return m_user; }
  inline bool UserHasBeenSet() const { return m_userHasBeenSet; }
  template <typename UserT = SubscribedUser>
  void SetUser(UserT&& value) {
    m_userHasBeenSet = true;
    m_user = std::forward<UserT>(value);
  }
  template <typename UserT = SubscribedUser>
  SubscribedPrincipal& WithUser(UserT&& value) {
    SetUser(std::forward<UserT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The subscribed group.</p>
   */
  inline const SubscribedGroup& GetGroup() const { return m_group; }
  inline bool GroupHasBeenSet() const { return m_groupHasBeenSet; }
  template <typename GroupT = SubscribedGroup>
  void SetGroup(GroupT&& value) {
    m_groupHasBeenSet = true;
    m_group = std::forward<GroupT>(value);
  }
  template <typename GroupT = SubscribedGroup>
  SubscribedPrincipal& WithGroup(GroupT&& value) {
    SetGroup(std::forward<GroupT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The subscribed IAM principal.</p>
   */
  inline const SubscribedIamPrincipal& GetIam() const { return m_iam; }
  inline bool IamHasBeenSet() const { return m_iamHasBeenSet; }
  template <typename IamT = SubscribedIamPrincipal>
  void SetIam(IamT&& value) {
    m_iamHasBeenSet = true;
    m_iam = std::forward<IamT>(value);
  }
  template <typename IamT = SubscribedIamPrincipal>
  SubscribedPrincipal& WithIam(IamT&& value) {
    SetIam(std::forward<IamT>(value));
    return *this;
  }
  ///@}
 private:
  SubscribedProject m_project;

  SubscribedUser m_user;

  SubscribedGroup m_group;

  SubscribedIamPrincipal m_iam;
  bool m_projectHasBeenSet = false;
  bool m_userHasBeenSet = false;
  bool m_groupHasBeenSet = false;
  bool m_iamHasBeenSet = false;
};

}  // namespace Model
}  // namespace DataZone
}  // namespace Aws
