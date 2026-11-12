/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/lightsail/Lightsail_EXPORTS.h>
#include <aws/lightsail/model/ResourceLocation.h>
#include <aws/lightsail/model/SubdomainAttachableResource.h>
#include <aws/lightsail/model/SubdomainState.h>
#include <aws/lightsail/model/Tag.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace Lightsail {
namespace Model {

/**
 * <p>Describes a Lightsail subdomain. A subdomain is the name that you choose,
 * such as <code>mysite</code> or <code>blog.mysite</code>. Its web address is the
 * subdomain followed by <code>amazonlightsail.com</code>, such as
 * <code>blog.mysite.amazonlightsail.com</code>. You can associate a subdomain with
 * a Lightsail resource to make the resource reachable at the web
 * address.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/Subdomain">AWS
 * API Reference</a></p>
 */
class Subdomain {
 public:
  AWS_LIGHTSAIL_API Subdomain() = default;
  AWS_LIGHTSAIL_API Subdomain(Aws::Utils::Json::JsonView jsonValue);
  AWS_LIGHTSAIL_API Subdomain& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_LIGHTSAIL_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The subdomain (for example, <code>mysite</code> or <code>blog.mysite</code>).
   * To get the web address, use the <code>fqdn</code> parameter.</p>
   */
  inline const Aws::String& GetSubdomainName() const { return m_subdomainName; }
  inline bool SubdomainNameHasBeenSet() const { return m_subdomainNameHasBeenSet; }
  template <typename SubdomainNameT = Aws::String>
  void SetSubdomainName(SubdomainNameT&& value) {
    m_subdomainNameHasBeenSet = true;
    m_subdomainName = std::forward<SubdomainNameT>(value);
  }
  template <typename SubdomainNameT = Aws::String>
  Subdomain& WithSubdomainName(SubdomainNameT&& value) {
    SetSubdomainName(std::forward<SubdomainNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the subdomain.</p> <p>If you create a
   * subdomain with a depth of 2, such as <code>blog.mysite</code>, without first
   * creating the subdomain with a depth of 1 (<code>mysite</code>), Lightsail holds
   * <code>mysite</code> for your account in the <code>IMPLICIT</code> state. It
   * doesn't have an ARN until you create a subdomain with that name.</p>
   */
  inline const Aws::String& GetArn() const { return m_arn; }
  inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
  template <typename ArnT = Aws::String>
  void SetArn(ArnT&& value) {
    m_arnHasBeenSet = true;
    m_arn = std::forward<ArnT>(value);
  }
  template <typename ArnT = Aws::String>
  Subdomain& WithArn(ArnT&& value) {
    SetArn(std::forward<ArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The web address of the subdomain, which is the subdomain followed by
   * <code>amazonlightsail.com</code> (for example,
   * <code>blog.mysite.amazonlightsail.com</code>).</p>
   */
  inline const Aws::String& GetFqdn() const { return m_fqdn; }
  inline bool FqdnHasBeenSet() const { return m_fqdnHasBeenSet; }
  template <typename FqdnT = Aws::String>
  void SetFqdn(FqdnT&& value) {
    m_fqdnHasBeenSet = true;
    m_fqdn = std::forward<FqdnT>(value);
  }
  template <typename FqdnT = Aws::String>
  Subdomain& WithFqdn(FqdnT&& value) {
    SetFqdn(std::forward<FqdnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of labels in the subdomain. A top-level subdomain, such as
   * <code>mysite</code>, has a depth of <code>1</code>. A nested subdomain, such as
   * <code>blog.mysite</code>, has a depth of <code>2</code>.</p>
   */
  inline int GetDepth() const { return m_depth; }
  inline bool DepthHasBeenSet() const { return m_depthHasBeenSet; }
  inline void SetDepth(int value) {
    m_depthHasBeenSet = true;
    m_depth = value;
  }
  inline Subdomain& WithDepth(int value) {
    SetDepth(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The state of the subdomain.</p> <p>The following states are possible:</p>
   * <ul> <li> <p> <code>CREATING</code> – The subdomain is being created.</p> </li>
   * <li> <p> <code>CREATE_FAILED</code> – The subdomain couldn't be created. Delete
   * the subdomain, and then create it again if the name is still available.</p>
   * </li> <li> <p> <code>UNATTACHED</code> – The subdomain is ready, and isn't
   * associated with a resource.</p> </li> <li> <p> <code>ATTACHING</code> – The
   * subdomain is being associated with a resource.</p> </li> <li> <p>
   * <code>ATTACHED</code> – The subdomain is associated with a resource, and routes
   * traffic to it.</p> </li> <li> <p> <code>DETACHING</code> – The subdomain is
   * being disassociated from a resource.</p> </li> <li> <p>
   * <code>TRANSFERRING</code> – The subdomain is being moved from one resource to
   * another resource.</p> </li> <li> <p> <code>IMPLICIT</code> – The subdomain is
   * the parent of one or more nested subdomains that you created, but you didn't
   * create the parent subdomain itself. You can't associate or delete a subdomain in
   * this state. To use it, create it with the <code>CreateSubdomain</code>
   * action.</p> </li> </ul>
   */
  inline SubdomainState GetState() const { return m_state; }
  inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
  inline void SetState(SubdomainState value) {
    m_stateHasBeenSet = true;
    m_state = value;
  }
  inline Subdomain& WithState(SubdomainState value) {
    SetState(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>An object that describes the resource that the subdomain is associated
   * with.</p> <p>When the subdomain is in the <code>TRANSFERRING</code> state, this
   * is the resource that the subdomain is being moved from.</p>
   */
  inline const SubdomainAttachableResource& GetAttachedResource() const { return m_attachedResource; }
  inline bool AttachedResourceHasBeenSet() const { return m_attachedResourceHasBeenSet; }
  template <typename AttachedResourceT = SubdomainAttachableResource>
  void SetAttachedResource(AttachedResourceT&& value) {
    m_attachedResourceHasBeenSet = true;
    m_attachedResource = std::forward<AttachedResourceT>(value);
  }
  template <typename AttachedResourceT = SubdomainAttachableResource>
  Subdomain& WithAttachedResource(AttachedResourceT&& value) {
    SetAttachedResource(std::forward<AttachedResourceT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>An object that describes the resource that the subdomain is being associated
   * with.</p> <p>This parameter is returned only when the subdomain is in the
   * <code>ATTACHING</code> or <code>TRANSFERRING</code> state.</p>
   */
  inline const SubdomainAttachableResource& GetAttachingResource() const { return m_attachingResource; }
  inline bool AttachingResourceHasBeenSet() const { return m_attachingResourceHasBeenSet; }
  template <typename AttachingResourceT = SubdomainAttachableResource>
  void SetAttachingResource(AttachingResourceT&& value) {
    m_attachingResourceHasBeenSet = true;
    m_attachingResource = std::forward<AttachingResourceT>(value);
  }
  template <typename AttachingResourceT = SubdomainAttachableResource>
  Subdomain& WithAttachingResource(AttachingResourceT&& value) {
    SetAttachingResource(std::forward<AttachingResourceT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>An object that describes the location of the subdomain, such as the AWS
   * Region.</p>
   */
  inline const ResourceLocation& GetLocation() const { return m_location; }
  inline bool LocationHasBeenSet() const { return m_locationHasBeenSet; }
  template <typename LocationT = ResourceLocation>
  void SetLocation(LocationT&& value) {
    m_locationHasBeenSet = true;
    m_location = std::forward<LocationT>(value);
  }
  template <typename LocationT = ResourceLocation>
  Subdomain& WithLocation(LocationT&& value) {
    SetLocation(std::forward<LocationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp when the subdomain was created.</p>
   */
  inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
  inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  void SetCreatedAt(CreatedAtT&& value) {
    m_createdAtHasBeenSet = true;
    m_createdAt = std::forward<CreatedAtT>(value);
  }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  Subdomain& WithCreatedAt(CreatedAtT&& value) {
    SetCreatedAt(std::forward<CreatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The web address of the parent subdomain (for example,
   * <code>mysite.amazonlightsail.com</code> for <code>blog.mysite</code>).</p>
   * <p>This parameter isn't returned for a subdomain with a depth of 1.</p>
   */
  inline const Aws::String& GetParentFqdn() const { return m_parentFqdn; }
  inline bool ParentFqdnHasBeenSet() const { return m_parentFqdnHasBeenSet; }
  template <typename ParentFqdnT = Aws::String>
  void SetParentFqdn(ParentFqdnT&& value) {
    m_parentFqdnHasBeenSet = true;
    m_parentFqdn = std::forward<ParentFqdnT>(value);
  }
  template <typename ParentFqdnT = Aws::String>
  Subdomain& WithParentFqdn(ParentFqdnT&& value) {
    SetParentFqdn(std::forward<ParentFqdnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>An array of objects that describe the nested subdomains of the subdomain.</p>
   * <p>This parameter is returned only by the <code>GetSubdomains</code> action when
   * you don't specify a subdomain.</p>
   */
  inline const Aws::Vector<Subdomain>& GetChildren() const { return m_children; }
  inline bool ChildrenHasBeenSet() const { return m_childrenHasBeenSet; }
  template <typename ChildrenT = Aws::Vector<Subdomain>>
  void SetChildren(ChildrenT&& value) {
    m_childrenHasBeenSet = true;
    m_children = std::forward<ChildrenT>(value);
  }
  template <typename ChildrenT = Aws::Vector<Subdomain>>
  Subdomain& WithChildren(ChildrenT&& value) {
    SetChildren(std::forward<ChildrenT>(value));
    return *this;
  }
  template <typename ChildrenT = Subdomain>
  Subdomain& AddChildren(ChildrenT&& value) {
    m_childrenHasBeenSet = true;
    m_children.emplace_back(std::forward<ChildrenT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The tag keys and optional values for the subdomain. For more information
   * about tags in Lightsail, see the <a
   * href="https://docs.aws.amazon.com/lightsail/latest/userguide/amazon-lightsail-tags">Lightsail
   * Developer Guide</a>.</p> <p>This parameter is returned only by the
   * <code>GetSubdomains</code> action when you specify a subdomain.</p>
   */
  inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
  inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
  template <typename TagsT = Aws::Vector<Tag>>
  void SetTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags = std::forward<TagsT>(value);
  }
  template <typename TagsT = Aws::Vector<Tag>>
  Subdomain& WithTags(TagsT&& value) {
    SetTags(std::forward<TagsT>(value));
    return *this;
  }
  template <typename TagsT = Tag>
  Subdomain& AddTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags.emplace_back(std::forward<TagsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_subdomainName;

  Aws::String m_arn;

  Aws::String m_fqdn;

  int m_depth{0};

  SubdomainState m_state{SubdomainState::NOT_SET};

  SubdomainAttachableResource m_attachedResource;

  SubdomainAttachableResource m_attachingResource;

  ResourceLocation m_location;

  Aws::Utils::DateTime m_createdAt{};

  Aws::String m_parentFqdn;

  Aws::Vector<Subdomain> m_children;

  Aws::Vector<Tag> m_tags;
  bool m_subdomainNameHasBeenSet = false;
  bool m_arnHasBeenSet = false;
  bool m_fqdnHasBeenSet = false;
  bool m_depthHasBeenSet = false;
  bool m_stateHasBeenSet = false;
  bool m_attachedResourceHasBeenSet = false;
  bool m_attachingResourceHasBeenSet = false;
  bool m_locationHasBeenSet = false;
  bool m_createdAtHasBeenSet = false;
  bool m_parentFqdnHasBeenSet = false;
  bool m_childrenHasBeenSet = false;
  bool m_tagsHasBeenSet = false;
};

}  // namespace Model
}  // namespace Lightsail
}  // namespace Aws
