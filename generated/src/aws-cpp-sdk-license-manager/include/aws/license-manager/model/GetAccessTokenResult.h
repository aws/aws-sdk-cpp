/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/license-manager/LicenseManager_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace LicenseManager
{
namespace Model
{
  class GetAccessTokenResult
  {
  public:
    AWS_LICENSEMANAGER_API GetAccessTokenResult();
    AWS_LICENSEMANAGER_API GetAccessTokenResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LICENSEMANAGER_API GetAccessTokenResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Temporary access token.</p>
     */
    inline const Aws::String& GetAccessToken() const{ return m_accessToken; }

    /**
     * <p>Temporary access token.</p>
     */
    inline void SetAccessToken(const Aws::String& value) { m_accessToken = value; }

    /**
     * <p>Temporary access token.</p>
     */
    inline void SetAccessToken(Aws::String&& value) { m_accessToken = std::move(value); }

    /**
     * <p>Temporary access token.</p>
     */
    inline void SetAccessToken(const char* value) { m_accessToken.assign(value); }

    /**
     * <p>Temporary access token.</p>
     */
    inline GetAccessTokenResult& WithAccessToken(const Aws::String& value) { SetAccessToken(value); return *this;}

    /**
     * <p>Temporary access token.</p>
     */
    inline GetAccessTokenResult& WithAccessToken(Aws::String&& value) { SetAccessToken(std::move(value)); return *this;}

    /**
     * <p>Temporary access token.</p>
     */
    inline GetAccessTokenResult& WithAccessToken(const char* value) { SetAccessToken(value); return *this;}

  private:

    Aws::String m_accessToken;
  };

} // namespace Model
} // namespace LicenseManager
} // namespace Aws
