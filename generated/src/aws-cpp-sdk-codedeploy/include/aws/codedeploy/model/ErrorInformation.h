/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class ErrorInformation
  {
  public:
    AWS_CODEDEPLOY_API ErrorInformation() = default;
    AWS_CODEDEPLOY_API ErrorInformation(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEDEPLOY_API ErrorInformation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEDEPLOY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>For more information, see <a
     * href="https://docs.aws.amazon.com/codedeploy/latest/userguide/error-codes.html">Error
     * Codes for CodeDeploy</a> in the <a
     * href="https://docs.aws.amazon.com/codedeploy/latest/userguide">CodeDeploy User
     * Guide</a>.</p> <p>The error code:</p> <ul> <li> <p>APPLICATION_MISSING: The
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
     * more Amazon Web Services services.</p> </li> <li> <p>TIMEOUT: The deployment has
     * timed out.</p> </li> <li> <p>REVISION_MISSING: The revision ID was missing. This
     * error code is most likely raised if the revision is deleted after the deployment
     * is created, but before it is started.</p> </li> </ul>
     */
    inline ErrorCode GetCode() const { return m_code; }
    inline bool CodeHasBeenSet() const { return m_codeHasBeenSet; }
    inline void SetCode(ErrorCode value) { m_codeHasBeenSet = true; m_code = value; }
    inline ErrorInformation& WithCode(ErrorCode value) { SetCode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An accompanying error message.</p>
     */
    inline const Aws::String& GetMessage() const { return m_message; }
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
    template<typename MessageT = Aws::String>
    void SetMessage(MessageT&& value) { m_messageHasBeenSet = true; m_message = std::forward<MessageT>(value); }
    template<typename MessageT = Aws::String>
    ErrorInformation& WithMessage(MessageT&& value) { SetMessage(std::forward<MessageT>(value)); return *this;}
    ///@}
  private:

    ErrorCode m_code{ErrorCode::NOT_SET};
    bool m_codeHasBeenSet = false;

    Aws::String m_message;
    bool m_messageHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeDeploy
} // namespace Aws
