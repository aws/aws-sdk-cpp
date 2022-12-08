/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opsworks/OpsWorks_EXPORTS.h>
#include <aws/opsworks/OpsWorksRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace OpsWorks
{
namespace Model
{

  /**
   */
  class DeleteUserProfileRequest : public OpsWorksRequest
  {
  public:
    AWS_OPSWORKS_API DeleteUserProfileRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteUserProfile"; }

    AWS_OPSWORKS_API Aws::String SerializePayload() const override;

    AWS_OPSWORKS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The user's IAM ARN. This can also be a federated user's ARN.</p>
     */
    inline const Aws::String& GetIamUserArn() const{ return m_iamUserArn; }

    /**
     * <p>The user's IAM ARN. This can also be a federated user's ARN.</p>
     */
    inline bool IamUserArnHasBeenSet() const { return m_iamUserArnHasBeenSet; }

    /**
     * <p>The user's IAM ARN. This can also be a federated user's ARN.</p>
     */
    inline void SetIamUserArn(const Aws::String& value) { m_iamUserArnHasBeenSet = true; m_iamUserArn = value; }

    /**
     * <p>The user's IAM ARN. This can also be a federated user's ARN.</p>
     */
    inline void SetIamUserArn(Aws::String&& value) { m_iamUserArnHasBeenSet = true; m_iamUserArn = std::move(value); }

    /**
     * <p>The user's IAM ARN. This can also be a federated user's ARN.</p>
     */
    inline void SetIamUserArn(const char* value) { m_iamUserArnHasBeenSet = true; m_iamUserArn.assign(value); }

    /**
     * <p>The user's IAM ARN. This can also be a federated user's ARN.</p>
     */
    inline DeleteUserProfileRequest& WithIamUserArn(const Aws::String& value) { SetIamUserArn(value); return *this;}

    /**
     * <p>The user's IAM ARN. This can also be a federated user's ARN.</p>
     */
    inline DeleteUserProfileRequest& WithIamUserArn(Aws::String&& value) { SetIamUserArn(std::move(value)); return *this;}

    /**
     * <p>The user's IAM ARN. This can also be a federated user's ARN.</p>
     */
    inline DeleteUserProfileRequest& WithIamUserArn(const char* value) { SetIamUserArn(value); return *this;}

  private:

    Aws::String m_iamUserArn;
    bool m_iamUserArnHasBeenSet = false;
  };

} // namespace Model
} // namespace OpsWorks
} // namespace Aws
