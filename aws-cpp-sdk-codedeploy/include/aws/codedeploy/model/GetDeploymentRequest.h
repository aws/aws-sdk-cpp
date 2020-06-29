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
   * <p>Represents the input of a <code>GetDeployment</code> operation.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codedeploy-2014-10-06/GetDeploymentInput">AWS
   * API Reference</a></p>
   */
  class AWS_CODEDEPLOY_API GetDeploymentRequest : public CodeDeployRequest
  {
  public:
    GetDeploymentRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetDeployment"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p> The unique ID of a deployment associated with the IAM user or AWS account.
     * </p>
     */
    inline const Aws::String& GetDeploymentId() const{ return m_deploymentId; }

    /**
     * <p> The unique ID of a deployment associated with the IAM user or AWS account.
     * </p>
     */
    inline bool DeploymentIdHasBeenSet() const { return m_deploymentIdHasBeenSet; }

    /**
     * <p> The unique ID of a deployment associated with the IAM user or AWS account.
     * </p>
     */
    inline void SetDeploymentId(const Aws::String& value) { m_deploymentIdHasBeenSet = true; m_deploymentId = value; }

    /**
     * <p> The unique ID of a deployment associated with the IAM user or AWS account.
     * </p>
     */
    inline void SetDeploymentId(Aws::String&& value) { m_deploymentIdHasBeenSet = true; m_deploymentId = std::move(value); }

    /**
     * <p> The unique ID of a deployment associated with the IAM user or AWS account.
     * </p>
     */
    inline void SetDeploymentId(const char* value) { m_deploymentIdHasBeenSet = true; m_deploymentId.assign(value); }

    /**
     * <p> The unique ID of a deployment associated with the IAM user or AWS account.
     * </p>
     */
    inline GetDeploymentRequest& WithDeploymentId(const Aws::String& value) { SetDeploymentId(value); return *this;}

    /**
     * <p> The unique ID of a deployment associated with the IAM user or AWS account.
     * </p>
     */
    inline GetDeploymentRequest& WithDeploymentId(Aws::String&& value) { SetDeploymentId(std::move(value)); return *this;}

    /**
     * <p> The unique ID of a deployment associated with the IAM user or AWS account.
     * </p>
     */
    inline GetDeploymentRequest& WithDeploymentId(const char* value) { SetDeploymentId(value); return *this;}

  private:

    Aws::String m_deploymentId;
    bool m_deploymentIdHasBeenSet;
  };

} // namespace Model
} // namespace CodeDeploy
} // namespace Aws
