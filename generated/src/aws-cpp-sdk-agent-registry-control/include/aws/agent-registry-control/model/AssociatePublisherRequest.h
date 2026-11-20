/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/agent-registry-control/AgentRegistryControlRequest.h>
#include <aws/agent-registry-control/AgentRegistryControl_EXPORTS.h>
#include <aws/core/utils/UUID.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <utility>

namespace Aws {
namespace AgentRegistryControl {
namespace Model {

/**
 */
class AssociatePublisherRequest : public AgentRegistryControlRequest {
 public:
  AWS_AGENTREGISTRYCONTROL_API AssociatePublisherRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "AssociatePublisher"; }

  AWS_AGENTREGISTRYCONTROL_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The Record being associated.</p>
   */
  inline const Aws::String& GetRecordArn() const { return m_recordArn; }
  inline bool RecordArnHasBeenSet() const { return m_recordArnHasBeenSet; }
  template <typename RecordArnT = Aws::String>
  void SetRecordArn(RecordArnT&& value) {
    m_recordArnHasBeenSet = true;
    m_recordArn = std::forward<RecordArnT>(value);
  }
  template <typename RecordArnT = Aws::String>
  AssociatePublisherRequest& WithRecordArn(RecordArnT&& value) {
    SetRecordArn(std::forward<RecordArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Publisher to associate the Record with.</p>
   */
  inline const Aws::String& GetPublisherArn() const { return m_publisherArn; }
  inline bool PublisherArnHasBeenSet() const { return m_publisherArnHasBeenSet; }
  template <typename PublisherArnT = Aws::String>
  void SetPublisherArn(PublisherArnT&& value) {
    m_publisherArnHasBeenSet = true;
    m_publisherArn = std::forward<PublisherArnT>(value);
  }
  template <typename PublisherArnT = Aws::String>
  AssociatePublisherRequest& WithPublisherArn(PublisherArnT&& value) {
    SetPublisherArn(std::forward<PublisherArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Optional single DNS label placed in front of the publisher domain (e.g.
   * &quot;agents&quot; -&gt; agents.acme.com). Absent means the Record sits directly
   * on the publisher domain.</p>
   */
  inline const Aws::String& GetSubdomain() const { return m_subdomain; }
  inline bool SubdomainHasBeenSet() const { return m_subdomainHasBeenSet; }
  template <typename SubdomainT = Aws::String>
  void SetSubdomain(SubdomainT&& value) {
    m_subdomainHasBeenSet = true;
    m_subdomain = std::forward<SubdomainT>(value);
  }
  template <typename SubdomainT = Aws::String>
  AssociatePublisherRequest& WithSubdomain(SubdomainT&& value) {
    SetSubdomain(std::forward<SubdomainT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Optional categorization/hierarchy applied to the public identifier.</p>
   */
  inline const Aws::Vector<Aws::String>& GetCategories() const { return m_categories; }
  inline bool CategoriesHasBeenSet() const { return m_categoriesHasBeenSet; }
  template <typename CategoriesT = Aws::Vector<Aws::String>>
  void SetCategories(CategoriesT&& value) {
    m_categoriesHasBeenSet = true;
    m_categories = std::forward<CategoriesT>(value);
  }
  template <typename CategoriesT = Aws::Vector<Aws::String>>
  AssociatePublisherRequest& WithCategories(CategoriesT&& value) {
    SetCategories(std::forward<CategoriesT>(value));
    return *this;
  }
  template <typename CategoriesT = Aws::String>
  AssociatePublisherRequest& AddCategories(CategoriesT&& value) {
    m_categoriesHasBeenSet = true;
    m_categories.emplace_back(std::forward<CategoriesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Optional client-provided idempotency token. Retries carrying the same token
   * return the originally-created association instead of creating a duplicate.</p>
   */
  inline const Aws::String& GetClientToken() const { return m_clientToken; }
  inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
  template <typename ClientTokenT = Aws::String>
  void SetClientToken(ClientTokenT&& value) {
    m_clientTokenHasBeenSet = true;
    m_clientToken = std::forward<ClientTokenT>(value);
  }
  template <typename ClientTokenT = Aws::String>
  AssociatePublisherRequest& WithClientToken(ClientTokenT&& value) {
    SetClientToken(std::forward<ClientTokenT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_recordArn;

  Aws::String m_publisherArn;

  Aws::String m_subdomain;

  Aws::Vector<Aws::String> m_categories;

  Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};
  bool m_recordArnHasBeenSet = false;
  bool m_publisherArnHasBeenSet = false;
  bool m_subdomainHasBeenSet = false;
  bool m_categoriesHasBeenSet = false;
  bool m_clientTokenHasBeenSet = true;
};

}  // namespace Model
}  // namespace AgentRegistryControl
}  // namespace Aws
