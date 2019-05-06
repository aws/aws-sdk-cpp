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
#include <aws/alexaforbusiness/AlexaForBusiness_EXPORTS.h>
#include <aws/alexaforbusiness/AlexaForBusinessRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace AlexaForBusiness
{
namespace Model
{

  /**
   */
  class AWS_ALEXAFORBUSINESS_API DeleteUserRequest : public AlexaForBusinessRequest
  {
  public:
    DeleteUserRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteUser"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The ARN of the user to delete in the organization. Required.</p>
     */
    inline const Aws::String& GetUserArn() const{ return m_userArn; }

    /**
     * <p>The ARN of the user to delete in the organization. Required.</p>
     */
    inline bool UserArnHasBeenSet() const { return m_userArnHasBeenSet; }

    /**
     * <p>The ARN of the user to delete in the organization. Required.</p>
     */
    inline void SetUserArn(const Aws::String& value) { m_userArnHasBeenSet = true; m_userArn = value; }

    /**
     * <p>The ARN of the user to delete in the organization. Required.</p>
     */
    inline void SetUserArn(Aws::String&& value) { m_userArnHasBeenSet = true; m_userArn = std::move(value); }

    /**
     * <p>The ARN of the user to delete in the organization. Required.</p>
     */
    inline void SetUserArn(const char* value) { m_userArnHasBeenSet = true; m_userArn.assign(value); }

    /**
     * <p>The ARN of the user to delete in the organization. Required.</p>
     */
    inline DeleteUserRequest& WithUserArn(const Aws::String& value) { SetUserArn(value); return *this;}

    /**
     * <p>The ARN of the user to delete in the organization. Required.</p>
     */
    inline DeleteUserRequest& WithUserArn(Aws::String&& value) { SetUserArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the user to delete in the organization. Required.</p>
     */
    inline DeleteUserRequest& WithUserArn(const char* value) { SetUserArn(value); return *this;}


    /**
     * <p>The ARN of the user's enrollment in the organization. Required.</p>
     */
    inline const Aws::String& GetEnrollmentId() const{ return m_enrollmentId; }

    /**
     * <p>The ARN of the user's enrollment in the organization. Required.</p>
     */
    inline bool EnrollmentIdHasBeenSet() const { return m_enrollmentIdHasBeenSet; }

    /**
     * <p>The ARN of the user's enrollment in the organization. Required.</p>
     */
    inline void SetEnrollmentId(const Aws::String& value) { m_enrollmentIdHasBeenSet = true; m_enrollmentId = value; }

    /**
     * <p>The ARN of the user's enrollment in the organization. Required.</p>
     */
    inline void SetEnrollmentId(Aws::String&& value) { m_enrollmentIdHasBeenSet = true; m_enrollmentId = std::move(value); }

    /**
     * <p>The ARN of the user's enrollment in the organization. Required.</p>
     */
    inline void SetEnrollmentId(const char* value) { m_enrollmentIdHasBeenSet = true; m_enrollmentId.assign(value); }

    /**
     * <p>The ARN of the user's enrollment in the organization. Required.</p>
     */
    inline DeleteUserRequest& WithEnrollmentId(const Aws::String& value) { SetEnrollmentId(value); return *this;}

    /**
     * <p>The ARN of the user's enrollment in the organization. Required.</p>
     */
    inline DeleteUserRequest& WithEnrollmentId(Aws::String&& value) { SetEnrollmentId(std::move(value)); return *this;}

    /**
     * <p>The ARN of the user's enrollment in the organization. Required.</p>
     */
    inline DeleteUserRequest& WithEnrollmentId(const char* value) { SetEnrollmentId(value); return *this;}

  private:

    Aws::String m_userArn;
    bool m_userArnHasBeenSet;

    Aws::String m_enrollmentId;
    bool m_enrollmentIdHasBeenSet;
  };

} // namespace Model
} // namespace AlexaForBusiness
} // namespace Aws
