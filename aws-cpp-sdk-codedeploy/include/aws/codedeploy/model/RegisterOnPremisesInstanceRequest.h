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
#include <aws/codedeploy/CodeDeploy_EXPORTS.h>
#include <aws/codedeploy/CodeDeployRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace CodeDeploy
{
namespace Model
{

  /**
   * <p>Represents the input of the register on-premises instance
   * operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codedeploy-2014-10-06/RegisterOnPremisesInstanceInput">AWS
   * API Reference</a></p>
   */
  class AWS_CODEDEPLOY_API RegisterOnPremisesInstanceRequest : public CodeDeployRequest
  {
  public:
    RegisterOnPremisesInstanceRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "RegisterOnPremisesInstance"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the on-premises instance to register.</p>
     */
    inline const Aws::String& GetInstanceName() const{ return m_instanceName; }

    /**
     * <p>The name of the on-premises instance to register.</p>
     */
    inline bool InstanceNameHasBeenSet() const { return m_instanceNameHasBeenSet; }

    /**
     * <p>The name of the on-premises instance to register.</p>
     */
    inline void SetInstanceName(const Aws::String& value) { m_instanceNameHasBeenSet = true; m_instanceName = value; }

    /**
     * <p>The name of the on-premises instance to register.</p>
     */
    inline void SetInstanceName(Aws::String&& value) { m_instanceNameHasBeenSet = true; m_instanceName = std::move(value); }

    /**
     * <p>The name of the on-premises instance to register.</p>
     */
    inline void SetInstanceName(const char* value) { m_instanceNameHasBeenSet = true; m_instanceName.assign(value); }

    /**
     * <p>The name of the on-premises instance to register.</p>
     */
    inline RegisterOnPremisesInstanceRequest& WithInstanceName(const Aws::String& value) { SetInstanceName(value); return *this;}

    /**
     * <p>The name of the on-premises instance to register.</p>
     */
    inline RegisterOnPremisesInstanceRequest& WithInstanceName(Aws::String&& value) { SetInstanceName(std::move(value)); return *this;}

    /**
     * <p>The name of the on-premises instance to register.</p>
     */
    inline RegisterOnPremisesInstanceRequest& WithInstanceName(const char* value) { SetInstanceName(value); return *this;}


    /**
     * <p>The ARN of the IAM session to associate with the on-premises instance.</p>
     */
    inline const Aws::String& GetIamSessionArn() const{ return m_iamSessionArn; }

    /**
     * <p>The ARN of the IAM session to associate with the on-premises instance.</p>
     */
    inline bool IamSessionArnHasBeenSet() const { return m_iamSessionArnHasBeenSet; }

    /**
     * <p>The ARN of the IAM session to associate with the on-premises instance.</p>
     */
    inline void SetIamSessionArn(const Aws::String& value) { m_iamSessionArnHasBeenSet = true; m_iamSessionArn = value; }

    /**
     * <p>The ARN of the IAM session to associate with the on-premises instance.</p>
     */
    inline void SetIamSessionArn(Aws::String&& value) { m_iamSessionArnHasBeenSet = true; m_iamSessionArn = std::move(value); }

    /**
     * <p>The ARN of the IAM session to associate with the on-premises instance.</p>
     */
    inline void SetIamSessionArn(const char* value) { m_iamSessionArnHasBeenSet = true; m_iamSessionArn.assign(value); }

    /**
     * <p>The ARN of the IAM session to associate with the on-premises instance.</p>
     */
    inline RegisterOnPremisesInstanceRequest& WithIamSessionArn(const Aws::String& value) { SetIamSessionArn(value); return *this;}

    /**
     * <p>The ARN of the IAM session to associate with the on-premises instance.</p>
     */
    inline RegisterOnPremisesInstanceRequest& WithIamSessionArn(Aws::String&& value) { SetIamSessionArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the IAM session to associate with the on-premises instance.</p>
     */
    inline RegisterOnPremisesInstanceRequest& WithIamSessionArn(const char* value) { SetIamSessionArn(value); return *this;}


    /**
     * <p>The ARN of the IAM user to associate with the on-premises instance.</p>
     */
    inline const Aws::String& GetIamUserArn() const{ return m_iamUserArn; }

    /**
     * <p>The ARN of the IAM user to associate with the on-premises instance.</p>
     */
    inline bool IamUserArnHasBeenSet() const { return m_iamUserArnHasBeenSet; }

    /**
     * <p>The ARN of the IAM user to associate with the on-premises instance.</p>
     */
    inline void SetIamUserArn(const Aws::String& value) { m_iamUserArnHasBeenSet = true; m_iamUserArn = value; }

    /**
     * <p>The ARN of the IAM user to associate with the on-premises instance.</p>
     */
    inline void SetIamUserArn(Aws::String&& value) { m_iamUserArnHasBeenSet = true; m_iamUserArn = std::move(value); }

    /**
     * <p>The ARN of the IAM user to associate with the on-premises instance.</p>
     */
    inline void SetIamUserArn(const char* value) { m_iamUserArnHasBeenSet = true; m_iamUserArn.assign(value); }

    /**
     * <p>The ARN of the IAM user to associate with the on-premises instance.</p>
     */
    inline RegisterOnPremisesInstanceRequest& WithIamUserArn(const Aws::String& value) { SetIamUserArn(value); return *this;}

    /**
     * <p>The ARN of the IAM user to associate with the on-premises instance.</p>
     */
    inline RegisterOnPremisesInstanceRequest& WithIamUserArn(Aws::String&& value) { SetIamUserArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the IAM user to associate with the on-premises instance.</p>
     */
    inline RegisterOnPremisesInstanceRequest& WithIamUserArn(const char* value) { SetIamUserArn(value); return *this;}

  private:

    Aws::String m_instanceName;
    bool m_instanceNameHasBeenSet;

    Aws::String m_iamSessionArn;
    bool m_iamSessionArnHasBeenSet;

    Aws::String m_iamUserArn;
    bool m_iamUserArnHasBeenSet;
  };

} // namespace Model
} // namespace CodeDeploy
} // namespace Aws
