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
    AWS_TRANSFER_API ListProfilesResult();
    AWS_TRANSFER_API ListProfilesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_TRANSFER_API ListProfilesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Returns a token that you can use to call <code>ListProfiles</code> again and
     * receive additional results, if there are any.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>Returns a token that you can use to call <code>ListProfiles</code> again and
     * receive additional results, if there are any.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>Returns a token that you can use to call <code>ListProfiles</code> again and
     * receive additional results, if there are any.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>Returns a token that you can use to call <code>ListProfiles</code> again and
     * receive additional results, if there are any.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>Returns a token that you can use to call <code>ListProfiles</code> again and
     * receive additional results, if there are any.</p>
     */
    inline ListProfilesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>Returns a token that you can use to call <code>ListProfiles</code> again and
     * receive additional results, if there are any.</p>
     */
    inline ListProfilesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>Returns a token that you can use to call <code>ListProfiles</code> again and
     * receive additional results, if there are any.</p>
     */
    inline ListProfilesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>Returns an array, where each item contains the details of a profile.</p>
     */
    inline const Aws::Vector<ListedProfile>& GetProfiles() const{ return m_profiles; }

    /**
     * <p>Returns an array, where each item contains the details of a profile.</p>
     */
    inline void SetProfiles(const Aws::Vector<ListedProfile>& value) { m_profiles = value; }

    /**
     * <p>Returns an array, where each item contains the details of a profile.</p>
     */
    inline void SetProfiles(Aws::Vector<ListedProfile>&& value) { m_profiles = std::move(value); }

    /**
     * <p>Returns an array, where each item contains the details of a profile.</p>
     */
    inline ListProfilesResult& WithProfiles(const Aws::Vector<ListedProfile>& value) { SetProfiles(value); return *this;}

    /**
     * <p>Returns an array, where each item contains the details of a profile.</p>
     */
    inline ListProfilesResult& WithProfiles(Aws::Vector<ListedProfile>&& value) { SetProfiles(std::move(value)); return *this;}

    /**
     * <p>Returns an array, where each item contains the details of a profile.</p>
     */
    inline ListProfilesResult& AddProfiles(const ListedProfile& value) { m_profiles.push_back(value); return *this; }

    /**
     * <p>Returns an array, where each item contains the details of a profile.</p>
     */
    inline ListProfilesResult& AddProfiles(ListedProfile&& value) { m_profiles.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_nextToken;

    Aws::Vector<ListedProfile> m_profiles;
  };

} // namespace Model
} // namespace Transfer
} // namespace Aws
