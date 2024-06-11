﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/backup-gateway/BackupGateway_EXPORTS.h>
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
  class UpdateGatewaySoftwareNowResult
  {
  public:
    AWS_BACKUPGATEWAY_API UpdateGatewaySoftwareNowResult();
    AWS_BACKUPGATEWAY_API UpdateGatewaySoftwareNowResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BACKUPGATEWAY_API UpdateGatewaySoftwareNowResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the gateway you updated.</p>
     */
    inline const Aws::String& GetGatewayArn() const{ return m_gatewayArn; }
    inline void SetGatewayArn(const Aws::String& value) { m_gatewayArn = value; }
    inline void SetGatewayArn(Aws::String&& value) { m_gatewayArn = std::move(value); }
    inline void SetGatewayArn(const char* value) { m_gatewayArn.assign(value); }
    inline UpdateGatewaySoftwareNowResult& WithGatewayArn(const Aws::String& value) { SetGatewayArn(value); return *this;}
    inline UpdateGatewaySoftwareNowResult& WithGatewayArn(Aws::String&& value) { SetGatewayArn(std::move(value)); return *this;}
    inline UpdateGatewaySoftwareNowResult& WithGatewayArn(const char* value) { SetGatewayArn(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline UpdateGatewaySoftwareNowResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline UpdateGatewaySoftwareNowResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline UpdateGatewaySoftwareNowResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_gatewayArn;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace BackupGateway
} // namespace Aws
