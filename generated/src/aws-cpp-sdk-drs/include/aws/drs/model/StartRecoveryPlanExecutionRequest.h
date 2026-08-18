/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/UUID.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/drs/DrsRequest.h>
#include <aws/drs/Drs_EXPORTS.h>
#include <aws/drs/model/RecoveryPlanExecutionMode.h>
#include <aws/drs/model/RecoveryPlanExecutionSourceServer.h>

#include <utility>

namespace Aws {
namespace drs {
namespace Model {

/**
 */
class StartRecoveryPlanExecutionRequest : public DrsRequest {
 public:
  AWS_DRS_API StartRecoveryPlanExecutionRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "StartRecoveryPlanExecution"; }

  AWS_DRS_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The ARN of the Recovery Plan to execute.</p>
   */
  inline const Aws::String& GetRecoveryPlanArn() const { return m_recoveryPlanArn; }
  inline bool RecoveryPlanArnHasBeenSet() const { return m_recoveryPlanArnHasBeenSet; }
  template <typename RecoveryPlanArnT = Aws::String>
  void SetRecoveryPlanArn(RecoveryPlanArnT&& value) {
    m_recoveryPlanArnHasBeenSet = true;
    m_recoveryPlanArn = std::forward<RecoveryPlanArnT>(value);
  }
  template <typename RecoveryPlanArnT = Aws::String>
  StartRecoveryPlanExecutionRequest& WithRecoveryPlanArn(RecoveryPlanArnT&& value) {
    SetRecoveryPlanArn(std::forward<RecoveryPlanArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The execution mode (<code>DRILL</code> or <code>RECOVERY</code>).</p>
   */
  inline RecoveryPlanExecutionMode GetMode() const { return m_mode; }
  inline bool ModeHasBeenSet() const { return m_modeHasBeenSet; }
  inline void SetMode(RecoveryPlanExecutionMode value) {
    m_modeHasBeenSet = true;
    m_mode = value;
  }
  inline StartRecoveryPlanExecutionRequest& WithMode(RecoveryPlanExecutionMode value) {
    SetMode(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A unique string provided to ensure request idempotency.</p>
   */
  inline const Aws::String& GetClientToken() const { return m_clientToken; }
  inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
  template <typename ClientTokenT = Aws::String>
  void SetClientToken(ClientTokenT&& value) {
    m_clientTokenHasBeenSet = true;
    m_clientToken = std::forward<ClientTokenT>(value);
  }
  template <typename ClientTokenT = Aws::String>
  StartRecoveryPlanExecutionRequest& WithClientToken(ClientTokenT&& value) {
    SetClientToken(std::forward<ClientTokenT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Optional list of source servers with specific recovery snapshots. If not
   * provided, the latest snapshot is used for each server.</p>
   */
  inline const Aws::Vector<RecoveryPlanExecutionSourceServer>& GetSourceServers() const { return m_sourceServers; }
  inline bool SourceServersHasBeenSet() const { return m_sourceServersHasBeenSet; }
  template <typename SourceServersT = Aws::Vector<RecoveryPlanExecutionSourceServer>>
  void SetSourceServers(SourceServersT&& value) {
    m_sourceServersHasBeenSet = true;
    m_sourceServers = std::forward<SourceServersT>(value);
  }
  template <typename SourceServersT = Aws::Vector<RecoveryPlanExecutionSourceServer>>
  StartRecoveryPlanExecutionRequest& WithSourceServers(SourceServersT&& value) {
    SetSourceServers(std::forward<SourceServersT>(value));
    return *this;
  }
  template <typename SourceServersT = RecoveryPlanExecutionSourceServer>
  StartRecoveryPlanExecutionRequest& AddSourceServers(SourceServersT&& value) {
    m_sourceServersHasBeenSet = true;
    m_sourceServers.emplace_back(std::forward<SourceServersT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The tags to apply to the Recovery Plan execution.</p>
   */
  inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
  inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
  template <typename TagsT = Aws::Map<Aws::String, Aws::String>>
  void SetTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags = std::forward<TagsT>(value);
  }
  template <typename TagsT = Aws::Map<Aws::String, Aws::String>>
  StartRecoveryPlanExecutionRequest& WithTags(TagsT&& value) {
    SetTags(std::forward<TagsT>(value));
    return *this;
  }
  template <typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
  StartRecoveryPlanExecutionRequest& AddTags(TagsKeyT&& key, TagsValueT&& value) {
    m_tagsHasBeenSet = true;
    m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_recoveryPlanArn;

  RecoveryPlanExecutionMode m_mode{RecoveryPlanExecutionMode::NOT_SET};

  Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};

  Aws::Vector<RecoveryPlanExecutionSourceServer> m_sourceServers;

  Aws::Map<Aws::String, Aws::String> m_tags;
  bool m_recoveryPlanArnHasBeenSet = false;
  bool m_modeHasBeenSet = false;
  bool m_clientTokenHasBeenSet = true;
  bool m_sourceServersHasBeenSet = false;
  bool m_tagsHasBeenSet = false;
};

}  // namespace Model
}  // namespace drs
}  // namespace Aws
