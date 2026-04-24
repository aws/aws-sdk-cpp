/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/ConnectRequest.h>
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/model/EntityType.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace Connect {
namespace Model {

/**
 */
class ListEntitySecurityProfilesRequest : public ConnectRequest {
 public:
  AWS_CONNECT_API ListEntitySecurityProfilesRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "ListEntitySecurityProfiles"; }

  AWS_CONNECT_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p> The identifier of the Amazon Connect instance. You can find the instance ID
   * in the Amazon Resource Name (ARN) of the instance. </p>
   */
  inline const Aws::String& GetInstanceId() const { return m_instanceId; }
  inline bool InstanceIdHasBeenSet() const { return m_instanceIdHasBeenSet; }
  template <typename InstanceIdT = Aws::String>
  void SetInstanceId(InstanceIdT&& value) {
    m_instanceIdHasBeenSet = true;
    m_instanceId = std::forward<InstanceIdT>(value);
  }
  template <typename InstanceIdT = Aws::String>
  ListEntitySecurityProfilesRequest& WithInstanceId(InstanceIdT&& value) {
    SetInstanceId(std::forward<InstanceIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> Only supported type is AI_AGENT. </p>
   */
  inline EntityType GetEntityType() const { return m_entityType; }
  inline bool EntityTypeHasBeenSet() const { return m_entityTypeHasBeenSet; }
  inline void SetEntityType(EntityType value) {
    m_entityTypeHasBeenSet = true;
    m_entityType = value;
  }
  inline ListEntitySecurityProfilesRequest& WithEntityType(EntityType value) {
    SetEntityType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> ARN of a Q in Connect AI Agent. </p>
   */
  inline const Aws::String& GetEntityArn() const { return m_entityArn; }
  inline bool EntityArnHasBeenSet() const { return m_entityArnHasBeenSet; }
  template <typename EntityArnT = Aws::String>
  void SetEntityArn(EntityArnT&& value) {
    m_entityArnHasBeenSet = true;
    m_entityArn = std::forward<EntityArnT>(value);
  }
  template <typename EntityArnT = Aws::String>
  ListEntitySecurityProfilesRequest& WithEntityArn(EntityArnT&& value) {
    SetEntityArn(std::forward<EntityArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The token for the next set of results. Use the value returned in the
   * previous response in the next request to retrieve the next set of results. </p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  ListEntitySecurityProfilesRequest& WithNextToken(NextTokenT&& value) {
    SetNextToken(std::forward<NextTokenT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The maximum number of results to return per page. The default MaxResult size
   * is 100. </p>
   */
  inline int GetMaxResults() const { return m_maxResults; }
  inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
  inline void SetMaxResults(int value) {
    m_maxResultsHasBeenSet = true;
    m_maxResults = value;
  }
  inline ListEntitySecurityProfilesRequest& WithMaxResults(int value) {
    SetMaxResults(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_instanceId;

  EntityType m_entityType{EntityType::NOT_SET};

  Aws::String m_entityArn;

  Aws::String m_nextToken;

  int m_maxResults{0};
  bool m_instanceIdHasBeenSet = false;
  bool m_entityTypeHasBeenSet = false;
  bool m_entityArnHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
  bool m_maxResultsHasBeenSet = false;
};

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
