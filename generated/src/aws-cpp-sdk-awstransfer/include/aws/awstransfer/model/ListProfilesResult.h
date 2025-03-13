/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/awstransfer/Transfer_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/awstransfer/model/ListedProfile.h>
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
namespace Transfer
{
namespace Model
{
  class ListProfilesResult
  {
  public:
    AWS_TRANSFER_API ListProfilesResult() = default;
    AWS_TRANSFER_API ListProfilesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_TRANSFER_API ListProfilesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Returns a token that you can use to call <code>ListProfiles</code> again and
     * receive additional results, if there are any.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListProfilesResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Returns an array, where each item contains the details of a profile.</p>
     */
    inline const Aws::Vector<ListedProfile>& GetProfiles() const { return m_profiles; }
    template<typename ProfilesT = Aws::Vector<ListedProfile>>
    void SetProfiles(ProfilesT&& value) { m_profilesHasBeenSet = true; m_profiles = std::forward<ProfilesT>(value); }
    template<typename ProfilesT = Aws::Vector<ListedProfile>>
    ListProfilesResult& WithProfiles(ProfilesT&& value) { SetProfiles(std::forward<ProfilesT>(value)); return *this;}
    template<typename ProfilesT = ListedProfile>
    ListProfilesResult& AddProfiles(ProfilesT&& value) { m_profilesHasBeenSet = true; m_profiles.emplace_back(std::forward<ProfilesT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListProfilesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Vector<ListedProfile> m_profiles;
    bool m_profilesHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Transfer
} // namespace Aws
