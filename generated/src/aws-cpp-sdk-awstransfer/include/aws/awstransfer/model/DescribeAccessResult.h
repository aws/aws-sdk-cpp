﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/awstransfer/Transfer_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/awstransfer/model/DescribedAccess.h>
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
namespace Transfer
{
namespace Model
{
  class DescribeAccessResult
  {
  public:
    AWS_TRANSFER_API DescribeAccessResult();
    AWS_TRANSFER_API DescribeAccessResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_TRANSFER_API DescribeAccessResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A system-assigned unique identifier for a server that has this access
     * assigned.</p>
     */
    inline const Aws::String& GetServerId() const{ return m_serverId; }
    inline void SetServerId(const Aws::String& value) { m_serverId = value; }
    inline void SetServerId(Aws::String&& value) { m_serverId = std::move(value); }
    inline void SetServerId(const char* value) { m_serverId.assign(value); }
    inline DescribeAccessResult& WithServerId(const Aws::String& value) { SetServerId(value); return *this;}
    inline DescribeAccessResult& WithServerId(Aws::String&& value) { SetServerId(std::move(value)); return *this;}
    inline DescribeAccessResult& WithServerId(const char* value) { SetServerId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The external identifier of the server that the access is attached to.</p>
     */
    inline const DescribedAccess& GetAccess() const{ return m_access; }
    inline void SetAccess(const DescribedAccess& value) { m_access = value; }
    inline void SetAccess(DescribedAccess&& value) { m_access = std::move(value); }
    inline DescribeAccessResult& WithAccess(const DescribedAccess& value) { SetAccess(value); return *this;}
    inline DescribeAccessResult& WithAccess(DescribedAccess&& value) { SetAccess(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DescribeAccessResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DescribeAccessResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DescribeAccessResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_serverId;

    DescribedAccess m_access;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Transfer
} // namespace Aws
