﻿/**
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
  class CreateUserProfileResult
  {
  public:
    AWS_DATAZONE_API CreateUserProfileResult();
    AWS_DATAZONE_API CreateUserProfileResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DATAZONE_API CreateUserProfileResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    
    inline const UserProfileDetails& GetDetails() const{ return m_details; }
    inline void SetDetails(const UserProfileDetails& value) { m_details = value; }
    inline void SetDetails(UserProfileDetails&& value) { m_details = std::move(value); }
    inline CreateUserProfileResult& WithDetails(const UserProfileDetails& value) { SetDetails(value); return *this;}
    inline CreateUserProfileResult& WithDetails(UserProfileDetails&& value) { SetDetails(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the Amazon DataZone domain in which a user profile is
     * created.</p>
     */
    inline const Aws::String& GetDomainId() const{ return m_domainId; }
    inline void SetDomainId(const Aws::String& value) { m_domainId = value; }
    inline void SetDomainId(Aws::String&& value) { m_domainId = std::move(value); }
    inline void SetDomainId(const char* value) { m_domainId.assign(value); }
    inline CreateUserProfileResult& WithDomainId(const Aws::String& value) { SetDomainId(value); return *this;}
    inline CreateUserProfileResult& WithDomainId(Aws::String&& value) { SetDomainId(std::move(value)); return *this;}
    inline CreateUserProfileResult& WithDomainId(const char* value) { SetDomainId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the user profile.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline void SetId(const Aws::String& value) { m_id = value; }
    inline void SetId(Aws::String&& value) { m_id = std::move(value); }
    inline void SetId(const char* value) { m_id.assign(value); }
    inline CreateUserProfileResult& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline CreateUserProfileResult& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline CreateUserProfileResult& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the user profile.</p>
     */
    inline const UserProfileStatus& GetStatus() const{ return m_status; }
    inline void SetStatus(const UserProfileStatus& value) { m_status = value; }
    inline void SetStatus(UserProfileStatus&& value) { m_status = std::move(value); }
    inline CreateUserProfileResult& WithStatus(const UserProfileStatus& value) { SetStatus(value); return *this;}
    inline CreateUserProfileResult& WithStatus(UserProfileStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of the user profile.</p>
     */
    inline const UserProfileType& GetType() const{ return m_type; }
    inline void SetType(const UserProfileType& value) { m_type = value; }
    inline void SetType(UserProfileType&& value) { m_type = std::move(value); }
    inline CreateUserProfileResult& WithType(const UserProfileType& value) { SetType(value); return *this;}
    inline CreateUserProfileResult& WithType(UserProfileType&& value) { SetType(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline CreateUserProfileResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline CreateUserProfileResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline CreateUserProfileResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    UserProfileDetails m_details;

    Aws::String m_domainId;

    Aws::String m_id;

    UserProfileStatus m_status;

    UserProfileType m_type;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws
