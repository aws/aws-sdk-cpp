/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class RegisterOnPremisesInstanceRequest : public CodeDeployRequest
  {
  public:
    AWS_CODEDEPLOY_API RegisterOnPremisesInstanceRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "RegisterOnPremisesInstance"; }

    AWS_CODEDEPLOY_API Aws::String SerializePayload() const override;

    AWS_CODEDEPLOY_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name of the on-premises instance to register.</p>
     */
    inline const Aws::String& GetInstanceName() const { return m_instanceName; }
    inline bool InstanceNameHasBeenSet() const { return m_instanceNameHasBeenSet; }
    template<typename InstanceNameT = Aws::String>
    void SetInstanceName(InstanceNameT&& value) { m_instanceNameHasBeenSet = true; m_instanceName = std::forward<InstanceNameT>(value); }
    template<typename InstanceNameT = Aws::String>
    RegisterOnPremisesInstanceRequest& WithInstanceName(InstanceNameT&& value) { SetInstanceName(std::forward<InstanceNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the IAM session to associate with the on-premises instance.</p>
     */
    inline const Aws::String& GetIamSessionArn() const { return m_iamSessionArn; }
    inline bool IamSessionArnHasBeenSet() const { return m_iamSessionArnHasBeenSet; }
    template<typename IamSessionArnT = Aws::String>
    void SetIamSessionArn(IamSessionArnT&& value) { m_iamSessionArnHasBeenSet = true; m_iamSessionArn = std::forward<IamSessionArnT>(value); }
    template<typename IamSessionArnT = Aws::String>
    RegisterOnPremisesInstanceRequest& WithIamSessionArn(IamSessionArnT&& value) { SetIamSessionArn(std::forward<IamSessionArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the user to associate with the on-premises instance.</p>
     */
    inline const Aws::String& GetIamUserArn() const { return m_iamUserArn; }
    inline bool IamUserArnHasBeenSet() const { return m_iamUserArnHasBeenSet; }
    template<typename IamUserArnT = Aws::String>
    void SetIamUserArn(IamUserArnT&& value) { m_iamUserArnHasBeenSet = true; m_iamUserArn = std::forward<IamUserArnT>(value); }
    template<typename IamUserArnT = Aws::String>
    RegisterOnPremisesInstanceRequest& WithIamUserArn(IamUserArnT&& value) { SetIamUserArn(std::forward<IamUserArnT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_instanceName;
    bool m_instanceNameHasBeenSet = false;

    Aws::String m_iamSessionArn;
    bool m_iamSessionArnHasBeenSet = false;

    Aws::String m_iamUserArn;
    bool m_iamUserArnHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeDeploy
} // namespace Aws
