/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/amplifybackend/AmplifyBackend_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace AmplifyBackend
{
namespace Model
{

  /**
   * <p>Describes third-party social federation configurations for allowing your app
   * users to sign in using OAuth.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/amplifybackend-2020-08-11/BackendAuthSocialProviderConfig">AWS
   * API Reference</a></p>
   */
  class BackendAuthSocialProviderConfig
  {
  public:
    AWS_AMPLIFYBACKEND_API BackendAuthSocialProviderConfig();
    AWS_AMPLIFYBACKEND_API BackendAuthSocialProviderConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_AMPLIFYBACKEND_API BackendAuthSocialProviderConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_AMPLIFYBACKEND_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Describes the client_id, which can be obtained from the third-party social
     * federation provider.</p>
     */
    inline const Aws::String& GetClientId() const{ return m_clientId; }

    /**
     * <p>Describes the client_id, which can be obtained from the third-party social
     * federation provider.</p>
     */
    inline bool ClientIdHasBeenSet() const { return m_clientIdHasBeenSet; }

    /**
     * <p>Describes the client_id, which can be obtained from the third-party social
     * federation provider.</p>
     */
    inline void SetClientId(const Aws::String& value) { m_clientIdHasBeenSet = true; m_clientId = value; }

    /**
     * <p>Describes the client_id, which can be obtained from the third-party social
     * federation provider.</p>
     */
    inline void SetClientId(Aws::String&& value) { m_clientIdHasBeenSet = true; m_clientId = std::move(value); }

    /**
     * <p>Describes the client_id, which can be obtained from the third-party social
     * federation provider.</p>
     */
    inline void SetClientId(const char* value) { m_clientIdHasBeenSet = true; m_clientId.assign(value); }

    /**
     * <p>Describes the client_id, which can be obtained from the third-party social
     * federation provider.</p>
     */
    inline BackendAuthSocialProviderConfig& WithClientId(const Aws::String& value) { SetClientId(value); return *this;}

    /**
     * <p>Describes the client_id, which can be obtained from the third-party social
     * federation provider.</p>
     */
    inline BackendAuthSocialProviderConfig& WithClientId(Aws::String&& value) { SetClientId(std::move(value)); return *this;}

    /**
     * <p>Describes the client_id, which can be obtained from the third-party social
     * federation provider.</p>
     */
    inline BackendAuthSocialProviderConfig& WithClientId(const char* value) { SetClientId(value); return *this;}


    /**
     * <p>Describes the client_secret, which can be obtained from third-party social
     * federation providers.</p>
     */
    inline const Aws::String& GetClientSecret() const{ return m_clientSecret; }

    /**
     * <p>Describes the client_secret, which can be obtained from third-party social
     * federation providers.</p>
     */
    inline bool ClientSecretHasBeenSet() const { return m_clientSecretHasBeenSet; }

    /**
     * <p>Describes the client_secret, which can be obtained from third-party social
     * federation providers.</p>
     */
    inline void SetClientSecret(const Aws::String& value) { m_clientSecretHasBeenSet = true; m_clientSecret = value; }

    /**
     * <p>Describes the client_secret, which can be obtained from third-party social
     * federation providers.</p>
     */
    inline void SetClientSecret(Aws::String&& value) { m_clientSecretHasBeenSet = true; m_clientSecret = std::move(value); }

    /**
     * <p>Describes the client_secret, which can be obtained from third-party social
     * federation providers.</p>
     */
    inline void SetClientSecret(const char* value) { m_clientSecretHasBeenSet = true; m_clientSecret.assign(value); }

    /**
     * <p>Describes the client_secret, which can be obtained from third-party social
     * federation providers.</p>
     */
    inline BackendAuthSocialProviderConfig& WithClientSecret(const Aws::String& value) { SetClientSecret(value); return *this;}

    /**
     * <p>Describes the client_secret, which can be obtained from third-party social
     * federation providers.</p>
     */
    inline BackendAuthSocialProviderConfig& WithClientSecret(Aws::String&& value) { SetClientSecret(std::move(value)); return *this;}

    /**
     * <p>Describes the client_secret, which can be obtained from third-party social
     * federation providers.</p>
     */
    inline BackendAuthSocialProviderConfig& WithClientSecret(const char* value) { SetClientSecret(value); return *this;}

  private:

    Aws::String m_clientId;
    bool m_clientIdHasBeenSet = false;

    Aws::String m_clientSecret;
    bool m_clientSecretHasBeenSet = false;
  };

} // namespace Model
} // namespace AmplifyBackend
} // namespace Aws
