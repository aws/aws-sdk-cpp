﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/backup-gateway/BackupGateway_EXPORTS.h>
#include <aws/backup-gateway/model/GatewayDetails.h>
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
namespace BackupGateway
{
namespace Model
{
  class GetGatewayResult
  {
  public:
    AWS_BACKUPGATEWAY_API GetGatewayResult();
    AWS_BACKUPGATEWAY_API GetGatewayResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BACKUPGATEWAY_API GetGatewayResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>By providing the ARN (Amazon Resource Name), this API returns the
     * gateway.</p>
     */
    inline const GatewayDetails& GetGateway() const{ return m_gateway; }
    inline void SetGateway(const GatewayDetails& value) { m_gateway = value; }
    inline void SetGateway(GatewayDetails&& value) { m_gateway = std::move(value); }
    inline GetGatewayResult& WithGateway(const GatewayDetails& value) { SetGateway(value); return *this;}
    inline GetGatewayResult& WithGateway(GatewayDetails&& value) { SetGateway(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetGatewayResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetGatewayResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetGatewayResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    GatewayDetails m_gateway;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace BackupGateway
} // namespace Aws
