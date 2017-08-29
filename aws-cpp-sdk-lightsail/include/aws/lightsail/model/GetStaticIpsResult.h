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
#include <aws/lightsail/Lightsail_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lightsail/model/StaticIp.h>
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
namespace Lightsail
{
namespace Model
{
  class AWS_LIGHTSAIL_API GetStaticIpsResult
  {
  public:
    GetStaticIpsResult();
    GetStaticIpsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetStaticIpsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>An array of key-value pairs containing information about your get static IPs
     * request.</p>
     */
    inline const Aws::Vector<StaticIp>& GetStaticIps() const{ return m_staticIps; }

    /**
     * <p>An array of key-value pairs containing information about your get static IPs
     * request.</p>
     */
    inline void SetStaticIps(const Aws::Vector<StaticIp>& value) { m_staticIps = value; }

    /**
     * <p>An array of key-value pairs containing information about your get static IPs
     * request.</p>
     */
    inline void SetStaticIps(Aws::Vector<StaticIp>&& value) { m_staticIps = std::move(value); }

    /**
     * <p>An array of key-value pairs containing information about your get static IPs
     * request.</p>
     */
    inline GetStaticIpsResult& WithStaticIps(const Aws::Vector<StaticIp>& value) { SetStaticIps(value); return *this;}

    /**
     * <p>An array of key-value pairs containing information about your get static IPs
     * request.</p>
     */
    inline GetStaticIpsResult& WithStaticIps(Aws::Vector<StaticIp>&& value) { SetStaticIps(std::move(value)); return *this;}

    /**
     * <p>An array of key-value pairs containing information about your get static IPs
     * request.</p>
     */
    inline GetStaticIpsResult& AddStaticIps(const StaticIp& value) { m_staticIps.push_back(value); return *this; }

    /**
     * <p>An array of key-value pairs containing information about your get static IPs
     * request.</p>
     */
    inline GetStaticIpsResult& AddStaticIps(StaticIp&& value) { m_staticIps.push_back(std::move(value)); return *this; }


    /**
     * <p>A token used for advancing to the next page of results from your get static
     * IPs request.</p>
     */
    inline const Aws::String& GetNextPageToken() const{ return m_nextPageToken; }

    /**
     * <p>A token used for advancing to the next page of results from your get static
     * IPs request.</p>
     */
    inline void SetNextPageToken(const Aws::String& value) { m_nextPageToken = value; }

    /**
     * <p>A token used for advancing to the next page of results from your get static
     * IPs request.</p>
     */
    inline void SetNextPageToken(Aws::String&& value) { m_nextPageToken = std::move(value); }

    /**
     * <p>A token used for advancing to the next page of results from your get static
     * IPs request.</p>
     */
    inline void SetNextPageToken(const char* value) { m_nextPageToken.assign(value); }

    /**
     * <p>A token used for advancing to the next page of results from your get static
     * IPs request.</p>
     */
    inline GetStaticIpsResult& WithNextPageToken(const Aws::String& value) { SetNextPageToken(value); return *this;}

    /**
     * <p>A token used for advancing to the next page of results from your get static
     * IPs request.</p>
     */
    inline GetStaticIpsResult& WithNextPageToken(Aws::String&& value) { SetNextPageToken(std::move(value)); return *this;}

    /**
     * <p>A token used for advancing to the next page of results from your get static
     * IPs request.</p>
     */
    inline GetStaticIpsResult& WithNextPageToken(const char* value) { SetNextPageToken(value); return *this;}

  private:

    Aws::Vector<StaticIp> m_staticIps;

    Aws::String m_nextPageToken;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
