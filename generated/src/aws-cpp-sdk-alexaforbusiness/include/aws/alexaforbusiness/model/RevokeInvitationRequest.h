/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class RevokeInvitationRequest : public AlexaForBusinessRequest
  {
  public:
    AWS_ALEXAFORBUSINESS_API RevokeInvitationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "RevokeInvitation"; }

    AWS_ALEXAFORBUSINESS_API Aws::String SerializePayload() const override;

    AWS_ALEXAFORBUSINESS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The ARN of the user for whom to revoke an enrollment invitation.
     * Required.</p>
     */
    inline const Aws::String& GetUserArn() const{ return m_userArn; }

    /**
     * <p>The ARN of the user for whom to revoke an enrollment invitation.
     * Required.</p>
     */
    inline bool UserArnHasBeenSet() const { return m_userArnHasBeenSet; }

    /**
     * <p>The ARN of the user for whom to revoke an enrollment invitation.
     * Required.</p>
     */
    inline void SetUserArn(const Aws::String& value) { m_userArnHasBeenSet = true; m_userArn = value; }

    /**
     * <p>The ARN of the user for whom to revoke an enrollment invitation.
     * Required.</p>
     */
    inline void SetUserArn(Aws::String&& value) { m_userArnHasBeenSet = true; m_userArn = std::move(value); }

    /**
     * <p>The ARN of the user for whom to revoke an enrollment invitation.
     * Required.</p>
     */
    inline void SetUserArn(const char* value) { m_userArnHasBeenSet = true; m_userArn.assign(value); }

    /**
     * <p>The ARN of the user for whom to revoke an enrollment invitation.
     * Required.</p>
     */
    inline RevokeInvitationRequest& WithUserArn(const Aws::String& value) { SetUserArn(value); return *this;}

    /**
     * <p>The ARN of the user for whom to revoke an enrollment invitation.
     * Required.</p>
     */
    inline RevokeInvitationRequest& WithUserArn(Aws::String&& value) { SetUserArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the user for whom to revoke an enrollment invitation.
     * Required.</p>
     */
    inline RevokeInvitationRequest& WithUserArn(const char* value) { SetUserArn(value); return *this;}


    /**
     * <p>The ARN of the enrollment invitation to revoke. Required.</p>
     */
    inline const Aws::String& GetEnrollmentId() const{ return m_enrollmentId; }

    /**
     * <p>The ARN of the enrollment invitation to revoke. Required.</p>
     */
    inline bool EnrollmentIdHasBeenSet() const { return m_enrollmentIdHasBeenSet; }

    /**
     * <p>The ARN of the enrollment invitation to revoke. Required.</p>
     */
    inline void SetEnrollmentId(const Aws::String& value) { m_enrollmentIdHasBeenSet = true; m_enrollmentId = value; }

    /**
     * <p>The ARN of the enrollment invitation to revoke. Required.</p>
     */
    inline void SetEnrollmentId(Aws::String&& value) { m_enrollmentIdHasBeenSet = true; m_enrollmentId = std::move(value); }

    /**
     * <p>The ARN of the enrollment invitation to revoke. Required.</p>
     */
    inline void SetEnrollmentId(const char* value) { m_enrollmentIdHasBeenSet = true; m_enrollmentId.assign(value); }

    /**
     * <p>The ARN of the enrollment invitation to revoke. Required.</p>
     */
    inline RevokeInvitationRequest& WithEnrollmentId(const Aws::String& value) { SetEnrollmentId(value); return *this;}

    /**
     * <p>The ARN of the enrollment invitation to revoke. Required.</p>
     */
    inline RevokeInvitationRequest& WithEnrollmentId(Aws::String&& value) { SetEnrollmentId(std::move(value)); return *this;}

    /**
     * <p>The ARN of the enrollment invitation to revoke. Required.</p>
     */
    inline RevokeInvitationRequest& WithEnrollmentId(const char* value) { SetEnrollmentId(value); return *this;}

  private:

    Aws::String m_userArn;
    bool m_userArnHasBeenSet = false;

    Aws::String m_enrollmentId;
    bool m_enrollmentIdHasBeenSet = false;
  };

} // namespace Model
} // namespace AlexaForBusiness
} // namespace Aws
