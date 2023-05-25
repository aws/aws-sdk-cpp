/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lightsail/Lightsail_EXPORTS.h>
#include <aws/lightsail/model/StaticIp.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
  class GetStaticIpResult
  {
  public:
    AWS_LIGHTSAIL_API GetStaticIpResult();
    AWS_LIGHTSAIL_API GetStaticIpResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LIGHTSAIL_API GetStaticIpResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>An array of key-value pairs containing information about the requested static
     * IP.</p>
     */
    inline const StaticIp& GetStaticIp() const{ return m_staticIp; }

    /**
     * <p>An array of key-value pairs containing information about the requested static
     * IP.</p>
     */
    inline void SetStaticIp(const StaticIp& value) { m_staticIp = value; }

    /**
     * <p>An array of key-value pairs containing information about the requested static
     * IP.</p>
     */
    inline void SetStaticIp(StaticIp&& value) { m_staticIp = std::move(value); }

    /**
     * <p>An array of key-value pairs containing information about the requested static
     * IP.</p>
     */
    inline GetStaticIpResult& WithStaticIp(const StaticIp& value) { SetStaticIp(value); return *this;}

    /**
     * <p>An array of key-value pairs containing information about the requested static
     * IP.</p>
     */
    inline GetStaticIpResult& WithStaticIp(StaticIp&& value) { SetStaticIp(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetStaticIpResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetStaticIpResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetStaticIpResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    StaticIp m_staticIp;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
