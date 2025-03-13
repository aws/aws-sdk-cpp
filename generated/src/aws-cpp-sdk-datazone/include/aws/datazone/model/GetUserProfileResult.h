/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datazone/DataZone_EXPORTS.h>
#include <aws/datazone/model/UserProfileDetails.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/datazone/model/UserProfileStatus.h>
#include <aws/datazone/model/UserProfileType.h>
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
  class GetUserProfileResult
  {
  public:
    AWS_DATAZONE_API GetUserProfileResult() = default;
    AWS_DATAZONE_API GetUserProfileResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DATAZONE_API GetUserProfileResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    
    inline const UserProfileDetails& GetDetails() const { return m_details; }
    template<typename DetailsT = UserProfileDetails>
    void SetDetails(DetailsT&& value) { m_detailsHasBeenSet = true; m_details = std::forward<DetailsT>(value); }
    template<typename DetailsT = UserProfileDetails>
    GetUserProfileResult& WithDetails(DetailsT&& value) { SetDetails(std::forward<DetailsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>the identifier of the Amazon DataZone domain of which you want to get the
     * user profile.</p>
     */
    inline const Aws::String& GetDomainId() const { return m_domainId; }
    template<typename DomainIdT = Aws::String>
    void SetDomainId(DomainIdT&& value) { m_domainIdHasBeenSet = true; m_domainId = std::forward<DomainIdT>(value); }
    template<typename DomainIdT = Aws::String>
    GetUserProfileResult& WithDomainId(DomainIdT&& value) { SetDomainId(std::forward<DomainIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the user profile.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    GetUserProfileResult& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the user profile.</p>
     */
    inline UserProfileStatus GetStatus() const { return m_status; }
    inline void SetStatus(UserProfileStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline GetUserProfileResult& WithStatus(UserProfileStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of the user profile.</p>
     */
    inline UserProfileType GetType() const { return m_type; }
    inline void SetType(UserProfileType value) { m_typeHasBeenSet = true; m_type = value; }
    inline GetUserProfileResult& WithType(UserProfileType value) { SetType(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetUserProfileResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    UserProfileDetails m_details;
    bool m_detailsHasBeenSet = false;

    Aws::String m_domainId;
    bool m_domainIdHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    UserProfileStatus m_status{UserProfileStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    UserProfileType m_type{UserProfileType::NOT_SET};
    bool m_typeHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws
