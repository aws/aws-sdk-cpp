/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/directconnect/DirectConnectRequest.h>
#include <aws/directconnect/DirectConnect_EXPORTS.h>
#include <aws/directconnect/model/ResiliencyModel.h>
#include <aws/directconnect/model/Tag.h>

#include <utility>

namespace Aws {
namespace DirectConnect {
namespace Model {

/**
 */
class CreateResiliencyGroupRequest : public DirectConnectRequest {
 public:
  AWS_DIRECTCONNECT_API CreateResiliencyGroupRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "CreateResiliencyGroup"; }

  AWS_DIRECTCONNECT_API Aws::String SerializePayload() const override;

  AWS_DIRECTCONNECT_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>The name of the resiliency group.</p>
   */
  inline const Aws::String& GetResiliencyGroupName() const { return m_resiliencyGroupName; }
  inline bool ResiliencyGroupNameHasBeenSet() const { return m_resiliencyGroupNameHasBeenSet; }
  template <typename ResiliencyGroupNameT = Aws::String>
  void SetResiliencyGroupName(ResiliencyGroupNameT&& value) {
    m_resiliencyGroupNameHasBeenSet = true;
    m_resiliencyGroupName = std::forward<ResiliencyGroupNameT>(value);
  }
  template <typename ResiliencyGroupNameT = Aws::String>
  CreateResiliencyGroupRequest& WithResiliencyGroupName(ResiliencyGroupNameT&& value) {
    SetResiliencyGroupName(std::forward<ResiliencyGroupNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The resiliency model that the resiliency group is intended to meet. The valid
   * values are <code>maximum-resiliency</code>, <code>high-resiliency</code>, and
   * <code>basic-resiliency</code>.</p>
   */
  inline ResiliencyModel GetIntendedResiliencyModel() const { return m_intendedResiliencyModel; }
  inline bool IntendedResiliencyModelHasBeenSet() const { return m_intendedResiliencyModelHasBeenSet; }
  inline void SetIntendedResiliencyModel(ResiliencyModel value) {
    m_intendedResiliencyModelHasBeenSet = true;
    m_intendedResiliencyModel = value;
  }
  inline CreateResiliencyGroupRequest& WithIntendedResiliencyModel(ResiliencyModel value) {
    SetIntendedResiliencyModel(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A unique, case-sensitive identifier that you provide to ensure the
   * idempotency of the request.</p>
   */
  inline const Aws::String& GetClientToken() const { return m_clientToken; }
  inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
  template <typename ClientTokenT = Aws::String>
  void SetClientToken(ClientTokenT&& value) {
    m_clientTokenHasBeenSet = true;
    m_clientToken = std::forward<ClientTokenT>(value);
  }
  template <typename ClientTokenT = Aws::String>
  CreateResiliencyGroupRequest& WithClientToken(ClientTokenT&& value) {
    SetClientToken(std::forward<ClientTokenT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The tags to associate with the resiliency group.</p>
   */
  inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
  inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
  template <typename TagsT = Aws::Vector<Tag>>
  void SetTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags = std::forward<TagsT>(value);
  }
  template <typename TagsT = Aws::Vector<Tag>>
  CreateResiliencyGroupRequest& WithTags(TagsT&& value) {
    SetTags(std::forward<TagsT>(value));
    return *this;
  }
  template <typename TagsT = Tag>
  CreateResiliencyGroupRequest& AddTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags.emplace_back(std::forward<TagsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_resiliencyGroupName;

  ResiliencyModel m_intendedResiliencyModel{ResiliencyModel::NOT_SET};

  Aws::String m_clientToken;

  Aws::Vector<Tag> m_tags;
  bool m_resiliencyGroupNameHasBeenSet = false;
  bool m_intendedResiliencyModelHasBeenSet = false;
  bool m_clientTokenHasBeenSet = false;
  bool m_tagsHasBeenSet = false;
};

}  // namespace Model
}  // namespace DirectConnect
}  // namespace Aws
