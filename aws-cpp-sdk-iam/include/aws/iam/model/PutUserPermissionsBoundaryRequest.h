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
#include <aws/iam/IAM_EXPORTS.h>
#include <aws/iam/IAMRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace IAM
{
namespace Model
{

  /**
   */
  class AWS_IAM_API PutUserPermissionsBoundaryRequest : public IAMRequest
  {
  public:
    PutUserPermissionsBoundaryRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutUserPermissionsBoundary"; }

    Aws::String SerializePayload() const override;

  protected:
    void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The name (friendly name, not ARN) of the IAM user for which you want to set
     * the permissions boundary.</p>
     */
    inline const Aws::String& GetUserName() const{ return m_userName; }

    /**
     * <p>The name (friendly name, not ARN) of the IAM user for which you want to set
     * the permissions boundary.</p>
     */
    inline bool UserNameHasBeenSet() const { return m_userNameHasBeenSet; }

    /**
     * <p>The name (friendly name, not ARN) of the IAM user for which you want to set
     * the permissions boundary.</p>
     */
    inline void SetUserName(const Aws::String& value) { m_userNameHasBeenSet = true; m_userName = value; }

    /**
     * <p>The name (friendly name, not ARN) of the IAM user for which you want to set
     * the permissions boundary.</p>
     */
    inline void SetUserName(Aws::String&& value) { m_userNameHasBeenSet = true; m_userName = std::move(value); }

    /**
     * <p>The name (friendly name, not ARN) of the IAM user for which you want to set
     * the permissions boundary.</p>
     */
    inline void SetUserName(const char* value) { m_userNameHasBeenSet = true; m_userName.assign(value); }

    /**
     * <p>The name (friendly name, not ARN) of the IAM user for which you want to set
     * the permissions boundary.</p>
     */
    inline PutUserPermissionsBoundaryRequest& WithUserName(const Aws::String& value) { SetUserName(value); return *this;}

    /**
     * <p>The name (friendly name, not ARN) of the IAM user for which you want to set
     * the permissions boundary.</p>
     */
    inline PutUserPermissionsBoundaryRequest& WithUserName(Aws::String&& value) { SetUserName(std::move(value)); return *this;}

    /**
     * <p>The name (friendly name, not ARN) of the IAM user for which you want to set
     * the permissions boundary.</p>
     */
    inline PutUserPermissionsBoundaryRequest& WithUserName(const char* value) { SetUserName(value); return *this;}


    /**
     * <p>The ARN of the policy that is used to set the permissions boundary for the
     * user.</p>
     */
    inline const Aws::String& GetPermissionsBoundary() const{ return m_permissionsBoundary; }

    /**
     * <p>The ARN of the policy that is used to set the permissions boundary for the
     * user.</p>
     */
    inline bool PermissionsBoundaryHasBeenSet() const { return m_permissionsBoundaryHasBeenSet; }

    /**
     * <p>The ARN of the policy that is used to set the permissions boundary for the
     * user.</p>
     */
    inline void SetPermissionsBoundary(const Aws::String& value) { m_permissionsBoundaryHasBeenSet = true; m_permissionsBoundary = value; }

    /**
     * <p>The ARN of the policy that is used to set the permissions boundary for the
     * user.</p>
     */
    inline void SetPermissionsBoundary(Aws::String&& value) { m_permissionsBoundaryHasBeenSet = true; m_permissionsBoundary = std::move(value); }

    /**
     * <p>The ARN of the policy that is used to set the permissions boundary for the
     * user.</p>
     */
    inline void SetPermissionsBoundary(const char* value) { m_permissionsBoundaryHasBeenSet = true; m_permissionsBoundary.assign(value); }

    /**
     * <p>The ARN of the policy that is used to set the permissions boundary for the
     * user.</p>
     */
    inline PutUserPermissionsBoundaryRequest& WithPermissionsBoundary(const Aws::String& value) { SetPermissionsBoundary(value); return *this;}

    /**
     * <p>The ARN of the policy that is used to set the permissions boundary for the
     * user.</p>
     */
    inline PutUserPermissionsBoundaryRequest& WithPermissionsBoundary(Aws::String&& value) { SetPermissionsBoundary(std::move(value)); return *this;}

    /**
     * <p>The ARN of the policy that is used to set the permissions boundary for the
     * user.</p>
     */
    inline PutUserPermissionsBoundaryRequest& WithPermissionsBoundary(const char* value) { SetPermissionsBoundary(value); return *this;}

  private:

    Aws::String m_userName;
    bool m_userNameHasBeenSet;

    Aws::String m_permissionsBoundary;
    bool m_permissionsBoundaryHasBeenSet;
  };

} // namespace Model
} // namespace IAM
} // namespace Aws
