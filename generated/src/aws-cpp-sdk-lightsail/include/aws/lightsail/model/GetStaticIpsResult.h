﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class GetStaticIpsResult
  {
  public:
    AWS_LIGHTSAIL_API GetStaticIpsResult();
    AWS_LIGHTSAIL_API GetStaticIpsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LIGHTSAIL_API GetStaticIpsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An array of key-value pairs containing information about your get static IPs
     * request.</p>
     */
    inline const Aws::Vector<StaticIp>& GetStaticIps() const{ return m_staticIps; }
    inline void SetStaticIps(const Aws::Vector<StaticIp>& value) { m_staticIps = value; }
    inline void SetStaticIps(Aws::Vector<StaticIp>&& value) { m_staticIps = std::move(value); }
    inline GetStaticIpsResult& WithStaticIps(const Aws::Vector<StaticIp>& value) { SetStaticIps(value); return *this;}
    inline GetStaticIpsResult& WithStaticIps(Aws::Vector<StaticIp>&& value) { SetStaticIps(std::move(value)); return *this;}
    inline GetStaticIpsResult& AddStaticIps(const StaticIp& value) { m_staticIps.push_back(value); return *this; }
    inline GetStaticIpsResult& AddStaticIps(StaticIp&& value) { m_staticIps.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token to advance to the next page of results from your request.</p> <p>A
     * next page token is not returned if there are no more results to display.</p>
     * <p>To get the next page of results, perform another <code>GetStaticIps</code>
     * request and specify the next page token using the <code>pageToken</code>
     * parameter.</p>
     */
    inline const Aws::String& GetNextPageToken() const{ return m_nextPageToken; }
    inline void SetNextPageToken(const Aws::String& value) { m_nextPageToken = value; }
    inline void SetNextPageToken(Aws::String&& value) { m_nextPageToken = std::move(value); }
    inline void SetNextPageToken(const char* value) { m_nextPageToken.assign(value); }
    inline GetStaticIpsResult& WithNextPageToken(const Aws::String& value) { SetNextPageToken(value); return *this;}
    inline GetStaticIpsResult& WithNextPageToken(Aws::String&& value) { SetNextPageToken(std::move(value)); return *this;}
    inline GetStaticIpsResult& WithNextPageToken(const char* value) { SetNextPageToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetStaticIpsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetStaticIpsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetStaticIpsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<StaticIp> m_staticIps;

    Aws::String m_nextPageToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
