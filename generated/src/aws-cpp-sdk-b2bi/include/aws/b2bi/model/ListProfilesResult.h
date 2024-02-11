/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/b2bi/B2BI_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/b2bi/model/ProfileSummary.h>
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
namespace B2BI
{
namespace Model
{
  class ListProfilesResult
  {
  public:
    AWS_B2BI_API ListProfilesResult();
    AWS_B2BI_API ListProfilesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_B2BI_API ListProfilesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Returns an array of <code>ProfileSummary</code> objects.</p>
     */
    inline const Aws::Vector<ProfileSummary>& GetProfiles() const{ return m_profiles; }

    /**
     * <p>Returns an array of <code>ProfileSummary</code> objects.</p>
     */
    inline void SetProfiles(const Aws::Vector<ProfileSummary>& value) { m_profiles = value; }

    /**
     * <p>Returns an array of <code>ProfileSummary</code> objects.</p>
     */
    inline void SetProfiles(Aws::Vector<ProfileSummary>&& value) { m_profiles = std::move(value); }

    /**
     * <p>Returns an array of <code>ProfileSummary</code> objects.</p>
     */
    inline ListProfilesResult& WithProfiles(const Aws::Vector<ProfileSummary>& value) { SetProfiles(value); return *this;}

    /**
     * <p>Returns an array of <code>ProfileSummary</code> objects.</p>
     */
    inline ListProfilesResult& WithProfiles(Aws::Vector<ProfileSummary>&& value) { SetProfiles(std::move(value)); return *this;}

    /**
     * <p>Returns an array of <code>ProfileSummary</code> objects.</p>
     */
    inline ListProfilesResult& AddProfiles(const ProfileSummary& value) { m_profiles.push_back(value); return *this; }

    /**
     * <p>Returns an array of <code>ProfileSummary</code> objects.</p>
     */
    inline ListProfilesResult& AddProfiles(ProfileSummary&& value) { m_profiles.push_back(std::move(value)); return *this; }


    /**
     * <p>When additional results are obtained from the command, a
     * <code>NextToken</code> parameter is returned in the output. You can then pass
     * the <code>NextToken</code> parameter in a subsequent command to continue listing
     * additional resources.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>When additional results are obtained from the command, a
     * <code>NextToken</code> parameter is returned in the output. You can then pass
     * the <code>NextToken</code> parameter in a subsequent command to continue listing
     * additional resources.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>When additional results are obtained from the command, a
     * <code>NextToken</code> parameter is returned in the output. You can then pass
     * the <code>NextToken</code> parameter in a subsequent command to continue listing
     * additional resources.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>When additional results are obtained from the command, a
     * <code>NextToken</code> parameter is returned in the output. You can then pass
     * the <code>NextToken</code> parameter in a subsequent command to continue listing
     * additional resources.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>When additional results are obtained from the command, a
     * <code>NextToken</code> parameter is returned in the output. You can then pass
     * the <code>NextToken</code> parameter in a subsequent command to continue listing
     * additional resources.</p>
     */
    inline ListProfilesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>When additional results are obtained from the command, a
     * <code>NextToken</code> parameter is returned in the output. You can then pass
     * the <code>NextToken</code> parameter in a subsequent command to continue listing
     * additional resources.</p>
     */
    inline ListProfilesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>When additional results are obtained from the command, a
     * <code>NextToken</code> parameter is returned in the output. You can then pass
     * the <code>NextToken</code> parameter in a subsequent command to continue listing
     * additional resources.</p>
     */
    inline ListProfilesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ListProfilesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ListProfilesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ListProfilesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<ProfileSummary> m_profiles;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace B2BI
} // namespace Aws
