﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lightsail/Lightsail_EXPORTS.h>
#include <aws/lightsail/model/Operation.h>
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
  class PeerVpcResult
  {
  public:
    AWS_LIGHTSAIL_API PeerVpcResult();
    AWS_LIGHTSAIL_API PeerVpcResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LIGHTSAIL_API PeerVpcResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An array of objects that describe the result of the action, such as the
     * status of the request, the timestamp of the request, and the resources affected
     * by the request.</p>
     */
    inline const Operation& GetOperation() const{ return m_operation; }
    inline void SetOperation(const Operation& value) { m_operation = value; }
    inline void SetOperation(Operation&& value) { m_operation = std::move(value); }
    inline PeerVpcResult& WithOperation(const Operation& value) { SetOperation(value); return *this;}
    inline PeerVpcResult& WithOperation(Operation&& value) { SetOperation(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline PeerVpcResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline PeerVpcResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline PeerVpcResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Operation m_operation;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
