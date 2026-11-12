/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lightsail/LightsailRequest.h>
#include <aws/lightsail/Lightsail_EXPORTS.h>
#include <aws/lightsail/model/SubdomainAssociationAction.h>

#include <utility>

namespace Aws {
namespace Lightsail {
namespace Model {

/**
 */
class UpdateSubdomainAssociationRequest : public LightsailRequest {
 public:
  AWS_LIGHTSAIL_API UpdateSubdomainAssociationRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "UpdateSubdomainAssociation"; }

  AWS_LIGHTSAIL_API Aws::String SerializePayload() const override;

  AWS_LIGHTSAIL_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>The subdomain to update (for example, <code>mysite</code> or
   * <code>blog.mysite</code>), not its web address.</p>
   */
  inline const Aws::String& GetSubdomainName() const { return m_subdomainName; }
  inline bool SubdomainNameHasBeenSet() const { return m_subdomainNameHasBeenSet; }
  template <typename SubdomainNameT = Aws::String>
  void SetSubdomainName(SubdomainNameT&& value) {
    m_subdomainNameHasBeenSet = true;
    m_subdomainName = std::forward<SubdomainNameT>(value);
  }
  template <typename SubdomainNameT = Aws::String>
  UpdateSubdomainAssociationRequest& WithSubdomainName(SubdomainNameT&& value) {
    SetSubdomainName(std::forward<SubdomainNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The association change to make.</p> <p>The following actions are
   * possible:</p> <ul> <li> <p> <code>ASSOCIATE</code> – Associates the subdomain
   * with the resource that you specify in the <code>targetResourceArn</code>
   * parameter. The subdomain must be in the <code>UNATTACHED</code> state.</p> </li>
   * <li> <p> <code>DISASSOCIATE</code> – Disassociates the subdomain from its
   * current resource. The subdomain must be in the <code>ATTACHED</code> state.</p>
   * </li> <li> <p> <code>TRANSFER</code> – Moves the subdomain from its current
   * resource to the resource that you specify in the <code>targetResourceArn</code>
   * parameter. The subdomain must be in the <code>ATTACHED</code> state. You can
   * transfer each subdomain only once in a 24-hour period.</p> </li> </ul>
   */
  inline SubdomainAssociationAction GetAction() const { return m_action; }
  inline bool ActionHasBeenSet() const { return m_actionHasBeenSet; }
  inline void SetAction(SubdomainAssociationAction value) {
    m_actionHasBeenSet = true;
    m_action = value;
  }
  inline UpdateSubdomainAssociationRequest& WithAction(SubdomainAssociationAction value) {
    SetAction(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the resource to associate the subdomain
   * with. The resource must be in your account.</p> <p>This parameter is required
   * when the <code>action</code> is <code>ASSOCIATE</code> or <code>TRANSFER</code>.
   * It's ignored when the <code>action</code> is <code>DISASSOCIATE</code>.</p>
   */
  inline const Aws::String& GetTargetResourceArn() const { return m_targetResourceArn; }
  inline bool TargetResourceArnHasBeenSet() const { return m_targetResourceArnHasBeenSet; }
  template <typename TargetResourceArnT = Aws::String>
  void SetTargetResourceArn(TargetResourceArnT&& value) {
    m_targetResourceArnHasBeenSet = true;
    m_targetResourceArn = std::forward<TargetResourceArnT>(value);
  }
  template <typename TargetResourceArnT = Aws::String>
  UpdateSubdomainAssociationRequest& WithTargetResourceArn(TargetResourceArnT&& value) {
    SetTargetResourceArn(std::forward<TargetResourceArnT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_subdomainName;

  SubdomainAssociationAction m_action{SubdomainAssociationAction::NOT_SET};

  Aws::String m_targetResourceArn;
  bool m_subdomainNameHasBeenSet = false;
  bool m_actionHasBeenSet = false;
  bool m_targetResourceArnHasBeenSet = false;
};

}  // namespace Model
}  // namespace Lightsail
}  // namespace Aws
