﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/nimble/NimbleStudio_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/nimble/model/LaunchProfilePersona.h>
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
   * <p>Launch profile membership enables your studio admins to delegate launch
   * profile access to other studio users in the Nimble Studio portal without needing
   * to write or maintain complex IAM policies. A launch profile member is a user
   * association from your studio identity source who is granted permissions to a
   * launch profile.</p> <p>A launch profile member (type USER) provides the
   * following permissions to that launch profile:</p> <ul> <li>
   * <p>GetLaunchProfile</p> </li> <li> <p>GetLaunchProfileInitialization</p> </li>
   * <li> <p>GetLaunchProfileMembers</p> </li> <li> <p>GetLaunchProfileMember</p>
   * </li> <li> <p>CreateStreamingSession</p> </li> <li>
   * <p>GetLaunchProfileDetails</p> </li> </ul><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/nimble-2020-08-01/LaunchProfileMembership">AWS
   * API Reference</a></p>
   */
  class AWS_NIMBLESTUDIO_API LaunchProfileMembership
  {
  public:
    LaunchProfileMembership();
    LaunchProfileMembership(Aws::Utils::Json::JsonView jsonValue);
    LaunchProfileMembership& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


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
    inline LaunchProfileMembership& WithIdentityStoreId(const Aws::String& value) { SetIdentityStoreId(value); return *this;}

    /**
     * <p>The ID of the identity store.</p>
     */
    inline LaunchProfileMembership& WithIdentityStoreId(Aws::String&& value) { SetIdentityStoreId(std::move(value)); return *this;}

    /**
     * <p>The ID of the identity store.</p>
     */
    inline LaunchProfileMembership& WithIdentityStoreId(const char* value) { SetIdentityStoreId(value); return *this;}


    /**
     * <p>The persona.</p>
     */
    inline const LaunchProfilePersona& GetPersona() const{ return m_persona; }

    /**
     * <p>The persona.</p>
     */
    inline bool PersonaHasBeenSet() const { return m_personaHasBeenSet; }

    /**
     * <p>The persona.</p>
     */
    inline void SetPersona(const LaunchProfilePersona& value) { m_personaHasBeenSet = true; m_persona = value; }

    /**
     * <p>The persona.</p>
     */
    inline void SetPersona(LaunchProfilePersona&& value) { m_personaHasBeenSet = true; m_persona = std::move(value); }

    /**
     * <p>The persona.</p>
     */
    inline LaunchProfileMembership& WithPersona(const LaunchProfilePersona& value) { SetPersona(value); return *this;}

    /**
     * <p>The persona.</p>
     */
    inline LaunchProfileMembership& WithPersona(LaunchProfilePersona&& value) { SetPersona(std::move(value)); return *this;}


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
    inline LaunchProfileMembership& WithPrincipalId(const Aws::String& value) { SetPrincipalId(value); return *this;}

    /**
     * <p>The principal ID.</p>
     */
    inline LaunchProfileMembership& WithPrincipalId(Aws::String&& value) { SetPrincipalId(std::move(value)); return *this;}

    /**
     * <p>The principal ID.</p>
     */
    inline LaunchProfileMembership& WithPrincipalId(const char* value) { SetPrincipalId(value); return *this;}


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
    inline LaunchProfileMembership& WithSid(const Aws::String& value) { SetSid(value); return *this;}

    /**
     * <p>The Active Directory Security Identifier for this user, if available.</p>
     */
    inline LaunchProfileMembership& WithSid(Aws::String&& value) { SetSid(std::move(value)); return *this;}

    /**
     * <p>The Active Directory Security Identifier for this user, if available.</p>
     */
    inline LaunchProfileMembership& WithSid(const char* value) { SetSid(value); return *this;}

  private:

    Aws::String m_identityStoreId;
    bool m_identityStoreIdHasBeenSet;

    LaunchProfilePersona m_persona;
    bool m_personaHasBeenSet;

    Aws::String m_principalId;
    bool m_principalIdHasBeenSet;

    Aws::String m_sid;
    bool m_sidHasBeenSet;
  };

} // namespace Model
} // namespace NimbleStudio
} // namespace Aws
