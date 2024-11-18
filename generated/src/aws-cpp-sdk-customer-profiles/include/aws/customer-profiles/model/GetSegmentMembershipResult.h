/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/customer-profiles/CustomerProfiles_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/customer-profiles/model/ProfileQueryResult.h>
#include <aws/customer-profiles/model/ProfileQueryFailures.h>
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
namespace CustomerProfiles
{
namespace Model
{
  class GetSegmentMembershipResult
  {
  public:
    AWS_CUSTOMERPROFILES_API GetSegmentMembershipResult();
    AWS_CUSTOMERPROFILES_API GetSegmentMembershipResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CUSTOMERPROFILES_API GetSegmentMembershipResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The unique name of the segment definition.</p>
     */
    inline const Aws::String& GetSegmentDefinitionName() const{ return m_segmentDefinitionName; }
    inline void SetSegmentDefinitionName(const Aws::String& value) { m_segmentDefinitionName = value; }
    inline void SetSegmentDefinitionName(Aws::String&& value) { m_segmentDefinitionName = std::move(value); }
    inline void SetSegmentDefinitionName(const char* value) { m_segmentDefinitionName.assign(value); }
    inline GetSegmentMembershipResult& WithSegmentDefinitionName(const Aws::String& value) { SetSegmentDefinitionName(value); return *this;}
    inline GetSegmentMembershipResult& WithSegmentDefinitionName(Aws::String&& value) { SetSegmentDefinitionName(std::move(value)); return *this;}
    inline GetSegmentMembershipResult& WithSegmentDefinitionName(const char* value) { SetSegmentDefinitionName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of maps where each contains a response per profile requested.</p>
     */
    inline const Aws::Vector<ProfileQueryResult>& GetProfiles() const{ return m_profiles; }
    inline void SetProfiles(const Aws::Vector<ProfileQueryResult>& value) { m_profiles = value; }
    inline void SetProfiles(Aws::Vector<ProfileQueryResult>&& value) { m_profiles = std::move(value); }
    inline GetSegmentMembershipResult& WithProfiles(const Aws::Vector<ProfileQueryResult>& value) { SetProfiles(value); return *this;}
    inline GetSegmentMembershipResult& WithProfiles(Aws::Vector<ProfileQueryResult>&& value) { SetProfiles(std::move(value)); return *this;}
    inline GetSegmentMembershipResult& AddProfiles(const ProfileQueryResult& value) { m_profiles.push_back(value); return *this; }
    inline GetSegmentMembershipResult& AddProfiles(ProfileQueryResult&& value) { m_profiles.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>An array of maps where each contains a response per profile failed for the
     * request.</p>
     */
    inline const Aws::Vector<ProfileQueryFailures>& GetFailures() const{ return m_failures; }
    inline void SetFailures(const Aws::Vector<ProfileQueryFailures>& value) { m_failures = value; }
    inline void SetFailures(Aws::Vector<ProfileQueryFailures>&& value) { m_failures = std::move(value); }
    inline GetSegmentMembershipResult& WithFailures(const Aws::Vector<ProfileQueryFailures>& value) { SetFailures(value); return *this;}
    inline GetSegmentMembershipResult& WithFailures(Aws::Vector<ProfileQueryFailures>&& value) { SetFailures(std::move(value)); return *this;}
    inline GetSegmentMembershipResult& AddFailures(const ProfileQueryFailures& value) { m_failures.push_back(value); return *this; }
    inline GetSegmentMembershipResult& AddFailures(ProfileQueryFailures&& value) { m_failures.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetSegmentMembershipResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetSegmentMembershipResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetSegmentMembershipResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_segmentDefinitionName;

    Aws::Vector<ProfileQueryResult> m_profiles;

    Aws::Vector<ProfileQueryFailures> m_failures;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CustomerProfiles
} // namespace Aws
