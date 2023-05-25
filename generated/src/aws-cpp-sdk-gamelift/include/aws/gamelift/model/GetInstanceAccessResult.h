/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/gamelift/GameLift_EXPORTS.h>
#include <aws/gamelift/model/InstanceAccess.h>
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
namespace GameLift
{
namespace Model
{
  class GetInstanceAccessResult
  {
  public:
    AWS_GAMELIFT_API GetInstanceAccessResult();
    AWS_GAMELIFT_API GetInstanceAccessResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GAMELIFT_API GetInstanceAccessResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The connection information for a fleet instance, including IP address and
     * access credentials.</p>
     */
    inline const InstanceAccess& GetInstanceAccess() const{ return m_instanceAccess; }

    /**
     * <p>The connection information for a fleet instance, including IP address and
     * access credentials.</p>
     */
    inline void SetInstanceAccess(const InstanceAccess& value) { m_instanceAccess = value; }

    /**
     * <p>The connection information for a fleet instance, including IP address and
     * access credentials.</p>
     */
    inline void SetInstanceAccess(InstanceAccess&& value) { m_instanceAccess = std::move(value); }

    /**
     * <p>The connection information for a fleet instance, including IP address and
     * access credentials.</p>
     */
    inline GetInstanceAccessResult& WithInstanceAccess(const InstanceAccess& value) { SetInstanceAccess(value); return *this;}

    /**
     * <p>The connection information for a fleet instance, including IP address and
     * access credentials.</p>
     */
    inline GetInstanceAccessResult& WithInstanceAccess(InstanceAccess&& value) { SetInstanceAccess(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetInstanceAccessResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetInstanceAccessResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetInstanceAccessResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    InstanceAccess m_instanceAccess;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
