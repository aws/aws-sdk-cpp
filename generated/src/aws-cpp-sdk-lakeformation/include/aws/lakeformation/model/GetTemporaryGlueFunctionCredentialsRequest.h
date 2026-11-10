/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lakeformation/LakeFormationRequest.h>
#include <aws/lakeformation/LakeFormation_EXPORTS.h>
#include <aws/lakeformation/model/AuditContext.h>

#include <utility>

namespace Aws {
namespace LakeFormation {
namespace Model {

/**
 */
class GetTemporaryGlueFunctionCredentialsRequest : public LakeFormationRequest {
 public:
  AWS_LAKEFORMATION_API GetTemporaryGlueFunctionCredentialsRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "GetTemporaryGlueFunctionCredentials"; }

  AWS_LAKEFORMATION_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The ARN of the user-defined function whose artifacts you want to download, in
   * the format
   * <code>arn:aws:glue:<i>region</i>:<i>account-id</i>:userDefinedFunction/<i>database-name</i>/<i>function-name</i>
   * </code>.</p>
   */
  inline const Aws::String& GetUserDefinedFunctionArn() const { return m_userDefinedFunctionArn; }
  inline bool UserDefinedFunctionArnHasBeenSet() const { return m_userDefinedFunctionArnHasBeenSet; }
  template <typename UserDefinedFunctionArnT = Aws::String>
  void SetUserDefinedFunctionArn(UserDefinedFunctionArnT&& value) {
    m_userDefinedFunctionArnHasBeenSet = true;
    m_userDefinedFunctionArn = std::forward<UserDefinedFunctionArnT>(value);
  }
  template <typename UserDefinedFunctionArnT = Aws::String>
  GetTemporaryGlueFunctionCredentialsRequest& WithUserDefinedFunctionArn(UserDefinedFunctionArnT&& value) {
    SetUserDefinedFunctionArn(std::forward<UserDefinedFunctionArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Context for the request, such as the column names and query ID, that Lake
   * Formation uses for auditing.</p>
   */
  inline const AuditContext& GetAuditContext() const { return m_auditContext; }
  inline bool AuditContextHasBeenSet() const { return m_auditContextHasBeenSet; }
  template <typename AuditContextT = AuditContext>
  void SetAuditContext(AuditContextT&& value) {
    m_auditContextHasBeenSet = true;
    m_auditContext = std::forward<AuditContextT>(value);
  }
  template <typename AuditContextT = AuditContext>
  GetTemporaryGlueFunctionCredentialsRequest& WithAuditContext(AuditContextT&& value) {
    SetAuditContext(std::forward<AuditContextT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_userDefinedFunctionArn;

  AuditContext m_auditContext;
  bool m_userDefinedFunctionArnHasBeenSet = false;
  bool m_auditContextHasBeenSet = false;
};

}  // namespace Model
}  // namespace LakeFormation
}  // namespace Aws
