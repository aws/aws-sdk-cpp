/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/lambda/Lambda_EXPORTS.h>
#include <aws/lambda/LambdaRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace Lambda
{
namespace Model
{

  /**
   */
  class AWS_LAMBDA_API AddLayerVersionPermissionRequest : public LambdaRequest
  {
  public:
    AddLayerVersionPermissionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "AddLayerVersionPermission"; }

    Aws::String SerializePayload() const override;

    void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p>The name or Amazon Resource Name (ARN) of the layer.</p>
     */
    inline const Aws::String& GetLayerName() const{ return m_layerName; }

    /**
     * <p>The name or Amazon Resource Name (ARN) of the layer.</p>
     */
    inline bool LayerNameHasBeenSet() const { return m_layerNameHasBeenSet; }

    /**
     * <p>The name or Amazon Resource Name (ARN) of the layer.</p>
     */
    inline void SetLayerName(const Aws::String& value) { m_layerNameHasBeenSet = true; m_layerName = value; }

    /**
     * <p>The name or Amazon Resource Name (ARN) of the layer.</p>
     */
    inline void SetLayerName(Aws::String&& value) { m_layerNameHasBeenSet = true; m_layerName = std::move(value); }

    /**
     * <p>The name or Amazon Resource Name (ARN) of the layer.</p>
     */
    inline void SetLayerName(const char* value) { m_layerNameHasBeenSet = true; m_layerName.assign(value); }

    /**
     * <p>The name or Amazon Resource Name (ARN) of the layer.</p>
     */
    inline AddLayerVersionPermissionRequest& WithLayerName(const Aws::String& value) { SetLayerName(value); return *this;}

    /**
     * <p>The name or Amazon Resource Name (ARN) of the layer.</p>
     */
    inline AddLayerVersionPermissionRequest& WithLayerName(Aws::String&& value) { SetLayerName(std::move(value)); return *this;}

    /**
     * <p>The name or Amazon Resource Name (ARN) of the layer.</p>
     */
    inline AddLayerVersionPermissionRequest& WithLayerName(const char* value) { SetLayerName(value); return *this;}


    /**
     * <p>The version number.</p>
     */
    inline long long GetVersionNumber() const{ return m_versionNumber; }

    /**
     * <p>The version number.</p>
     */
    inline bool VersionNumberHasBeenSet() const { return m_versionNumberHasBeenSet; }

    /**
     * <p>The version number.</p>
     */
    inline void SetVersionNumber(long long value) { m_versionNumberHasBeenSet = true; m_versionNumber = value; }

    /**
     * <p>The version number.</p>
     */
    inline AddLayerVersionPermissionRequest& WithVersionNumber(long long value) { SetVersionNumber(value); return *this;}


    /**
     * <p>An identifier that distinguishes the policy from others on the same layer
     * version.</p>
     */
    inline const Aws::String& GetStatementId() const{ return m_statementId; }

    /**
     * <p>An identifier that distinguishes the policy from others on the same layer
     * version.</p>
     */
    inline bool StatementIdHasBeenSet() const { return m_statementIdHasBeenSet; }

    /**
     * <p>An identifier that distinguishes the policy from others on the same layer
     * version.</p>
     */
    inline void SetStatementId(const Aws::String& value) { m_statementIdHasBeenSet = true; m_statementId = value; }

    /**
     * <p>An identifier that distinguishes the policy from others on the same layer
     * version.</p>
     */
    inline void SetStatementId(Aws::String&& value) { m_statementIdHasBeenSet = true; m_statementId = std::move(value); }

    /**
     * <p>An identifier that distinguishes the policy from others on the same layer
     * version.</p>
     */
    inline void SetStatementId(const char* value) { m_statementIdHasBeenSet = true; m_statementId.assign(value); }

    /**
     * <p>An identifier that distinguishes the policy from others on the same layer
     * version.</p>
     */
    inline AddLayerVersionPermissionRequest& WithStatementId(const Aws::String& value) { SetStatementId(value); return *this;}

    /**
     * <p>An identifier that distinguishes the policy from others on the same layer
     * version.</p>
     */
    inline AddLayerVersionPermissionRequest& WithStatementId(Aws::String&& value) { SetStatementId(std::move(value)); return *this;}

    /**
     * <p>An identifier that distinguishes the policy from others on the same layer
     * version.</p>
     */
    inline AddLayerVersionPermissionRequest& WithStatementId(const char* value) { SetStatementId(value); return *this;}


    /**
     * <p>The API action that grants access to the layer. For example,
     * <code>lambda:GetLayerVersion</code>.</p>
     */
    inline const Aws::String& GetAction() const{ return m_action; }

    /**
     * <p>The API action that grants access to the layer. For example,
     * <code>lambda:GetLayerVersion</code>.</p>
     */
    inline bool ActionHasBeenSet() const { return m_actionHasBeenSet; }

    /**
     * <p>The API action that grants access to the layer. For example,
     * <code>lambda:GetLayerVersion</code>.</p>
     */
    inline void SetAction(const Aws::String& value) { m_actionHasBeenSet = true; m_action = value; }

    /**
     * <p>The API action that grants access to the layer. For example,
     * <code>lambda:GetLayerVersion</code>.</p>
     */
    inline void SetAction(Aws::String&& value) { m_actionHasBeenSet = true; m_action = std::move(value); }

    /**
     * <p>The API action that grants access to the layer. For example,
     * <code>lambda:GetLayerVersion</code>.</p>
     */
    inline void SetAction(const char* value) { m_actionHasBeenSet = true; m_action.assign(value); }

    /**
     * <p>The API action that grants access to the layer. For example,
     * <code>lambda:GetLayerVersion</code>.</p>
     */
    inline AddLayerVersionPermissionRequest& WithAction(const Aws::String& value) { SetAction(value); return *this;}

    /**
     * <p>The API action that grants access to the layer. For example,
     * <code>lambda:GetLayerVersion</code>.</p>
     */
    inline AddLayerVersionPermissionRequest& WithAction(Aws::String&& value) { SetAction(std::move(value)); return *this;}

    /**
     * <p>The API action that grants access to the layer. For example,
     * <code>lambda:GetLayerVersion</code>.</p>
     */
    inline AddLayerVersionPermissionRequest& WithAction(const char* value) { SetAction(value); return *this;}


    /**
     * <p>An account ID, or <code>*</code> to grant permission to all AWS accounts.</p>
     */
    inline const Aws::String& GetPrincipal() const{ return m_principal; }

    /**
     * <p>An account ID, or <code>*</code> to grant permission to all AWS accounts.</p>
     */
    inline bool PrincipalHasBeenSet() const { return m_principalHasBeenSet; }

    /**
     * <p>An account ID, or <code>*</code> to grant permission to all AWS accounts.</p>
     */
    inline void SetPrincipal(const Aws::String& value) { m_principalHasBeenSet = true; m_principal = value; }

    /**
     * <p>An account ID, or <code>*</code> to grant permission to all AWS accounts.</p>
     */
    inline void SetPrincipal(Aws::String&& value) { m_principalHasBeenSet = true; m_principal = std::move(value); }

    /**
     * <p>An account ID, or <code>*</code> to grant permission to all AWS accounts.</p>
     */
    inline void SetPrincipal(const char* value) { m_principalHasBeenSet = true; m_principal.assign(value); }

    /**
     * <p>An account ID, or <code>*</code> to grant permission to all AWS accounts.</p>
     */
    inline AddLayerVersionPermissionRequest& WithPrincipal(const Aws::String& value) { SetPrincipal(value); return *this;}

    /**
     * <p>An account ID, or <code>*</code> to grant permission to all AWS accounts.</p>
     */
    inline AddLayerVersionPermissionRequest& WithPrincipal(Aws::String&& value) { SetPrincipal(std::move(value)); return *this;}

    /**
     * <p>An account ID, or <code>*</code> to grant permission to all AWS accounts.</p>
     */
    inline AddLayerVersionPermissionRequest& WithPrincipal(const char* value) { SetPrincipal(value); return *this;}


    /**
     * <p>With the principal set to <code>*</code>, grant permission to all accounts in
     * the specified organization.</p>
     */
    inline const Aws::String& GetOrganizationId() const{ return m_organizationId; }

    /**
     * <p>With the principal set to <code>*</code>, grant permission to all accounts in
     * the specified organization.</p>
     */
    inline bool OrganizationIdHasBeenSet() const { return m_organizationIdHasBeenSet; }

    /**
     * <p>With the principal set to <code>*</code>, grant permission to all accounts in
     * the specified organization.</p>
     */
    inline void SetOrganizationId(const Aws::String& value) { m_organizationIdHasBeenSet = true; m_organizationId = value; }

    /**
     * <p>With the principal set to <code>*</code>, grant permission to all accounts in
     * the specified organization.</p>
     */
    inline void SetOrganizationId(Aws::String&& value) { m_organizationIdHasBeenSet = true; m_organizationId = std::move(value); }

    /**
     * <p>With the principal set to <code>*</code>, grant permission to all accounts in
     * the specified organization.</p>
     */
    inline void SetOrganizationId(const char* value) { m_organizationIdHasBeenSet = true; m_organizationId.assign(value); }

    /**
     * <p>With the principal set to <code>*</code>, grant permission to all accounts in
     * the specified organization.</p>
     */
    inline AddLayerVersionPermissionRequest& WithOrganizationId(const Aws::String& value) { SetOrganizationId(value); return *this;}

    /**
     * <p>With the principal set to <code>*</code>, grant permission to all accounts in
     * the specified organization.</p>
     */
    inline AddLayerVersionPermissionRequest& WithOrganizationId(Aws::String&& value) { SetOrganizationId(std::move(value)); return *this;}

    /**
     * <p>With the principal set to <code>*</code>, grant permission to all accounts in
     * the specified organization.</p>
     */
    inline AddLayerVersionPermissionRequest& WithOrganizationId(const char* value) { SetOrganizationId(value); return *this;}


    /**
     * <p>Only update the policy if the revision ID matches the ID specified. Use this
     * option to avoid modifying a policy that has changed since you last read it.</p>
     */
    inline const Aws::String& GetRevisionId() const{ return m_revisionId; }

    /**
     * <p>Only update the policy if the revision ID matches the ID specified. Use this
     * option to avoid modifying a policy that has changed since you last read it.</p>
     */
    inline bool RevisionIdHasBeenSet() const { return m_revisionIdHasBeenSet; }

    /**
     * <p>Only update the policy if the revision ID matches the ID specified. Use this
     * option to avoid modifying a policy that has changed since you last read it.</p>
     */
    inline void SetRevisionId(const Aws::String& value) { m_revisionIdHasBeenSet = true; m_revisionId = value; }

    /**
     * <p>Only update the policy if the revision ID matches the ID specified. Use this
     * option to avoid modifying a policy that has changed since you last read it.</p>
     */
    inline void SetRevisionId(Aws::String&& value) { m_revisionIdHasBeenSet = true; m_revisionId = std::move(value); }

    /**
     * <p>Only update the policy if the revision ID matches the ID specified. Use this
     * option to avoid modifying a policy that has changed since you last read it.</p>
     */
    inline void SetRevisionId(const char* value) { m_revisionIdHasBeenSet = true; m_revisionId.assign(value); }

    /**
     * <p>Only update the policy if the revision ID matches the ID specified. Use this
     * option to avoid modifying a policy that has changed since you last read it.</p>
     */
    inline AddLayerVersionPermissionRequest& WithRevisionId(const Aws::String& value) { SetRevisionId(value); return *this;}

    /**
     * <p>Only update the policy if the revision ID matches the ID specified. Use this
     * option to avoid modifying a policy that has changed since you last read it.</p>
     */
    inline AddLayerVersionPermissionRequest& WithRevisionId(Aws::String&& value) { SetRevisionId(std::move(value)); return *this;}

    /**
     * <p>Only update the policy if the revision ID matches the ID specified. Use this
     * option to avoid modifying a policy that has changed since you last read it.</p>
     */
    inline AddLayerVersionPermissionRequest& WithRevisionId(const char* value) { SetRevisionId(value); return *this;}

  private:

    Aws::String m_layerName;
    bool m_layerNameHasBeenSet;

    long long m_versionNumber;
    bool m_versionNumberHasBeenSet;

    Aws::String m_statementId;
    bool m_statementIdHasBeenSet;

    Aws::String m_action;
    bool m_actionHasBeenSet;

    Aws::String m_principal;
    bool m_principalHasBeenSet;

    Aws::String m_organizationId;
    bool m_organizationIdHasBeenSet;

    Aws::String m_revisionId;
    bool m_revisionIdHasBeenSet;
  };

} // namespace Model
} // namespace Lambda
} // namespace Aws
