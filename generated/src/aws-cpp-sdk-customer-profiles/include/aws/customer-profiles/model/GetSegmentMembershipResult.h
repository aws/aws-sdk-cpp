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
    AWS_CUSTOMERPROFILES_API GetSegmentMembershipResult() = default;
    AWS_CUSTOMERPROFILES_API GetSegmentMembershipResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CUSTOMERPROFILES_API GetSegmentMembershipResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The unique name of the segment definition.</p>
     */
    inline const Aws::String& GetSegmentDefinitionName() const { return m_segmentDefinitionName; }
    template<typename SegmentDefinitionNameT = Aws::String>
    void SetSegmentDefinitionName(SegmentDefinitionNameT&& value) { m_segmentDefinitionNameHasBeenSet = true; m_segmentDefinitionName = std::forward<SegmentDefinitionNameT>(value); }
    template<typename SegmentDefinitionNameT = Aws::String>
    GetSegmentMembershipResult& WithSegmentDefinitionName(SegmentDefinitionNameT&& value) { SetSegmentDefinitionName(std::forward<SegmentDefinitionNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of maps where each contains a response per profile requested.</p>
     */
    inline const Aws::Vector<ProfileQueryResult>& GetProfiles() const { return m_profiles; }
    template<typename ProfilesT = Aws::Vector<ProfileQueryResult>>
    void SetProfiles(ProfilesT&& value) { m_profilesHasBeenSet = true; m_profiles = std::forward<ProfilesT>(value); }
    template<typename ProfilesT = Aws::Vector<ProfileQueryResult>>
    GetSegmentMembershipResult& WithProfiles(ProfilesT&& value) { SetProfiles(std::forward<ProfilesT>(value)); return *this;}
    template<typename ProfilesT = ProfileQueryResult>
    GetSegmentMembershipResult& AddProfiles(ProfilesT&& value) { m_profilesHasBeenSet = true; m_profiles.emplace_back(std::forward<ProfilesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>An array of maps where each contains a response per profile failed for the
     * request.</p>
     */
    inline const Aws::Vector<ProfileQueryFailures>& GetFailures() const { return m_failures; }
    template<typename FailuresT = Aws::Vector<ProfileQueryFailures>>
    void SetFailures(FailuresT&& value) { m_failuresHasBeenSet = true; m_failures = std::forward<FailuresT>(value); }
    template<typename FailuresT = Aws::Vector<ProfileQueryFailures>>
    GetSegmentMembershipResult& WithFailures(FailuresT&& value) { SetFailures(std::forward<FailuresT>(value)); return *this;}
    template<typename FailuresT = ProfileQueryFailures>
    GetSegmentMembershipResult& AddFailures(FailuresT&& value) { m_failuresHasBeenSet = true; m_failures.emplace_back(std::forward<FailuresT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetSegmentMembershipResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_segmentDefinitionName;
    bool m_segmentDefinitionNameHasBeenSet = false;

    Aws::Vector<ProfileQueryResult> m_profiles;
    bool m_profilesHasBeenSet = false;

    Aws::Vector<ProfileQueryFailures> m_failures;
    bool m_failuresHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CustomerProfiles
} // namespace Aws
