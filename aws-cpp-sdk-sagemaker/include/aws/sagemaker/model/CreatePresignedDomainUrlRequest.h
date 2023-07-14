﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/SageMakerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace SageMaker
{
namespace Model
{

  /**
   */
  class AWS_SAGEMAKER_API CreatePresignedDomainUrlRequest : public SageMakerRequest
  {
  public:
    CreatePresignedDomainUrlRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreatePresignedDomainUrl"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The domain ID.</p>
     */
    inline const Aws::String& GetDomainId() const{ return m_domainId; }

    /**
     * <p>The domain ID.</p>
     */
    inline bool DomainIdHasBeenSet() const { return m_domainIdHasBeenSet; }

    /**
     * <p>The domain ID.</p>
     */
    inline void SetDomainId(const Aws::String& value) { m_domainIdHasBeenSet = true; m_domainId = value; }

    /**
     * <p>The domain ID.</p>
     */
    inline void SetDomainId(Aws::String&& value) { m_domainIdHasBeenSet = true; m_domainId = std::move(value); }

    /**
     * <p>The domain ID.</p>
     */
    inline void SetDomainId(const char* value) { m_domainIdHasBeenSet = true; m_domainId.assign(value); }

    /**
     * <p>The domain ID.</p>
     */
    inline CreatePresignedDomainUrlRequest& WithDomainId(const Aws::String& value) { SetDomainId(value); return *this;}

    /**
     * <p>The domain ID.</p>
     */
    inline CreatePresignedDomainUrlRequest& WithDomainId(Aws::String&& value) { SetDomainId(std::move(value)); return *this;}

    /**
     * <p>The domain ID.</p>
     */
    inline CreatePresignedDomainUrlRequest& WithDomainId(const char* value) { SetDomainId(value); return *this;}


    /**
     * <p>The name of the UserProfile to sign-in as.</p>
     */
    inline const Aws::String& GetUserProfileName() const{ return m_userProfileName; }

    /**
     * <p>The name of the UserProfile to sign-in as.</p>
     */
    inline bool UserProfileNameHasBeenSet() const { return m_userProfileNameHasBeenSet; }

    /**
     * <p>The name of the UserProfile to sign-in as.</p>
     */
    inline void SetUserProfileName(const Aws::String& value) { m_userProfileNameHasBeenSet = true; m_userProfileName = value; }

    /**
     * <p>The name of the UserProfile to sign-in as.</p>
     */
    inline void SetUserProfileName(Aws::String&& value) { m_userProfileNameHasBeenSet = true; m_userProfileName = std::move(value); }

    /**
     * <p>The name of the UserProfile to sign-in as.</p>
     */
    inline void SetUserProfileName(const char* value) { m_userProfileNameHasBeenSet = true; m_userProfileName.assign(value); }

    /**
     * <p>The name of the UserProfile to sign-in as.</p>
     */
    inline CreatePresignedDomainUrlRequest& WithUserProfileName(const Aws::String& value) { SetUserProfileName(value); return *this;}

    /**
     * <p>The name of the UserProfile to sign-in as.</p>
     */
    inline CreatePresignedDomainUrlRequest& WithUserProfileName(Aws::String&& value) { SetUserProfileName(std::move(value)); return *this;}

    /**
     * <p>The name of the UserProfile to sign-in as.</p>
     */
    inline CreatePresignedDomainUrlRequest& WithUserProfileName(const char* value) { SetUserProfileName(value); return *this;}


    /**
     * <p>The session expiration duration in seconds. This value defaults to 43200.</p>
     */
    inline int GetSessionExpirationDurationInSeconds() const{ return m_sessionExpirationDurationInSeconds; }

    /**
     * <p>The session expiration duration in seconds. This value defaults to 43200.</p>
     */
    inline bool SessionExpirationDurationInSecondsHasBeenSet() const { return m_sessionExpirationDurationInSecondsHasBeenSet; }

    /**
     * <p>The session expiration duration in seconds. This value defaults to 43200.</p>
     */
    inline void SetSessionExpirationDurationInSeconds(int value) { m_sessionExpirationDurationInSecondsHasBeenSet = true; m_sessionExpirationDurationInSeconds = value; }

    /**
     * <p>The session expiration duration in seconds. This value defaults to 43200.</p>
     */
    inline CreatePresignedDomainUrlRequest& WithSessionExpirationDurationInSeconds(int value) { SetSessionExpirationDurationInSeconds(value); return *this;}


    /**
     * <p>The number of seconds until the pre-signed URL expires. This value defaults
     * to 300.</p>
     */
    inline int GetExpiresInSeconds() const{ return m_expiresInSeconds; }

    /**
     * <p>The number of seconds until the pre-signed URL expires. This value defaults
     * to 300.</p>
     */
    inline bool ExpiresInSecondsHasBeenSet() const { return m_expiresInSecondsHasBeenSet; }

    /**
     * <p>The number of seconds until the pre-signed URL expires. This value defaults
     * to 300.</p>
     */
    inline void SetExpiresInSeconds(int value) { m_expiresInSecondsHasBeenSet = true; m_expiresInSeconds = value; }

    /**
     * <p>The number of seconds until the pre-signed URL expires. This value defaults
     * to 300.</p>
     */
    inline CreatePresignedDomainUrlRequest& WithExpiresInSeconds(int value) { SetExpiresInSeconds(value); return *this;}

  private:

    Aws::String m_domainId;
    bool m_domainIdHasBeenSet;

    Aws::String m_userProfileName;
    bool m_userProfileNameHasBeenSet;

    int m_sessionExpirationDurationInSeconds;
    bool m_sessionExpirationDurationInSecondsHasBeenSet;

    int m_expiresInSeconds;
    bool m_expiresInSecondsHasBeenSet;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
