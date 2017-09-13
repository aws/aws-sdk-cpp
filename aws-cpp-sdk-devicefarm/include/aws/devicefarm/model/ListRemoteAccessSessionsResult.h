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
#include <aws/devicefarm/DeviceFarm_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/devicefarm/model/RemoteAccessSession.h>
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
  /**
   * <p>Represents the response from the server after AWS Device Farm makes a request
   * to return information about the remote access session.</p><p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/ListRemoteAccessSessionsResult">AWS
   * API Reference</a></p>
   */
  class AWS_DEVICEFARM_API ListRemoteAccessSessionsResult
  {
  public:
    ListRemoteAccessSessionsResult();
    ListRemoteAccessSessionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ListRemoteAccessSessionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A container representing the metadata from the service about each remote
     * access session you are requesting.</p>
     */
    inline const Aws::Vector<RemoteAccessSession>& GetRemoteAccessSessions() const{ return m_remoteAccessSessions; }

    /**
     * <p>A container representing the metadata from the service about each remote
     * access session you are requesting.</p>
     */
    inline void SetRemoteAccessSessions(const Aws::Vector<RemoteAccessSession>& value) { m_remoteAccessSessions = value; }

    /**
     * <p>A container representing the metadata from the service about each remote
     * access session you are requesting.</p>
     */
    inline void SetRemoteAccessSessions(Aws::Vector<RemoteAccessSession>&& value) { m_remoteAccessSessions = std::move(value); }

    /**
     * <p>A container representing the metadata from the service about each remote
     * access session you are requesting.</p>
     */
    inline ListRemoteAccessSessionsResult& WithRemoteAccessSessions(const Aws::Vector<RemoteAccessSession>& value) { SetRemoteAccessSessions(value); return *this;}

    /**
     * <p>A container representing the metadata from the service about each remote
     * access session you are requesting.</p>
     */
    inline ListRemoteAccessSessionsResult& WithRemoteAccessSessions(Aws::Vector<RemoteAccessSession>&& value) { SetRemoteAccessSessions(std::move(value)); return *this;}

    /**
     * <p>A container representing the metadata from the service about each remote
     * access session you are requesting.</p>
     */
    inline ListRemoteAccessSessionsResult& AddRemoteAccessSessions(const RemoteAccessSession& value) { m_remoteAccessSessions.push_back(value); return *this; }

    /**
     * <p>A container representing the metadata from the service about each remote
     * access session you are requesting.</p>
     */
    inline ListRemoteAccessSessionsResult& AddRemoteAccessSessions(RemoteAccessSession&& value) { m_remoteAccessSessions.push_back(std::move(value)); return *this; }


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
    inline ListRemoteAccessSessionsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>An identifier that was returned from the previous call to this operation,
     * which can be used to return the next set of items in the list.</p>
     */
    inline ListRemoteAccessSessionsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>An identifier that was returned from the previous call to this operation,
     * which can be used to return the next set of items in the list.</p>
     */
    inline ListRemoteAccessSessionsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<RemoteAccessSession> m_remoteAccessSessions;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace DeviceFarm
} // namespace Aws
