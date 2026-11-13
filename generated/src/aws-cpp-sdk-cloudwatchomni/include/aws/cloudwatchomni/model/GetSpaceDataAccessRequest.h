/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudwatchomni/CloudWatchOmniRequest.h>
#include <aws/cloudwatchomni/CloudWatchOmni_EXPORTS.h>
#include <aws/cloudwatchomni/model/DataAccessTarget.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <utility>

namespace Aws {
namespace CloudWatchOmni {
namespace Model {

/**
 */
class GetSpaceDataAccessRequest : public CloudWatchOmniRequest {
 public:
  AWS_CLOUDWATCHOMNI_API GetSpaceDataAccessRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "GetSpaceDataAccess"; }

  AWS_CLOUDWATCHOMNI_API Aws::String SerializePayload() const override;

  AWS_CLOUDWATCHOMNI_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>The unique ID of the space to return credentials for.</p>
   */
  inline const Aws::String& GetSpaceId() const { return m_spaceId; }
  inline bool SpaceIdHasBeenSet() const { return m_spaceIdHasBeenSet; }
  template <typename SpaceIdT = Aws::String>
  void SetSpaceId(SpaceIdT&& value) {
    m_spaceIdHasBeenSet = true;
    m_spaceId = std::forward<SpaceIdT>(value);
  }
  template <typename SpaceIdT = Aws::String>
  GetSpaceDataAccessRequest& WithSpaceId(SpaceIdT&& value) {
    SetSpaceId(std::forward<SpaceIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The actions to include in the credentials, grouped by service.</p>
   */
  inline const Aws::Vector<DataAccessTarget>& GetTargetScopes() const { return m_targetScopes; }
  inline bool TargetScopesHasBeenSet() const { return m_targetScopesHasBeenSet; }
  template <typename TargetScopesT = Aws::Vector<DataAccessTarget>>
  void SetTargetScopes(TargetScopesT&& value) {
    m_targetScopesHasBeenSet = true;
    m_targetScopes = std::forward<TargetScopesT>(value);
  }
  template <typename TargetScopesT = Aws::Vector<DataAccessTarget>>
  GetSpaceDataAccessRequest& WithTargetScopes(TargetScopesT&& value) {
    SetTargetScopes(std::forward<TargetScopesT>(value));
    return *this;
  }
  template <typename TargetScopesT = DataAccessTarget>
  GetSpaceDataAccessRequest& AddTargetScopes(TargetScopesT&& value) {
    m_targetScopesHasBeenSet = true;
    m_targetScopes.emplace_back(std::forward<TargetScopesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The lifetime of the credentials, in seconds. Defaults to 3600.</p>
   */
  inline int GetDurationSeconds() const { return m_durationSeconds; }
  inline bool DurationSecondsHasBeenSet() const { return m_durationSecondsHasBeenSet; }
  inline void SetDurationSeconds(int value) {
    m_durationSecondsHasBeenSet = true;
    m_durationSeconds = value;
  }
  inline GetSpaceDataAccessRequest& WithDurationSeconds(int value) {
    SetDurationSeconds(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Caller-supplied key-value pairs that are recorded for auditing. They do not
   * affect authorization or the permissions of the credentials.</p>
   */
  inline const Aws::Map<Aws::String, Aws::String>& GetAuditContext() const { return m_auditContext; }
  inline bool AuditContextHasBeenSet() const { return m_auditContextHasBeenSet; }
  template <typename AuditContextT = Aws::Map<Aws::String, Aws::String>>
  void SetAuditContext(AuditContextT&& value) {
    m_auditContextHasBeenSet = true;
    m_auditContext = std::forward<AuditContextT>(value);
  }
  template <typename AuditContextT = Aws::Map<Aws::String, Aws::String>>
  GetSpaceDataAccessRequest& WithAuditContext(AuditContextT&& value) {
    SetAuditContext(std::forward<AuditContextT>(value));
    return *this;
  }
  template <typename AuditContextKeyT = Aws::String, typename AuditContextValueT = Aws::String>
  GetSpaceDataAccessRequest& AddAuditContext(AuditContextKeyT&& key, AuditContextValueT&& value) {
    m_auditContextHasBeenSet = true;
    m_auditContext.emplace(std::forward<AuditContextKeyT>(key), std::forward<AuditContextValueT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_spaceId;

  Aws::Vector<DataAccessTarget> m_targetScopes;

  int m_durationSeconds{0};

  Aws::Map<Aws::String, Aws::String> m_auditContext;
  bool m_spaceIdHasBeenSet = false;
  bool m_targetScopesHasBeenSet = false;
  bool m_durationSecondsHasBeenSet = false;
  bool m_auditContextHasBeenSet = false;
};

}  // namespace Model
}  // namespace CloudWatchOmni
}  // namespace Aws
