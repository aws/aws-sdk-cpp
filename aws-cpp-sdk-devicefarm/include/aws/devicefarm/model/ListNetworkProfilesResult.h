/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/devicefarm/DeviceFarm_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/devicefarm/model/NetworkProfile.h>
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
namespace DeviceFarm
{
namespace Model
{
  class ListNetworkProfilesResult
  {
  public:
    AWS_DEVICEFARM_API ListNetworkProfilesResult();
    AWS_DEVICEFARM_API ListNetworkProfilesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DEVICEFARM_API ListNetworkProfilesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list of the available network profiles.</p>
     */
    inline const Aws::Vector<NetworkProfile>& GetNetworkProfiles() const{ return m_networkProfiles; }

    /**
     * <p>A list of the available network profiles.</p>
     */
    inline void SetNetworkProfiles(const Aws::Vector<NetworkProfile>& value) { m_networkProfiles = value; }

    /**
     * <p>A list of the available network profiles.</p>
     */
    inline void SetNetworkProfiles(Aws::Vector<NetworkProfile>&& value) { m_networkProfiles = std::move(value); }

    /**
     * <p>A list of the available network profiles.</p>
     */
    inline ListNetworkProfilesResult& WithNetworkProfiles(const Aws::Vector<NetworkProfile>& value) { SetNetworkProfiles(value); return *this;}

    /**
     * <p>A list of the available network profiles.</p>
     */
    inline ListNetworkProfilesResult& WithNetworkProfiles(Aws::Vector<NetworkProfile>&& value) { SetNetworkProfiles(std::move(value)); return *this;}

    /**
     * <p>A list of the available network profiles.</p>
     */
    inline ListNetworkProfilesResult& AddNetworkProfiles(const NetworkProfile& value) { m_networkProfiles.push_back(value); return *this; }

    /**
     * <p>A list of the available network profiles.</p>
     */
    inline ListNetworkProfilesResult& AddNetworkProfiles(NetworkProfile&& value) { m_networkProfiles.push_back(std::move(value)); return *this; }


    /**
     * <p>An identifier that was returned from the previous call to this operation,
     * which can be used to return the next set of items in the list.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>An identifier that was returned from the previous call to this operation,
     * which can be used to return the next set of items in the list.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>An identifier that was returned from the previous call to this operation,
     * which can be used to return the next set of items in the list.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>An identifier that was returned from the previous call to this operation,
     * which can be used to return the next set of items in the list.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>An identifier that was returned from the previous call to this operation,
     * which can be used to return the next set of items in the list.</p>
     */
    inline ListNetworkProfilesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>An identifier that was returned from the previous call to this operation,
     * which can be used to return the next set of items in the list.</p>
     */
    inline ListNetworkProfilesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>An identifier that was returned from the previous call to this operation,
     * which can be used to return the next set of items in the list.</p>
     */
    inline ListNetworkProfilesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<NetworkProfile> m_networkProfiles;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace DeviceFarm
} // namespace Aws
