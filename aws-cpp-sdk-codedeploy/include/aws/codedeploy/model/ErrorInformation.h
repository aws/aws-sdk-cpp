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
#include <aws/codedeploy/model/ErrorCode.h>
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
namespace CodeDeploy
{
namespace Model
{

  /**
   * <p>Information about a deployment error.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codedeploy-2014-10-06/ErrorInformation">AWS
   * API Reference</a></p>
   */
  class AWS_CODEDEPLOY_API ErrorInformation
  {
  public:
    ErrorInformation();
    ErrorInformation(Aws::Utils::Json::JsonView jsonValue);
    ErrorInformation& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>For more information, see <a
     * href="https://docs.aws.amazon.com/codedeploy/latest/userguide/error-codes.html">Error
     * Codes for AWS CodeDeploy</a> in the <a
     * href="https://docs.aws.amazon.com/codedeploy/latest/userguide">AWS CodeDeploy
     * User Guide</a>.</p> <p>The error code:</p> <ul> <li> <p>APPLICATION_MISSING: The
     * application was missing. This error code is most likely raised if the
     * application is deleted after the deployment is created, but before it is
     * started.</p> </li> <li> <p>DEPLOYMENT_GROUP_MISSING: The deployment group was
     * missing. This error code is most likely raised if the deployment group is
     * deleted after the deployment is created, but before it is started.</p> </li>
     * <li> <p>HEALTH_CONSTRAINTS: The deployment failed on too many instances to be
     * successfully deployed within the instance health constraints specified.</p>
     * </li> <li> <p>HEALTH_CONSTRAINTS_INVALID: The revision cannot be successfully
     * deployed within the instance health constraints specified.</p> </li> <li>
     * <p>IAM_ROLE_MISSING: The service role cannot be accessed.</p> </li> <li>
     * <p>IAM_ROLE_PERMISSIONS: The service role does not have the correct
     * permissions.</p> </li> <li> <p>INTERNAL_ERROR: There was an internal error.</p>
     * </li> <li> <p>NO_EC2_SUBSCRIPTION: The calling account is not subscribed to
     * Amazon EC2.</p> </li> <li> <p>NO_INSTANCES: No instances were specified, or no
     * instances can be found.</p> </li> <li> <p>OVER_MAX_INSTANCES: The maximum number
     * of instances was exceeded.</p> </li> <li> <p>THROTTLED: The operation was
     * throttled because the calling account exceeded the throttling limits of one or
     * more AWS services.</p> </li> <li> <p>TIMEOUT: The deployment has timed out.</p>
     * </li> <li> <p>REVISION_MISSING: The revision ID was missing. This error code is
     * most likely raised if the revision is deleted after the deployment is created,
     * but before it is started.</p> </li> </ul>
     */
    inline const ErrorCode& GetCode() const{ return m_code; }

    /**
     * <p>For more information, see <a
     * href="https://docs.aws.amazon.com/codedeploy/latest/userguide/error-codes.html">Error
     * Codes for AWS CodeDeploy</a> in the <a
     * href="https://docs.aws.amazon.com/codedeploy/latest/userguide">AWS CodeDeploy
     * User Guide</a>.</p> <p>The error code:</p> <ul> <li> <p>APPLICATION_MISSING: The
     * application was missing. This error code is most likely raised if the
     * application is deleted after the deployment is created, but before it is
     * started.</p> </li> <li> <p>DEPLOYMENT_GROUP_MISSING: The deployment group was
     * missing. This error code is most likely raised if the deployment group is
     * deleted after the deployment is created, but before it is started.</p> </li>
     * <li> <p>HEALTH_CONSTRAINTS: The deployment failed on too many instances to be
     * successfully deployed within the instance health constraints specified.</p>
     * </li> <li> <p>HEALTH_CONSTRAINTS_INVALID: The revision cannot be successfully
     * deployed within the instance health constraints specified.</p> </li> <li>
     * <p>IAM_ROLE_MISSING: The service role cannot be accessed.</p> </li> <li>
     * <p>IAM_ROLE_PERMISSIONS: The service role does not have the correct
     * permissions.</p> </li> <li> <p>INTERNAL_ERROR: There was an internal error.</p>
     * </li> <li> <p>NO_EC2_SUBSCRIPTION: The calling account is not subscribed to
     * Amazon EC2.</p> </li> <li> <p>NO_INSTANCES: No instances were specified, or no
     * instances can be found.</p> </li> <li> <p>OVER_MAX_INSTANCES: The maximum number
     * of instances was exceeded.</p> </li> <li> <p>THROTTLED: The operation was
     * throttled because the calling account exceeded the throttling limits of one or
     * more AWS services.</p> </li> <li> <p>TIMEOUT: The deployment has timed out.</p>
     * </li> <li> <p>REVISION_MISSING: The revision ID was missing. This error code is
     * most likely raised if the revision is deleted after the deployment is created,
     * but before it is started.</p> </li> </ul>
     */
    inline bool CodeHasBeenSet() const { return m_codeHasBeenSet; }

    /**
     * <p>For more information, see <a
     * href="https://docs.aws.amazon.com/codedeploy/latest/userguide/error-codes.html">Error
     * Codes for AWS CodeDeploy</a> in the <a
     * href="https://docs.aws.amazon.com/codedeploy/latest/userguide">AWS CodeDeploy
     * User Guide</a>.</p> <p>The error code:</p> <ul> <li> <p>APPLICATION_MISSING: The
     * application was missing. This error code is most likely raised if the
     * application is deleted after the deployment is created, but before it is
     * started.</p> </li> <li> <p>DEPLOYMENT_GROUP_MISSING: The deployment group was
     * missing. This error code is most likely raised if the deployment group is
     * deleted after the deployment is created, but before it is started.</p> </li>
     * <li> <p>HEALTH_CONSTRAINTS: The deployment failed on too many instances to be
     * successfully deployed within the instance health constraints specified.</p>
     * </li> <li> <p>HEALTH_CONSTRAINTS_INVALID: The revision cannot be successfully
     * deployed within the instance health constraints specified.</p> </li> <li>
     * <p>IAM_ROLE_MISSING: The service role cannot be accessed.</p> </li> <li>
     * <p>IAM_ROLE_PERMISSIONS: The service role does not have the correct
     * permissions.</p> </li> <li> <p>INTERNAL_ERROR: There was an internal error.</p>
     * </li> <li> <p>NO_EC2_SUBSCRIPTION: The calling account is not subscribed to
     * Amazon EC2.</p> </li> <li> <p>NO_INSTANCES: No instances were specified, or no
     * instances can be found.</p> </li> <li> <p>OVER_MAX_INSTANCES: The maximum number
     * of instances was exceeded.</p> </li> <li> <p>THROTTLED: The operation was
     * throttled because the calling account exceeded the throttling limits of one or
     * more AWS services.</p> </li> <li> <p>TIMEOUT: The deployment has timed out.</p>
     * </li> <li> <p>REVISION_MISSING: The revision ID was missing. This error code is
     * most likely raised if the revision is deleted after the deployment is created,
     * but before it is started.</p> </li> </ul>
     */
    inline void SetCode(const ErrorCode& value) { m_codeHasBeenSet = true; m_code = value; }

    /**
     * <p>For more information, see <a
     * href="https://docs.aws.amazon.com/codedeploy/latest/userguide/error-codes.html">Error
     * Codes for AWS CodeDeploy</a> in the <a
     * href="https://docs.aws.amazon.com/codedeploy/latest/userguide">AWS CodeDeploy
     * User Guide</a>.</p> <p>The error code:</p> <ul> <li> <p>APPLICATION_MISSING: The
     * application was missing. This error code is most likely raised if the
     * application is deleted after the deployment is created, but before it is
     * started.</p> </li> <li> <p>DEPLOYMENT_GROUP_MISSING: The deployment group was
     * missing. This error code is most likely raised if the deployment group is
     * deleted after the deployment is created, but before it is started.</p> </li>
     * <li> <p>HEALTH_CONSTRAINTS: The deployment failed on too many instances to be
     * successfully deployed within the instance health constraints specified.</p>
     * </li> <li> <p>HEALTH_CONSTRAINTS_INVALID: The revision cannot be successfully
     * deployed within the instance health constraints specified.</p> </li> <li>
     * <p>IAM_ROLE_MISSING: The service role cannot be accessed.</p> </li> <li>
     * <p>IAM_ROLE_PERMISSIONS: The service role does not have the correct
     * permissions.</p> </li> <li> <p>INTERNAL_ERROR: There was an internal error.</p>
     * </li> <li> <p>NO_EC2_SUBSCRIPTION: The calling account is not subscribed to
     * Amazon EC2.</p> </li> <li> <p>NO_INSTANCES: No instances were specified, or no
     * instances can be found.</p> </li> <li> <p>OVER_MAX_INSTANCES: The maximum number
     * of instances was exceeded.</p> </li> <li> <p>THROTTLED: The operation was
     * throttled because the calling account exceeded the throttling limits of one or
     * more AWS services.</p> </li> <li> <p>TIMEOUT: The deployment has timed out.</p>
     * </li> <li> <p>REVISION_MISSING: The revision ID was missing. This error code is
     * most likely raised if the revision is deleted after the deployment is created,
     * but before it is started.</p> </li> </ul>
     */
    inline void SetCode(ErrorCode&& value) { m_codeHasBeenSet = true; m_code = std::move(value); }

    /**
     * <p>For more information, see <a
     * href="https://docs.aws.amazon.com/codedeploy/latest/userguide/error-codes.html">Error
     * Codes for AWS CodeDeploy</a> in the <a
     * href="https://docs.aws.amazon.com/codedeploy/latest/userguide">AWS CodeDeploy
     * User Guide</a>.</p> <p>The error code:</p> <ul> <li> <p>APPLICATION_MISSING: The
     * application was missing. This error code is most likely raised if the
     * application is deleted after the deployment is created, but before it is
     * started.</p> </li> <li> <p>DEPLOYMENT_GROUP_MISSING: The deployment group was
     * missing. This error code is most likely raised if the deployment group is
     * deleted after the deployment is created, but before it is started.</p> </li>
     * <li> <p>HEALTH_CONSTRAINTS: The deployment failed on too many instances to be
     * successfully deployed within the instance health constraints specified.</p>
     * </li> <li> <p>HEALTH_CONSTRAINTS_INVALID: The revision cannot be successfully
     * deployed within the instance health constraints specified.</p> </li> <li>
     * <p>IAM_ROLE_MISSING: The service role cannot be accessed.</p> </li> <li>
     * <p>IAM_ROLE_PERMISSIONS: The service role does not have the correct
     * permissions.</p> </li> <li> <p>INTERNAL_ERROR: There was an internal error.</p>
     * </li> <li> <p>NO_EC2_SUBSCRIPTION: The calling account is not subscribed to
     * Amazon EC2.</p> </li> <li> <p>NO_INSTANCES: No instances were specified, or no
     * instances can be found.</p> </li> <li> <p>OVER_MAX_INSTANCES: The maximum number
     * of instances was exceeded.</p> </li> <li> <p>THROTTLED: The operation was
     * throttled because the calling account exceeded the throttling limits of one or
     * more AWS services.</p> </li> <li> <p>TIMEOUT: The deployment has timed out.</p>
     * </li> <li> <p>REVISION_MISSING: The revision ID was missing. This error code is
     * most likely raised if the revision is deleted after the deployment is created,
     * but before it is started.</p> </li> </ul>
     */
    inline ErrorInformation& WithCode(const ErrorCode& value) { SetCode(value); return *this;}

    /**
     * <p>For more information, see <a
     * href="https://docs.aws.amazon.com/codedeploy/latest/userguide/error-codes.html">Error
     * Codes for AWS CodeDeploy</a> in the <a
     * href="https://docs.aws.amazon.com/codedeploy/latest/userguide">AWS CodeDeploy
     * User Guide</a>.</p> <p>The error code:</p> <ul> <li> <p>APPLICATION_MISSING: The
     * application was missing. This error code is most likely raised if the
     * application is deleted after the deployment is created, but before it is
     * started.</p> </li> <li> <p>DEPLOYMENT_GROUP_MISSING: The deployment group was
     * missing. This error code is most likely raised if the deployment group is
     * deleted after the deployment is created, but before it is started.</p> </li>
     * <li> <p>HEALTH_CONSTRAINTS: The deployment failed on too many instances to be
     * successfully deployed within the instance health constraints specified.</p>
     * </li> <li> <p>HEALTH_CONSTRAINTS_INVALID: The revision cannot be successfully
     * deployed within the instance health constraints specified.</p> </li> <li>
     * <p>IAM_ROLE_MISSING: The service role cannot be accessed.</p> </li> <li>
     * <p>IAM_ROLE_PERMISSIONS: The service role does not have the correct
     * permissions.</p> </li> <li> <p>INTERNAL_ERROR: There was an internal error.</p>
     * </li> <li> <p>NO_EC2_SUBSCRIPTION: The calling account is not subscribed to
     * Amazon EC2.</p> </li> <li> <p>NO_INSTANCES: No instances were specified, or no
     * instances can be found.</p> </li> <li> <p>OVER_MAX_INSTANCES: The maximum number
     * of instances was exceeded.</p> </li> <li> <p>THROTTLED: The operation was
     * throttled because the calling account exceeded the throttling limits of one or
     * more AWS services.</p> </li> <li> <p>TIMEOUT: The deployment has timed out.</p>
     * </li> <li> <p>REVISION_MISSING: The revision ID was missing. This error code is
     * most likely raised if the revision is deleted after the deployment is created,
     * but before it is started.</p> </li> </ul>
     */
    inline ErrorInformation& WithCode(ErrorCode&& value) { SetCode(std::move(value)); return *this;}


    /**
     * <p>An accompanying error message.</p>
     */
    inline const Aws::String& GetMessage() const{ return m_message; }

    /**
     * <p>An accompanying error message.</p>
     */
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }

    /**
     * <p>An accompanying error message.</p>
     */
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }

    /**
     * <p>An accompanying error message.</p>
     */
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }

    /**
     * <p>An accompanying error message.</p>
     */
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }

    /**
     * <p>An accompanying error message.</p>
     */
    inline ErrorInformation& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    /**
     * <p>An accompanying error message.</p>
     */
    inline ErrorInformation& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}

    /**
     * <p>An accompanying error message.</p>
     */
    inline ErrorInformation& WithMessage(const char* value) { SetMessage(value); return *this;}

  private:

    ErrorCode m_code;
    bool m_codeHasBeenSet;

    Aws::String m_message;
    bool m_messageHasBeenSet;
  };

} // namespace Model
} // namespace CodeDeploy
} // namespace Aws
