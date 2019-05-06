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
#include <aws/serverlessrepo/ServerlessApplicationRepositoryRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/serverlessrepo/model/ApplicationPolicyStatement.h>
#include <utility>

namespace Aws
{
namespace ServerlessApplicationRepository
{
namespace Model
{

  /**
   */
  class AWS_SERVERLESSAPPLICATIONREPOSITORY_API PutApplicationPolicyRequest : public ServerlessApplicationRepositoryRequest
  {
  public:
    PutApplicationPolicyRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutApplicationPolicy"; }

    Aws::String SerializePayload() const override;


    /**
     * <p>The Amazon Resource Name (ARN) of the application.</p>
     */
    inline const Aws::String& GetApplicationId() const{ return m_applicationId; }

    /**
     * <p>The Amazon Resource Name (ARN) of the application.</p>
     */
    inline bool ApplicationIdHasBeenSet() const { return m_applicationIdHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the application.</p>
     */
    inline void SetApplicationId(const Aws::String& value) { m_applicationIdHasBeenSet = true; m_applicationId = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the application.</p>
     */
    inline void SetApplicationId(Aws::String&& value) { m_applicationIdHasBeenSet = true; m_applicationId = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the application.</p>
     */
    inline void SetApplicationId(const char* value) { m_applicationIdHasBeenSet = true; m_applicationId.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the application.</p>
     */
    inline PutApplicationPolicyRequest& WithApplicationId(const Aws::String& value) { SetApplicationId(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the application.</p>
     */
    inline PutApplicationPolicyRequest& WithApplicationId(Aws::String&& value) { SetApplicationId(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the application.</p>
     */
    inline PutApplicationPolicyRequest& WithApplicationId(const char* value) { SetApplicationId(value); return *this;}


    /**
     * <p>An array of policy statements applied to the application.</p>
     */
    inline const Aws::Vector<ApplicationPolicyStatement>& GetStatements() const{ return m_statements; }

    /**
     * <p>An array of policy statements applied to the application.</p>
     */
    inline bool StatementsHasBeenSet() const { return m_statementsHasBeenSet; }

    /**
     * <p>An array of policy statements applied to the application.</p>
     */
    inline void SetStatements(const Aws::Vector<ApplicationPolicyStatement>& value) { m_statementsHasBeenSet = true; m_statements = value; }

    /**
     * <p>An array of policy statements applied to the application.</p>
     */
    inline void SetStatements(Aws::Vector<ApplicationPolicyStatement>&& value) { m_statementsHasBeenSet = true; m_statements = std::move(value); }

    /**
     * <p>An array of policy statements applied to the application.</p>
     */
    inline PutApplicationPolicyRequest& WithStatements(const Aws::Vector<ApplicationPolicyStatement>& value) { SetStatements(value); return *this;}

    /**
     * <p>An array of policy statements applied to the application.</p>
     */
    inline PutApplicationPolicyRequest& WithStatements(Aws::Vector<ApplicationPolicyStatement>&& value) { SetStatements(std::move(value)); return *this;}

    /**
     * <p>An array of policy statements applied to the application.</p>
     */
    inline PutApplicationPolicyRequest& AddStatements(const ApplicationPolicyStatement& value) { m_statementsHasBeenSet = true; m_statements.push_back(value); return *this; }

    /**
     * <p>An array of policy statements applied to the application.</p>
     */
    inline PutApplicationPolicyRequest& AddStatements(ApplicationPolicyStatement&& value) { m_statementsHasBeenSet = true; m_statements.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_applicationId;
    bool m_applicationIdHasBeenSet;

    Aws::Vector<ApplicationPolicyStatement> m_statements;
    bool m_statementsHasBeenSet;
  };

} // namespace Model
} // namespace ServerlessApplicationRepository
} // namespace Aws
