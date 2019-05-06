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
#include <aws/workmail/WorkMail_EXPORTS.h>
#include <aws/workmail/WorkMailRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace WorkMail
{
namespace Model
{

  /**
   */
  class AWS_WORKMAIL_API UpdatePrimaryEmailAddressRequest : public WorkMailRequest
  {
  public:
    UpdatePrimaryEmailAddressRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdatePrimaryEmailAddress"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The organization that contains the user, group, or resource to update.</p>
     */
    inline const Aws::String& GetOrganizationId() const{ return m_organizationId; }

    /**
     * <p>The organization that contains the user, group, or resource to update.</p>
     */
    inline bool OrganizationIdHasBeenSet() const { return m_organizationIdHasBeenSet; }

    /**
     * <p>The organization that contains the user, group, or resource to update.</p>
     */
    inline void SetOrganizationId(const Aws::String& value) { m_organizationIdHasBeenSet = true; m_organizationId = value; }

    /**
     * <p>The organization that contains the user, group, or resource to update.</p>
     */
    inline void SetOrganizationId(Aws::String&& value) { m_organizationIdHasBeenSet = true; m_organizationId = std::move(value); }

    /**
     * <p>The organization that contains the user, group, or resource to update.</p>
     */
    inline void SetOrganizationId(const char* value) { m_organizationIdHasBeenSet = true; m_organizationId.assign(value); }

    /**
     * <p>The organization that contains the user, group, or resource to update.</p>
     */
    inline UpdatePrimaryEmailAddressRequest& WithOrganizationId(const Aws::String& value) { SetOrganizationId(value); return *this;}

    /**
     * <p>The organization that contains the user, group, or resource to update.</p>
     */
    inline UpdatePrimaryEmailAddressRequest& WithOrganizationId(Aws::String&& value) { SetOrganizationId(std::move(value)); return *this;}

    /**
     * <p>The organization that contains the user, group, or resource to update.</p>
     */
    inline UpdatePrimaryEmailAddressRequest& WithOrganizationId(const char* value) { SetOrganizationId(value); return *this;}


    /**
     * <p>The user, group, or resource to update.</p>
     */
    inline const Aws::String& GetEntityId() const{ return m_entityId; }

    /**
     * <p>The user, group, or resource to update.</p>
     */
    inline bool EntityIdHasBeenSet() const { return m_entityIdHasBeenSet; }

    /**
     * <p>The user, group, or resource to update.</p>
     */
    inline void SetEntityId(const Aws::String& value) { m_entityIdHasBeenSet = true; m_entityId = value; }

    /**
     * <p>The user, group, or resource to update.</p>
     */
    inline void SetEntityId(Aws::String&& value) { m_entityIdHasBeenSet = true; m_entityId = std::move(value); }

    /**
     * <p>The user, group, or resource to update.</p>
     */
    inline void SetEntityId(const char* value) { m_entityIdHasBeenSet = true; m_entityId.assign(value); }

    /**
     * <p>The user, group, or resource to update.</p>
     */
    inline UpdatePrimaryEmailAddressRequest& WithEntityId(const Aws::String& value) { SetEntityId(value); return *this;}

    /**
     * <p>The user, group, or resource to update.</p>
     */
    inline UpdatePrimaryEmailAddressRequest& WithEntityId(Aws::String&& value) { SetEntityId(std::move(value)); return *this;}

    /**
     * <p>The user, group, or resource to update.</p>
     */
    inline UpdatePrimaryEmailAddressRequest& WithEntityId(const char* value) { SetEntityId(value); return *this;}


    /**
     * <p>The value of the email to be updated as primary.</p>
     */
    inline const Aws::String& GetEmail() const{ return m_email; }

    /**
     * <p>The value of the email to be updated as primary.</p>
     */
    inline bool EmailHasBeenSet() const { return m_emailHasBeenSet; }

    /**
     * <p>The value of the email to be updated as primary.</p>
     */
    inline void SetEmail(const Aws::String& value) { m_emailHasBeenSet = true; m_email = value; }

    /**
     * <p>The value of the email to be updated as primary.</p>
     */
    inline void SetEmail(Aws::String&& value) { m_emailHasBeenSet = true; m_email = std::move(value); }

    /**
     * <p>The value of the email to be updated as primary.</p>
     */
    inline void SetEmail(const char* value) { m_emailHasBeenSet = true; m_email.assign(value); }

    /**
     * <p>The value of the email to be updated as primary.</p>
     */
    inline UpdatePrimaryEmailAddressRequest& WithEmail(const Aws::String& value) { SetEmail(value); return *this;}

    /**
     * <p>The value of the email to be updated as primary.</p>
     */
    inline UpdatePrimaryEmailAddressRequest& WithEmail(Aws::String&& value) { SetEmail(std::move(value)); return *this;}

    /**
     * <p>The value of the email to be updated as primary.</p>
     */
    inline UpdatePrimaryEmailAddressRequest& WithEmail(const char* value) { SetEmail(value); return *this;}

  private:

    Aws::String m_organizationId;
    bool m_organizationIdHasBeenSet;

    Aws::String m_entityId;
    bool m_entityIdHasBeenSet;

    Aws::String m_email;
    bool m_emailHasBeenSet;
  };

} // namespace Model
} // namespace WorkMail
} // namespace Aws
