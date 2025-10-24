﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/aiops/AIOpsRequest.h>
#include <aws/aiops/AIOps_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace AIOps {
namespace Model {

/**
 */
class DeleteInvestigationGroupPolicyRequest : public AIOpsRequest {
 public:
  AWS_AIOPS_API DeleteInvestigationGroupPolicyRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "DeleteInvestigationGroupPolicy"; }

  AWS_AIOPS_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>Specify either the name or the ARN of the investigation group that you want
   * to remove the policy from.</p>
   */
  inline const Aws::String& GetIdentifier() const { return m_identifier; }
  inline bool IdentifierHasBeenSet() const { return m_identifierHasBeenSet; }
  template <typename IdentifierT = Aws::String>
  void SetIdentifier(IdentifierT&& value) {
    m_identifierHasBeenSet = true;
    m_identifier = std::forward<IdentifierT>(value);
  }
  template <typename IdentifierT = Aws::String>
  DeleteInvestigationGroupPolicyRequest& WithIdentifier(IdentifierT&& value) {
    SetIdentifier(std::forward<IdentifierT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_identifier;
  bool m_identifierHasBeenSet = false;
};

}  // namespace Model
}  // namespace AIOps
}  // namespace Aws
