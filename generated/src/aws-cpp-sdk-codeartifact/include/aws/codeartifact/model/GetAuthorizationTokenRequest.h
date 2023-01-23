/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codeartifact/CodeArtifact_EXPORTS.h>
#include <aws/codeartifact/CodeArtifactRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace CodeArtifact
{
namespace Model
{

  /**
   */
  class GetAuthorizationTokenRequest : public CodeArtifactRequest
  {
  public:
    AWS_CODEARTIFACT_API GetAuthorizationTokenRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetAuthorizationToken"; }

    AWS_CODEARTIFACT_API Aws::String SerializePayload() const override;

    AWS_CODEARTIFACT_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p> The name of the domain that is in scope for the generated authorization
     * token. </p>
     */
    inline const Aws::String& GetDomain() const{ return m_domain; }

    /**
     * <p> The name of the domain that is in scope for the generated authorization
     * token. </p>
     */
    inline bool DomainHasBeenSet() const { return m_domainHasBeenSet; }

    /**
     * <p> The name of the domain that is in scope for the generated authorization
     * token. </p>
     */
    inline void SetDomain(const Aws::String& value) { m_domainHasBeenSet = true; m_domain = value; }

    /**
     * <p> The name of the domain that is in scope for the generated authorization
     * token. </p>
     */
    inline void SetDomain(Aws::String&& value) { m_domainHasBeenSet = true; m_domain = std::move(value); }

    /**
     * <p> The name of the domain that is in scope for the generated authorization
     * token. </p>
     */
    inline void SetDomain(const char* value) { m_domainHasBeenSet = true; m_domain.assign(value); }

    /**
     * <p> The name of the domain that is in scope for the generated authorization
     * token. </p>
     */
    inline GetAuthorizationTokenRequest& WithDomain(const Aws::String& value) { SetDomain(value); return *this;}

    /**
     * <p> The name of the domain that is in scope for the generated authorization
     * token. </p>
     */
    inline GetAuthorizationTokenRequest& WithDomain(Aws::String&& value) { SetDomain(std::move(value)); return *this;}

    /**
     * <p> The name of the domain that is in scope for the generated authorization
     * token. </p>
     */
    inline GetAuthorizationTokenRequest& WithDomain(const char* value) { SetDomain(value); return *this;}


    /**
     * <p> The 12-digit account number of the Amazon Web Services account that owns the
     * domain. It does not include dashes or spaces. </p>
     */
    inline const Aws::String& GetDomainOwner() const{ return m_domainOwner; }

    /**
     * <p> The 12-digit account number of the Amazon Web Services account that owns the
     * domain. It does not include dashes or spaces. </p>
     */
    inline bool DomainOwnerHasBeenSet() const { return m_domainOwnerHasBeenSet; }

    /**
     * <p> The 12-digit account number of the Amazon Web Services account that owns the
     * domain. It does not include dashes or spaces. </p>
     */
    inline void SetDomainOwner(const Aws::String& value) { m_domainOwnerHasBeenSet = true; m_domainOwner = value; }

    /**
     * <p> The 12-digit account number of the Amazon Web Services account that owns the
     * domain. It does not include dashes or spaces. </p>
     */
    inline void SetDomainOwner(Aws::String&& value) { m_domainOwnerHasBeenSet = true; m_domainOwner = std::move(value); }

    /**
     * <p> The 12-digit account number of the Amazon Web Services account that owns the
     * domain. It does not include dashes or spaces. </p>
     */
    inline void SetDomainOwner(const char* value) { m_domainOwnerHasBeenSet = true; m_domainOwner.assign(value); }

    /**
     * <p> The 12-digit account number of the Amazon Web Services account that owns the
     * domain. It does not include dashes or spaces. </p>
     */
    inline GetAuthorizationTokenRequest& WithDomainOwner(const Aws::String& value) { SetDomainOwner(value); return *this;}

    /**
     * <p> The 12-digit account number of the Amazon Web Services account that owns the
     * domain. It does not include dashes or spaces. </p>
     */
    inline GetAuthorizationTokenRequest& WithDomainOwner(Aws::String&& value) { SetDomainOwner(std::move(value)); return *this;}

    /**
     * <p> The 12-digit account number of the Amazon Web Services account that owns the
     * domain. It does not include dashes or spaces. </p>
     */
    inline GetAuthorizationTokenRequest& WithDomainOwner(const char* value) { SetDomainOwner(value); return *this;}


    /**
     * <p>The time, in seconds, that the generated authorization token is valid. Valid
     * values are <code>0</code> and any number between <code>900</code> (15 minutes)
     * and <code>43200</code> (12 hours). A value of <code>0</code> will set the
     * expiration of the authorization token to the same expiration of the user's
     * role's temporary credentials.</p>
     */
    inline long long GetDurationSeconds() const{ return m_durationSeconds; }

    /**
     * <p>The time, in seconds, that the generated authorization token is valid. Valid
     * values are <code>0</code> and any number between <code>900</code> (15 minutes)
     * and <code>43200</code> (12 hours). A value of <code>0</code> will set the
     * expiration of the authorization token to the same expiration of the user's
     * role's temporary credentials.</p>
     */
    inline bool DurationSecondsHasBeenSet() const { return m_durationSecondsHasBeenSet; }

    /**
     * <p>The time, in seconds, that the generated authorization token is valid. Valid
     * values are <code>0</code> and any number between <code>900</code> (15 minutes)
     * and <code>43200</code> (12 hours). A value of <code>0</code> will set the
     * expiration of the authorization token to the same expiration of the user's
     * role's temporary credentials.</p>
     */
    inline void SetDurationSeconds(long long value) { m_durationSecondsHasBeenSet = true; m_durationSeconds = value; }

    /**
     * <p>The time, in seconds, that the generated authorization token is valid. Valid
     * values are <code>0</code> and any number between <code>900</code> (15 minutes)
     * and <code>43200</code> (12 hours). A value of <code>0</code> will set the
     * expiration of the authorization token to the same expiration of the user's
     * role's temporary credentials.</p>
     */
    inline GetAuthorizationTokenRequest& WithDurationSeconds(long long value) { SetDurationSeconds(value); return *this;}

  private:

    Aws::String m_domain;
    bool m_domainHasBeenSet = false;

    Aws::String m_domainOwner;
    bool m_domainOwnerHasBeenSet = false;

    long long m_durationSeconds;
    bool m_durationSecondsHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeArtifact
} // namespace Aws
