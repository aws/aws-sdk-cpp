/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/nimble/NimbleStudio_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/nimble/model/StudioPersona.h>
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
namespace NimbleStudio
{
namespace Model
{

  /**
   * <p>A studio member is an association of a user from your studio identity source
   * to elevated permissions that they are granted in the studio.</p> <p>When you add
   * a user to your studio using the Nimble Studio console, they are given access to
   * the studio's IAM Identity Center application and are given access to log in to
   * the Nimble Studio portal. These users have the permissions provided by the
   * studio's user IAM role and do not appear in the studio membership collection.
   * Only studio admins appear in studio membership.</p> <p>When you add a user to
   * studio membership with the ADMIN persona, upon logging in to the Nimble Studio
   * portal, they are granted permissions specified by the Studio's Admin IAM
   * role.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/nimble-2020-08-01/StudioMembership">AWS
   * API Reference</a></p>
   */
  class StudioMembership
  {
  public:
    AWS_NIMBLESTUDIO_API StudioMembership();
    AWS_NIMBLESTUDIO_API StudioMembership(Aws::Utils::Json::JsonView jsonValue);
    AWS_NIMBLESTUDIO_API StudioMembership& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_NIMBLESTUDIO_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ID of the identity store.</p>
     */
    inline const Aws::String& GetIdentityStoreId() const{ return m_identityStoreId; }

    /**
     * <p>The ID of the identity store.</p>
     */
    inline bool IdentityStoreIdHasBeenSet() const { return m_identityStoreIdHasBeenSet; }

    /**
     * <p>The ID of the identity store.</p>
     */
    inline void SetIdentityStoreId(const Aws::String& value) { m_identityStoreIdHasBeenSet = true; m_identityStoreId = value; }

    /**
     * <p>The ID of the identity store.</p>
     */
    inline void SetIdentityStoreId(Aws::String&& value) { m_identityStoreIdHasBeenSet = true; m_identityStoreId = std::move(value); }

    /**
     * <p>The ID of the identity store.</p>
     */
    inline void SetIdentityStoreId(const char* value) { m_identityStoreIdHasBeenSet = true; m_identityStoreId.assign(value); }

    /**
     * <p>The ID of the identity store.</p>
     */
    inline StudioMembership& WithIdentityStoreId(const Aws::String& value) { SetIdentityStoreId(value); return *this;}

    /**
     * <p>The ID of the identity store.</p>
     */
    inline StudioMembership& WithIdentityStoreId(Aws::String&& value) { SetIdentityStoreId(std::move(value)); return *this;}

    /**
     * <p>The ID of the identity store.</p>
     */
    inline StudioMembership& WithIdentityStoreId(const char* value) { SetIdentityStoreId(value); return *this;}


    /**
     * <p>The persona.</p>
     */
    inline const StudioPersona& GetPersona() const{ return m_persona; }

    /**
     * <p>The persona.</p>
     */
    inline bool PersonaHasBeenSet() const { return m_personaHasBeenSet; }

    /**
     * <p>The persona.</p>
     */
    inline void SetPersona(const StudioPersona& value) { m_personaHasBeenSet = true; m_persona = value; }

    /**
     * <p>The persona.</p>
     */
    inline void SetPersona(StudioPersona&& value) { m_personaHasBeenSet = true; m_persona = std::move(value); }

    /**
     * <p>The persona.</p>
     */
    inline StudioMembership& WithPersona(const StudioPersona& value) { SetPersona(value); return *this;}

    /**
     * <p>The persona.</p>
     */
    inline StudioMembership& WithPersona(StudioPersona&& value) { SetPersona(std::move(value)); return *this;}


    /**
     * <p>The principal ID.</p>
     */
    inline const Aws::String& GetPrincipalId() const{ return m_principalId; }

    /**
     * <p>The principal ID.</p>
     */
    inline bool PrincipalIdHasBeenSet() const { return m_principalIdHasBeenSet; }

    /**
     * <p>The principal ID.</p>
     */
    inline void SetPrincipalId(const Aws::String& value) { m_principalIdHasBeenSet = true; m_principalId = value; }

    /**
     * <p>The principal ID.</p>
     */
    inline void SetPrincipalId(Aws::String&& value) { m_principalIdHasBeenSet = true; m_principalId = std::move(value); }

    /**
     * <p>The principal ID.</p>
     */
    inline void SetPrincipalId(const char* value) { m_principalIdHasBeenSet = true; m_principalId.assign(value); }

    /**
     * <p>The principal ID.</p>
     */
    inline StudioMembership& WithPrincipalId(const Aws::String& value) { SetPrincipalId(value); return *this;}

    /**
     * <p>The principal ID.</p>
     */
    inline StudioMembership& WithPrincipalId(Aws::String&& value) { SetPrincipalId(std::move(value)); return *this;}

    /**
     * <p>The principal ID.</p>
     */
    inline StudioMembership& WithPrincipalId(const char* value) { SetPrincipalId(value); return *this;}


    /**
     * <p>The Active Directory Security Identifier for this user, if available.</p>
     */
    inline const Aws::String& GetSid() const{ return m_sid; }

    /**
     * <p>The Active Directory Security Identifier for this user, if available.</p>
     */
    inline bool SidHasBeenSet() const { return m_sidHasBeenSet; }

    /**
     * <p>The Active Directory Security Identifier for this user, if available.</p>
     */
    inline void SetSid(const Aws::String& value) { m_sidHasBeenSet = true; m_sid = value; }

    /**
     * <p>The Active Directory Security Identifier for this user, if available.</p>
     */
    inline void SetSid(Aws::String&& value) { m_sidHasBeenSet = true; m_sid = std::move(value); }

    /**
     * <p>The Active Directory Security Identifier for this user, if available.</p>
     */
    inline void SetSid(const char* value) { m_sidHasBeenSet = true; m_sid.assign(value); }

    /**
     * <p>The Active Directory Security Identifier for this user, if available.</p>
     */
    inline StudioMembership& WithSid(const Aws::String& value) { SetSid(value); return *this;}

    /**
     * <p>The Active Directory Security Identifier for this user, if available.</p>
     */
    inline StudioMembership& WithSid(Aws::String&& value) { SetSid(std::move(value)); return *this;}

    /**
     * <p>The Active Directory Security Identifier for this user, if available.</p>
     */
    inline StudioMembership& WithSid(const char* value) { SetSid(value); return *this;}

  private:

    Aws::String m_identityStoreId;
    bool m_identityStoreIdHasBeenSet = false;

    StudioPersona m_persona;
    bool m_personaHasBeenSet = false;

    Aws::String m_principalId;
    bool m_principalIdHasBeenSet = false;

    Aws::String m_sid;
    bool m_sidHasBeenSet = false;
  };

} // namespace Model
} // namespace NimbleStudio
} // namespace Aws
