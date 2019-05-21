/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/alexaforbusiness/AlexaForBusiness_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/alexaforbusiness/model/NetworkProfileData.h>
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
namespace AlexaForBusiness
{
namespace Model
{
  class AWS_ALEXAFORBUSINESS_API SearchNetworkProfilesResult
  {
  public:
    SearchNetworkProfilesResult();
    SearchNetworkProfilesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    SearchNetworkProfilesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The network profiles that meet the specified set of filter criteria, in sort
     * order. It is a list of NetworkProfileData objects. </p>
     */
    inline const Aws::Vector<NetworkProfileData>& GetNetworkProfiles() const{ return m_networkProfiles; }

    /**
     * <p>The network profiles that meet the specified set of filter criteria, in sort
     * order. It is a list of NetworkProfileData objects. </p>
     */
    inline void SetNetworkProfiles(const Aws::Vector<NetworkProfileData>& value) { m_networkProfiles = value; }

    /**
     * <p>The network profiles that meet the specified set of filter criteria, in sort
     * order. It is a list of NetworkProfileData objects. </p>
     */
    inline void SetNetworkProfiles(Aws::Vector<NetworkProfileData>&& value) { m_networkProfiles = std::move(value); }

    /**
     * <p>The network profiles that meet the specified set of filter criteria, in sort
     * order. It is a list of NetworkProfileData objects. </p>
     */
    inline SearchNetworkProfilesResult& WithNetworkProfiles(const Aws::Vector<NetworkProfileData>& value) { SetNetworkProfiles(value); return *this;}

    /**
     * <p>The network profiles that meet the specified set of filter criteria, in sort
     * order. It is a list of NetworkProfileData objects. </p>
     */
    inline SearchNetworkProfilesResult& WithNetworkProfiles(Aws::Vector<NetworkProfileData>&& value) { SetNetworkProfiles(std::move(value)); return *this;}

    /**
     * <p>The network profiles that meet the specified set of filter criteria, in sort
     * order. It is a list of NetworkProfileData objects. </p>
     */
    inline SearchNetworkProfilesResult& AddNetworkProfiles(const NetworkProfileData& value) { m_networkProfiles.push_back(value); return *this; }

    /**
     * <p>The network profiles that meet the specified set of filter criteria, in sort
     * order. It is a list of NetworkProfileData objects. </p>
     */
    inline SearchNetworkProfilesResult& AddNetworkProfiles(NetworkProfileData&& value) { m_networkProfiles.push_back(std::move(value)); return *this; }


    /**
     * <p>An optional token returned from a prior request. Use this token for
     * pagination of results from this action. If this parameter is specified, the
     * response includes only results beyond the token, up to the value specified by
     * MaxResults.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>An optional token returned from a prior request. Use this token for
     * pagination of results from this action. If this parameter is specified, the
     * response includes only results beyond the token, up to the value specified by
     * MaxResults.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>An optional token returned from a prior request. Use this token for
     * pagination of results from this action. If this parameter is specified, the
     * response includes only results beyond the token, up to the value specified by
     * MaxResults.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>An optional token returned from a prior request. Use this token for
     * pagination of results from this action. If this parameter is specified, the
     * response includes only results beyond the token, up to the value specified by
     * MaxResults.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>An optional token returned from a prior request. Use this token for
     * pagination of results from this action. If this parameter is specified, the
     * response includes only results beyond the token, up to the value specified by
     * MaxResults.</p>
     */
    inline SearchNetworkProfilesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>An optional token returned from a prior request. Use this token for
     * pagination of results from this action. If this parameter is specified, the
     * response includes only results beyond the token, up to the value specified by
     * MaxResults.</p>
     */
    inline SearchNetworkProfilesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>An optional token returned from a prior request. Use this token for
     * pagination of results from this action. If this parameter is specified, the
     * response includes only results beyond the token, up to the value specified by
     * MaxResults.</p>
     */
    inline SearchNetworkProfilesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The total number of network profiles returned.</p>
     */
    inline int GetTotalCount() const{ return m_totalCount; }

    /**
     * <p>The total number of network profiles returned.</p>
     */
    inline void SetTotalCount(int value) { m_totalCount = value; }

    /**
     * <p>The total number of network profiles returned.</p>
     */
    inline SearchNetworkProfilesResult& WithTotalCount(int value) { SetTotalCount(value); return *this;}

  private:

    Aws::Vector<NetworkProfileData> m_networkProfiles;

    Aws::String m_nextToken;

    int m_totalCount;
  };

} // namespace Model
} // namespace AlexaForBusiness
} // namespace Aws
