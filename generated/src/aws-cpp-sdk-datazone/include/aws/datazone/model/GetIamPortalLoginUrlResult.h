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
    AWS_DATAZONE_API GetIamPortalLoginUrlResult() = default;
    AWS_DATAZONE_API GetIamPortalLoginUrlResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DATAZONE_API GetIamPortalLoginUrlResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The data portal URL of the specified Amazon DataZone domain.</p>
     */
    inline const Aws::String& GetAuthCodeUrl() const { return m_authCodeUrl; }
    template<typename AuthCodeUrlT = Aws::String>
    void SetAuthCodeUrl(AuthCodeUrlT&& value) { m_authCodeUrlHasBeenSet = true; m_authCodeUrl = std::forward<AuthCodeUrlT>(value); }
    template<typename AuthCodeUrlT = Aws::String>
    GetIamPortalLoginUrlResult& WithAuthCodeUrl(AuthCodeUrlT&& value) { SetAuthCodeUrl(std::forward<AuthCodeUrlT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the user profile.</p>
     */
    inline const Aws::String& GetUserProfileId() const { return m_userProfileId; }
    template<typename UserProfileIdT = Aws::String>
    void SetUserProfileId(UserProfileIdT&& value) { m_userProfileIdHasBeenSet = true; m_userProfileId = std::forward<UserProfileIdT>(value); }
    template<typename UserProfileIdT = Aws::String>
    GetIamPortalLoginUrlResult& WithUserProfileId(UserProfileIdT&& value) { SetUserProfileId(std::forward<UserProfileIdT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetIamPortalLoginUrlResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_authCodeUrl;
    bool m_authCodeUrlHasBeenSet = false;

    Aws::String m_userProfileId;
    bool m_userProfileIdHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws
