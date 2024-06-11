/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ecr-public/ECRPublic_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
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
namespace ECRPublic
{
namespace Model
{

  /**
   * <p>An authorization token data object that corresponds to a public
   * registry.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ecr-public-2020-10-30/AuthorizationData">AWS
   * API Reference</a></p>
   */
  class AuthorizationData
  {
  public:
    AWS_ECRPUBLIC_API AuthorizationData();
    AWS_ECRPUBLIC_API AuthorizationData(Aws::Utils::Json::JsonView jsonValue);
    AWS_ECRPUBLIC_API AuthorizationData& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ECRPUBLIC_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A base64-encoded string that contains authorization data for a public Amazon
     * ECR registry. When the string is decoded, it's presented in the format
     * <code>user:password</code> for public registry authentication using <code>docker
     * login</code>.</p>
     */
    inline const Aws::String& GetAuthorizationToken() const{ return m_authorizationToken; }
    inline bool AuthorizationTokenHasBeenSet() const { return m_authorizationTokenHasBeenSet; }
    inline void SetAuthorizationToken(const Aws::String& value) { m_authorizationTokenHasBeenSet = true; m_authorizationToken = value; }
    inline void SetAuthorizationToken(Aws::String&& value) { m_authorizationTokenHasBeenSet = true; m_authorizationToken = std::move(value); }
    inline void SetAuthorizationToken(const char* value) { m_authorizationTokenHasBeenSet = true; m_authorizationToken.assign(value); }
    inline AuthorizationData& WithAuthorizationToken(const Aws::String& value) { SetAuthorizationToken(value); return *this;}
    inline AuthorizationData& WithAuthorizationToken(Aws::String&& value) { SetAuthorizationToken(std::move(value)); return *this;}
    inline AuthorizationData& WithAuthorizationToken(const char* value) { SetAuthorizationToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Unix time in seconds and milliseconds when the authorization token
     * expires. Authorization tokens are valid for 12 hours.</p>
     */
    inline const Aws::Utils::DateTime& GetExpiresAt() const{ return m_expiresAt; }
    inline bool ExpiresAtHasBeenSet() const { return m_expiresAtHasBeenSet; }
    inline void SetExpiresAt(const Aws::Utils::DateTime& value) { m_expiresAtHasBeenSet = true; m_expiresAt = value; }
    inline void SetExpiresAt(Aws::Utils::DateTime&& value) { m_expiresAtHasBeenSet = true; m_expiresAt = std::move(value); }
    inline AuthorizationData& WithExpiresAt(const Aws::Utils::DateTime& value) { SetExpiresAt(value); return *this;}
    inline AuthorizationData& WithExpiresAt(Aws::Utils::DateTime&& value) { SetExpiresAt(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_authorizationToken;
    bool m_authorizationTokenHasBeenSet = false;

    Aws::Utils::DateTime m_expiresAt;
    bool m_expiresAtHasBeenSet = false;
  };

} // namespace Model
} // namespace ECRPublic
} // namespace Aws
