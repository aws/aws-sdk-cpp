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
#include <aws/serverlessrepo/ServerlessApplicationRepository_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace ServerlessApplicationRepository
{
namespace Model
{

  /**
   * <p>Policy statement applied to the application.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/serverlessrepo-2017-09-08/ApplicationPolicyStatement">AWS
   * API Reference</a></p>
   */
  class AWS_SERVERLESSAPPLICATIONREPOSITORY_API ApplicationPolicyStatement
  {
  public:
    ApplicationPolicyStatement();
    ApplicationPolicyStatement(Aws::Utils::Json::JsonView jsonValue);
    ApplicationPolicyStatement& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>For the list of actions supported for this operation, see <a
     * href="https://docs.aws.amazon.com/serverlessrepo/latest/devguide/access-control-resource-based.html#application-permissions">Application
     * 
 Permissions</a>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetActions() const{ return m_actions; }

    /**
     * <p>For the list of actions supported for this operation, see <a
     * href="https://docs.aws.amazon.com/serverlessrepo/latest/devguide/access-control-resource-based.html#application-permissions">Application
     * 
 Permissions</a>.</p>
     */
    inline bool ActionsHasBeenSet() const { return m_actionsHasBeenSet; }

    /**
     * <p>For the list of actions supported for this operation, see <a
     * href="https://docs.aws.amazon.com/serverlessrepo/latest/devguide/access-control-resource-based.html#application-permissions">Application
     * 
 Permissions</a>.</p>
     */
    inline void SetActions(const Aws::Vector<Aws::String>& value) { m_actionsHasBeenSet = true; m_actions = value; }

    /**
     * <p>For the list of actions supported for this operation, see <a
     * href="https://docs.aws.amazon.com/serverlessrepo/latest/devguide/access-control-resource-based.html#application-permissions">Application
     * 
 Permissions</a>.</p>
     */
    inline void SetActions(Aws::Vector<Aws::String>&& value) { m_actionsHasBeenSet = true; m_actions = std::move(value); }

    /**
     * <p>For the list of actions supported for this operation, see <a
     * href="https://docs.aws.amazon.com/serverlessrepo/latest/devguide/access-control-resource-based.html#application-permissions">Application
     * 
 Permissions</a>.</p>
     */
    inline ApplicationPolicyStatement& WithActions(const Aws::Vector<Aws::String>& value) { SetActions(value); return *this;}

    /**
     * <p>For the list of actions supported for this operation, see <a
     * href="https://docs.aws.amazon.com/serverlessrepo/latest/devguide/access-control-resource-based.html#application-permissions">Application
     * 
 Permissions</a>.</p>
     */
    inline ApplicationPolicyStatement& WithActions(Aws::Vector<Aws::String>&& value) { SetActions(std::move(value)); return *this;}

    /**
     * <p>For the list of actions supported for this operation, see <a
     * href="https://docs.aws.amazon.com/serverlessrepo/latest/devguide/access-control-resource-based.html#application-permissions">Application
     * 
 Permissions</a>.</p>
     */
    inline ApplicationPolicyStatement& AddActions(const Aws::String& value) { m_actionsHasBeenSet = true; m_actions.push_back(value); return *this; }

    /**
     * <p>For the list of actions supported for this operation, see <a
     * href="https://docs.aws.amazon.com/serverlessrepo/latest/devguide/access-control-resource-based.html#application-permissions">Application
     * 
 Permissions</a>.</p>
     */
    inline ApplicationPolicyStatement& AddActions(Aws::String&& value) { m_actionsHasBeenSet = true; m_actions.push_back(std::move(value)); return *this; }

    /**
     * <p>For the list of actions supported for this operation, see <a
     * href="https://docs.aws.amazon.com/serverlessrepo/latest/devguide/access-control-resource-based.html#application-permissions">Application
     * 
 Permissions</a>.</p>
     */
    inline ApplicationPolicyStatement& AddActions(const char* value) { m_actionsHasBeenSet = true; m_actions.push_back(value); return *this; }


    /**
     * <p>An array of AWS account IDs, or * to make the application public.</p>
     */
    inline const Aws::Vector<Aws::String>& GetPrincipals() const{ return m_principals; }

    /**
     * <p>An array of AWS account IDs, or * to make the application public.</p>
     */
    inline bool PrincipalsHasBeenSet() const { return m_principalsHasBeenSet; }

    /**
     * <p>An array of AWS account IDs, or * to make the application public.</p>
     */
    inline void SetPrincipals(const Aws::Vector<Aws::String>& value) { m_principalsHasBeenSet = true; m_principals = value; }

    /**
     * <p>An array of AWS account IDs, or * to make the application public.</p>
     */
    inline void SetPrincipals(Aws::Vector<Aws::String>&& value) { m_principalsHasBeenSet = true; m_principals = std::move(value); }

    /**
     * <p>An array of AWS account IDs, or * to make the application public.</p>
     */
    inline ApplicationPolicyStatement& WithPrincipals(const Aws::Vector<Aws::String>& value) { SetPrincipals(value); return *this;}

    /**
     * <p>An array of AWS account IDs, or * to make the application public.</p>
     */
    inline ApplicationPolicyStatement& WithPrincipals(Aws::Vector<Aws::String>&& value) { SetPrincipals(std::move(value)); return *this;}

    /**
     * <p>An array of AWS account IDs, or * to make the application public.</p>
     */
    inline ApplicationPolicyStatement& AddPrincipals(const Aws::String& value) { m_principalsHasBeenSet = true; m_principals.push_back(value); return *this; }

    /**
     * <p>An array of AWS account IDs, or * to make the application public.</p>
     */
    inline ApplicationPolicyStatement& AddPrincipals(Aws::String&& value) { m_principalsHasBeenSet = true; m_principals.push_back(std::move(value)); return *this; }

    /**
     * <p>An array of AWS account IDs, or * to make the application public.</p>
     */
    inline ApplicationPolicyStatement& AddPrincipals(const char* value) { m_principalsHasBeenSet = true; m_principals.push_back(value); return *this; }


    /**
     * <p>A unique ID for the statement.</p>
     */
    inline const Aws::String& GetStatementId() const{ return m_statementId; }

    /**
     * <p>A unique ID for the statement.</p>
     */
    inline bool StatementIdHasBeenSet() const { return m_statementIdHasBeenSet; }

    /**
     * <p>A unique ID for the statement.</p>
     */
    inline void SetStatementId(const Aws::String& value) { m_statementIdHasBeenSet = true; m_statementId = value; }

    /**
     * <p>A unique ID for the statement.</p>
     */
    inline void SetStatementId(Aws::String&& value) { m_statementIdHasBeenSet = true; m_statementId = std::move(value); }

    /**
     * <p>A unique ID for the statement.</p>
     */
    inline void SetStatementId(const char* value) { m_statementIdHasBeenSet = true; m_statementId.assign(value); }

    /**
     * <p>A unique ID for the statement.</p>
     */
    inline ApplicationPolicyStatement& WithStatementId(const Aws::String& value) { SetStatementId(value); return *this;}

    /**
     * <p>A unique ID for the statement.</p>
     */
    inline ApplicationPolicyStatement& WithStatementId(Aws::String&& value) { SetStatementId(std::move(value)); return *this;}

    /**
     * <p>A unique ID for the statement.</p>
     */
    inline ApplicationPolicyStatement& WithStatementId(const char* value) { SetStatementId(value); return *this;}

  private:

    Aws::Vector<Aws::String> m_actions;
    bool m_actionsHasBeenSet;

    Aws::Vector<Aws::String> m_principals;
    bool m_principalsHasBeenSet;

    Aws::String m_statementId;
    bool m_statementIdHasBeenSet;
  };

} // namespace Model
} // namespace ServerlessApplicationRepository
} // namespace Aws
