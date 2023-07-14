﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/nimble/NimbleStudio_EXPORTS.h>
#include <aws/nimble/NimbleStudioRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/nimble/model/LaunchProfilePersona.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace NimbleStudio
{
namespace Model
{

  /**
   */
  class AWS_NIMBLESTUDIO_API UpdateLaunchProfileMemberRequest : public NimbleStudioRequest
  {
  public:
    UpdateLaunchProfileMemberRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateLaunchProfileMember"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request. If you don’t specify a client token, the AWS SDK automatically
     * generates a client token and uses it for the request to ensure idempotency.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }

    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request. If you don’t specify a client token, the AWS SDK automatically
     * generates a client token and uses it for the request to ensure idempotency.</p>
     */
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }

    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request. If you don’t specify a client token, the AWS SDK automatically
     * generates a client token and uses it for the request to ensure idempotency.</p>
     */
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }

    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request. If you don’t specify a client token, the AWS SDK automatically
     * generates a client token and uses it for the request to ensure idempotency.</p>
     */
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }

    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request. If you don’t specify a client token, the AWS SDK automatically
     * generates a client token and uses it for the request to ensure idempotency.</p>
     */
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }

    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request. If you don’t specify a client token, the AWS SDK automatically
     * generates a client token and uses it for the request to ensure idempotency.</p>
     */
    inline UpdateLaunchProfileMemberRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}

    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request. If you don’t specify a client token, the AWS SDK automatically
     * generates a client token and uses it for the request to ensure idempotency.</p>
     */
    inline UpdateLaunchProfileMemberRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}

    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request. If you don’t specify a client token, the AWS SDK automatically
     * generates a client token and uses it for the request to ensure idempotency.</p>
     */
    inline UpdateLaunchProfileMemberRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}


    /**
     * <p>The Launch Profile ID.</p>
     */
    inline const Aws::String& GetLaunchProfileId() const{ return m_launchProfileId; }

    /**
     * <p>The Launch Profile ID.</p>
     */
    inline bool LaunchProfileIdHasBeenSet() const { return m_launchProfileIdHasBeenSet; }

    /**
     * <p>The Launch Profile ID.</p>
     */
    inline void SetLaunchProfileId(const Aws::String& value) { m_launchProfileIdHasBeenSet = true; m_launchProfileId = value; }

    /**
     * <p>The Launch Profile ID.</p>
     */
    inline void SetLaunchProfileId(Aws::String&& value) { m_launchProfileIdHasBeenSet = true; m_launchProfileId = std::move(value); }

    /**
     * <p>The Launch Profile ID.</p>
     */
    inline void SetLaunchProfileId(const char* value) { m_launchProfileIdHasBeenSet = true; m_launchProfileId.assign(value); }

    /**
     * <p>The Launch Profile ID.</p>
     */
    inline UpdateLaunchProfileMemberRequest& WithLaunchProfileId(const Aws::String& value) { SetLaunchProfileId(value); return *this;}

    /**
     * <p>The Launch Profile ID.</p>
     */
    inline UpdateLaunchProfileMemberRequest& WithLaunchProfileId(Aws::String&& value) { SetLaunchProfileId(std::move(value)); return *this;}

    /**
     * <p>The Launch Profile ID.</p>
     */
    inline UpdateLaunchProfileMemberRequest& WithLaunchProfileId(const char* value) { SetLaunchProfileId(value); return *this;}


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
    inline UpdateLaunchProfileMemberRequest& WithPersona(const LaunchProfilePersona& value) { SetPersona(value); return *this;}

    /**
     * <p>The persona.</p>
     */
    inline UpdateLaunchProfileMemberRequest& WithPersona(LaunchProfilePersona&& value) { SetPersona(std::move(value)); return *this;}


    /**
     * <p>The principal ID. This currently supports a Amazon Web Services SSO UserId.
     * </p>
     */
    inline const Aws::String& GetPrincipalId() const{ return m_principalId; }

    /**
     * <p>The principal ID. This currently supports a Amazon Web Services SSO UserId.
     * </p>
     */
    inline bool PrincipalIdHasBeenSet() const { return m_principalIdHasBeenSet; }

    /**
     * <p>The principal ID. This currently supports a Amazon Web Services SSO UserId.
     * </p>
     */
    inline void SetPrincipalId(const Aws::String& value) { m_principalIdHasBeenSet = true; m_principalId = value; }

    /**
     * <p>The principal ID. This currently supports a Amazon Web Services SSO UserId.
     * </p>
     */
    inline void SetPrincipalId(Aws::String&& value) { m_principalIdHasBeenSet = true; m_principalId = std::move(value); }

    /**
     * <p>The principal ID. This currently supports a Amazon Web Services SSO UserId.
     * </p>
     */
    inline void SetPrincipalId(const char* value) { m_principalIdHasBeenSet = true; m_principalId.assign(value); }

    /**
     * <p>The principal ID. This currently supports a Amazon Web Services SSO UserId.
     * </p>
     */
    inline UpdateLaunchProfileMemberRequest& WithPrincipalId(const Aws::String& value) { SetPrincipalId(value); return *this;}

    /**
     * <p>The principal ID. This currently supports a Amazon Web Services SSO UserId.
     * </p>
     */
    inline UpdateLaunchProfileMemberRequest& WithPrincipalId(Aws::String&& value) { SetPrincipalId(std::move(value)); return *this;}

    /**
     * <p>The principal ID. This currently supports a Amazon Web Services SSO UserId.
     * </p>
     */
    inline UpdateLaunchProfileMemberRequest& WithPrincipalId(const char* value) { SetPrincipalId(value); return *this;}


    /**
     * <p>The studio ID. </p>
     */
    inline const Aws::String& GetStudioId() const{ return m_studioId; }

    /**
     * <p>The studio ID. </p>
     */
    inline bool StudioIdHasBeenSet() const { return m_studioIdHasBeenSet; }

    /**
     * <p>The studio ID. </p>
     */
    inline void SetStudioId(const Aws::String& value) { m_studioIdHasBeenSet = true; m_studioId = value; }

    /**
     * <p>The studio ID. </p>
     */
    inline void SetStudioId(Aws::String&& value) { m_studioIdHasBeenSet = true; m_studioId = std::move(value); }

    /**
     * <p>The studio ID. </p>
     */
    inline void SetStudioId(const char* value) { m_studioIdHasBeenSet = true; m_studioId.assign(value); }

    /**
     * <p>The studio ID. </p>
     */
    inline UpdateLaunchProfileMemberRequest& WithStudioId(const Aws::String& value) { SetStudioId(value); return *this;}

    /**
     * <p>The studio ID. </p>
     */
    inline UpdateLaunchProfileMemberRequest& WithStudioId(Aws::String&& value) { SetStudioId(std::move(value)); return *this;}

    /**
     * <p>The studio ID. </p>
     */
    inline UpdateLaunchProfileMemberRequest& WithStudioId(const char* value) { SetStudioId(value); return *this;}

  private:

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet;

    Aws::String m_launchProfileId;
    bool m_launchProfileIdHasBeenSet;

    LaunchProfilePersona m_persona;
    bool m_personaHasBeenSet;

    Aws::String m_principalId;
    bool m_principalIdHasBeenSet;

    Aws::String m_studioId;
    bool m_studioIdHasBeenSet;
  };

} // namespace Model
} // namespace NimbleStudio
} // namespace Aws
