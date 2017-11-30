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
#include <aws/serverlessrepo/model/ParameterValue.h>
#include <utility>

namespace Aws
{
namespace ServerlessApplicationRepository
{
namespace Model
{

  /**
   * Create application ChangeSet request<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/serverlessrepo-2017-09-08/CreateCloudFormationChangeSetRequest">AWS
   * API Reference</a></p>
   */
  class AWS_SERVERLESSAPPLICATIONREPOSITORY_API CreateCloudFormationChangeSetRequest : public ServerlessApplicationRepositoryRequest
  {
  public:
    CreateCloudFormationChangeSetRequest();
    
    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateCloudFormationChangeSet"; }

    Aws::String SerializePayload() const override;


    /**
     * The id of the application to create the ChangeSet for
     */
    inline const Aws::String& GetApplicationId() const{ return m_applicationId; }

    /**
     * The id of the application to create the ChangeSet for
     */
    inline void SetApplicationId(const Aws::String& value) { m_applicationIdHasBeenSet = true; m_applicationId = value; }

    /**
     * The id of the application to create the ChangeSet for
     */
    inline void SetApplicationId(Aws::String&& value) { m_applicationIdHasBeenSet = true; m_applicationId = std::move(value); }

    /**
     * The id of the application to create the ChangeSet for
     */
    inline void SetApplicationId(const char* value) { m_applicationIdHasBeenSet = true; m_applicationId.assign(value); }

    /**
     * The id of the application to create the ChangeSet for
     */
    inline CreateCloudFormationChangeSetRequest& WithApplicationId(const Aws::String& value) { SetApplicationId(value); return *this;}

    /**
     * The id of the application to create the ChangeSet for
     */
    inline CreateCloudFormationChangeSetRequest& WithApplicationId(Aws::String&& value) { SetApplicationId(std::move(value)); return *this;}

    /**
     * The id of the application to create the ChangeSet for
     */
    inline CreateCloudFormationChangeSetRequest& WithApplicationId(const char* value) { SetApplicationId(value); return *this;}


    /**
     * A list of parameter values for the parameters of the application.
     */
    inline const Aws::Vector<ParameterValue>& GetParameterOverrides() const{ return m_parameterOverrides; }

    /**
     * A list of parameter values for the parameters of the application.
     */
    inline void SetParameterOverrides(const Aws::Vector<ParameterValue>& value) { m_parameterOverridesHasBeenSet = true; m_parameterOverrides = value; }

    /**
     * A list of parameter values for the parameters of the application.
     */
    inline void SetParameterOverrides(Aws::Vector<ParameterValue>&& value) { m_parameterOverridesHasBeenSet = true; m_parameterOverrides = std::move(value); }

    /**
     * A list of parameter values for the parameters of the application.
     */
    inline CreateCloudFormationChangeSetRequest& WithParameterOverrides(const Aws::Vector<ParameterValue>& value) { SetParameterOverrides(value); return *this;}

    /**
     * A list of parameter values for the parameters of the application.
     */
    inline CreateCloudFormationChangeSetRequest& WithParameterOverrides(Aws::Vector<ParameterValue>&& value) { SetParameterOverrides(std::move(value)); return *this;}

    /**
     * A list of parameter values for the parameters of the application.
     */
    inline CreateCloudFormationChangeSetRequest& AddParameterOverrides(const ParameterValue& value) { m_parameterOverridesHasBeenSet = true; m_parameterOverrides.push_back(value); return *this; }

    /**
     * A list of parameter values for the parameters of the application.
     */
    inline CreateCloudFormationChangeSetRequest& AddParameterOverrides(ParameterValue&& value) { m_parameterOverridesHasBeenSet = true; m_parameterOverrides.push_back(std::move(value)); return *this; }


    /**
     * The semantic version of the application:\n\n https://semver.org/
     */
    inline const Aws::String& GetSemanticVersion() const{ return m_semanticVersion; }

    /**
     * The semantic version of the application:\n\n https://semver.org/
     */
    inline void SetSemanticVersion(const Aws::String& value) { m_semanticVersionHasBeenSet = true; m_semanticVersion = value; }

    /**
     * The semantic version of the application:\n\n https://semver.org/
     */
    inline void SetSemanticVersion(Aws::String&& value) { m_semanticVersionHasBeenSet = true; m_semanticVersion = std::move(value); }

    /**
     * The semantic version of the application:\n\n https://semver.org/
     */
    inline void SetSemanticVersion(const char* value) { m_semanticVersionHasBeenSet = true; m_semanticVersion.assign(value); }

    /**
     * The semantic version of the application:\n\n https://semver.org/
     */
    inline CreateCloudFormationChangeSetRequest& WithSemanticVersion(const Aws::String& value) { SetSemanticVersion(value); return *this;}

    /**
     * The semantic version of the application:\n\n https://semver.org/
     */
    inline CreateCloudFormationChangeSetRequest& WithSemanticVersion(Aws::String&& value) { SetSemanticVersion(std::move(value)); return *this;}

    /**
     * The semantic version of the application:\n\n https://semver.org/
     */
    inline CreateCloudFormationChangeSetRequest& WithSemanticVersion(const char* value) { SetSemanticVersion(value); return *this;}


    /**
     * The name or the unique ID of the stack for which you are creating a change set.
     * AWS CloudFormation generates\n the change set by comparing this stack's
     * information with the information that you submit, such as a modified\n template
     * or different parameter input values. \nConstraints: Minimum length of
     * 1.\nPattern:
     * ([a-zA-Z][-a-zA-Z0-9]*)|(arn:\b(aws|aws-us-gov|aws-cn)\b:[-a-zA-Z0-9:/._+]*)
     */
    inline const Aws::String& GetStackName() const{ return m_stackName; }

    /**
     * The name or the unique ID of the stack for which you are creating a change set.
     * AWS CloudFormation generates\n the change set by comparing this stack's
     * information with the information that you submit, such as a modified\n template
     * or different parameter input values. \nConstraints: Minimum length of
     * 1.\nPattern:
     * ([a-zA-Z][-a-zA-Z0-9]*)|(arn:\b(aws|aws-us-gov|aws-cn)\b:[-a-zA-Z0-9:/._+]*)
     */
    inline void SetStackName(const Aws::String& value) { m_stackNameHasBeenSet = true; m_stackName = value; }

    /**
     * The name or the unique ID of the stack for which you are creating a change set.
     * AWS CloudFormation generates\n the change set by comparing this stack's
     * information with the information that you submit, such as a modified\n template
     * or different parameter input values. \nConstraints: Minimum length of
     * 1.\nPattern:
     * ([a-zA-Z][-a-zA-Z0-9]*)|(arn:\b(aws|aws-us-gov|aws-cn)\b:[-a-zA-Z0-9:/._+]*)
     */
    inline void SetStackName(Aws::String&& value) { m_stackNameHasBeenSet = true; m_stackName = std::move(value); }

    /**
     * The name or the unique ID of the stack for which you are creating a change set.
     * AWS CloudFormation generates\n the change set by comparing this stack's
     * information with the information that you submit, such as a modified\n template
     * or different parameter input values. \nConstraints: Minimum length of
     * 1.\nPattern:
     * ([a-zA-Z][-a-zA-Z0-9]*)|(arn:\b(aws|aws-us-gov|aws-cn)\b:[-a-zA-Z0-9:/._+]*)
     */
    inline void SetStackName(const char* value) { m_stackNameHasBeenSet = true; m_stackName.assign(value); }

    /**
     * The name or the unique ID of the stack for which you are creating a change set.
     * AWS CloudFormation generates\n the change set by comparing this stack's
     * information with the information that you submit, such as a modified\n template
     * or different parameter input values. \nConstraints: Minimum length of
     * 1.\nPattern:
     * ([a-zA-Z][-a-zA-Z0-9]*)|(arn:\b(aws|aws-us-gov|aws-cn)\b:[-a-zA-Z0-9:/._+]*)
     */
    inline CreateCloudFormationChangeSetRequest& WithStackName(const Aws::String& value) { SetStackName(value); return *this;}

    /**
     * The name or the unique ID of the stack for which you are creating a change set.
     * AWS CloudFormation generates\n the change set by comparing this stack's
     * information with the information that you submit, such as a modified\n template
     * or different parameter input values. \nConstraints: Minimum length of
     * 1.\nPattern:
     * ([a-zA-Z][-a-zA-Z0-9]*)|(arn:\b(aws|aws-us-gov|aws-cn)\b:[-a-zA-Z0-9:/._+]*)
     */
    inline CreateCloudFormationChangeSetRequest& WithStackName(Aws::String&& value) { SetStackName(std::move(value)); return *this;}

    /**
     * The name or the unique ID of the stack for which you are creating a change set.
     * AWS CloudFormation generates\n the change set by comparing this stack's
     * information with the information that you submit, such as a modified\n template
     * or different parameter input values. \nConstraints: Minimum length of
     * 1.\nPattern:
     * ([a-zA-Z][-a-zA-Z0-9]*)|(arn:\b(aws|aws-us-gov|aws-cn)\b:[-a-zA-Z0-9:/._+]*)
     */
    inline CreateCloudFormationChangeSetRequest& WithStackName(const char* value) { SetStackName(value); return *this;}

  private:

    Aws::String m_applicationId;
    bool m_applicationIdHasBeenSet;

    Aws::Vector<ParameterValue> m_parameterOverrides;
    bool m_parameterOverridesHasBeenSet;

    Aws::String m_semanticVersion;
    bool m_semanticVersionHasBeenSet;

    Aws::String m_stackName;
    bool m_stackNameHasBeenSet;
  };

} // namespace Model
} // namespace ServerlessApplicationRepository
} // namespace Aws
