﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanroomsml/CleanRoomsMLRequest.h>
#include <aws/cleanroomsml/CleanRoomsML_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace Http {
class URI;
}  // namespace Http
namespace CleanRoomsML {
namespace Model {

/**
 */
class CancelTrainedModelRequest : public CleanRoomsMLRequest {
 public:
  AWS_CLEANROOMSML_API CancelTrainedModelRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "CancelTrainedModel"; }

  AWS_CLEANROOMSML_API Aws::String SerializePayload() const override;

  AWS_CLEANROOMSML_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;

  ///@{
  /**
   * <p>The membership ID of the trained model job that you want to cancel.</p>
   */
  inline const Aws::String& GetMembershipIdentifier() const { return m_membershipIdentifier; }
  inline bool MembershipIdentifierHasBeenSet() const { return m_membershipIdentifierHasBeenSet; }
  template <typename MembershipIdentifierT = Aws::String>
  void SetMembershipIdentifier(MembershipIdentifierT&& value) {
    m_membershipIdentifierHasBeenSet = true;
    m_membershipIdentifier = std::forward<MembershipIdentifierT>(value);
  }
  template <typename MembershipIdentifierT = Aws::String>
  CancelTrainedModelRequest& WithMembershipIdentifier(MembershipIdentifierT&& value) {
    SetMembershipIdentifier(std::forward<MembershipIdentifierT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the trained model job that you want to
   * cancel.</p>
   */
  inline const Aws::String& GetTrainedModelArn() const { return m_trainedModelArn; }
  inline bool TrainedModelArnHasBeenSet() const { return m_trainedModelArnHasBeenSet; }
  template <typename TrainedModelArnT = Aws::String>
  void SetTrainedModelArn(TrainedModelArnT&& value) {
    m_trainedModelArnHasBeenSet = true;
    m_trainedModelArn = std::forward<TrainedModelArnT>(value);
  }
  template <typename TrainedModelArnT = Aws::String>
  CancelTrainedModelRequest& WithTrainedModelArn(TrainedModelArnT&& value) {
    SetTrainedModelArn(std::forward<TrainedModelArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The version identifier of the trained model to cancel. This parameter allows
   * you to specify which version of the trained model you want to cancel when
   * multiple versions exist.</p> <p>If <code>versionIdentifier</code> is not
   * specified, the base model will be cancelled.</p>
   */
  inline const Aws::String& GetVersionIdentifier() const { return m_versionIdentifier; }
  inline bool VersionIdentifierHasBeenSet() const { return m_versionIdentifierHasBeenSet; }
  template <typename VersionIdentifierT = Aws::String>
  void SetVersionIdentifier(VersionIdentifierT&& value) {
    m_versionIdentifierHasBeenSet = true;
    m_versionIdentifier = std::forward<VersionIdentifierT>(value);
  }
  template <typename VersionIdentifierT = Aws::String>
  CancelTrainedModelRequest& WithVersionIdentifier(VersionIdentifierT&& value) {
    SetVersionIdentifier(std::forward<VersionIdentifierT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_membershipIdentifier;
  bool m_membershipIdentifierHasBeenSet = false;

  Aws::String m_trainedModelArn;
  bool m_trainedModelArnHasBeenSet = false;

  Aws::String m_versionIdentifier;
  bool m_versionIdentifierHasBeenSet = false;
};

}  // namespace Model
}  // namespace CleanRoomsML
}  // namespace Aws
