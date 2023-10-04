/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datazone/DataZone_EXPORTS.h>
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
namespace DataZone
{
namespace Model
{
  class GetIamPortalLoginUrlResult
  {
  public:
    AWS_DATAZONE_API GetIamPortalLoginUrlResult();
    AWS_DATAZONE_API GetIamPortalLoginUrlResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DATAZONE_API GetIamPortalLoginUrlResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The data portal URL of the specified Amazon DataZone domain.</p>
     */
    inline const Aws::String& GetAuthCodeUrl() const{ return m_authCodeUrl; }

    /**
     * <p>The data portal URL of the specified Amazon DataZone domain.</p>
     */
    inline void SetAuthCodeUrl(const Aws::String& value) { m_authCodeUrl = value; }

    /**
     * <p>The data portal URL of the specified Amazon DataZone domain.</p>
     */
    inline void SetAuthCodeUrl(Aws::String&& value) { m_authCodeUrl = std::move(value); }

    /**
     * <p>The data portal URL of the specified Amazon DataZone domain.</p>
     */
    inline void SetAuthCodeUrl(const char* value) { m_authCodeUrl.assign(value); }

    /**
     * <p>The data portal URL of the specified Amazon DataZone domain.</p>
     */
    inline GetIamPortalLoginUrlResult& WithAuthCodeUrl(const Aws::String& value) { SetAuthCodeUrl(value); return *this;}

    /**
     * <p>The data portal URL of the specified Amazon DataZone domain.</p>
     */
    inline GetIamPortalLoginUrlResult& WithAuthCodeUrl(Aws::String&& value) { SetAuthCodeUrl(std::move(value)); return *this;}

    /**
     * <p>The data portal URL of the specified Amazon DataZone domain.</p>
     */
    inline GetIamPortalLoginUrlResult& WithAuthCodeUrl(const char* value) { SetAuthCodeUrl(value); return *this;}


    /**
     * <p>The ID of the user profile.</p>
     */
    inline const Aws::String& GetUserProfileId() const{ return m_userProfileId; }

    /**
     * <p>The ID of the user profile.</p>
     */
    inline void SetUserProfileId(const Aws::String& value) { m_userProfileId = value; }

    /**
     * <p>The ID of the user profile.</p>
     */
    inline void SetUserProfileId(Aws::String&& value) { m_userProfileId = std::move(value); }

    /**
     * <p>The ID of the user profile.</p>
     */
    inline void SetUserProfileId(const char* value) { m_userProfileId.assign(value); }

    /**
     * <p>The ID of the user profile.</p>
     */
    inline GetIamPortalLoginUrlResult& WithUserProfileId(const Aws::String& value) { SetUserProfileId(value); return *this;}

    /**
     * <p>The ID of the user profile.</p>
     */
    inline GetIamPortalLoginUrlResult& WithUserProfileId(Aws::String&& value) { SetUserProfileId(std::move(value)); return *this;}

    /**
     * <p>The ID of the user profile.</p>
     */
    inline GetIamPortalLoginUrlResult& WithUserProfileId(const char* value) { SetUserProfileId(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetIamPortalLoginUrlResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetIamPortalLoginUrlResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetIamPortalLoginUrlResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_authCodeUrl;

    Aws::String m_userProfileId;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws
