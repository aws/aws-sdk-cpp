﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
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
namespace Connect
{
namespace Model
{
  class CreateRoutingProfileResult
  {
  public:
    AWS_CONNECT_API CreateRoutingProfileResult();
    AWS_CONNECT_API CreateRoutingProfileResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONNECT_API CreateRoutingProfileResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the routing profile.</p>
     */
    inline const Aws::String& GetRoutingProfileArn() const{ return m_routingProfileArn; }
    inline void SetRoutingProfileArn(const Aws::String& value) { m_routingProfileArn = value; }
    inline void SetRoutingProfileArn(Aws::String&& value) { m_routingProfileArn = std::move(value); }
    inline void SetRoutingProfileArn(const char* value) { m_routingProfileArn.assign(value); }
    inline CreateRoutingProfileResult& WithRoutingProfileArn(const Aws::String& value) { SetRoutingProfileArn(value); return *this;}
    inline CreateRoutingProfileResult& WithRoutingProfileArn(Aws::String&& value) { SetRoutingProfileArn(std::move(value)); return *this;}
    inline CreateRoutingProfileResult& WithRoutingProfileArn(const char* value) { SetRoutingProfileArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the routing profile.</p>
     */
    inline const Aws::String& GetRoutingProfileId() const{ return m_routingProfileId; }
    inline void SetRoutingProfileId(const Aws::String& value) { m_routingProfileId = value; }
    inline void SetRoutingProfileId(Aws::String&& value) { m_routingProfileId = std::move(value); }
    inline void SetRoutingProfileId(const char* value) { m_routingProfileId.assign(value); }
    inline CreateRoutingProfileResult& WithRoutingProfileId(const Aws::String& value) { SetRoutingProfileId(value); return *this;}
    inline CreateRoutingProfileResult& WithRoutingProfileId(Aws::String&& value) { SetRoutingProfileId(std::move(value)); return *this;}
    inline CreateRoutingProfileResult& WithRoutingProfileId(const char* value) { SetRoutingProfileId(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline CreateRoutingProfileResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline CreateRoutingProfileResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline CreateRoutingProfileResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_routingProfileArn;

    Aws::String m_routingProfileId;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
