/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/compute-optimizer-automation/ComputeOptimizerAutomationRequest.h>
#include <aws/compute-optimizer-automation/ComputeOptimizerAutomation_EXPORTS.h>
#include <aws/core/utils/UUID.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <utility>

namespace Aws {
namespace ComputeOptimizerAutomation {
namespace Model {

/**
 */
class UntagResourceRequest : public ComputeOptimizerAutomationRequest {
 public:
  AWS_COMPUTEOPTIMIZERAUTOMATION_API UntagResourceRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "UntagResource"; }

  AWS_COMPUTEOPTIMIZERAUTOMATION_API Aws::String SerializePayload() const override;

  AWS_COMPUTEOPTIMIZERAUTOMATION_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p> The ARN of the resource to untag. </p>
   */
  inline const Aws::String& GetResourceArn() const { return m_resourceArn; }
  inline bool ResourceArnHasBeenSet() const { return m_resourceArnHasBeenSet; }
  template <typename ResourceArnT = Aws::String>
  void SetResourceArn(ResourceArnT&& value) {
    m_resourceArnHasBeenSet = true;
    m_resourceArn = std::forward<ResourceArnT>(value);
  }
  template <typename ResourceArnT = Aws::String>
  UntagResourceRequest& WithResourceArn(ResourceArnT&& value) {
    SetResourceArn(std::forward<ResourceArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The revision number of the automation rule to untag. This ensures you're
   * untagging the correct version of the rule.</p>
   */
  inline long long GetRuleRevision() const { return m_ruleRevision; }
  inline bool RuleRevisionHasBeenSet() const { return m_ruleRevisionHasBeenSet; }
  inline void SetRuleRevision(long long value) {
    m_ruleRevisionHasBeenSet = true;
    m_ruleRevision = value;
  }
  inline UntagResourceRequest& WithRuleRevision(long long value) {
    SetRuleRevision(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The keys of the tags to remove from the resource. </p>
   */
  inline const Aws::Vector<Aws::String>& GetTagKeys() const { return m_tagKeys; }
  inline bool TagKeysHasBeenSet() const { return m_tagKeysHasBeenSet; }
  template <typename TagKeysT = Aws::Vector<Aws::String>>
  void SetTagKeys(TagKeysT&& value) {
    m_tagKeysHasBeenSet = true;
    m_tagKeys = std::forward<TagKeysT>(value);
  }
  template <typename TagKeysT = Aws::Vector<Aws::String>>
  UntagResourceRequest& WithTagKeys(TagKeysT&& value) {
    SetTagKeys(std::forward<TagKeysT>(value));
    return *this;
  }
  template <typename TagKeysT = Aws::String>
  UntagResourceRequest& AddTagKeys(TagKeysT&& value) {
    m_tagKeysHasBeenSet = true;
    m_tagKeys.emplace_back(std::forward<TagKeysT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A unique, case-sensitive identifier that you provide to ensure the
   * idempotency of the request. Must be 1-64 characters long and contain only
   * alphanumeric characters, underscores, and hyphens.</p>
   */
  inline const Aws::String& GetClientToken() const { return m_clientToken; }
  inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
  template <typename ClientTokenT = Aws::String>
  void SetClientToken(ClientTokenT&& value) {
    m_clientTokenHasBeenSet = true;
    m_clientToken = std::forward<ClientTokenT>(value);
  }
  template <typename ClientTokenT = Aws::String>
  UntagResourceRequest& WithClientToken(ClientTokenT&& value) {
    SetClientToken(std::forward<ClientTokenT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_resourceArn;

  long long m_ruleRevision{0};

  Aws::Vector<Aws::String> m_tagKeys;

  Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};
  bool m_resourceArnHasBeenSet = false;
  bool m_ruleRevisionHasBeenSet = false;
  bool m_tagKeysHasBeenSet = false;
  bool m_clientTokenHasBeenSet = true;
};

}  // namespace Model
}  // namespace ComputeOptimizerAutomation
}  // namespace Aws
