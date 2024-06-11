﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotsitewise/IoTSiteWise_EXPORTS.h>
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
namespace IoTSiteWise
{
namespace Model
{
  class CreateGatewayResult
  {
  public:
    AWS_IOTSITEWISE_API CreateGatewayResult();
    AWS_IOTSITEWISE_API CreateGatewayResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTSITEWISE_API CreateGatewayResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ID of the gateway device. You can use this ID when you call other IoT
     * SiteWise API operations.</p>
     */
    inline const Aws::String& GetGatewayId() const{ return m_gatewayId; }
    inline void SetGatewayId(const Aws::String& value) { m_gatewayId = value; }
    inline void SetGatewayId(Aws::String&& value) { m_gatewayId = std::move(value); }
    inline void SetGatewayId(const char* value) { m_gatewayId.assign(value); }
    inline CreateGatewayResult& WithGatewayId(const Aws::String& value) { SetGatewayId(value); return *this;}
    inline CreateGatewayResult& WithGatewayId(Aws::String&& value) { SetGatewayId(std::move(value)); return *this;}
    inline CreateGatewayResult& WithGatewayId(const char* value) { SetGatewayId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">ARN</a>
     * of the gateway, which has the following format.</p> <p>
     * <code>arn:${Partition}:iotsitewise:${Region}:${Account}:gateway/${GatewayId}</code>
     * </p>
     */
    inline const Aws::String& GetGatewayArn() const{ return m_gatewayArn; }
    inline void SetGatewayArn(const Aws::String& value) { m_gatewayArn = value; }
    inline void SetGatewayArn(Aws::String&& value) { m_gatewayArn = std::move(value); }
    inline void SetGatewayArn(const char* value) { m_gatewayArn.assign(value); }
    inline CreateGatewayResult& WithGatewayArn(const Aws::String& value) { SetGatewayArn(value); return *this;}
    inline CreateGatewayResult& WithGatewayArn(Aws::String&& value) { SetGatewayArn(std::move(value)); return *this;}
    inline CreateGatewayResult& WithGatewayArn(const char* value) { SetGatewayArn(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline CreateGatewayResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline CreateGatewayResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline CreateGatewayResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_gatewayId;

    Aws::String m_gatewayArn;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
